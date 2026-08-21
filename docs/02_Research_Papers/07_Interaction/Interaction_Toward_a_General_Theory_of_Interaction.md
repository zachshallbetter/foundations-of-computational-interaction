**Interaction**

*Toward a General Theory of Interaction*

Foundational research paper

# Contents

> Abstract
>
> 1\. Problem and Method
>
> 2\. Existing Conceptions of Interaction
>
> 3\. Reductive Tests
>
> 4\. Canonical Definition
>
> 5\. Necessary and Non-Necessary Conditions
>
> 6\. Interaction Ontology
>
> 7\. Interaction Primitives and Grammar
>
> 8\. Interaction Lifecycle
>
> 9\. Identity and Invariants
>
> 10\. Interaction Algebra
>
> 11\. Composition Rules
>
> 12\. Comparative Cases
>
> 13\. Evidence and Operationalization
>
> 14\. Falsification Tests
>
> 15\. Threats to Validity
>
> 16\. Conclusion

17\. Reusable Artifacts

18\. References

# Abstract

Interaction is invoked across human-computer interaction, cybernetics,
ecology, cognitive science, communication, control, formal methods,
robotics, and multi-agent systems, but these traditions do not share a
single definition. Some identify interaction with reciprocal action,
some with communication, some with feedback, some with synchronized
events, and some with situated meaning-making. This paper tests whether
interaction is primitive or reducible to established constructs. It
concludes that interaction is not a primitive substance or basic event
type. It is a higher-order relation over coupled processes: two or more
distinguishable systems interact during an episode when changes in each
system\'s possible or actual state trajectory are counterfactually
dependent on perturbations transmitted through a coupling relation
within a declared boundary and timescale. Reciprocity may be asymmetric,
delayed, mediated, probabilistic, or realized across a sequence;
simultaneous action, intention, communication, semantic understanding,
and visible behavior are not necessary. A single unilateral causal
effect is insufficient unless it enters a closed or recurrent dependency
structure. Existing fields provide nearly all constituent concepts -
action, coupling, feedback, transition, synchronization, communication,
coordination, and situated interpretation - but no single theory
supplies a cross-domain identity, composition, and comparison framework.
The warranted contribution is therefore a minimal synthesis, not a new
primitive: a typed interaction ontology, episode lifecycle,
compositional grammar, algebraic operators, identity criteria,
invariants, interaction contract, and falsification matrix.

# 1. Problem and Method

The word interaction often performs explanatory work without identifying
what kind of phenomenon occurred. In interface research it may mean a
sequence of user inputs and system outputs. In cybernetics it can imply
feedback. In communication theory it may mean exchange of messages. In
ecological psychology it can indicate organism-environment reciprocity.
In formal computer science it can mean synchronization or communication
between processes. In social theory it may refer to jointly produced
order. These uses overlap, but none can be assumed to define the others.

The analysis used a cross-disciplinary boundary method. For each
tradition, the study identified: (1) the entities allowed to interact;
(2) the relation or mechanism linking them; (3) whether reciprocity,
intention, communication, observation, or state change is required; (4)
the temporal unit; (5) the evidence by which interaction is established;
and (6) the formal resources available for identity and composition.
Candidate definitions were then tested against counterexamples including
passive sensing, unilateral control, delayed feedback, hidden API
effects, failed communication, and simultaneous but independent
activity.

The supplied corpus was used as foundational evidence for ecological,
situated, distributed, activity-theoretic, cognitive-engineering, and
interaction-design perspectives. The methodological standard followed
the Research Canon: concepts were retained only when necessary,
definitions were separated from implementations, and major claims were
made falsifiable and operationalizable.

# 2. Existing Conceptions of Interaction

No accepted universal definition exists. The major traditions organize
interaction around different explanatory targets.

Ecological psychology treats organism and environment as complementary
rather than independent explanatory domains. Gibson\'s affordances are
possibilities of action relative to an animal-environment system. This
supplies relationality but does not by itself define an interaction
episode, identity, or composition.

Cybernetics organizes control and communication through feedback. Wiener
placed messages and responses within circular regulation. Feedback gives
a strong mechanism for recurrent interaction, but open-loop influence
and one-shot synchronized events show that feedback is not necessary for
every interaction token.

Systems theory commonly treats interaction as mutual influence among
components whose collective behavior is not recoverable from isolated
components alone. This supplies dependence and emergence but often
leaves interaction boundaries and empirical identity underspecified.

Situated action and ethnomethodological approaches reject the view that
plans fully determine conduct. Suchman describes successful interaction
as collaboratively produced intelligibility responsive to contingencies
and others\' actions. This supplies situated accomplishment and
interpretive coordination, but it is too restrictive for non-semantic
physical and computational interactions.

Distributed cognition locates cognitive organization across people,
artifacts, and representational media. Hutchins shows that coordinated
transformations across a system can constitute the relevant cognitive
process. This supports system-level interaction and mediation but makes
boundaries a substantive modeling decision.

Activity theory places action within object-oriented, tool-mediated,
socially organized activity. It captures historical and institutional
mediation, yet its unit is often too large for atomic computational
interaction.

HCI contains multiple theories rather than one definition. Cognitive
engineering models user-system exchanges quantitatively; embodied
interaction treats meaning as arising through engaged practice;
instrumental and generative theories organize design around action and
adaptation; computational rationality explains interaction as adaptation
under bounds. These theories explain important classes of interaction
but are not extensionally equivalent.

Communication theory distinguishes transmission from meaning. Shannon\'s
mathematical theory explains signal selection and uncertainty without
requiring semantic understanding. Speech-act and agent-communication
theories add illocutionary force and protocol commitments. Communication
is therefore one interaction mechanism, not interaction\'s genus.

Control theory defines systems through inputs, states, outputs, and
dynamical response. Coupling occurs when one subsystem\'s output enters
another\'s dynamics. This gives precise counterfactual and temporal
machinery, but interaction cannot be reduced to successful control
because uncontrolled perturbation and negotiation also qualify.

Formal methods represent interaction through synchronization, shared
events, message passing, handshakes, shared variables, or transitions.
CCS, CSP, process algebras, labeled transition systems, event
structures, and protocol models provide composition and behavioral
equivalence. Their strength is formal precision; their limitation is
that semantic and social interpretation normally lies outside the
transition semantics.

Robotics and multi-agent systems treat interaction through sensing,
action, communication, coordination, negotiation, and joint task
execution. Protocols specify admissible message sequences and roles.
These approaches show that interaction may be globally specified but
locally enacted, and that composition can fail when local agents cannot
realize a global protocol.

Philosophy of action distinguishes intentional action from mere movement
or event. This blocks a definition of interaction as simply two actions:
many interactions include non-agentive components, unintended
consequences, or automatic responses.

# 3. Reductive Tests

Interaction cannot be reduced to action. An action can occur without
another system being coupled to it, while an interaction can include
passive dynamics, automatic responses, or non-intentional perturbations.
Action is attributable to an agent under some theory of agency;
interaction concerns dependence among processes.

Interaction cannot be reduced to behavior. Behavior is an observed or
modeled pattern attributable to a system. Two systems can behave
simultaneously without interacting, and a system\'s behavior may be
evidence of interaction without constituting the relation itself.

Interaction cannot be reduced to communication. Mechanical contact,
resource contention, sensorimotor coupling, and shared-state
interference can be interactions without messages or shared meaning.
Conversely, a transmitted message that produces no uptake may constitute
attempted communication but may fail to establish an interaction episode
under a causal-dependence criterion.

Interaction cannot be reduced to computation. Computation can occur
internally without coupling to another system. Some interactions are
physical, biological, or social and are not usefully described as
computation. Computational interaction is one domain-specific
realization.

Interaction cannot be reduced to observation. Observation may be
unilateral and non-perturbative at the modeled scale. It becomes
interaction when sensing changes subsequent trajectories, when
measurement perturbs the observed system, or when observation
participates in a recurrent loop.

Interaction cannot be reduced to a state transition. A state transition
can be internal and autonomous. Interaction requires that at least part
of a transition\'s occurrence, probability, timing, or reachable
consequences depend on another distinguishable system through a
coupling.

Interaction cannot be reduced to causation in general. A falling rock
may cause a mark in soil, but a single one-way causal event does not
automatically justify an interaction episode. The term is most useful
when the coupling creates reciprocal or recurrent constraint across the
participants\' trajectories. Reciprocity need not be equal or immediate;
it may be mediated through a shared environment and realized over time.

These failures do not establish interaction as metaphysically primitive.
They establish it as a non-redundant analytical relation composed from
existing notions of system, state, process, coupling, perturbation,
constraint, and temporal dependence.

# 4. Canonical Definition

Interaction episode: a bounded interval in which two or more
distinguishable systems are coupled such that perturbations originating
in, or mediated by, one system alter the possible or actual state
trajectory of at least one other system, and the resulting configuration
constrains a later trajectory of an originating or co-participating
system.

This definition has six commitments.

First, interaction is relational. It is not located exclusively in
either participant.

Second, interaction is processual. It is extended over at least an
analytically distinguishable sequence, even when implemented as an
apparently atomic synchronization.

Third, interaction requires coupling. A pathway must exist through which
perturbation, constraint, resource competition, synchronization, signal,
or material effect can pass.

Fourth, interaction requires counterfactual dependence. Holding relevant
background conditions fixed, removing or changing the coupling or
participant would change some participant\'s reachable, probable, timed,
or actual trajectory.

Fifth, interaction requires reciprocal closure at the episode level. The
reciprocal effect can be direct, indirect, asymmetric, delayed,
probabilistic, or environmentally mediated. A single isolated one-way
influence is causation but not yet interaction under the strict
definition.

Sixth, every interaction claim is boundary- and timescale-relative. What
appears unilateral over milliseconds may be reciprocal over seconds;
what appears dyadic may be mediated by infrastructure, institutions, or
environments when the boundary expands.

# 5. Necessary and Non-Necessary Conditions

Necessary conditions are: distinguishable participants or subsystems; a
coupling relation; at least one transmitted perturbation or constraint;
counterfactual effect on a participant trajectory; reciprocal or
recurrent closure within the declared episode; and explicit boundary and
timescale.

Not necessary are: biological agency; conscious intention; semantic
content; successful communication; mutual awareness; equality of
influence; simultaneous response; visible interface events; goal
agreement; positive outcome; or permanent state change.

Observable state change is not strictly necessary if the interaction
changes transition probabilities, timing, control margins, uncertainty,
or reachable possibilities without producing an immediately observed
macrostate change. Such claims require stronger evidence than direct
transition traces.

Interaction may fail. A protocol can deadlock, a conversational repair
can collapse, or a control loop can oscillate. Failure does not erase
the interaction; it changes its outcome and lifecycle state.

# 6. Interaction Ontology

The minimal ontology contains established constructs rather than newly
coined entities.

Participant: a system or subsystem treated as distinguishable for the
analysis.

State: the variables considered sufficient to characterize a participant
at a time and scale.

Process: an ordered or partially ordered evolution of state.

Boundary: the inclusion rule separating participants, environment, and
background conditions.

Coupling: a relation through which one participant or shared medium can
affect another participant\'s transition structure.

Perturbation: a difference propagated through a coupling relation.

Constraint: a change in possible, probable, timed, or admissible
trajectories.

Uptake: incorporation of a perturbation into a participant transition or
control process. Uptake need not be semantic.

Response: a subsequent transition attributable partly to uptake.

Recurrence: return influence through which a response constrains an
earlier source, co-participant, or shared coupling configuration.

Episode: a bounded segment containing initiation, coupling, uptake,
response, and sufficient closure for identity.

Trace: a temporally ordered or partially ordered record of observable
events and state estimates.

Protocol: a rule system constraining admissible interaction traces.

Outcome: the episode-relative resulting state, distribution, commitment,
or termination condition.

Context: background conditions that affect coupling or interpretation
but are not modeled as participants in the focal episode.

Environment: modeled external dynamics through which participants may be
coupled.

Invariant: a declared property preserved across an interaction,
representation, implementation, or decomposition.

# 7. Interaction Primitives and Grammar

The theory does not claim metaphysical primitives. It proposes
analytical primitives sufficient for representation.

A minimal event vocabulary is:

bind(p, q, c): establish or activate coupling c between participants p
and q.\
emit(p, d): participant p produces perturbation d.\
transmit(c, d): coupling c carries d.\
uptake(q, d): d changes q\'s transition conditions or state.\
respond(q, r): q undergoes or produces response r.\
recur(r, p\|c): r constrains p or the coupling configuration.\
commit(o): an outcome or commitment becomes episode-relevant.\
fail(f): a declared failure condition occurs.\
unbind(c): coupling terminates or becomes inactive.

A minimal interaction grammar is:

Episode ::= Boundary Initiation CoupledProcess Closure\
CoupledProcess ::= Exchange \| Synchronization \| SharedMedium \|
Feedback \| Coordination\
Exchange ::= Emit Transmit Uptake \[Response\]\
Synchronization ::= JointEvent constrained-by Participants\
SharedMedium ::= ParticipantEffect MediumTransition ParticipantUptake\
Feedback ::= Exchange Recurrence+\
Coordination ::= CoupledProcess constrained-by Protocol\
Closure ::= Recurrence \| JointCommitment \| StableTermination \|
DeclaredTimeout \| Failure

The grammar separates implementation form from interaction identity. A
message exchange, button press, physical collision, or shared-memory
write may instantiate the same abstract roles while differing in
semantics and mechanism.

# 8. Interaction Lifecycle

1\. Eligibility: participants, capacities, permissions, and
preconditions make coupling possible.\
2. Initiation: a participant or environmental condition activates a
coupling pathway.\
3. Perturbation: a difference is produced and propagated.\
4. Uptake: another participant\'s state or transition structure becomes
dependent on that difference.\
5. Response: a consequential transition occurs.\
6. Recurrence or closure: the response returns influence, establishes a
joint commitment, reaches stable termination, times out, or fails.\
7. Aftereffect: participant states, beliefs, policies, coupling
strength, or future opportunities may change.

These phases are analytical, not universally sequential. Synchronization
can merge initiation, uptake, and response. Distributed interaction can
contain concurrent branches. Repeated interaction can overlap
aftereffects with the eligibility conditions of later episodes.

# 9. Identity and Invariants

Interaction identity is not exhausted by event equality. The same
interaction may be rendered through different modalities,
implementations, or trace granularities. Conversely, superficially
identical event sequences may constitute different interactions when
participants, semantics, authority, or causal dependencies differ.

An interaction identity claim must declare: participants and roles;
focal boundary; timescale; coupling topology; relevant state variables;
protocol or admissibility conditions; causal or counterfactual
dependencies; initiation and closure criteria; and invariants.

Strong token identity requires continuity of the same causal episode.
Type identity requires equivalence under a declared abstraction.

Candidate invariants include:

Participant-role invariance: the same abstract roles are preserved
despite implementation changes.\
Protocol invariance: admissible ordering and obligation structure are
preserved.\
Transition invariance: corresponding actions induce equivalent abstract
state changes.\
Causal-structure invariance: the counterfactual dependency graph is
preserved.\
Outcome invariance: declared terminal conditions or distributions are
preserved.\
Information invariance: selected distinctions available to participants
are preserved.\
Opportunity invariance: relevant feasible, permitted, exposed, and
recoverable actions are preserved.\
Behavioral invariance: trace distributions remain equivalent under a
metric and tolerance.

No invariant is universal. Every equivalence claim must name the
preserved relation, observer, abstraction, context, and tolerance.

# 10. Interaction Algebra

Let an interaction type I be represented as a tuple:

I = \<P, S, C, E, T, R, B, K\>

where P is a set of participants and roles; S is a structured state
space; C is a coupling topology; E is a typed event set; T is a
transition or stochastic kernel; R is a recurrence and dependency
relation; B specifies boundary and timescale; and K specifies closure
conditions and invariants.

The following operators are sufficient for a minimal compositional
algebra.

Sequential composition I ; J: J begins after a closure condition of I
and may inherit a mapped state.

Parallel composition I \|\| J: episodes proceed concurrently with
independent or shared participants.

Synchronization I sync_A J: episodes must jointly participate in events
from synchronization set A.

Choice I + J: one of several admissible episode structures is realized.

Iteration I\*: zero or more recurrent instances under a termination
rule.

Mediation M\[I\]: interaction I is realized through mediator or
environment M.

Restriction I\\H: selected events or coupling channels are hidden from
an observer while remaining causally active.

Abstraction alpha(I): implementation events are mapped to a coarser
interaction type.

Refinement I \<= J: J preserves the declared invariants and allowed
behavior of I while adding implementation detail.

Interference I bowtie J: concurrent interactions share state or
resources such that each changes the other\'s reachable traces.

These operators borrow from process algebra, transition systems, and
systems theory. The proposed synthesis adds explicit participant roles,
episode boundaries, recurrence criteria, and cross-domain invariants.
Algebraic laws are conditional rather than universal. Sequential
composition is not necessarily commutative; parallel composition may
cease to be associative when resource or timing assumptions change;
abstraction must preserve declared observables to support equivalence.

# 11. Composition Rules

Interactions compose only when boundary mappings are valid. A
participant in one episode may become an environment, mediator, or
internal subsystem in another abstraction.

State compatibility: the terminal state distribution of the first
episode must satisfy the initial-state assumptions of the second.

Role compatibility: inherited participant roles and authority must
remain meaningful.

Coupling compatibility: channels, shared variables, or physical
interfaces must connect without introducing unmodeled transformations.

Temporal compatibility: ordering, concurrency, deadlines, and latency
assumptions must be satisfiable.

Semantic compatibility: where messages or commitments are involved,
content interpretations and protocol meanings must align.

Invariant compatibility: composition must not silently violate safety,
identity, or observational equivalence conditions.

Closure discipline: a subinteraction may be incomplete while the
containing interaction remains active, but its completion, timeout,
cancellation, or compensation must be represented.

Composition is therefore not mere concatenation of event logs. It is a
constrained construction over state, roles, coupling, time, and
invariants.

# 12. Comparative Cases

Human-human conversation. Participants alternate and overlap utterances,
gestures, gaze, repair, and inference. Communication and semantic
interpretation are central, but the interaction also includes timing,
turn allocation, mutual orientation, and embodied feedback. Identity
depends on the evolving joint episode rather than isolated messages.

Human-computer interaction. A user action changes system state or
presented information; the resulting projection changes the user\'s
opportunities, beliefs, or next action. Reciprocity is asymmetric
because the computational system need not possess intention. Interaction
is established by coupled trajectories, not by anthropomorphic agency.

Agent-agent interaction. Agents exchange messages, synchronize on shared
state, negotiate, or coordinate through protocols. Interaction can be
formally represented as global protocols and local enactments. Failed
enactability demonstrates that a global trace specification is not
sufficient unless local participants can realize it.

API interaction. A client request invokes a service transition, and the
response, error, side effect, or timeout changes the client\'s later
state or policy. A fire-and-forget request with no later client
dependence may be a unilateral invocation; an episode becomes
interaction when returned or shared-state effects constrain subsequent
behavior.

Physical interaction. Two bodies collide, deform, transfer momentum, and
alter each other\'s trajectories. There is no required communication or
interpretation. Reciprocal physical dependence provides the clearest
minimal example.

Conversational interaction with a computational agent. Messages are
represented as linguistic acts, but the underlying episode also includes
model state, tool availability, authorization, latency, and projection.
Apparent semantic reciprocity can exceed actual computational
capability, so interaction analysis must separate signaled, believed,
and feasible transitions.

Across all six cases, what remains common is not intention, language,
interface, or computation. It is bounded reciprocal constraint through
coupling, observable or inferable in participant trajectories.

# 13. Evidence and Operationalization

Direct evidence includes synchronized event traces, state measurements,
messages, control signals, resource changes, and observed transitions.
Derived evidence includes reconstructed causal graphs, reachability
differences, transfer functions, protocol conformance, and temporal
dependencies. Interpretive evidence includes inferred intention,
meaning, belief, coordination, and social significance.

A minimal empirical test for interaction compares a coupled condition
with a suitably matched decoupled or perturbed condition. Evidence
should show that changing participant A or coupling C changes B\'s
trajectory and that B\'s resulting state or response changes a later
trajectory of A, C, or a shared system within the episode boundary.

Possible measures include conditional mutual information, intervention
effects, transfer entropy, Granger-style temporal dependence, impulse
response, synchronization, cross-recurrence, state-transition
divergence, protocol trace conformance, and causal model comparison.
None alone proves interaction. Statistical dependence without a
plausible coupling may be confounding; causal influence without
recurrence may be unilateral causation; synchronized traces may share an
external driver.

For semantic and social interaction, additional evidence may include
repair sequences, uptake displays, commitment changes, alignment, or
coordinated task transitions. Such evidence should not be generalized to
physical or non-semantic interaction.

# 14. Falsification Tests

The theory should be rejected or narrowed if any of the following is
demonstrated.

Reduction to transition systems: if standard transition-system semantics
can represent participants, coupling, recurrence, episode identity,
interpretation boundaries, and cross-domain composition without
additional commitments, the proposed ontology adds no explanatory value.

Reciprocity failure: if scientific practice consistently classifies
one-way causal influence as interaction and no explanatory or predictive
gain follows from distinguishing it, reciprocal closure should be
removed from the definition.

Boundary non-reproducibility: if independent researchers cannot agree on
episode boundaries and timescales under explicit rules, interaction
identity may be too observer-relative for stable comparison.

Counterfactual non-identifiability: if coupled and merely correlated
trajectories cannot be distinguished even in principle for relevant
domains, interaction cannot support causal explanation there.

Composition failure: if the algebra cannot predict or explain properties
of composed episodes beyond raw event concatenation, it should be
treated as notation rather than theory.

Invariant failure: if no useful property can be preserved across
implementation-independent representations of interaction, claims of
general interaction types should be abandoned.

Existing-theory sufficiency: if one established theory provides
equivalent vocabulary, ontology, mechanisms, formalization, and
empirical predictions across all comparative cases, the synthesis should
be replaced by that theory.

Predictive null: if interaction-level variables do not improve
explanation or prediction over participant-level states, independent
causal models, and background context, interaction may be merely
descriptive.

# 15. Threats to Validity

The definition privileges reciprocal constraint and may exclude ordinary
language uses such as a person interacting once with a passive artifact.
This is deliberate but contestable. The stricter definition seeks
explanatory discrimination; broader usage may be appropriate in design
practice.

Counterfactual dependence is model-relative. Incorrect state variables,
hidden common causes, or poorly chosen timescales can create or erase
apparent interaction. Reciprocal effects may be too weak or delayed to
estimate.

The framework combines traditions with incompatible ontological
assumptions. Ecological psychology resists internal representational
explanations; formal computer science abstracts away material
embodiment; social theory treats meaning and accountability as locally
accomplished. The synthesis claims a shared structural layer, not
theoretical unification of all explanatory levels.

Formal composition can obscure situated transformation. Real
participants reinterpret protocols, change goals, and alter boundaries.
Interaction types should therefore be treated as models with scope
conditions, not exhaustive descriptions.

The comparative cases are selected to maximize diversity, but they do
not establish universality. Biological symbiosis, market interaction,
quantum interaction, and institutional interaction may require
revisions.

# 16. Conclusion

Interaction is not a primitive substance, action type, or universal
mechanism. Nor is it adequately reducible to action, behavior,
communication, computation, observation, state transition, feedback, or
causation alone.

The literature supports a minimal cross-disciplinary synthesis:
interaction is a bounded, temporally organized relation of reciprocal
constraint among distinguishable systems through coupling. Its tokens
are established by counterfactual dependence in participant
trajectories; its types are defined only under declared boundaries,
roles, abstractions, and invariants. Communication, synchronization,
feedback, coordination, collision, shared-state interference, and
situated meaning-making are mechanisms or forms of interaction rather
than synonyms.

Existing disciplines provide the constituent theory, but no single one
provides a complete cross-domain account of identity, composition,
invariance, and evidence. The minimum conceptual addition is therefore
not a new primitive. It is a shared interaction contract and typed
compositional framework that makes existing concepts interoperable and
empirically testable.

# 17. Reusable Artifacts

## Interaction Taxonomy

  -----------------------------------------------------------------------
  Element                             Definition / specification
  ----------------------------------- -----------------------------------
  By coupling mechanism               physical contact; field or
                                      environmental mediation; signal
                                      transmission; shared state;
                                      resource contention;
                                      synchronization; institutional or
                                      normative mediation

  By temporal form                    atomic synchronization;
                                      request-response; feedback loop;
                                      recurrent exchange; continuous
                                      coupling; asynchronous protocol;
                                      episodic coordination

  By agency                           non-agentive; unilateral-agentive;
                                      dyadic agentive; multi-agent;
                                      human-machine; system-environment

  By semantic status                  non-semantic; informational;
                                      communicative; interpretive;
                                      commitment-forming

  By symmetry                         symmetric; asymmetric;
                                      leader-follower; controller-plant;
                                      client-service; many-to-many

  By outcome                          successful; failed; partial;
                                      deadlocked; oscillatory;
                                      compensated; abandoned
  -----------------------------------------------------------------------

## Interaction Contract

  -----------------------------------------------------------------------
  Element                             Definition / specification
  ----------------------------------- -----------------------------------
  Identity                            interaction type and token
                                      identifier; abstraction level

  Participants                        entities, roles, capabilities,
                                      authority, and inclusion criteria

  Boundary                            system/environment partition;
                                      timescale; start and closure rules

  State                               relevant state variables and
                                      uncertainty

  Coupling                            channels, shared media, topology,
                                      latency, and capacity

  Preconditions                       eligibility, permissions,
                                      enablement, and initial assumptions

  Events                              emission, transmission, uptake,
                                      response, recurrence, commitment,
                                      failure

  Transitions                         deterministic, nondeterministic, or
                                      probabilistic state effects

  Protocol                            admissible ordering,
                                      synchronization, obligations, and
                                      timeouts

  Invariants                          properties required to remain
                                      preserved

  Evidence                            direct observations, derived
                                      dependencies, inferred
                                      interpretations

  Failure and recovery                deadlock, rejection, timeout,
                                      compensation, cancellation,
                                      rollback

  Completion                          stable termination, commitment,
                                      goal condition, timeout, or
                                      declared truncation
  -----------------------------------------------------------------------

## Falsification Matrix

  -----------------------------------------------------------------------
  Claim                               Contrary evidence and consequence
  ----------------------------------- -----------------------------------
  Interaction is relational           Cases where interaction is fully
                                      attributable to one participant
                                      without coupling -\> Remove
                                      relationality or restrict domain

  Reciprocal closure is necessary     Reliable explanatory practice
                                      treating isolated one-way influence
                                      as interaction -\> Broaden
                                      definition to directed causal
                                      coupling

  Counterfactual dependence           Matched interventions fail to
  distinguishes interaction           separate interaction from
                                      common-cause correlation -\> Limit
                                      causal claims to descriptive
                                      coordination

  Interaction types survive           No useful invariants across
  implementation change               implementations -\> Abandon general
                                      types; retain local episode
                                      descriptions

  Composition adds explanatory value  Composed properties equal
                                      unconstrained event concatenation
                                      -\> Drop algebra; use trace
                                      notation only

  Synthesis is non-redundant          One established theory matches all
                                      ontology, formal, and empirical
                                      requirements -\> Adopt that theory
                                      and reject the synthesis
  -----------------------------------------------------------------------

## Dependency Graph

Ontology -\> state and participant identity -\> coupling -\> opportunity
-\> perturbation and uptake -\> interaction episode -\> interpretation
and policy -\> behavior -\> evidence and measurement -\> comparison and
prediction.

## Interaction Comparison Protocol

1\. Declare the focal boundary, timescale, participants, roles, and
state abstraction.

2\. Identify coupling mechanisms and construct a counterfactual
decoupled baseline.

3\. Enumerate observable events, hidden state assumptions, and
uncertainty.

4\. Test directed influence and reciprocal or recurrent closure.

5\. Identify protocol, semantic, causal, outcome, opportunity, and
behavioral invariants separately.

6\. Compare traces only after aligning state abstraction and event
granularity.

7\. Control for common causes, shared external drivers, latency, and
measurement artifacts.

8\. State whether the claim concerns token identity, type equivalence,
refinement, or similarity.

9\. Report failures, deadlocks, timeouts, and recovery as part of the
interaction rather than deleting them.

10\. Declare the conditions under which the comparison would be
falsified.

# 18. References

Bateson, G. (1972). Steps to an Ecology of Mind. Chandler.

Card, S. K., Moran, T. P., & Newell, A. (1983). The Psychology of
Human-Computer Interaction. Lawrence Erlbaum.

Clark, H. H. (1996). Using Language. Cambridge University Press.

Dourish, P. (2001). Where the Action Is: The Foundations of Embodied
Interaction. MIT Press.

Engestrom, Y. (1987). Learning by Expanding: An Activity-Theoretical
Approach to Developmental Research. Orienta-Konsultit.

Ferrando, A., Winikoff, M., Cranefield, S., Dignum, F., & Mascardi, V.
(2019). On the enactability of agent interaction protocols: Toward a
unified approach. AAMAS.

FIPA. (2002). FIPA Agent Communication Language Specifications and
Interaction Protocol Specifications.

Gibson, J. J. (1979). The Ecological Approach to Visual Perception.
Houghton Mifflin.

Hoare, C. A. R. (1985). Communicating Sequential Processes. Prentice
Hall.

Hutchins, E. (1995). Cognition in the Wild. MIT Press.

Kendon, A. (1990). Conducting Interaction: Patterns of Behavior in
Focused Encounters. Cambridge University Press.

Luhmann, N. (1995). Social Systems. Stanford University Press.

Maturana, H. R. (2002). Autopoiesis, structural coupling and cognition.
Cybernetics & Human Knowing, 9(3-4), 5-34.

Mead, G. H. (1934). Mind, Self, and Society. University of Chicago
Press.

Milner, R. (1980). A Calculus of Communicating Systems. Springer.

Milner, R. (1989). Communication and Concurrency. Prentice Hall.

Norman, D. A. (2013). The Design of Everyday Things, revised and
expanded edition. Basic Books.

Oulasvirta, A., Jokinen, J. P. P., & Howes, A. (2022). Computational
rationality as a theory of interaction. Proceedings of CHI 2022.

Ramadge, P. J., & Wonham, W. M. (1987). Supervisory control of a class
of discrete event processes. SIAM Journal on Control and Optimization,
25(1), 206-230.

Shannon, C. E. (1948). A mathematical theory of communication. Bell
System Technical Journal, 27, 379-423, 623-656.

Suchman, L. A. (1987). Plans and Situated Actions. Cambridge University
Press.

Wegner, P. (1997). Why interaction is more powerful than algorithms.
Communications of the ACM, 40(5), 80-91.

Wiener, N. (1948). Cybernetics: Or Control and Communication in the
Animal and the Machine. MIT Press.

Winograd, T., & Flores, F. (1986). Understanding Computers and
Cognition. Ablex.
