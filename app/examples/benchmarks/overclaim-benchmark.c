#include "cis.h"

#include <stdio.h>

/*
 * CIS-EX-007 — Conversational Overclaim Benchmark
 *
 * Models an assistant that exposes and signals an action it cannot perform.
 * Belief, presentation, selection, rejection, and recovery remain separate.
 */

int main(void)
{
    CisDomain domain;
    CisAction send;
    CisAction explain;
    CisState initial = {{0}, 1};
    CisSystem system;
    CisProjection projection;
    CisOpportunity before;
    CisOpportunity after;
    CisPredicate target;
    uint8_t explained_index;
    uint8_t send_index;
    uint8_t explain_index;
    uint8_t assistant_index;
    CisResult send_result;

    cis_domain_init(&domain);
    if (cis_domain_add_variable(&domain, "limitation_explained", 0, 1,
                                &explained_index) != CIS_OK) return 1;

    cis_action_init(&send, "send_external_message");
    send.required_capabilities = 2u;
    send.permitted_roles = 1u;
    cis_action_init(&explain, "explain_limitation");
    explain.required_capabilities = 1u;
    explain.permitted_roles = 1u;
    if (cis_action_add_effect(&explain,
            (CisEffect){explained_index, CIS_EFFECT_SET, 1}) != CIS_OK ||
        cis_domain_add_action(&domain, &send, &send_index) != CIS_OK ||
        cis_domain_add_action(&domain, &explain, &explain_index) != CIS_OK ||
        cis_system_init(&system, &domain, &initial) != CIS_OK ||
        cis_system_add_participant(&system, "assistant", 0u, 1u,
                                   &assistant_index) != CIS_OK) return 1;

    cis_projection_init(&projection);
    projection.exposed_actions = UINT32_C(1) << send_index;
    projection.signaled_actions = UINT32_C(1) << send_index;
    target = (CisPredicate){explained_index, CIS_PRED_EQ, 1};
    if (cis_opportunity(&system, &projection, assistant_index, send_index, 1u,
                        9000u, 1, 1000u, &target, 1u, &before) != CIS_OK) {
        return 1;
    }

    send_result = cis_execute(&system, assistant_index, send_index, 1u);
    if (send_result != CIS_ERR_CAPABILITY || system.state.values[0] != 0 ||
        system.trace_count != 1u ||
        system.trace[0].status != CIS_EVENT_REJECTED ||
        before.capable || !before.exposed || !before.signaled ||
        !before.believed_available ||
        cis_measure_opportunity_mismatch(&before) == 0u) return 1;

    if (cis_execute(&system, assistant_index, explain_index, 2u) != CIS_OK ||
        cis_record_outcome(&system, 1u, CIS_OUTCOME_SUCCESS) != CIS_OK ||
        system.state.values[0] != 1 || system.trace_count != 2u ||
        cis_opportunity(&system, &projection, assistant_index, send_index, 0u,
                        10000u, 0, 0u, &target, 1u, &after) != CIS_OK ||
        after.believed_available || after.capable ||
        cis_measure_opportunity_mismatch(&after) != 0u) return 1;

    puts("PASS: unsupported claim rejected; limitation recovery recorded");
    return 0;
}
