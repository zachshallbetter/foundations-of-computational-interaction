# Computational Interaction Science Contracts

Version: 1.0.0-structure.1
Status: Derivative consolidation; source papers remain authoritative until normative ratification.

## Scope

This document consolidates contract artifacts already present in the research papers. It introduces no new theoretical fields. Each section records its source paper and extraction heading. Empty or terse sections indicate that the source artifact was represented primarily through tables or adjacent text and requires later normative review.

## Projection Contract

Source: `02_Research_Papers/.../Representation_Invariance_and_Projection.docx`  
Extraction heading: `C. Projection Contract`

### C. Projection Contract

| Field | Required declaration |
| --- | --- |
| Target domain | What is represented; authority and version; boundaries and granularity. |
| Representation domain | Vehicle/form and admissible instances. |
| Mapping | Construction, encoding, measurement, query, or transformation rule. |
| Interpretation | Semantics, conventions, training, and decoding assumptions. |
| Preserved properties | Relations, quantities, behaviors, consequences, or operations retained. |
| Transformed properties | Changes of coordinate, scale, order, granularity, modality, or dynamics. |
| Omitted properties | Distinctions unavailable or unrecoverable. |
| Introduced properties | Categories, saliences, defaults, ambiguity, artifacts, or noise. |
| Available operations | Read, query, compare, manipulate, update, undo, coordinate, export. |
| Observer assumptions | Capabilities, knowledge, language, access needs, and role. |
| Intended use | Questions, decisions, tasks, and prohibited uses. |
| Uncertainty and error | Provenance, confidence, distortion, latency, and tolerance. |
| Failure conditions | Known counterexamples, out-of-scope states, and invalid inferences. |

## Opportunity Contract

Source: `02_Research_Papers/.../Opportunity_Affordance_and_Action_Availability.docx`  
Extraction heading: `C. Opportunity Contract`

### C. Opportunity Contract

Projection contract

Identity
• Declared target system, task, agent class, state scope, and comparison time.
• Projection identifier and modality.

System-relative action structure
• Domain-valid action vocabulary and transition semantics.
• Effective capability requirements.
• Permission and authority rules.
• Current enablement predicates.
• Reachable outcomes and path constraints.
• Failure modes and irreversible effects.

Projection-relative structure
• Exposed operations and access paths.
• Signifiers, labels, conventions, and feedback.
• Hidden prerequisites and external documentation.
• Ordering, composition, audit, and recovery support.

Observer assumptions
• Sensory and motor access.
• Language, conventions, training, and prior exposure.
• Available assistive technologies.
• Goal and risk context.

Epistemic variables
• Believed action distribution.
• Expected consequence distribution.
• Confidence and uncertainty.
• Perceived reversibility and cost.

Validity
• Intended use.
• Metrics and tolerances.
• Known omissions.
• Conditions under which comparisons fail.

## Interaction Contract

Source: `02_Research_Papers/.../Interaction_Toward_a_General_Theory_of_Interaction.docx`  
Extraction heading: `Interaction Contract`

### Interaction Contract

| Element | Definition / specification |
| --- | --- |
| Identity | interaction type and token identifier; abstraction level |
| Participants | entities, roles, capabilities, authority, and inclusion criteria |
| Boundary | system/environment partition; timescale; start and closure rules |
| State | relevant state variables and uncertainty |
| Coupling | channels, shared media, topology, latency, and capacity |
| Preconditions | eligibility, permissions, enablement, and initial assumptions |
| Events | emission, transmission, uptake, response, recurrence, commitment, failure |
| Transitions | deterministic, nondeterministic, or probabilistic state effects |
| Protocol | admissible ordering, synchronization, obligations, and timeouts |
| Invariants | properties required to remain preserved |
| Evidence | direct observations, derived dependencies, inferred interpretations |
| Failure and recovery | deadlock, rejection, timeout, compensation, cancellation, rollback |
| Completion | stable termination, commitment, goal condition, timeout, or declared truncation |

## Behavioral Evidence Contract

Source: `02_Research_Papers/.../Behavior_Toward_a_Scientific_Theory_of_Computational_Behavior.docx`  
Extraction heading: `15. Behavioral Evidence Contract`

### 15. Behavioral Evidence Contract

| Field | Required declaration |
| --- | --- |
| Target system | Boundary, level, and ownership criteria. |
| Environment | Relevant external entities, conditions, institutions, and other agents. |
| Observation model | Sensors, logs, coding scheme, channels, sampling, and calibration. |
| Temporal model | Clock, ordering, latency, synchronization, interval conventions. |
| Event vocabulary | Types, detection rules, segmentation, and granularity. |
| Attribution rule | Why an event is assigned to a system and with what confidence. |
| Context | Task, projection, opportunity profile, permission, history, and incentives. |
| Outcome criteria | Success, failure, cost, reward, safety, or completion definitions. |
| Latent constructs | Measurement model, indicators, alternatives, and identification assumptions. |
| Uncertainty | Missing data, detector error, attribution ambiguity, and confidence. |
| Comparison scope | Populations, systems, settings, invariants, metrics, and tolerances. |
| Failure conditions | Conditions under which the trace cannot support the intended claim. |

## Measurement Contract

Source: `02_Research_Papers/.../Measurement_Toward_a_Scientific_Framework_for_Interaction_Research.docx`  
Extraction heading: `10. Measurement Contracts`

### 10. Measurement Contracts

Every reported interaction measure should be accompanied by a measurement contract containing:

1. Construct and intended interpretation.
2. Measurand and unit of analysis.
3. Scope conditions: population, task, system, projection, context, and time.
4. Observation model and instrument.
5. Event, state, and boundary definitions.
6. Operationalization and indicators.
7. Transformation, coding, or estimator.
8. Scale type and permissible operations.
9. Missingness, exclusions, and preprocessing.
10. Reliability evidence.
11. Validity evidence.
12. Uncertainty budget.
13. Comparison and invariance assumptions.
14. Failure conditions and prohibited interpretations.
15. Reproducibility artifacts.

This contract is the minimum reusable unit of measurement specification. It makes the evidential chain inspectable and supports later interaction-similarity and comparative-interaction research.

## Similarity Contract

Source: `02_Research_Papers/.../Interaction_Similarity_Toward_a_General_Theory_of_Comparable_Interactions.docx`  
Extraction heading: `D. Similarity Contract`

### D. Similarity Contract

Comparison identifier and purpose

Target types and token/type status

Interaction contracts and aligned boundaries

Participants, tasks, environments, initial conditions, and timescales

Representations and observation models

Correspondence mapping and mapping evidence

Required invariants and permitted variants

Admissible and prohibited transformations

Comparison dimensions

Formal predicates, metrics, scales, and parameters

Weights and aggregation model, if any

Equivalence tolerances and decision rules

Missingness and uncertainty budget

Sensitivity analyses

Evidence level for each claim

Validity domain and prohibited generalizations

Final typed profile: equivalent, approximately equivalent, different, unknown, or incomparable by dimension

## Transfer Contract

Source: `02_Research_Papers/.../Interaction_Transfer_Toward_a_Theory_of_Experience_and_Adaptation.docx`  
Extraction heading: `B. Transfer Contract`

### B. Transfer Contract

Identity: source and target episode identifiers, boundaries, timescales, participants, and tasks.
Source learning: experience component changed, evidence, magnitude, and uncertainty.
Target shift: changed and preserved dimensions across semantic, structural, representational, opportunity, modality, device, social, and temporal axes.
Carrier: knowledge, procedure, strategy, belief, value, habit, attunement, artifact, or coordination practice.
Mechanism: retrieval, analogy, shared production, policy reuse, cueing, abstraction, compilation, or participation transformation.
Outcome: direct measures, derived metrics, latent estimates, direction, durability, and heterogeneity.
Counterfactual: control condition and assumptions supporting source attribution.
Failure conditions: no source learning, no retention, access failure, mismatch, negative transfer, confounding, or measurement non-invariance.

## Strategy Contract

Source: `02_Research_Papers/.../Interaction_Strategies_Toward_a_Theory_of_Behavioral_Organization.docx`  
Extraction heading: `C. Strategy Contract`

### C. Strategy Contract

Declared domain and attribution level

Episode boundaries and timescale

Criteria and constraints

State and observation model

State abstraction or belief model

Opportunity assumptions

Action and skill repertoire

Conditional selection policy

Information-acquisition policy

Commitment and persistence rules

Contingency and recovery rules

Switching and stopping conditions

Resource and authority assumptions

Expected outcomes and risks

Identity invariants under adaptation

Evidence and rival strategies

Uncertainty and validity domain

## Prediction Contract

Source: `02_Research_Papers/.../Predicting_Interaction_Toward_a_Predictive_Theory_of_Computational_Interaction.docx`  
Extraction heading: `A. Prediction Contract`

### A. Prediction Contract

| Field | Required declaration |
| --- | --- |
| Identity | Prediction identifier, version, date, owner, intended scientific or operational use. |
| Target | Outcome, unit, level, horizon, event definition, censoring, competing events. |
| Information cutoff | Timestamp or episode boundary beyond which no input may be used. |
| Inputs | Observed records, derived variables, latent estimates, provenance, measurement uncertainty. |
| Interaction scope | Participants, episode boundaries, system state, projection, opportunity, policy, context. |
| Model | Family, parameters, priors, regularization, training procedure, update rule. |
| Causal status | Associational, interventional, transported, mechanism-based, or policy-value claim. |
| Prediction form | Probability, distribution, interval, set, hazard, sequence, ranking, or scenario. |
| Uncertainty | Aleatoric, epistemic, measurement, state, structural, distributional, reflexive. |
| Evaluation | Baselines, holdout design, metrics, calibration, coverage, utility, subgroup tests. |
| Validity domain | Population, task, projection, modality, system, policy, environment, time. |
| Transport conditions | Assumptions and evidence required for use outside the evaluation domain. |
| Failure conditions | Minimum gain, maximum error, calibration tolerance, abstention rule, stop-use conditions. |
| Monitoring | Drift tests, recalibration schedule, update triggers, audit trail. |

## Comparison Contract

Source: `02_Research_Papers/.../Comparative_Interaction_Toward_a_Scientific_Method_for_Comparing_Computational_Interactions.docx`  
Extraction heading: `18. Reusable Artifact A - Comparison Contract`

### 18. Reusable Artifact A - Comparison Contract

| Field | Required declaration |
| --- | --- |
| Identity | Candidate interactions; versions; provenance; token or type comparison. |
| Reference frame | Target, task, users/agents, context, initial state, boundary, timescale, completion. |
| Correspondence | Entities, states, actions, events, outcomes, strategies, measures; ambiguous and unmapped items. |
| Invariants | Properties required to remain fixed by dimension. |
| Transformations | Renaming, reordering, abstraction, modality substitution, temporal rescaling, implementation substitution. |
| Dimensions | Selected comparison dimensions and reasons for inclusion or exclusion. |
| Measures | Measurands, instruments, scales, estimators, directionality, reliability, validity. |
| Thresholds | Equivalence bounds, minimum acceptable values, smallest effects of interest, vetoes. |
| Uncertainty | Record, mapping, sampling, model, instrument, and transport uncertainty. |
| Evidence | Formal proofs, records, experiments, qualitative evidence, standards conformance, expert review. |
| Decision synthesis | Optional weights, priorities, compensation, authority, sensitivity analysis. |
| Scope | Population, task, projection, context, time horizon, and invalidating conditions. |
