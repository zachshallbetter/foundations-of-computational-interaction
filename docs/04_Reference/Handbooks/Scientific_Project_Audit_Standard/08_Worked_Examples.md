# Worked audit examples

## Purpose

Worked examples calibrate interpretation of the standard. They are illustrative and must not be treated as substitutes for project-specific evidence.

## Example 1 - Conceptually strong, empirically immature ontology

### Project

A paper proposes twelve distinctions for action opportunity and provides definitions, boundary cases, and comparisons with affordance, permission, reachability, and capability.

### Findings

- Problem significance: strong.
- Contribution clarity: strong.
- Ontological coherence: strong but two categories overlap.
- Semantic precision: adequate.
- Formal adequacy: partial; no machine-checkable representation.
- Measurement validity: not yet claimed.
- Evidence quality: conceptual and literature-based.
- Comparative gain: not demonstrated empirically.
- Reproducibility: argument and examples are inspectable.

### Result

- Gate status: pass for a conceptual project.
- Maturity: M1 or M2, depending on formal completeness.
- Verdict: Revise.
- Required next step: resolve overlap and test whether independent coders can apply the distinctions reliably.

The project may receive a high quality grade at M2 but must not be described as empirically validated.

## Example 2 - High predictive accuracy with target leakage

### Project

A model predicts task failure with 97 percent accuracy. One input field is populated after the task has completed.

### Findings

- Predictive score: apparently strong.
- Claim-evidence compatibility: failed.
- Inferential validity: failed because future information leaks into prediction.
- Reproducibility: possibly strong but scientifically irrelevant to the intended claim.

### Result

- Gate status: NG.
- Verdict: Rebuild.
- Required next step: redefine the information set, retrain, and evaluate on untouched data.

High accuracy cannot compensate for invalid temporal information.

## Example 3 - Reliable instrument with weak construct validity

### Project

A questionnaire produces highly consistent scores but items primarily measure familiarity rather than discoverability.

### Findings

- Reliability: strong.
- Measurement legitimacy: failed for the discoverability claim.
- Convergent evidence: weak.
- Discriminant evidence: failed.

### Result

- Gate status: NG for claims about discoverability.
- Verdict: Reframe or rebuild.
- Possible reframe: treat the instrument as a familiarity measure if supported.

Reliability does not establish that the intended construct is measured.

## Example 4 - Formal model without empirical correspondence

### Project

A mathematically consistent model defines interaction states and transitions but does not specify how states could be observed in actual systems.

### Findings

- Formal adequacy: strong.
- Ontological coherence: adequate.
- Observation dependency: missing.
- Empirical adequacy: unassessable.

### Result

- Maturity: M2.
- Verdict: Accept within formal scope or revise if empirical applicability is claimed.
- Required next step: define observation and measurement contracts before empirical claims are made.

## Example 5 - Added complexity without incremental gain

### Project

A new contract adds six fields, but an ablation study shows no improvement in coding reliability, explanatory discrimination, prediction, transfer, or error detection.

### Findings

- Conceptual completeness: increased.
- Scientific benefit: negligible.
- Complexity and maintenance cost: increased.
- Ablation value: approximately zero.

### Result

- Comparative-gain dimension: deficient.
- Verdict: Revise.
- Required next step: remove the fields or establish a scientifically material use.
