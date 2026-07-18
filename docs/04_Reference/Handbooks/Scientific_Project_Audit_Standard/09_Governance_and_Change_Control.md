# Governance and change control

## Status model

The standard uses the following statuses:

- Draft;
- Candidate;
- Adopted;
- Deprecated;
- Superseded.

Only an adopted version may be treated as a repository-wide grading authority.

## Versioning

Use semantic versioning:

- major version for normative changes that alter grades, gates, ontology, or interpretation;
- minor version for backward-compatible additions;
- patch version for editorial corrections that do not alter outcomes.

Every report must record the exact standard version used.

## Change classes

### Editorial

Changes wording, examples, formatting, or navigation without changing meaning.

### Structural

Reorganizes documents or reporting artifacts without changing criteria.

### Normative

Changes a definition, gate, score, weight, formula, grade boundary, applicability rule, or required artifact.

Normative changes require explicit review and migration guidance.

## Formula governance

Every scoring formula must have:

- an identifier;
- a scientific purpose;
- a derivation or rationale;
- bounded inputs;
- defined missing-data behavior;
- sensitivity analysis;
- test cases;
- known limitations;
- version history.

No formula may be adopted solely because it produces intuitively appealing rankings.

## Calibration

Before repository-wide adoption, the standard should be calibrated on a diverse set of projects, including:

- a strong conceptual paper;
- a weak conceptual paper;
- a formal model;
- a measurement system;
- an empirical study;
- a computational implementation;
- a dataset;
- a replication;
- a research program.

Calibration must inspect:

- inter-auditor agreement;
- grade stability;
- sensitivity to weights;
- sensitivity to confidence coefficients;
- gate consistency;
- false reassurance;
- false rejection;
- workload and documentation burden.

## Auditor disagreement

Independent scores should be preserved before reconciliation. The report must distinguish:

- factual disagreement;
- criterion interpretation disagreement;
- weighting disagreement;
- evidence-quality disagreement;
- value judgment.

Consensus must not erase material dissent.

## Conflict of interest

Auditors must disclose authorship, supervision, funding, institutional, competitive, or personal relationships that could affect judgment. Self-audits are permitted but must be labeled and should not be treated as independent validation.

## Appeals and revision

A project may be re-audited when:

- material evidence is added;
- critical defects are corrected;
- scope changes;
- the standard changes materially;
- the prior audit contained a factual or procedural error.

The new audit must preserve the earlier report and state what changed.
