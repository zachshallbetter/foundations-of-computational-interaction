# Research Governance Minimum

This directory defines the minimum operational controls for FCI studies. It
does not replace institutional, legal, ethical-review, accessibility, security,
or community-specific requirements.

Before collection, a study must record responsible owner, review authority,
purpose, lawful/ethical basis, consent or approved alternative, participant
population, data inventory, access roles, retention/deletion schedule, export
and reuse terms, incident contact, and protocol-deviation procedure.

## Data controls

- collect only fields required by the frozen protocol;
- separate direct identifiers from research records and use study-local keys;
- deny access by default and review access periodically;
- encrypt transfers and protected storage using institution-approved controls;
- log exports, transformations, deletions, and access to sensitive records;
- prohibit raw sensitive records in examples, logs, prompts, and public bundles;
- honor withdrawal, correction, deletion, and reuse terms defined by the study;
- review subgroup, accessibility, and community harms before release.

## Machine-checkable instruments

Governance records validate against draft-2020-12 JSON Schemas in this directory:

- `consent-record.schema.json` — per-participant consent, amendment, and withdrawal records.
- `ethics-gate-assessment.schema.json` — the eight non-compensatory ethics and power gates; any applicable gate that is failed or unassessed requires a recorded resolution before release.
- `data-management-plan.schema.json` — the frozen, study-specific instance of the Participant Data Management Plan.

Schema validation checks structure only; it does not establish that a study's controls, consent, or gate resolutions are substantively adequate.

## Incident and deviation handling

Contain exposure, preserve an audit record, notify the responsible authority,
assess participant impact, and document remediation. Protocol deviations must
state when, why, affected records, analytical consequence, authorization, and
whether collection or analysis was paused. They must never be hidden by editing
the frozen contract in place.
