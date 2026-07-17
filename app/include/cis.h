#ifndef CIS_H
#define CIS_H

#include <stddef.h>
#include <stdint.h>

#define CIS_API_VERSION_MAJOR 0u
#define CIS_API_VERSION_MINOR 1u
#define CIS_API_VERSION_PATCH 0u
#define CIS_TRACE_SCHEMA_VERSION 1u

#define CIS_NAME_CAP 32u
#define CIS_MAX_STATE 16u
#define CIS_MAX_ACTIONS 16u
#define CIS_MAX_PARTICIPANTS 16u
#define CIS_MAX_PRECONDITIONS 8u
#define CIS_MAX_EFFECTS 8u
#define CIS_MAX_INVARIANTS 8u
#define CIS_MAX_PROJECTION_FIELDS 16u
#define CIS_MAX_TRACE 128u
#define CIS_MAX_SEARCH_STATES 128u
#define CIS_MAX_HORIZON 16u

typedef enum {
    CIS_OK = 0,
    CIS_ERR_ARGUMENT,
    CIS_ERR_CAPACITY,
    CIS_ERR_DUPLICATE,
    CIS_ERR_NOT_FOUND,
    CIS_ERR_BOUNDS,
    CIS_ERR_CAPABILITY,
    CIS_ERR_PERMISSION,
    CIS_ERR_DISABLED,
    CIS_ERR_INVARIANT,
    CIS_ERR_OVERFLOW,
    CIS_ERR_REPLAY_DIVERGED
} CisResult;

typedef enum {
    CIS_PRED_EQ = 0,
    CIS_PRED_NE,
    CIS_PRED_LT,
    CIS_PRED_LE,
    CIS_PRED_GT,
    CIS_PRED_GE
} CisPredicateOp;

typedef enum {
    CIS_EFFECT_SET = 0,
    CIS_EFFECT_ADD
} CisEffectOp;

typedef enum {
    CIS_EVENT_REJECTED = 0,
    CIS_EVENT_EXECUTED = 1
} CisEventStatus;

typedef enum {
    CIS_OUTCOME_UNKNOWN = 0,
    CIS_OUTCOME_FAILURE,
    CIS_OUTCOME_SUCCESS
} CisOutcome;

typedef enum {
    CIS_FIELD_PRESERVED = 0,
    CIS_FIELD_TRANSFORMED,
    CIS_FIELD_INTRODUCED
} CisProjectionKind;

typedef struct {
    char name[CIS_NAME_CAP];
    int64_t minimum;
    int64_t maximum;
} CisStateVariable;

typedef struct {
    int64_t values[CIS_MAX_STATE];
    uint8_t count;
} CisState;

typedef struct {
    uint8_t state_index;
    CisPredicateOp operation;
    int64_t value;
} CisPredicate;

typedef struct {
    uint8_t state_index;
    CisEffectOp operation;
    int64_t value;
} CisEffect;

typedef struct {
    char name[CIS_NAME_CAP];
    uint32_t required_capabilities;
    uint32_t permitted_roles;
    CisPredicate preconditions[CIS_MAX_PRECONDITIONS];
    uint8_t precondition_count;
    CisEffect effects[CIS_MAX_EFFECTS];
    uint8_t effect_count;
    int8_t reverse_action;
} CisAction;

typedef struct {
    char name[CIS_NAME_CAP];
    uint8_t role;
    uint32_t capabilities;
} CisParticipant;

typedef struct {
    CisStateVariable variables[CIS_MAX_STATE];
    uint8_t variable_count;
    CisAction actions[CIS_MAX_ACTIONS];
    uint8_t action_count;
    CisPredicate invariants[CIS_MAX_INVARIANTS];
    uint8_t invariant_count;
} CisDomain;

typedef struct {
    char name[CIS_NAME_CAP];
    int8_t source_state_index;
    int64_t multiplier;
    int64_t offset;
    CisProjectionKind kind;
} CisProjectionField;

typedef struct {
    CisProjectionField fields[CIS_MAX_PROJECTION_FIELDS];
    uint8_t field_count;
    uint32_t exposed_actions;
    uint32_t signaled_actions;
} CisProjection;

typedef struct {
    int64_t values[CIS_MAX_PROJECTION_FIELDS];
    CisProjectionField fields[CIS_MAX_PROJECTION_FIELDS];
    uint8_t count;
    uint32_t omitted_state;
} CisProjectedState;

typedef struct {
    uint16_t schema_version;
    uint32_t sequence;
    uint64_t tick;
    uint8_t participant_index;
    uint8_t action_index;
    CisEventStatus status;
    CisOutcome outcome;
    CisResult result;
    uint64_t before_hash;
    uint64_t after_hash;
} CisEvent;

typedef struct {
    CisDomain domain;
    CisParticipant participants[CIS_MAX_PARTICIPANTS];
    uint8_t participant_count;
    CisState initial_state;
    CisState state;
    CisEvent trace[CIS_MAX_TRACE];
    uint16_t trace_count;
} CisSystem;

typedef struct {
    uint8_t domain_valid;
    uint8_t capable;
    uint8_t permitted;
    uint8_t enabled;
    uint8_t reachable;
    uint8_t exposed;
    uint8_t signaled;
    uint8_t believed_available;
    uint8_t selected;
    uint8_t executed;
    uint8_t successful;
    uint8_t reversible;
    uint16_t belief_confidence_permyriad;
    int64_t expected_consequence;
    uint16_t uncertainty_permyriad;
} CisOpportunity;

typedef struct {
    uint8_t comparable;
    uint8_t equivalent;
    uint16_t similarity_permyriad;
} CisComparison;

void cis_domain_init(CisDomain *domain);
CisResult cis_domain_add_variable(CisDomain *domain, const char *name,
                                  int64_t minimum, int64_t maximum,
                                  uint8_t *index_out);
CisResult cis_domain_add_action(CisDomain *domain, const CisAction *action,
                                uint8_t *index_out);
CisResult cis_domain_add_invariant(CisDomain *domain,
                                   CisPredicate invariant);
void cis_action_init(CisAction *action, const char *name);
CisResult cis_action_add_precondition(CisAction *action,
                                      CisPredicate predicate);
CisResult cis_action_add_effect(CisAction *action, CisEffect effect);

CisResult cis_system_init(CisSystem *system, const CisDomain *domain,
                          const CisState *initial_state);
CisResult cis_system_add_participant(CisSystem *system, const char *name,
                                     uint8_t role, uint32_t capabilities,
                                     uint8_t *index_out);
CisResult cis_execute(CisSystem *system, uint8_t participant_index,
                      uint8_t action_index, uint64_t tick);
CisResult cis_record_outcome(CisSystem *system, uint32_t sequence,
                             CisOutcome outcome);
CisResult cis_replay(const CisSystem *system, CisState *state_out);
uint64_t cis_state_hash(const CisState *state);

void cis_projection_init(CisProjection *projection);
CisResult cis_projection_add_field(CisProjection *projection, const char *name,
                                   int8_t source_state_index,
                                   int64_t multiplier, int64_t offset,
                                   CisProjectionKind kind);
CisResult cis_project(const CisProjection *projection, const CisState *state,
                      CisProjectedState *projected_out);

CisResult cis_reachable(const CisDomain *domain, const CisState *initial,
                        const CisPredicate *target, uint8_t role,
                        uint32_t capabilities, uint8_t horizon,
                        uint8_t *reachable_out);
CisResult cis_opportunity(const CisSystem *system,
                          const CisProjection *projection,
                          uint8_t participant_index, uint8_t action_index,
                          uint8_t believed_available,
                          uint16_t belief_confidence_permyriad,
                          int64_t expected_consequence,
                          uint16_t uncertainty_permyriad,
                          const CisPredicate *reachable_target,
                          uint8_t horizon, CisOpportunity *out);

CisComparison cis_compare_states(const CisDomain *domain,
                                 const CisState *left,
                                 const CisState *right);
CisComparison cis_compare_projections(const CisProjectedState *left,
                                      const CisProjectedState *right);
CisComparison cis_compare_traces(const CisEvent *left, uint16_t left_count,
                                 const CisEvent *right, uint16_t right_count,
                                 const uint8_t *participant_map,
                                 uint8_t participant_map_count,
                                 const uint8_t *action_map,
                                 uint8_t action_map_count);

uint16_t cis_measure_action_frequency(const CisSystem *system,
                                      uint8_t action_index);
uint64_t cis_measure_elapsed(const CisSystem *system);
uint8_t cis_measure_completion(const CisState *state,
                               const CisPredicate *completion);
CisResult cis_measure_recovery(const CisSystem *system,
                               uint32_t after_sequence,
                               const CisPredicate *recovered,
                               uint64_t *ticks_out);
uint16_t cis_measure_opportunity_mismatch(const CisOpportunity *opportunity);
uint8_t cis_trace_has_aba_recurrence_pattern(const CisSystem *system);
const char *cis_result_name(CisResult result);

#endif
