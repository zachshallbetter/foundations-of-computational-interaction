# Foundations of Computational Interaction - Canonical Glossary

**Version:** 1.0.0-integration.1
**Status:** Reconciled candidate system of record

This glossary reconciles the Version 1.0 corpus without introducing new theory. Research papers remain provenance; this document owns canonical wording for integration.

## Domain commitments

**Canonical ID:** `domain-commitments`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A set of commitments about admissible entities, categories, relations, identity conditions, modalities, and constraints in a domain. In computational work, these commitments may be approximated through ontologies, schemas, contracts, types, or model definitions, but none of those artifacts is automatically a philosophical ontology.

**Boundary:** Domain commitments specify what the model admits. They do not by themselves assign meaning, produce a representation, or determine interpretation.

**Aliases:** ontology commitments

**Dependencies:** None declared  
**Originating paper:** Ontology, Semantics, Representation, and Interpretation  
**Supporting papers:** Ontology, Semantics, Representation, and Interpretation; CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## System state

**Canonical ID:** `system-state`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

The physical, computational, social, or modeled condition of a declared system at a particular time.

**Boundary:** State is not synonymous with data, meaning, representation, or observation. A state becomes content-bearing only under a specified semantics.

**Aliases:** state

**Dependencies:** Domain commitments, State transition  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Ontology, Semantics, Representation, and Interpretation; Interaction; Interaction Strategies; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Projection Contract, Opportunity Contract, Interaction Contract, Behavioral Evidence Contract, Measurement Contract, Similarity Contract, Transfer Contract, Strategy Contract, Prediction Contract  
**Formal mappings:** Layered observation-enriched probabilistic labeled transition system

## Semantic assignment

**Canonical ID:** `semantic-assignment`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A rule-governed assignment of content, denotation, truth conditions, inferential consequences, or transition behavior to expressions, states, signs, or operations within a specified system and domain.

**Boundary:** Formal semantic assignment is distinct from a person’s interpretation or understanding.

**Aliases:** formal semantics

**Dependencies:** Domain commitments  
**Originating paper:** Ontology, Semantics, Representation, and Interpretation  
**Supporting papers:** Ontology, Semantics, Representation, and Interpretation  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Semantic state

**Canonical ID:** `semantic-state`  
**Maturity:** Proposed  
**Observable status:** No - latent/inferred  
**Latent status:** Yes  
**Measurement status:** Requires latent-variable model

The content-bearing assignments and relations currently licensed by a specified semantics for a system or discourse state.

**Boundary:** No observer-independent semantic state is assumed without an explicit theory and scope.

**Dependencies:** Semantic assignment  
**Originating paper:** Ontology, Semantics, Representation, and Interpretation  
**Supporting papers:** Ontology, Semantics, Representation, and Interpretation; Representation, Invariance, and Projection; Foundations of Computational Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Information

**Canonical ID:** `information`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A typed measure or characterization of distinctions, correlations, descriptions, or content relative to a specified source, code, semantic relation, probability model, or use.

**Boundary:** Information is not a synonym for stored variables, data, meaning, semantic state, or interpretation. Every claim that information is preserved must name the information theory, source, code, task, or relevance criterion.

**Dependencies:** None declared  
**Originating paper:** Ontology, Semantics, Representation, and Interpretation  
**Supporting papers:** Ontology, Semantics, Representation, and Interpretation; Representation, Invariance, and Projection; Interaction Strategies; Predicting Interaction; INTERACTION AS A
SCIENTIFIC EXPLANANDUM  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Representation

**Canonical ID:** `representation`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A materially or formally realized vehicle that provides selective access to a declared target through a mapping or correspondence and an interpretive practice.

A representation may preserve, transform, omit, or introduce structure.

**Boundary:** A representation is not identical with its target. Equal reference does not imply semantic, inferential, behavioral, or interactional equivalence.

**Aliases:** representational vehicle

**Dependencies:** Projection  
**Originating paper:** Representation, Invariance, and Projection  
**Supporting papers:** Representation, Invariance, and Projection; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Ontology, Semantics, Representation, and Interpretation; Interaction Transfer; Foundations of Computational Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

**Example:** A table and graph that selectively expose the same declared target.

**Counterexample:** The target itself, treated as identical with its representation.

## Projection

**Canonical ID:** `projection`  
**Maturity:** Proposed analytical role  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

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

**Boundary:** Projection coordinates established concepts such as views, abstractions, encodings, lenses, simulations, model morphisms, and renderings. It is not a new metaphysical substance.

**Aliases:** view, encoding, rendering

**Dependencies:** System state, Semantic assignment  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Representation, Invariance, and Projection; Formal Models of Computational Interaction; Foundations of Computational Interaction; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Projection Contract  
**Formal mappings:** No unique formal mapping declared

**Example:** A declared mapping from a system state to a GUI, API, or auditory form.

**Counterexample:** An implementation artifact with no declared target, mapping, or scope.

## Scoped invariance

**Canonical ID:** `scoped-invariance`  
**Maturity:** Proposed theory  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

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

**Boundary:** No one invariance type implies another.

**Deprecated terminology:** semantic invariance

**Dependencies:** Projection, Equivalence  
**Originating paper:** Canonical glossary  
**Supporting papers:** None located  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Interpretation

**Canonical ID:** `interpretation`  
**Maturity:** Proposed  
**Observable status:** No - latent/inferred  
**Latent status:** Yes  
**Measurement status:** Requires latent-variable model

The application, recovery, construction, negotiation, or revision of semantic relations by an interpreting system under a context, competence, history, and purpose.

**Boundary:** Interpretation is a process or event. Semantics specifies or stabilizes admissible relations; interpretation applies or revises them.

**Dependencies:** Representation, Interaction history  
**Originating paper:** Ontology, Semantics, Representation, and Interpretation  
**Supporting papers:** Ontology, Semantics, Representation, and Interpretation; Representation, Invariance, and Projection; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Measurement; Foundations of Computational Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

**Example:** An agent applies conventions and context to a signaled operation.

**Counterexample:** Formal semantics treated as identical to a participant’s understanding.

## Interaction participant

**Canonical ID:** `interaction-participant`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Any bounded person, collective, organism, computational process, artificial system, institution, or hybrid arrangement occupying a consequential role within an interaction.

A participant may observe, interpret, act, constrain, authorize, mediate, represent, store, or transform state. Participation does not imply autonomy, intelligence, consciousness, or learning.

**Boundary:** Interaction participant is the top-level role. More specific terms such as human participant, computational participant, institution, observer, mediator, autonomous agent, and AI agent should be used when their additional commitments matter.

**Aliases:** participant

**Dependencies:** Agent  
**Originating paper:** Canonical glossary  
**Supporting papers:** None located  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Interaction Contract  
**Formal mappings:** Layered observation-enriched probabilistic labeled transition system

## Agent

**Canonical ID:** `agent`  
**Maturity:** Proposed subtype  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

An acting interaction participant that selects or produces actions through a policy, rule, control process, intention, or other action-selection organization.

**Boundary:** Agent is not the universal term for every participant. An AI model is not automatically an agent; it becomes part of an agentic system when observations, action-selection, and consequential operations are supplied.

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Interaction; CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?; Formal Models of Computational Interaction; INTERACTION AS A
SCIENTIFIC EXPLANANDUM  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Environment

**Canonical ID:** `environment`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

The declared physical, computational, social, symbolic, or mixed system within which action and state transition occur.

**Boundary:** The environment is not identical with what an agent can observe through a representation.

**Dependencies:** None declared  
**Originating paper:** Behavior  
**Supporting papers:** Behavior; CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?; Interaction; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Ontology, Semantics, Representation, and Interpretation  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Affordance

**Canonical ID:** `affordance`  
**Maturity:** Established external construct  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

An action-relevant relation between an agent’s effectivities or capabilities and environmental structure that makes a class of action possible. In the Gibsonian sense, perception is not required for the affordance to exist.

**Boundary:** Affordance is not synonymous with permission, signaling, belief, execution success, or reversibility.

**Deprecated terminology:** perceived affordance

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Representation, Invariance, and Projection; Ontology, Semantics, Representation, and Interpretation; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Opportunity

**Canonical ID:** `opportunity`  
**Maturity:** Proposed coordination framework  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A typed and indexed analytical profile coordinating action-availability relations under declared system, agent, projection, task, authority, state, and temporal conditions.

Opportunity is not a new primitive. It coordinates established relations such as feasibility, capability, permission, enablement, reachability, exposure, signaling, belief, expected consequence, reversibility, and uncertainty.

**Deprecated terminology:** opportunity as a primitive

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Interaction Similarity; Interaction Strategies; Foundations of Computational Interaction; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Opportunity Contract  
**Formal mappings:** No unique formal mapping declared

## Opportunity profile

**Canonical ID:** `opportunity-profile`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Operationalizable by contract

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

**Aliases:** typed opportunity profile

**Deprecated terminology:** opportunity as a primitive

**Dependencies:** Interpretation, System state, Projection, Affordance, Capability, Permission, Enablement, Reachability, Exposure, Signaling, Believed action  
**Originating paper:** Representation, Invariance, and Projection  
**Supporting papers:** Representation, Invariance, and Projection; Opportunity, Affordance, and Action Availability; Behavior; Interaction Similarity; Interaction Strategies  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Opportunity Contract  
**Formal mappings:** Layered observation-enriched probabilistic labeled transition system

**Example:** A profile distinguishing permitted, enabled, exposed, signaled, and believed actions.

**Counterexample:** A visible control treated as proof that an action is feasible or believed.

## Capability

**Canonical ID:** `capability`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

The effective capacity or resources required for an agent-system coupling to execute an action or bring about an outcome under declared conditions.

**Boundary:** Capability is distinct from permission. Security capability tokens must be named explicitly when that narrower meaning is intended.

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Foundations of Computational Interaction; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?; Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Permission

**Canonical ID:** `permission`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Authorization under a policy, role, rule, authority, or institutional condition for a subject to perform an operation.

**Boundary:** A prohibited action may remain technically possible.

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Foundations of Computational Interaction; Behavior; Interaction Similarity; Interaction Strategies  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Enablement

**Canonical ID:** `enablement`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

The condition in which an action’s current-state preconditions are satisfied.

**Boundary:** Enablement is local to the current state and differs from multi-step reachability.

**Aliases:** enabled action

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Formal Models of Computational Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Reachability

**Canonical ID:** `reachability`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Operationalizable by contract

The existence of at least one admissible transition sequence from a declared initial state to a target state or outcome within specified constraints and horizon.

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Formal Models of Computational Interaction; Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Exposure

**Canonical ID:** `exposure`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Operationalizable by contract

Provision by the current projection of an executable access path to an operation.

**Boundary:** An exposed operation may be hidden, poorly signaled, unknown, or inaccessible to a particular observer.

**Aliases:** operation exposure

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Interaction Transfer; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Predicting Interaction; Formal Models of Computational Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Signaling

**Canonical ID:** `signaling`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Operationalizable by contract

Perceivable information indicating an operation, condition, consequence, state, or recovery path.

**Boundary:** A signal may be true, incomplete, ambiguous, or false.

**Aliases:** signifier

**Deprecated terminology:** perceived affordance

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Foundations of Computational Interaction; Formal Models of Computational Interaction; Predicting Interaction; Comparative Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Discoverability

**Canonical ID:** `discoverability`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Operationalizable by contract

The empirically observed probability and process by which an agent identifies an action or relation under declared task, projection, knowledge, modality, context, and time conditions.

**Boundary:** Discoverability is not a static visual property.

**Deprecated terminology:** perceived affordance

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; Measurement; Representation, Invariance, and Projection; Interaction Transfer; Comparative Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Believed action

**Canonical ID:** `believed-action`  
**Maturity:** Proposed latent variable  
**Observable status:** No - latent/inferred  
**Latent status:** Yes  
**Measurement status:** Requires latent-variable model

An action represented by an agent as available, with an associated confidence and expected consequence.

**Boundary:** Belief cannot be read directly from non-selection or task completion. It requires elicitation or a validated inferential model.

**Aliases:** believed availability

**Deprecated terminology:** perceived affordance

**Dependencies:** Interaction history  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Interaction Similarity; Interaction Transfer; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Action

**Canonical ID:** `action`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A declared intervention, command, operation, or behavior capable of participating in a state transition.

**Boundary:** A low-level input such as a click or touch is not necessarily the semantic action under study.

**Deprecated terminology:** perceived affordance, interaction causes behavior

**Dependencies:** None declared  
**Originating paper:** Opportunity, Affordance, and Action Availability  
**Supporting papers:** Opportunity, Affordance, and Action Availability; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Interaction Strategies; CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?; Behavior  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Interaction Contract  
**Formal mappings:** No unique formal mapping declared

## State transition

**Canonical ID:** `state-transition`  
**Maturity:** Proposed  
**Observable status:** Directly/Instrumentally  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A change from one declared system state to another under a transition relation, process, or event.

**Aliases:** transition

**Dependencies:** Action  
**Originating paper:** Interaction  
**Supporting papers:** Interaction; Behavior; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Observation

**Canonical ID:** `observation`  
**Maturity:** Proposed  
**Observable status:** Directly/Instrumentally  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A recorded or accessible distinction about state, transition, representation, or outcome available through a specified measurement or observation process.

**Boundary:** Observation is not interpretation, inference, or evidence by itself.

**Dependencies:** None declared  
**Originating paper:** Formal Models of Computational Interaction  
**Supporting papers:** Formal Models of Computational Interaction; Measurement; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Interaction Strategies; Interaction Similarity  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Projection Contract, Opportunity Contract, Interaction Contract, Behavioral Evidence Contract, Measurement Contract, Similarity Contract, Transfer Contract, Strategy Contract, Prediction Contract  
**Formal mappings:** No unique formal mapping declared

## Situated behavior

**Canonical ID:** `situated-behavior`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A bounded, temporally extended trajectory of observable or instrumentally recoverable changes, outputs, or regulated persistence attributed to a system in relation to its environment under a declared observation and attribution model.

**Boundary:** Representation does not determine behavior directly.

**Dependencies:** None declared  
**Originating paper:** Canonical glossary  
**Supporting papers:** None located  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Behavioral evidence

**Canonical ID:** `behavioral-evidence`  
**Maturity:** Candidate  
**Observable status:** Directly/Instrumentally  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A provenance-preserving chain connecting direct observations, system-derived features, latent interpretations, alternative explanations, uncertainty, and falsifying evidence to a bounded research claim.

**Boundary:** A trace is evidence of what occurred. It is not direct evidence of intention, understanding, culture, personality, or protected identity.

**Aliases:** behavior evidence

**Dependencies:** Measurement contract  
**Originating paper:** Behavior  
**Supporting papers:** Behavior; Foundations of Computational Interaction; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Formal Models of Computational Interaction; Comparative Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Behavioral Evidence Contract  
**Formal mappings:** No unique formal mapping declared

## Behavioral equivalence

**Canonical ID:** `behavioral-equivalence`  
**Maturity:** Candidate  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Equivalence of declared action or outcome distributions for a specified population, task, context, metric, and tolerance.

**Boundary:** Behavioral equivalence does not imply semantic, interpretive, strategy, learning, transfer, or interactional equivalence.

**Dependencies:** None declared  
**Originating paper:** Representation, Invariance, and Projection  
**Supporting papers:** Representation, Invariance, and Projection; Interaction Similarity; Formal Models of Computational Interaction; Ontology, Semantics, Representation, and Interpretation; Opportunity, Affordance, and Action Availability  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Behavioral Evidence Contract  
**Formal mappings:** No unique formal mapping declared

## Interactional equivalence

**Canonical ID:** `interactional-equivalence`  
**Maturity:** Candidate  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Equivalence of the available operation-transition-observation structure under specified agent, task, projection, authority, state, context, and tolerance conditions.

**Dependencies:** None declared  
**Originating paper:** INTERACTION AS A
SCIENTIFIC EXPLANANDUM  
**Supporting papers:** INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Representation, Invariance, and Projection; Interaction Similarity  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Interaction

**Canonical ID:** `interaction`  
**Maturity:** Proposed scientific target  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A family of bounded coupling phenomena in which distinguishable systems or participants become mutually consequential through perturbation, constraint, uptake, response, and recurrence.

**Boundary:** Interaction is not reducible to action, behavior, communication, computation, observation, state transition, feedback, or causation alone. Ordinary-language usage may be broader than the strict research definition.

**Deprecated terminology:** interaction causes behavior

**Dependencies:** Foundations of Computational Interaction  
**Originating paper:** Interaction  
**Supporting papers:** Interaction; CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Foundations of Computational Interaction; Predicting Interaction  
**Supporting literature:** (1982) Human-computer interaction: a preliminary RUDD,J., STERN, K. R. AND ISENSEE, S. (1996) Low social psychological analysis. Behavior Research: vs. High-fidelity Prototyping Debate. ACM Inter- Methods and Instrumentation,13, (2), 210-220. actions Magazine, January, 76-85. References 501; (1993) Human-Computer Interaction (2nd ed.). Analysis: Verbal Reports as Data. Cambridge, MA: London: Prentice-Hall Europe. The MIT Press.; (1993) Project Ernestine: validating a GOMS J. (1993) Unpacking collaboration: the interac- analysis for predicting and explaining real-world tional organization of trading in a city dealing performance. Human-Computer Interaction, 8(3), room. In Proceedings of the Third European Con- 237-309. ference on Computer-Supported Cooperative; 1. Interview: reproduced by permission of IDEO. (1997) Tangible Bits: towards seamless interfaces, in CH1'97 Proceedings, reprinted by permission of Chapter 2 Association for Computing Machinery, Inc.; Figure Figure 2.1 (on Color Plate 2): gif from www.ai.mit. 2.1 1 (ii) gif from www.almaden.ibm.com/cs/blueeyes/ edu/projects/medical-visionlsurgeryl reproduced by permission of IBM; Figure 2.11 (iii): gif surgical-navigation.htm1 reproduced by permission from www.parc.xerox.com/red/members/richgold/ of Michael E. Leventon; Figure 2.6(a): gif from livingdoc/slide6. html, reproduced by permission of http://vibes.cs.uiuc.edu/ProjectNRIVirtuelVirtueOve Rich Gold of PARC Communications; Figure 2.12: rview.htm, reproduced by permission of Dr Daniel A. gif from www.mbay.net/-brendaWarticleslPDA. Reed (University of Illinois at Urbana-Champaign) Mar.951 reproduced by permission of General Magic, from work on the Collaborative Virtual Inc.  
**Contracts:** Interaction Contract  
**Formal mappings:** No unique formal mapping declared

## Interaction episode

**Canonical ID:** `interaction-episode`  
**Maturity:** Proposed canonical unit  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Operationalizable by contract

A bounded interval in which two or more distinguishable systems are coupled such that perturbations originating in, or mediated by, one system alter the possible or actual state trajectory of another, and the resulting configuration constrains a later trajectory of an originating or co-participating system within a declared boundary and timescale.

Reciprocal closure may be direct, indirect, asymmetric, delayed, probabilistic, or environmentally mediated.

**Boundary:** A single isolated one-way causal effect is not an interaction episode under the strict definition unless it enters a recurrent or reciprocally constraining structure.

**Aliases:** strict interaction episode

**Dependencies:** Opportunity profile, Coupling, Token identity, Type identity, Interaction contract  
**Originating paper:** Interaction  
**Supporting papers:** Interaction; CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?; Formal Models of Computational Interaction; Foundations of Computational Interaction; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Interaction Contract  
**Formal mappings:** Layered observation-enriched probabilistic labeled transition system

**Example:** A request, response, and later state-dependent continuation within a declared protocol boundary.

**Counterexample:** A one-way message with no reciprocal or recurrent constraint inside the declared episode.

## Coupling

**Canonical ID:** `coupling`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A relation or pathway through which a participant or shared medium can alter another participant's transition structure, reachable states, probabilities, timing, or constraints.

**Dependencies:** Interaction participant, Environment  
**Originating paper:** Interaction  
**Supporting papers:** Interaction; CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Formal Models of Computational Interaction; How Sciences Define Their Objects  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** Layered observation-enriched probabilistic labeled transition system

## Perturbation

**Canonical ID:** `perturbation`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A difference propagated through a coupling relation that may change state, transition conditions, probabilities, timing, or reachable outcomes.

**Dependencies:** None declared  
**Originating paper:** Interaction  
**Supporting papers:** Interaction; INTERACTION AS A
SCIENTIFIC EXPLANANDUM  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Uptake

**Canonical ID:** `uptake`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Incorporation of a perturbation into a participant's state, transition process, control process, or interpreted situation. Uptake need not be semantic or conscious.

**Dependencies:** None declared  
**Originating paper:** Interaction  
**Supporting papers:** Interaction; Ontology, Semantics, Representation, and Interpretation; Opportunity, Affordance, and Action Availability  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Recurrence

**Canonical ID:** `recurrence`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Return influence through which a response constrains an originating participant, a co-participant, or the shared coupling configuration.

**Dependencies:** None declared  
**Originating paper:** Interaction  
**Supporting papers:** Interaction; Interaction Strategies; Behavior  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Interaction contract

**Canonical ID:** `interaction-contract`  
**Maturity:** Proposed reusable artifact  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A declaration of interaction identity, participants and roles, boundary, timescale, state, coupling, preconditions, events, transitions, protocol, invariants, evidence, failure, recovery, and completion conditions.

**Dependencies:** None declared  
**Originating paper:** Interaction  
**Supporting papers:** Interaction; Foundations of Computational Interaction; Comparative Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Interaction Contract  
**Formal mappings:** No unique formal mapping declared

## Interaction morphology

**Canonical ID:** `interaction-morphology`  
**Maturity:** Candidate  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

The measurable structural properties of a representation or interaction surface, such as hierarchy, topology, density, alignment, rhythm, symmetry, enclosure, continuity, direction, visual weight, temporal organization, and modality.

**Boundary:** Morphology is not independent of all semantics or interpretation. A study must declare which content and operations are controlled.

**Dependencies:** None declared  
**Originating paper:** Canonical glossary  
**Supporting papers:** None located  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Interaction Contract  
**Formal mappings:** No unique formal mapping declared

## Interaction grammar

**Canonical ID:** `interaction-grammar`  
**Maturity:** Candidate  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A typed vocabulary and composition structure for semantic actions and transitions independent of any one input modality or rendering implementation.

**Dependencies:** None declared  
**Originating paper:** CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?  
**Supporting papers:** CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?; Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Interaction Contract  
**Formal mappings:** No unique formal mapping declared

## Interaction history

**Canonical ID:** `interaction-history`  
**Maturity:** Candidate  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

The accumulated experience, training, conventions, outcomes, failures, practices, and prior exposure that may change an agent’s later beliefs, policies, and interpretation.

**Boundary:** Interaction history biases later behavior but does not fully explain or determine an individual.

**Dependencies:** None declared  
**Originating paper:** INTERACTION AS A
SCIENTIFIC EXPLANANDUM  
**Supporting papers:** INTERACTION AS A
SCIENTIFIC EXPLANANDUM  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Interaction Contract  
**Formal mappings:** No unique formal mapping declared

## Trace

**Canonical ID:** `trace`  
**Maturity:** Proposed  
**Observable status:** Directly/Instrumentally  
**Latent status:** No or not inherently  
**Measurement status:** Operationalizable by contract

A temporally ordered or partially ordered record of observable or attributed events under declared boundaries, granularity, and observation rules.

**Boundary:** A trace is not identical with behavior, action, policy, strategy, intention, or mechanism.

**Aliases:** interaction trace, behavioral trace

**Dependencies:** Observation  
**Originating paper:** Interaction Similarity  
**Supporting papers:** Interaction Similarity; Behavior; Interaction Strategies; Interaction; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Projection Contract, Opportunity Contract, Interaction Contract, Behavioral Evidence Contract, Measurement Contract, Similarity Contract, Transfer Contract, Strategy Contract, Prediction Contract  
**Formal mappings:** Layered observation-enriched probabilistic labeled transition system

## Measurement contract

**Canonical ID:** `measurement-contract`  
**Maturity:** Proposed reusable artifact  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Operationalizable by contract

A declaration of the measurand, observation process, operationalization, scale, uncertainty, validity evidence, population, task, projection, comparison conditions, and permitted interpretation.

**Boundary:** A metric is not a construct. Numerical output does not justify a latent interpretation without a validated measurement relation.

**Dependencies:** Trace  
**Originating paper:** Measurement  
**Supporting papers:** Measurement; Formal Models of Computational Interaction; Foundations of Computational Interaction; Behavior; Interaction Transfer  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Measurement Contract  
**Formal mappings:** No unique formal mapping declared

**Example:** A declaration of measurand, observation process, scale, uncertainty, and admissible inference.

**Counterexample:** A response-time column treated as a construct without validity conditions.

## Interaction similarity

**Canonical ID:** `interaction-similarity`  
**Maturity:** Proposed typed comparison framework  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Operationalizable by contract

A comparison of interaction tokens, types, structures, protocols, opportunities, traces, behaviors, policies, strategies, outcomes, causes, or measurements under an explicit frame, correspondence mapping, admissible transformations, metrics, tolerances, uncertainty, and validity domain.

**Boundary:** There is no context-free universal similarity score.

**Dependencies:** Measurement contract, Similarity contract  
**Originating paper:** INTERACTION AS A
SCIENTIFIC EXPLANANDUM  
**Supporting papers:** INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Interaction Similarity; Predicting Interaction; Comparative Interaction; Foundations of Computational Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Interaction Contract  
**Formal mappings:** No unique formal mapping declared

**Example:** A typed profile comparing protocol, opportunity, trace, and outcome dimensions.

**Counterexample:** One aggregate score presented without a comparison contract.

## Token identity

**Canonical ID:** `token-identity`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Historical identity of one bounded interaction episode under declared continuity, participant, boundary, and timescale criteria.

**Dependencies:** None declared  
**Originating paper:** Interaction  
**Supporting papers:** Interaction; Interaction Similarity; Comparative Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Type identity

**Canonical ID:** `type-identity`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Membership in the same abstraction-defined interaction class under explicit classification rules.

**Dependencies:** None declared  
**Originating paper:** Interaction Similarity  
**Supporting papers:** Interaction Similarity; Interaction; Comparative Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Equivalence

**Canonical ID:** `equivalence`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Exact preservation under a declared comparison contract and observable set. Equivalence is always typed.

**Aliases:** typed equivalence

**Dependencies:** Interaction similarity  
**Originating paper:** Interaction Similarity  
**Supporting papers:** Interaction Similarity; Representation, Invariance, and Projection; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Comparative Interaction; Formal Models of Computational Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Similarity

**Canonical ID:** `similarity`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Graded proximity under declared dimensions, representations, alignment rules, metrics, weights, tolerances, and uncertainty.

**Aliases:** typed similarity

**Deprecated terminology:** universal similarity score

**Dependencies:** None declared  
**Originating paper:** Interaction Similarity  
**Supporting papers:** Interaction Similarity; INTERACTION AS A
SCIENTIFIC EXPLANANDUM; Foundations of Computational Interaction; Interaction Transfer; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Similarity Contract  
**Formal mappings:** No unique formal mapping declared

## Incomparability

**Canonical ID:** `incomparability`  
**Maturity:** Proposed  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

Failure to establish a defensible common comparison space because boundaries, targets, mappings, scales, observation processes, uncertainty, or validity domains cannot be aligned without unsupported assumptions.

**Dependencies:** None declared  
**Originating paper:** Comparative Interaction  
**Supporting papers:** Comparative Interaction; Interaction Similarity; Foundations of Computational Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Similarity contract

**Canonical ID:** `similarity-contract`  
**Maturity:** Proposed reusable artifact  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A declaration of comparison target, frame, representations, correspondence mapping, invariants, variants, observables, admissible and prohibited transformations, typed metrics or predicates, tolerances, uncertainty, validity domain, and final typed profile.

**Dependencies:** None declared  
**Originating paper:** Interaction Similarity  
**Supporting papers:** Interaction Similarity; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Similarity Contract  
**Formal mappings:** Layered observation-enriched probabilistic labeled transition system

## Strategy

**Canonical ID:** `strategy`  
**Maturity:** Proposed latent explanatory construct  
**Observable status:** No - latent/inferred  
**Latent status:** Yes  
**Measurement status:** Requires latent-variable model

An inferred, temporally extended organization of conditional action selection, information use, resource allocation, and contingency response that tends to preserve or improve one or more criteria across a declared class of interaction states.

**Boundary:** A strategy is not a single action, raw trace, repeated sequence, explicit plan, policy alone, skill, habit, or intention. It must be supported through rival discrimination, diagnostic contingencies, uncertainty, and evidence appropriate to the claim.

**Dependencies:** Policy, Interaction history, Strategy contract  
**Originating paper:** Interaction Strategies  
**Supporting papers:** Interaction Strategies; Predicting Interaction; Interaction Transfer; Formal Models of Computational Interaction; Foundations of Computational Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Strategy Contract  
**Formal mappings:** Layered observation-enriched probabilistic labeled transition system

**Example:** An inferred pattern of conditional search, commitment, and recovery across episodes.

**Counterexample:** A single successful action labeled as a strategy.

## Strategy contract

**Canonical ID:** `strategy-contract`  
**Maturity:** Proposed reusable artifact  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A declaration of strategy-bearing system, domain, timescale, criteria, state and observation model, state abstraction, opportunity assumptions, action repertoire, selection policy, information policy, commitments, contingency and recovery rules, switching and stopping conditions, resources, authority, identity invariants, rival strategies, uncertainty, and validity domain.

**Dependencies:** None declared  
**Originating paper:** Interaction Strategies  
**Supporting papers:** Interaction Strategies  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** Strategy Contract  
**Formal mappings:** No unique formal mapping declared

## Policy

**Canonical ID:** `policy`  
**Maturity:** Proposed  
**Observable status:** No - latent/inferred  
**Latent status:** Yes  
**Measurement status:** Requires latent-variable model

A conditional relation from represented states, observations, or beliefs to action distributions.

**Boundary:** A policy may be one component of a strategy. Strategy may additionally include information acquisition, commitment, resource allocation, switching, recovery, and stopping rules.

**Dependencies:** None declared  
**Originating paper:** Interaction Strategies  
**Supporting papers:** Interaction Strategies; Opportunity, Affordance, and Action Availability; Formal Models of Computational Interaction; Behavior; Interaction Similarity  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Fundamental

**Canonical ID:** `fundamental`  
**Maturity:** Proposed research substrate  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A representation-independent computational substrate for declaring domain commitments, evolving system state, assigning operational semantics, and producing governed projections whose preservation, transformation, omission, introduced structure, operations, snapshots, and replay can be inspected.

**Boundary:** Fundamental is not the scientific theory, a philosophical ontology, proof of CIS, or a guarantee of shared human meaning.

**Dependencies:** None declared  
**Originating paper:** CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?  
**Supporting papers:** CAN INTERACTION BECOME A
PRIMARY SCIENTIFIC OBJECT?; How Sciences Define Their Objects; Representation, Invariance, and Projection; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared

## Foundations of Computational Interaction

**Canonical ID:** `computational-interaction-science`  
**Maturity:** Proposed research program; disciplinary autonomy unproven  
**Observable status:** Conditional on observation model  
**Latent status:** No or not inherently  
**Measurement status:** Measure only under declared operationalization

A research program that studies interaction as an explanatory target by separating and comparing declared domain commitments, state, semantics, projection, representation, interpretation, opportunity, coupling, behavior, measurement, similarity, strategy, and evidence.

CIS must justify itself through comparative explanatory gain, empirical validity, reproducible methods, and error-sensitive predictions. It does not replace HCI, psychology, anthropology, cognitive science, design, computer science, or related disciplines.

**Aliases:** the proposed model

**Dependencies:** None declared  
**Originating paper:** Foundations of Computational Interaction  
**Supporting papers:** Foundations of Computational Interaction; Predicting Interaction  
**Supporting literature:** See master bibliography and originating paper  
**Contracts:** None directly assigned  
**Formal mappings:** No unique formal mapping declared
