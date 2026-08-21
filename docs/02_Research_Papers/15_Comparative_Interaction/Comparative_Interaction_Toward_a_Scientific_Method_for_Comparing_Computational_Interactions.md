**Comparative Interaction**

*Toward a Scientific Method for Comparing Computational Interactions*

Formal research paper

# Abstract

Comparisons of computational interactions are commonly reduced to task
time, error rate, preference, usability scores, feature counts, or
interface-level judgments. Such comparisons are scientifically
incomplete because they often fail to establish that the interactions
share a target, task, population, boundary, observation model, or
admissible comparison relation. They also collapse distinct dimensions -
semantics, interaction structure, opportunity, behavior, strategy,
accessibility, discoverability, recovery, cost, learning, and
measurement quality - into a single ranking.

This paper develops a cross-disciplinary method for comparing
computational interactions independently of implementation. It
integrates formal equivalence, process conformance, measurement theory,
human factors, accessibility, multi-criteria analysis, and the preceding
interaction-research framework. The central result is a gate-and-profile
architecture. A comparison must first pass admissibility gates
establishing declared targets, correspondence mappings, scope
conditions, measurement comparability, and uncertainty. It then produces
a typed comparison profile rather than an unqualified score. Aggregation
is permitted only when a decision purpose, weighting rule, compensation
assumptions, uncertainty treatment, and stakeholder authority are
declared.

The paper concludes that computational interactions can be compared
scientifically, but not by a universal metric. Scientific comparison
requires a comparison contract, typed evidence, dimension-specific
measures, explicit invariants, and rules for equivalence, dominance,
trade-off, and incomparability. The reusable artifacts are a comparison
ontology, taxonomy, contract, protocol, evaluation framework, scorecard,
admissible-comparison rules, and falsification matrix.

# 1. Problem Statement

A computational interaction is not identical to its implementation,
interface, trace, outcome, or user judgment. The same computational
target may be projected through a graphical interface, command language,
API, conversational system, or assistive modality. These projections may
preserve operation semantics while changing exposed actions, signaling,
path length, error recovery, auditability, motor demands, learning
requirements, and strategy.

A scientific comparison must therefore answer two questions in order.
First: are the candidate interactions comparable under a declared frame?
Second: on which dimensions are they equivalent, different, better,
worse, or incomparable? Most evaluation practice begins with the second
question and leaves the first implicit.

The primary contribution of this paper is a method that separates
comparison admissibility from comparative judgment. The method prevents
three recurring errors: comparing unlike targets as though they were
variants of one interaction; treating a metric as a complete construct;
and converting multidimensional differences into a total ranking without
an explicit decision model.

# 2. Foundations Inherited from the Research Program

The method inherits six constraints. Representation theory establishes
that a projection selectively preserves, transforms, omits, and
introduces properties. Opportunity theory separates possible, permitted,
reachable, exposed, signaled, believed, selected, executed, successful,
and reversible action relations. Interaction theory requires declared
participants, boundaries, coupling, timescale, events, transitions, and
completion. Behavior theory treats traces as evidence generated under an
observation model rather than as transparent behavior. Measurement
theory requires a declared measurand, operationalization, scale,
uncertainty, validity domain, and permissible interpretation.
Interaction-similarity theory distinguishes token identity, type
identity, typed equivalence, graded similarity, and incomparability.

These constraints jointly imply that comparison is not a single function
applied to two interfaces. It is an argument supported by mappings,
measurements, and scope conditions.

# 3. Literature Foundations

## 3.1 Formal equivalence and conformance

Formal methods compare systems relative to observables and abstraction
rules. Trace equivalence, simulation, bisimulation, testing equivalence,
refinement, and observational equivalence preserve different properties.
Process mining similarly separates fitness, precision, generalization,
and simplicity when comparing event logs and process models.
Alignment-based conformance identifies correspondences and deviations
rather than assuming event-token identity. These traditions support a
central rule: comparison relations must be typed before they are
computed.

Conformance is not the same as superiority. A trace may conform closely
to a model while imposing high human cost; a model may permit desired
behavior while also permitting unsafe or irrelevant behavior. Formal
relations therefore constrain comparison but do not exhaust it.

## 3.2 Measurement and context of use

Measurement theory requires stable representational relations,
permissible transformations, and uncertainty statements. Metrological
traceability concerns the documented chain linking results to
references. In interaction research, the relevant chain links records to
detected events, attributed behavior, derived variables, constructs, and
claims.

ISO 9241-11 defines usability relative to specified users, goals, and
contexts of use, with effectiveness, efficiency, and satisfaction as
outcomes. This supports context-indexed comparison rather than universal
interface quality. A result for one population, task, device, or
environment does not automatically transport to another.

## 3.3 Accessibility and non-compensatory requirements

Accessibility standards show why some dimensions cannot be averaged
away. WCAG separates perceivability, operability, understandability, and
robustness into testable success criteria. Failure of keyboard access or
text alternatives cannot be scientifically neutralized by faster
performance for another population. Accessibility therefore motivates
threshold, veto, and subgroup-preservation rules rather than purely
compensatory scoring.

## 3.4 Multi-criteria decision analysis

Multi-criteria decision analysis distinguishes description from
preference aggregation. Weighted sums assume commensurability and
compensation: a deficit on one criterion can be offset by strength on
another. Outranking methods permit partial orders and incomparability
when evidence, thresholds, or stakeholder priorities do not justify a
total ranking. Comparative interaction should adopt this discipline. A
scientific profile describes differences; a decision model may rank
alternatives, but the ranking is conditional on declared values and
constraints.

# 4. Comparison Ontology

  -----------------------------------------------------------------------
  **Concept**                         **Definition**
  ----------------------------------- -----------------------------------
  Comparison object                   The interaction token, type,
                                      projection, trace distribution,
                                      opportunity profile, strategy, or
                                      system pair being compared.

  Reference frame                     The declared target, task,
                                      population, context, boundary,
                                      timescale, and observation model.

  Correspondence mapping              A mapping between entities, states,
                                      operations, events, outcomes, or
                                      measurements across candidates.

  Invariant                           A property required to remain
                                      unchanged for the comparison claim.

  Dimension                           A typed aspect of comparison such
                                      as semantic, structural,
                                      opportunity, behavioral,
                                      accessibility, or cost.

  Measure                             An operational rule producing
                                      evidence about a dimension.

  Tolerance                           A declared interval or threshold
                                      within which differences count as
                                      equivalent or acceptable.

  Uncertainty                         Incomplete knowledge attached to
                                      records, mappings, estimates, model
                                      assumptions, or transport.

  Admissible transformation           A change allowed without
                                      invalidating the comparison, such
                                      as renaming, modality substitution,
                                      or temporal rescaling.

  Veto condition                      A non-compensatory failure that
                                      blocks equivalence, dominance, or
                                      deployment under the declared
                                      purpose.

  Comparison result                   A typed relation: identical,
                                      equivalent, similar, dominant,
                                      trade-off, or incomparable.

  Decision rule                       An optional value-laden rule for
                                      ranking or selecting candidates
                                      from the scientific profile.
  -----------------------------------------------------------------------

# 5. Interaction Comparison Taxonomy

  -----------------------------------------------------------------------
  **Dimension**           **Comparison question** **Primary evidence**
  ----------------------- ----------------------- -----------------------
  Semantic preservation   Whether operations,     Formal specification,
                          state meanings,         model mapping, expert
                          constraints, and        validation.
                          outcome interpretations 
                          correspond.             

  Interaction             Whether participant     Interaction Contracts;
  preservation            roles, coupling,        protocol and transition
                          protocol, boundaries,   analysis.
                          transitions, and        
                          completion conditions   
                          correspond.             

  Opportunity             Whether feasible,       Opportunity matrices,
  preservation            permitted, reachable,   discovery studies,
                          exposed, signaled,      authorization analysis.
                          believed, and           
                          recoverable actions     
                          correspond.             

  Behavioral preservation Whether attributed      Trace alignment,
                          event and episode       sequence models,
                          distributions           distributional tests.
                          correspond under        
                          compatible observation  
                          models.                 

  Strategy preservation   Whether inferred        Multi-task evidence,
                          conditional             perturbation tests,
                          organization,           strategy models.
                          information use,        
                          switching, and recovery 
                          policies correspond.    

  Accessibility           Whether relevant        Standards conformance
                          populations can         plus user evidence.
                          perceive, operate,      
                          understand, and         
                          robustly use the        
                          interaction.            

  Discoverability         Whether operations and  Unaided discovery,
                          relations can be found  time-to-discovery, cue
                          under declared prior    recognition.
                          knowledge and search    
                          conditions.             

  Reversibility and       Whether consequences    Recovery graph, repair
  recovery                can be undone,          success, residual harm
                          repaired, compensated,  and cost.
                          or safely explored.     

  Interaction cost        Resources consumed      Time, actions, motor
                          during performance.     distance, attention,
                                                  memory, energy, money,
                                                  risk.

  Learning cost           Resources and exposure  Learning curves,
                          required to achieve a   trials-to-criterion,
                          declared criterion.     retention and transfer.

  Measurement quality     Whether evidence is     Measurement contracts,
                          valid, reliable,        invariance tests,
                          comparable, traceable,  uncertainty budgets.
                          and                     
                          uncertainty-bounded.    
  -----------------------------------------------------------------------

# 6. Admissibility Gates

A comparison should not proceed directly to metrics. It must pass the
following gates. Failure does not imply that the candidates cannot be
discussed; it means the proposed scientific comparison is unsupported or
must be narrowed.

  -----------------------------------------------------------------------
  **Gate**          **Question**      **Required        **Typical
                                      evidence**        failure**
  ----------------- ----------------- ----------------- -----------------
  G1 Target         Is the underlying Target            Different goals
                    target, function, definitions;      are treated as
                    or declared       semantic          variants of one
                    purpose           correspondence    task.
                    sufficiently      map.              
                    aligned?                            

  G2 Boundary       Are participants, Interaction       One candidate
                    episode           Contracts.        includes setup or
                    boundaries,                         recovery while
                    timescales,                         the other
                    initial                             excludes it.
                    conditions, and                     
                    completion rules                    
                    aligned?                            

  G3 Opportunity    Are differences   Opportunity       Interface
                    in permissions,   Contracts.        differences are
                    capabilities,                       credited for
                    backend                             backend
                    functions, and                      capability
                    reachable                           differences.
                    outcomes                            
                    identified?                         

  G4 Observation    Do records, event Behavioral        Different logging
                    detection,        Evidence          coverage is
                    segmentation,     Contracts.        interpreted as
                    attribution, and                    behavioral
                    missingness                         difference.
                    permit                              
                    comparison?                         

  G5 Measurement    Are constructs,   Measurement       Scores from
                    scales,           Contracts;        non-equivalent
                    instruments,      invariance and    instruments are
                    populations, and  reliability       directly
                    uncertainty       evidence.         compared.
                    compatible?                         

  G6 Correspondence Can entities,     Mapping table     Labels are
                    actions, events,  with ambiguous    assumed to
                    outcomes, and     and unmapped      identify
                    costs be          elements.         equivalent
                    defensibly                          operations.
                    mapped?                             

  G7 Ethics and     Are safety,       Veto rules;       Average gains
  accessibility     rights,           subgroup          conceal a blocked
                    exclusion, and    analysis;         or harmed
                    accessibility     standards         subgroup.
                    constraints       evidence.         
                    represented?                        
  -----------------------------------------------------------------------

# 7. Comparison Relations

After admissibility, a result should use one of six relations rather
than the undifferentiated term "better."

  -----------------------------------------------------------------------
  **Relation**            **Meaning**             **Evidence**
  ----------------------- ----------------------- -----------------------
  Token identity          The same historically   Stable identity and
                          bounded episode or      provenance.
                          record lineage.         

  Typed equivalence       All required invariants Equivalence tests or
                          fall within declared    formal proof.
                          tolerances for a named  
                          dimension.              

  Similarity              A graded relation under Distance, distribution,
                          a declared metric and   or model-based estimate
                          comparison frame.       with uncertainty.

  Dominance               One candidate is no     Comparable dimensions
                          worse on all mandatory  and directionality.
                          dimensions and better   
                          on at least one.        

  Trade-off               Candidates differ in    Profile plus optional
                          opposing directions and stakeholder decision
                          no value-neutral        model.
                          ordering follows.       

  Incomparability         No defensible common    Documented gate failure
                          frame, mapping,         or unresolved
                          measurement, or         uncertainty.
                          preference relation     
                          exists.                 
  -----------------------------------------------------------------------

# 8. Comparative Evaluation Framework

The recommended evaluation output has three layers.

Layer 1 - invariants and vetoes. These establish semantic target,
safety, authority, accessibility minima, and other non-negotiable
constraints. A candidate failing a veto is not equivalent or admissible
for the declared use, regardless of aggregate performance.

Layer 2 - typed profile. Each dimension is reported with operational
definition, estimate, uncertainty, evidence quality, and relevant
subgroup or context. This is the scientific result.

Layer 3 - optional decision synthesis. Ranking or selection may use
dominance, lexicographic rules, constrained optimization, utility
functions, or outranking. The decision rule must be separated from the
scientific profile and must disclose weights, thresholds, compensation
assumptions, and authority to set them.

# 9. Interaction Scorecard

  -----------------------------------------------------------------------
  **Domain**        **Indicators**    **Result form**   **Required note**
  ----------------- ----------------- ----------------- -----------------
  Target and        Operation and     Pass / partial /  Formal mapping;
  semantics         outcome           fail              unresolved
                    preservation                        mismatches

  Interaction       Roles, coupling,  Profile           Structural and
  structure         protocol,                           temporal
                    completion                          deviations

  Opportunity       Executable,       Profile           False-positive
                    exposed,                            and hidden
                    signaled,                           opportunity rates
                    believed,                           
                    recoverable sets                    

  Behavior          Trace and outcome Profile           Compatible
                    distributions                       segmentation and
                                                        uncertainty
                                                        required

  Strategy          Conditional       Profile / latent  Requires
                    organization and                    convergent
                    recovery                            evidence across
                                                        contingencies

  Accessibility     Perceivable,      Threshold +       Report by
                    operable,         profile           relevant access
                    understandable,                     needs
                    robust                              

  Discoverability   Unaided discovery Profile           Separate exposure
                    and signaling                       from belief
                    effectiveness                       

  Reversibility     Undo, repair,     Threshold +       Irreversible
                    compensation,     profile           harms are veto
                    residual effects                    candidates

  Performance cost  Time, action,     Profile           No universal
                    motor, cognitive,                   common unit
                    financial, risk                     

  Learning cost     Exposure,         Profile           Separate
                    instruction,                        familiarity and
                    trials,                             transfer
                    retention,                          
                    transfer                            

  Measurement       Validity,         Quality grade     Low quality
  quality           reliability,                        constrains all
                    invariance,                         downstream claims
                    missingness,                        
                    uncertainty                         
  -----------------------------------------------------------------------

# 10. Comparison Protocol

-   1\. State the decision-independent scientific question and identify
    the candidate interactions.

-   2\. Declare target semantics, task, users or agents, context,
    initial-state distribution, episode boundary, timescale, and success
    conditions.

-   3\. Instantiate an Interaction Contract, Opportunity Contract,
    Behavioral Evidence Contract, and Measurement Contract for each
    candidate.

-   4\. Construct correspondence mappings for entities, states,
    operations, events, outcomes, strategies, and measures. Mark
    one-to-many, ambiguous, and unmapped elements.

-   5\. Declare invariants, admissible transformations, equivalence
    tolerances, mandatory thresholds, and veto conditions before
    examining comparative outcomes.

-   6\. Test admissibility gates. Narrow the claim or declare
    incomparability where gates fail.

-   7\. Select dimension-specific measures and justify their scales,
    directionality, uncertainty, and subgroup relevance.

-   8\. Collect or derive evidence using compatible observation and
    attribution rules. Preserve raw records and provenance.

-   9\. Estimate typed differences with uncertainty. Use equivalence
    tests for sameness claims and superiority tests only for directional
    claims.

-   10\. Report the multidimensional profile, including null,
    conflicting, and subgroup-specific results.

-   11\. Apply an optional decision rule only after the profile is
    complete. Conduct weight, threshold, and uncertainty sensitivity
    analysis.

-   12\. State validity domain, transport limits, unresolved mappings,
    alternative explanations, and falsifying evidence.

# 11. Admissible Comparison Rules

-   No comparison without a declared comparison object and reference
    frame.

-   No claim of semantic preservation from equal task completion alone.

-   No claim of behavioral preservation from identical aggregate
    outcomes alone.

-   No comparison of traces without compatible observation,
    segmentation, and attribution models.

-   No inference of strategy identity from one trace or one successful
    sequence.

-   No aggregation across dimensions without a declared decision purpose
    and compensation rule.

-   No averaging across populations when a mandatory subgroup threshold
    is relevant.

-   No accessibility credit from technical conformance alone when actual
    operability is disputed; standards and user evidence play different
    roles.

-   No cost comparison without declaring included resources, excluded
    externalities, and time horizon.

-   No equivalence claim without tolerances and adequate precision to
    support them.

-   No ranking when uncertainty intervals, missing mappings, or value
    conflicts support only a partial order.

-   Implementation independence permits different realizations, not the
    omission of implementation-mediated constraints that alter actual
    interaction.

# 12. Comparative Cases

## 12.1 GUI and command line over the same operation set

A GUI and CLI may preserve backend operations and outcomes while
differing in exposure, signaling, composition, auditability, motor
demands, memory demands, and learning cost. Semantic equivalence can
coexist with opportunity and behavioral inequivalence. Experts may
obtain lower execution cost from the CLI while novices achieve higher
discovery from the GUI. The result is typically a trade-off profile, not
a universal winner.

## 12.2 API and conversational interface

An API may expose a precisely typed operation set with explicit errors,
while a conversational interface paraphrases capabilities and may
over-signal unsupported actions. Equal successful outcomes on benchmark
tasks do not establish equivalent permission transparency,
predictability, recovery, or auditability. Unsupported conversational
claims create false-positive believed opportunities and should be
represented as a veto or severe mismatch where consequential actions are
involved.

## 12.3 Accessibility variants

Visual, auditory, tactile, and multimodal projections may preserve
target semantics while changing sequence, latency, spatial
comparability, memory burden, error detection, and recovery. Comparison
requires population- and assistive-technology-specific evidence.
Aggregate performance across users can conceal exclusion. The correct
output is a subgroup-indexed accessibility and opportunity profile.

## 12.4 Novice and expert use

The implementation and exposed operations may be identical while
believed actions, strategy, search, confidence, and recovery differ.
This is not an interface-only comparison. The reference frame must
include prior experience, and learning cost should be compared through
longitudinal or transfer-sensitive designs rather than single-session
performance alone.

## 12.5 Simulated and observed interaction

A simulation may match transition frequencies or task outcomes yet fail
to preserve causal mechanisms, adaptation, social coordination, or
measurement processes. Model-to-observation comparison must separately
report calibration, trace conformance, causal adequacy, and transport.
Simulation should not be treated as a substitute population without
validation.

# 13. Statistical and Formal Analysis

Claims of equivalence should use equivalence or non-inferiority designs
with prespecified smallest effects of interest, not failure to reject a
difference. Repeated measures, hierarchical populations, learning, and
task heterogeneity require multilevel models. Time-to-discovery and
abandonment are event-time outcomes; errors and recovery are often
recurrent events; traces may require sequence alignment, process
conformance, or probabilistic model comparison.

Multiple dimensions create multiplicity and selective-reporting risks.
Confirmatory dimensions should be preregistered. Exploratory profiles
should remain labeled as exploratory. Missingness is often informative:
an unobserved action may reflect logging limits, access barriers, or
abandonment. Uncertainty should propagate from record detection and
correspondence mappings through construct estimates and final
comparisons.

Formal equivalence can establish strong guarantees within an
abstraction, but empirical claims require validating that the
abstraction preserves the phenomena of interest. Conversely, empirical
similarity does not establish formal equivalence or causal identity.

# 14. Decision Synthesis without Conceptual Collapse

A scorecard may support decisions, but a universal interaction score is
rejected. Aggregation is appropriate only when criteria are
commensurable or a defensible value function is supplied. Weighted sums
permit compensation and can hide threshold failures. Lexicographic rules
prioritize one criterion before others. Constrained optimization
maximizes selected objectives subject to non-negotiable limits.
Outranking supports partial orders where one candidate is sufficiently
strong on important criteria without being vetoed by severe weaknesses.

Sensitivity analysis is mandatory. A decision is robust only if
reasonable variation in weights, thresholds, measurement uncertainty,
and population assumptions does not reverse it. When rankings are
unstable, the correct result is conditional preference or
incomparability, not false precision.

# 15. Falsification Matrix

  -------------------------------------------------------------------------
  **Claim challenged**    **Falsifying evidence**   **Consequence**
  ----------------------- ------------------------- -----------------------
  Typed profiles add no   A validated scalar        Replace the profile
  value                   measure predicts all      with that measure
                          relevant outcomes and     within its proven
                          decisions across systems, domain.
                          populations, tasks, and   
                          contexts without hidden   
                          trade-offs.               

  Admissibility gates are Comparisons remain valid  Remove unsupported
  unnecessary             when targets, boundaries, gates.
                          observation models, or    
                          mappings differ           
                          materially.               

  Implementation          Every meaningful          Narrow the framework to
  independence is         comparison depends        implementation classes.
  incoherent              irreducibly on            
                          implementation-specific   
                          details.                  

  Opportunity comparison  Semantic and behavioral   Remove opportunity as a
  is redundant            measures fully explain    separate dimension.
                          exposure, belief,         
                          permission, and recovery  
                          differences.              

  Strategy comparison is  No protocol distinguishes Treat strategy as
  unidentifiable          strategy from trace       exploratory only.
                          variation or task         
                          response with acceptable  
                          reliability.              

  Accessibility can be    Empirical and normative   Remove veto treatment
  fully compensatory      evidence supports         for that domain.
                          averaging access failures 
                          against gains elsewhere   
                          for the declared use.     

  Comparison contracts do Independent teams using   Revise or reject the
  not improve             the contract do not       contract.
  reproducibility         converge more than teams  
                          using ordinary reports.   

  Profiles cannot support Decision makers cannot    Reduce the framework to
  decisions               use typed profiles more   descriptive science.
                          reliably than existing    
                          evaluations.              
  -------------------------------------------------------------------------

# 16. Threats to Validity

The framework is broad and may appear to solve comparison by requiring
extensive declarations. Its value therefore depends on demonstrating
improved reproducibility, error detection, and decision quality relative
to simpler evaluation reports. Some comparisons will remain
underdetermined because goals, values, or correspondence mappings are
contested. This is not necessarily methodological failure;
incomparability may be the scientifically correct result.

Construct proliferation is another risk. The taxonomy should be reduced
when dimensions are empirically redundant under a declared domain.
Conversely, low correlations do not automatically prove conceptual
independence because instruments may be unreliable or contexts
heterogeneous.

The framework also risks privileging interactions with enumerable tasks
and state spaces. Open-ended creative, social, and institutional
interactions may require interpretive or qualitative comparisons
alongside formal and quantitative evidence. Such evidence remains
admissible when its observation, coding, reflexivity, and inference
rules are explicit.

Finally, implementation independence has limits. Rendering latency,
hardware, modality, network behavior, and device constraints can alter
coupling, opportunity, and cost. The theory compares interactions
independently of any particular implementation language or product, but
it cannot discard implementation properties that causally alter the
phenomenon.

# 17. Conclusion

Computational interactions can be compared scientifically when
comparison is treated as a structured evidential argument rather than a
feature checklist or universal score. The minimum method is a
gate-and-profile architecture.

First, admissibility gates establish a shared target, boundary,
opportunity structure, observation model, measurement system,
correspondence mapping, and ethical or accessibility constraints.
Second, a typed profile compares semantic preservation, interaction
structure, opportunity, behavior, strategy, accessibility,
discoverability, reversibility, performance cost, learning cost, and
measurement quality. Third, an optional decision model may aggregate or
rank only after its values, thresholds, compensation assumptions, and
uncertainty are declared.

The central conclusion is therefore conditional but positive: a general
scientific method for comparative interaction is justified. It is not a
universal metric and does not imply that every pair of interactions is
comparable. Its scientific strength lies in making equivalence,
difference, trade-off, dominance, and incomparability explicit and
reproducible.

# 18. Reusable Artifact A - Comparison Contract

  -----------------------------------------------------------------------
  **Field**                           **Required declaration**
  ----------------------------------- -----------------------------------
  Identity                            Candidate interactions; versions;
                                      provenance; token or type
                                      comparison.

  Reference frame                     Target, task, users/agents,
                                      context, initial state, boundary,
                                      timescale, completion.

  Correspondence                      Entities, states, actions, events,
                                      outcomes, strategies, measures;
                                      ambiguous and unmapped items.

  Invariants                          Properties required to remain fixed
                                      by dimension.

  Transformations                     Renaming, reordering, abstraction,
                                      modality substitution, temporal
                                      rescaling, implementation
                                      substitution.

  Dimensions                          Selected comparison dimensions and
                                      reasons for inclusion or exclusion.

  Measures                            Measurands, instruments, scales,
                                      estimators, directionality,
                                      reliability, validity.

  Thresholds                          Equivalence bounds, minimum
                                      acceptable values, smallest effects
                                      of interest, vetoes.

  Uncertainty                         Record, mapping, sampling, model,
                                      instrument, and transport
                                      uncertainty.

  Evidence                            Formal proofs, records,
                                      experiments, qualitative evidence,
                                      standards conformance, expert
                                      review.

  Decision synthesis                  Optional weights, priorities,
                                      compensation, authority,
                                      sensitivity analysis.

  Scope                               Population, task, projection,
                                      context, time horizon, and
                                      invalidating conditions.
  -----------------------------------------------------------------------

# 19. Reusable Artifact B - Admissible Transformation Matrix

  ---------------------------------------------------------------------------------
  **Transformation**   **Admissible?**   **Conditions**        **Affected
                                                               dimensions**
  -------------------- ----------------- --------------------- --------------------
  Renaming or          Usually           Preserve referents    Semantic, structural
  identifier                             and operation         
  substitution                           semantics.            

  Visual restyling     Sometimes         No change to          Semantic; possibly
                                         signaling,            opportunity
                                         legibility, salience, 
                                         or access.            

  Modality             No by default     Requires              Semantic may hold;
  substitution                           population-specific   behavior/access may
                                         access and sequence   differ
                                         evidence.             

  Action reordering    Sometimes         Preserve causal       Protocol, trace,
                                         dependencies and      cost
                                         outcomes.             

  Temporal rescaling   Sometimes         Preserve ordering and Structural but not
                                         relevant timing       necessarily
                                         relations.            performance

  Aggregation or       Sometimes         Declare omitted       Type-level, not
  abstraction                            events and preserved  token-level
                                         observables.          

  Implementation       Sometimes         Preserve externally   Semantic/formal;
  substitution                           relevant semantics,   empirical
                                         latency, failure,     revalidation needed
                                         authority, and state. 

  Automation of user   No by default     Changes participant   Interaction
  steps                                  roles, coupling,      structure and
                                         opportunity, and      behavior
                                         strategy.             

  Permission or policy No                Changes admissible    Opportunity and
  change                                 action structure.     semantics

  Training             No for behavioral Changes agent state,  Population/context
  intervention         equivalence       belief, strategy, and comparison required
                                         learning cost.        
  ---------------------------------------------------------------------------------

# 20. Reusable Artifact C - Minimal Reporting Template

-   Comparison claim: exact wording and typed relation.

-   Candidates and provenance.

-   Reference frame and validity domain.

-   Contracts used and gate results.

-   Correspondence mapping and unresolved items.

-   Invariants, transformations, tolerances, and vetoes.

-   Dimension-by-dimension measures, estimates, uncertainty, and
    evidence quality.

-   Subgroup and context variation.

-   Alternative explanations and falsifying evidence.

-   Optional decision rule, sensitivity analysis, and conditional
    recommendation.

# 21. References

Baier, C., & Katoen, J.-P. (2008). Principles of Model Checking. MIT
Press.

Belton, V., & Stewart, T. J. (2002). Multiple Criteria Decision
Analysis: An Integrated Approach. Kluwer.

Card, S. K., Moran, T. P., & Newell, A. (1983). The Psychology of
Human-Computer Interaction. Erlbaum.

Gibson, J. J. (1979). The Ecological Approach to Visual Perception.
Houghton Mifflin.

ISO 9241-11:2018. Ergonomics of human-system interaction - Part 11:
Usability: Definitions and concepts.

JCGM 100:2008. Evaluation of measurement data - Guide to the expression
of uncertainty in measurement.

Norman, D. A. (2013). The Design of Everyday Things, revised edition.
Basic Books.

Roy, B. (1991). The outranking approach and the foundations of ELECTRE
methods. Theory and Decision, 31, 49-73.

Syring, A. F., Tax, N., & van der Aalst, W. M. P. (2019). Evaluating
conformance measures in process mining using conformance propositions.

van der Aalst, W. M. P. (2016). Process Mining: Data Science in Action.
Springer.

W3C. (2023). Web Content Accessibility Guidelines (WCAG) 2.2.

Project paper. Representation, Invariance, and Projection: A
Cross-Disciplinary Theory of What Representations Preserve, Transform,
and Enable.

Project paper. Ontology, Semantics, Representation, and Interpretation:
Toward a Layered Theory of Computational Meaning.

Project paper. Opportunity, Affordance, and Action Availability: Toward
a Formal Account of What an Agent Can Perceive, Believe, and Do.

Project paper. Interaction: Toward a General Theory of Interaction.

Project paper. Behavior: Toward a Scientific Theory of Computational
Behavior.

Project paper. Measurement: Toward a Scientific Framework for
Interaction Research.

Project paper. Interaction Similarity: Toward a General Theory of
Comparable Interactions.

Project paper. Interaction Transfer: Toward a Theory of Experience and
Adaptation.

Project paper. Interaction Strategies: Toward a Theory of Behavioral
Organization.

Project paper. Formal Models of Computational Interaction: Toward a
Mathematical Foundation.

Project paper. Predicting Interaction: Toward a Predictive Theory of
Computational Interaction.
