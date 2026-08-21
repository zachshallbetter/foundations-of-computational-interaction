**Behavior**

*Toward a Scientific Theory of Computational Behavior*

Cross-disciplinary foundational research paper

# Abstract

Behavior is indispensable across psychology, ethology, cognitive
science, economics, reinforcement learning, cybernetics, robotics,
systems theory, human-computer interaction, and philosophy of action,
yet the term refers variously to movement, response, output, action,
policy, performance, conduct, and organism-environment coordination.
This paper asks what constitutes behavior and how it should be
represented scientifically without dependence on a particular interface
or technology.

The review finds no single accepted definition, but it identifies a
stable analytical core. Behavior is best treated as a bounded,
temporally extended trajectory of observable or instrumentally
recoverable changes attributable to a system in relation to its
environment. Behavior is not identical to state, because it concerns
change or persistence across time; not identical to action, because
action normally adds agency, organization, or purposive interpretation;
not identical to interaction, because interaction requires reciprocal
constraint between distinguishable systems; and not identical to a
policy, strategy, intention, or goal, which are explanatory or latent
structures rather than observations.

Existing theories are sufficient for most component problems but lack a
shared evidence-preserving representation spanning human, animal, and
artificial systems. The paper therefore proposes a typed trace framework
rather than a new behavioral primitive. It separates raw records,
detected events, attributed behavioral events, episodes, patterns,
actions, strategies, and latent explanations. It supplies a behavior
ontology, behavioral grammar, trace model, evidence hierarchy, taxonomy,
annotation contract, and falsification criteria. Its central claim is
that scientifically useful behavioral representation requires explicit
system boundaries, observation functions, temporal segmentation rules,
attribution criteria, context, uncertainty, and a prohibition against
treating latent explanations as direct observations.

# 1. Problem and Scope

Computational interaction research frequently treats clicks, commands,
gaze shifts, messages, state changes, task completion, and model outputs
as behavior. These records are not equivalent. Some are environmental
measurements, some are system transitions, some are experimenter-defined
events, and some are interpretations of agency, purpose, belief, or
strategy. Without a theory of behavior, interaction traces risk becoming
collections of implementation-specific events whose explanatory status
is unclear.

The problem is not solved by defining behavior as whatever a system
does. That formulation is too broad to distinguish behavior from
internal dynamics, passive displacement, noise, or arbitrary state
change. Conversely, limiting behavior to intentional human action
excludes organisms, robots, adaptive software, reflexes, omissions, and
learned but non-deliberative conduct. A useful account must remain
implementation-independent while retaining empirical discipline.

The paper evaluates whether established theories already supply a
sufficient account. The objective is not a universal metaphysical
definition. It is a minimal scientific architecture adequate for
representing behavioral evidence across computational interactions.

# 2. Method and Standards

The review compares explanatory structures rather than recounting
disciplinary histories. Primary and foundational works were prioritized:
Dewey on the reflex arc; Skinner on operant behavior; Tinbergen on
ethological explanation; Rosenblueth, Wiener, and Bigelow on behavioral
classification and purpose; Ryle and philosophy of action on
dispositions and agency; Newell and Simon on problem-solving protocols;
ecological and situated approaches on organism-environment coordination;
reinforcement learning on policies and trajectories; and HCI on task
performance, action sequences, and interaction logs.

For each tradition, the analysis identifies: the entity to which
behavior is attributed; the temporal unit; the role of environment;
whether purpose or intention is required; the observational basis; the
explanatory mechanism; and the treatment of latent variables. Candidate
distinctions are retained only when counterexamples show that collapsing
them would generate false inferences. This follows the project\'s canon:
define vocabulary, separate observation from interpretation, prefer
mechanisms, require operationalization and falsifiability, and leave
reusable artifacts.

# 3. Major Traditions

  ----------------------------------------------------------------------------------------
  **Tradition**          **Behavioral object**    **Typical           **Strength and
                                                  evidence**          limit**
  ---------------------- ------------------------ ------------------- --------------------
  Behaviorism            Environmentally related  Observable response Strong operational
                         responding; operants and and contingencies   discipline; weak on
                         response classes                             representation,
                                                                      distributed
                                                                      activity, and
                                                                      observer
                                                                      construction.

  Ethology               Species-typical and      Behavioral patterns Multilevel
                         individual behavior in   explained by        explanation;
                         natural context          mechanism,          segmentation and
                                                  development,        observer dependence
                                                  function, and       remain difficult.
                                                  phylogeny           

  Ecological psychology  Organism-environment     Perception-action   Avoids isolated
                         coordination             relations and       stimulus-response
                                                  affordances         units; may
                                                                      underdescribe
                                                                      symbolic and
                                                                      institutional
                                                                      mediation.

  Cognitive science      Performance generated by Tasks, protocols,   Mechanistic and
                         information-processing   errors, timing,     computational
                         mechanisms               internal models     detail; latent
                                                                      structures can
                                                                      outrun evidence.

  Situated/distributed   Activity organized       Coordinated         Captures context and
  cognition              across people,           trajectories and    distribution; system
                         artifacts, and settings  representational    boundaries become
                                                  transformations     analytically
                                                                      contested.

  Cybernetics/control    Input-output relations,  Trajectories, error General across
                         feedback, regulation,    signals, stability, natural and
                         goal-directed dynamics   control             artificial systems;
                                                                      agency and meaning
                                                                      are not intrinsic.

  Behavioral economics   Choices under            Selections,         Quantitative
                         constraints and          response            regularity; observed
                         incentives               distributions,      choice does not
                                                  revealed            uniquely reveal
                                                  preferences         preference or
                                                                      belief.

  Reinforcement learning Policy-generated         Actions,            Formal and testable;
                         state-action-reward      observations,       modeled state/action
                         trajectories             rewards, returns,   spaces may omit
                                                  policies            situated behavior.

  Robotics               Embodied sensing,        Sensorimotor        Links behavior to
                         control, and action      traces,             dynamics; success
                                                  trajectories, task  criteria are
                                                  outcomes            designer-relative.

  HCI/human factors      Human performance in     Events, timing,     Operationally rich;
                         designed systems         errors, workload,   logs are often
                                                  task completion     interface-specific
                                                                      and psychologically
                                                                      underdetermined.

  Philosophy of action   Actions, agency,         Intentional and     Clarifies
                         intention, reasons,      attributable        action/behavior
                         omissions                conduct             distinction; less
                                                                      suited to
                                                                      non-agentive or
                                                                      artificial cases.
  ----------------------------------------------------------------------------------------

# 4. Canonical Distinctions

## 4.1 State, change, and behavior

A state is a description of a system at a time or over an interval.
Behavior concerns a trajectory, transition pattern, controlled
persistence, or temporally organized relation among states. Remaining
still can count as behavior when maintaining position is attributable to
regulation or policy; mere static existence does not. This means change
is not strictly necessary, but temporal organization and counterfactual
sensitivity are.

Internal state change is not automatically behavior. A memory
allocation, hidden neural activation, or background process becomes
behavioral evidence only relative to a declared observational level and
attribution rule. Otherwise every physical change inside a system would
count, eliminating useful boundaries.

## 4.2 Behavior and action

Behavior is the broader evidential category. Action adds an attribution
of agency, organization, control, or purposive relevance. A reflex,
drift, involuntary movement, policy output, and failed attempt can be
behavioral without satisfying a demanding theory of action. Conversely,
an omission may qualify as action when an agent could and was expected
to intervene, even though no overt movement occurred. Action is
therefore not reducible to a visible event.

The framework treats action attribution as typed and defeasible.
Researchers must specify whether an event is merely attributed to a
system, controlled by it, selected by a policy, intended, reason-guided,
or normatively accountable.

## 4.3 Behavior and interaction

Behavior can be attributed to one system relative to an environment.
Interaction requires reciprocal constraint between distinguishable
systems. An agent\'s behavior may occur within an interaction, but not
every behavior is interactive, and an interaction trace contains events
attributable to multiple participants and mediating structures. Behavior
is therefore a component and perspective on interaction, not its
synonym.

## 4.4 Behavior and performance

Performance evaluates behavior against a task, norm, utility, or success
criterion. The same behavioral trajectory can be high-performing under
one objective and poor under another. Completion, reward, speed,
accuracy, and efficiency are evaluative functions over behavior; they
are not behavior itself.

## 4.5 Behavior and latent explanation

Intention, belief, preference, confidence, strategy, habit, expertise,
attention, workload, and policy are not directly observed in ordinary
traces. They are latent or theoretical variables inferred from behavior,
reports, interventions, and auxiliary measurements. A scientific
representation must preserve this evidential asymmetry. An action log
can constrain interpretations but rarely identifies one uniquely.

# 5. Canonical Definition

Behavior is a bounded, temporally extended trajectory of observable or
instrumentally recoverable changes, outputs, or regulated persistence
attributable to a system in relation to its environment under a declared
observation model.

Each clause is necessary for scientific use:

Bounded: the behaving system and relevant environment must be
specified.\
Temporally extended: behavior is identified through ordering, duration,
transition, recurrence, or maintained regulation.\
Observable or recoverable: evidence must be accessible through declared
instruments or records.\
Attributable: the trajectory must be assigned to a system by an explicit
causal, control, ownership, or analytic rule.\
Relational: behavior is interpreted relative to environmental conditions
and opportunities.\
Observation-model relative: event types, granularity, and uncertainty
depend on how the phenomenon is measured.

This definition does not require consciousness, intention, semantic
understanding, optimality, success, movement, or direct observation by a
human. It also does not claim that behavior exists only when observed.
Rather, scientific claims about behavior require an observation model
connecting the target process to evidence.

# 6. Behavioral Event and Segmentation

A behavioral event is not a self-identifying atom. It is a temporally
bounded segment of a trace classified under an event type and attributed
to a system. Segmentation may be physical, functional, task-relative,
protocol-defined, or statistically inferred. Different segmentations can
be valid for different explanatory questions.

The smallest useful unit is therefore not universally a click, movement,
command, or state transition. It is the minimal discriminable segment
required by a declared explanatory and measurement contract. For motor
control this may be a subsecond trajectory; for HCI it may be an
operation; for organizational activity it may be a coordinated episode;
for reinforcement learning it may be a time step; for discourse it may
be a turn or act. Units must not be compared across studies without
declaring their segmentation rules.

  -----------------------------------------------------------------------
  **Level**               **Examples**            **Evidential status**
  ----------------------- ----------------------- -----------------------
  Record                  Sensor sample, log      Directly produced by an
                          line, video frame,      instrument; not yet a
                          timestamp               behavioral claim.

  Detected event          Threshold crossing,     Derived from records by
                          message receipt, button an explicit detector.
                          activation              

  Attributed behavioral   Agent selected command; Detected event assigned
  event                   robot avoided obstacle  to a system and
                                                  behavioral type.

  Episode                 Search sequence; repair Temporally grouped
                          attempt; conversation   events under boundary
                          turn cluster            and completion rules.

  Pattern                 Habitual route;         Regularity across
                          oscillation; repeated   events or episodes.
                          error                   

  Action                  Intentional,            Requires additional
                          policy-selected,        agency criteria.
                          controlled, or          
                          normatively             
                          attributable event      

  Strategy                Higher-order            Latent or model-based;
                          organization across     not directly read from
                          actions and             the trace.
                          contingencies           

  Outcome/performance     Success, reward, error, Evaluation over traces,
                          cost, completion        not behavior itself.
  -----------------------------------------------------------------------

# 7. Behavior Ontology

  -----------------------------------------------------------------------
  **Entity**              **Definition**          **Examples**
  ----------------------- ----------------------- -----------------------
  System                  Entity or analytically  Human, animal, robot,
                          bounded organization to software agent, group.
                          which behavior is       
                          attributed.             

  Environment             Conditions and entities Physical setting,
                          outside the selected    interface, other
                          system boundary         agents, institutional
                          relevant to the         rules.
                          behavior.               

  State                   Declared description of Position, screen state,
                          system or environment   belief state,
                          at a time or interval.  physiological state.

  Observation model       Mapping from target     Logging schema, coding
                          processes to records    protocol, sensors.
                          and event categories.   

  Record                  Instrument-produced     Event log, video frame,
                          datum with provenance   telemetry.
                          and timestamp.          

  Event                   Segment classified      Command invocation,
                          under explicit          gaze transition.
                          detection rules.        

  Attribution             Rule connecting an      Control ownership,
                          event or persistence to causal intervention,
                          a system.               authorship.

  Behavioral episode      Bounded sequence or     Search, repair,
                          concurrent structure of negotiation.
                          attributed events.      

  Context                 Conditions needed to    Task, opportunities,
                          interpret or compare    policy, history,
                          behavior.               projection.

  Trace                   Time-indexed, partially Session trace,
                          ordered collection of   multi-agent protocol
                          records and derived     trace.
                          events.                 

  Outcome                 State or evaluation     Completion, failure,
                          following a trace or    reward, harm.
                          episode.                

  Latent construct        Unobserved variable     Belief, intention,
                          proposed to explain     strategy, workload.
                          distributions of        
                          evidence.               

  Uncertainty             Limits on detection,    Confidence intervals,
                          timing, attribution,    missing data, competing
                          state, or               codings.
                          interpretation.         
  -----------------------------------------------------------------------

# 8. Behavioral Grammar

A behavioral grammar specifies admissible composition without claiming
that behavior is linguistic. The minimum grammar distinguishes records,
events, episodes, and explanatory annotations.

Record r ::= \<source, time, channel, value, provenance, uncertainty\>\
Event e ::= detect(type, interval, records, rule)\
Attributed event b ::= attribute(system, event, relation, confidence)\
Episode q ::= compose(boundary, order, {b}, context, completion)\
Trace τ ::= partial-order({records, events, episodes}, clocks,
missingness)\
Interpretation i ::= infer(construct, evidence-set, model, alternatives,
uncertainty)\
Outcome o ::= evaluate(trace-or-episode, criterion, tolerance)

Composition operators include sequential composition (;), concurrency
(\|\|), choice (+), iteration (\*), interruption (!), omission (Ø under
an expectation model), and nesting (\[ \]). These operators describe
trace organization. They do not imply purpose or meaning by themselves.

# 9. Trace Model

A scientific trace should be modeled as more than an ordered list.
Distributed and asynchronous systems require partial ordering, multiple
clocks, uncertain timestamps, concurrent events, hidden state, and
provenance.

Let a behavioral trace be:

τ = \<R, E, A, Q, ≺, C, Ω\>

R is the set of raw records. E is the set of detected events. A maps
events to attributed systems and relation types. Q is a set of episodes
or higher-order segmentations. ≺ is a temporal or causal partial order.
C is context, including task, opportunity profile, projection,
permissions, environment, and prior history. Ω records uncertainty,
missingness, detector error, attribution confidence, and competing
annotations.

A trace is evidence, not a complete account of behavior. What was not
instrumented may be absent. Identical traces may arise from different
mechanisms; different traces may instantiate the same strategy or task
outcome. Trace equivalence must therefore be typed by observables,
granularity, context, and tolerance.

# 10. Evidence Hierarchy

  --------------------------------------------------------------------------
  **Level**         **Claim type**    **Example**       **Primary risk**
  ----------------- ----------------- ----------------- --------------------
  1\. Physical or   Instrument output Timestamped log,  Calibration error,
  digital record    with provenance   video, sensor     missingness, clock
                                      sample            drift.

  2\. Derived       Deterministic or  Duration, path    Algorithm and
  observable        statistical       length,           threshold
                    feature from      transition count  dependence.
                    records                             

  3\. Detected      Segment under     Click, utterance  Segmentation and
  event             declared rule     boundary,         classifier error.
                                      collision         

  4\. Behavioral    Event assigned to User issued       Shared control,
  attribution       a system          command           automation,
                                                        accidental
                                                        activation.

  5\. Episode or    Composition       Search episode,   Boundary choice and
  pattern           across events     repeated checking multiple valid
                                                        decompositions.

  6\. Functional    Role relative to  Error correction, Same trace may serve
  interpretation    task or           exploration       different functions.
                    regulation                          

  7\. Latent        Unobserved        Belief,           Underdetermination
  construct         explanatory       intention,        and model
  inference         variable          strategy,         dependence.
                                      preference        

  8\. Causal        Mechanism claimed Feedback control, Confounding, reverse
  explanation       to generate       learning, habit   causation, omitted
                    behavior                            variables.
  --------------------------------------------------------------------------

# 11. Behavior Taxonomy

  -----------------------------------------------------------------------
  **Axis**                **Types**               **Question answered**
  ----------------------- ----------------------- -----------------------
  Attribution             System-generated;       Who or what generated
                          environmentally         the trajectory?
                          imposed; jointly        
                          produced; uncertain     

  Control                 Controlled; automatic;  What control relation
                          reflexive; stochastic;  is supported?
                          externally driven       

  Temporal form           Event; persistence;     How is behavior
                          sequence; cycle;        organized in time?
                          concurrent              
                          coordination;           
                          developmental change    

  Environmental relation  Reactive; anticipatory; How does it relate to
                          regulatory;             environmental
                          exploratory;            conditions?
                          communicative;          
                          transformative          

  Learning status         Novel; learned;         What history is
                          habitual; adapted;      evidenced?
                          transferred;            
                          innate/developmental    

  Social organization     Individual; dyadic;     Where is behavioral
                          collective;             organization located?
                          distributed;            
                          institutional           

  Outcome status          Attempted; interrupted; What occurred relative
                          failed; successful;     to a criterion?
                          compensatory;           
                          reversible              

  Observability           Directly recorded;      What evidence supports
                          indirectly recovered;   the claim?
                          inferred; unobserved    
  -----------------------------------------------------------------------

# 12. Cross-System Comparative Cases

Human-computer command. A user invokes a command, the system logs an
event, and a state transition follows. The record supports that an input
occurred and may support attribution to the account or device. It does
not alone establish intention, understanding, confidence, or authorship
by the human rather than automation.

Animal navigation. A trajectory through an environment is directly
behavioral under an organism boundary. Explaining it as foraging,
homing, or exploration requires environmental and functional evidence.
Tinbergen\'s distinctions show that mechanism, development, adaptive
function, and phylogeny answer different questions about the same
behavior.

Robot obstacle avoidance. Sensor, control, and motion traces support a
mechanistic account. Goal-directedness can be specified functionally
without assuming consciousness. The behavior may be generated by
feedback control, a learned policy, or a fixed rule; output similarity
does not identify the mechanism.

Reinforcement-learning agent. A state-action-reward trajectory is
behavior under the model, while the policy is a generative disposition
over actions. The environment\'s state representation is analytical, not
necessarily the system\'s own representation. Reward is an evaluative
signal, not evidence of subjective desire.

Distributed team activity. The relevant behavior may not be attributable
to any individual. Coordination emerges across people, artifacts, and
representations. A group-level episode requires explicit composition and
boundary rules, preserving individual and collective levels rather than
replacing one with the other.

Conversational system. Generated text is observable output. Treating it
as assertion, promise, refusal, deception, or understanding requires
semantic, institutional, and agency criteria. Surface linguistic form is
insufficient to establish the latent construct.

# 13. Recurring Behavioral Structures

-   Feedback loops: outputs alter conditions that shape later behavior.

-   Selection under constraints: behavior is chosen or generated from an
    opportunity structure, whether explicitly represented or not.

-   Temporal hierarchy: events compose into episodes, routines,
    strategies, and developmental trajectories.

-   Partial observability: the behaving system and observer have
    incomplete and different access to state.

-   Adaptation: response distributions change with history,
    consequences, training, and environmental structure.

-   Equifinality and multifinality: different mechanisms can produce
    similar traces, and similar initial traces can lead to different
    outcomes.

-   Context sensitivity: task, environment, social rules, projection,
    and prior activity alter the meaning of identical events.

-   Coordination: behavior may be jointly organized across agents and
    artifacts.

-   Error and recovery: failed or interrupted action changes subsequent
    behavior and opportunity.

-   Persistence and omission: maintaining a state or not acting can be
    behavior under control or expectation models.

# 14. Latent Variables

Latent variables are legitimate when they support testable measurement
models, interventions, or predictions. They become scientifically
dangerous when labels merely redescribe the behavior they are supposed
to explain. Saying that a user clicked because of a preference, inferred
only from the click, is circular unless preference independently
predicts behavior across conditions.

A latent claim should declare: construct definition; indicators;
measurement model; temporal ordering; alternative explanations;
identification assumptions; expected interventions; uncertainty; and
falsifying observations. Self-report is additional behavior and
evidence, not transparent access to an internal state. Model-generated
hidden states are computational variables, not automatically
psychological constructs.

The recommended policy is typed inference. Terms such as intended,
believed, understood, attended, preferred, confused, and strategic must
be explicitly marked as reported, experimentally manipulated,
model-inferred, or theoretically attributed.

# 15. Behavioral Evidence Contract

  -----------------------------------------------------------------------
  **Field**                           **Required declaration**
  ----------------------------------- -----------------------------------
  Target system                       Boundary, level, and ownership
                                      criteria.

  Environment                         Relevant external entities,
                                      conditions, institutions, and other
                                      agents.

  Observation model                   Sensors, logs, coding scheme,
                                      channels, sampling, and
                                      calibration.

  Temporal model                      Clock, ordering, latency,
                                      synchronization, interval
                                      conventions.

  Event vocabulary                    Types, detection rules,
                                      segmentation, and granularity.

  Attribution rule                    Why an event is assigned to a
                                      system and with what confidence.

  Context                             Task, projection, opportunity
                                      profile, permission, history, and
                                      incentives.

  Outcome criteria                    Success, failure, cost, reward,
                                      safety, or completion definitions.

  Latent constructs                   Measurement model, indicators,
                                      alternatives, and identification
                                      assumptions.

  Uncertainty                         Missing data, detector error,
                                      attribution ambiguity, and
                                      confidence.

  Comparison scope                    Populations, systems, settings,
                                      invariants, metrics, and
                                      tolerances.

  Failure conditions                  Conditions under which the trace
                                      cannot support the intended claim.
  -----------------------------------------------------------------------

# 16. Falsification and Rival Accounts

  --------------------------------------------------------------------------
  **Claim tested**        **Falsifying or         **Consequence**
                          contrary evidence**     
  ----------------------- ----------------------- --------------------------
  Behavior can be defined Omissions, controlled   Retain broader trajectory
  as observable movement  persistence, messages,  definition.
  alone.                  and software outputs    
                          are systematically      
                          excluded.               

  Behavior is simply      Transitions occur       Keep behavior as
  state transition.       without useful          attributed trace over
                          attribution; a single   transitions.
                          transition omits        
                          temporal organization   
                          and environment         
                          relation.               

  Behavior is action.     Reflexes, failures,     Keep action as typed
                          involuntary outputs,    subset or interpretation.
                          and non-agentive        
                          systems remain          
                          scientifically          
                          relevant.               

  Policy is behavior.     Different realized      Separate generative
                          traces arise from one   disposition from
                          policy and the same     realization.
                          trace from different    
                          policies.               

  Logs directly reveal    Instrument changes,     Preserve
  behavior.               automation, shared      record-event-attribution
                          control, and missing    hierarchy.
                          channels alter recorded 
                          events.                 

  Latent states can be    Multiple latent models  Require identified
  read from traces.       fit the same            measurement and causal
                          observations or fail    models.
                          under intervention.     

  A universal atomic unit Valid units vary by     Use contract-relative
  exists.                 explanatory level and   minimal units.
                          measurement resolution. 

  Existing theories are   Cross-system comparison Retain shared typed trace
  fully sufficient        repeatedly conflates    framework only if it
  without synthesis.      records, actions,       improves reliability and
                          states, and latent      prediction.
                          constructs.             
  --------------------------------------------------------------------------

# 17. Threats to Validity

The proposed definition is intentionally scientific rather than
exhaustive of ordinary language. It may classify phenomena differently
from legal, moral, clinical, or folk-psychological accounts. The term
attributable risks importing causal assumptions into description; this
is mitigated by requiring attribution types and uncertainty.

The framework may privilege traceable computational cases. Human and
animal behavior can involve embodied, affective, social, historical, and
institutional structures not recoverable from event logs. Distributed
cognition also makes system boundaries contested rather than simply
discoverable.

Formal traces can encourage false completeness. Missing channels,
observer effects, coding choices, and asynchronous processes may
materially alter conclusions. Behavioral categories can become reified,
particularly when inferred properties are attached to demographic
groups. Culture, language, occupation, disability, and experience should
enter through measured contexts and mechanisms rather than deterministic
labels.

Finally, the framework\'s value is unproven until independent
researchers can annotate common datasets more consistently, compare
behavior across implementations, and improve explanatory or predictive
performance without laundering interpretation as observation.

# 18. Implications for Computational Interaction Research

The framework places behavior after interaction and opportunity but
before measurement and prediction. Interaction specifies reciprocal
coupling. Opportunity specifies typed action availability. Behavior
records the realized, attributed trajectory. Measurement establishes how
traces and constructs are operationalized. Explanation connects behavior
to mechanisms without assuming that representation directly causes
action.

A complete analysis should therefore distinguish: what the system made
possible; what was exposed or believed; what records were produced;
which events were detected; which events were attributed as behavior;
which actions or strategies were inferred; and which outcomes were
evaluated. This separation prevents common errors such as treating an
unselected control as unnoticed, a pause as confusion, task completion
as understanding, or equal outcomes as equal behavior.

The model also makes later similarity research tractable. Two
interactions may be semantically equivalent while producing different
behavioral traces; two traces may be structurally different while
instantiating the same policy; and behavior may be observationally
equivalent under one instrument but distinguishable under another.

# 19. Conclusion

Existing behavioral theories are sufficient for their established
domains but do not provide a single evidence-preserving vocabulary for
computational interaction. The missing contribution is not a new
substance called computational behavior. It is a disciplined synthesis
separating records, events, attribution, episodes, action, performance,
and latent explanation.

Behavior should be represented as a bounded, temporally extended,
observation-model-relative trajectory attributable to a system in
relation to its environment. This account supports humans, animals,
robots, software agents, and distributed systems without requiring
intention or reducing behavior to arbitrary state change. It preserves
the distinction between what occurred and why it occurred.

The paper\'s principal conclusion is therefore: existing theories are
conceptually sufficient but require a shared typed trace and evidence
framework for computational interaction research. The framework should
be retained only if it improves annotation reliability, cross-system
comparison, causal clarity, and out-of-sample explanation or prediction.

# 20. Reusable Artifacts

## 20.1 Canonical vocabulary

  -----------------------------------------------------------------------
  **Term**                            **Definition**
  ----------------------------------- -----------------------------------
  Behavior                            A bounded, temporally extended
                                      trajectory of observable or
                                      recoverable changes, outputs, or
                                      regulated persistence attributable
                                      to a system in relation to its
                                      environment under a declared
                                      observation model.

  Behavioral event                    A temporally bounded segment of a
                                      trace classified under an event
                                      type and attributed to a system.

  Action                              Behavior attributed as controlled,
                                      selected, intentional,
                                      reason-guided, or normatively
                                      attributable under a declared
                                      theory of agency.

  State                               A declared description of a system
                                      or environment at a time or
                                      interval.

  Trace                               A time-indexed or partially ordered
                                      collection of records, detected
                                      events, attributions, episodes,
                                      context, and uncertainty.

  Episode                             A bounded composition of behavioral
                                      events under explicit initiation,
                                      continuation, and completion rules.

  Pattern                             A regularity across events or
                                      episodes under a declared
                                      similarity rule.

  Performance                         Evaluation of behavior relative to
                                      a task, criterion, utility, norm,
                                      or tolerance.

  Latent construct                    An unobserved variable proposed to
                                      explain or predict evidence through
                                      a measurement or causal model.

  Behavioral evidence                 Records and derived claims whose
                                      provenance, transformation,
                                      attribution, and uncertainty are
                                      declared.
  -----------------------------------------------------------------------

## 20.2 Minimal annotation schema

\<system_id, environment_id, record_id, source, timestamp_or_interval,
event_type, detector, attribution_type, attribution_confidence,
episode_id, context_id, outcome_relation, provenance, uncertainty,
alternative_annotations\>

## 20.3 Behavioral comparison protocol

-   Declare systems, environments, levels, and boundaries.

-   Align observation channels and verify instrumentation equivalence.

-   Normalize clocks, sampling, missingness, and event-detection rules.

-   Compare raw records before comparing attributed event labels.

-   Declare segmentation granularity and episode boundary rules.

-   Separate descriptive trace metrics from task-performance metrics.

-   Compare latent constructs only through equivalent measurement
    models.

-   Control opportunity, projection, task, permission, and prior
    experience.

-   Use typed equivalence claims with metrics and tolerances.

-   Report alternative annotations and uncertainty.

# 21. References

Beer, R. D. (1995). A dynamical systems perspective on agent-environment
interaction. Artificial Intelligence, 72, 173-215.

Card, S. K., Moran, T. P., & Newell, A. (1983). The Psychology of
Human-Computer Interaction. Lawrence Erlbaum.

Davidson, D. (1980). Essays on Actions and Events. Oxford University
Press.

Dewey, J. (1896). The reflex arc concept in psychology. Psychological
Review, 3, 357-370.

Engestrom, Y. (1987). Learning by Expanding. Orienta-Konsultit.

Gibson, J. J. (1979). The Ecological Approach to Visual Perception.
Houghton Mifflin.

Hutchins, E. (1995). Cognition in the Wild. MIT Press.

Kahneman, D., & Tversky, A. (1979). Prospect theory: An analysis of
decision under risk. Econometrica, 47, 263-291.

Newell, A., Shaw, J. C., & Simon, H. A. (1958). Elements of a theory of
human problem solving. Psychological Review, 65, 151-166.

Norman, D. A. (1986). Cognitive engineering. In User Centered System
Design. Lawrence Erlbaum.

Preece, J., Rogers, Y., & Sharp, H. (2015). Interaction Design: Beyond
Human-Computer Interaction. Wiley.

Reason, J. (1990). Human Error. Cambridge University Press.

Rosenblueth, A., Wiener, N., & Bigelow, J. (1943). Behavior, purpose and
teleology. Philosophy of Science, 10, 18-24.

Ryle, G. (1949). The Concept of Mind. Hutchinson.

Skinner, B. F. (1938). The Behavior of Organisms. Appleton-Century.

Suchman, L. A. (1987). Plans and Situated Actions. Cambridge University
Press.

Sutton, R. S., & Barto, A. G. (2018). Reinforcement Learning: An
Introduction (2nd ed.). MIT Press.

Tinbergen, N. (1963). On aims and methods of ethology. Zeitschrift fur
Tierpsychologie, 20, 410-433.

von Wright, G. H. (1971). Explanation and Understanding. Cornell
University Press.

Wiener, N. (1948). Cybernetics. MIT Press.
