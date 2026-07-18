# Scientific audit methodology

## Stage 1 - Register the audit

Record:

- project identifier and version;
- audit date;
- auditor or audit team;
- audit purpose;
- unit of evaluation;
- included and excluded artifacts;
- project type;
- declared scientific objective;
- primary contribution;
- intended users and decisions;
- target population, domain, and scope;
- maturity claimed by the project;
- weighting profile;
- conflicts of interest.

## Stage 2 - Build the claim inventory

For every material claim, record:

- stable claim identifier;
- exact claim text;
- claim type;
- location;
- importance;
- scope;
- assumptions;
- required evidence;
- supplied evidence;
- alternative explanations;
- falsification or revision condition;
- current support status.

Claims central to the thesis must be marked `critical`.

## Stage 3 - Apply fatal validity gates

### G1 - Object coherence

Pass only when the object of study, unit of analysis, identity conditions, and boundaries remain coherent across the project.

### G2 - Claim-evidence compatibility

Pass only when the supplied evidence can support the stated claim type in principle.

### G3 - Measurement legitimacy

Pass only when every thesis-critical measure has a declared construct, measurand, observation model, operationalization, estimator, scale, and uncertainty account.

### G4 - Inferential validity

Pass only when the analysis and assumptions support the stated inference without circularity, leakage, or scope inflation.

### G5 - Reproducibility sufficiency

Pass only when an independent reviewer can reconstruct the evidence-generating process to the degree appropriate for the project type.

### G6 - Integrity, ethics, and governance

Pass only when provenance, consent, privacy, safety, conflicts, deviations, and research-integrity requirements are satisfied.

Each gate result must include evidence, rationale, consequence, and remediation condition.

## Stage 4 - Audit the dependency chain

For each critical claim:

1. identify the construct;
2. identify its canonical definition;
3. identify the representation used;
4. identify projection or transformation steps;
5. identify the observation model;
6. identify admitted evidence;
7. identify the measure or formal derivation;
8. identify the inferential rule;
9. identify the conclusion;
10. inspect every dependency for validity and uncertainty.

Report missing, circular, ambiguous, lossy, or unjustified transitions.

## Stage 5 - Score scientific dimensions

Apply the dimensions in `04_Scientific_Dimensions.md`. For each dimension, record:

- applicability;
- raw score;
- weight;
- evidence-confidence coefficient;
- evidence references;
- defects;
- remediation.

Scores must be evidence-backed. Style, confidence, authority, and apparent sophistication are not evidence.

## Stage 6 - Audit formulas and quantitative claims

For every formula, statistic, objective function, threshold, composite score, or derived quantity:

1. define every symbol;
2. state the intended construct or estimand;
3. state units and scale type;
4. verify dimensional and algebraic consistency;
5. identify assumptions and domain restrictions;
6. verify parameter estimation;
7. inspect sensitivity to inputs and choices;
8. inspect uncertainty propagation;
9. verify interpretation against the formula's actual output;
10. compare against simpler alternatives;
11. identify failure and undefined conditions;
12. reproduce at least one worked calculation where practical.

A formula may be mathematically correct and scientifically invalid. Both levels must be reviewed.

## Stage 7 - Evaluate comparative gain and burden

Identify the baseline or reduced alternative. Evaluate whether the project adds demonstrable value in reliability, validity, discrimination, explanation, prediction, intervention, transfer, error detection, or coordination.

Record added complexity, operational burden, maintenance cost, and introduced risk. Conceptual distinguishability alone does not establish scientific utility.

## Stage 8 - Classify maturity

Assign the maturity level defined in `05_Formulas_and_Scoring.md`. The assigned level must reflect demonstrated state, not aspiration.

## Stage 9 - Determine grade and verdict

Calculate the eligible score, apply dependency penalties, and report fatal-gate status separately. Then issue one verdict:

- Accept;
- Accept with minor revisions;
- Revise;
- Reframe;
- Rebuild;
- Reject.

## Stage 10 - Produce the remediation plan

Every material defect must have:

- defect identifier;
- severity;
- affected claims;
- required correction;
- required evidence;
- acceptance criterion;
- owner if known;
- dependency order.

Remediation must be prioritized by scientific risk, not editorial convenience.
