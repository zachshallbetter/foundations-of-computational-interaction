**Interaction Similarity**

*Toward a General Theory of Comparable Interactions*

Cross-disciplinary foundational research paper

# Abstract

Interaction research routinely compares interfaces, traces, users,
policies, models, and outcomes using the language of sameness or
similarity. The terms are often underspecified. Formal methods show that
even behaviorally oriented equivalence divides into trace, testing,
simulation, bisimulation, and related relations, each preserving
different observations. Psychology and pattern recognition show that
similarity depends on selected features, weighting, context, asymmetry,
and representation. Process mining shows that model-to-model,
log-to-log, and log-to-model comparisons answer different questions.
Measurement theory adds a further constraint: numerical comparisons are
valid only under declared scales, observation models, uncertainty, and
admissible transformations.

This paper develops a typed theory of interaction comparison. It
concludes that no context-free relation of interaction similarity is
scientifically defensible. Interaction token identity is historical
identity under a declared boundary; interaction type identity is
classification under an explicit abstraction; equivalence is exact
preservation relative to a declared observation contract; similarity is
graded proximity under specified dimensions and metrics; and
incomparability arises when targets, boundaries, observation models,
scales, or validity domains cannot be aligned without unsupported
assumptions. The paper proposes a layered comparison object spanning
semantics, coupling structure, protocol, opportunity, trace, behavior,
policy, strategy, outcome, cause, and measurement. It leaves behind a
similarity ontology, taxonomy, equivalence hierarchy, similarity
contract, comparison protocol, admissible-transformation matrix, and
falsification matrix.

# 1. Problem Statement

Two interactions may share an implementation yet differ because
participants, goals, states, permissions, or histories differ. Two
different implementations may realize the same protocol or semantic
operation. Two traces may be identical while arising from different
mechanisms, and different traces may express the same strategy or
achieve the same outcome. A novice and an expert can encounter the same
projection but possess different believed action sets. Accessibility
variants can preserve operation semantics while changing sequence,
latency, discoverability, and recovery.

The scientific problem is therefore not to ask whether two interactions
are simply similar. It is to determine: similar with respect to what
object, under which abstraction, for which observer and task, using what
evidence, metric, tolerance, and uncertainty model? Without these
declarations, similarity claims collapse distinctions established by
prior work on representation, opportunity, interaction, behavior, and
measurement.

# 2. Method

The review used a concept-centered comparative method across similarity
theory, formal equivalence, graph and sequence comparison, process
mining, pattern recognition, behavioral science, machine learning, and
HCI. Foundational sources were prioritized: Tversky on feature-based
similarity; metric and edit-distance traditions; dynamic time warping;
graph edit distance; Milner and van Glabbeek on process equivalence;
bisimulation and trace equivalence; van der Aalst on process mining; and
measurement theory on admissible comparison.

Candidate distinctions were retained only when counterexamples showed
that collapsing them produced false conclusions. The proposed framework
was then tested against seven cases: identical implementations, distinct
interfaces over one system, GUI versus CLI, API versus conversation,
novice versus expert, accessibility variants, and simulated versus
observed interaction. The framework is descriptive. It does not
prescribe a single metric or ranking.

# 3. Why Similarity Is Not One Relation

Similarity is not a property that exists independently of representation
and purpose. Tversky showed that judged similarity can be modeled
through common and distinctive features, that feature salience is
context-sensitive, and that similarity judgments can be asymmetric.
Metric-space models impose identity, symmetry, and triangle inequality,
but many psychological and practical judgments violate one or more of
these assumptions.

Formal computer science reaches the same conclusion from another
direction. Trace equivalence preserves possible observable action
sequences. Bisimulation additionally preserves branching structure and
stepwise matching. Testing equivalences preserve outcomes of specified
tests. Observational equivalence depends on the contexts allowed to
distinguish systems. The linear-time/branching-time spectrum
demonstrates that there is no unique behavioral equivalence; relations
are ordered by discriminating power.

Process mining separates model-to-model similarity, log-to-log
similarity, and conformance between logs and models. Sequence comparison
distinguishes edit distance, alignment, temporal warping, subsequence
similarity, and probabilistic distance. Graph comparison distinguishes
exact isomorphism, subgraph matching, edit distance, spectral
similarity, and kernel-based similarity. These are not alternative
implementations of one universal relation. They preserve different
structures and answer different explanatory questions.

# 4. Canonical Distinctions

Interaction token identity concerns whether two references denote the
same historically situated episode. It requires continuity under the
declared participant, boundary, and timescale criteria. Copying a log
does not create a second interaction token; replaying the same inputs
does.

Interaction type identity concerns whether episodes instantiate the same
declared type. Type membership depends on an abstraction function that
suppresses some differences and preserves others. The same token can
instantiate several types, such as authentication, error recovery, or
turn-taking.

Equivalence is a binary relation of exact preservation under a declared
comparison contract. It is never unqualified. Semantic equivalence may
preserve denotation or task-relevant consequences. Trace equivalence
preserves observable sequences. Bisimulation preserves branching
response structure. Opportunity equivalence preserves declared
action-availability relations. Outcome equivalence preserves criterion
outcomes.

Similarity is graded proximity under declared dimensions,
representations, alignment rules, metrics, weights, and tolerances.
Similarity need not be symmetric when the comparison is directional,
such as substitution, migration, or transfer.

Incomparability is not low similarity. It occurs when no defensible
common comparison space exists: boundaries conflict, required variables
are absent, scales are noncommensurate, observation processes differ
without calibration, uncertainty overwhelms discrimination, or the
proposed mapping changes the target itself.

# 5. Similarity Ontology

The minimal ontology contains:

Comparison target: the entity being compared, such as episode token,
interaction type, protocol, opportunity profile, trace, behavior
pattern, policy, strategy, outcome, or causal model.

Comparison frame: declared system boundary, participants, initial
conditions, task, environment, timescale, and observation window.

Representation: the form in which each target is available for
comparison.

Correspondence mapping: a relation aligning entities, states, actions,
events, roles, or features across targets.

Invariant set: properties required to remain exact.

Variant set: properties permitted to differ.

Admissible transformation: a transformation treated as irrelevant for
the comparison, such as renaming, temporal rescaling, stuttering,
reordering of independent events, or modality substitution.

Observable set: distinctions available to the declared observer or
instrument.

Distance or discrepancy: a typed measure of deviation.

Weighting and tolerance: importance assignments and thresholds for
equivalence or practical similarity.

Uncertainty: error, missingness, model uncertainty, and confidence
attached to inputs and results.

Validity domain: population, tasks, systems, contexts, and purposes over
which the comparison claim is supported.

# 6. Typed Dimensions of Interaction Comparison

Semantic comparison asks whether operations, states, relations, or
consequences denote the same declared target. It does not establish
identical access, behavior, or outcomes.

Structural comparison concerns participants, coupling topology,
state-transition structure, causal ordering, concurrency, branching,
loops, and dependencies.

Protocol comparison concerns permitted messages or actions, sequencing
rules, preconditions, responses, completion, and failure behavior.

Opportunity comparison concerns possible, capable, permitted, enabled,
reachable, exposed, signaled, believed, reversible, and recoverable
actions. Equality of backend actions does not establish opportunity
equivalence.

Trace comparison concerns recorded or attributed event sequences or
partial orders. It is observation-model dependent and may use edit
operations, alignments, temporal normalization, or probabilistic
distances.

Behavioral comparison concerns attributed trajectories or patterns, not
raw records. It requires compatible segmentation and attribution rules.

Policy comparison concerns mappings from states or beliefs to action
distributions. Strategy comparison concerns higher-level organization
across contingencies and may remain latent even when policies are
estimated.

Outcome comparison concerns declared success, utility, quality, safety,
or other criteria. Equal outcomes do not imply equal process,
opportunity, behavior, effort, or risk.

Causal comparison concerns whether the same dependency structure or
mechanism generated observations. It cannot be inferred from trace
similarity alone.

Measurement-relative comparison concerns whether two measured values are
comparable under compatible instruments, scales, invariance assumptions,
and uncertainty budgets.

# 7. Equivalence Hierarchy

The framework does not impose one total hierarchy because several
dimensions are orthogonal. Within formal behavior, stronger relations
generally imply weaker ones under fixed models: identity implies
isomorphism under the chosen representation; isomorphism may imply
bisimulation; bisimulation commonly implies trace equivalence; trace
equivalence may imply equality of a selected outcome. The converses
generally fail.

Across interaction dimensions, no universal implication holds. Semantic
equivalence does not imply opportunity equivalence. Opportunity
equivalence does not imply behavioral equivalence because agents differ.
Behavioral equivalence does not imply causal equivalence. Outcome
equivalence does not imply behavioral or interactional equivalence.
Measurement equivalence is a precondition for empirical comparison, not
a property of the interactions themselves.

The resulting architecture is a lattice of typed equivalence claims
rather than a single ladder. A complete comparison report is therefore a
vector of supported relations and distances, with explicit unknown or
incomparable entries.

# 8. Formal Comparison Contract

Let interactions I and J be represented under contracts C_I and C_J. A
comparison specification is:

K = \<T, F, M, O, A, D, W, epsilon, U, V\>

where T is the target type; F is the aligned comparison frame; M is the
correspondence mapping; O is the observable set; A is the admissible
transformation set; D is a family of typed distances or predicates; W is
weighting; epsilon is the tolerance or equivalence bound; U is
uncertainty; and V is the validity domain.

Exact equivalence on dimension k holds when, after an admissible
transformation and valid correspondence, all required observables are
preserved and d_k(I,J)=0 or satisfies the formal equality predicate.
Approximate equivalence holds when the distance and its uncertainty
interval remain within epsilon_k. Similarity is the reported distance
profile rather than a categorical assertion. Incomparability holds when
the mapping, frame, observation model, or scale conditions required by K
cannot be justified.

A composite similarity score may be reported only when aggregation has a
defensible measurement model. Weighted sums conceal compensation: severe
inequality in permission or accessibility can be offset numerically by
superficial trace similarity. The default output should therefore be a
typed profile, not one scalar.

# 9. Evidence and Measurement Requirements

A comparison claim must identify its evidence level. Direct records
include timestamps, messages, state snapshots, and instrument readings.
Detected events are produced by segmentation or recognition rules.
Attributed interaction and behavioral events add system or agent
attribution. Policies, strategies, intentions, and causal mechanisms are
inferred constructs.

Trace similarity is invalid when logging coverage differs materially.
Behavioral similarity is invalid when segmentation or attribution rules
differ without calibration. Group comparison is invalid when measurement
invariance is untested. Cross-modality comparison is invalid when
metrics encode modality-specific costs but are interpreted as general
interaction cost.

Uncertainty should propagate through alignment, missing data,
classification, metric estimation, and aggregation. A difference smaller
than measurement uncertainty supports neither similarity nor
dissimilarity. Reproducibility requires the target representations,
mappings, code, parameterization, thresholds, exclusions, and
sensitivity analyses to be available.

# 10. Comparative Cases

Identical implementations. Two episodes on the same software are not
token-identical and need not be type-equivalent if initial state,
authority, task, or participants differ. Implementation identity is weak
evidence.

Different interfaces over one system. A GUI and CLI may be semantically
equivalent at the operation layer while differing in exposure,
signaling, sequence cost, recoverability, and trace distributions.
Similarity must be reported by dimension.

API versus conversational interface. Both may invoke the same operation,
but the conversation can introduce ambiguity, overclaim, confirmation
structure, and nondeterministic interpretation. Backend outcome
equivalence does not establish protocol or opportunity equivalence.

Novice versus expert. The projection and system-relative opportunity
sets may be identical. Believed actions, strategies, search behavior,
and recovery differ. The comparison target determines whether this is
one interaction type with participant variation or different types.

Accessibility variants. Visual, auditory, and tactile projections can
preserve semantics and completion while changing ordering, latency,
memory burden, spatial comparison, and error recovery. Modality
substitution is admissible only for explicitly preserved dimensions.

Simulated versus observed interaction. Simulation can reproduce traces
or aggregate distributions without reproducing causal mechanisms,
situated interpretation, or measurement error. Validation must
distinguish trace fidelity, distributional fidelity, policy fidelity,
and causal fidelity.

# 11. Admissible Transformations

Renaming is admissible for structural and protocol comparison when
labels have a validated correspondence and no semantics are carried by
the names.

Temporal translation is often admissible; temporal scaling is admissible
only when absolute timing is not part of the target. Dynamic time
warping may align patterns while concealing meaningful latency
differences.

Stuttering or insertion of silent internal steps is admissible under
weak behavioral equivalences when internal events are legitimately
unobservable. It is not admissible when those steps affect effort, risk,
energy, or recovery.

Reordering independent concurrent events is admissible under
partial-order comparison when independence is established. Sequence
metrics can falsely penalize equivalent concurrency.

Aggregation is admissible only when the coarse-graining preserves
required invariants. Segmentation changes can manufacture similarity or
difference.

Modality substitution is admissible for operation semantics under a
valid cross-modal mapping, but not automatically for perceptual,
temporal, behavioral, or accessibility comparison.

Implementation substitution is admissible when the comparison target is
defined above implementation and equivalence obligations are verified.
Identical output samples are insufficient.

# 12. Comparison Protocol

1\. Declare whether the objects are episode tokens, types, models,
traces, behaviors, opportunities, policies, strategies, outcomes, or
mechanisms.\
2. Establish compatible interaction boundaries, participants, tasks,
initial conditions, and timescales.\
3. Specify representations and observation models; audit missingness and
logging coverage.\
4. Define the correspondence mapping across states, actions, events,
roles, and outcomes.\
5. Select dimensions independently; do not infer one from another.\
6. Declare invariants, admissible transformations, and prohibited
transformations.\
7. Choose metrics or formal predicates with scale assumptions and known
failure modes.\
8. Set tolerances before inspecting results where confirmatory claims
are intended.\
9. Propagate measurement and model uncertainty.\
10. Report a typed comparison profile with equivalence, similarity,
difference, unknown, or incomparable for each dimension.\
11. Test robustness to alternative boundaries, mappings, metrics,
weights, and segmentation.\
12. State the validity domain and prohibited generalizations.

# 13. Falsification Tests

The theory should be narrowed or rejected if a single established
equivalence relation can represent all relevant interaction comparisons
without losing distinctions among semantics, protocol, opportunity,
trace, behavior, policy, outcome, cause, and measurement. Current
literature strongly contradicts that possibility.

The typed framework loses value if its dimensions cannot be measured
reliably, if independent analysts cannot reproduce correspondence and
segmentation decisions, or if typed profiles add no explanatory or
predictive value beyond a well-chosen single metric.

The proposed incomparability category is falsified as practically
necessary if every studied comparison can be defensibly embedded in a
common space without arbitrary assumptions. Conversely, frequent analyst
disagreement about mappings and boundaries would weaken claims of stable
equivalence.

Claims of opportunity, behavioral, policy, or causal similarity must be
rejected when based only on semantic or trace evidence. A composite
score should be rejected when conclusions reverse under plausible
weighting or when compensation masks a critical dimension.

# 14. Threats to Validity

The main threat is framework breadth. Typed comparison can become a
checklist rather than a theory if dimensions are added without
mechanisms or formal relations. The framework therefore limits itself to
distinctions already supported across formal, behavioral, and
measurement literatures.

Correspondence mappings can encode the conclusion. Analysts may align
only convenient events or choose abstractions that manufacture
equivalence. Pre-registration, independent coding, mapping audits, and
sensitivity analysis are required.

Human interaction involves context, meaning, and evolving goals that
cannot always be reduced to fixed feature vectors or transition systems.
Strategy and causal similarity may remain underidentified.
Cross-cultural and accessibility comparisons are especially vulnerable
to treating instrument bias as participant difference.

Exact equivalence can be undecidable or computationally expensive for
expressive models. Approximation introduces tolerance dependence.
Empirical logs are finite samples and cannot prove equality of full
behavior spaces.

# 15. Implications for Interaction Research

Similarity should not be treated as a single dependent variable.
Research should ask which equivalence or distance relation is
scientifically relevant to the claim. Interface migration may require
semantic and opportunity preservation; accessibility evaluation may
require outcome preservation without demanding trace identity;
behavioral transfer may require type-level structural similarity while
allowing different surface actions; formal verification may require
bisimulation or refinement.

The framework also clarifies the next research stage. Transfer depends
on a declared similarity relation between source and target
interactions. Strategy research requires separation of trace similarity
from latent organizational similarity. Formal-model selection requires
identifying which equivalences the model can express and decide.
Comparative interaction can then use typed profiles rather than
ungrounded rankings.

# 16. Conclusion

The evidence supports a general theory of interaction comparison, but
not a universal similarity metric. Interaction identity, equivalence,
similarity, and incomparability are distinct. Every defensible claim is
relative to a declared target, frame, representation, correspondence,
observable set, admissible transformations, dimensions, metrics,
tolerances, uncertainty model, and validity domain.

Existing literatures already supply the constituent formal and empirical
tools. The needed contribution is a cross-disciplinary integration that
prevents semantic, structural, opportunity, trace, behavioral, policy,
outcome, causal, and measurement relations from being collapsed. The
canonical output is a typed similarity profile. Scalar aggregation is
optional and requires independent justification.

# 17. Reusable Artifacts

## A. Similarity Ontology

  -----------------------------------------------------------------------
  **Element**                         **Definition**
  ----------------------------------- -----------------------------------
  Comparison target                   The entity or construct being
                                      compared.

  Comparison frame                    Boundary, participants, task,
                                      state, environment, and timescale.

  Representation                      The form available to the
                                      comparison procedure.

  Correspondence mapping              Alignment across states, events,
                                      actions, roles, or features.

  Invariant                           Property required to remain exact.

  Admissible transformation           Difference treated as irrelevant
                                      for a declared comparison.

  Observable set                      Distinctions available to an
                                      observer, instrument, or test
                                      context.

  Distance/predicate                  Typed rule used to determine
                                      discrepancy or equivalence.

  Tolerance                           Maximum admissible discrepancy for
                                      approximate equivalence.

  Uncertainty                         Error and indeterminacy in records,
                                      mappings, measures, and models.

  Validity domain                     Scope over which the comparison
                                      claim is supported.

  Incomparability                     Failure to establish a defensible
                                      common comparison space.
  -----------------------------------------------------------------------

## B. Similarity Taxonomy

  ------------------------------------------------------------------------
  **Type**                **Preserved target**    **Required evidence**
  ----------------------- ----------------------- ------------------------
  Token identity          Historical continuity   Interaction contract,
                          of one bounded episode  provenance

  Type identity           Instantiation of the    Classification rules
                          same                    
                          abstraction-defined     
                          type                    

  Semantic                Denotation, operation   Formal semantics, task
                          meaning, inferential    contract
                          consequences            

  Structural              Topology, dependencies, Graphs, transition
                          branching, concurrency  systems

  Protocol                Sequencing,             Protocol/state-machine
                          preconditions,          model
                          responses, completion   

  Opportunity             Feasible, permitted,    Opportunity contract
                          exposed, signaled,      
                          believed, recoverable   
                          actions                 

  Trace                   Recorded or attributed  Trace model and
                          event order and timing  observation contract

  Behavioral              Attributed trajectory   Behavioral evidence
                          or pattern              contract

  Policy                  State/belief to action  Policy estimates or
                          distribution            model

  Strategy                Higher-order            Multi-episode evidence
                          organization across     
                          contingencies           

  Outcome                 Declared criterion      Outcome contract
                          results                 

  Causal                  Generating dependency   Intervention/causal
                          or mechanism            evidence

  Measurement-relative    Comparability of        Measurement invariance
                          measured quantities     and uncertainty
  ------------------------------------------------------------------------

## C. Interaction Equivalence Hierarchy

  -----------------------------------------------------------------------
  **Relation**            **Required sameness**   **Observation basis**
  ----------------------- ----------------------- -----------------------
  Token identity          Same historical episode Boundary continuity and
                                                  provenance

  Isomorphism             Same structure up to    Exact structural
                          bijective renaming      mapping

  Bisimulation            Stepwise matching       Transition relation
                          including branching     

  Trace equivalence       Same observable traces  Trace language

  Testing/observational   No allowed test/context Declared test contexts
  equivalence             distinguishes systems   

  Semantic equivalence    Same denotation or      Semantic contract
                          declared semantic       
                          consequences            

  Opportunity equivalence Same typed opportunity  Opportunity dimensions
                          profile                 

  Behavioral equivalence  Same attributed         Behavioral variables
                          behavior under          
                          observation contract    

  Policy equivalence      Same action             Policy mapping
                          distributions under     
                          aligned states/beliefs  

  Outcome equivalence     Same declared criterion Outcome metric
                          distribution            

  Approximate equivalence Typed distance within   Metric plus epsilon
                          tolerance and           
                          uncertainty             

  Incomparability         No justified common     Failed
                          space                   alignment/validity
                                                  conditions
  -----------------------------------------------------------------------

## D. Similarity Contract

-   Comparison identifier and purpose

-   Target types and token/type status

-   Interaction contracts and aligned boundaries

-   Participants, tasks, environments, initial conditions, and
    timescales

-   Representations and observation models

-   Correspondence mapping and mapping evidence

-   Required invariants and permitted variants

-   Admissible and prohibited transformations

-   Comparison dimensions

-   Formal predicates, metrics, scales, and parameters

-   Weights and aggregation model, if any

-   Equivalence tolerances and decision rules

-   Missingness and uncertainty budget

-   Sensitivity analyses

-   Evidence level for each claim

-   Validity domain and prohibited generalizations

-   Final typed profile: equivalent, approximately equivalent,
    different, unknown, or incomparable by dimension

## E. Similarity Comparison Protocol

1\. Declare whether the objects are episode tokens, types, models,
traces, behaviors, opportunities, policies, strategies, outcomes, or
mechanisms.

2\. Establish compatible interaction boundaries, participants, tasks,
initial conditions, and timescales.

3\. Specify representations and observation models; audit missingness
and logging coverage.

4\. Define the correspondence mapping across states, actions, events,
roles, and outcomes.

5\. Select dimensions independently; do not infer one from another.

6\. Declare invariants, admissible transformations, and prohibited
transformations.

7\. Choose metrics or formal predicates with scale assumptions and known
failure modes.

8\. Set tolerances before inspecting results where confirmatory claims
are intended.

9\. Propagate measurement and model uncertainty.

10\. Report a typed comparison profile with equivalence, similarity,
difference, unknown, or incomparable for each dimension.

11\. Test robustness to alternative boundaries, mappings, metrics,
weights, and segmentation.

12\. State the validity domain and prohibited generalizations.

## F. Admissible Transformation Matrix

  ---------------------------------------------------------------------------------------------
  **Transformation**            **Candidate           **Admissible?**   **Principal
                                dimensions**                            constraint**
  ----------------------------- --------------------- ----------------- -----------------------
  Label renaming                Structural/protocol   Yes, with         No if labels carry
                                                      bijection         semantic or signaling
                                                                        content

  Time translation              Trace/behavior        Usually           No when calendar
                                                                        position matters

  Time scaling                  Pattern/strategy      Conditional       No when absolute
                                                                        latency is a target

  Dynamic time warping          Temporal pattern      Conditional       Can conceal meaningful
                                                                        delay

  Silent-step insertion         Weak behavioral       Conditional       No when internal work
                                equivalence                             affects cost/risk

  Independent-event reordering  Partial-order         Yes if            No if order has
                                behavior              independence      causal/semantic force
                                                      proven            

  Aggregation/coarse-graining   Type/structural       Conditional       Must preserve declared
                                                                        invariants

  Modality substitution         Semantic/outcome      Conditional       Not automatically
                                                                        perceptual/behavioral
                                                                        equivalent

  Implementation substitution   Semantic/protocol     Conditional       Requires verified
                                                                        obligations

  Participant substitution      Type-level comparison Conditional       Not token identity;
                                                                        observer assumptions
                                                                        change
  ---------------------------------------------------------------------------------------------

## G. Falsification Matrix

  ------------------------------------------------------------------------
  **Claim/test**          **Falsifying evidence**  **Consequence**
  ----------------------- ------------------------ -----------------------
  F1 Universal relation   One established relation Remove typed framework
                          captures all comparison  and adopt it
                          dimensions without loss  

  F2 Unreliable           Opportunity, behavior,   Restrict framework to
  dimensions              or strategy dimensions   reliable dimensions
                          cannot be measured       
                          reproducibly             

  F3 No added value       Typed profile gives no   Prefer the simpler
                          explanatory/predictive   metric
                          gain over one metric     

  F4 Arbitrary mappings   Independent analysts     Treat claims as
                          cannot agree on          analyst-relative or
                          correspondence under     incomparable
                          explicit rules           

  F5 Incomparability      All cases admit          Remove incomparability
  unnecessary             justified common spaces  as a primitive status

  F6 Aggregation          Composite conclusions    Reject scalar summary
  robustness              reverse under plausible  
                          weights                  

  F7 Trace sufficiency    Trace similarity         Collapse higher
                          predicts every relevant  dimensions where
                          comparison outcome       demonstrated

  F8 Cross-context        Measurement relations do Limit validity domain
  invariance failure      not remain invariant     
                          across groups/modalities 
  ------------------------------------------------------------------------

# 18. References

Tversky, A. (1977). Features of similarity. Psychological Review, 84(4),
327-352.

Shepard, R. N. (1987). Toward a universal law of generalization for
psychological science. Science, 237, 1317-1323.

Levenshtein, V. I. (1966). Binary codes capable of correcting deletions,
insertions, and reversals. Soviet Physics Doklady, 10, 707-710.

Sakoe, H., & Chiba, S. (1978). Dynamic programming algorithm
optimization for spoken word recognition. IEEE Transactions on
Acoustics, Speech, and Signal Processing, 26(1), 43-49.

Sanfeliu, A., & Fu, K. S. (1983). A distance measure between attributed
relational graphs for pattern recognition. IEEE Transactions on Systems,
Man, and Cybernetics, 13(3), 353-362.

Bunke, H. (1997). On a relation between graph edit distance and maximum
common subgraph. Pattern Recognition Letters, 18, 689-694.

Milner, R. (1989). Communication and Concurrency. Prentice Hall.

van Glabbeek, R. J. (1990). The linear time-branching time spectrum. In
CONCUR 1990. Springer.

Park, D. (1981). Concurrency and automata on infinite sequences. In
Theoretical Computer Science. Springer.

Lange, M., Lozes, E., & Vargas Guzman, M. (2013). Model-checking process
equivalences. Theoretical Computer Science, 560, 326-347.

Abate, A., Bacci, G., Bacci, G., & Larsen, K. G. (2017). On the
relationship between bisimulation and trace equivalence in an
approximate probabilistic context.

van der Aalst, W. M. P. (2016). Process Mining: Data Science in Action
(2nd ed.). Springer.

Syring, A. F., Tax, N., & van der Aalst, W. M. P. (2019). Evaluating
conformance measures in process mining using conformance propositions.

García-Bañuelos, L., van Beest, N. R. T. P., Dumas, M., La Rosa, M., &
Mertens, W. (2018). Complete and interpretable conformance checking of
business processes. IEEE Transactions on Software Engineering, 44(3),
262-290.

Suppes, P., Krantz, D. H., Luce, R. D., & Tversky, A. (1989).
Foundations of Measurement, Vol. II. Academic Press.

Kruskal, J. B., & Wish, M. (1978). Multidimensional Scaling. Sage.

Gower, J. C. (1971). A general coefficient of similarity and some of its
properties. Biometrics, 27, 857-871.

Rosenbaum, P. R. (2020). Design of Observational Studies (2nd ed.).
Springer.

ISO 9241-11:2018. Ergonomics of human-system interaction - Usability:
Definitions and concepts.

Card, S. K., Moran, T. P., & Newell, A. (1983). The Psychology of
Human-Computer Interaction. Erlbaum.

Hutchins, E. (1995). Cognition in the Wild. MIT Press.

Suchman, L. A. (1987). Plans and Situated Actions. Cambridge University
Press.
