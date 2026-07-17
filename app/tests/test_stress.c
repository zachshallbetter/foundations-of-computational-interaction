#include "cis.h"

#include <stdio.h>

#define CHECK(expression) do { \
    if (!(expression)) { \
        printf("FAIL line %d: %s\n", __LINE__, #expression); \
        return 1; \
    } \
} while (0)

static uint32_t random_word(uint32_t *state)
{
    uint32_t value = *state;
    value ^= value << 13u;
    value ^= value >> 17u;
    value ^= value << 5u;
    *state = value;
    return value;
}

static int build_counter(CisDomain *domain, uint8_t *counter,
                         uint8_t *increment, uint8_t *decrement)
{
    CisAction action;
    cis_domain_init(domain);
    CHECK(cis_domain_add_variable(domain, "counter", -8, 8, counter) == CIS_OK);

    cis_action_init(&action, "increment");
    action.required_capabilities = 1u;
    action.permitted_roles = 1u;
    CHECK(cis_action_add_effect(&action,
        (CisEffect){*counter, CIS_EFFECT_ADD, 1}) == CIS_OK);
    CHECK(cis_domain_add_action(domain, &action, increment) == CIS_OK);

    cis_action_init(&action, "decrement");
    action.required_capabilities = 1u;
    action.permitted_roles = 1u;
    CHECK(cis_action_add_effect(&action,
        (CisEffect){*counter, CIS_EFFECT_ADD, -1}) == CIS_OK);
    CHECK(cis_domain_add_action(domain, &action, decrement) == CIS_OK);
    return 0;
}

static int test_deterministic_stress(void)
{
    CisDomain domain;
    uint8_t counter;
    uint8_t increment;
    uint8_t decrement;
    uint32_t seed;

    CHECK(build_counter(&domain, &counter, &increment, &decrement) == 0);
    for (seed = 1u; seed <= 64u; ++seed) {
        CisState initial = {{0}, 1};
        CisSystem system;
        CisState replayed;
        uint8_t participant;
        uint32_t random_state = seed;
        uint16_t step;
        int64_t expected = 0;
        CHECK(cis_system_init(&system, &domain, &initial) == CIS_OK);
        CHECK(cis_system_add_participant(&system, "actor", 0, 1u,
                                         &participant) == CIS_OK);
        for (step = 0u; step < CIS_MAX_TRACE; ++step) {
            uint8_t action = (random_word(&random_state) & 1u) != 0u ?
                increment : decrement;
            CisResult result = cis_execute(&system, participant, action, step);
            int64_t next = expected + (action == increment ? 1 : -1);
            if (next < -8 || next > 8) {
                CHECK(result == CIS_ERR_BOUNDS);
            } else {
                CHECK(result == CIS_OK);
                expected = next;
                CHECK(cis_record_outcome(&system, step,
                    (random_word(&random_state) & 1u) != 0u ?
                    CIS_OUTCOME_SUCCESS : CIS_OUTCOME_FAILURE) == CIS_OK);
            }
            CHECK(system.state.values[counter] == expected);
            CHECK(cis_replay(&system, &replayed) == CIS_OK);
            CHECK(replayed.values[counter] == expected);
        }
        CHECK(cis_execute(&system, participant, increment, CIS_MAX_TRACE) ==
              CIS_ERR_CAPACITY);
    }
    return 0;
}

static int test_opportunity_independence(void)
{
    CisDomain domain;
    CisAction action;
    CisState initial = {{0}, 1};
    CisSystem system;
    CisProjection projection;
    CisOpportunity profile;
    CisPredicate target;
    uint8_t cell;
    uint8_t act;
    uint8_t capable;
    uint8_t incapable;

    cis_domain_init(&domain);
    CHECK(cis_domain_add_variable(&domain, "cell", 0, 1, &cell) == CIS_OK);
    cis_action_init(&action, "set");
    action.required_capabilities = 1u;
    action.permitted_roles = 1u;
    CHECK(cis_action_add_precondition(&action,
        (CisPredicate){cell, CIS_PRED_EQ, 0}) == CIS_OK);
    CHECK(cis_action_add_effect(&action,
        (CisEffect){cell, CIS_EFFECT_SET, 1}) == CIS_OK);
    CHECK(cis_domain_add_action(&domain, &action, &act) == CIS_OK);
    CHECK(cis_system_init(&system, &domain, &initial) == CIS_OK);
    CHECK(cis_system_add_participant(&system, "capable", 0, 1u,
                                     &capable) == CIS_OK);
    CHECK(cis_system_add_participant(&system, "incapable", 0, 0u,
                                     &incapable) == CIS_OK);
    cis_projection_init(&projection);
    projection.signaled_actions = UINT32_C(1) << act;
    target = (CisPredicate){cell, CIS_PRED_EQ, 1};

    CHECK(cis_opportunity(&system, &projection, capable, act, 1, 9000, 1,
                          100, &target, 1, &profile) == CIS_OK);
    CHECK(profile.capable && profile.permitted && profile.enabled &&
          profile.reachable && !profile.exposed && profile.signaled &&
          profile.believed_available);
    CHECK(cis_measure_opportunity_mismatch(&profile) == 10000u);

    projection.exposed_actions = UINT32_C(1) << act;
    projection.signaled_actions = 0u;
    CHECK(cis_opportunity(&system, &projection, incapable, act, 0, 10000, 0,
                          0, &target, 1, &profile) == CIS_OK);
    CHECK(!profile.capable && profile.permitted && profile.enabled &&
          !profile.reachable && profile.exposed && !profile.signaled &&
          !profile.believed_available);
    return 0;
}

int main(void)
{
    CHECK(test_deterministic_stress() == 0);
    CHECK(test_opportunity_independence() == 0);
    printf("PASS: 8192 deterministic traces and opportunity independence\n");
    return 0;
}
