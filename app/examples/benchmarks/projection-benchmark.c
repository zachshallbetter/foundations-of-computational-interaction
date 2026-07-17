#include "cis.h"

#include <stdio.h>

/*
 * CIS-EX-006 — GUI/CLI Projection Benchmark
 *
 * Holds domain state and semantics constant while two interfaces vary action
 * exposure and signaling. This tests scoped projection invariance without
 * treating interface similarity as interaction equivalence.
 */

int main(void)
{
    CisDomain domain;
    CisAction save;
    CisState initial = {{7}, 1};
    CisSystem system;
    CisProjection gui;
    CisProjection cli;
    CisProjectedState gui_state;
    CisProjectedState cli_state;
    CisOpportunity gui_opportunity;
    CisOpportunity cli_opportunity;
    CisPredicate target;
    CisComparison comparison;
    uint8_t value_index;
    uint8_t save_index;
    uint8_t participant_index;

    cis_domain_init(&domain);
    if (cis_domain_add_variable(&domain, "document_value", 0, 9,
                                &value_index) != CIS_OK) return 1;
    cis_action_init(&save, "save");
    save.required_capabilities = 1u;
    save.permitted_roles = 1u;
    if (cis_action_add_precondition(&save,
            (CisPredicate){value_index, CIS_PRED_GE, 0}) != CIS_OK ||
        cis_domain_add_action(&domain, &save, &save_index) != CIS_OK ||
        cis_system_init(&system, &domain, &initial) != CIS_OK ||
        cis_system_add_participant(&system, "editor", 0u, 1u,
                                   &participant_index) != CIS_OK) return 1;

    cis_projection_init(&gui);
    gui.exposed_actions = UINT32_C(1) << save_index;
    gui.signaled_actions = UINT32_C(1) << save_index;
    cis_projection_init(&cli);
    cli.exposed_actions = UINT32_C(1) << save_index;
    if (cis_projection_add_field(&gui, "document_value", value_index, 1, 0,
                                 CIS_FIELD_PRESERVED) != CIS_OK ||
        cis_projection_add_field(&cli, "document_value", value_index, 1, 0,
                                 CIS_FIELD_PRESERVED) != CIS_OK ||
        cis_project(&gui, &system.state, &gui_state) != CIS_OK ||
        cis_project(&cli, &system.state, &cli_state) != CIS_OK) return 1;

    target = (CisPredicate){value_index, CIS_PRED_EQ, 7};
    if (cis_opportunity(&system, &gui, participant_index, save_index, 1u,
                        10000u, 0, 0u, &target, 0u,
                        &gui_opportunity) != CIS_OK ||
        cis_opportunity(&system, &cli, participant_index, save_index, 1u,
                        10000u, 0, 0u, &target, 0u,
                        &cli_opportunity) != CIS_OK) return 1;

    comparison = cis_compare_projections(&gui_state, &cli_state);
    if (!comparison.comparable || !comparison.equivalent ||
        comparison.similarity_permyriad != 10000u ||
        !gui_opportunity.exposed || !cli_opportunity.exposed ||
        !gui_opportunity.signaled || cli_opportunity.signaled) return 1;

    puts("PASS: state projection invariant; signaling intentionally differs");
    return 0;
}
