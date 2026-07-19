# Foundations of Computational Interaction - Canonical Ontology

**Version:** 1.0.0-integration.1
**Status:** Reconciled candidate system of record

This ontology preserves the relational architecture of the Version 1.0 corpus. It is a dependency and evidence architecture, not a universal causal pipeline.

## Explanatory target

A family of bounded coupling phenomena in which distinguishable systems or participants become mutually consequential through perturbation, constraint, uptake, response, and recurrence.

## Ontological commitments

- Concepts are typed by explanatory role rather than implementation layer.
- Interaction is not treated as a primitive substance.
- Opportunity is a typed coordination framework, not a primitive.
- Behavior is attributed under an observation model.
- Strategy and interpretation are latent or inferred where applicable.
- Measurement and similarity claims require explicit contracts.

## Concepts

### Domain commitments (`domain-commitments`)

A set of commitments about admissible entities, categories, relations, identity conditions, modalities, and constraints in a domain. In computational work, these commitments may be approximated through ontologies, schemas, contracts, types, or model definitions, but none of those artifacts is automatically a philosophical ontology.

**Dependencies:** None declared
**Dependents:** System state, Semantic assignment

### System state (`system-state`)

The physical, computational, social, or modeled condition of a declared system at a particular time.

**Dependencies:** Domain commitments, State transition
**Dependents:** Projection, Opportunity profile

### Semantic assignment (`semantic-assignment`)

A rule-governed assignment of content, denotation, truth conditions, inferential consequences, or transition behavior to expressions, states, signs, or operations within a specified system and domain.

**Dependencies:** Domain commitments
**Dependents:** Semantic state, Projection

### Semantic state (`semantic-state`)

The content-bearing assignments and relations currently licensed by a specified semantics for a system or discourse state.

**Dependencies:** Semantic assignment
**Dependents:** None declared

### Information (`information`)

A typed measure or characterization of distinctions, correlations, descriptions, or content relative to a specified source, code, semantic relation, probability model, or use.

**Dependencies:** None declared
**Dependents:** None declared

### Representation (`representation`)

A materially or formally realized vehicle that provides selective access to a declared target through a mapping or correspondence and an interpretive practice.

A representation may preserve, transform, omit, or introduce structure.

**Dependencies:** Projection
**Dependents:** Interpretation

### Projection (`projection`)

A declared transformation from a target description, system state, or semantic assignment into an accessible representational form.

A projection contract specifies:

- target and authority;
- mapping or construction rule;
- interpretation assumptions;
- preserved properties;
- transformed properties;
- omitted properties;
- introduced properties;
- available operations;
- observer assumptions;
- intended use;
- context and scope;
- uncertainty, tolerance, and failure conditions.

**Dependencies:** System state, Semantic assignment
**Dependents:** Representation, Opportunity profile, Scoped invariance

### Scoped invariance (`scoped-invariance`)

A declared property remains invariant across projections when independently specified comparison rules show that it is preserved for a stated target, observer class, context, metric, and tolerance.

Invariance must be typed. Relevant types include:

- ontological;
- semantic;
- informational;
- structural;
- topological;
- computational;
- inferential;
- task;
- behavioral;
- interactional.

**Dependencies:** Projection, Equivalence
**Dependents:** None declared

### Interpretation (`interpretation`)

The application, recovery, construction, negotiation, or revision of semantic relations by an interpreting system under a context, competence, history, and purpose.

**Dependencies:** Representation, Interaction history
**Dependents:** Opportunity profile

### Interaction participant (`interaction-participant`)

Any bounded person, collective, organism, computational process, artificial system, institution, or hybrid arrangement occupying a consequential role within an interaction.

A participant may observe, interpret, act, constrain, authorize, mediate, represent, store, or transform state. Participation does not imply autonomy, intelligence, consciousness, or learning.

**Dependencies:** Agent
**Dependents:** Coupling

### Agent (`agent`)

An acting interaction participant that selects or produces actions through a policy, rule, control process, intention, or other action-selection organization.

**Dependencies:** None declared
**Dependents:** Interaction participant

### Environment (`environment`)

The declared physical, computational, social, symbolic, or mixed system within which action and state transition occur.

**Dependencies:** None declared
**Dependents:** Coupling

### Affordance (`affordance`)

An action-relevant relation between an agent’s effectivities or capabilities and environmental structure that makes a class of action possible. In the Gibsonian sense, perception is not required for the affordance to exist.

**Dependencies:** None declared
**Dependents:** Opportunity profile

### Opportunity (`opportunity`)

A typed and indexed analytical profile coordinating action-availability relations under declared system, agent, projection, task, authority, state, and temporal conditions.

Opportunity is not a new primitive. It coordinates established relations such as feasibility, capability, permission, enablement, reachability, exposure, signaling, belief, expected consequence, reversibility, and uncertainty.

**Dependencies:** None declared
**Dependents:** None declared

### Opportunity profile (`opportunity-profile`)

For an agent, action, state, projection, and time, an opportunity profile records the relevant typed relations:

- domain-valid;
- effectively capable;
- permitted;
- enabled;
- reachable outcomes;
- exposed;
- signaled;
- believed available;
- expected consequences;
- selected;
- executed;
- successful;
- reversible or recoverable;
- uncertainty and provenance.

Selected, executed, and successful are trace predicates rather than availability sets.

**Dependencies:** Interpretation, System state, Projection, Affordance, Capability, Permission, Enablement, Reachability, Exposure, Signaling, Believed action
**Dependents:** Interaction episode

### Capability (`capability`)

The effective capacity or resources required for an agent-system coupling to execute an action or bring about an outcome under declared conditions.

**Dependencies:** None declared
**Dependents:** Opportunity profile

### Permission (`permission`)

Authorization under a policy, role, rule, authority, or institutional condition for a subject to perform an operation.

**Dependencies:** None declared
**Dependents:** Opportunity profile

### Enablement (`enablement`)

The condition in which an action’s current-state preconditions are satisfied.

**Dependencies:** None declared
**Dependents:** Opportunity profile

### Reachability (`reachability`)

The existence of at least one admissible transition sequence from a declared initial state to a target state or outcome within specified constraints and horizon.

**Dependencies:** None declared
**Dependents:** Opportunity profile

### Exposure (`exposure`)

Provision by the current projection of an executable access path to an operation.

**Dependencies:** None declared
**Dependents:** Opportunity profile

### Signaling (`signaling`)

Perceivable information indicating an operation, condition, consequence, state, or recovery path.

**Dependencies:** None declared
**Dependents:** Opportunity profile

### Discoverability (`discoverability`)

The empirically observed probability and process by which an agent identifies an action or relation under declared task, projection, knowledge, modality, context, and time conditions.

**Dependencies:** None declared
**Dependents:** None declared

### Believed action (`believed-action`)

An action represented by an agent as available, with an associated confidence and expected consequence.

**Dependencies:** Interaction history
**Dependents:** Opportunity profile

### Action (`action`)

A declared intervention, command, operation, or behavior capable of participating in a state transition.

**Dependencies:** None declared
**Dependents:** State transition

### State transition (`state-transition`)

A change from one declared system state to another under a transition relation, process, or event.

**Dependencies:** Action
**Dependents:** System state

### Observation (`observation`)

A recorded or accessible distinction about state, transition, representation, or outcome available through a specified measurement or observation process.

**Dependencies:** None declared
**Dependents:** Trace

### Situated behavior (`situated-behavior`)

A bounded, temporally extended trajectory of observable or instrumentally recoverable changes, outputs, or regulated persistence attributed to a system in relation to its environment under a declared observation and attribution model.

**Dependencies:** None declared
**Dependents:** None declared

### Behavioral evidence (`behavioral-evidence`)

A provenance-preserving chain connecting direct observations, system-derived features, latent interpretations, alternative explanations, uncertainty, and falsifying evidence to a bounded research claim.

**Dependencies:** Measurement contract
**Dependents:** None declared

### Behavioral equivalence (`behavioral-equivalence`)

Equivalence of declared action or outcome distributions for a specified population, task, context, metric, and tolerance.

**Dependencies:** None declared
**Dependents:** None declared

### Interactional equivalence (`interactional-equivalence`)

Equivalence of the available operation-transition-observation structure under specified agent, task, projection, authority, state, context, and tolerance conditions.

**Dependencies:** None declared
**Dependents:** None declared

### Interaction (`interaction`)

A family of bounded coupling phenomena in which distinguishable systems or participants become mutually consequential through perturbation, constraint, uptake, response, and recurrence.

**Dependencies:** Foundations of Computational Interaction
**Dependents:** None declared

### Interaction episode (`interaction-episode`)

A bounded interval in which two or more distinguishable systems are coupled such that perturbations originating in, or mediated by, one system alter the possible or actual state trajectory of another, and the resulting configuration constrains a later trajectory of an originating or co-participating system within a declared boundary and timescale.

Reciprocal closure may be direct, indirect, asymmetric, delayed, probabilistic, or environmentally mediated.

**Dependencies:** Opportunity profile, Coupling, Token identity, Type identity, Interaction contract
**Dependents:** None declared

### Coupling (`coupling`)

A relation or pathway through which a participant or shared medium can alter another participant's transition structure, reachable states, probabilities, timing, or constraints.

**Dependencies:** Interaction participant, Environment
**Dependents:** Interaction episode

### Perturbation (`perturbation`)

A difference propagated through a coupling relation that may change state, transition conditions, probabilities, timing, or reachable outcomes.

**Dependencies:** None declared
**Dependents:** None declared

### Uptake (`uptake`)

Incorporation of a perturbation into a participant's state, transition process, control process, or interpreted situation. Uptake need not be semantic or conscious.

**Dependencies:** None declared
**Dependents:** None declared

### Recurrence (`recurrence`)

Return influence through which a response constrains an originating participant, a co-participant, or the shared coupling configuration.

**Dependencies:** None declared
**Dependents:** None declared

### Interaction contract (`interaction-contract`)

A declaration of interaction identity, participants and roles, boundary, timescale, state, coupling, preconditions, events, transitions, protocol, invariants, evidence, failure, recovery, and completion conditions.

**Dependencies:** None declared
**Dependents:** Interaction episode

### Interaction morphology (`interaction-morphology`)

The measurable structural properties of a representation or interaction surface, such as hierarchy, topology, density, alignment, rhythm, symmetry, enclosure, continuity, direction, visual weight, temporal organization, and modality.

**Dependencies:** None declared
**Dependents:** None declared

### Interaction grammar (`interaction-grammar`)

A typed vocabulary and composition structure for semantic actions and transitions independent of any one input modality or rendering implementation.

**Dependencies:** None declared
**Dependents:** None declared

### Interaction history (`interaction-history`)

The accumulated experience, training, conventions, outcomes, failures, practices, and prior exposure that may change an agent’s later beliefs, policies, and interpretation.

**Dependencies:** None declared
**Dependents:** Strategy, Interpretation, Believed action

### Trace (`trace`)

A temporally ordered or partially ordered record of observable or attributed events under declared boundaries, granularity, and observation rules.

**Dependencies:** Observation
**Dependents:** Measurement contract

### Measurement contract (`measurement-contract`)

A declaration of the measurand, observation process, operationalization, scale, uncertainty, validity evidence, population, task, projection, comparison conditions, and permitted interpretation.

**Dependencies:** Trace
**Dependents:** Interaction similarity, Behavioral evidence

### Interaction similarity (`interaction-similarity`)

A comparison of interaction tokens, types, structures, protocols, opportunities, traces, behaviors, policies, strategies, outcomes, causes, or measurements under an explicit frame, correspondence mapping, admissible transformations, metrics, tolerances, uncertainty, and validity domain.

**Dependencies:** Measurement contract, Similarity contract
**Dependents:** Equivalence

### Token identity (`token-identity`)

Historical identity of one bounded interaction episode under declared continuity, participant, boundary, and timescale criteria.

**Dependencies:** None declared
**Dependents:** Interaction episode

### Type identity (`type-identity`)

Membership in the same abstraction-defined interaction class under explicit classification rules.

**Dependencies:** None declared
**Dependents:** Interaction episode

### Equivalence (`equivalence`)

Exact preservation under a declared comparison contract and observable set. Equivalence is always typed.

**Dependencies:** Interaction similarity
**Dependents:** Scoped invariance

### Similarity (`similarity`)

Graded proximity under declared dimensions, representations, alignment rules, metrics, weights, tolerances, and uncertainty.

**Dependencies:** None declared
**Dependents:** None declared

### Incomparability (`incomparability`)

Failure to establish a defensible common comparison space because boundaries, targets, mappings, scales, observation processes, uncertainty, or validity domains cannot be aligned without unsupported assumptions.

**Dependencies:** None declared
**Dependents:** None declared

### Similarity contract (`similarity-contract`)

A declaration of comparison target, frame, representations, correspondence mapping, invariants, variants, observables, admissible and prohibited transformations, typed metrics or predicates, tolerances, uncertainty, validity domain, and final typed profile.

**Dependencies:** None declared
**Dependents:** Interaction similarity

### Strategy (`strategy`)

An inferred, temporally extended organization of conditional action selection, information use, resource allocation, and contingency response that tends to preserve or improve one or more criteria across a declared class of interaction states.

**Dependencies:** Policy, Interaction history, Strategy contract
**Dependents:** None declared

### Strategy contract (`strategy-contract`)

A declaration of strategy-bearing system, domain, timescale, criteria, state and observation model, state abstraction, opportunity assumptions, action repertoire, selection policy, information policy, commitments, contingency and recovery rules, switching and stopping conditions, resources, authority, identity invariants, rival strategies, uncertainty, and validity domain.

**Dependencies:** None declared
**Dependents:** Strategy

### Policy (`policy`)

A conditional relation from represented states, observations, or beliefs to action distributions.

**Dependencies:** None declared
**Dependents:** Strategy

### Fundamental (`fundamental`)

A representation-independent computational substrate for declaring domain commitments, evolving system state, assigning operational semantics, and producing governed projections whose preservation, transformation, omission, introduced structure, operations, snapshots, and replay can be inspected.

**Dependencies:** None declared
**Dependents:** None declared

### Foundations of Computational Interaction (`computational-interaction-science`)

A research program that studies interaction as an explanatory target by separating and comparing declared domain commitments, state, semantics, projection, representation, interpretation, opportunity, coupling, behavior, measurement, similarity, strategy, and evidence.

FCI must justify itself through comparative explanatory gain, empirical validity, reproducible methods, and error-sensitive predictions. It does not replace HCI, psychology, anthropology, cognitive science, design, computer science, or related disciplines.

**Dependencies:** None declared
**Dependents:** Interaction

## Canonical relations

| Source | Relation | Target | Authority |
|---|---|---|---|
| Domain commitments | constrains | System state | Canonical ontology/glossary |
| Domain commitments | constrains | Semantic assignment | Canonical ontology/glossary |
| Semantic assignment | licenses | Semantic state | Canonical ontology/glossary |
| System state | source for | Projection | Canonical ontology/glossary |
| Semantic assignment | source for | Projection | Canonical ontology/glossary |
| Projection | realizes | Representation | Canonical ontology/glossary |
| Representation | supports | Interpretation | Canonical ontology/glossary |
| Interpretation | informs | Opportunity profile | Canonical ontology/glossary |
| System state | constrains | Opportunity profile | Canonical ontology/glossary |
| Projection | exposes | Opportunity profile | Canonical ontology/glossary |
| Opportunity profile | conditions | Interaction episode | Canonical ontology/glossary |
| Coupling | constitutes | Interaction episode | Canonical ontology/glossary |
| Interaction participant | participates in | Coupling | Canonical ontology/glossary |
| Observation | records | Trace | Canonical ontology/glossary |
| Trace | input to | Measurement contract | Canonical ontology/glossary |
| Measurement contract | supports | Interaction similarity | Canonical ontology/glossary |
| Interaction similarity | types | Equivalence | Canonical ontology/glossary |
| Policy | component of | Strategy | Canonical ontology/glossary |
| Interaction history | updates | Strategy | Canonical ontology/glossary |
| Interaction history | conditions | Interpretation | Canonical ontology/glossary |
| Interaction history | conditions | Believed action | Canonical ontology/glossary |
| Affordance | contributes | Opportunity profile | Canonical ontology/glossary |
| Capability | component | Opportunity profile | Canonical ontology/glossary |
| Permission | component | Opportunity profile | Canonical ontology/glossary |
| Enablement | component | Opportunity profile | Canonical ontology/glossary |
| Reachability | component | Opportunity profile | Canonical ontology/glossary |
| Exposure | component | Opportunity profile | Canonical ontology/glossary |
| Signaling | component | Opportunity profile | Canonical ontology/glossary |
| Believed action | component | Opportunity profile | Canonical ontology/glossary |
| Action | may produce | State transition | Canonical ontology/glossary |
| State transition | changes | System state | Canonical ontology/glossary |
| Agent | subtype of | Interaction participant | Canonical ontology/glossary |
| Environment | mediates | Coupling | Canonical ontology/glossary |
| Token identity | identifies | Interaction episode | Canonical ontology/glossary |
| Type identity | classifies | Interaction episode | Canonical ontology/glossary |
| Similarity contract | specifies | Interaction similarity | Canonical ontology/glossary |
| Strategy contract | specifies | Strategy | Canonical ontology/glossary |
| Interaction contract | specifies | Interaction episode | Canonical ontology/glossary |
| Measurement contract | governs | Behavioral evidence | Canonical ontology/glossary |
| Projection | tested across | Scoped invariance | Canonical ontology/glossary |
| Equivalence | expresses | Scoped invariance | Canonical ontology/glossary |
| Foundations of Computational Interaction | studies | Interaction | Canonical ontology/glossary |

## Contract stack

# Foundations of Computational Interaction Contracts

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


## Appendix A - Candidate Version 2.0 Changes

No candidate Version 2.0 change was integrated. Items requiring later normative review are listed in the Consistency Report.