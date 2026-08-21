**Formal Models of Computational Interaction**

*Toward a Mathematical Foundation*

Cross-disciplinary foundational research paper

# Abstract

This paper evaluates whether one established formalism can represent the
interaction theory developed across prior work on ontology, semantics,
representation, projection, opportunity, behavior, measurement,
similarity, transfer, and strategy. Labeled transition systems, Petri
nets, process algebras, statecharts, event structures, workflow nets,
Markov decision processes, partially observable Markov decision
processes, category-theoretic process models, and multi-agent formalisms
are compared by a common set of obligations: bounded interaction
episodes, reciprocal coupling, partial-order behavior, typed
opportunity, projection and observation, latent strategy, uncertainty,
empirical traces, composition, and typed equivalence.

No candidate satisfies every obligation without extension. Labeled
transition systems provide the smallest operational core and the
broadest verification ecosystem, but interleaving semantics obscures
true concurrency and standard forms omit observation, policy,
measurement, and empirical uncertainty. Event structures preserve
causality, conflict, and concurrency but are less convenient for
state-rich, stochastic, and instrumented systems. Petri nets and
workflow nets excel at concurrency, resources, and completion. Process
algebras provide the strongest native composition and behavioral
equivalence theory. MDPs and POMDPs provide decision, uncertainty,
belief, and strategy semantics but ordinarily presuppose a fixed
action/state model and weakly represent organizational and
representational structure. Statecharts provide hierarchy and practical
specification but lack one universally accepted mathematical semantics.
Category theory supplies a principled language of composition and
translation rather than a sufficient empirical model by itself.

The evidence therefore supports a conservative hybrid foundation rather
than a new calculus: an observation-enriched probabilistic labeled
transition system as the canonical semantic kernel; event-structure or
Petri-net views for concurrent causality and resource flow;
process-algebraic operators for composition and equivalence; and
POMDP-style belief and policy layers where agency under uncertainty is
part of the explanandum. A trace-and-measurement morphism connects
formal executions to empirical records. The paper supplies a formal
ontology mapping, core semantics, model comparison matrix,
expressiveness analysis, and recommended foundation.

# 1. Problem Statement

The established interaction theory imposes obligations that exceed
ordinary interface-state modeling. An interaction episode has declared
participants, boundary, timescale, coupling, preconditions, transitions,
invariants, evidence, failure, recovery, and completion. Behavior is a
bounded attributed trajectory under an observation model rather than raw
telemetry. Opportunity distinguishes domain-valid, capable, permitted,
enabled, reachable, exposed, signaled, believed, executable, successful,
and reversible action. Strategy is a latent, temporally extended
organization of conditional action selection. Measurement connects
records to variables and claims through explicit operationalization and
uncertainty. Similarity is typed rather than universal.

A formal foundation must preserve these distinctions while remaining
analyzable and compositional. The central problem is not which formalism
is most expressive in the abstract. It is which minimal combination
represents the established ontology without encoding every distinction
as an informal annotation or inventing a new mathematical language.

# 2. Evaluation Method

Each candidate formalism was evaluated against the same representation
obligations. The assessment distinguishes native expressiveness from
expressibility by arbitrary encoding. A universal programming language
can encode nearly any finite model, but such encodability does not make
its semantics transparent or its analyses appropriate.

The criteria were: (1) episode boundaries and identity; (2) state and
transition semantics; (3) reciprocity and coupling; (4) concurrency and
causal independence; (5) nondeterminism; (6) probability and
uncertainty; (7) partial observability and projection; (8) opportunity
and authorization; (9) policy and strategy; (10) empirical trace
alignment; (11) composition and decomposition; (12) equivalence and
refinement; (13) verification and quantitative analysis; and (14)
suitability for estimation from observed interaction data.

The review prioritized foundational sources: labeled transition systems
and model checking; Murata on Petri nets; Milner on process algebra;
Harel on statecharts; Winskel on event structures; workflow-net
soundness; Sutton and Barto on MDPs; Kaelbling, Littman, and Cassandra
on POMDPs; and categorical process semantics. The conclusion is
comparative and architectural, not a claim that all systems should be
implemented using one notation.

# 3. Formal Obligations Derived from the Theory

The formal object must distinguish six kinds of state: domain state,
participant state, authority state, projection state, observer or belief
state, and measurement state. Combining them into one Cartesian state is
mathematically possible but destroys explanatory modularity and causes
state-space explosion. The foundation should therefore permit factored
state and typed transition labels.

An interaction episode requires more than a transition path. It requires
a boundary predicate, participant assignment, coupling relation,
initiating and completion conditions, and evidence linking the modeled
episode to observations. Reciprocal constraint need not mean
simultaneous bidirectional transition. It can be represented by causal
dependence across a bounded execution: an event of one participant
changes the enabled, probable, observable, or valued future of another,
whose subsequent event recurrently constrains the first or the shared
system.

Opportunity requires multiple predicates over actions and states rather
than one action set. Projection and observation require mappings from
domain states and transitions to exposed operations and observable
symbols. Belief requires probability or possibility over hidden states.
Strategy requires a policy-like object over histories, observations, or
beliefs, plus temporally extended organization where needed. Empirical
use requires a stochastic or uncertain observation channel from
executions to records.

# 4. Labeled Transition Systems

A labeled transition system (LTS) consists minimally of states, action
labels, and a transition relation. It provides the clearest common
denominator for enabled actions, executions, traces, reachability,
safety, liveness, refinement, simulation, and bisimulation. Interaction
episodes can be represented as bounded executions satisfying initiation
and completion predicates. Typed labels can identify actor, channel,
operation, authorization result, and outcome.

The principal strength of LTS semantics is analyzability. Model
checking, equivalence checking, reachability, temporal logic, and
compositional reductions are mature. LTSs also serve as semantic targets
for statecharts, process algebras, workflow systems, and many
programming languages.

The limitations are equally important. Standard interleaving semantics
represents concurrent events as alternative sequences and therefore
loses causal independence unless enriched. Ordinary LTSs do not natively
distinguish projection from domain state, observation from execution,
permission from enablement, policy from transition availability, or
empirical records from formal traces. Probability, time, cost, and
partial observability require extensions. The LTS is therefore the best
semantic kernel, not a complete interaction model.

# 5. Petri Nets and Workflow Nets

Petri nets represent distributed state through places and tokens and
behavior through transition firing. They are particularly strong for
concurrency, synchronization, resource consumption, conflict,
invariants, boundedness, liveness, and reachability. Their graphical and
algebraic structure makes them well suited to workflows, multi-party
protocols, and interactions in which independent activities and shared
resources matter.

Workflow nets add distinguished source and sink conditions and support
soundness questions concerning completion, residual tokens, and dead
transitions. These concepts correspond naturally to interaction
initiation, completion, deadlock, and cleanup.

Standard place-transition nets remain weak for rich data, hierarchical
projection, belief, policy, and measurement. Colored, timed, stochastic,
and inhibitor-arc variants increase expressiveness but fragment analysis
and can approach general programming-language complexity. Petri nets
should therefore be treated as a concurrent-resource view of the
canonical model, especially where partial-order structure and completion
are central.

# 6. Process Algebras

Process algebras such as CCS, CSP, and the pi-calculus represent systems
through processes and operators for action prefix, choice, parallel
composition, synchronization, hiding, relabeling, and recursion. Their
major contribution is not simply another transition notation; it is a
compositional theory in which the behavior of a whole can be derived
from interacting parts and compared through rigorously defined
observational relations.

This is highly aligned with the interaction theory. Participant
processes can be composed through channels, internal actions can be
hidden, projections can be modeled by abstraction or renaming, and typed
equivalences can express what an observer can distinguish. Process
algebra offers the strongest native account of compositional interaction
identity and substitutability.

Classic process algebras are less natural for quantitative human
behavior, empirical traces, continuous variables, resources, belief, and
learning. Probabilistic, timed, stochastic, and hybrid variants exist,
but no single process calculus has become the universal
cross-disciplinary foundation. Process algebra is best used to define
composition, interface contracts, and equivalence over the transition
kernel.

# 7. Statecharts

Statecharts extend state machines with hierarchy, orthogonality, and
broadcast communication. These features address practical complexity:
hierarchical states support abstraction; orthogonal regions represent
concurrency; history supports resumption; and event-triggered
transitions support reactive behavior. They are highly usable for
engineered interactive systems and can align naturally with interface
modes and lifecycle states.

Their weakness as a foundational theory is semantic plurality. Variants
differ in event queues, step semantics, priority, run-to-completion,
concurrency, and history. Statecharts can be translated into transition
systems, but the resulting semantics must be declared explicitly. They
are therefore an effective authoring and presentation notation rather
than the canonical mathematical substrate.

# 8. Event Structures

Event structures represent computations as event occurrences constrained
by causality, consistency, enabling, and conflict. They distinguish true
concurrency from mere nondeterministic interleaving and make
partial-order traces primary. This is valuable for interaction because
logs often impose a total order that is not causally justified, and
because distributed or collaborative episodes contain independent
events.

Event structures also support counterfactual questions about which
events depend on which prior events and which alternatives exclude one
another. These relations are closer to the interaction paper's
recurrent-constraint account than a flat sequence is.

However, event structures are less direct for mutable data-rich state,
continuous quantities, reward, partial observation, and online
estimation. Probabilistic and game extensions exist, but tool ecosystems
are narrower. Event structures should be available as a
causal-concurrency semantics derived from or linked to the transition
kernel.

# 9. MDPs and POMDPs

A Markov decision process represents states, actions, transition
probabilities, rewards, and policies. It directly supports stochastic
behavior, expected outcomes, controllability through action, and
strategy evaluation. A partially observable MDP adds observations and
belief states, making it especially relevant to the distinction between
actual state, projection, observation, believed actions, and expected
consequences.

These formalisms are the strongest candidates for opportunity, strategy,
adaptation, and prediction. A projection can be represented partly
through the observation kernel and available action function; belief
mediates action selection; options can represent temporally extended
policies.

Their standard assumptions create limits. The Markov property may
require state augmentation. A single optimizing agent and scalar reward
may misrepresent collaborative, institutional, or interpretive
interaction. Authorization, signaling, semantics, and measurement
validity are not intrinsic. POMDP observations are probabilistic
signals, not the complete concept of representation or projection.
MDP/POMDP semantics should therefore be an optional decision layer over
the interaction kernel, not the universal ontology.

# 10. Category-Theoretic Process Models

Category theory provides objects, morphisms, composition, identity,
products, monoidal structure, functors, and natural transformations. In
process-oriented applications, objects can represent interfaces or
systems and morphisms can represent processes. Symmetric monoidal
categories support parallel composition and diagrammatic reasoning.
Functors can relate different semantic models while preserving
composition.

This makes category theory valuable for expressing the architecture of
the research program: multiple views of one interaction model,
compositional contracts, translations between Petri nets and execution
categories, and preservation claims across projections. It is
particularly suited to stating when a translation is structure
preserving.

Category theory does not by itself choose the empirical entities,
transition probabilities, observation model, or measurement semantics.
Treating it as the primary model would move essential commitments into
the choice of category. It should therefore serve as a meta-level
compositional and translation framework, not the sole executable
semantics.

# 11. Multi-Agent and Game-Based Models

Multi-agent systems represent multiple agents with local states,
actions, observations, protocols, knowledge, goals, and sometimes
utilities. Concurrent game structures add strategic choice and
adversarial or cooperative outcomes. Epistemic and temporal logics can
express what agents know and what coalitions can enforce.

These models directly address distributed agency and asymmetric
opportunity. They can represent authorization, imperfect information,
joint action, coordination, negotiation, and strategic interaction
better than single-agent MDPs.

Their limitation is heterogeneity: multi-agent modeling is a family of
frameworks rather than one semantics. Agent identity, rationality,
knowledge, communication, and utility assumptions vary widely. The
recommended foundation should permit multiple participant policies and
local observation models without presupposing ideal rational agents or
equilibrium behavior.

# 12. Comparative Result

No single candidate dominates across all obligations. LTSs lead on
minimality, operational clarity, verification, and equivalence. Process
algebras lead on native composition and observational substitutability.
Event structures and Petri nets lead on true concurrency, causality, and
resource flow. Statecharts lead on practical hierarchical specification.
POMDPs lead on partial observability, belief, policy, and stochastic
decision. Category theory leads on compositional translation across
models.

The comparison rejects two alternatives. A monolithic Cartesian-state
POMDP can encode nearly every distinction but makes ontology, authority,
representation, measurement, and composition opaque. A purely
process-algebraic foundation captures interaction structure but leaves
empirical uncertainty, belief, and data-model alignment as external
additions. The minimal defensible solution is therefore a layered
semantic profile with one canonical kernel and formally related views.

# 13. Recommended Formal Foundation

The recommended kernel is an observation-enriched probabilistic labeled
transition system (OEPLTS):

M = \<N, S, A, T, I, F, C, P, X, O, Y, R\>.

N is the set of participants and system components. S is a factored
state space. A is a typed action/event vocabulary. T(s,a,s\') is a
nondeterministic or probabilistic transition relation. I and F define
episode initiation and completion. C defines effective capability. P
defines authorization. X defines exposure through a projection. O maps
hidden state and events to observer-accessible observations. Y maps
executions to instrument records. R defines recovery or reversibility
relations.

A participant-relative strategy is a history-, observation-, or
belief-dependent policy pi_i. Belief update is added when O is
non-injective or stochastic. Rewards or criteria are optional and typed
rather than mandatory. A coupling relation K identifies cross-component
dependencies by which an event or state change of one component alters
another component\'s enabled transitions, transition probabilities,
observations, or value-relevant futures.

The kernel has three associated semantics. Its unfolding into an event
structure provides causal and concurrent semantics. Its composition
through process-algebraic operators provides modular semantics and
behavioral equivalences. Its decision enrichment into an MDP, POMDP,
stochastic game, or decentralized POMDP provides policy and uncertainty
semantics. Petri-net or workflow projections represent resource and
completion structure. Category-theoretic functors can state preservation
across these views.

Empirical linkage is explicit: an execution omega generates an
observation trace through O and an instrument record through Y.
Segmentation and attribution functions turn records into behavioral
events under a measurement contract. This prevents formal traces from
being equated automatically with observed behavior.

# 14. Formal Semantics

An execution is a finite or infinite alternating sequence s0, a0, s1,
a1, \... satisfying T. An interaction episode is an execution segment
bounded by I and F in which the declared coupling criterion K is
satisfied. Reciprocity is tested over the causal dependency graph, not
merely by the presence of actions from multiple actors.

The executable set for participant i at state s is the intersection of
domain-valid, capable, permitted, and enabled actions. Exposure and
signaling are additional projection-relative predicates and need not
coincide with executability. Believed availability is defined over the
participant\'s belief state and may include false positives or omit
executable actions.

Composition is defined by synchronized product over shared labels or
explicit channels, with hiding and relabeling. Independent transitions
may interleave operationally but are retained as concurrent in the
event-structure unfolding. Refinement is typed: trace inclusion,
simulation, bisimulation, probabilistic bisimulation, testing
equivalence, opportunity preservation, or measurement-relative
equivalence must be selected explicitly.

The model is implementation independent. A GUI, CLI, API, conversational
agent, robot, or collaborative workflow is represented through different
projection, observation, and action mappings over a declared domain and
transition semantics.

# 15. Analyzability and Empirical Suitability

The recommended kernel preserves access to mature algorithms:
reachability, invariant checking, temporal-logic model checking,
simulation and bisimulation checking, probabilistic model checking,
controller synthesis, policy evaluation, and partial-order reduction.
Factored state and modular composition are necessary to reduce state
explosion.

Empirical suitability requires a different set of checks. Model states
and labels must be operationally linked to records; hidden variables
must not be treated as observed; timing and missingness must be
represented; and parameter estimates must carry uncertainty. Conformance
between traces and models should distinguish deviation, observation
error, abstraction error, and model misspecification.

The formal model is therefore not itself a measurement instrument. It is
a theory-constrained representation whose empirical use depends on a
measurement contract, estimation procedure, and validation evidence.

# 16. Falsification and Threats to Validity

The recommendation should be rejected or narrowed if a single
established formalism can represent all required distinctions natively,
preserve modularity, support the necessary analyses, and connect to
empirical records without ad hoc layers. It should also be rejected if
the proposed mappings cannot be made semantics-preserving or if
independent analysts cannot reproduce the ontology-to-model mapping.

A second threat is over-formalization. Human interaction boundaries,
intentions, semantics, and social rules may be contested or emergent.
Formal precision does not eliminate uncertainty about what should be
modeled. A third threat is state explosion and undecidability: increased
expressiveness can destroy analyzability. A fourth is false realism: a
model can be internally coherent while omitting institutional,
environmental, or representational variables that generated observed
behavior.

The foundation therefore makes scope conditions explicit. It is
strongest for computationally mediated episodes with declared
operations, participants, records, and boundaries. Open-ended cultural
activity may require qualitative and historical explanation alongside
formal modeling.

# 17. Conclusion

The minimum adequate foundation is not a new universal calculus. It is a
conservative layered architecture centered on an observation-enriched
probabilistic labeled transition system. The LTS kernel supplies state,
transition, execution, reachability, and verification. Process algebra
supplies composition and typed behavioral equivalence. Event structures
or Petri nets supply concurrency, causality, and resource flow. POMDP or
game enrichments supply partial observation, belief, policy, and
stochastic strategy. Measurement mappings connect executions to records
and claims. Category theory can organize translations and preservation
across these views.

This recommendation preserves the strongest existing mathematics while
matching the conceptual distinctions already established. It also leaves
open an empirical test: if the layered model does not improve
specification, comparison, explanation, verification, or prediction
relative to simpler baselines, the additional structure should be
removed.

# 18. Reusable Artifacts

## A. Formal Ontology Mapping

  -----------------------------------------------------------------------
  Concept                             Formal interpretation
  ----------------------------------- -----------------------------------
  Interaction episode                 Bounded execution segment
                                      satisfying initiation, completion,
                                      and coupling predicates.

  Participant                         Typed component or agent with local
                                      state, actions, and observation
                                      access.

  Domain state                        Facts determining transition
                                      semantics independent of
                                      presentation.

  Projection state                    Representation and access-path
                                      configuration exposed to a
                                      participant.

  Authority state                     Roles, permissions, and policy
                                      conditions.

  Observation                         Participant-accessible symbol or
                                      signal generated from hidden
                                      state/event.

  Instrument record                   Timestamped or structured record
                                      emitted by the measurement channel.

  Action/event                        Typed occurrence capable of
                                      participating in a transition.

  Transition                          Possible or probabilistic state
                                      change labeled by an event.

  Coupling                            Cross-component dependency that
                                      changes possible or probable future
                                      trajectories.

  Opportunity profile                 Typed predicates over validity,
                                      capability, permission, enablement,
                                      exposure, belief, reachability, and
                                      recovery.

  Strategy/policy                     History-, observation-, or
                                      belief-dependent organization of
                                      action selection.

  Execution                           A path or partial-order
                                      configuration licensed by the
                                      model.

  Behavioral trace                    Attributed event structure derived
                                      from records under an observation
                                      and measurement contract.

  Equivalence                         Declared preservation relation over
                                      selected observables and
                                      transformations.
  -----------------------------------------------------------------------

## B. Model Comparison Matrix

  ----------------------------------------------------------------------------------------------------------------------------
  Formalism          Native strengths   Uncertainty   Composition   Empirical fit      Equivalence   Recommended role
  ------------------ ------------------ ------------- ------------- ------------------ ------------- -------------------------
  LTS                State,             Weak without  Strong        Strong             Moderate      Kernel
                     transitions,       extension                                                    
                     reachability,                                                                   
                     traces, temporal                                                                
                     properties                                                                      

  Petri net          Concurrency,       Moderate via  Moderate      Strong for process Moderate      Concurrent/resource view
                     synchronization,   stochastic                  logs                             
                     resources,         variants                                                     
                     invariants                                                                      

  Process algebra    Composition,       Moderate via  Very strong   Moderate           Strong        Composition/equivalence
                     communication,     variants                                                     layer
                     hiding,                                                                         
                     equivalence                                                                     

  Statechart         Hierarchy,         Weak to       Moderate      Strong for         Moderate      Authoring notation
                     orthogonality,     moderate                    engineering models               
                     reactive lifecycle                                                              

  Event structure    Causality,         Moderate via  Strong        Moderate           Strong        Causal-concurrency view
                     conflict, true     extensions                                                   
                     concurrency                                                                     

  Workflow net       Completion,        Moderate      Moderate      Very strong        Moderate      Workflow specialization
                     workflow                                                                        
                     soundness, process                                                              
                     flow                                                                            

  MDP                Stochastic         Strong        Moderate      Strong with data   Moderate      Decision enrichment
                     transitions,                                                                    
                     rewards, policies                                                               

  POMDP              Observation,       Very strong   Moderate      Strong but         Moderate      Epistemic/strategy
                     belief, policy                                 estimation-heavy                 enrichment
                     under uncertainty                                                               

  Category theory    Composition and    Depends on    Very strong   Weak alone         Abstractly    Meta-level architecture
                     translations       chosen                                         strong        
                     between models     category                                                     

  Multi-agent/game   Local observation, Strong in     Moderate      Moderate           Strong for    Participant enrichment
                     joint action,      stochastic                                     strategic     
                     strategic ability  variants                                       equivalence   
  ----------------------------------------------------------------------------------------------------------------------------

## C. Expressiveness Mapping

  -----------------------------------------------------------------------
  Required construct                  Recommended representation
  ----------------------------------- -----------------------------------
  Episode boundaries                  Predicates I and F over execution
                                      states/events

  Reciprocal coupling                 Dependency relation K over
                                      components, transitions,
                                      observations, or enabled sets

  Concurrency                         Event-structure unfolding or
                                      Petri-net projection; partial-order
                                      reduction

  Opportunity                         Typed state/action predicates C, P,
                                      E, X plus reachability and recovery

  Projection                          State-dependent mapping from domain
                                      model to exposed actions and
                                      observations

  Measurement                         Channel Y from execution to records
                                      plus segmentation/attribution
                                      functions

  Uncertainty                         Probabilistic transition and
                                      observation kernels; interval or
                                      imprecise variants where needed

  Strategy                            Policies over histories,
                                      observations, or beliefs; options
                                      for temporal extension

  Composition                         Synchronized product, parallel
                                      operator, hiding, relabeling,
                                      interface contracts

  Similarity/equivalence              Trace, simulation, bisimulation,
                                      testing, probabilistic,
                                      opportunity, and
                                      measurement-relative relations
  -----------------------------------------------------------------------

## D. Recommended Formal Profile

Canonical kernel: observation-enriched probabilistic labeled transition
system.

Composition semantics: process-algebraic synchronized product, hiding,
relabeling, recursion, and typed equivalence.

Concurrency semantics: event-structure unfolding or Petri-net projection
when causal independence and resources matter.

Decision semantics: MDP, POMDP, stochastic-game, or decentralized
enrichment only when uncertainty, policy, or strategic choice is part of
the explanatory target.

Empirical semantics: observation channel and instrument-record channel
governed by the Measurement Contract and Behavioral Evidence Contract.

Translation semantics: explicit structure-preserving mappings between
views, optionally formalized as functors.

# 19. References

Baier, C., & Katoen, J.-P. (2008). Principles of Model Checking. MIT
Press.

Murata, T. (1989). Petri nets: Properties, analysis and applications.
Proceedings of the IEEE, 77(4), 541-580.

Milner, R. (1980). A Calculus of Communicating Systems. Springer.

Milner, R. (1989). Communication and Concurrency. Prentice Hall.

Hoare, C. A. R. (1985). Communicating Sequential Processes. Prentice
Hall.

Harel, D. (1987). Statecharts: A visual formalism for complex systems.
Science of Computer Programming, 8, 231-274.

Winskel, G. (1987). Event structures. In Advances in Petri Nets 1986,
LNCS 255. Springer.

van der Aalst, W. M. P. (1998). The application of Petri nets to
workflow management. Journal of Circuits, Systems and Computers, 8(1),
21-66.

van der Aalst, W. M. P. (2016). Process Mining: Data Science in Action.
Springer.

Sutton, R. S., & Barto, A. G. (2018). Reinforcement Learning: An
Introduction (2nd ed.). MIT Press.

Kaelbling, L. P., Littman, M. L., & Cassandra, A. R. (1998). Planning
and acting in partially observable stochastic domains. Artificial
Intelligence, 101, 99-134.

Fagin, R., Halpern, J. Y., Moses, Y., & Vardi, M. Y. (1995). Reasoning
About Knowledge. MIT Press.

Alur, R., Henzinger, T. A., & Kupferman, O. (2002). Alternating-time
temporal logic. Journal of the ACM, 49(5), 672-713.

Baez, J. C., & Stay, M. (2010). Physics, topology, logic and
computation: A Rosetta Stone. In New Structures for Physics. Springer.

Baez, J. C., Genovese, F., Master, J., & Shulman, M. (2021). Categories
of nets. arXiv:2101.04238.

van Glabbeek, R. J. (1990). The linear time-branching time spectrum.
CONCUR 1990. Springer.

Park, D. (1981). Concurrency and automata on infinite sequences.
Theoretical Computer Science.

Clarke, E. M., Grumberg, O., & Peled, D. A. (1999). Model Checking. MIT
Press.

Cassandras, C. G., & Lafortune, S. (2008). Introduction to Discrete
Event Systems (2nd ed.). Springer.

Reisig, W. (2013). Understanding Petri Nets. Springer.
