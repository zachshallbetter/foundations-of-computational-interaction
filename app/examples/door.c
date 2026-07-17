#include "cis.h"

#include <inttypes.h>
#include <stdio.h>

/*
 * CIS-EX-001 — Minimal Door Transition
 *
 * Smallest complete use of the substrate: declare one bounded state cell,
 * assign operational semantics to one action, authorize one participant,
 * commit one transition, project the resulting state, and print its stable
 * hash. See examples/README.md for the concept and validation contract.
 */

int main(void)
{
    CisDomain domain;
    CisAction open;
    CisState initial = {{0}, 1};
    CisSystem system;
    CisProjection projection;
    CisProjectedState view;
    uint8_t position;
    uint8_t open_index;
    uint8_t person;
    CisResult result;

    cis_domain_init(&domain);
    result = cis_domain_add_variable(&domain, "door_open", 0, 1, &position);
    if (result != CIS_OK) return 1;

    cis_action_init(&open, "open");
    open.required_capabilities = 1u;
    open.permitted_roles = 1u;
    if (cis_action_add_precondition(&open,
            (CisPredicate){position, CIS_PRED_EQ, 0}) != CIS_OK ||
        cis_action_add_effect(&open,
            (CisEffect){position, CIS_EFFECT_SET, 1}) != CIS_OK ||
        cis_domain_add_action(&domain, &open, &open_index) != CIS_OK ||
        cis_system_init(&system, &domain, &initial) != CIS_OK ||
        cis_system_add_participant(&system, "person", 0, 1u, &person) != CIS_OK) {
        return 1;
    }

    cis_projection_init(&projection);
    projection.exposed_actions = UINT32_C(1) << open_index;
    projection.signaled_actions = UINT32_C(1) << open_index;
    if (cis_projection_add_field(&projection, "door_open", position, 1, 0,
                                 CIS_FIELD_PRESERVED) != CIS_OK ||
        cis_execute(&system, person, open_index, 1u) != CIS_OK ||
        cis_project(&projection, &system.state, &view) != CIS_OK) {
        return 1;
    }

    printf("state=%" PRId64 " events=%u hash=%" PRIu64 "\n",
           view.values[0], (unsigned)system.trace_count,
           cis_state_hash(&system.state));
    return 0;
}
