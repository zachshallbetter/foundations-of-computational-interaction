# Foundations of Computational Interaction

> **Editorial status:** Canonical encyclopedia-style draft, version 0.3. This is not yet suitable for Wikipedia mainspace because *Foundations of Computational Interaction* does not presently have significant independent secondary coverage. The origin statement concerning Zachary Shallbetter and Fundamental should remain project-documented provenance until independently sourced.

**Foundations of Computational Interaction** (**the proposed model**) is a proposed interdisciplinary research program concerned with the systematic study of computational interaction, including its representation, coupling, behavioral organization, measurement, and comparison. It examines how human, computational, collective, institutional, and hybrid participants become mutually consequential through computationally mediated representations, interpretations, opportunities, actions, state transitions, and feedback.

the proposed model treats **interaction** as its principal explanatory target rather than reducing it to interface use, individual behavior, communication, or machine execution. Its research program seeks to determine which properties of an interaction remain stable, which change, and why, when the system, representation, modality, participant, context, authority, history, or implementation changes.

The proposed field draws on [[human–computer interaction]], [[computer science]], [[cognitive science]], [[artificial intelligence]], [[information science]], [[ecological psychology]], [[cybernetics]], [[control theory]], [[formal methods]], [[distributed cognition]], and the [[philosophy of science]]. It remains a developing theoretical program rather than a recognized independent academic discipline.

## Terminology

The full name is **Foundations of Computational Interaction**. The shortened form **the proposed model** is used as a practical name for the research program and as an adjective in phrases such as *the proposed model model* and *the proposed model experiment*.

The adjective *computational* identifies both the phenomenon and the method. the proposed model includes interaction in which computation participates directly, as in software, AI, robotics, protocols, and computational infrastructure. It also uses computational methods such as simulation, formal modeling, trace analysis, replay, and reproducible comparison.

the proposed model uses **interaction participant** as its broadest term for an entity occupying a consequential role in an interaction. This avoids using *agent* as a universal category. In contemporary artificial intelligence, *agent* commonly denotes a computational system that selects and performs actions with some autonomy. the proposed model therefore reserves *agent* for participant types whose action-selection properties are relevant and explicitly stated.

An interaction participant may be a person, software service, AI system, robot, team, institution, organization, sensor, policy engine, or hybrid arrangement. Participation does not imply consciousness, intelligence, autonomy, or learning. A participant may instead observe, mediate, authorize, constrain, translate, store, represent, or transform state.

## Origins and development

The term *Foundations of Computational Interaction* was introduced in project documentation by **Zachary Shallbetter** during the development of **Fundamental**, a representation-independent computational substrate, in 2025–2026. The initial engineering problem concerned how one declared computational world could be realized across games, user interfaces, data systems, native applications, simulations, and other hosts without being defined by any one representation.

Questions raised by that architecture moved beyond software design. If the same target system could be expressed through different representations, researchers could ask what each representation preserved, transformed, omitted, or introduced. If the underlying operations remained stable while visibility, signaling, or interaction changed, those differences could be treated as experimental variables rather than aesthetic judgments. Fundamental consequently became one possible research substrate for the emerging theory rather than the theory itself.

This provenance is documented within the proposed model project. It should not be presented as independently established public history unless reliable secondary sources attribute the term and its origin.

Early the proposed model research examined how sciences stabilize explanatory targets, how representations differ from their targets, and how ontology, semantics, information, interpretation, and behavior should be separated. Later work developed a typed account of action opportunity connecting system-relative possibility to what participants can perceive, believe, execute, and recover from.

These studies weakened several strong initial claims. Representation was not found to determine behavior; semantic equivalence did not imply equivalent interpretation or action; opportunity did not emerge as a new primitive; and interaction did not yet justify an autonomous discipline. The surviving contribution was a relational architecture coordinating established concepts while preserving their distinct sources of truth and evidence.

## Scientific object

the proposed model studies computational interaction as an **explanatory target**. An explanatory target is the event, pattern, capacity, regularity, outcome, or contrast for which an account is sought. Treating interaction as a target does not imply that interaction belongs exclusively to one discipline or that it is a natural kind with a single essence.

In broad usage, computational interaction is a temporally situated coupling in which computationally mediated participants, systems, representations, actions, and feedback become mutually consequential. For research requiring a discriminating episode boundary, the proposed model uses a stricter definition:

> **An interaction episode is a bounded interval in which two or more distinguishable systems are coupled such that perturbations originating in, or mediated by, one system alter the possible or actual state trajectory of another, and the resulting configuration constrains a later trajectory of an originating or co-participating system within a declared boundary and timescale.**

Reciprocal closure may be direct, asymmetric, delayed, probabilistic, or mediated through a shared environment. A single isolated one-way causal effect is therefore causation but not necessarily an interaction episode under the strict definition.

An interaction may be analyzed at several levels: a synchronized event, recurrent exchange, task episode, long-term practice, team, institution, or longitudinal relationship. No universal smallest unit has been established; the boundary and timescale are part of the research claim.

Interaction is distinguished from neighboring concepts. An **action** is an intervention, command, or behavior that may participate in a state transition. A **state transition** is a change in a declared system state. **Communication** concerns messages and signals. **Computation** concerns formally or physically realized transformations. These may occur within interaction, but none alone defines the complete explanatory target.

## Theoretical framework

the proposed model uses a relational rather than strictly layered model. It distinguishes roles that are frequently combined in software systems or research accounts while allowing them to constrain and revise one another.

### Domain commitments, state, and semantics

**Domain commitments** specify the entities, relations, identities, constraints, modalities, and operations admitted by a model or inquiry. They may be expressed through a formal ontology, conceptual model, schema, type system, contract, or protocol.

**System state** is the physical, computational, social, or modeled condition of the declared system at a particular time. State may include values, entities, relationships, permissions, resources, histories, and process conditions. Stored variables are therefore components of state or data, not meaning by themselves.

**Semantic assignment** is the rule-governed assignment of content, denotation, truth conditions, inferential consequences, or transition behavior to expressions, states, signs, or operations. In logic, an interpretation supplies truth conditions. In programming-language theory, denotational, operational, and axiomatic semantics provide different accounts of program behavior. These formal assignments can be specified independently of whether a human participant understands them.

A **semantic state** is the set of content-bearing assignments and relations currently licensed by a specified semantics. the proposed model does not assume that every semantic state is observer-independent.

### Representation and projection

A **representation** is a materially or formally realized vehicle that provides selective access to a declared target through a mapping and an interpretive practice. Representations include diagrams, source code, maps, tables, interfaces, simulations, speech, tactile displays, documents, and APIs.

Representation is selective and constructive. It may preserve some entities, relations, quantities, or operations while transforming or omitting others. It may also introduce structure not present in the source description, such as spatial grouping, row order, visual salience, coordinate systems, defaults, interaction sequences, latency, or ambiguity.

A **projection** is a declared transformation from a target description, system state, or semantic assignment into an accessible representational form. It coordinates established ideas such as database views, abstraction functions, bidirectional lenses, cartographic projections, compiler transformations, scientific models, and interface renderings.

A projection contract specifies the target, mapping, interpretation rules, preserved properties, transformed properties, omissions, introduced properties, available operations, observer assumptions, intended uses, uncertainties, tolerances, and failure conditions.

### Scoped invariance

the proposed model rejects unqualified claims that two representations have “the same meaning” or contain “the same information.” Invariance is typed and scoped.

Let \(T\) be a declared target domain, \(R_1\) and \(R_2\) representation domains, and \(p_1:T\rightarrow R_1\) and \(p_2:T\rightarrow R_2\) projection functions. Let \(J_1\) and \(J_2\) be independently specified interpretation or comparison functions, \(Q\) the property family claimed invariant, and \(\varepsilon\) the permitted tolerance. Scoped invariance holds when

\[
J_1(p_1(t)) \equiv_Q J_2(p_2(t)) \pm \varepsilon
\]

for the declared targets, observers, tasks, and contexts.

The property family \(Q\) may concern identity, truth conditions, topology, computational behavior, inferential consequences, task outcomes, behavior, or interactional structure. Preservation of one type does not imply another. Two interfaces may be computationally equivalent while producing different inference, recovery, effort, or action distributions.

### Interpretation

**Interpretation** is the application, recovery, construction, negotiation, or revision of semantic relations by an interpreting participant or practice under a context, competence, history, and purpose.

Interpretation is distinct from formal semantics. A program may possess stipulated operational semantics while users misunderstand its interface. Multiple communities can interpret the same representation differently, and interpretation can change through action and feedback.

This distinction constrains behavioral inference: equivalent actions or outcomes do not prove equivalent interpretations.

### Opportunity and action availability

the proposed model uses **opportunity** as a typed coordination framework rather than a new primitive. The model integrates concepts from ecological affordance theory, planning, control, access control, decision theory, reinforcement learning, formal methods, and HCI.

For an action \(a\), participant \(x\), state \(s\), projection \(p\), and time \(t\), an opportunity profile may record whether the action is domain-valid, within the participant-system capability, permitted, currently enabled, capable of reaching a target outcome, exposed by the projection, signaled, believed available, expected to have particular consequences, reversible, selected, executed, and successful.

A compact representation is:

\[
\Omega_t(a,x)=
\langle D,C,M,N,L,X,G,B,Q,V,U \rangle
\]

where \(D\) denotes domain validity, \(C\) effective capability, \(M\) permission, \(N\) current enablement, \(L\) reachable outcomes, \(X\) exposure, \(G\) signaling, \(B\) believed availability, \(Q\) expected consequences, \(V\) reversibility or recoverability, and \(U\) uncertainty and provenance.

The tuple coordinates different relations; it does not imply that they share one bearer or measurement method. Permission is determined by authority or policy. Enablement is determined by current-state preconditions. Exposure is a property of a projection and access path. Signaling involves perceivable cues. Belief is participant-relative and latent. Selection, execution, and success are observed events or trace predicates.

### Policy, behavior, and feedback

A **policy** is a decision or action-selection process conditioned by interpreted state, goals, capability, authority, expected consequences, environment, history, costs, risk, and uncertainty.

Situated behavior is not modeled as a direct function of representation. A schematic relation is

\[
B_t \sim \pi(J_t,\Omega_t,G_t,E_t,K_t,H_t)
\]

where \(J_t\) is interpreted state, \(\Omega_t\) the opportunity profile, \(G_t\) goals, \(E_t\) the surrounding environment, \(K_t\) relevant capabilities or knowledge, and \(H_t\) interaction history.

The resulting action changes the system through a transition relation:

\[
X_{t+1}=T(X_t,B_t)
\]

The transition may also alter later permissions, representations, interpretations, beliefs, and recovery paths. the proposed model therefore treats interaction as recursive.

## Computational interaction model

A computational interaction episode may be represented analytically as

\[
\mathcal{C}_t =
\langle O,X,S,P,R,I,\Omega,\pi,B,E_v \rangle_t
\]

where \(O\) denotes domain commitments, \(X\) system state, \(S\) semantic assignment, \(P\) projection, \(R\) representational realization, \(I\) interpretation, \(\Omega\) opportunity profile, \(\pi\) policy, \(B\) situated behavior, and \(E_v\) the evidence record.

The tuple is an analytical decomposition, not a claim that every interaction literally implements ten software modules or cognitive variables. Its purpose is to prevent claims from moving between levels without justification.

An interaction evolves as

\[
\mathcal{C}_t \rightarrow \mathcal{C}_{t+1}
\]

through system transitions, changed representations, revised beliefs, learning, institutional action, and accumulated evidence.

## Behavior, measurement, similarity, and strategy

the proposed model distinguishes behavior from raw records. **Behavior** is treated as a bounded, temporally extended trajectory of observable or instrumentally recoverable changes, outputs, or regulated persistence attributed to a system in relation to its environment under a declared observation model. A log record may support detection of an event; an event may support an attributed trace; neither alone establishes an action, policy, strategy, intention, or understanding.

Measurement supplies the bridge from observation to scientific claim. A **Measurement Contract** declares the measurand, observation process, operationalization, scale, uncertainty, validity evidence, population, task, projection, and permitted interpretation. the proposed model therefore treats a metric and a construct as different objects. Completion time, for example, is a measured duration; it is not by itself a measure of comprehension, confidence, fluency, or quality.

Interaction comparison is typed rather than universal. Token identity concerns the same historical episode. Type identity concerns membership in the same abstraction-defined class. Equivalence concerns exact preservation under declared observables and admissible transformations. Similarity concerns graded proximity under specified dimensions and metrics. Incomparability occurs when no defensible common comparison space can be established.

A similarity contract can be summarized as

\[
K = \langle T,F,M,O,A,D,W,\varepsilon,U,V \rangle
\]

where the terms declare target type, comparison frame, correspondence mapping, observables, admissible transformations, typed distances, weighting, tolerances, uncertainty, and validity domain. The preferred result is a typed profile across semantic, structural, protocol, opportunity, trace, behavioral, policy, strategy, outcome, causal, and measurement-relative dimensions rather than one composite score.

An **interaction strategy** is an inferred, temporally extended organization of conditional action selection, information use, resource allocation, and contingency response that tends to preserve or improve one or more criteria across a declared class of states. Strategy is supported by traces but is not identical with them. It may contain a policy or plan, but may also require information-seeking, commitment, recovery, switching, stopping, and distributed coordination.

A strategy model may be expressed analytically as

\[
\Sigma = \langle D,X,O,Z,C,A,\pi,q,k,r,w,\tau,\rho,U \rangle
\]

where the components describe the domain, state, observation model, state abstraction, criteria, action repertoire, conditional selection, information acquisition, commitments, recovery, switching, stopping, resources, and uncertainty. The tuple is an analytical contract, not a claim about the literal structure of human cognition. Strong strategy claims require rival models, diagnostic contingencies, repeated evidence, and preferably intervention or out-of-sample discrimination.

## Interaction participants

An **interaction participant** is any bounded person, collective, organism, computational process, artificial system, institution, or hybrid arrangement occupying a consequential role in an interaction.

One entity may occupy several roles simultaneously. A conversational AI may represent system state, interpret a request under an operational model, mediate access to external tools, select an action, and generate signals that alter a human participant's beliefs. A policy engine may authorize or prevent transitions without interpreting in a human sense.

An **autonomous agent** is an acting participant that selects actions through an internally maintained policy under observed or inferred state. An **AI agent** is a computational participant whose action selection substantially depends on an AI model and whose host system supplies observations and consequential operations. A model that only produces text or classifications is not automatically an agent.

The term **observer** identifies a role occupied by a participant when it receives, measures, records, or constructs distinctions concerning a target. The observer need not be external to the system.

## Evidence and methodology

the proposed model distinguishes direct observations from derived features, latent interpretations, and research conclusions.

\[
\text{observation}
\rightarrow
\text{derived feature}
\rightarrow
\text{model-dependent interpretation}
\rightarrow
\text{bounded claim}
\]

Each step requires provenance, uncertainty, alternative explanations, and falsifying conditions. A pause in an action trace is an observed duration, not direct evidence of hesitation. Failure to select an action does not prove that the participant was unaware of it. Successful completion does not establish understanding. Cultural, demographic, or protected identities cannot be inferred from interaction behavior.

Methods proposed for the proposed model include controlled experiments, formal verification, simulation, trace analysis, replay, observational studies, qualitative inquiry, mixed methods, and longitudinal research. The program now coordinates Projection, Opportunity, Interaction, Behavioral Evidence, Measurement, Similarity, and Strategy Contracts so that each inferential transition remains inspectable.

A projection comparison should declare the target model, operation semantics, authority rules, starting states, participant population, tasks, equivalence type, measurement procedures, tolerances, and implementation differences. Formal claims may be tested through query equivalence, reconstruction, refinement, bisimulation, model checking, or verified transition correspondence. Empirical claims may involve discovery, latency, action awareness, belief calibration, sequence choice, error, recovery, learning, transfer, accessibility, effort, and coordination.

## Applications

In **human–AI interaction**, the proposed model can compare what an AI system can execute with what its language implies, what policy permits, and what users believe. This distinguishes fluent explanation from actual authority and capability.

In **accessibility**, one transit system may be exposed through a visual map, structured speech, tactile output, and a programmatic interface. Route semantics may remain stable while search cost, spatial overview, memory demand, privacy, recovery, and independent verification differ.

In **scientific visualization**, equations, diagrams, simulations, tables, and narratives may concern the same target model while supporting different inferences.

In **software development**, a version-control repository may be operated through a graphical interface, command line, API, or conversational assistant. Core transitions may be computationally equivalent even though discoverability, composition, auditability, and failure prevention differ.

In **robotics**, a robot, remote operator, supervisor, sensor system, and policy service may interact through different projections of one physical environment.

In **healthcare**, clinicians, patients, insurers, scheduling systems, and regulators may receive role-specific projections of a shared workflow, each with different information, authority, language, and consequences.

In **games and simulation**, one declared world may be projected through particles, maps, text, spatial interfaces, or automated participants, providing controlled environments for studying representation, opportunity, coordination, learning, and behavior.

## Relationship to adjacent fields

the proposed model overlaps substantially with existing disciplines and does not claim to replace them.

[[Human–computer interaction]] studies the design, use, and consequences of interactive computational systems. the model proposes a more general explanatory architecture intended to apply across human, computational, institutional, and hybrid participants. Whether this difference warrants a separate field remains unresolved.

[[Cybernetics]] studies communication, control, and feedback in animals, machines, and organizations. the proposed model inherits this concern with coupled systems while giving explicit attention to representation, interpretation, typed opportunity, and cross-projection equivalence.

[[Cognitive science]] studies perception, reasoning, learning, language, and action. the proposed model may use cognitive theories but does not require every interaction explanation to posit internal cognition.

[[Artificial intelligence]] and [[multi-agent system]] research study intelligent action, coordination, planning, learning, and autonomous systems. the proposed model includes non-autonomous participants and focuses on how representations, authority, interpretation, and action availability structure interaction.

[[Information science]] studies the creation, representation, organization, retrieval, flow, and use of information. the proposed model treats information as a typed component of a broader interaction account.

[[Formal methods]] and programming-language theory supply precise accounts of state, transition, semantics, refinement, equivalence, and verification. the proposed model attempts to connect these formal relations with human interpretation, accessibility, institutional authority, and empirical behavior.

[[Ecological psychology]] supplies the relational concept of affordance, while activity theory, situated action, and distributed cognition emphasize tools, practices, communities, and material organization. the proposed model integrates these with computational transition systems, access control, and projection analysis.

[[Computational social science]] uses computation to study social systems and behavior. the proposed model instead takes computational interaction itself as the target and can include non-social cases such as compiler interfaces, machine protocols, or robot-control systems.

## Fundamental

**Fundamental** is a computational substrate associated with the origins of the proposed model. It separates declared model commitments, system state, operational behavior, projection, and host realization. Its concepts include bodies, relationships, patterns, contracts, projections, queries, snapshots, and replay.

Within the proposed model, Fundamental is treated as one possible research instrument. It can help researchers hold declared model state constant while generating different projections, verify formal preservation properties, expose operations, and connect behavioral traces to the alternatives and state present at the time of action.

Fundamental does not validate the proposed model, guarantee shared interpretation, or replace participant research, consent, statistical analysis, qualitative methods, or causal identification.

## Criticism and open questions

The principal criticism of the proposed model is that it may represent a synthesis of existing theories rather than a distinct explanatory program. Its major concepts already exist in philosophy, computer science, HCI, psychology, control theory, and formal methods. The framework must therefore demonstrate that its relational integration produces measurable explanatory, predictive, or intervention gains rather than merely reorganizing vocabulary.

A related concern is overformalization. Typed models can create false precision when interpretation, culture, social practice, or institutional power cannot be adequately expressed as variables. the proposed model treats its formal models as analytical commitments and requires qualitative and contextual methods where appropriate, but the adequacy of that response remains empirical.

Measurement has been specified as a contract-based framework, but empirical validation remains unresolved. Believed action availability, interpretation, expected consequence, perceived reversibility, strategy, and transfer are not directly observable. Their reliability and measurement invariance across tasks, languages, cultures, modalities, and populations have not been established.

The status of interaction as a distinct explanatory level also remains unsettled. Existing theories may explain interaction phenomena sufficiently when integrated, leaving the proposed model as a useful cross-disciplinary framework rather than an autonomous science.

Other open questions include formal model selection, strategy identifiability, interaction transfer, predictive limits, interaction grammar and morphology, causal equivalence, longitudinal history, and generalization beyond structured computational tasks.

## Current status

Foundations of Computational Interaction is a proposed research program. Its current contributions are theoretical synthesis, a strict interaction definition, behavior and evidence hierarchies, measurement requirements, typed similarity and strategy frameworks, reusable contracts, operational hypotheses, and a research agenda. It has not established a recognized discipline, a validated universal ontology, or a demonstrated body of predictive laws.

Its strongest current claim is methodological:

> Computational interaction should be studied by declaring the target system and episode boundary; separating state, representation, interpretation, opportunity, coupling, behavior, measurement, comparison, and strategy; preserving evidence provenance; and testing typed invariance, equivalence, similarity, and causal claims rather than assuming them.

## See also

[[Human–computer interaction]] · [[Interaction design]] · [[Cognitive science]] · [[Cybernetics]] · [[Systems theory]] · [[Distributed cognition]] · [[Situated cognition]] · [[Ecological psychology]] · [[Affordance]] · [[Formal methods]] · [[Programming language semantics]] · [[Knowledge representation and reasoning]] · [[Information visualization]] · [[Human–robot interaction]] · [[Human–AI interaction]] · [[Multi-agent system]] · [[Computational social science]]

## Selected references

Abbott, Andrew. *Chaos of Disciplines*. University of Chicago Press, 2001.

Baier, Christel, and Joost-Pieter Katoen. *Principles of Model Checking*. MIT Press, 2008.

Card, Stuart K.; Moran, Thomas P.; and Newell, Allen. *The Psychology of Human–Computer Interaction*. Lawrence Erlbaum Associates, 1983.

Cleveland, William S., and Robert McGill. “Graphical Perception: Theory, Experimentation, and Application to the Development of Graphical Methods.” *Journal of the American Statistical Association* 79 (1984): 531–554.

Codd, Edgar F. “A Relational Model of Data for Large Shared Data Banks.” *Communications of the ACM* 13 (1970): 377–387.

Cousot, Patrick, and Radhia Cousot. “Abstract Interpretation: A Unified Lattice Model for Static Analysis of Programs by Construction or Approximation of Fixpoints.” *Proceedings of POPL* (1977): 238–252.

Daston, Lorraine, and Peter Galison. *Objectivity*. Zone Books, 2007.

Gaver, William W. “Technology Affordances.” *Proceedings of CHI 1991* (1991): 79–84.

Gibson, James J. *The Ecological Approach to Visual Perception*. Houghton Mifflin, 1979.

Giere, Ronald N. *Scientific Perspectivism*. University of Chicago Press, 2006.

Gruber, Thomas R. “A Translation Approach to Portable Ontology Specifications.” *Knowledge Acquisition* 5 (1993): 199–220.

Guarino, Nicola. “Formal Ontology and Information Systems.” *Proceedings of FOIS '98* (1998): 3–15.

Hacking, Ian. *Representing and Intervening*. Cambridge University Press, 1983.

Hutchins, Edwin. *Cognition in the Wild*. MIT Press, 1995.

Kuhn, Thomas S. *The Structure of Scientific Revolutions*. 2nd ed. University of Chicago Press, 1970.

Larkin, Jill H., and Herbert A. Simon. “Why a Diagram Is (Sometimes) Worth Ten Thousand Words.” *Cognitive Science* 11 (1987): 65–100.

Machamer, Peter; Darden, Lindley; and Craver, Carl F. “Thinking About Mechanisms.” *Philosophy of Science* 67 (2000): 1–25.

Norman, Donald A. *The Design of Everyday Things*. Revised ed. Basic Books, 2013.

Peirce, Charles Sanders. *Collected Papers of Charles Sanders Peirce*. Harvard University Press, 1931–1958.

Shannon, Claude E. “A Mathematical Theory of Communication.” *Bell System Technical Journal* 27 (1948): 379–423 and 623–656.

Simon, Herbert A. *The Sciences of the Artificial*. 3rd ed. MIT Press, 1996.

Suchman, Lucy A. *Plans and Situated Actions*. Cambridge University Press, 1987.

Tarski, Alfred. “The Semantic Conception of Truth and the Foundations of Semantics.” *Philosophy and Phenomenological Research* 4 (1944): 341–376.

Wiener, Norbert. *Cybernetics: Or Control and Communication in the Animal and the Machine*. MIT Press, 1948.

Woodward, James. *Making Things Happen: A Theory of Causal Explanation*. Oxford University Press, 2003.

Zhang, Jiajie, and Donald A. Norman. “Representations in Distributed Cognitive Tasks.” *Cognitive Science* 18 (1994): 87–122.
