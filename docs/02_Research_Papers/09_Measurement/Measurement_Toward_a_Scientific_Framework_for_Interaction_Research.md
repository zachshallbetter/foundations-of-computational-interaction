**Measurement**

*Toward a Scientific Framework for Interaction Research*

Foundational research paper

# Abstract

Computational interaction research measures events, traces, task
outcomes, subjective reports, system states, and inferred constructs
such as discoverability, confidence, workload, belief, strategy, and
opportunity. These are often treated as if they belonged to a single
evidential category. They do not. Measurement theory distinguishes an
empirical relational structure from its numerical representation;
psychometrics distinguishes observed responses from latent constructs
and requires validity evidence for score interpretation; metrology
requires an explicit measurand and uncertainty statement; experimental
psychology distinguishes manipulation, observation, and inference; HCI
evaluation makes performance context-dependent; and systems engineering
emphasizes traceability from requirements to evidence.

This paper concludes that existing measurement theories are sufficient
in principle, but computational interaction research requires a shared
measurement architecture that integrates them. The proposed architecture
defines a measurement claim as a contract among a declared construct,
unit and level of analysis, observation model, instrument, coding or
transformation rule, numerical scale, uncertainty model, validity
argument, and admissible interpretation. It separates direct
observations, derived variables, model-based estimates, and latent
inferences; forbids interpreting logging precision as construct
validity; and requires comparison claims to declare invariance, context,
population, task, projection, and tolerance conditions. The paper
supplies a measurement ontology, canonical metrics, evidence taxonomy,
experimental framework, construct cards, uncertainty budgets,
comparability tests, and falsification criteria.

# 1. Problem Statement

Interaction research routinely reports time, success, error, clicks,
paths, ratings, physiological signals, and model predictions. The
apparent precision of these quantities can obscure a prior question:
what exactly has been measured? A timestamp is directly recorded;
hesitation is inferred. A control was displayed; discoverability was not
thereby measured. An action was executed; intention, understanding,
confidence, or strategy were not directly observed. A task was
completed; equal access, equal opportunity, and equivalent interaction
were not established.

The central problem is therefore not a shortage of metrics. It is the
absence of a common framework that connects theoretical constructs to
observations without collapsing observation, transformation, inference,
and interpretation. Computational interaction research requires a
measurement theory that is implementation-independent, explicit about
uncertainty, and compatible with system variables, behavioral traces,
subjective reports, and latent constructs.

# 2. Literature Review Method

The review used a concept-centered synthesis across measurement theory,
psychometrics, metrology, statistics, experimental psychology, HCI
evaluation, human factors, information theory, and systems engineering.
Foundational and primary sources were prioritized: representational
measurement theory for numerical representation and scale admissibility;
Cronbach and Meehl for construct validity; Messick for validity as an
argument about score meaning and use; the Guide to the Expression of
Uncertainty in Measurement and NIST guidance for measurands and
uncertainty; ISO 9241-11 for context-dependent usability; classical
reliability and generalizability theory; signal detection theory; causal
inference; and established HCI measures.

The synthesis was constrained by four tests. First, no new construct was
retained when an established measurement concept already sufficed.
Second, every proposed measurement category had to support
operationalization and falsification. Third, direct observations were
separated from derived and latent quantities. Fourth, comparison claims
were required to state the transformations and scope under which scores
remain interpretable.

# 3. What Measurement Is

Measurement is not merely assigning a number. In representational
measurement theory, numerical assignments are justified when the
numerical structure preserves relevant relations in an empirical
structure, and the permissible transformations of the scale determine
which comparisons and statistics remain meaningful. This yields two
central requirements: representation and uniqueness. A measure must
preserve declared empirical relations, and its interpretation must
respect the scale transformations under which that representation
remains valid.

Metrology adds the measurand: the quantity intended to be measured. A
result is incomplete without specification of the measurand, method,
conditions, and uncertainty. Psychometrics adds a further constraint:
many interaction constructs are not directly observable. Scores are
evidence-bearing observations whose interpretation as measures of a
construct requires a nomological and empirical argument.

For computational interaction, measurement is therefore defined as:

A rule-governed process that maps observations of a declared interaction
phenomenon into a representational structure, together with an
uncertainty statement and a validity argument specifying which
interpretations and comparisons are warranted.

This definition distinguishes measurement from logging, counting,
classification, estimation, and explanation. Logs may supply
observations. Counts may summarize observations. Classifiers may derive
labels. Models may estimate latent variables. None of these alone
establishes that the resulting value measures the intended construct.

# 4. Measurement Ontology

The minimum ontology contains the following entities and relations.

Construct: a theoretical property, relation, process, or outcome to be
investigated.\
Measurand: the specific quantity or attribute intended to be measured in
a declared case.\
Unit of analysis: the entity or aggregate to which the measurement is
attributed, such as event, action, episode, participant, dyad, system,
task, session, or population.\
Level of analysis: the temporal, organizational, representational, or
social level at which the claim is made.\
Observation: a recorded state, event, signal, report, or trace element
obtained through a declared observation process.\
Instrument: the mechanism that produces or records observations,
including logger, sensor, questionnaire, protocol, annotator, or system
model.\
Operationalization: the rule connecting a construct to observable
indicators and transformations.\
Indicator: an observable or derived variable used as evidence about a
construct.\
Score: a numerical or categorical representation produced by the
measurement procedure.\
Scale: the mathematical structure and permissible transformations
governing the score.\
Estimator: a procedure that infers an unknown quantity from
observations.\
Uncertainty: quantified incompleteness of knowledge about the measurand
or score interpretation.\
Validity argument: the evidence and reasoning supporting an intended
interpretation and use.\
Reliability: consistency of scores under declared replications, not
truth or validity.\
Comparison scope: the population, task, context, projection, and
tolerance under which scores may be compared.\
Decision rule: a threshold or mapping from measurements to
classifications or actions.\
Evidence record: a traceable package containing observations,
transformations, assumptions, and uncertainty.

The core relation is not construct -\> metric. It is:

Construct -\> operationalization -\> observation process -\>
observations -\> transformation or estimator -\> score -\>
interpretation.

Validity and uncertainty apply across this chain, not only to the final
score.

# 5. Observable, Derived, and Latent Variables

Interaction measurements should be classified by epistemic status.

Directly recorded variables are produced by a declared instrument with
minimal semantic transformation: timestamps, event identifiers, system
states, command invocations, pointer coordinates, sensor values, text
responses, and explicit ratings. They remain instrument- and
boundary-dependent.

Coded observations apply a rule to raw records: error type, action
category, recovery event, strategy segment, or successful transition.
Coding introduces a model and may require inter-rater or algorithmic
reliability.

Derived variables are deterministic or explicitly statistical
transformations of observations: duration, path length, transition
count, error rate, entropy, precision, recall, edit distance, or
proportion successful. Derivation does not by itself validate the
construct interpretation.

Model-based estimates are quantities inferred under a probabilistic or
computational model: latent state, posterior belief, workload estimate,
policy parameter, hazard, random effect, or predicted success
probability. Their meaning depends on model assumptions,
identifiability, calibration, and fit.

Latent constructs are theoretical variables not directly observed:
confidence, understanding, intention, trust, discoverability, cognitive
workload, strategy, perceived opportunity, or expertise. They require
multiple indicators, experimental interventions, convergent and
discriminant evidence, or a validated measurement model. A single
behavioral event cannot ordinarily identify a latent construct.

Interpretive conclusions are claims about mechanisms or causes. They are
not measurements, even when based on measured variables.

# 6. Construct Validity

Construct validity is the central problem for interaction measurement
because many target constructs are indirect. Cronbach and Meehl require
a network of theoretical relations connecting the construct to
observations and other constructs. Messick further treats validity as an
integrated argument about score meaning and use, rather than a property
possessed by an instrument in isolation.

A defensible interaction measurement should address:

Content relevance: indicators sample the intended construct rather than
a convenient proxy.\
Structural validity: the scoring or latent-variable structure matches
the proposed construct structure.\
Convergent evidence: different methods intended to measure the same
construct show the expected relationship.\
Discriminant evidence: the measure is separable from adjacent
constructs.\
Criterion relations: scores relate to external outcomes as theory
predicts.\
Known-groups or intervention evidence: manipulations expected to change
the construct change the score, while controls do not.\
Process evidence: the observation-generating process matches the
proposed interpretation.\
Generalization: score meaning remains stable across relevant
populations, tasks, contexts, and projections.\
Consequential validity: intended uses and foreseeable misuses are
evaluated where scores guide decisions.

No single correlation establishes validity. Validation is cumulative and
claim-specific. A measure may be valid for comparing discovery time
within one task yet invalid for ranking general interface quality.

# 7. Reliability, Reproducibility, and Generalizability

Reliability concerns consistency under repeated measurement conditions.
It may include temporal stability, internal consistency, inter-rater
agreement, inter-instrument agreement, or repeated-trial consistency.
High reliability is necessary for many comparisons but is not sufficient
for validity; a logger can record the wrong event with perfect
consistency.

Reproducibility requires sufficient specification for independent
researchers to implement the measurement process and obtain results
consistent within declared uncertainty. Computational interaction
studies should preserve event schemas, clocks, task definitions,
exclusions, preprocessing, coding manuals, estimator specifications,
software versions, and analysis decisions.

Generalizability concerns variation across persons, tasks, items,
systems, contexts, and occasions. A score is not automatically an
attribute of a person or interface. Many HCI measures are relational
properties of users, goals, systems, and contexts. Generalizability
theory and multilevel models are therefore more appropriate than
treating all variance outside the focal factor as undifferentiated
error.

A measurement report should state the intended universe of
generalization and identify which facets were sampled, fixed,
randomized, or omitted.

# 8. Uncertainty

Uncertainty in interaction research has several sources.

Instrument uncertainty includes clock resolution, event loss, sensor
error, sampling jitter, synchronization drift, and annotation interface
constraints.

Operational uncertainty arises from ambiguous event boundaries, task
completion rules, segmentation, and competing operational definitions.

Sampling uncertainty concerns persons, tasks, items, sessions, and
contexts.

Model uncertainty concerns functional form, priors, unobserved
confounding, missing data, identifiability, and estimator choice.

Construct uncertainty concerns whether the indicators support the
intended latent interpretation.

Context uncertainty concerns whether measurements transfer across
projections, devices, languages, cultures, expertise levels, and
environments.

Decision uncertainty concerns thresholds and the consequences of false
classifications.

An uncertainty budget should list each source, its treatment, and
whether it is quantified, bounded, sensitivity-tested, or unresolved.
Confidence intervals alone do not cover model, construct, or scope
uncertainty.

# 9. Canonical Metric Families

No universal scalar interaction metric is supported. The literature
instead supports typed metric families.

Temporal metrics: latency, duration, inter-event interval, dwell,
recovery time, learning rate, and time-to-discovery.

Outcome metrics: task success, transition success, goal attainment,
partial completion, quality, safety, and persistence of effects.

Error metrics: error count, error probability, severity, detectability,
correction rate, escalation, and residual harm.

Path and sequence metrics: action count, path length, edit distance,
state coverage, branching, backtracking, sequence entropy, and
conformance to a declared model.

Opportunity metrics: precision and recall of believed actions against
executable actions, discovery probability, exposure coverage, signaling
calibration, reachable-outcome coverage, and recovery visibility.

Information metrics: entropy, mutual information, uncertainty reduction,
channel capacity, and coding cost, only when the random variables and
probabilistic assumptions are defined. Shannon information does not
measure meaning, understanding, or usefulness by itself.

Resource metrics: physical effort, attentional demand, memory demand,
computational cost, energy, bandwidth, and coordination load.

Subjective measures: perceived workload, confidence, trust,
satisfaction, risk, usability, and perceived reversibility. These are
reports under a measurement model, not transparent readings of internal
state.

Comparative metrics: effect size, equivalence bounds, calibration
difference, distributional distance, and invariance tests.

Each metric must be tied to a construct card. Metrics should not be
combined into an index unless the aggregation rule and trade-offs are
theoretically justified.

# 10. Measurement Contracts

Every reported interaction measure should be accompanied by a
measurement contract containing:

1\. Construct and intended interpretation.\
2. Measurand and unit of analysis.\
3. Scope conditions: population, task, system, projection, context, and
time.\
4. Observation model and instrument.\
5. Event, state, and boundary definitions.\
6. Operationalization and indicators.\
7. Transformation, coding, or estimator.\
8. Scale type and permissible operations.\
9. Missingness, exclusions, and preprocessing.\
10. Reliability evidence.\
11. Validity evidence.\
12. Uncertainty budget.\
13. Comparison and invariance assumptions.\
14. Failure conditions and prohibited interpretations.\
15. Reproducibility artifacts.

This contract is the minimum reusable unit of measurement specification.
It makes the evidential chain inspectable and supports later
interaction-similarity and comparative-interaction research.

# 11. Comparability and Measurement Invariance

Two scores are comparable only when they preserve an intended
interpretation across the cases being compared. Numerical equality is
insufficient. The same completion time can arise from different task
boundaries, clocks, path constraints, or strategies. The same
questionnaire total can have different factor structures or response
meanings across populations.

Comparability requires at least:

Construct identity: the same construct interpretation is intended.\
Operational correspondence: indicators and coding rules have equivalent
roles.\
Scale compatibility: permissible transformations and units are aligned.\
Measurement invariance: item or indicator relations remain stable where
latent scores are compared.\
Context declaration: task, goals, authority, projection, and environment
are controlled or modeled.\
Sampling alignment: populations and units are comparable or adjusted.\
Uncertainty compatibility: uncertainty is reported on commensurate
terms.\
Tolerance: equivalence is defined by a prespecified practically
meaningful bound.

When these conditions fail, the correct result is typed
non-comparability, not forced normalization.

# 12. Experimental Framework

The recommended experimental framework separates construct,
intervention, measurement, and inference.

Phase 1 - Theory and construct specification. Define the construct,
competing explanations, unit and level of analysis, and causal role.

Phase 2 - Measurement design. Create construct cards, select indicators,
define events and boundaries, specify instruments, and preregister
uncertainty and exclusion rules.

Phase 3 - Manipulation and comparison design. Specify treatment,
control, manipulation checks, nuisance variables, and minimum meaningful
effects or equivalence bounds.

Phase 4 - Data generation. Record raw observations with provenance,
synchronized clocks, immutable event identifiers, and declared
missingness.

Phase 5 - Transformation and coding. Apply versioned rules; preserve
raw-to-derived traceability; assess rater or algorithmic agreement.

Phase 6 - Estimation. Fit models appropriate to nesting, repeated
measures, censoring, measurement error, and uncertainty. Avoid treating
participant or task variance as independent observations.

Phase 7 - Validation. Test convergent, discriminant, structural,
intervention, criterion, and generalization evidence.

Phase 8 - Sensitivity and falsification. Test alternative
operationalizations, priors, exclusions, model forms, and rival
mechanisms.

Phase 9 - Reporting. Publish the measurement contract, uncertainty
budget, analysis specification, and prohibited interpretations.

# 13. Evidence Taxonomy

Evidence should be reported by level.

Level 0 - Raw record: minimally processed event, signal, state, or
report.\
Level 1 - Verified observation: record checked for provenance,
integrity, timing, and instrument behavior.\
Level 2 - Coded observation: category assigned under a documented rule.\
Level 3 - Derived measure: deterministic or statistical summary of
observations.\
Level 4 - Model estimate: parameter, posterior, or latent score inferred
under a declared model.\
Level 5 - Construct evidence: multiple measures support an
interpretation of a theoretical construct.\
Level 6 - Mechanism evidence: interventions, temporal ordering, and
rival tests support a generating process.\
Level 7 - Generalized claim: evidence supports transfer across declared
populations, tasks, systems, or projections.

Higher levels depend on lower levels but do not become direct
observations. A mechanism claim should remain labeled as inference even
when strongly supported.

# 14. Falsification Tests

The framework should be narrowed or rejected if the following occur.

Measurement redundancy: established measurement theory can already
express every requirement without any interaction-specific coordination
artifact. In that case only a domain checklist, not a new framework, is
warranted.

Non-operational constructs: central interaction constructs cannot be
connected to observable indicators with discriminant validity.

No incremental validity: specialized opportunity, projection, or
interaction metrics fail to explain or predict outcomes beyond ordinary
task, system, and participant variables.

Invariance failure: measures change interpretation across projections,
populations, or tasks despite apparent numerical comparability.

Observer dependence without calibration: event boundaries and coding
cannot achieve reproducible agreement.

Uncertainty dominance: measurement and model uncertainty exceed the
effects under investigation.

Causal ambiguity: proposed mechanisms remain indistinguishable from
simpler rival explanations under intervention.

Metric instability: conclusions reverse under equally defensible
operationalizations or preprocessing choices.

The framework survives only if it improves traceability, construct
validity, and comparative inference relative to untyped metric
reporting.

# 15. Threats to Validity

The synthesis risks over-formalizing phenomena that are situated,
socially negotiated, or emergent. Not every meaningful interaction
property is naturally scalar. Qualitative observations may provide
stronger construct evidence than forced quantification.

Measurement contracts can create procedural compliance without genuine
validity. Explicit fields do not substitute for theory or empirical
validation.

The framework inherits disputes within measurement theory, including
whether all measurement requires numerical structural representation and
how causal accounts of measurement relate to representational accounts.

HCI constructs often depend on context of use. Generalization across
tasks, cultures, languages, accessibility conditions, and expertise may
be limited. Measurement invariance may fail for theoretically meaningful
reasons rather than instrument defects.

Instrumentation can change the phenomenon being measured through
reactivity, latency, logging overhead, surveillance effects, or task
restructuring.

Finally, evidence quality is not reducible to a linear hierarchy.
Different questions require different forms of evidence; the taxonomy
records dependency and inferential distance, not universal superiority.

# 16. Implications for Interaction Research

The measurement framework completes the transition from conceptual
ontology to empirical research. Prior work distinguishes ontology,
semantics, representation, interpretation, opportunity, interaction, and
behavior. Measurement adds the rules by which claims about these
constructs can be connected to evidence without collapsing them.

For representation research, it requires typed equivalence tests and
invariance conditions. For opportunity research, it separates
executable, exposed, signaled, believed, selected, and successful
actions into different measurands. For behavior research, it converts
traces into evidence through declared segmentation and coding. For
interaction comparison, it supplies equivalence bounds and comparability
tests. For prediction, it separates measurement quality from model
performance.

The central implication is that computational interaction research
should stop treating metric labels as self-interpreting. Time, error,
success, workload, trust, discoverability, and usability are valid only
through explicit measurement contracts.

# 17. Conclusion

Existing measurement theory, psychometrics, metrology, statistics,
experimental psychology, HCI evaluation, and systems engineering are
sufficient to explain how interaction phenomena can be measured. No new
foundational theory of measurement is required.

A domain-specific synthesis is nevertheless necessary because
interaction research combines system events, behavioral traces,
subjective reports, relational constructs, and latent interpretations in
ways that invite category errors. The warranted contribution is a shared
measurement architecture, not a new measurement primitive.

The primary conclusion is:

Interaction phenomena should be measured through explicit contracts
linking constructs to observation processes, transformations,
uncertainty, validity evidence, and comparison scope. Observations,
derived metrics, latent estimates, and explanatory conclusions must
remain typed and traceable throughout the evidential chain.

# 18. Reusable Artifacts

## A. Measurement Ontology

  -----------------------------------------------------------------------
  Entity                  Definition              Role
  ----------------------- ----------------------- -----------------------
  Construct               The theoretical         Theory
                          property, relation,     
                          process, or outcome     
                          under investigation.    

  Measurand               The specific quantity   Specification
                          intended to be measured 
                          in a declared case.     

  Observation             Recorded event, state,  Empirical
                          signal, or report.      

  Instrument              Mechanism producing or  Method
                          recording observations. 

  Indicator               Observable or derived   Operationalization
                          evidence linked to a    
                          construct.              

  Score                   Representational output Representation
                          of a measurement        
                          procedure.              

  Estimator               Rule for inferring an   Model
                          unknown quantity from   
                          observations.           

  Uncertainty             Incomplete knowledge    Epistemic
                          about measurand or      
                          interpretation.         

  Validity argument       Evidence supporting an  Inference
                          intended score          
                          interpretation and use. 

  Comparison scope        Conditions under which  Boundary
                          values may be compared. 
  -----------------------------------------------------------------------

## B. Canonical Metric Registry

  -----------------------------------------------------------------------------
  Construct family  Candidate metrics    Required controls    Prohibited
                                                              inference
  ----------------- -------------------- -------------------- -----------------
  Discovery         Unaided discovery    Exposure/signaling   Visibility alone
                    probability;         held or modeled;     is not discovery
                    time-to-discovery;   prior knowledge      
                    prompt level         measured             

  Believed action   Precision/recall     Judgment elicited    Attempts alone do
  set               against executable   before feedback;     not identify
                    action set;          executable set       belief
                    confidence           independently        
                    calibration          verified             

  Behavioral path   Transition count;    Common state/action  Shorter is not
                    path cost; entropy;  ontology and         universally
                    backtracking;        segmentation         better
                    conformance                               

  Recovery          Detection time;      Error severity and   Undo availability
                    repair initiation;   actual recovery      is not perceived
                    successful recovery; graph declared       reversibility
                    residual effect                           

  Performance       Effectiveness,       Users, goals,        Task completion
                    efficiency, quality, context, and success is not general
                    safety               criteria declared    usability

  Subjective state  Rating scale or      Response process and Report is
                    latent score with    invariance tested    evidence, not
                    reliability and                           transparent
                    validity evidence                         internal state

  Representation    Equivalence bounds;  Semantic target and  Informational
  comparison        effect sizes;        task held constant   equivalence does
                    distributional                            not imply
                    distance                                  behavioral
                                                              equivalence
  -----------------------------------------------------------------------------

## C. Evidence Taxonomy

  ------------------------------------------------------------------------------------------
  Level             Meaning                     Example            Minimum requirement
  ----------------- --------------------------- ------------------ -------------------------
  0 Raw record      Event, signal, state,       Logger packet;     Provenance and integrity
                    report                      audio sample       

  1 Verified        Validated record            Synchronized event Instrument behavior
  observation                                   timestamp          checked

  2 Coded           Rule-applied category       Error type; action Coding reliability
  observation                                   class              

  3 Derived measure Deterministic/statistical   Duration; success  Derivation traceable
                    summary                     rate               

  4 Model estimate  Quantity inferred under     Latent workload;   Fit, identifiability,
                    model                       hazard             calibration

  5 Construct       Multiple indicators support Discoverability    Convergent/discriminant
  evidence          construct                   evidence           validity

  6 Mechanism       Intervention supports       Signaling changes  Rival explanations tested
  evidence          process                     discovery via      
                                                belief             

  7 Generalized     Claim extends across scope  Cross-projection   Sampling and invariance
  claim                                         invariance         evidence
  ------------------------------------------------------------------------------------------

## D. Construct Card

-   Construct name and definition

-   Adjacent constructs and discriminant boundary

-   Causal or explanatory role

-   Unit and level of analysis

-   Candidate indicators

-   Expected convergent and discriminant relations

-   Manipulations expected to change the construct

-   Conditions expected not to change it

-   Known confounds

-   Permitted interpretations

-   Prohibited interpretations

-   Falsification conditions

## E. Measurement Contract

1.  Construct and intended interpretation

2.  Measurand

3.  Unit and level of analysis

4.  Population, task, system, projection, context, and time scope

5.  Observation model and instrument

6.  Event, state, and boundary definitions

7.  Operationalization and indicators

8.  Transformation, coding, or estimator

9.  Scale type and permissible operations

10. Missingness, exclusions, and preprocessing

11. Reliability evidence

12. Validity evidence

13. Uncertainty budget

14. Comparison and invariance assumptions

15. Failure conditions and prohibited interpretations

16. Reproducibility artifacts

## F. Uncertainty Budget Template

  ------------------------------------------------------------------------------------------
  Source                  Mechanism      Direction/magnitude   Treatment      Residual risk
  ----------------------- -------------- --------------------- -------------- --------------
  Instrument                                                                  

  Clock/synchronization                                                       

  Boundary/segmentation                                                       

  Coding                                                                      

  Sampling                                                                    

  Missingness                                                                 

  Model form                                                                  

  Construct                                                                   
  interpretation                                                              

  Context transfer                                                            

  Decision threshold                                                          
  ------------------------------------------------------------------------------------------

## G. Experimental Protocol

1\. Define construct, rival explanations, unit, and level.

2\. Create construct card and measurement contract.

3\. Specify treatment, control, manipulation check, nuisance variables,
and equivalence bounds.

4\. Capture raw observations with provenance and synchronized timing.

5\. Apply versioned coding and transformation rules.

6\. Estimate with models appropriate to nesting, censoring, and
measurement error.

7\. Validate score interpretation using multiple evidence sources.

8\. Run sensitivity, invariance, and falsification analyses.

9\. Report uncertainty, scope, prohibited interpretations, and
reproducibility artifacts.

# 19. References

Stevens, S. S. (1946). On the theory of scales of measurement. Science,
103(2684), 677-680.

Suppes, P., & Zinnes, J. L. (1963). Basic measurement theory. In
Handbook of Mathematical Psychology, Vol. 1.

Krantz, D. H., Luce, R. D., Suppes, P., & Tversky, A. (1971).
Foundations of Measurement, Volume I. Academic Press.

Cronbach, L. J., & Meehl, P. E. (1955). Construct validity in
psychological tests. Psychological Bulletin, 52(4), 281-302.

Messick, S. (1995). Validity of psychological assessment. American
Psychologist, 50(9), 741-749.

Campbell, D. T., & Fiske, D. W. (1959). Convergent and discriminant
validation by the multitrait-multimethod matrix. Psychological Bulletin,
56(2), 81-105.

Lord, F. M., & Novick, M. R. (1968). Statistical Theories of Mental Test
Scores. Addison-Wesley.

Brennan, R. L. (2001). Generalizability Theory. Springer.

JCGM. (2008). Evaluation of measurement data - Guide to the expression
of uncertainty in measurement.

Taylor, B. N., & Kuyatt, C. E. (1994). Guidelines for Evaluating and
Expressing the Uncertainty of NIST Measurement Results. NIST Technical
Note 1297.

ISO 9241-11:2018. Ergonomics of human-system interaction - Part 11:
Usability: Definitions and concepts.

Macmillan, N. A., & Creelman, C. D. (2005). Detection Theory: A User\'s
Guide. Lawrence Erlbaum.

Cook, T. D., & Campbell, D. T. (1979). Quasi-Experimentation. Houghton
Mifflin.

Shannon, C. E. (1948). A mathematical theory of communication. Bell
System Technical Journal, 27, 379-423, 623-656.

Card, S. K., Moran, T. P., & Newell, A. (1983). The Psychology of
Human-Computer Interaction. Erlbaum.

Brooke, J. (1996). SUS: A quick and dirty usability scale. In Usability
Evaluation in Industry.

Hart, S. G., & Staveland, L. E. (1988). Development of NASA-TLX. In
Human Mental Workload.

Sauro, J., & Lewis, J. R. (2016). Quantifying the User Experience.
Morgan Kaufmann.

Wobbrock, J. O., Findlater, L., Gergle, D., & Higgins, J. J. (2011). The
aligned rank transform for nonparametric factorial analyses. CHI 2011.

Open Science Collaboration. (2015). Estimating the reproducibility of
psychological science. Science, 349(6251).
