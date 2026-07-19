# A Relational Ontology of Computational Interaction

**Version:** Draft 0.3  
**Status:** Provisional Foundational Model  
**Supersedes:** *A Relational Ontology of Computational Interaction*, Draft 0.2 and *A Canonical Ontology of Interaction*, Draft 0.1

## Abstract

Computational interaction is modeled as a recursive relational system rather than a linear user-interface pipeline. The current ontology incorporates the completed work on representation, scoped invariance, opportunity, interaction, behavior, measurement, similarity, and strategy.

Interaction is not a primitive substance. A strict interaction episode is a bounded interval of reciprocal or recurrent constraint among distinguishable systems through coupling. Behavior is an attributed trajectory under an observation model. Measurement governs how observations become variables and claims. Similarity is typed rather than universal. Strategy is an inferred organization across contingencies rather than an observed sequence.

The ontology coordinates established concepts and reusable contracts. It does not claim metaphysical universality, direct access to cognition, or disciplinary autonomy for Foundations of Computational Interaction (FCI).

## 1. Explanatory target

The primary target is **computational interaction**: interaction in which computation participates in the phenomenon, mediates the relation among participants, or supplies the formal and empirical means of observation.

A strict **interaction episode** is:

> A bounded interval in which two or more distinguishable systems are coupled such that perturbations originating in, or mediated by, one system alter the possible or actual state trajectory of another, and the resulting configuration constrains a later trajectory of an originating or co-participating system within a declared boundary and timescale.

The reciprocal effect may be direct, asymmetric, delayed, probabilistic, or mediated by an environment. A one-way isolated causal effect is not sufficient under the strict definition.

## 2. Core ontological roles

### 2.1 Interaction participant — A

A bounded person, collective, organism, computational process, artificial system, institution, or hybrid arrangement occupying a consequential role. Participation does not imply autonomy, intelligence, consciousness, or learning.

**Agent** is a subtype: an acting participant with an action-selection organization.

### 2.2 Domain commitments — O

The entities, relations, identity conditions, modalities, constraints, and operation vocabulary admitted by the model or inquiry.

### 2.3 State — X

The current physical, computational, social, or modeled condition of participants and environment.

### 2.4 Semantic assignment — S

The rules assigning denotation, content, truth conditions, inferential consequences, or operational behavior to expressions, states, relations, or operations.

### 2.5 Projection — P

A declared transformation from selected state or semantic relations into an accessible representation. Its contract declares preservation, transformation, omission, introduction, operations, assumptions, uncertainty, tolerance, and failure.

### 2.6 Representation — R

The realized vehicle through which selected aspects of a target become accessible. Representation may introduce ordering, grouping, geometry, salience, modality, latency, ambiguity, and operations.

### 2.7 Interpretation — J

The contextual application, recovery, construction, negotiation, or revision of significance by an interpreting participant or practice.

### 2.8 Opportunity profile — Ω

A typed profile of domain validity, capability, permission, enablement, reachability, exposure, signaling, believed availability, expected consequence, reversibility, uncertainty, and associated trace predicates. Opportunity is a coordination framework, not a primitive.

### 2.9 Coupling — C

A pathway through which a participant or shared medium changes another participant's transition structure, probabilities, timing, or reachable states.

### 2.10 Interaction episode — I

A bounded coupled process containing perturbation, uptake, response, and sufficient recurrence or closure for identity.

### 2.11 Behavior — B

A bounded, temporally extended trajectory of observable or instrumentally recoverable changes, outputs, or regulated persistence attributed to a system in relation to its environment under a declared observation and attribution model.

### 2.12 Trace — Tr

A temporally ordered or partially ordered record of observable or attributed events. A trace supports behavioral inference but is not identical with behavior, action, policy, strategy, or mechanism.

### 2.13 Measurement — M

The declared relation by which observations become variables, estimates, constructs, and comparisons. Every measurement requires a measurand, observation process, operationalization, scale, uncertainty, validity evidence, population, task, projection, and permitted interpretation.

### 2.14 Similarity and equivalence — K

Typed comparison relations over tokens, types, structures, protocols, opportunities, traces, behaviors, policies, strategies, outcomes, causes, or measurements. The canonical output is a typed profile, not a universal scalar.

### 2.15 Strategy — Σ

An inferred, temporally extended organization of conditional action selection, information use, resource allocation, and contingency response across a declared class of states. Strategy is latent and requires rival discrimination.

### 2.16 Evidence — E

A provenance-preserving chain connecting records, detection, attribution, measurement, latent interpretation, uncertainty, alternatives, falsifying evidence, and bounded claims.

## 3. Relational architecture

```text
Domain commitments O ↔ State X ↔ Semantic assignment S
                     ↕
                Projection P
                     ↓
             Representation R
                     ↕
              Interpretation J
                     ↕
           Opportunity profile Ω
                     ↕
                 Coupling C
                     ↓
           Interaction episode I
                     ↓
               Behavior B
                     ↓
                 Trace Tr
                     ↓
             Measurement M
                     ↓
        Similarity / equivalence K
                     ↕
               Strategy Σ
                     ↺
       feedback, learning, revision
```

This is a dependency and evidence architecture, not a universal causal pipeline. Strategy and transfer can constrain later interpretation and opportunity; interaction changes state; measurement and comparison depend on declared observation models; interpretation may revise effective semantics.

## 4. Formal scaffolds

An interaction type may be represented as:

```text
I = <A, X, C, E, T, R_c, B_d, K_c>
```

where participants, state, coupling topology, event set, transition kernel, recurrence relation, boundary/timescale, and closure/invariants are declared.

A strategy contract may be represented as:

```text
Σ = <D, X, O_b, Z, C_r, A_r, π, q, k, r, w, τ, ρ, U>
```

where the components declare domain, state, observation, state abstraction, criteria, action repertoire, selection policy, information policy, commitments, recovery, switching, stopping, resources, and uncertainty.

A similarity contract may be represented as:

```text
K = <T, F, M_c, O_s, A_t, D_m, W, ε, U, V>
```

where target type, comparison frame, correspondence mapping, observables, admissible transformations, typed distances, weights, tolerances, uncertainty, and validity domain are declared.

These tuples are analytical contracts, not claims that human cognition literally implements them.

## 5. Contract stack

The research program now uses a coordinated contract stack:

```text
Projection Contract
what a representation preserves, transforms, omits, and introduces

Opportunity Contract
what actions are possible, permitted, enabled, exposed, signaled, believed, and recoverable

Interaction Contract
what episode exists, where its boundary lies, and how coupling and closure occur

Behavioral Evidence Contract
what records, events, attribution, traces, and claims are warranted

Measurement Contract
how observations become variables, estimates, constructs, and comparisons

Similarity Contract
how two targets may be identical, equivalent, similar, unknown, or incomparable

Strategy Contract
how conditional behavioral organization is represented and tested against rivals
```

Each contract has a different source of truth. They must not be collapsed into one schema.

## 6. Identity and comparison

Token identity is historical identity of one bounded episode. Type identity is membership in an abstraction-defined class. Equivalence is exact preservation under a declared contract. Similarity is graded proximity under specified metrics and tolerances. Incomparability is the failure to establish a defensible common space.

Semantic equivalence does not imply opportunity equivalence. Opportunity equivalence does not imply behavioral equivalence. Behavioral equivalence does not imply strategy or causal equivalence. Outcome equivalence does not establish process equivalence.

## 7. Evidence discipline

The minimum evidence progression is:

```text
raw record
→ verified event
→ episode trace
→ descriptive regularity
→ measured variable
→ candidate latent organization
→ rival discrimination
→ transfer or adaptation support
→ causal support
→ mechanistic or formal support
```

Claims may stop at any warranted level. They must not skip levels.

## 8. Participant history and context

Language, skill, training, conventions, prior outcomes, tools, practices, goals, accessibility, and current constraints may alter interpretation, believed actions, opportunity, policy, and strategy. These are mechanistic variables only when operationalized. Demographic or cultural categories are context, not direct proof of latent mechanisms.

## 9. Non-claims

This ontology does not claim that culture determines behavior, interaction history explains entire persons, cognition is directly observed, one grammar captures all interaction, representation is the sole cause of behavior, formalization eliminates ambiguity, one ontology replaces adjacent disciplines, or Fundamental proves FCI.

## 10. Current maturity

| Concept | Status |
|---|---|
| Interaction participant | Proposed |
| Domain commitments, state, semantics | Proposed |
| Projection and representation | Proposed |
| Scoped invariance | Proposed theory |
| Opportunity profile | Proposed coordination framework |
| Interaction episode | Proposed canonical unit |
| Behavior and trace | Proposed |
| Measurement contract | Proposed |
| Typed similarity framework | Proposed |
| Strategy | Proposed latent construct |
| Formal foundation | Under investigation |
| Predictive theory | Open |
| Fundamental as research substrate | Proposed application |
| FCI disciplinary autonomy | Unproven |

## Conclusion

The ontology is a relational architecture for preserving distinctions among target, state, representation, access, coupling, behavior, evidence, comparison, and strategy. Its value depends on reproducible operationalization and comparative explanatory gain, not vocabulary breadth.
