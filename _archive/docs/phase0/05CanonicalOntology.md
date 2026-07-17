# Deliverable 05: Canonical Ontology of Computational Interaction

**Program:** Computational Interaction Science (CompInt)  
**Date:** 2026-07-17  
**Status:** Canonical Reference Model  

This document defines the canonical ontology terms of Computational Interaction Science (CompInt) in the required format. These terms govern the reference implementation (`cis.h`) and experimental schemas.

---

### Term 01: compint.domain_commitments
*   **Label:** Domain Commitments
*   **Status:** accepted
*   **Definition:** The system of declared entities, roles, variables, action vocabularies, constraints, and transition rules admitted by a model or interface study.
*   **Scope:** Bounding the variables and actions that are executable or readable in the computational environment.
*   **Exclusions:** Metaphysical commitments, user beliefs, or cognitive structures.
*   **Parents:** None
*   **Children:** compint.system_state, compint.action
*   **Relations:** Guides the creation of `compint.projection` and bounds `compint.opportunity_profile`.
*   **Existing Equivalents:** Conceptual Model, Database Schema, Domain Model.
*   **Operationalization:** The initial declaration of state variables, actions (with preconditions and effects), and invariants in the system.
*   **Measures:** Count of declared variables, action set cardinality, constraint count.
*   **Predictions:** An action outside the domain commitments cannot be executed, replayed, or represented.
*   **Threats:** Conflating domain commitments with the user's mental model or physical reality.
*   **Source Basis:** Simon (1962), Wittgenstein (1953)
*   **Paper Dependencies:** Computational Interaction Science Foundations

---

### Term 02: compint.system_state
*   **Label:** System State
*   **Status:** accepted
*   **Definition:** The physical, computational, or modeled condition of the environment and participants at a specific time.
*   **Scope:** Bounded vector of state values (such as the signed 64-bit cells in the C Reference kernel).
*   **Exclusions:** Unrecorded user mental states, external environmental noise not captured by the model, and visual display buffers (which belong to representation).
*   **Parents:** compint.domain_commitments
*   **Children:** None
*   **Relations:** Transformed by `compint.projection` into `compint.representation`; mutated by `compint.action`.
*   **Existing Equivalents:** Program State, System Variables, Memory Buffer.
*   **Operationalization:** The values of all active state variables at tick $t$.
*   **Measures:** FNV-1a state hash, integer values, variable-specific bounds checks.
*   **Predictions:** State transitions follow deterministic effects unless external perturbation occurs.
*   **Threats:** Implicit state variables (unregistered variables) that alter transitions silently.
*   **Source Basis:** von Bertalanffy (1968)
*   **Paper Dependencies:** Formal Models of Computational Interaction

---

### Term 03: compint.projection
*   **Label:** Projection
*   **Status:** accepted
*   **Definition:** A declared, contract-governed mapping that transforms the system state or semantic assignments into an accessible representation.
*   **Scope:** Defining what properties are preserved, transformed, introduced, or omitted, and what actions are exposed or signaled.
*   **Exclusions:** The physical rendering itself (representation) or the user's sensory interpretation.
*   **Parents:** compint.domain_commitments
*   **Children:** None
*   **Relations:** Map `compint.system_state` to `compint.representation`; gates `compint.opportunity_profile`.
*   **Existing Equivalents:** View, Model-View-Controller mapping, Rendering function.
*   **Operationalization:** A Projection Contract containing field-level multipliers, offsets, kind declarations, exposure masks, and signaling masks.
*   **Measures:** Projection fidelity ratio, exposure count, signaling count.
*   **Predictions:** Changes in the projection mapping alter discoverability rates and strategy selection even when underlying state transitions remain identical.
*   **Threats:** Assuming projections are transparent or value-neutral.
*   **Source Basis:** Cousot & Cousot (1977), Shimojima (2015)
*   **Paper Dependencies:** Representation, Invariance, and Projection

---

### Term 04: compint.opportunity_profile
*   **Label:** Opportunity Profile
*   **Status:** accepted
*   **Definition:** A multi-dimensional relational profile coordinating feasibility, capability, permission, enablement, reachability, exposure, signaling, and belief for a given participant, action, and state.
*   **Scope:** A coordination framework mapping system properties and participant states to action availability at tick $t$.
*   **Exclusions:** A simple binary "can-click" UI flag, or raw click events (which belong to trace).
*   **Parents:** compint.domain_commitments
*   **Children:** None
*   **Relations:** Constrains the possible values of `compint.trace` and `compint.behavior`.
*   **Existing Equivalents:** Affordance (when generalized), Choice Set, Action Space.
*   **Operationalization:** Evaluating the twelve predicates (domain-valid, capable, permitted, enabled, reachable, exposed, signaled, believed, selected, executed, successful, reversible) for an action.
*   **Measures:** Dimension mismatch scores, reachability path length, signaling visibility ratio.
*   **Predictions:** Mismatches between signaling/exposure and participant belief predict high error and recovery latencies.
*   **Threats:** Conflating physical availability (enablement) with accessibility (exposure/signaling) or user knowledge (belief).
*   **Source Basis:** Gibson (1979), van Glabbeek (1990)
*   **Paper Dependencies:** Opportunity, Affordance, and Action Availability

---

### Term 05: compint.interaction_episode
*   **Label:** Interaction Episode
*   **Status:** accepted
*   **Definition:** A bounded coupled sequence containing perturbation, uptake, response, and recurrence between two or more distinguishable participants.
*   **Scope:** Strictly limited to intervals demonstrating reciprocal constraints and causal closure.
*   **Exclusions:** Uncoupled parallel activities, one-way information feeds, or isolated single inputs without recurrence.
*   **Parents:** compint.domain_commitments
*   **Children:** None
*   **Relations:** Generates `compint.trace` records.
*   **Existing Equivalents:** Session, Dialogue, Conversation.
*   **Operationalization:** A bounded event sequence demonstrating an A-B-A state-changing pattern.
*   **Measures:** Reciprocal closure count, duration, state change magnitude.
*   **Predictions:** Coupling strength determines the stability of the state trajectory across perturbations.
*   **Threats:** Subjective or arbitrary session boundaries that skew recurrence calculations.
*   **Source Basis:** Milner (1980), Beer (1995)
*   **Paper Dependencies:** Interaction as a Scientific Explanandum

---

### Term 06: compint.trace
*   **Label:** Trace
*   **Status:** accepted
*   **Definition:** A temporally ordered or partially ordered record of observable selection, execution, outcome, and hash changes.
*   **Scope:** Bounded system telemetry and event records.
*   **Exclusions:** Behavioral attribution, mental states, and uninstrumented actions.
*   **Parents:** compint.interaction_episode
*   **Children:** None
*   **Relations:** Analyzed to infer `compint.strategy` and `compint.behavior`.
*   **Existing Equivalents:** Event Log, Telemetry Audit, Transaction Log.
*   **Operationalization:** The sequence of `CisEvent` structs stored in the reference substrate.
*   **Measures:** Event count, edit distance, sequence entropy, hash divergence.
*   **Predictions:** Replay of an untampered trace reproduces identical state snapshots.
*   **Threats:** Missing logs or out-of-order event timestamps that corrupt state replay.
*   **Source Basis:** Davidson (1980), Hoare (1985)
*   **Paper Dependencies:** Behavior: Toward a Scientific Theory of Computational Behavior

---

### Term 07: compint.interaction_strategy
*   **Label:** Interaction Strategy
*   **Status:** accepted
*   **Definition:** An inferred, latent organization of conditional action selection, information use, resource allocation, and contingency response across a class of states.
*   **Scope:** Latent cognitive or systemic policy governing behavior across multiple episodes.
*   **Exclusions:** A fixed, linear plan, or a simple click sequence without conditional branching.
*   **Parents:** compint.domain_commitments
*   **Children:** None
*   **Relations:** Generates `compint.behavior` and guides the selection of actions in `compint.opportunity_profile`.
*   **Existing Equivalents:** Cognitive Strategy, Control Policy, Action Plan.
*   **Operationalization:** A Strategy Contract declaring state abstractions, criteria, contingency rules, and rival models.
*   **Measures:** Strategy invariance score, switching rate, recovery efficiency.
*   **Predictions:** Strategy models outperform simple event-transition models when predicting behavior on unfamiliar, structurally equivalent projections.
*   **Threats:** Attributing strategy without evaluating rival explanations (e.g. fatigue or random exploration).
*   **Source Basis:** Newell & Simon (1972), Card, Moran & Newell (1983)
*   **Paper Dependencies:** Interaction Strategies: Toward a Theory of Behavioral Organization
