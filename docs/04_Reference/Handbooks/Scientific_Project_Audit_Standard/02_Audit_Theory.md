# Scientific audit theory

## Audit ontology

The standard uses the following hierarchy:

```text
Research program
-> Project
-> Artifact
-> Contribution
-> Claim
-> Construct
-> Representation
-> Observation
-> Evidence
-> Measurement
-> Inference
-> Conclusion
-> Recommendation
```

### Research program

A coordinated body of work pursuing related scientific objectives over time.

### Project

A bounded effort that produces one or more scientific contributions.

### Artifact

A document, dataset, instrument, implementation, schema, model, protocol, or other inspectable output.

### Contribution

A scientifically relevant addition, correction, synthesis, method, representation, result, or infrastructure artifact.

### Claim

A proposition asserted, tested, derived, estimated, or defended.

### Construct

A concept used to characterize a phenomenon or relation.

### Representation

A structured expression of selected properties of a scientific object.

### Observation

A recorded state, event, trace, judgment, or measurement produced through a declared observation model.

### Evidence

An observation or derivation admitted as support for or against a claim under stated warrants.

### Measurement

A rule-governed assignment or estimation of values for a declared measurand.

### Inference

A justified transition from evidence to a claim, estimate, explanation, prediction, or decision.

### Conclusion

A bounded statement warranted by the audited evidence and inference.

### Recommendation

A proposed action that depends on scientific conclusions plus explicit normative, practical, or risk assumptions.

## Claim taxonomy

Each material claim must be classified as one or more of:

- definitional;
- ontological;
- semantic;
- logical;
- formal;
- descriptive;
- measurement;
- associational;
- causal;
- explanatory;
- predictive;
- intervention;
- generalization;
- normative.

The required evidence must match the claim type. A claim may change type across a paper; each transition must be explicit.

## Dependency graph

For each thesis-critical claim, the audit must construct a dependency graph connecting:

```text
Construct
-> Representation
-> Observation
-> Measure
-> Analysis
-> Inference
-> Claim
```

Every edge must identify:

- source artifact;
- transformation or warrant;
- assumptions;
- uncertainty;
- failure conditions;
- scope.

An undocumented edge is not presumed valid.

## Evidence graph

Evidence must be traceable from raw source to conclusion. The recommended levels are:

1. raw record;
2. verified observation;
3. coded observation;
4. derived measure;
5. model-based estimate;
6. construct evidence;
7. mechanism evidence;
8. generalized claim.

Movement between levels requires an explicit transformation, model, or warrant.

## Fatal gates and graded dimensions

Fatal gates establish minimum scientific eligibility. Graded dimensions distinguish levels of quality among eligible projects.

A failed gate cannot be offset by high scores elsewhere. A low dimension score may be remediable without invalidating the entire project, depending on claim criticality.

## Unassessable status

When required information is absent, the auditor must mark the item `unassessable`. Missing evidence must not be converted into a neutral or favorable score.

An unassessable thesis-critical item blocks a passing verdict unless the project's stated maturity and claims make the item legitimately non-applicable.

## Applicability

Every criterion must be marked:

- required;
- optional;
- not applicable;
- unassessable.

`Not applicable` requires a rationale. It must not be used to avoid an unfavorable result.
