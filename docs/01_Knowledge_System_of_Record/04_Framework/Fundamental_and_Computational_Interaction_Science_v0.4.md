# Fundamental and Computational Interaction Science

## Declared Worlds, Governed Projections, and Empirical Interaction

**Version:** Draft 0.4  
**Status:** Concept Paper

## Abstract

Fundamental and Computational Interaction Science are complementary but distinct.

Computational Interaction Science is a proposed research program for studying interaction as an explanatory target. It separates domain commitments, state, semantics, projection, representation, interpretation, opportunity, coupling, interaction episodes, behavior, measurement, similarity, strategy, and evidence so that their relationships can be examined rather than assumed.

Fundamental is a representation-independent computational substrate. It can declare model commitments, evolve state, apply operational semantics, generate governed projections, expose typed operations, and preserve inspectable snapshots, diffs, and replay. It is not a philosophical ontology, a theory of human meaning, or evidence that CIS is correct.

The connection is methodological. CompInt requires controlled distinctions and contract-based provenance. Fundamental can make a subset of those distinctions executable, including projection, opportunity, interaction-state, replay, and comparison inputs.

## 1. The shared problem

Most software systems tightly bind:

- domain model;
- application state;
- rendering;
- available controls;
- user-facing interpretation;
- telemetry.

When these move together, a representation change often changes the modeled system, executable action set, or instrumentation. Researchers cannot determine whether a behavioral difference came from projection, implementation, authority, latency, semantics, or task structure.

CIS requires those sources of variation to be declared separately.

Fundamental supplies an architecture in which they can be separated enough to inspect and manipulate.

## 2. Fundamental’s supported claim

The earlier claim that Fundamental preserves a universal semantic reality was too strong.

The defensible claim is:

> Fundamental can preserve declared domain commitments, identities, relations, constraints, state transitions, and selected operational semantics across governed projections, within explicit scope and equivalence conditions.

Fundamental does not guarantee:

- identical human interpretation;
- equal understanding;
- behavioral equivalence;
- cultural neutrality;
- accessibility equivalence;
- invariant information under every theory;
- invariant implementation cost;
- observer-independent meaning.

## 3. Computational roles

### Domain commitments

Bodies, identities, relationships, constraints, rules, and contracts instantiate a declared model of what the runtime admits.

These are computational commitments, not metaphysical proof about what exists.

### System state

The runtime contains the current modeled condition: registered bodies, relationships, metrics, active patterns, transitions, history, and other declared state.

### Operational semantics

Forces, relationships, contracts, update rules, and host operations assign transition behavior to declared state.

The semantics is operational and inspectable. It does not by itself establish human meaning.

### Projection

A Fundamental projection maps selected state or semantic relations into a host-accessible form.

A projection may target:

- DOM and CSS;
- Canvas or SVG;
- native UI;
- sound or haptics;
- spatial systems;
- agent-readable JSON;
- diagnostics;
- headless queries;
- physical installations.

Projection is replaceable, but not neutral.

### Representation

The host realizes a representation with introduced ordering, geometry, grouping, salience, modality, latency, interaction operations, and accessibility conditions.

### Opportunity

A projection may alter:

- which runtime operations are exposed;
- which actions are signaled;
- which actions an observer believes are available;
- sequence cost;
- feedback;
- auditability;
- recovery visibility;
- actual feasibility when the projection gates operations.

Fundamental can declare and inspect the system-relative portion of an opportunity profile. Agent belief and interpretation require empirical measurement.

## 4. Projection as a governed contract

A Fundamental projection should declare:

- source model and version;
- target host or modality;
- mapping rule;
- preserved identities and relations;
- transformed properties;
- omitted properties;
- introduced properties;
- exposed operations;
- signifiers and feedback;
- update correspondence;
- observer and accessibility assumptions;
- intended use;
- uncertainty and latency;
- failure conditions.

A projection is valid for a claim only when the contract is appropriate to that claim.

“Shows the same world” is not sufficient.

## 5. Scoped invariance

Fundamental can support tests of typed invariance:

- stable identity across hosts;
- preservation of declared relationships;
- query or inferential equivalence;
- trace or transition equivalence;
- compatible state snapshots;
- operation correspondence;
- accessibility of declared content;
- behavioral or task equivalence through external studies.

The first group can often be verified computationally. The latter claims require empirical evidence.

## 6. Why portability follows

Fundamental has been implemented across languages and environments because its central commitments are not tied to a particular rendering library.

Portability comes from the separability of:

```text
declared model
operational state
projection contract
host realization
```

The code is portable because the conceptual roles are portable.

This does not imply that every implementation is behaviorally or operationally equivalent. Each port must declare preserved semantics, numeric tolerances, timing differences, host limitations, and failure modes.

## 7. Fundamental as a research instrument

Fundamental can support CIS by enabling researchers to:

1. declare one target model;
2. preserve stable identities and transitions;
3. produce multiple projection contracts;
4. verify formal preservation independently;
5. enumerate exposed operations and reachable states;
6. capture snapshots and replay;
7. compare projection-specific opportunity profiles;
8. connect behavioral telemetry to the state and alternatives present at the moment of action.

Its scientific value lies in controlling confounds, not in replacing research methodology.

## 8. Interaction, measurement, similarity, and strategy support

Fundamental can support an **Interaction Contract** by exposing participant roles represented in the model, boundaries, state, coupling channels, preconditions, semantic events, transitions, invariants, failures, and completion conditions. It cannot by itself decide every socially or empirically appropriate episode boundary.

Its snapshots, event traces, and deterministic replay can support the lower levels of a **Behavioral Evidence Contract**, but raw engine events remain records. Semantic action attribution, participant interpretation, and behavioral claims require declared observation and coding rules.

Fundamental can support a **Measurement Contract** by preserving source variables, formulas, versions, missingness, timing, and provenance. It cannot turn a metric into a validated human construct.

It can also support a **Similarity Contract** by providing stable identifiers, correspondence mappings, state and transition models, projection contracts, admissible transformation checks, typed distances, and replayable cases. The default result should remain a typed profile rather than a scalar ranking.

Strategy is mostly outside the runtime. Fundamental may represent or execute an artificial policy and can supply evidence about information requests, switching, recovery, and action selection. Human or collective strategy remains a latent attribution requiring rival models, diagnostic interventions, uncertainty, and external analysis.

## 9. What remains outside Fundamental

Fundamental should not own:

- participant identity and consent;
- study assignment and randomization;
- cultural or demographic inference;
- psychometric constructs;
- belief measurement;
- qualitative interpretation;
- statistical analysis;
- causal identification;
- longitudinal participant records;
- publication claims.

Those belong to a separate research layer.

## 10. Relationship to CompInt

CIS supplies the explanatory questions:

- Which properties remain invariant?
- Which projection properties reorganize epistemic access?
- Which actions are feasible, exposed, signaled, believed, and recoverable?
- Which behavioral differences survive controls?
- Which models outperform existing integrated accounts?

Fundamental supplies a controlled computational substrate for some of those questions.

Neither proves the other.

## 11. Current architectural statement

A concise description is:

> Fundamental is a representation-independent computational substrate for declaring domain commitments, evolving system state, assigning operational semantics, and producing governed projections whose preservation, transformation, omission, introduced structure, operations, snapshots, and replay can be inspected.

A concise statement of the relationship is:

> Computational Interaction Science studies the relations among declared systems, projections, interpretation, opportunity, coupling, behavior, measurement, similarity, and strategy; Fundamental makes a bounded subset of those relations executable, replayable, and inspectable.

## 12. Falsification and limits

The claimed relationship should be narrowed if:

- projection and source model cannot be separated in practice;
- ports fail to preserve declared operational semantics;
- projection contracts add no diagnostic or experimental value;
- opportunity structures cannot be enumerated reliably;
- behavioral studies gain no explanatory value from Fundamental’s state and replay;
- a simpler architecture controls the same variables with less complexity.

## Conclusion

Fundamental is not merely a renderer, but neither is it a complete theory of meaning or interaction.

Its distinctive contribution is architectural explicitness:

```text
model commitments
≠ state
≠ operational semantics
≠ projection
≠ host representation
≠ interpretation
≠ behavior
```

That separation makes projection replaceable, preservation claims testable, and interaction experiments less confounded.

CIS explains why those distinctions matter scientifically. Fundamental provides one way to instantiate them computationally.
