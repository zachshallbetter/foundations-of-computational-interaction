# Scoped Invariance Under Projection

## Typed Preservation Across Computational Representations

**Version:** Draft 0.4  
**Status:** Proposed Theory

## Abstract

Unqualified semantic invariance under projection is too strong.

Representations are selective and constructive. They may preserve identities, relations, denotations, transitions, or task-relevant distinctions while changing salience, grouping, access paths, available operations, interpretation, effort, and behavior.

The defensible principle is scoped and typed:

> A projection may preserve declared ontological, semantic, informational, structural, computational, inferential, task, behavioral, opportunity, or interactional properties only under specified target, mapping, interpretation, observer, context, metric, and tolerance conditions.

This paper states the current theory and incorporates the later findings on relational meaning, typed opportunity, strict interaction episodes, measurement, similarity, and strategy.

## 1. Target and representation

A representation is not identical with its target.

A representation relation minimally involves:

- a target or source domain;
- a realized vehicle;
- a mapping or construction rule;
- an interpretation rule or practice;
- an observer or use context.

A projection is the declared transformation that produces the accessible representation.

## 2. Relational meaning

The source model is not a single observer-independent semantic layer.

Relevant roles include:

- domain commitments;
- system state;
- semantic assignment;
- projection;
- representation;
- interpretation;
- opportunity;
- behavior.

They are distinguishable but recursively related. Representation and interpretation may revise later semantics or ontology. Behavior changes state and future opportunity.

## 3. Representation is constructive

A projection may introduce properties absent from the source description:

- coordinate systems;
- ordering;
- grouping;
- hierarchy;
- proximity;
- salience;
- defaults;
- notation;
- modality;
- interaction operations;
- latency;
- ambiguity;
- perceptual cost;
- recovery paths.

A dependency graph rendered as a table and as a spatial network can preserve declared edges while creating different comparison and action structures.

## 4. Typed invariance

An invariance claim must declare what remains stable.

### Ontological invariance

Declared entities, identity conditions, categories, or relations remain stable.

### Semantic invariance

Denotation, truth conditions, operational behavior, or inferential consequences remain stable under a specified semantics.

### Informational invariance

Declared distinctions remain recoverable under a specified source, code, model, relevance relation, or distortion measure.

### Structural invariance

Selected relations and operations are preserved.

### Topological invariance

Continuity, adjacency, or neighborhood relations are preserved.

### Computational invariance

Declared observable execution behavior is equivalent.

### Inferential invariance

Answers or consequences for a specified query or logic class are preserved.

### Task invariance

Outcome distributions remain within tolerance for a specified task and population.

### Behavioral invariance

Declared action or outcome distributions remain within tolerance for a specified population and context.

### Opportunity invariance

The relevant feasible, permitted, enabled, reachable, exposed, signaled, believed, and recoverable action relations remain equivalent for a declared agent class and task.

### Interactional invariance

The participant-coupling-transition-recurrence structure remains equivalent under specified boundaries, timescales, authority, task, context, observables, and tolerance conditions.

### Measurement invariance

The relation between observations and measured variables remains sufficiently stable across groups, modalities, instruments, or contexts to support the intended comparison.

### Strategy invariance

A declared higher-order organization of criteria, state abstraction, information policy, conditional selection, commitment, recovery, and switching remains equivalent across contexts, even when surface actions or traces differ.

No type entails another without evidence.

## 5. Formal condition

Let:

- `T` be the declared target domain;
- `R₁` and `R₂` be representation domains;
- `p₁: T → R₁` and `p₂: T → R₂` be projection functions;
- `J₁` and `J₂` be independently specified comparison or interpretation functions;
- `Q` be the property family claimed invariant;
- `D` be the observer-task-context distribution;
- `ε` be the tolerance.

Scoped invariance holds when `J₁(p₁(t))` and `J₂(p₂(t))` agree on `Q` within `ε` for all relevant `t` and conditions in `D`.

The claim is circular when `Q` is defined only as “the meaning judged to be the same.”

## 6. Opportunity under projection

Projection affects more than visibility.

For an action, distinguish:

- domain validity;
- capability;
- permission;
- current enablement;
- reachable outcomes;
- exposure;
- signaling;
- believed availability;
- expected consequence;
- reversibility;
- selection;
- execution;
- success.

A projection may preserve transition semantics while changing exposure, signaling, belief, path length, feedback, recovery visibility, or auditability. It may also change actual feasibility by gating operations.

Therefore:

> Semantic equivalence does not imply opportunity equivalence.

And:

> Opportunity equivalence does not imply behavioral or interpretive equivalence.

## 7. Comparison protocol

A valid comparison should:

1. declare the target, ontology or domain commitments, action vocabulary, and authority;
2. declare each projection contract;
3. verify transition-level and semantic equivalence independently;
4. specify the candidate invariance type;
5. inventory preservation, transformation, omission, and introduction;
6. inventory feasible, permitted, enabled, reachable, exposed, signaled, and recoverable actions;
7. declare observer population, language, training, modality, accessibility, task, and context;
8. measure believed actions and expected consequences separately from behavior;
9. distinguish direct observations, derived features, and latent inference;
10. control latency, reliability, familiarity, motor cost, implementation quality, and order;
11. state metrics, uncertainty, tolerances, and failure conditions.

## 8. Evidence requirements

Formal preservation and empirical equivalence require different evidence.

Formal evidence may include:

- stable identifiers;
- commuting diagrams;
- logical consequence;
- query equivalence;
- refinement;
- bisimulation;
- reconstruction;
- constraint satisfaction;
- verified transition correspondence.

Empirical evidence may include:

- discovery rates;
- latency;
- belief calibration;
- action sequences;
- error types;
- recovery;
- learning;
- transfer;
- confidence;
- strategy diversity;
- accessibility and effort.

Equal task completion alone is insufficient.

## 9. Typed comparison and incomparability

Scoped invariance is one part of the broader Interaction Similarity framework. A comparison must distinguish token identity, type identity, exact equivalence, approximate equivalence, graded similarity, unknown status, and incomparability.

A comparison specification should declare:

```text
K = <target, frame, mapping, observables, transformations, distances, weights, tolerance, uncertainty, validity>
```

A projection pair may be semantically equivalent but opportunity-different, trace-similar but causally different, or outcome-equivalent but strategy-different. When boundaries, correspondence mappings, scales, observation models, or validity domains cannot be aligned without unsupported assumptions, the correct result is incomparable rather than a forced low score.

Scalar aggregation is optional and requires a defensible measurement model. It must not allow a critical failure in permission, accessibility, safety, or recovery to be numerically hidden by superficial similarity elsewhere.

## 10. Implications for Fundamental

Fundamental should support scoped invariance by making the following explicit:

- domain and state authority;
- identities and relation semantics;
- transition rules;
- projection contracts;
- exposed operations;
- omitted and introduced properties;
- snapshots, diffs, and replay;
- numeric and temporal tolerances;
- host-specific limitations.

Fundamental can verify many formal invariants. Behavioral, interpretive, and opportunity claims require external empirical studies.

## 11. Falsification

The theory should be narrowed or rejected if:

- candidate invariants cannot be specified independently;
- projection contracts reveal no useful non-equivalence;
- one established framework provides the same comparative discipline with fewer assumptions;
- representation and implementation cannot be separated in the target domain;
- typed opportunity variables cannot be measured reliably;
- controlled projection changes produce no access, opportunity, behavior, learning, or transfer differences;
- scoped invariance adds no explanatory, predictive, or intervention gain.

## 12. Limits

Scoped invariance does not imply:

- complete preservation;
- observer-independent meaning;
- identical interpretation;
- equal understanding;
- equal accessibility;
- equal cognitive effort;
- equal behavior;
- equal recovery;
- cultural neutrality;
- implementation independence in every domain.

## Conclusion

The scientifically defensible principle is not that reality or meaning remains unchanged whenever a projection changes.

It is:

> **Declared properties may remain invariant across projections only within explicit scope, interpretation rules, observer conditions, equivalence type, measurement procedure, and tolerance.**

The strength of the principle comes from what it forces researchers and system builders to declare.

Projection becomes scientifically useful when preservation and difference are inspectable rather than assumed.
