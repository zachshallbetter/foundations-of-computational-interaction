**Predicting Interaction**

*Toward a Predictive Theory of Computational Interaction*

Formal research paper

# Abstract

Computational interaction is predictively tractable only under declared
targets, horizons, observation models, populations, interventions, and
loss functions. Existing research supplies successful local predictive
laws and models: Fitts\' law predicts constrained movement time;
Hick-Hyman relations predict choice latency under controlled
alternatives; GOMS and the Model Human Processor predict skilled task
time; cognitive architectures generate task-specific performance
trajectories; Bayesian, survival, sequential, and machine-learning
models forecast events under uncertainty. These successes do not
establish a universal predictive theory. Discovery, errors, recovery,
abandonment, adaptation, expertise, transfer, and strategy differ in
observability, temporal scale, causal dependence, and distributional
stability. Prediction must therefore be typed.

This paper distinguishes forecasting from explanation, retrodiction,
diagnosis, causal effect estimation, and intervention planning. It
proposes a prediction ontology and a layered framework in which
predictions are conditional distributions over declared interaction
targets generated from episode state, opportunity structure, projection,
behavioral history, agent experience, strategy hypotheses, and context.
Predictive claims must report calibration, discrimination, decision
utility, uncertainty, transport conditions, and failure criteria. The
central conclusion is that computational interaction supports predictive
science, but only as a family of scoped, probabilistic, and updateable
models. Low-level performance and near-term transitions are often
strongly predictable; higher-order constructs and long-horizon outcomes
are forecastable only as distributions and frequently remain
unidentified without intervention or richer observation.

# 1. Problem Statement

The preceding research program defines interaction episodes, behavioral
traces, opportunity profiles, strategies, transfer, similarity, and a
measurement architecture. Prediction is the next test of whether these
constructs support empirical science rather than only conceptual
organization. The relevant question is not whether some interaction
outcomes correlate with earlier variables. It is whether future or
unobserved interaction variables can be forecast with known uncertainty
under declared conditions and whether the resulting forecasts remain
valid across participants, tasks, projections, time, and interventions.

Interaction is an especially difficult predictive domain. The system and
agent mutually constrain later trajectories; observations are partial;
behavior changes beliefs and opportunity; participants learn; interfaces
and policies change; and the prediction itself may alter behavior.
Prediction targets also occupy different levels. A movement time is
directly measurable, while a strategy, expertise state, or believed
action set is latent. A model can predict a trace without explaining its
mechanism, explain a mechanism without predicting held-out traces, or
estimate an intervention effect without accurately predicting individual
outcomes.

The central research problem is therefore to define a disciplined
predictive architecture that separates target types, horizons,
information sets, causal questions, uncertainty, and validity domains.
The objective is not one universal model. It is the minimum framework
required to state, test, compare, update, and falsify predictive claims
about computational interaction.

# 2. Literature Review Method

The review was organized by predictive function rather than by
discipline. Primary and foundational sources were prioritized for:
statistical distinctions between explanation and prediction;
human-performance laws; engineering models of skilled interaction;
cognitive architectures; Bayesian and sequential models; machine
learning; survival and event-history analysis; causal inference;
transfer and transport; and predictive uncertainty. The earlier
Interaction, Behavior, Measurement, Opportunity, Similarity, Transfer,
Strategy, and Formal Models papers were treated as constraints on the
predictive target and evidence model, not as evidence that prediction
must succeed.

Each tradition was evaluated against five questions: What is predicted?
From what information? At what horizon and unit? Under what assumptions?
By what evidence is success or failure established? Claims were rejected
as predictive when they were evaluated only in-sample, used future
information, relied on post-outcome labels, lacked a baseline, or did
not report uncertainty and calibration.

# 3. Explanation, Prediction, and Intervention

Prediction and explanation are distinct scientific aims. Predictive
modeling minimizes expected loss for unobserved cases under a specified
data-generating regime. Explanatory modeling aims to identify or support
mechanisms, causes, or theoretical dependencies. A structurally faithful
explanatory model can predict poorly when unmodeled variability
dominates, while a flexible predictor can forecast accurately without
identifying the generating mechanism. This distinction is emphasized by
Shmueli and by Yarkoni and Westfall.

Four additional functions must remain separate:

-   Retrodiction estimates an unobserved or hidden past variable from
    later evidence.

-   Diagnosis classifies or explains a current condition from
    observations.

-   Causal effect estimation predicts the distribution that would follow
    an intervention rather than passive observation.

-   Decision or control selects an intervention using predicted
    consequences and utilities.

Observational prediction estimates P(Y_future \| H_observed).
Intervention prediction estimates P(Y_future \| do(A=a), H_observed).
The latter cannot generally be obtained from the former without causal
assumptions, identification conditions, or experimental variation. A
system that accurately predicts abandonment from frustration signals
does not thereby establish that reducing those signals will prevent
abandonment.

# 4. Prediction Ontology

  -----------------------------------------------------------------------
  **Concept**             **Definition**          **Example**
  ----------------------- ----------------------- -----------------------
  Prediction target       The future, hidden, or  Discovery event, error,
                          counterfactual variable completion time,
                          to be forecast.         strategy class.

  Prediction unit         Entity over which the   Action, episode,
                          prediction is defined.  person-task pair, team,
                                                  system deployment.

  Horizon                 Temporal or structural  Next action; remainder
                          distance between        of episode; next
                          information cutoff and  session.
                          target.                 

  Information set         Variables legally       State, projection,
                          available at prediction opportunity, prior
                          time.                   trace, experience.

  Predictor               Function or             Hazard model, POMDP
                          probabilistic model     belief model, neural
                          mapping information to  sequence model.
                          a predictive            
                          distribution.           

  Predictive distribution Uncertainty-bearing     Probability of error;
                          estimate over outcomes. interval for completion
                                                  time.

  Decision threshold      Rule converting a       Intervene when failure
                          distribution into an    probability exceeds
                          action or label.        0.7.

  Loss or utility         Cost function defining  Log loss, time error,
                          predictive quality for  false-negative cost.
                          a use.                  

  Validity domain         Population, task,       Trained novices on
                          projection, context,    desktop form
                          and time for which      completion.
                          evidence supports use.  

  Transport condition     Assumption under which  Stable measurement,
                          performance generalizes mechanism, or
                          to a target domain.     conditional
                                                  distribution.

  Calibration             Agreement between       Among 0.8 predictions,
                          predicted probabilities about 80% occur.
                          and observed            
                          frequencies.            

  Discrimination          Ability to rank or      AUC, concordance,
                          separate outcomes.      precision-recall.

  Sharpness               Concentration of a      Narrow intervals with
                          calibrated predictive   valid coverage.
                          distribution.           

  Prediction failure      Violation of accuracy,  Drift, subgroup
                          calibration, coverage,  failure, intervention
                          utility, or scope.      mismatch.
  -----------------------------------------------------------------------

# 5. What Is Predictable?

Predictability is not a property of a phenomenon alone. It is a relation
among target, horizon, information set, population, observation process,
model class, and tolerance. The same outcome may be highly predictable
at the population level and weakly predictable for an individual.
Aggregate movement time may follow a stable law while a particular
person\'s next action remains uncertain.

  ----------------------------------------------------------------------------------
  **Target**         **Expected           **Suitable models**     **Principal
                     predictability**                             limits**
  ------------------ -------------------- ----------------------- ------------------
  Low-level          Often high under     Fitts-type movement     Device
  motor/perceptual   controlled geometry, time; Hick-Hyman choice variability,
  performance        practiced action,    latency.                strategy changes,
                     and stable devices.                          fatigue,
                                                                  accessibility,
                                                                  nonstationarity.

  Skilled procedural Moderate to high for KLM/GOMS and Model      Learning,
  task time          routine, error-free, Human Processor.        interruptions,
                     well-specified                               errors,
                     tasks.                                       interpretation,
                                                                  collaborative
                                                                  work.

  Next action or     Moderate when state, Sequence models,        Hidden goals,
  transition         opportunity, policy, Markov/POMDP models.    multiple valid
                     and recent history                           strategies,
                     are observed.                                changing
                                                                  opportunity.

  Discovery          Probabilistic and    Hazard of first         Unobserved prior
                     context-sensitive.   discovery from          knowledge and
                                          exposure, signaling,    attention.
                                          search history.         

  Errors             Useful risk          Human reliability,      Rare events,
                     prediction possible; classification,         adaptive
                     exact event          state-space risk        avoidance,
                     prediction limited.  models.                 reporting bias.

  Recovery           Predictable          Competing-risk or       Unobserved
                     conditional on error sequential models.      interpretation and
                     type, visible                                external
                     recovery paths,                              consequences.
                     belief, and skill.                           

  Abandonment        Often forecastable   Survival analysis using Censoring, return
                     as a time-to-event   friction and progress   behavior, changing
                     risk.                signals.                goals.

  Adaptation         Predictable as a     Bayesian learning,      Task change,
                     distribution over    power-law/exponential   exploration,
                     learning curves or   learning models.        motivation,
                     policy changes.                              strategy shifts.

  Expertise          Population-level     Skill models, cognitive Domain specificity
                     classification is    architectures,          and sparse
                     possible; individual longitudinal models.    longitudinal data.
                     developmental                                
                     trajectory is weakly                         
                     identified.                                  

  Transfer           Conditional and      Hierarchical or         Negative transfer,
                     asymmetrical;        transport models.       representation
                     requires                                     mismatch, context
                     source-target                                dependence.
                     relation.                                    

  Strategy           Latent; only         Inverse planning,       Observational
                     probabilistic        mixture models, inverse equivalence and
                     inference from       reinforcement learning. strategy
                     multiple traces and                          switching.
                     interventions is                             
                     defensible.                                  

  Long-horizon       Generally low        Scenario distributions, Compounding
  interaction        without closed-world policy-conditioned      uncertainty,
  trajectory         assumptions and      simulation.             exogenous change,
                     continual updating.                          reflexivity.
  ----------------------------------------------------------------------------------

# 6. Predictive Traditions

## 6.1 Human-performance laws

Fitts\' law and Hick-Hyman relations demonstrate that constrained
components of interaction can support compact, quantitative prediction.
Their scientific value comes from declared task structure, measurable
variables, reproducible relations, and explicit residual variation.
Their limitation is scope: they predict selected performance dimensions
under particular action and choice structures, not whole interactions.

## 6.2 Engineering models of interaction

GOMS, the Keystroke-Level Model, and the Model Human Processor predict
skilled, largely error-free task performance from decomposed operators
and processing assumptions. They are strongest when methods and
operators are known and weakest when discovery, learning,
interpretation, collaboration, interruption, or strategy change
dominates.

## 6.3 Cognitive architectures

ACT-R, EPIC, and related architectures generate predictions by
instantiating mechanistic assumptions about memory, perception,
cognition, and action. They can explain and predict within modeled
tasks, but performance depends on task encoding, model construction,
parameter selection, and whether the architecture captures the relevant
environmental coupling. Architecture-level commitments do not remove the
need for out-of-sample validation.

## 6.4 Bayesian and sequential models

Bayesian models express uncertainty over states, parameters, hypotheses,
and future observations. State-space models, hidden Markov models, MDPs,
and POMDPs are natural for interaction because they distinguish latent
state, observation, action, transition, and belief. They become
predictive only after the transition and observation models are
estimated or constrained, and their validity depends on stationarity and
state sufficiency.

## 6.5 Machine learning

Machine learning expands predictive capacity through flexible
representation and regularized out-of-sample optimization. It is
appropriate for heterogeneous traces, nonlinear interactions, and
high-dimensional histories. It does not automatically provide causal
interpretation, transportability, or calibrated uncertainty. Strong
performance within a random split may conceal failure across users,
tasks, time, systems, or interventions.

## 6.6 Survival, reliability, and event-history models

Discovery, failure, recovery, and abandonment are naturally represented
as time-to-event or competing-risk problems. These models handle
censoring and changing hazards more appropriately than binary labels.
Recurrent-event and multi-state variants can represent repeated errors,
recovery cycles, and episode transitions.

# 7. Candidate Predictive Framework

Let an interaction episode be represented by the layered formal model
established previously. For participant x at time t, define the legally
available predictive information:

H_t = \<s_t, pi_t, O_t, Q_t, y_0:t, e_x, b_t, z_t, c_t\>

where s_t is system state; pi_t is projection; O_t is typed opportunity
structure; Q_t is authority and policy state; y_0:t is the recorded and
attributed trace up to the cutoff; e_x is measured experience; b_t is a
belief-state estimate where justified; z_t is a strategy hypothesis
distribution; and c_t is declared context.

For target Y at horizon h under prediction regime r, the predictor
produces:

p(Y\_{t+h} \| H_t, r, M, D)

where M identifies model assumptions and D identifies the training or
calibration evidence. Under an intervention a, the target becomes
p(Y\_{t+h} \| do(a), H_t, M, D). The two expressions must not be
substituted without identification assumptions.

The predictive framework contains six linked layers:

-   Target layer: target, unit, horizon, outcome definition, competing
    outcomes, and censoring.

-   Information layer: cutoff, observable variables, derived variables,
    latent estimates, and prohibited future information.

-   Model layer: predictor family, priors or regularization, update
    rule, and causal assumptions.

-   Uncertainty layer: aleatoric, epistemic, measurement,
    distributional, and structural uncertainty.

-   Evaluation layer: baselines, held-out design, calibration,
    discrimination, interval coverage, and utility.

-   Validity layer: population, task, projection, time, intervention,
    and monitoring conditions.

# 8. Causal Assumptions

Predictive accuracy does not establish a causal mechanism. Causal claims
require an explicit causal graph or structural model, temporal ordering,
intervention semantics, and assumptions concerning confounding,
selection, measurement, and interference. Four distinctions are
mandatory:

-   Prediction under observation versus prediction under intervention.

-   Individual treatment or intervention response versus average effect.

-   Mediation as a causal claim versus predictive feature contribution.

-   Transport across contexts versus ordinary cross-validation within
    one context.

The interaction domain intensifies interference: one participant\'s
action changes the state and opportunities of others; system adaptations
alter later observations; and predictive interventions may change the
target process. Static independent-and-identically-distributed
assumptions are therefore often inappropriate. Sequential causal models,
randomized interventions, natural experiments, or explicit policy
evaluation are required for intervention claims.

  -----------------------------------------------------------------------
  **Claim type**    **Target**        **Required        **Example**
                                      assumptions**     
  ----------------- ----------------- ----------------- -----------------
  Associational     Future outcome    Temporal          Will the current
  forecast          under the         ordering; stable  episode end in
                    observed regime.  conditional       abandonment?
                                      distribution.     

  Causal effect     Outcome           Identification,   Would adding a
                    distribution      consistency,      recovery
                    under an          exchangeability   signifier reduce
                    intervention.     or randomized     failure?
                                      design.           

  Policy value      Expected utility  Sequential        When should help
                    of an adaptive    ignorability or   be offered?
                    intervention      experimental      
                    policy.           policy data;      
                                      positivity.       

  Mechanism         Intermediate      Correct           Will belief
  prediction        states generated  structural        update precede
                    by a theory.      specification and selection?
                                      measurable        
                                      mediators.        

  Transported       Outcome in a new  Declared          Will a model
  prediction        population or     invariant         trained on GUI
                    projection.       mechanisms or     sessions work for
                                      reweighting       voice?
                                      assumptions.      
  -----------------------------------------------------------------------

# 9. Uncertainty and Prediction Limits

A prediction should be a distribution, interval, set, ranked list, or
hazard unless deterministic structure is independently established.
Point predictions conceal uncertainty and invite false precision. The
framework distinguishes:

-   Aleatoric uncertainty: irreducible variation conditional on the
    model and information set.

-   Epistemic uncertainty: uncertainty about parameters, functions, or
    hypotheses due to limited evidence.

-   Measurement uncertainty: error introduced by instruments,
    segmentation, coding, and construct operationalization.

-   State uncertainty: partial observability of current system, agent,
    or social state.

-   Structural uncertainty: uncertainty over causal structure, model
    family, or latent-state representation.

-   Distributional uncertainty: uncertainty caused by population, task,
    projection, policy, or temporal shift.

-   Reflexive uncertainty: change caused by revealing or acting on a
    prediction.

Conformal prediction can provide finite-sample marginal coverage under
exchangeability, but it does not solve conditional validity, causal
transport, or nonstationary sequential interaction. Bayesian credible
intervals depend on model and prior assumptions. Ensembles estimate some
forms of model uncertainty but do not guarantee coverage. Uncertainty
claims must therefore name the guarantee and its assumptions.

Fundamental limits arise from observational equivalence, hidden goals,
underdetermined strategies, partial observability, chaotic or highly
sensitive dynamics, changing policies, endogenous learning, rare
outcomes, insufficient support for interventions, and open-world
exogenous events. In such cases the scientifically correct prediction
may be a broad set, a ranked scenario distribution, or a declaration of
non-identifiability.

# 10. Target-Specific Analysis

## 10.1 Discovery

Discovery should be predicted as a time-to-first-event process relative
to an opportunity contract. Predictors may include exposure, signaling,
search path, prior experience, modality, task state, and prior failed
attempts. Unselected available actions cannot be labeled undiscovered
without an independent awareness measure. Competing events include
successful discovery, prompted discovery, alternate-path completion, and
abandonment.

## 10.2 Opportunity

System-relative feasible, permitted, enabled, and exposed sets are often
computable rather than statistically predicted when the model is
complete. Agent-relative believed actions and expected consequences
require probabilistic estimation. Predictions should distinguish changes
in actual opportunity from changes in belief or signaling.

## 10.3 Errors

Error prediction should define the normative or task criterion, error
opportunity, and exposure time. Rare-event evaluation requires
precision-recall, calibrated risk, and cost-sensitive metrics rather
than accuracy alone. Error labels must not collapse execution failure,
goal mismatch, policy denial, misunderstanding, and system fault.

## 10.4 Recovery

Recovery prediction is conditional on an initiating disruption and the
available recovery graph. Suitable targets include time to repair,
selected recovery path, probability of escalation, and residual
consequence. Believed reversibility and actual reversibility must remain
separate.

## 10.5 Abandonment

Abandonment is a censored event, not merely absence of completion.
Models should distinguish temporary pause, session termination, task
substitution, and permanent non-return. Survival models with
time-varying covariates are preferable when the hazard changes with
progress and friction.

## 10.6 Adaptation

Adaptation prediction concerns change in policy, belief, skill, or
performance as experience accumulates. Learning curves forecast
aggregate change but can conceal strategy shifts. Hierarchical
state-space models can represent individual variation and update online.

## 10.7 Expertise

Expertise is multidimensional and domain-relative. Prediction may
classify current skill or forecast performance under familiar tasks, but
long-term expertise development requires longitudinal exposure, practice
quality, feedback, motivation, and domain structure. Demographic
variables should not stand in for measured experience.

## 10.8 Transfer

Transfer prediction requires a source-target similarity contract and a
carrier hypothesis. Predictions should estimate positive, null, or
negative source effects and uncertainty. Ordinary similarity or source
performance alone is insufficient.

## 10.9 Strategy

Strategy is latent and typically non-identifiable from one trace.
Predictive inference should return a posterior over strategy hypotheses
or next-action distributions, test alternative models, and update when
contingencies reveal discriminating behavior. A model that predicts
actions well may still misidentify strategy.

# 11. Prediction Protocol

  -----------------------------------------------------------------------
  **Step**                            **Requirement**
  ----------------------------------- -----------------------------------
  1\. Declare target                  Define the outcome, unit, horizon,
                                      event time, censoring, and
                                      competing outcomes.

  2\. Freeze information cutoff       List every variable available at
                                      prediction time; prohibit
                                      future-derived features.

  3\. State use                       Separate scientific forecasting,
                                      diagnosis, causal intervention,
                                      control, and operational triage.

  4\. Specify population and context  Declare users or agents, task,
                                      projection, device, authority,
                                      environment, and time period.

  5\. Register baselines              Include prevalence, persistence,
                                      simple rules, human judgment, and
                                      established task models.

  6\. Select evaluation design        Use temporal, participant, task,
                                      projection, or deployment holdout
                                      appropriate to the intended claim.

  7\. Fit without leakage             Keep preprocessing, feature
                                      selection, imputation, and tuning
                                      within training folds.

  8\. Quantify uncertainty            Produce calibrated probabilities,
                                      intervals, sets, or hazards with
                                      named guarantees.

  9\. Evaluate multiple properties    Report discrimination, calibration,
                                      coverage, sharpness, utility,
                                      subgroup and context performance.

  10\. Test transport                 Evaluate across time, participants,
                                      tasks, projections, systems, and
                                      policies when those claims are
                                      intended.

  11\. Test interventions separately  Use experiments or identified
                                      causal models for claims about
                                      changing outcomes.

  12\. Monitor and update             Detect drift, recalibrate, revise
                                      the validity domain, and document
                                      model changes.

  13\. State failure conditions       Define minimum acceptable gain,
                                      calibration, coverage, and decision
                                      utility before use.

  14\. Preserve evidence lineage      Link each prediction to the
                                      interaction, behavior, and
                                      measurement contracts that
                                      generated its inputs.
  -----------------------------------------------------------------------

# 12. Evaluation and Falsification

A predictive theory of interaction should be rejected or narrowed if its
constructs provide no reproducible out-of-sample gain over simpler
baselines, if uncertainty is systematically miscalibrated, or if
performance collapses under the contexts included in its claimed
validity domain.

  ------------------------------------------------------------------------
  **Claim**                **Test**                **Falsifying or
                                                   narrowing evidence**
  ------------------------ ----------------------- -----------------------
  P1 Scoped predictability Declared interaction    Repeated external tests
                           targets can be          show no meaningful
                           predicted above         gain.
                           preregistered           
                           baselines.              

  P2 Typed advantage       Opportunity, trace,     Simpler state and
                           transfer, and strategy  history features match
                           variables improve       or outperform them.
                           target-specific         
                           predictions when        
                           relevant.               

  P3 Uncertainty validity  Prediction intervals or Persistent
                           probabilities are       undercoverage or
                           calibrated within       probability
                           declared scope.         miscalibration.

  P4 Transport             Specified invariant     Performance degrades
                           structures support      beyond tolerance under
                           prediction across       planned shifts.
                           declared contexts.      

  P5 Intervention          Observational and       Observed association
  separation               interventional          reliably equals
                           predictions differ      intervention effect
                           where confounding or    under tested
                           feedback exists.        conditions, narrowing
                                                   the distinction.

  P6                       Predictive ranking and  Across broad tests, the
  Prediction-explanation   mechanistic adequacy    best explanatory model
  distinction              can diverge.            always dominates
                                                   prediction, contrary to
                                                   current evidence.

  P7 Strategy uncertainty  Multiple strategies     Discriminating evidence
                           remain plausible under  reliably identifies one
                           observationally         strategy from the
                           equivalent traces.      available trace alone.

  P8 Updateability         Sequential updating     Static models remain
                           improves calibration    equally valid across
                           under learning and      declared
                           drift.                  nonstationarity.
  ------------------------------------------------------------------------

Evaluation must include out-of-sample prediction. In-sample fit,
significance, explained variance, and post hoc reconstruction do not
suffice. For probabilistic classification, report proper scoring rules
and calibration in addition to threshold metrics. For time-to-event
prediction, report time-dependent discrimination, calibration, and
censoring-aware scores. For sequences, report next-event and multi-step
performance with horizon-specific degradation. For decisions, report
expected utility and harm under the operational threshold.

# 13. Threats to Validity

-   Target leakage can enter through post-outcome fields, retrospective
    labels, or segmentation choices informed by the full trace.

-   Random train-test splits can overstate generalization when the
    intended use concerns new people, tasks, projections, or future
    periods.

-   Construct labels such as confusion, expertise, and strategy may be
    unreliable or circular.

-   Adaptive systems violate stationarity because predictions and
    interventions change later data.

-   Rare failures can produce misleading accuracy and unstable subgroup
    estimates.

-   Models may encode historical access, training, or policy
    inequalities and treat them as stable individual propensities.

-   Predictive success can invite unwarranted causal and psychological
    interpretation.

-   Closed-world simulations may omit exogenous events that dominate
    deployed interaction.

-   Aggregate calibration can coexist with severe conditional or
    subgroup miscalibration.

-   A benchmark can become part of the design process, causing
    overfitting to the evaluation regime.

# 14. Implications for Computational Interaction Science

Prediction provides a stronger test of the research program than
conceptual coherence alone. The established constructs should earn their
place by improving forecast quality, uncertainty, transport, or
intervention design relative to simpler state-and-trace models. Typed
opportunity variables should help predict discovery and invalid
attempts; transfer variables should improve target-context forecasts;
strategy distributions should improve contingent action prediction; and
formal interaction models should constrain impossible transitions and
support simulation.

Predictive success would not by itself establish an independent
discipline. Many fields develop predictive models of interaction. A
discipline-level claim would require cumulative laws or mechanisms,
stable validity domains, shared benchmarks, transportable models, and
explanatory or intervention gains that are not adequately supplied by
existing HCI, human factors, psychology, machine learning, control, or
systems theory.

The immediate empirical program should therefore prioritize
preregistered, multi-context forecasting studies with frozen contracts
and strong baselines. The decisive evidence is incremental, held-out
performance and calibration---not the apparent completeness of the
ontology.

# 15. Conclusion

Computational interaction supports predictive scientific theories, but
only in a scoped and plural sense. There is no evidence for universal
prediction of whole interactions or individual behavior. Strong
prediction is achievable for constrained motor and choice processes,
routine skilled performance, and near-term transitions when the task,
state, opportunity, and method are specified. Discovery, errors,
recovery, and abandonment are predictively tractable as probabilistic
event processes. Adaptation, expertise, transfer, and strategy can be
forecast only through richer longitudinal and latent-state models, and
their individual trajectories remain substantially uncertain.

The warranted contribution is a predictive architecture rather than a
new predictive primitive. It separates prediction from explanation and
intervention; defines target, horizon, information, uncertainty, and
validity; and requires held-out evaluation, calibration, transport
tests, and explicit failure conditions. Interaction becomes predictively
scientific when forecasts are reproducible, uncertainty-bearing, and
bounded by declared contracts. Where those conditions cannot be met, the
correct result is not a confident point estimate but a broad
distribution, an incomparable context, or a statement that the target is
not identified.

# Reusable Artifacts

## A. Prediction Contract

  -----------------------------------------------------------------------
  **Field**                           **Required declaration**
  ----------------------------------- -----------------------------------
  Identity                            Prediction identifier, version,
                                      date, owner, intended scientific or
                                      operational use.

  Target                              Outcome, unit, level, horizon,
                                      event definition, censoring,
                                      competing events.

  Information cutoff                  Timestamp or episode boundary
                                      beyond which no input may be used.

  Inputs                              Observed records, derived
                                      variables, latent estimates,
                                      provenance, measurement
                                      uncertainty.

  Interaction scope                   Participants, episode boundaries,
                                      system state, projection,
                                      opportunity, policy, context.

  Model                               Family, parameters, priors,
                                      regularization, training procedure,
                                      update rule.

  Causal status                       Associational, interventional,
                                      transported, mechanism-based, or
                                      policy-value claim.

  Prediction form                     Probability, distribution,
                                      interval, set, hazard, sequence,
                                      ranking, or scenario.

  Uncertainty                         Aleatoric, epistemic, measurement,
                                      state, structural, distributional,
                                      reflexive.

  Evaluation                          Baselines, holdout design, metrics,
                                      calibration, coverage, utility,
                                      subgroup tests.

  Validity domain                     Population, task, projection,
                                      modality, system, policy,
                                      environment, time.

  Transport conditions                Assumptions and evidence required
                                      for use outside the evaluation
                                      domain.

  Failure conditions                  Minimum gain, maximum error,
                                      calibration tolerance, abstention
                                      rule, stop-use conditions.

  Monitoring                          Drift tests, recalibration
                                      schedule, update triggers, audit
                                      trail.
  -----------------------------------------------------------------------

## B. Prediction Evidence Hierarchy

  -----------------------------------------------------------------------
  **Level**               **Evidence type**       **Meaning**
  ----------------------- ----------------------- -----------------------
  0                       Raw record              Timestamp, event
                                                  payload, sensor sample.

  1                       Verified observation    Quality-controlled
                                                  event or state
                                                  measurement.

  2                       Derived predictor       Latency, path length,
                                                  opportunity-set
                                                  difference.

  3                       Latent estimate         Belief, strategy
                                                  posterior, expertise
                                                  score.

  4                       In-sample association   Fit within data used to
                                                  construct the model.

  5                       Internal held-out       Performance on held-out
                          prediction              units from the same
                                                  regime.

  6                       Temporal or group       Prediction for future
                          generalization          periods or unseen
                                                  participants.

  7                       Cross-context transport Prediction across
                                                  tasks, projections,
                                                  devices, or systems.

  8                       Interventional          Forecast under a
                          prediction              deliberately changed
                                                  condition.

  9                       Replicated predictive   Independent
                          regularity              replications with
                                                  stable scope and
                                                  uncertainty.
  -----------------------------------------------------------------------

## C. Predictive Metric Registry

  ----------------------------------------------------------------------------
  **Target form**   **Metrics**        **Interpretation**   **Example**
  ----------------- ------------------ -------------------- ------------------
  Continuous        MAE/RMSE           Magnitude error;     Completion time,
  outcome                              RMSE emphasizes      search time.
                                       large errors.        

  Probabilistic     Log loss/Brier     Proper scoring of    Error or
  binary            score              probability          abandonment
                                       forecasts.           probability.

  Ranking           ROC-AUC/PR-AUC     Discrimination;      Risk ranking.
                                       PR-AUC preferred for 
                                       rare positives.      

  Calibration       Calibration        Agreement of         All probabilistic
                    slope/intercept,   probabilities and    targets.
                    ECE, reliability   frequencies.         
                    curve                                   

  Intervals/sets    Coverage and       Validity and         Time interval or
                    width/set size     sharpness.           action-set
                                                            prediction.

  Survival          C-index,           Censoring-aware      Discovery,
                    integrated Brier   event prediction.    recovery,
                    score, time                             abandonment.
                    calibration                             

  Sequence          Cross-entropy,     Next-event and       Action sequence.
                    edit distance,     trajectory           
                    horizon accuracy   prediction.          

  Decision          Expected utility,  Value under an       Adaptive help.
                    net benefit,       intervention         
                    regret             threshold or policy. 

  Transport         Performance delta  Stability across     GUI to voice;
                    and recalibration  declared domains.    novice to expert.
                    need                                    

  Abstention        Risk-coverage      Quality when model   High-uncertainty
                    curve              may decline to       episodes.
                                       predict.             
  ----------------------------------------------------------------------------

## D. Uncertainty Model

  -----------------------------------------------------------------------
  **Type**                **Definition**          **Required treatment**
  ----------------------- ----------------------- -----------------------
  Aleatoric               Outcome variability     Predictive
                          remaining under the     distribution;
                          information set.        irreducible risk.

  Epistemic               Limited evidence about  Posterior, ensemble,
                          model or parameters.    bootstrap; decreases
                                                  with relevant data.

  Measurement             Instrument, coding,     Propagate from
                          segmentation, construct measurement contract.
                          error.                  

  State                   Hidden or partially     Belief state or
                          observed current        filtering distribution.
                          conditions.             

  Structural              Competing models or     Model averaging or
                          causal graphs.          sensitivity analysis.

  Distributional          Shift in population,    Domain tests, drift
                          task, projection,       monitoring, robust
                          policy, or time.        sets.

  Reflexive               Prediction or           Policy-aware evaluation
                          intervention changes    and experimentation.
                          behavior.               
  -----------------------------------------------------------------------

## E. Prediction Protocol Checklist

1\. Declare target: Define the outcome, unit, horizon, event time,
censoring, and competing outcomes.

2\. Freeze information cutoff: List every variable available at
prediction time; prohibit future-derived features.

3\. State use: Separate scientific forecasting, diagnosis, causal
intervention, control, and operational triage.

4\. Specify population and context: Declare users or agents, task,
projection, device, authority, environment, and time period.

5\. Register baselines: Include prevalence, persistence, simple rules,
human judgment, and established task models.

6\. Select evaluation design: Use temporal, participant, task,
projection, or deployment holdout appropriate to the intended claim.

7\. Fit without leakage: Keep preprocessing, feature selection,
imputation, and tuning within training folds.

8\. Quantify uncertainty: Produce calibrated probabilities, intervals,
sets, or hazards with named guarantees.

9\. Evaluate multiple properties: Report discrimination, calibration,
coverage, sharpness, utility, subgroup and context performance.

10\. Test transport: Evaluate across time, participants, tasks,
projections, systems, and policies when those claims are intended.

11\. Test interventions separately: Use experiments or identified causal
models for claims about changing outcomes.

12\. Monitor and update: Detect drift, recalibrate, revise the validity
domain, and document model changes.

13\. State failure conditions: Define minimum acceptable gain,
calibration, coverage, and decision utility before use.

14\. Preserve evidence lineage: Link each prediction to the interaction,
behavior, and measurement contracts that generated its inputs.

## F. Open Problems

-   Predictive identification of strategies under observational
    equivalence.

-   Calibrated individual prediction under sparse, nonstationary
    histories.

-   Transport across projections that preserve semantics but alter
    opportunity and measurement.

-   Prediction under adaptive interfaces where the model changes the
    data-generating process.

-   Causal prediction of assistance, explanation, and recovery
    interventions.

-   Joint uncertainty propagation from raw records through latent
    constructs to outcomes.

-   Benchmarks that preserve interaction boundaries and prevent target
    leakage.

-   Evaluation of whether the program\'s typed constructs add
    out-of-domain predictive gain.

# References

Anderson, J. R. (2007). How Can the Human Mind Occur in the Physical
Universe? Oxford University Press.

Angelopoulos, A. N., & Bates, S. (2021). A Gentle Introduction to
Conformal Prediction and Distribution-Free Uncertainty Quantification.
arXiv:2107.07511.

Card, S. K., Moran, T. P., & Newell, A. (1983). The Psychology of
Human-Computer Interaction. Erlbaum.

Card, S. K. (1986). The Model Human Processor: A Model for Making
Engineering Calculations of Human Performance. Proceedings of the Human
Factors Society.

Fitts, P. M. (1954). The Information Capacity of the Human Motor System
in Controlling the Amplitude of Movement. Journal of Experimental
Psychology, 47(6), 381-391.

Hick, W. E. (1952). On the Rate of Gain of Information. Quarterly
Journal of Experimental Psychology, 4(1), 11-26.

Hyman, R. (1953). Stimulus Information as a Determinant of Reaction
Time. Journal of Experimental Psychology, 45(3), 188-196.

Jastrzembski, T. S., & Charness, N. (2007). The Model Human Processor
and the Older Adult: Parameter Estimation and Validation Within a Mobile
Phone Task. Journal of Experimental Psychology: Applied, 13(4), 224-248.

Kaelbling, L. P., Littman, M. L., & Cassandra, A. R. (1998). Planning
and Acting in Partially Observable Stochastic Domains. Artificial
Intelligence, 101, 99-134.

Lei, J., G\'Sell, M., Rinaldo, A., Tibshirani, R. J., & Wasserman, L.
(2018). Distribution-Free Predictive Inference for Regression. Journal
of the American Statistical Association, 113(523), 1094-1111.

Pearl, J. (2009). Causality: Models, Reasoning, and Inference (2nd ed.).
Cambridge University Press.

Pearl, J. (2012). The Do-Calculus Revisited. Proceedings of UAI.

Shmueli, G. (2010). To Explain or to Predict? Statistical Science,
25(3), 289-310.

Sutton, R. S., & Barto, A. G. (2018). Reinforcement Learning: An
Introduction (2nd ed.). MIT Press.

Yarkoni, T., & Westfall, J. (2017). Choosing Prediction Over Explanation
in Psychology: Lessons From Machine Learning. Perspectives on
Psychological Science, 12(6), 1100-1122.

Earlier papers in the Computational Interaction research program:
Interaction; Behavior; Measurement; Representation, Invariance, and
Projection; Opportunity, Affordance, and Action Availability;
Interaction Similarity; Interaction Transfer; Interaction Strategies;
Formal Models of Computational Interaction.
