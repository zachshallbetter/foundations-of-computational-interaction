#include "cis.h"

#include <limits.h>

static void zero_bytes(void *target, size_t count)
{
    volatile uint8_t *bytes = (volatile uint8_t *)target;
    size_t index;
    for (index = 0u; index < count; ++index) {
        bytes[index] = 0u;
    }
}

static void copy_bytes(void *target, const void *source, size_t count)
{
    volatile uint8_t *destination = (volatile uint8_t *)target;
    const volatile uint8_t *origin = (const volatile uint8_t *)source;
    size_t index;
    for (index = 0u; index < count; ++index) {
        destination[index] = origin[index];
    }
}

static int name_copy(char target[CIS_NAME_CAP], const char *source)
{
    size_t index = 0u;
    if (source == NULL || source[0] == '\0') {
        return 0;
    }
    while (source[index] != '\0' && index + 1u < CIS_NAME_CAP) {
        target[index] = source[index];
        ++index;
    }
    if (source[index] != '\0') {
        target[0] = '\0';
        return 0;
    }
    target[index] = '\0';
    return 1;
}

static int name_equal(const char *left, const char *right)
{
    size_t index = 0u;
    while (left[index] != '\0' && right[index] != '\0') {
        if (left[index] != right[index]) {
            return 0;
        }
        ++index;
    }
    return left[index] == right[index];
}

static int predicate_holds(const CisState *state, const CisPredicate *predicate)
{
    int64_t actual;
    if (state == NULL || predicate == NULL ||
        predicate->state_index >= state->count) {
        return 0;
    }
    actual = state->values[predicate->state_index];
    switch (predicate->operation) {
    case CIS_PRED_EQ: return actual == predicate->value;
    case CIS_PRED_NE: return actual != predicate->value;
    case CIS_PRED_LT: return actual < predicate->value;
    case CIS_PRED_LE: return actual <= predicate->value;
    case CIS_PRED_GT: return actual > predicate->value;
    case CIS_PRED_GE: return actual >= predicate->value;
    default: return 0;
    }
}

static CisResult state_valid(const CisDomain *domain, const CisState *state)
{
    uint8_t index;
    if (domain == NULL || state == NULL ||
        state->count != domain->variable_count) {
        return CIS_ERR_ARGUMENT;
    }
    for (index = 0u; index < state->count; ++index) {
        if (state->values[index] < domain->variables[index].minimum ||
            state->values[index] > domain->variables[index].maximum) {
            return CIS_ERR_BOUNDS;
        }
    }
    for (index = 0u; index < domain->invariant_count; ++index) {
        if (!predicate_holds(state, &domain->invariants[index])) {
            return CIS_ERR_INVARIANT;
        }
    }
    return CIS_OK;
}

static int add_i64(int64_t left, int64_t right, int64_t *out)
{
    if ((right > 0 && left > INT64_MAX - right) ||
        (right < 0 && left < INT64_MIN - right)) {
        return 0;
    }
    *out = left + right;
    return 1;
}

static int multiply_i64(int64_t left, int64_t right, int64_t *out)
{
    if (left == 0 || right == 0) {
        *out = 0;
        return 1;
    }
    if ((left == INT64_MIN && right == -1) ||
        (right == INT64_MIN && left == -1)) {
        return 0;
    }
    if (left > 0) {
        if ((right > 0 && left > INT64_MAX / right) ||
            (right < 0 && right < INT64_MIN / left)) {
            return 0;
        }
    } else if ((right > 0 && left < INT64_MIN / right) ||
               (right < 0 && left < INT64_MAX / right)) {
        return 0;
    }
    *out = left * right;
    return 1;
}

static CisResult apply_action(const CisDomain *domain, const CisAction *action,
                              const CisState *before, CisState *after)
{
    uint8_t index;
    CisResult valid;
    for (index = 0u; index < action->precondition_count; ++index) {
        if (!predicate_holds(before, &action->preconditions[index])) {
            return CIS_ERR_DISABLED;
        }
    }
    *after = *before;
    for (index = 0u; index < action->effect_count; ++index) {
        const CisEffect *effect = &action->effects[index];
        int64_t value;
        if (effect->state_index >= after->count) {
            return CIS_ERR_ARGUMENT;
        }
        if (effect->operation == CIS_EFFECT_SET) {
            value = effect->value;
        } else if (effect->operation == CIS_EFFECT_ADD) {
            if (!add_i64(after->values[effect->state_index], effect->value,
                         &value)) {
                return CIS_ERR_OVERFLOW;
            }
        } else {
            return CIS_ERR_ARGUMENT;
        }
        after->values[effect->state_index] = value;
    }
    valid = state_valid(domain, after);
    return valid;
}

void cis_domain_init(CisDomain *domain)
{
    if (domain != NULL) {
        zero_bytes(domain, sizeof(*domain));
    }
}

CisResult cis_domain_add_variable(CisDomain *domain, const char *name,
                                  int64_t minimum, int64_t maximum,
                                  uint8_t *index_out)
{
    uint8_t index;
    CisStateVariable *variable;
    if (domain == NULL || name == NULL || minimum > maximum) {
        return CIS_ERR_ARGUMENT;
    }
    if (domain->variable_count >= CIS_MAX_STATE) {
        return CIS_ERR_CAPACITY;
    }
    for (index = 0u; index < domain->variable_count; ++index) {
        if (name_equal(domain->variables[index].name, name)) {
            return CIS_ERR_DUPLICATE;
        }
    }
    variable = &domain->variables[domain->variable_count];
    if (!name_copy(variable->name, name)) {
        return CIS_ERR_ARGUMENT;
    }
    variable->minimum = minimum;
    variable->maximum = maximum;
    if (index_out != NULL) {
        *index_out = domain->variable_count;
    }
    ++domain->variable_count;
    return CIS_OK;
}

void cis_action_init(CisAction *action, const char *name)
{
    if (action != NULL) {
        zero_bytes(action, sizeof(*action));
        action->reverse_action = -1;
        if (name != NULL) {
            (void)name_copy(action->name, name);
        }
    }
}

CisResult cis_action_add_precondition(CisAction *action,
                                      CisPredicate predicate)
{
    if (action == NULL || predicate.operation > CIS_PRED_GE) {
        return CIS_ERR_ARGUMENT;
    }
    if (action->precondition_count >= CIS_MAX_PRECONDITIONS) {
        return CIS_ERR_CAPACITY;
    }
    action->preconditions[action->precondition_count++] = predicate;
    return CIS_OK;
}

CisResult cis_action_add_effect(CisAction *action, CisEffect effect)
{
    if (action == NULL || effect.operation > CIS_EFFECT_ADD) {
        return CIS_ERR_ARGUMENT;
    }
    if (action->effect_count >= CIS_MAX_EFFECTS) {
        return CIS_ERR_CAPACITY;
    }
    action->effects[action->effect_count++] = effect;
    return CIS_OK;
}

CisResult cis_domain_add_action(CisDomain *domain, const CisAction *action,
                                uint8_t *index_out)
{
    uint8_t index;
    if (domain == NULL || action == NULL || action->name[0] == '\0' ||
        action->precondition_count > CIS_MAX_PRECONDITIONS ||
        action->effect_count > CIS_MAX_EFFECTS || action->reverse_action < -1) {
        return CIS_ERR_ARGUMENT;
    }
    if (domain->action_count >= CIS_MAX_ACTIONS) {
        return CIS_ERR_CAPACITY;
    }
    for (index = 0u; index < domain->action_count; ++index) {
        if (name_equal(domain->actions[index].name, action->name)) {
            return CIS_ERR_DUPLICATE;
        }
    }
    for (index = 0u; index < action->precondition_count; ++index) {
        if (action->preconditions[index].state_index >= domain->variable_count) {
            return CIS_ERR_ARGUMENT;
        }
    }
    for (index = 0u; index < action->effect_count; ++index) {
        if (action->effects[index].state_index >= domain->variable_count) {
            return CIS_ERR_ARGUMENT;
        }
    }
    copy_bytes(&domain->actions[domain->action_count], action, sizeof(*action));
    if (index_out != NULL) {
        *index_out = domain->action_count;
    }
    ++domain->action_count;
    return CIS_OK;
}

CisResult cis_domain_add_invariant(CisDomain *domain, CisPredicate invariant)
{
    if (domain == NULL || invariant.state_index >= domain->variable_count ||
        invariant.operation > CIS_PRED_GE) {
        return CIS_ERR_ARGUMENT;
    }
    if (domain->invariant_count >= CIS_MAX_INVARIANTS) {
        return CIS_ERR_CAPACITY;
    }
    domain->invariants[domain->invariant_count++] = invariant;
    return CIS_OK;
}

CisResult cis_system_init(CisSystem *system, const CisDomain *domain,
                          const CisState *initial_state)
{
    CisResult valid;
    uint8_t index;
    if (system == NULL || domain == NULL || initial_state == NULL ||
        domain->variable_count > CIS_MAX_STATE ||
        domain->action_count > CIS_MAX_ACTIONS) {
        return CIS_ERR_ARGUMENT;
    }
    for (index = 0u; index < domain->action_count; ++index) {
        int8_t reverse = domain->actions[index].reverse_action;
        if (reverse >= (int8_t)domain->action_count) {
            return CIS_ERR_ARGUMENT;
        }
    }
    valid = state_valid(domain, initial_state);
    if (valid != CIS_OK) {
        return valid;
    }
    zero_bytes(system, sizeof(*system));
    copy_bytes(&system->domain, domain, sizeof(*domain));
    system->initial_state = *initial_state;
    system->state = *initial_state;
    return CIS_OK;
}

CisResult cis_system_add_participant(CisSystem *system, const char *name,
                                     uint8_t role, uint32_t capabilities,
                                     uint8_t *index_out)
{
    uint8_t index;
    CisParticipant *participant;
    if (system == NULL || name == NULL || role >= 32u) {
        return CIS_ERR_ARGUMENT;
    }
    if (system->participant_count >= CIS_MAX_PARTICIPANTS) {
        return CIS_ERR_CAPACITY;
    }
    for (index = 0u; index < system->participant_count; ++index) {
        if (name_equal(system->participants[index].name, name)) {
            return CIS_ERR_DUPLICATE;
        }
    }
    participant = &system->participants[system->participant_count];
    if (!name_copy(participant->name, name)) {
        return CIS_ERR_ARGUMENT;
    }
    participant->role = role;
    participant->capabilities = capabilities;
    if (index_out != NULL) {
        *index_out = system->participant_count;
    }
    ++system->participant_count;
    return CIS_OK;
}

uint64_t cis_state_hash(const CisState *state)
{
    uint64_t hash = UINT64_C(14695981039346656037);
    uint8_t index;
    uint8_t byte;
    if (state == NULL) {
        return 0u;
    }
    hash ^= state->count;
    hash *= UINT64_C(1099511628211);
    for (index = 0u; index < state->count; ++index) {
        uint64_t value = (uint64_t)state->values[index];
        for (byte = 0u; byte < 8u; ++byte) {
            hash ^= (value >> (byte * 8u)) & UINT64_C(255);
            hash *= UINT64_C(1099511628211);
        }
    }
    return hash;
}

CisResult cis_execute(CisSystem *system, uint8_t participant_index,
                      uint8_t action_index, uint64_t tick)
{
    CisEvent *event;
    const CisParticipant *participant;
    const CisAction *action;
    CisState candidate;
    CisResult result;
    if (system == NULL || participant_index >= system->participant_count ||
        action_index >= system->domain.action_count) {
        return CIS_ERR_ARGUMENT;
    }
    if (system->trace_count > 0u &&
        tick < system->trace[system->trace_count - 1u].tick) {
        return CIS_ERR_ARGUMENT;
    }
    if (system->trace_count >= CIS_MAX_TRACE) {
        return CIS_ERR_CAPACITY;
    }
    participant = &system->participants[participant_index];
    action = &system->domain.actions[action_index];
    event = &system->trace[system->trace_count];
    zero_bytes(event, sizeof(*event));
    event->schema_version = CIS_TRACE_SCHEMA_VERSION;
    event->sequence = system->trace_count;
    event->tick = tick;
    event->participant_index = participant_index;
    event->action_index = action_index;
    event->before_hash = cis_state_hash(&system->state);
    if ((participant->capabilities & action->required_capabilities) !=
        action->required_capabilities) {
        result = CIS_ERR_CAPABILITY;
    } else if ((action->permitted_roles & (UINT32_C(1) << participant->role)) == 0u) {
        result = CIS_ERR_PERMISSION;
    } else {
        result = apply_action(&system->domain, action, &system->state, &candidate);
        if (result == CIS_OK) {
            system->state = candidate;
            event->status = CIS_EVENT_EXECUTED;
        }
    }
    event->result = result;
    event->after_hash = cis_state_hash(&system->state);
    ++system->trace_count;
    return result;
}

CisResult cis_record_outcome(CisSystem *system, uint32_t sequence,
                             CisOutcome outcome)
{
    CisEvent *event;
    if (system == NULL || sequence >= system->trace_count ||
        outcome == CIS_OUTCOME_UNKNOWN || outcome > CIS_OUTCOME_SUCCESS) {
        return CIS_ERR_ARGUMENT;
    }
    event = &system->trace[sequence];
    if (event->status != CIS_EVENT_EXECUTED) {
        return CIS_ERR_ARGUMENT;
    }
    if (event->outcome != CIS_OUTCOME_UNKNOWN) {
        return CIS_ERR_DUPLICATE;
    }
    event->outcome = outcome;
    return CIS_OK;
}

CisResult cis_replay(const CisSystem *system, CisState *state_out)
{
    CisState current;
    uint16_t index;
    if (system == NULL || state_out == NULL) {
        return CIS_ERR_ARGUMENT;
    }
    current = system->initial_state;
    for (index = 0u; index < system->trace_count; ++index) {
        const CisEvent *event = &system->trace[index];
        CisState candidate;
        CisResult result;
        if (event->schema_version != CIS_TRACE_SCHEMA_VERSION) {
            return CIS_ERR_REPLAY_DIVERGED;
        }
        if (cis_state_hash(&current) != event->before_hash) {
            return CIS_ERR_REPLAY_DIVERGED;
        }
        if (event->status == CIS_EVENT_EXECUTED) {
            if (event->action_index >= system->domain.action_count) {
                return CIS_ERR_REPLAY_DIVERGED;
            }
            result = apply_action(&system->domain,
                                  &system->domain.actions[event->action_index],
                                  &current, &candidate);
            if (result != CIS_OK) {
                return CIS_ERR_REPLAY_DIVERGED;
            }
            current = candidate;
        }
        if (cis_state_hash(&current) != event->after_hash) {
            return CIS_ERR_REPLAY_DIVERGED;
        }
    }
    *state_out = current;
    return CIS_OK;
}

void cis_projection_init(CisProjection *projection)
{
    if (projection != NULL) {
        zero_bytes(projection, sizeof(*projection));
    }
}

CisResult cis_projection_add_field(CisProjection *projection, const char *name,
                                   int8_t source_state_index,
                                   int64_t multiplier, int64_t offset,
                                   CisProjectionKind kind)
{
    CisProjectionField *field;
    uint8_t index;
    if (projection == NULL || name == NULL || kind > CIS_FIELD_INTRODUCED ||
        (kind == CIS_FIELD_INTRODUCED && source_state_index != -1) ||
        (kind != CIS_FIELD_INTRODUCED && source_state_index < 0) ||
        (kind == CIS_FIELD_PRESERVED &&
         (multiplier != 1 || offset != 0))) {
        return CIS_ERR_ARGUMENT;
    }
    if (projection->field_count >= CIS_MAX_PROJECTION_FIELDS) {
        return CIS_ERR_CAPACITY;
    }
    for (index = 0u; index < projection->field_count; ++index) {
        if (name_equal(projection->fields[index].name, name)) {
            return CIS_ERR_DUPLICATE;
        }
    }
    field = &projection->fields[projection->field_count];
    if (!name_copy(field->name, name)) {
        return CIS_ERR_ARGUMENT;
    }
    field->source_state_index = source_state_index;
    field->multiplier = multiplier;
    field->offset = offset;
    field->kind = kind;
    ++projection->field_count;
    return CIS_OK;
}

CisResult cis_project(const CisProjection *projection, const CisState *state,
                      CisProjectedState *projected_out)
{
    uint8_t index;
    uint32_t observed = 0u;
    if (projection == NULL || state == NULL || projected_out == NULL) {
        return CIS_ERR_ARGUMENT;
    }
    zero_bytes(projected_out, sizeof(*projected_out));
    for (index = 0u; index < projection->field_count; ++index) {
        const CisProjectionField *field = &projection->fields[index];
        int64_t multiplied;
        int64_t value;
        if (field->kind == CIS_FIELD_INTRODUCED) {
            value = field->offset;
        } else {
            if (field->source_state_index < 0 ||
                (uint8_t)field->source_state_index >= state->count) {
                return CIS_ERR_ARGUMENT;
            }
            observed |= UINT32_C(1) << (uint8_t)field->source_state_index;
            if (!multiply_i64(state->values[(uint8_t)field->source_state_index],
                              field->multiplier, &multiplied) ||
                !add_i64(multiplied, field->offset, &value)) {
                return CIS_ERR_OVERFLOW;
            }
        }
        projected_out->values[index] = value;
        copy_bytes(&projected_out->fields[index], field, sizeof(*field));
    }
    projected_out->count = projection->field_count;
    if (state->count == 32u) {
        projected_out->omitted_state = ~observed;
    } else {
        projected_out->omitted_state =
            ((UINT32_C(1) << state->count) - UINT32_C(1)) & ~observed;
    }
    return CIS_OK;
}

static int state_equal(const CisState *left, const CisState *right)
{
    uint8_t index;
    if (left->count != right->count) {
        return 0;
    }
    for (index = 0u; index < left->count; ++index) {
        if (left->values[index] != right->values[index]) {
            return 0;
        }
    }
    return 1;
}

CisResult cis_reachable(const CisDomain *domain, const CisState *initial,
                        const CisPredicate *target, uint8_t role,
                        uint32_t capabilities, uint8_t horizon,
                        uint8_t *reachable_out)
{
    CisState states[CIS_MAX_SEARCH_STATES];
    uint8_t depths[CIS_MAX_SEARCH_STATES];
    uint16_t head = 0u;
    uint16_t tail = 1u;
    CisResult valid;
    if (domain == NULL || initial == NULL || target == NULL ||
        reachable_out == NULL || role >= 32u || horizon > CIS_MAX_HORIZON ||
        target->state_index >= initial->count) {
        return CIS_ERR_ARGUMENT;
    }
    valid = state_valid(domain, initial);
    if (valid != CIS_OK) {
        return valid;
    }
    *reachable_out = 0u;
    states[0] = *initial;
    depths[0] = 0u;
    while (head < tail) {
        uint8_t action_index;
        CisState current = states[head];
        uint8_t depth = depths[head];
        ++head;
        if (predicate_holds(&current, target)) {
            *reachable_out = 1u;
            return CIS_OK;
        }
        if (depth >= horizon) {
            continue;
        }
        for (action_index = 0u; action_index < domain->action_count;
             ++action_index) {
            const CisAction *action = &domain->actions[action_index];
            CisState candidate;
            uint16_t seen;
            int duplicate = 0;
            if ((action->permitted_roles & (UINT32_C(1) << role)) == 0u ||
                (capabilities & action->required_capabilities) !=
                    action->required_capabilities ||
                apply_action(domain, action, &current, &candidate) != CIS_OK) {
                continue;
            }
            for (seen = 0u; seen < tail; ++seen) {
                if (state_equal(&states[seen], &candidate)) {
                    duplicate = 1;
                    break;
                }
            }
            if (duplicate) {
                continue;
            }
            if (tail >= CIS_MAX_SEARCH_STATES) {
                return CIS_ERR_CAPACITY;
            }
            states[tail] = candidate;
            depths[tail] = (uint8_t)(depth + 1u);
            ++tail;
        }
    }
    return CIS_OK;
}

CisResult cis_opportunity(const CisSystem *system,
                          const CisProjection *projection,
                          uint8_t participant_index, uint8_t action_index,
                          uint8_t believed_available,
                          uint16_t belief_confidence_permyriad,
                          int64_t expected_consequence,
                          uint16_t uncertainty_permyriad,
                          const CisPredicate *reachable_target,
                          uint8_t horizon, CisOpportunity *out)
{
    const CisParticipant *participant;
    const CisAction *action;
    uint8_t index;
    if (system == NULL || projection == NULL || out == NULL ||
        reachable_target == NULL ||
        participant_index >= system->participant_count ||
        action_index >= system->domain.action_count ||
        belief_confidence_permyriad > 10000u ||
        uncertainty_permyriad > 10000u) {
        return CIS_ERR_ARGUMENT;
    }
    zero_bytes(out, sizeof(*out));
    participant = &system->participants[participant_index];
    action = &system->domain.actions[action_index];
    out->domain_valid = 1u;
    out->capable =
        (participant->capabilities & action->required_capabilities) ==
        action->required_capabilities;
    out->permitted =
        (action->permitted_roles & (UINT32_C(1) << participant->role)) != 0u;
    out->enabled = 1u;
    for (index = 0u; index < action->precondition_count; ++index) {
        if (!predicate_holds(&system->state, &action->preconditions[index])) {
            out->enabled = 0u;
            break;
        }
    }
    out->exposed = (projection->exposed_actions &
                    (UINT32_C(1) << action_index)) != 0u;
    out->signaled = (projection->signaled_actions &
                     (UINT32_C(1) << action_index)) != 0u;
    out->believed_available = believed_available != 0u;
    out->belief_confidence_permyriad = belief_confidence_permyriad;
    out->expected_consequence = expected_consequence;
    out->uncertainty_permyriad = uncertainty_permyriad;
    {
        CisResult result = cis_reachable(&system->domain, &system->state,
                                         reachable_target, participant->role,
                                         participant->capabilities, horizon,
                                         &out->reachable);
        if (result != CIS_OK) {
            return result;
        }
    }
    if (action->reverse_action >= 0 &&
        action->reverse_action < (int8_t)system->domain.action_count &&
        out->capable && out->permitted && out->enabled) {
        const CisAction *reverse =
            &system->domain.actions[(uint8_t)action->reverse_action];
        CisState changed;
        CisState restored;
        uint8_t reverse_capable =
            (participant->capabilities & reverse->required_capabilities) ==
            reverse->required_capabilities;
        uint8_t reverse_permitted =
            (reverse->permitted_roles &
             (UINT32_C(1) << participant->role)) != 0u;
        out->reversible = reverse_capable && reverse_permitted &&
            apply_action(&system->domain, action, &system->state, &changed) == CIS_OK &&
            apply_action(&system->domain, reverse, &changed, &restored) == CIS_OK &&
            state_equal(&system->state, &restored);
    }
    for (index = 0u; index < system->trace_count; ++index) {
        const CisEvent *event = &system->trace[index];
        if (event->participant_index == participant_index &&
            event->action_index == action_index) {
            out->selected = 1u;
            if (event->status == CIS_EVENT_EXECUTED) {
                out->executed = 1u;
                if (event->outcome == CIS_OUTCOME_SUCCESS) {
                    out->successful = 1u;
                }
            }
        }
    }
    return CIS_OK;
}

static uint64_t unsigned_distance(int64_t left, int64_t right)
{
    if (left >= right) {
        return (uint64_t)left - (uint64_t)right;
    }
    return (uint64_t)right - (uint64_t)left;
}

static uint16_t ratio_permyriad(uint64_t numerator, uint64_t denominator)
{
    uint64_t quotient = 0u;
    uint64_t remainder;
    uint16_t index;
    if (denominator == 0u || numerator == 0u) {
        return 0u;
    }
    if (numerator >= denominator) {
        return 10000u;
    }
    remainder = numerator;
    for (index = 0u; index < 10000u; ++index) {
        if (remainder >= denominator - numerator) {
            remainder -= denominator - numerator;
            ++quotient;
        } else {
            remainder += numerator;
        }
    }
    return (uint16_t)quotient;
}

CisComparison cis_compare_states(const CisDomain *domain,
                                 const CisState *left,
                                 const CisState *right)
{
    CisComparison comparison = {0u, 0u, 0u};
    uint32_t loss = 0u;
    uint8_t index;
    if (domain == NULL || left == NULL || right == NULL ||
        left->count != domain->variable_count ||
        right->count != domain->variable_count ||
        state_valid(domain, left) != CIS_OK ||
        state_valid(domain, right) != CIS_OK) {
        return comparison;
    }
    comparison.comparable = 1u;
    comparison.equivalent = (uint8_t)state_equal(left, right);
    if (domain->variable_count == 0u) {
        comparison.similarity_permyriad = 10000u;
        return comparison;
    }
    for (index = 0u; index < domain->variable_count; ++index) {
        uint64_t distance = unsigned_distance(left->values[index],
                                              right->values[index]);
        uint64_t range = unsigned_distance(domain->variables[index].minimum,
                                           domain->variables[index].maximum);
        loss += range == 0u ? (distance == 0u ? 0u : 10000u) :
                              ratio_permyriad(distance, range);
    }
    comparison.similarity_permyriad =
        (uint16_t)(10000u - loss / domain->variable_count);
    return comparison;
}

CisComparison cis_compare_projections(const CisProjectedState *left,
                                      const CisProjectedState *right)
{
    CisComparison comparison = {0u, 0u, 0u};
    uint8_t equal = 0u;
    uint8_t index;
    if (left == NULL || right == NULL || left->count != right->count ||
        left->omitted_state != right->omitted_state) {
        return comparison;
    }
    comparison.comparable = 1u;
    for (index = 0u; index < left->count; ++index) {
        const CisProjectionField *left_field = &left->fields[index];
        const CisProjectionField *right_field = &right->fields[index];
        if (!name_equal(left_field->name, right_field->name) ||
            left_field->source_state_index != right_field->source_state_index ||
            left_field->multiplier != right_field->multiplier ||
            left_field->offset != right_field->offset ||
            left_field->kind != right_field->kind) {
            comparison.comparable = 0u;
            return comparison;
        }
        if (left->values[index] == right->values[index]) {
            ++equal;
        }
    }
    comparison.equivalent = equal == left->count;
    comparison.similarity_permyriad = left->count == 0u ? 10000u :
        (uint16_t)(((uint32_t)equal * 10000u) / left->count);
    return comparison;
}

static int event_symbol_equal(const CisEvent *left, const CisEvent *right,
                              const uint8_t *participant_map,
                              const uint8_t *action_map)
{
    return participant_map[left->participant_index] == right->participant_index &&
           action_map[left->action_index] == right->action_index &&
           left->status == right->status && left->outcome == right->outcome;
}

CisComparison cis_compare_traces(const CisEvent *left, uint16_t left_count,
                                 const CisEvent *right, uint16_t right_count,
                                 const uint8_t *participant_map,
                                 uint8_t participant_map_count,
                                 const uint8_t *action_map,
                                 uint8_t action_map_count)
{
    uint16_t previous[CIS_MAX_TRACE + 1u];
    uint16_t current[CIS_MAX_TRACE + 1u];
    CisComparison comparison = {0u, 0u, 0u};
    uint16_t row;
    uint16_t column;
    uint16_t maximum;
    if ((left == NULL && left_count != 0u) ||
        (right == NULL && right_count != 0u) ||
        left_count > CIS_MAX_TRACE || right_count > CIS_MAX_TRACE ||
        participant_map == NULL || action_map == NULL) {
        return comparison;
    }
    for (row = 0u; row < left_count; ++row) {
        if (left[row].participant_index >= participant_map_count ||
            left[row].action_index >= action_map_count) {
            return comparison;
        }
    }
    comparison.comparable = 1u;
    for (column = 0u; column <= right_count; ++column) {
        previous[column] = column;
    }
    for (row = 1u; row <= left_count; ++row) {
        current[0] = row;
        for (column = 1u; column <= right_count; ++column) {
            uint16_t deletion = (uint16_t)(previous[column] + 1u);
            uint16_t insertion = (uint16_t)(current[column - 1u] + 1u);
            uint16_t substitution = (uint16_t)(previous[column - 1u] +
                (event_symbol_equal(&left[row - 1u], &right[column - 1u],
                                    participant_map, action_map) ? 0u : 1u));
            uint16_t best = deletion < insertion ? deletion : insertion;
            current[column] = best < substitution ? best : substitution;
        }
        for (column = 0u; column <= right_count; ++column) {
            previous[column] = current[column];
        }
    }
    maximum = left_count > right_count ? left_count : right_count;
    comparison.equivalent = previous[right_count] == 0u;
    comparison.similarity_permyriad = maximum == 0u ? 10000u :
        (uint16_t)(10000u - ((uint32_t)previous[right_count] * 10000u) / maximum);
    return comparison;
}

uint16_t cis_measure_action_frequency(const CisSystem *system,
                                      uint8_t action_index)
{
    uint16_t count = 0u;
    uint16_t index;
    if (system == NULL || action_index >= system->domain.action_count) {
        return 0u;
    }
    for (index = 0u; index < system->trace_count; ++index) {
        if (system->trace[index].action_index == action_index &&
            system->trace[index].status == CIS_EVENT_EXECUTED) {
            ++count;
        }
    }
    return count;
}

uint64_t cis_measure_elapsed(const CisSystem *system)
{
    if (system == NULL || system->trace_count < 2u) {
        return 0u;
    }
    return system->trace[system->trace_count - 1u].tick -
           system->trace[0].tick;
}

uint8_t cis_measure_completion(const CisState *state,
                               const CisPredicate *completion)
{
    return (uint8_t)predicate_holds(state, completion);
}

CisResult cis_measure_recovery(const CisSystem *system,
                               uint32_t after_sequence,
                               const CisPredicate *recovered,
                               uint64_t *ticks_out)
{
    CisState current;
    uint16_t index;
    uint64_t start_tick;
    if (system == NULL || recovered == NULL || ticks_out == NULL ||
        after_sequence >= system->trace_count ||
        recovered->state_index >= system->initial_state.count) {
        return CIS_ERR_ARGUMENT;
    }
    current = system->initial_state;
    start_tick = system->trace[after_sequence].tick;
    for (index = 0u; index < system->trace_count; ++index) {
        const CisEvent *event = &system->trace[index];
        if (cis_state_hash(&current) != event->before_hash) {
            return CIS_ERR_REPLAY_DIVERGED;
        }
        if (event->status == CIS_EVENT_EXECUTED) {
            CisState next;
            if (event->action_index >= system->domain.action_count) {
                return CIS_ERR_REPLAY_DIVERGED;
            }
            if (apply_action(&system->domain,
                             &system->domain.actions[event->action_index],
                             &current, &next) != CIS_OK) {
                return CIS_ERR_REPLAY_DIVERGED;
            }
            current = next;
        }
        if (cis_state_hash(&current) != event->after_hash) {
            return CIS_ERR_REPLAY_DIVERGED;
        }
        if (index > after_sequence && predicate_holds(&current, recovered)) {
            *ticks_out = event->tick - start_tick;
            return CIS_OK;
        }
    }
    return CIS_ERR_NOT_FOUND;
}

uint16_t cis_measure_opportunity_mismatch(const CisOpportunity *opportunity)
{
    uint8_t objectively_available;
    if (opportunity == NULL) {
        return 0u;
    }
    objectively_available = opportunity->domain_valid && opportunity->capable &&
        opportunity->permitted && opportunity->enabled && opportunity->exposed;
    return objectively_available == opportunity->believed_available ? 0u : 10000u;
}

uint8_t cis_trace_has_aba_recurrence_pattern(const CisSystem *system)
{
    uint16_t first;
    uint16_t second;
    uint16_t third;
    if (system == NULL) {
        return 0u;
    }
    for (first = 0u; first < system->trace_count; ++first) {
        if (system->trace[first].status != CIS_EVENT_EXECUTED ||
            system->trace[first].before_hash == system->trace[first].after_hash) {
            continue;
        }
        for (second = (uint16_t)(first + 1u); second < system->trace_count;
             ++second) {
            if (system->trace[second].status != CIS_EVENT_EXECUTED ||
                system->trace[second].before_hash == system->trace[second].after_hash ||
                system->trace[second].participant_index ==
                    system->trace[first].participant_index) {
                continue;
            }
            for (third = (uint16_t)(second + 1u); third < system->trace_count;
                 ++third) {
                if (system->trace[third].status == CIS_EVENT_EXECUTED &&
                    system->trace[third].before_hash != system->trace[third].after_hash &&
                    system->trace[third].participant_index ==
                        system->trace[first].participant_index) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

const char *cis_result_name(CisResult result)
{
    switch (result) {
    case CIS_OK: return "ok";
    case CIS_ERR_ARGUMENT: return "invalid argument";
    case CIS_ERR_CAPACITY: return "capacity exhausted";
    case CIS_ERR_DUPLICATE: return "duplicate identity";
    case CIS_ERR_NOT_FOUND: return "not found";
    case CIS_ERR_BOUNDS: return "state out of bounds";
    case CIS_ERR_CAPABILITY: return "capability absent";
    case CIS_ERR_PERMISSION: return "permission denied";
    case CIS_ERR_DISABLED: return "precondition unsatisfied";
    case CIS_ERR_INVARIANT: return "invariant violated";
    case CIS_ERR_OVERFLOW: return "integer overflow";
    case CIS_ERR_REPLAY_DIVERGED: return "replay diverged";
    default: return "unknown result";
    }
}
