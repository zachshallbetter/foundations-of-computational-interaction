#include "cis.h"

#include <stdio.h>

#define REQUIRE(expression) do { \
    if (!(expression)) { \
        printf("FAIL line %d: %s\n", __LINE__, #expression); \
        return 1; \
    } \
} while (0)

enum { ROLE_USER = 0, ROLE_ADMIN = 1 };
enum { CAP_MOVE = 1u, CAP_LOCK = 2u };

typedef struct {
    CisDomain domain;
    uint8_t position;
    uint8_t locked;
    uint8_t open;
    uint8_t close;
    uint8_t lock;
    uint8_t unlock;
    uint8_t violate;
} Fixture;

static int build_fixture(Fixture *fixture)
{
    CisAction action;
    cis_domain_init(&fixture->domain);
    REQUIRE(cis_domain_add_variable(&fixture->domain, "position", 0, 1,
                                    &fixture->position) == CIS_OK);
    REQUIRE(cis_domain_add_variable(&fixture->domain, "locked", 0, 1,
                                    &fixture->locked) == CIS_OK);
    REQUIRE(cis_domain_add_variable(&fixture->domain, "position", 0, 1,
                                    NULL) == CIS_ERR_DUPLICATE);

    cis_action_init(&action, "open");
    action.required_capabilities = CAP_MOVE;
    action.permitted_roles = UINT32_C(1) << ROLE_USER;
    REQUIRE(cis_action_add_precondition(&action,
        (CisPredicate){fixture->position, CIS_PRED_EQ, 0}) == CIS_OK);
    REQUIRE(cis_action_add_precondition(&action,
        (CisPredicate){fixture->locked, CIS_PRED_EQ, 0}) == CIS_OK);
    REQUIRE(cis_action_add_effect(&action,
        (CisEffect){fixture->position, CIS_EFFECT_SET, 1}) == CIS_OK);
    action.reverse_action = 1;
    REQUIRE(cis_domain_add_action(&fixture->domain, &action,
                                  &fixture->open) == CIS_OK);

    cis_action_init(&action, "close");
    action.required_capabilities = CAP_MOVE;
    action.permitted_roles = UINT32_C(1) << ROLE_USER;
    REQUIRE(cis_action_add_precondition(&action,
        (CisPredicate){fixture->position, CIS_PRED_EQ, 1}) == CIS_OK);
    REQUIRE(cis_action_add_effect(&action,
        (CisEffect){fixture->position, CIS_EFFECT_SET, 0}) == CIS_OK);
    action.reverse_action = 0;
    REQUIRE(cis_domain_add_action(&fixture->domain, &action,
                                  &fixture->close) == CIS_OK);

    cis_action_init(&action, "lock");
    action.required_capabilities = CAP_LOCK;
    action.permitted_roles = UINT32_C(1) << ROLE_ADMIN;
    REQUIRE(cis_action_add_precondition(&action,
        (CisPredicate){fixture->position, CIS_PRED_EQ, 0}) == CIS_OK);
    REQUIRE(cis_action_add_effect(&action,
        (CisEffect){fixture->locked, CIS_EFFECT_SET, 1}) == CIS_OK);
    action.reverse_action = 3;
    REQUIRE(cis_domain_add_action(&fixture->domain, &action,
                                  &fixture->lock) == CIS_OK);

    cis_action_init(&action, "unlock");
    action.required_capabilities = CAP_LOCK;
    action.permitted_roles = UINT32_C(1) << ROLE_ADMIN;
    REQUIRE(cis_action_add_effect(&action,
        (CisEffect){fixture->locked, CIS_EFFECT_SET, 0}) == CIS_OK);
    action.reverse_action = 2;
    REQUIRE(cis_domain_add_action(&fixture->domain, &action,
                                  &fixture->unlock) == CIS_OK);

    cis_action_init(&action, "violate bounds");
    action.permitted_roles = UINT32_C(1) << ROLE_USER;
    REQUIRE(cis_action_add_effect(&action,
        (CisEffect){fixture->position, CIS_EFFECT_SET, 2}) == CIS_OK);
    REQUIRE(cis_domain_add_action(&fixture->domain, &action,
                                  &fixture->violate) == CIS_OK);
    REQUIRE(cis_domain_add_invariant(&fixture->domain,
        (CisPredicate){fixture->locked, CIS_PRED_GE, 0}) == CIS_OK);
    return 0;
}

static int test_execution_replay_and_interaction(const Fixture *fixture)
{
    CisSystem system;
    CisState initial = {{0}, 2};
    CisState replayed;
    uint8_t alice;
    uint8_t bob;
    uint8_t admin;
    uint64_t recovery_ticks;
    CisPredicate recovered = {fixture->position, CIS_PRED_EQ, 1};

    REQUIRE(cis_system_init(&system, &fixture->domain, &initial) == CIS_OK);
    REQUIRE(cis_system_add_participant(&system, "alice", ROLE_USER, CAP_MOVE,
                                       &alice) == CIS_OK);
    REQUIRE(cis_system_add_participant(&system, "bob", ROLE_USER, CAP_MOVE,
                                       &bob) == CIS_OK);
    REQUIRE(cis_system_add_participant(&system, "root", ROLE_ADMIN,
                                       CAP_MOVE | CAP_LOCK,
                                       &admin) == CIS_OK);
    REQUIRE(cis_execute(&system, alice, fixture->lock, 1) == CIS_ERR_CAPABILITY);
    REQUIRE(cis_execute(&system, admin, fixture->open, 2) == CIS_ERR_PERMISSION);
    REQUIRE(cis_execute(&system, alice, fixture->open, 3) == CIS_OK);
    REQUIRE(cis_record_outcome(&system, 2, CIS_OUTCOME_SUCCESS) == CIS_OK);
    REQUIRE(cis_record_outcome(&system, 2, CIS_OUTCOME_SUCCESS) ==
            CIS_ERR_DUPLICATE);
    REQUIRE(cis_execute(&system, alice, fixture->open, 4) == CIS_ERR_DISABLED);
    REQUIRE(cis_execute(&system, bob, fixture->close, 5) == CIS_OK);
    REQUIRE(cis_execute(&system, alice, fixture->open, 6) == CIS_OK);
    REQUIRE(cis_execute(&system, alice, fixture->violate, 7) == CIS_ERR_BOUNDS);
    REQUIRE(cis_execute(&system, admin, fixture->lock, 6) == CIS_ERR_ARGUMENT);
    REQUIRE(system.state.values[fixture->position] == 1);
    REQUIRE(system.trace_count == 7);
    REQUIRE(cis_trace_has_aba_recurrence_pattern(&system) == 1);
    REQUIRE(cis_measure_action_frequency(&system, fixture->open) == 2);
    REQUIRE(cis_measure_elapsed(&system) == 6);
    REQUIRE(cis_measure_recovery(&system, 4, &recovered,
                                 &recovery_ticks) == CIS_OK);
    REQUIRE(recovery_ticks == 1);
    REQUIRE(cis_replay(&system, &replayed) == CIS_OK);
    REQUIRE(cis_state_hash(&replayed) == cis_state_hash(&system.state));
    REQUIRE(system.trace[0].schema_version == CIS_TRACE_SCHEMA_VERSION);
    system.trace[2].after_hash ^= UINT64_C(1);
    REQUIRE(cis_replay(&system, &replayed) == CIS_ERR_REPLAY_DIVERGED);
    return 0;
}

static int test_projection_and_opportunity(const Fixture *fixture)
{
    CisSystem system;
    CisState initial = {{0}, 2};
    CisProjection projection;
    CisProjectedState first;
    CisProjectedState second;
    CisProjectedState incompatible;
    CisProjection other_projection;
    CisOpportunity opportunity;
    CisPredicate target = {fixture->position, CIS_PRED_EQ, 1};
    uint8_t alice;
    uint8_t reachable;
    CisComparison comparison;

    REQUIRE(cis_system_init(&system, &fixture->domain, &initial) == CIS_OK);
    REQUIRE(cis_system_add_participant(&system, "alice", ROLE_USER, CAP_MOVE,
                                       &alice) == CIS_OK);
    cis_projection_init(&projection);
    projection.exposed_actions = UINT32_C(1) << fixture->open;
    projection.signaled_actions = UINT32_C(1) << fixture->open;
    REQUIRE(cis_projection_add_field(&projection, "door", fixture->position,
        1, 0, CIS_FIELD_PRESERVED) == CIS_OK);
    REQUIRE(cis_projection_add_field(&projection, "constant", -1,
        0, 7, CIS_FIELD_INTRODUCED) == CIS_OK);
    REQUIRE(cis_project(&projection, &system.state, &first) == CIS_OK);
    REQUIRE(first.values[0] == 0 && first.values[1] == 7);
    REQUIRE(first.omitted_state == (UINT32_C(1) << fixture->locked));
    REQUIRE(cis_reachable(&fixture->domain, &system.state, &target, ROLE_USER,
                          CAP_MOVE, 1, &reachable) == CIS_OK);
    REQUIRE(reachable == 1);
    REQUIRE(cis_opportunity(&system, &projection, alice, fixture->open, 0,
        7000, 1, 500, &target, 1, &opportunity) == CIS_OK);
    REQUIRE(opportunity.domain_valid && opportunity.capable &&
            opportunity.permitted && opportunity.enabled &&
            opportunity.reachable && opportunity.exposed &&
            opportunity.signaled && opportunity.reversible);
    REQUIRE(!opportunity.selected && !opportunity.executed);
    REQUIRE(cis_measure_opportunity_mismatch(&opportunity) == 10000);
    REQUIRE(cis_execute(&system, alice, fixture->open, 10) == CIS_OK);
    REQUIRE(cis_record_outcome(&system, 0, CIS_OUTCOME_SUCCESS) == CIS_OK);
    REQUIRE(cis_project(&projection, &system.state, &second) == CIS_OK);
    comparison = cis_compare_projections(&first, &second);
    REQUIRE(comparison.comparable && !comparison.equivalent);
    REQUIRE(comparison.similarity_permyriad == 5000);
    cis_projection_init(&other_projection);
    REQUIRE(cis_projection_add_field(&other_projection, "different meaning",
        fixture->position, 1, 0, CIS_FIELD_PRESERVED) == CIS_OK);
    REQUIRE(cis_projection_add_field(&other_projection, "constant", -1,
        0, 7, CIS_FIELD_INTRODUCED) == CIS_OK);
    REQUIRE(cis_project(&other_projection, &system.state, &incompatible) == CIS_OK);
    comparison = cis_compare_projections(&second, &incompatible);
    REQUIRE(!comparison.comparable);
    REQUIRE(cis_opportunity(&system, &projection, alice, fixture->open, 1,
        10000, 1, 0, &target, 0, &opportunity) == CIS_OK);
    REQUIRE(opportunity.selected && opportunity.executed &&
            opportunity.successful && !opportunity.enabled);
    return 0;
}

static int test_comparison_and_measurement(const Fixture *fixture)
{
    CisState closed = {{0, 0}, 2};
    CisState open = {{1, 0}, 2};
    CisPredicate completion = {fixture->position, CIS_PRED_EQ, 1};
    CisComparison states;
    CisEvent left[2] = {{0}};
    CisEvent right[2] = {{0}};
    CisComparison traces;
    uint8_t participant_map[2] = {0, 1};
    uint8_t action_map[CIS_MAX_ACTIONS];
    uint8_t index;

    for (index = 0u; index < CIS_MAX_ACTIONS; ++index) {
        action_map[index] = index;
    }
    REQUIRE(cis_state_hash(&closed) == UINT64_C(16981056525137609861));
    REQUIRE(cis_state_hash(&open) == UINT64_C(11289045597036932164));

    states = cis_compare_states(&fixture->domain, &closed, &open);
    REQUIRE(states.comparable && !states.equivalent);
    REQUIRE(states.similarity_permyriad == 5000);
    REQUIRE(cis_measure_completion(&open, &completion) == 1);
    REQUIRE(cis_measure_completion(&closed, &completion) == 0);

    left[0].participant_index = 0;
    left[0].action_index = fixture->open;
    left[0].status = CIS_EVENT_EXECUTED;
    left[1].participant_index = 1;
    left[1].action_index = fixture->close;
    left[1].status = CIS_EVENT_EXECUTED;
    right[0] = left[0];
    right[1] = left[1];
    traces = cis_compare_traces(left, 2, right, 2,
                                participant_map, 2,
                                action_map, CIS_MAX_ACTIONS);
    REQUIRE(traces.comparable && traces.equivalent &&
            traces.similarity_permyriad == 10000);
    right[0].participant_index = 1;
    right[1].participant_index = 0;
    participant_map[0] = 1;
    participant_map[1] = 0;
    traces = cis_compare_traces(left, 2, right, 2,
                                participant_map, 2,
                                action_map, CIS_MAX_ACTIONS);
    REQUIRE(traces.comparable && traces.equivalent);
    traces = cis_compare_traces(left, 2, right, 2,
                                NULL, 0,
                                action_map, CIS_MAX_ACTIONS);
    REQUIRE(!traces.comparable);
    right[0].participant_index = 0;
    right[1].participant_index = 1;
    participant_map[0] = 0;
    participant_map[1] = 1;
    right[1].action_index = fixture->open;
    traces = cis_compare_traces(left, 2, right, 2,
                                participant_map, 2,
                                action_map, CIS_MAX_ACTIONS);
    REQUIRE(traces.comparable && !traces.equivalent &&
            traces.similarity_permyriad == 5000);
    return 0;
}

int main(void)
{
    Fixture fixture;
    REQUIRE(build_fixture(&fixture) == 0);
    REQUIRE(test_execution_replay_and_interaction(&fixture) == 0);
    REQUIRE(test_projection_and_opportunity(&fixture) == 0);
    REQUIRE(test_comparison_and_measurement(&fixture) == 0);
    printf("PASS: fundamental CIS substrate\n");
    return 0;
}
