# Deliverable 13: Glossary of Computational Interaction Science

**Version:** Version 1.0.0  
**Date:** 2026-07-17  
**Status:** Unified System of Record  

This glossary defines the canonical terminology for the Computational Interaction Science (CompInt) program. Every term is marked with a maturity level: **Observation**, **Idea**, **Candidate**, **Proposed**, **Validated**, or **Canonical**.

---

## 1. Core Architectural Terms

### Domain Commitments
*   **Maturity:** Canonical
*   **Status:** accepted
*   **Definition:** The system of declared entities, roles, variables, action vocabularies, constraints, and transition rules admitted by a model or interface study.
*   **Boundary:** Specifies what the model admits. It does not by itself assign meaning or determine user interpretation.
*   **Related Contract:** N/A

### System State
*   **Maturity:** Canonical
*   **Status:** accepted
*   **Definition:** The physical, computational, or modeled condition of the environment and participants at a specific time.
*   **Boundary:** State is not synonymous with data, representation, or observation. It becomes content-bearing only under a specified semantics.
*   **Related Contract:** N/A

### Semantic Assignment
*   **Maturity:** Canonical
*   **Status:** accepted
*   **Definition:** A rule-governed assignment of content, denotation, truth conditions, inferential consequences, or transition behavior to expressions, states, or operations.
*   **Boundary:** Formal semantic assignment is distinct from a person’s subjective interpretation or understanding.
*   **Related Contract:** N/A

### Semantic State
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** The content-bearing assignments and relations currently licensed by a specified semantics for a system or discourse state.
*   **Boundary:** No observer-independent semantic state is assumed without a declared theory and scope.
*   **Related Contract:** N/A

### Projection
*   **Maturity:** Canonical
*   **Status:** accepted
*   **Definition:** A declared, contract-governed mapping that transforms the system state or semantic assignments into an accessible representation.
*   **Boundary:** A projection coordinates views, views of model-morphisms, and renderings. It is not a new physical substance.
*   **Related Contract:** Projection Contract

### Representation
*   **Maturity:** Canonical
*   **Status:** accepted
*   **Definition:** The realized vehicle through which selected aspects of a target become accessible.
*   **Boundary:** A representation is not identical with its target. Equal reference does not imply semantic, inferential, or behavioral equivalence.
*   **Related Contract:** N/A

### Interpretation
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** The application, recovery, construction, negotiation, or revision of semantic relations by an interpreting participant under a context, competence, history, and purpose.
*   **Boundary:** Interpretation is a process or event. Semantics specifies or stabilizes relations; interpretation applies or revises them.
*   **Related Contract:** N/A

---

## 2. Participation & Interaction Terms

### Interaction Participant
*   **Maturity:** Canonical
*   **Status:** accepted
*   **Definition:** Any bounded person, collective, organism, computational process, artificial system, institution, or hybrid arrangement occupying a consequential role within an interaction.
*   **Boundary:** Broadest role category. Participant roles are human participant, computational participant, observer, mediator, autonomous agent, and AI agent.
*   **Related Contract:** Interaction Contract

### Agent
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** An acting interaction participant that selects or produces actions through a policy, rule, control process, intention, or other action-selection organization.
*   **Boundary:** Agent is a subtype of participant. An AI model is not automatically an agent; it becomes part of an agentic system when observations, policies, and consequential operations are supplied.
*   **Related Contract:** Strategy Contract

### Coupling
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** A relation or pathway through which a participant or shared medium can alter another participant's transition structure, probabilities, timing, or reachable states.
*   **Boundary:** Shared state is the minimal mediating pathway through which participant actions alter later possibilities.
*   **Related Contract:** Interaction Contract

### Reciprocity
*   **Maturity:** Candidate
*   **Status:** accepted
*   **Definition:** The mutual feedback property in an interaction episode where perturbations originating in one system influence the state of another system, which in turn influences the originating system.
*   **Boundary:** Distinguishes mutual coupling from single-direction feedforward.
*   **Related Contract:** Interaction Contract

### Recurrent Constraint
*   **Maturity:** Candidate
*   **Status:** accepted
*   **Definition:** A state transition constraint in an interaction episode that is established by the previous actions of a participant, feeding back to restrict or shape their future choices.
*   **Boundary:** The mechanical enforcement of historical path-dependencies.
*   **Related Contract:** Interaction Contract

### Interaction Episode
*   **Maturity:** Canonical
*   **Status:** accepted
*   **Definition:** A bounded interval in which two or more distinguishable systems are coupled such that perturbations originating in, or mediated by, one system alter the possible or actual state trajectory of another, and the resulting configuration constrains a later trajectory of an originating or co-participating system within a declared boundary and timescale.
*   **Boundary:** A single isolated one-way causal effect is not an interaction episode.
*   **Related Contract:** Interaction Contract

---

## 3. Observation & Evidence Terms

### Behavioral Record
*   **Maturity:** Observation
*   **Status:** accepted
*   **Definition:** A raw, uninterpreted log file, video stream, or database entry recording system outputs.
*   **Boundary:** A record is data; it is not yet behavior or evidence.
*   **Related Contract:** Behavioral Evidence Contract

### Verified Observation
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** A behavioral record that has been parsed, cleaned, aligned to a monotonic timeline, and verified for timestamp integrity and cryptographic authenticity.
*   **Boundary:** Refuses unsynchronized or tampered files.
*   **Related Contract:** Behavioral Evidence Contract

### Behavioral Event
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** An event attributed to a specific participant under an explicit detection and coding protocol.
*   **Boundary:** Conflating physical actions (mouse moves) with semantic events (filter commits) is a validity error.
*   **Related Contract:** Behavioral Evidence Contract

### Behavioral Trace
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** A temporally ordered or partially ordered sequence of verified observations and events attributed to an interaction participant.
*   **Boundary:** Traces are logs of what occurred; they do not prove intention, understanding, or strategy without a diagnostic model.
*   **Related Contract:** Behavioral Evidence Contract

---

## 4. Opportunity & Strategy Terms

### Opportunity Profile
*   **Maturity:** Canonical
*   **Status:** accepted
*   **Definition:** A typed and indexed analytical profile coordinating feasibility, capability, permission, enablement, reachability, exposure, signaling, belief, selection, execution, success, and reversibility for an action.
*   **Boundary:** Opportunity is a coordination framework, not a new primitive.
*   **Related Contract:** Opportunity Contract

### Experience State
*   **Maturity:** Idea
*   **Status:** accepted
*   **Definition:** The latent state of familiarity, cognitive schemas, and expectations accumulated by a participant through prior interaction history.
*   **Boundary:** Cannot be directly observed; must be operationalized through exposure history vectors.
*   **Related Contract:** N/A

### Transfer
*   **Maturity:** Validated
*   **Status:** accepted
*   **Definition:** The phenomenon in which a participant's prior experience or strategy in one interaction context alters their adaptation speed, errors, or performance in a second, different context.
*   **Boundary:** Must be measured against baseline control groups who have not had the prior experience.
*   **Related Contract:** Transfer Contract

### Strategy
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** An inferred, temporally extended organization of conditional action selection, information use, resource allocation, and contingency response that tends to preserve or improve one or more criteria across a class of states.
*   **Boundary:** Strategy is a latent construct. It cannot be read from a single event log; it requires rival model discrimination.
*   **Related Contract:** Strategy Contract

---

## 5. Evaluation & Comparison Terms

### Measurement Contract
*   **Maturity:** Canonical
*   **Status:** accepted
*   **Definition:** A declaration of the measurand, observation process, operationalization, scale, uncertainty, validity evidence, population, task, projection, and permitted interpretation.
*   **Boundary:** A metric is not a construct. Numerical output does not justify a latent interpretation without a validated measurement relation.
*   **Related Contract:** Measurement Contract

### Similarity Profile
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** A multi-dimensional comparison output mapping distances across state ranges, projection field agreements, and trace edit distances under specified alignment maps and tolerances.
*   **Boundary:** Rejects collapsing comparisons into a single scalar ranking by default.
*   **Related Contract:** Similarity Contract

### Comparability
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** The status in which two interaction episodes, states, or projections share a common comparison frame, mapping rules, and shape conventions, enabling a Similarity Contract.
*   **Related Contract:** Similarity Contract

### Incomparability
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** The status in which two targets cannot be compared because their boundaries, target types, mapping rules, scales, or validity domains cannot be aligned without unsupported assumptions.
*   **Boundary:** Preserving incomparability is a valid comparison result.
*   **Related Contract:** Similarity Contract

### Prediction
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** A contract-governed claim estimating future states, actions, or outcomes within a specified horizon, uncertainty budget, and validity domain.
*   **Related Contract:** Prediction Contract

### Comparison
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** The process of evaluating two or more interaction instances under a declared frame and correspondence map.
*   **Related Contract:** Comparison Contract

### Explanatory Gain
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** The measure of how much a new interaction model improves explanation of a phenomenon (e.g., reducing the number of unexplained errors or ad-hoc assumptions) relative to existing baseline models.
*   **Related Contract:** N/A

### Predictive Gain
*   **Maturity:** Proposed
*   **Status:** accepted
*   **Definition:** The statistical increase in accuracy, out-of-sample prediction coverage, or calibration metrics when utilizing a CompInt model relative to a baseline model (e.g., GOMS or Markov chains).
*   **Related Contract:** N/A
