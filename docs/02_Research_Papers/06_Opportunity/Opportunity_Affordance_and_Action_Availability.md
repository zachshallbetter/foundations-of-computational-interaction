**Opportunity, Affordance, and Action Availability**

*Toward a Formal Account of What an Agent Can Perceive, Believe, and Do*

Cross-disciplinary research paper

# Abstract

Action availability is represented differently across ecological
psychology, human--computer interaction, decision theory, control,
reinforcement learning, planning, formal methods, and computer security.
These traditions distinguish real possibilities for action, actions
enabled in a state, authorized operations, reachable outcomes,
perceptually indicated operations, believed possibilities, selected
acts, attempted executions, successful transitions, and recovery. No
single established construct captures all of these dimensions without
changing its inherited meaning. Ecological affordance is relational but
does not by itself encode authority, formal state enablement, interface
exposure, explicit signaling, belief, execution success, or
reversibility. Action-space and choice-set formalisms precisely encode
alternatives but usually abstract away their epistemic presentation.
Authorization models separate authority from technical capability, while
transition systems and control theory distinguish enabled actions and
reachable states. HCI separates physical or functional possibilities
from signifiers, discoverability, and learned interpretation.

This paper concludes that a cross-disciplinary opportunity model is
justified, but opportunity is not a new primitive. It is an analytical
coordination role over established typed relations. The proposed model
represents each candidate action by system-relative feasibility,
permission, state enablement, reachability, projection exposure,
signaling, agent-relative belief, expected consequences, selection,
execution, success, reversibility, and uncertainty. The framework is
formalizable as linked predicates over a transition system,
authorization relation, projection mapping, observation model, and agent
belief state. It provides comparison rules for semantically equivalent
projections without implying behavioral equivalence. Six hypotheses are
operationalized, and reusable vocabulary, matrices, contracts,
comparison protocols, and evidence maps are supplied.

# 1. Problem Statement

Computational environments frequently support actions that are hidden,
display controls that are currently disabled, imply operations they
cannot perform, or expose equivalent operations differently across
modalities. Treating all such cases as "affordances" obscures important
distinctions. A technically valid operation may be prohibited by policy.
A permitted operation may not be enabled in the current state. An
enabled operation may be absent from the current projection. An exposed
operation may not be signaled. A signal may be perceived but not
interpreted as actionable. An attempted operation may fail, and a
successful transition may still fail to achieve the agent's intended
outcome.

The explanatory problem is therefore not merely to enumerate actions. It
is to state which action relation is being claimed, relative to which
system state, authority, projection, agent, task, and time. The central
question is how action opportunities should be represented, measured,
and compared across projections while preserving distinctions among
system-relative availability, epistemic access, belief, choice,
execution, outcome, and recovery.

# 2. Literature Review Method

The review used a concept-centered comparative method. Primary and
foundational sources were prioritized where available: Gibson's
ecological account of affordance; Norman's distinction between
affordances and signifiers; Gaver's technology-affordance analysis;
formal transition-system notions of enabled action and reachability;
Markov decision-process and options formalisms; control-theoretic
controllability; planning operators and preconditions; access-control
models; and empirical HCI work on discoverability, feedback, and error
recovery. Secondary sources were used only to locate terminology or
identify disputes.

The analysis proceeded in four stages. First, each tradition's
explanandum and formal commitments were identified. Second, candidate
opportunity distinctions were tested for logical independence using
counterexamples. Third, the distinctions were mapped to existing
terminology to avoid unnecessary invention. Fourth, the resulting model
was evaluated against six falsification conditions: theoretical
redundancy, measurement failure, lack of predictive gain, disappearance
of projection effects under controls, excessive context dependence, and
existence of a single complete formalism.

# 3. Affordance Traditions

Gibson introduced affordance as what an environment offers an animal,
emphasizing complementarity between animal and environment rather than a
property located exclusively in either. On this account, an affordance
can exist whether or not it is currently noticed, because it is grounded
in the relation between environmental structure and the actor's
effectivities. Perception concerns information specifying that relation.
Successful action is not required for the affordance to exist, although
empirical affordance research often evaluates perceptual calibration by
comparing judgments with action limits.

HCI adopted and transformed the term. Norman initially used perceived
affordance to emphasize what users believe can be done, then later
separated affordances from signifiers: the action possibility is one
matter; the perceptible indication of where or how to act is another.
Gaver distinguished perceptible, hidden, false, and correct affordances,
revealing a two-dimensional space between actual action possibility and
perceptual information. Hartson further divided physical, cognitive,
sensory, and functional affordances, but this expands "affordance"
toward a taxonomy of interaction support rather than preserving Gibson's
narrower ecological relation.

The literature therefore contains several non-equivalent affordance
traditions:

• Ecological affordance: a relation between actor effectivities and
environmental properties that makes an action possible.\
• Perceived affordance: an agent's perception or belief that an action
is possible.\
• Signifier: perceivable evidence indicating an operation, location, or
manner of action.\
• Technological or functional affordance: a designed system's support
for a class of action or use.\
• Social affordance: possibilities for social action structured by other
agents, conventions, or institutions.\
• Learned or cultural affordance: action possibilities whose detection
or uptake depends on acquired practices.

These uses should not be collapsed. Ecological affordance is strongest
for relational physical possibility; signifier is strongest for
perceptual indication; perceived affordance and learned affordance
address agent-relative interpretation; functional affordance often
approximates system capability. None alone supplies authority, formal
reachability, execution success, or recovery.

# 4. Action-Set and Choice-Set Traditions

Decision theory and economics represent alternatives through feasible
sets or choice sets. These specify options available for selection under
constraints. Game theory uses action sets or strategy sets, often
indexed by player and information state. Reinforcement learning uses an
action set A, commonly with a state-dependent subset A(s), and a policy
mapping states or beliefs to action distributions. The options framework
adds temporally extended actions with initiation sets, internal
policies, and termination conditions. Planning formalisms represent
operators with preconditions and effects. Formal transition systems
define an action as enabled in a state when a corresponding transition
exists. Control theory distinguishes admissible controls and reachable
states. Robotics often uses affordance models to prune actions by
predicting whether an action is feasible or useful in a state.

These formalisms provide exact answers to different questions. A
state-dependent action set identifies primitive alternatives available
to a model. A choice set describes alternatives offered to a
decision-maker. An enabled action is one whose preconditions hold.
Reachability concerns whether a target state can be attained by a path,
not whether a single action is currently executable. An option is a
temporally extended policy, not simply any opportunity. A controllable
input is an admissible intervention under a system model. A planning
operator is a symbolic transition schema. These concepts are compatible
but not equivalent.

# 5. Capability, Permission, and Reachability

Capability, permission, and reachability must remain separate.

Capability has two established senses. In ordinary agent modeling, it
denotes an agent's ability or resources to perform an action. In
capability-based security, it is an unforgeable token of authority
naming an object and associated rights. The latter is not equivalent to
physical or computational ability. To avoid ambiguity, the present
framework uses effective capability for the conjunction of required
agent and system capacities, and authority capability only when
referring to security tokens.

Permission is normative or institutional. Access-control systems define
whether a subject is authorized to perform an operation on an object
under a policy, role, attributes, and context. A system may be
technically able to execute a prohibited action; prohibition does not
make the transition physically or computationally impossible.

State enablement is local. An action is enabled when its preconditions
hold in the current state. Reachability is path-relative. An outcome is
reachable if there exists an admissible sequence from the current state
to that outcome. An action can be permitted yet disabled, enabled yet
lead nowhere useful, or currently disabled while its outcome remains
reachable through an alternative sequence.

This yields four system-relative relations:

1\. Domain-valid: the operation belongs to the declared domain model.\
2. Effective-capable: the agent-system coupling has the capacities
required for execution.\
3. Permitted: policy authorizes the operation.\
4. Enabled: the operation's current-state preconditions hold.

Reachability is then defined over sequences of enabled and permitted
transitions, with any safety, resource, and temporal constraints stated
explicitly.

# 6. Discoverability, Signaling, and Belief

Exposure, signaling, discoverability, and belief describe different
epistemic relations.

Exposure means that the current projection provides an executable access
path to an operation. A menu item, command syntax, API endpoint,
gesture, or conversational intent can expose an operation. Exposure does
not require conspicuous indication: a keyboard shortcut may be exposed
but hidden from a novice.

Signaling means that perceivable structure indicates an operation, its
locus, or its expected manner of use. Labels, shape, contrast, prompts,
examples, disabled states, documentation, and feedback can signal. A
signal can be false when it suggests an unavailable operation.

Discoverability is an empirical relation among projection, agent, task,
context, and search process. It concerns whether and how an agent can
find an operation or relation without already knowing the access path.
Discoverability should be measured through controlled search,
recognition, recall, or guided exploration---not inferred from
visibility alone.

Believed action is an action the agent represents as available with some
confidence and expected consequence. Belief is latent. It requires
elicitation, prediction, confidence reports, recognition tests, or
model-based inference with acknowledged uncertainty. Selection is
observable choice among represented alternatives. Execution is an
observable attempt. Success is a system-relative transition criterion or
task-relative outcome criterion; these must be distinguished.

# 7. Candidate Typed Opportunity Model

The evidence supports a typed opportunity model, not opportunity as a
primitive natural property. "Opportunity" is retained as an umbrella
analytical role because no single inherited construct coordinates domain
validity, capability, authority, state enablement, reachability,
exposure, signaling, belief, outcome expectation, and recovery without
semantic overextension.

Let a computational interaction model be:

M = ⟨S, A, T, C, P, Π, Σ, O, B, G, R⟩

where S is the set of system states; A is the action vocabulary; T ⊆ S ×
A × S is the transition relation or probabilistic kernel; C(a, x, s) is
effective capability for agent x; P(a, x, s) is permission; Π maps
system state and action structure into a projection; Σ is the signaling
relation realized by the projection; O is the observation model
available to the agent; Bx is the agent's belief distribution over
states, actions, and consequences; G is the task or goal specification;
and R describes recovery and reversibility relations.

For agent x at time t in state s under projection π, the opportunity
profile is not one set but a family of typed sets and relations:

D(s): domain-valid actions.\
Cₓ(s): effectively capable actions.\
Pₓ(s): permitted actions.\
E(s): enabled actions.\
Xπ(s): exposed actions.\
Sπ,x(s): signaled actions detectable by x.\
Bₓ(s): actions believed available by x, with confidence.\
Kₓ(s,a): expected consequence distribution.\
L(s,G): reachable outcome set under admissible sequences.\
V(s,a): reversibility or recoverability relation.\
U: uncertainty attached to system state, observer state, and inferred
variables.

Selected, executed, and successful are event predicates over a trace
rather than standing opportunity sets. This avoids treating behavior as
part of availability.

The currently executable authorized set is:\
A_exec(x,s) = D(s) ∩ Cₓ(s) ∩ Pₓ(s) ∩ E(s).

The projection-accessible set is:\
A_access(x,s,π) = A_exec(x,s) ∩ Xπ(s).

The signaled executable set is:\
A_signal(x,s,π) = A_access(x,s,π) ∩ Sπ,x(s).

The believed executable set is not assumed to be a subset of A_exec:\
A_belief(x,s,π) = Bₓ(s).

False positive belief consists of Bₓ(s) \\ A_exec(x,s); hidden
opportunity consists of A_exec(x,s) \\ Bₓ(s). This asymmetry is central
to conversational overclaim, expert knowledge, and misleading controls.

# 8. Formal Representations

No single formalism covers every distinction without extension.

Labeled transition systems are best for state, enabled action, trace,
and reachability. Planning domains add preconditions, effects, and
goals. MDPs and POMDPs add uncertainty, value, policies, and belief
states. Options add temporally extended action. Control models formalize
admissible inputs, dynamics, and controllability. Access-control
matrices and policy languages formalize authorization. Observation
models formalize partial access to state. HCI and ecological models
contribute signaling, perception, effectivities, and learned
interpretation. Reversibility requires inverse transitions, compensating
actions, checkpoints, or probabilistic recoverability.

The recommended architecture is layered but linked:

Domain and transition layer: D, S, A, T.\
Capability and authority layer: C, P.\
Projection layer: Π, exposure X, signaling Σ.\
Epistemic layer: O, belief B, expected consequences K.\
Policy layer: goals G and action-selection policy μ.\
Trace layer: selection, execution, transition, outcome, feedback.\
Recovery layer: V and repair paths.

The layers should not be treated as a one-way causal chain. Projection
can alter actual feasibility when it gates operations, not merely
epistemic access. Execution changes state and therefore subsequent
opportunity. Feedback changes beliefs, skill, and policies. Authority
can change dynamically. Social action can alter policy or projection.
The model is therefore a coupled state-transition system with feedback.

# 9. Empirical Measurement

System-relative variables can often be observed or computed directly:
domain membership, permission decision, precondition satisfaction,
transition occurrence, reachable states under a declared model, exposure
path, and recorded execution. Signaling strength, belief, expected
consequence, confidence, and perceived reversibility require empirical
measurement or inference.

Recommended measures include:

Action discovery: proportion finding an operation; time to first correct
identification; search path length; number of representation regions
inspected; unaided versus prompted discovery.

Awareness and belief: recognition of available actions; free recall;
prediction of whether an operation will execute; confidence-calibrated
availability judgments; precision and recall of the believed action set
against A_exec.

Selection: conditional probability of selection given belief and
exposure; choice latency; switching rate; strategy entropy.

Unavailable-action attempts: frequency and type of actions executed
outside E, P, or D; whether the mismatch was signaled; recovery after
rejection.

Recovery: time to identify corrective action; repair success; number of
irreversible or escalating transitions; use of undo, backtracking, help,
or alternative routes.

Transfer: change in believed action precision, discovery time, and
strategy use across projections or tasks, controlling for exposure
history.

Reversibility judgment: predicted recoverability, confidence, and
calibration against the actual recovery graph.

Direct observations should be separated from latent interpretations. A
pause is not direct evidence of hesitation; it is a duration requiring
alternative explanations. An unselected action is not evidence of
unawareness. Task completion is not evidence of equal opportunity.
Belief claims require either explicit reports or a validated
latent-variable model.

# 10. Comparative Cases

Case 1 --- Hidden but feasible action. A system supports an API
operation that is permitted, enabled, and executable, while the GUI
omits it. The action is in A_exec but not X_GUI. For an expert using
documentation it may be signaled and believed through another
projection; for a GUI-only novice it is hidden. Projection changes
epistemic and access structure, not the underlying transition relation.

Case 2 --- Visible but unavailable action. A disabled control is exposed
as a representational object and may signal a future or conditional
operation, but it is not currently executable. It is not a current
action opportunity under A_exec. It is a signifier of a domain-valid
action whose enablement condition fails. This can improve learnability
if the condition is interpretable, or create false belief if the reason
is opaque.

Case 3 --- Conversational overclaim. A dialogue system states that it
can delete an account although no authorized backend operation exists.
The action is signaled and may enter the user's believed set but is
absent from D, P, E, or X at the execution layer. This is a
false-positive opportunity claim. The model predicts elevated failed
attempts, trust calibration errors, and inappropriate planning.

Case 4 --- Accessibility substitution. A single operation is exposed
visually, auditorily, and tactually. Domain validity, permission, and
transition semantics may remain invariant, while signaling latency,
sequence, spatial comparability, memory demand, error detectability, and
recovery differ. Equal task completion does not establish equivalent
discovery or effort. Modality-specific observer assumptions must be
declared.

Case 5 --- Expert and novice. The projection exposes the same executable
operations. The system-relative sets D, P, E, and X are equal. Signaling
detectability and believed action sets differ because conventions,
vocabulary, and procedural knowledge differ. Training can change B and
policy μ without changing T or X.

Case 6 --- Policy and authorization. A data-export operation is
semantically valid, technically executable, and visible, but the user's
role is denied. Capability and exposure are present; permission is
absent. Attempts may be blocked before transition. The correct
explanation is authorization, not lack of affordance or reachability.

# 11. Operationalized Hypotheses

## H1 --- Signaling effect

Exposure: manipulation of signifier presence, specificity, or state
indication while executable action sets remain fixed. Outcome: unaided
discovery rate, discovery time, and conditional selection. Controls:
layout, motor distance, latency, task value, familiarity, operation
order. Manipulation check: recognition of the cue and its intended
referent. Exclusions: prior knowledge of hidden shortcut where it
defeats manipulation; inaccessible modality. Analysis: multilevel
logistic model for discovery and survival or accelerated-failure-time
model for latency. Falsification: no practically meaningful signaling
effect with confidence interval excluding the preregistered minimum.

## H2 --- Belief mediation

Exposure: projection exposure and signaling condition. Mediator:
preregistered availability-belief score measured before selection.
Outcome: selection and correct execution. Controls: task value, skill,
motor cost, confidence response bias, prior exposure. Manipulation
check: exposure and signal detection. Exclusions: belief measured after
outcome feedback. Analysis: causal mediation with measurement-error
model and temporal ordering. Falsification: exposure affects selection
without a reproducible indirect effect through measured belief, or
belief lacks predictive validity.

## H3 --- Opportunity inequivalence

Exposure: two semantically equivalent projections with identical
operation semantics and task outcomes. Outcome: typed opportunity
distance across exposure, signaling, belief precision/recall, path cost,
recovery visibility, and auditability. Controls: state, authority,
device performance, content, task, training. Manipulation check:
semantic and reachable-outcome equivalence. Exclusions: projections that
change backend permissions or transitions unintentionally. Analysis:
equivalence/non-equivalence tests by dimension. Falsification: all
preregistered dimensions meet equivalence bounds.

## H4 --- Training effect

Exposure: structured training versus control under a fixed projection.
Outcomes: believed-action precision/recall, discovery time, strategy
diversity, and transfer. Moderator: prior expertise. Controls:
repetition, feedback, task difficulty, motivation. Manipulation check:
knowledge test without execution cues. Exclusions: system or projection
changes during study. Analysis: mixed-effects longitudinal model.
Falsification: training produces no durable or transferable change
beyond repetition.

## H5 --- Recovery effect

Exposure: recovery actions exposed/signaled versus hidden or ambiguous,
crossed with actual reversibility. Outcomes: error detection, repair
initiation, successful recovery, escalation, perceived safety.
Mediators: believed recovery set and perceived reversibility. Controls:
error severity, time pressure, prior error experience, feedback latency.
Manipulation check: recognition of recovery cue. Exclusions: failures
with external irreversible consequences not represented in the model.
Analysis: multilevel event-history and mediation models. Falsification:
recovery support does not alter repair behavior or measured belief under
adequate power.

## H6 --- Opportunity model gain

Exposure: observational or experimental dataset spanning projections,
states, permissions, and expertise. Outcome: held-out prediction of
discovery, selection, execution failure, success, and recovery.
Predictors: baseline state, task, projection label, history, and action
logs versus baseline plus typed opportunity variables. Controls:
leakage, model capacity, participant clustering, temporal drift.
Manipulation check: reliability of each typed variable. Exclusions:
variables derived from future outcomes. Analysis: nested out-of-sample
comparison using log loss, calibration, and preregistered minimum gain.
Falsification: no robust incremental predictive or explanatory gain.

# 12. Falsification Tests

The framework should be narrowed or rejected under the following
evidence.

1\. Affordance sufficiency. If a stable, operational
ecological-affordance formalism can encode authority, state enablement,
exposure, signaling, agent belief, expected consequence, execution
success, and reversibility without redefining affordance beyond
recognition, the umbrella model is redundant. Current evidence does not
show this.

2\. Action-space sufficiency. If state-dependent action sets plus
observation models and policies explain projection and belief effects
without loss, the opportunity vocabulary can be reduced to those
components. This remains a serious alternative. The proposed model
therefore claims organizational and comparative value, not a new causal
substance.

3\. Measurement failure. If believed and signaled sets cannot be
estimated with acceptable reliability or predictive validity, they
should not be treated as stable measured constructs. They may remain
trial-specific latent variables.

4\. No incremental gain. H6 is falsified if typed variables do not
improve out-of-sample prediction or explanation over state, task,
projection label, prior experience, and action logs.

5\. Projection null. H1 and H3 are weakened if signaling and exposure
manipulations have no effect after familiarity, task, motor cost,
latency, and implementation quality are controlled.

6\. Context non-comparability. The comparison protocol fails if
opportunity differences cannot be stated under common target, task,
observer, and tolerance conditions. In that case comparison must remain
local rather than general.

7\. Formal unification. If one established formalism already supports
every required relation with standard terminology and empirical
mappings, the cross-disciplinary synthesis should adopt that formalism
rather than retain "opportunity."

# 13. Threats to Validity

Conceptual breadth is the principal threat. Terms such as affordance,
capability, option, and information have discipline-specific meanings,
and normalization can erase productive differences. The paper therefore
retains typed definitions rather than declaring terminological identity.

Formal models simplify human action. Belief sets, goals, and expected
consequences may be distributed, unstable, socially negotiated, or
non-propositional. Treating them as variables is an analytical
commitment, not a claim that cognition literally stores enumerated sets.

Reachability and reversibility depend on model completeness. Hidden
external state, asynchronous effects, institutional consequences, and
irreversible social outcomes can make computed recovery misleading.

Empirical identification is difficult. Exposure, signaling, motor cost,
familiarity, and implementation quality often covary. Mediation analysis
of belief is vulnerable to measurement error and temporal ordering.
Demographic categories should not substitute for measured language,
experience, perceptual access, training, or situated constraints.

The framework is strongest for declared computational tasks with
identifiable operations and state transitions. It is weaker for
open-ended creative, social, or interpretive activities in which action
vocabularies and goals emerge during activity.

# 14. Implications for Interaction Research

The model supplies the missing bridge between representation and
behavior without claiming that representation determines action.
Projection contributes exposure and signals; observation and prior
experience support interpretation; interpretation updates beliefs and
expected consequences; policy selects among believed alternatives;
execution is filtered by capability, permission, and enablement;
outcomes and feedback alter later state, belief, and skill.

Opportunity therefore functions primarily as a structured descriptive
and mediating construct. It describes the typed relations that condition
action selection. Some components can mediate projection
effects---particularly belief and expected consequences---while others
moderate them, including permission, capability, task, and expertise.
The umbrella term itself is not a causal variable unless operationalized
through its components.

For cross-projection comparison, semantic equivalence should be
established independently. Two projections can preserve the same
operation semantics and reachable task outcomes while differing in
exposure, signaling, belief calibration, recovery visibility, sequence
cost, and auditability. Such projections are semantically equivalent
under one contract but opportunity-inequivalent under another.

# 15. Conclusion

The evidence supports determination 3: a cross-disciplinary opportunity
model is justified, but opportunity is not a new primitive.

Existing traditions already supply the constituent concepts. Ecological
psychology supplies relational action possibility; HCI supplies
signifiers, discoverability, and perceived availability; formal methods
and planning supply enabled actions and reachability; control supplies
admissible interventions and controllability; decision theory and
reinforcement learning supply action sets, beliefs, policies, options,
and expected consequences; access control supplies permission and
authority; error-recovery research supplies reversibility and repair.
None is individually complete for comparing what computational
projections make feasible, accessible, apparent, believed, executable,
and recoverable.

The warranted contribution is therefore a typed taxonomy and integration
contract. Opportunity should denote the coordinated profile of
established relations under declared system, projection, agent, task,
and temporal conditions. It should not replace affordance, action set,
permission, reachability, signifier, belief, policy, or reversibility.
Its scientific value depends on measurable components, explicit
uncertainty, comparative prediction, and demonstrated incremental
explanatory gain.

# 16. Reusable Artifacts

## A. Canonical Vocabulary

  -----------------------------------------------------------------------
  Term                    Canonical definition    Boundary
  ----------------------- ----------------------- -----------------------
  Affordance              A relation between      Agent--environment
                          environmental           relative; not identical
                          properties and an       to signal, belief,
                          agent's effectivities   permission, or success.
                          that makes a class of   
                          action possible;        
                          perception is not       
                          constitutive in the     
                          Gibsonian sense.        

  Action possibility      A minimally specified   Use only when the
                          relation under which an relevant
                          action can occur given  modality---physical,
                          relevant capacities and computational,
                          conditions.             institutional---is
                                                  declared.

  Capability              The effective capacity  Do not confuse with
                          or resources required   permission or with a
                          for an agent-system     security capability
                          coupling to execute an  token.
                          action.                 

  Permission              Authorization under a   Normative; an
                          policy, role, rule, or  impermissible action
                          institutional condition may remain technically
                          for a subject to        possible.
                          perform an operation.   

  Reachability            Existence of an         Path-relative,
                          admissible sequence of  constraint-relative,
                          transitions from a      and model-relative.
                          current state to a      
                          target state or set.    

  Exposure                Provision by the        An exposed operation
                          current projection of   may be hidden, poorly
                          an executable access    signaled, or unknown.
                          path to an operation.   

  Signaling               Perceivable indication  May be true,
                          of an operation, its    incomplete, ambiguous,
                          locus, manner,          or false.
                          condition, or           
                          consequence.            

  Discoverability         Empirical probability   Task-, observer-,
                          and process by which an context-, and
                          agent can find an       time-relative.
                          operation or relation   
                          under declared          
                          conditions.             

  Believed action         An action represented   Latent; measured by
                          by an agent as          elicitation or
                          available, with an      validated inference.
                          associated confidence   
                          and expected            
                          consequence.            

  Opportunity             An umbrella analytical  Not a new primitive and
                          profile coordinating    not synonymous with
                          typed                   affordance or action
                          action-availability     set.
                          relations under         
                          declared system, agent, 
                          projection, task, and   
                          time conditions.        

  Reversibility           The degree to which     May be exact,
                          consequences of an      compensatory, partial,
                          action can be undone,   probabilistic, or
                          compensated, repaired,  unavailable.
                          or safely explored      
                          under declared costs    
                          and constraints.        
  -----------------------------------------------------------------------

## B. Opportunity Matrix

  ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  Action            Domain-valid   Capable   Permitted   Enabled          Reachable    Exposed    Signaled   Believed           Selected       Executed    Successful   Reversible
                                                                          outcome                                                                                       
  ----------------- -------------- --------- ----------- ---------------- ------------ ---------- ---------- ------------------ -------------- ----------- ------------ ------------
  GUI-hidden API    Yes            Yes       Yes         Yes              Yes          No in GUI  No in GUI  Expert-dependent   Context        Context     Context      Usually
  export                                                                                                                                                                

  Disabled submit   Yes            Yes       Yes         No               Possibly     Visible    Yes        Often              No/attempted   Blocked     No           N/A
                                                                          later        only                                                                transition   

  Unsupported       No/absent      No        No          No               No           Apparent   Yes        Possible           Possible       Attempted   No           N/A
  conversational                                                                                                                                                        
  delete                                                                                                                                                                

  Role-prohibited   Yes            Yes       No          Policy-blocked   No           May be     May be     Possible           Possible       Blocked     No           N/A
  export                                                                  admissible                                                                                    
                                                                          path                                                                                          
  ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## C. Opportunity Contract

Projection contract

Identity\
• Declared target system, task, agent class, state scope, and comparison
time.\
• Projection identifier and modality.

System-relative action structure\
• Domain-valid action vocabulary and transition semantics.\
• Effective capability requirements.\
• Permission and authority rules.\
• Current enablement predicates.\
• Reachable outcomes and path constraints.\
• Failure modes and irreversible effects.

Projection-relative structure\
• Exposed operations and access paths.\
• Signifiers, labels, conventions, and feedback.\
• Hidden prerequisites and external documentation.\
• Ordering, composition, audit, and recovery support.

Observer assumptions\
• Sensory and motor access.\
• Language, conventions, training, and prior exposure.\
• Available assistive technologies.\
• Goal and risk context.

Epistemic variables\
• Believed action distribution.\
• Expected consequence distribution.\
• Confidence and uncertainty.\
• Perceived reversibility and cost.

Validity\
• Intended use.\
• Metrics and tolerances.\
• Known omissions.\
• Conditions under which comparisons fail.

## D. Opportunity Comparison Protocol

Representation comparison protocol

1\. Declare the invariant target: operation semantics, task, initial
state distribution, authority policy, and success criterion.\
2. Verify system equivalence: confirm whether the projections share the
same domain-valid, permitted, enabled, and reachable structures. Record
any actual gating differences.\
3. Enumerate projection exposure: identify every operation-access path,
required sequence, modality, and prerequisite.\
4. Code signaling: record perceptible cues, labels, conventions, state
indications, feedback, and recovery cues.\
5. Specify observers: measure relevant experience, language, sensory
access, motor access, and training rather than using demographic
proxies.\
6. Measure belief: elicit availability judgments, expected consequences,
confidence, and perceived reversibility before execution where
possible.\
7. Observe behavior: discovery, selection, execution, success, error,
switching, and recovery.\
8. Separate claims: classify every result as direct observation, derived
system feature, or latent interpretation.\
9. Compare typed relations: use set precision/recall, discovery curves,
path cost, calibrated confidence, outcome distributions, and recovery
metrics.\
10. Test alternatives: control motor cost, latency, familiarity,
content, task, implementation quality, and learning.\
11. State scope: declare contexts and tolerances under which opportunity
equivalence or inequivalence is claimed.

## E. Evidence Map

  ----------------------------------------------------------------------------------------------------------------------------
  Inference     Direct observation                   Derived feature           Latent           Alternatives    Falsifying
                                                                               interpretation                   evidence
  ------------- ------------------------------------ ------------------------- ---------------- --------------- --------------
  Action was    Executable path present and testable Projection-to-operation   None required    Hidden          Independent
  exposed                                            mapping                                    prerequisite;   agents cannot
                                                                                                inaccessible    execute via
                                                                                                modality        declared path

  Action was    Cue physically/linguistically        Cue-operation coding      Cue interpreted  Cue decorative; Removing cue
  signaled      present                                                        as indication    ambiguous       does not
                                                                                                convention      change
                                                                                                                detection and
                                                                                                                agents deny
                                                                                                                association

  Action was    Availability judgment, prediction,   Belief-set estimate       Internal         Demand effects; Judgments lack
  believed      confidence                                                     availability     guessing;       reliability or
                                                                               representation   memory          predictive
                                                                                                                validity

  Agent         Longer latency or pause              Duration relative to      Conflict or      Reading, motor  Latency
  hesitated                                          baseline                  uncertainty      delay,          unchanged
                                                                                                distraction     under
                                                                                                                uncertainty
                                                                                                                manipulation

  Action was    Undo/repair path succeeds            Recovery graph and cost   Perceived safety Compensation    Recovery fails
  reversible                                                                                    incomplete;     or material
                                                                                                external        effects
                                                                                                effects         persist

  Projection    Differences in                       Typed-set comparison      Mediated access  Motor cost,     Effect
  changed       exposure/signaling/belief/recovery                             effect           familiarity,    vanishes under
  opportunity                                                                                   latency         controls
  ----------------------------------------------------------------------------------------------------------------------------

# 17. References

Gibson, J. J. (1979). The Ecological Approach to Visual Perception.
Houghton Mifflin.

Norman, D. A. (1988/2013). The Design of Everyday Things. Basic Books.

Gaver, W. W. (1991). Technology affordances. Proceedings of CHI '91,
79--84.

Hartson, H. R. (2003). Cognitive, physical, sensory, and functional
affordances in interaction design. Behaviour & Information Technology,
22(5), 315--338.

Stoffregen, T. A. (2003). Affordances as properties of the
animal--environment system. Ecological Psychology, 15(2), 115--134.

Chemero, A. (2003). An outline of a theory of affordances. Ecological
Psychology, 15(2), 181--195.

Turvey, M. T. (1992). Affordances and prospective control: An outline of
the ontology. Ecological Psychology, 4(3), 173--187.

Greeno, J. G. (1994). Gibson's affordances. Psychological Review,
101(2), 336--342.

Card, S. K., Moran, T. P., & Newell, A. (1983). The Psychology of
Human-Computer Interaction. Erlbaum.

Suchman, L. A. (1987). Plans and Situated Actions. Cambridge University
Press.

Hutchins, E. (1995). Cognition in the Wild. MIT Press.

Sutton, R. S., Precup, D., & Singh, S. (1999). Between MDPs and
semi-MDPs: A framework for temporal abstraction in reinforcement
learning. Artificial Intelligence, 112, 181--211.

Sutton, R. S., & Barto, A. G. (2018). Reinforcement Learning: An
Introduction (2nd ed.). MIT Press.

Khetarpal, K., Ahmed, Z., Comanici, G., Abel, D., & Precup, D. (2020).
What can I do here? A theory of affordances in reinforcement learning.
arXiv:2006.15085.

Kaelbling, L. P., Littman, M. L., & Cassandra, A. R. (1998). Planning
and acting in partially observable stochastic domains. Artificial
Intelligence, 101, 99--134.

Fikes, R. E., & Nilsson, N. J. (1971). STRIPS: A new approach to the
application of theorem proving to problem solving. Artificial
Intelligence, 2, 189--208.

Baier, C., & Katoen, J.-P. (2008). Principles of Model Checking. MIT
Press.

Lynch, N. A. (1996). Distributed Algorithms. Morgan Kaufmann.

Kalman, R. E. (1960). Contributions to the theory of optimal control.
Boletín de la Sociedad Matemática Mexicana, 5, 102--119.

Ramadge, P. J., & Wonham, W. M. (1987). Supervisory control of a class
of discrete event processes. SIAM Journal on Control and Optimization,
25(1), 206--230.

Sandhu, R. S., Coyne, E. J., Feinstein, H. L., & Youman, C. E. (1996).
Role-based access control models. IEEE Computer, 29(2), 38--47.

Ferraiolo, D. F., Kuhn, D. R., & Chandramouli, R. (2003). Role-Based
Access Control. Artech House.

Bell, D. E., & LaPadula, L. J. (1973). Secure Computer Systems:
Mathematical Foundations. MITRE.

Shneiderman, B. (1983). Direct manipulation: A step beyond programming
languages. IEEE Computer, 16(8), 57--69.

Reason, J. (1990). Human Error. Cambridge University Press.

Norman, D. A. (1986). Cognitive engineering. In User Centered System
Design. Erlbaum.

Clark, A., & Chalmers, D. (1998). The extended mind. Analysis, 58(1),
7--19.

Kirsh, D. (2010). Thinking with external representations. AI & Society,
25, 441--454.

Ware, C. (2012). Information Visualization: Perception for Design.
Morgan Kaufmann.

ISO 9241-11:2018. Ergonomics of human-system interaction---Usability:
Definitions and concepts.
