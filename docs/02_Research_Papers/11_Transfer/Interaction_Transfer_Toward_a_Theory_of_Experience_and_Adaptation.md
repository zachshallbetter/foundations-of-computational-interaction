**Interaction Transfer**

*Toward a Theory of Experience and Adaptation*

Cross-disciplinary research paper

# Abstract

Interaction transfer is the influence of prior interaction experience on
performance, interpretation, opportunity recognition, strategy, or
learning in a later interaction under changed conditions. It is not
synonymous with learning, familiarity, repetition, expertise, or
successful generalization. Learning is change attributable to
experience; transfer is evidence that some consequence of prior
experience affects a distinct target context. Familiarity denotes prior
exposure and may produce fluency without transferable structure.
Expertise is durable, organized performance within a domain and may
remain highly context-specific.

Across cognitive psychology, learning sciences, skill acquisition,
expertise research, reinforcement learning, transfer learning, activity
theory, distributed cognition, and HCI, existing theories provide the
required mechanisms: common elements, abstraction, analogical mapping,
schema induction, procedural compilation, policy reuse, representation
alignment, retrieval, contextual cueing, habit, metacognitive control,
and socially distributed practice. No new mental substance called
interaction memory is required. What is missing is a shared
interaction-level contract that specifies the source episode, target
episode, transferred content, mediating mechanism, preserved relations,
context shift, measurement model, and counterfactual evidence.

The paper therefore concludes that existing theories are sufficient but
require a typed cross-disciplinary transfer framework. The proposed
model represents experience as changes to agent, artifact, environment,
and coordination state. Transfer is classified by what changes, where it
is expressed, its direction, distance, durability, intentionality, and
dependence on representation. The reusable artifacts include a transfer
ontology, adaptation model, transfer taxonomy, interaction-experience
model, metric registry, transfer contract, comparison protocol, and
falsification matrix.

# 1. Problem Statement

Prior interaction often changes later interaction, but the phrase
"experience transfers" compresses several different claims. A person may
become faster because the same motor sequence is repeated, may recognize
a structurally similar command in a new interface, may reuse a strategy
across software families, may apply an inappropriate habit, or may
reconstruct a solution through analogy. An artificial agent may
initialize a policy from a related task, reuse a representation, or
exploit shared dynamics. A team may retain coordination routines in
artifacts and procedures rather than in any single member.

A scientific theory must therefore answer four questions separately:
what changed because of the source interaction; what component of that
change was available in the target; what relation between source and
target licensed reuse; and what evidence shows that target behavior
depended on the source rather than on baseline ability, repeated
exposure, task similarity, or measurement artifact.

# 2. Method and Scope

The review used concept comparison rather than disciplinary summary.
Foundational accounts of transfer, skill, expertise, analogy, situated
learning, reinforcement learning, transfer learning, distributed
cognition, and HCI migration were compared by their units, mechanisms,
boundary conditions, and evidence requirements. The analysis treated the
completed Interaction, Behavior, Measurement, Opportunity,
Representation, and Similarity frameworks as constraints, not as
evidence that a new construct is needed.

The main falsification question was whether "interaction transfer" adds
explanatory content beyond existing theories. The candidate framework
was retained only where it coordinates distinctions that established
theories already support but do not jointly expose.

# 3. Existing Theories of Transfer

## 3.1 Common elements and structural overlap

Thorndike and Woodworth's identical-elements tradition explains transfer
through overlap between source and target demands. Later cognitive
accounts replace literal stimulus identity with shared productions,
procedures, relations, or representational components. This family
explains why near transfer is common and why far transfer is difficult.
Its limit is that "shared element" depends on the level of
representation: two interfaces can differ visually while preserving an
operation grammar, or appear similar while implementing different
semantics.

## 3.2 Abstraction, schema, and analogy

Schema and analogical-transfer theories explain reuse when a learner
abstracts relational structure from examples, retrieves a relevant
source, maps corresponding relations, and adapts the solution. Transfer
may fail at retrieval even when a useful analogy exists, or fail at
mapping when superficial similarity dominates. Representation therefore
affects transfer by changing which invariants are salient and
recoverable, not by directly determining behavior.

## 3.3 Skill acquisition and procedural knowledge

Skill theories distinguish declarative knowledge, proceduralization,
compilation, chunking, automaticity, and adaptive control. Practice can
reduce time and error while narrowing flexibility. Procedural knowledge
transfers when target conditions preserve relevant productions or
control structures; automatic habits can create negative transfer when
changed contingencies are not detected.

## 3.4 Expertise

Expertise reorganizes perception, memory, diagnosis, and strategy around
domain-relevant structure. Experts notice relations that novices miss,
but expert performance is not a general transferable capacity. It is
often conditional on representative tasks, feedback histories, and
domain-specific knowledge. Expertise must therefore be measured as a
profile of calibrated performance and representation, not inferred from
tenure or status.

## 3.5 Reinforcement learning and transfer learning

Reinforcement learning formalizes transfer through reused value
functions, policies, representations, options, models, demonstrations,
or successor features. Machine-learning transfer theory separates source
and target domains and tasks, and recognizes negative transfer when
reused structure harms target performance. These formalisms are precise
about optimization but often abstract away human interpretation,
cultural practice, artifact mediation, and discoverability.

## 3.6 Situated, activity, and distributed accounts

Situated and activity theories challenge the assumption that
transferable knowledge is an internal package carried unchanged between
contexts. What persists may be participation, routines, artifact
configurations, conventions, or access to distributed resources.
Transfer can be a transformation of participation or coordination rather
than retrieval of an invariant internal representation. A general
framework must therefore permit agent-internal, artifact-mediated,
social, and environmental carriers.

# 4. Canonical Distinctions

Learning is a relatively durable change in capability, representation,
policy, or behavior attributable to experience. Transfer is a
source-dependent difference in a target context that is not identical to
the learning context. Adaptation is change that improves or regulates
fit to current conditions; it may arise without transfer from a distinct
source. Familiarity is prior exposure to a person, representation,
operation, or context; it is a predictor, not a mechanism or outcome.
Practice is repeated performance. Expertise is organized, reliable, and
often efficient performance within a domain. Habit is cue-dependent
action tendency strengthened by repetition. Generalization is extension
of a learned function to unobserved cases and is one formal species of
transfer. Retention concerns persistence over time without requiring
contextual change.

# 5. What Transfers?

The literature does not support one transferable entity. At least eight
carrier types recur:

-   Perceptual attunement: sensitivity to cues, invariants, or
    diagnostic structure.

-   Semantic knowledge: concepts, relations, rules, and causal models.

-   Procedures and skills: action sequences, productions, motor
    programs, and operation grammars.

-   Strategies and policies: conditional organization of actions under
    goals and contingencies.

-   Expectations and beliefs: anticipated availability, consequence,
    risk, and reversibility.

-   Values and preferences: learned utility, cost, confidence, and
    avoidance structure.

-   Externalized structure: notes, templates, macros, layouts,
    documentation, and shared artifacts.

-   Coordination practices: roles, conventions, communication routines,
    and division of labor.

These carriers can transfer independently. A user may retain semantic
knowledge but lose motor fluency after modality migration; preserve a
strategy while relearning commands; retain a habit that becomes harmful;
or use an external artifact without internal recall.

# 6. Interaction Experience Model

An interaction experience is represented as an update, not merely an
episode record. Let an experience update be:

ΔE = ⟨ΔK, ΔP, ΔB, ΔV, ΔH, ΔA, ΔC, ΔM, U⟩

where ΔK is change in semantic or causal knowledge; ΔP is procedural or
policy change; ΔB is change in beliefs about actions and consequences;
ΔV is value or preference change; ΔH is habit strength; ΔA is perceptual
attunement; ΔC is change in coordination practices; ΔM is change to
external memory or artifacts; and U records uncertainty and attribution.

The source interaction does not deposit a complete transferable object.
It changes a distributed experience state spanning agent, artifacts,
environment, and social organization. A later target interaction
recruits some subset of that state under target cues and constraints.

# 7. Candidate Adaptation Model

Transfer from source S to target T is modeled as a sequence:

1\. Acquisition: source interaction changes one or more experience-state
components.\
2. Retention: some change persists until the target episode.\
3. Access: target cues, goals, or deliberate search activate relevant
prior structure.\
4. Correspondence: source and target elements or relations are aligned.\
5. Reuse: prior knowledge, procedure, policy, artifact, or coordination
routine is applied.\
6. Adaptation: reused structure is modified for target constraints.\
7. Evaluation: feedback reveals fit, mismatch, or uncertainty.\
8. Consolidation or revision: the experience state is strengthened,
differentiated, suppressed, or reorganized.

Transfer success is therefore conjunctive. Failure can arise from
absence of learning, decay, retrieval failure, poor correspondence,
rigid reuse, inadequate opportunity, altered authority, incompatible
representation, or misleading feedback.

# 8. Formal Definition

Let S and T be source and target interaction contexts under declared
similarity and measurement contracts. Let Y_T be a target measure and
do(S=1) denote exposure to the source experience. Transfer exists for
population or agent x when:

τ = E\[Y_T \| do(S=1)\] - E\[Y_T \| do(S=0)\] ≠ 0

and the target differs from the source on at least one declared
contextual or representational dimension. Positive transfer has τ in the
desired direction; negative transfer has τ in the harmful direction;
null transfer is compatible with learning when source gains do not
affect the target.

Mechanistic transfer claims additionally require evidence that a
specified carrier or mediator changed after S, was available or
retrieved in T, and accounted for part of τ under plausible
alternatives. Observed target superiority alone establishes neither the
mechanism nor the transferred content.

# 9. Transfer Taxonomy

Transfer should be typed along independent axes rather than labeled
simply near or far:

  -----------------------------------------------------------------------
  **Axis**                **Values**              **Question**
  ----------------------- ----------------------- -----------------------
  Direction               positive, negative,     Did prior experience
                          null, mixed             help, harm, or have
                                                  heterogeneous effects?

  Distance                declared                Across what changes in
                          multidimensional        task, representation,
                          source-target           modality, device,
                          difference              domain, time, and
                                                  social context?

  Carrier                 knowledge, procedure,   What consequence of
                          policy, belief, value,  experience was reused?
                          habit, attunement,      
                          artifact, coordination  

  Access                  spontaneous, cued,      How was prior structure
                          prompted, instructed    recruited?

  Level                   event, action, episode, At what behavioral
                          strategy, practice      organization was
                                                  transfer expressed?

  Duration                immediate, delayed,     How long did the effect
                          durable, decaying       persist?

  Intentionality          deliberate, incidental, Was transfer
                          automatic               consciously attempted?

  Distribution            individual,             Where was transferable
                          artifact-mediated,      structure carried?
                          collective,             
                          environmental           

  Specificity             token, type,            What invariant
                          relational,             supported
                          principle-based         correspondence?
  -----------------------------------------------------------------------

# 10. Comparative Cases

## 10.1 Interface migration

Migration between software versions can preserve task semantics while
changing layout, labels, shortcuts, or workflow. Semantic and strategic
transfer may be positive, motor and habitual transfer negative, and
discoverability reduced. "Familiar interface" is therefore not a unitary
condition.

## 10.2 Modality migration

Moving from visual to auditory or tactile interaction may preserve
operations and outcomes while changing seriality, memory load, cue
persistence, navigation, and error recovery. Transfer should be assessed
separately for semantic knowledge, strategy, command vocabulary, spatial
mapping, and timing.

## 10.3 Cross-device interaction

Desktop, tablet, and mobile variants may share content and account state
but differ in gesture vocabulary, screen real estate, interruption
patterns, and exposed opportunity. Transfer depends on preserved
operation grammar and representation cues, not brand identity alone.

## 10.4 Software families

Shared conventions across applications can support rapid transfer of
editing, navigation, and file-management procedures. False friends -
identical symbols with different effects - produce negative transfer.
Family resemblance must be decomposed into semantic, structural,
opportunity, and protocol similarity.

## 10.5 Expert and novice

Experts often transfer abstract relations and diagnostic cues, while
novices rely on surface correspondence. Yet expertise can impair
transfer when automated routines suppress detection of changed
constraints. Group labels should be replaced by measured knowledge,
strategy, calibration, and source exposure.

## 10.6 Repeated task performance

Improvement on the same task establishes practice and retention, not
transfer. A valid transfer test must alter at least one declared
dimension and preserve a defensible basis for comparison. Otherwise
source and target are repetitions of one condition.

# 11. Measurement and Metrics

Transfer measurement must inherit the Measurement Contract. The source
and target constructs, observation models, scales, segmentation,
uncertainty, and comparison frame must be declared. Recommended metrics
include:

-   Target effect: controlled difference in target performance
    attributable to source exposure.

-   Transfer efficiency: target gain relative to source practice cost or
    exposure.

-   Savings: reduction in trials, time, or error needed to reach a
    criterion.

-   Generalization gradient: effect magnitude across declared
    source-target distances.

-   Belief transfer: change in precision, recall, and calibration of
    believed action sets.

-   Strategy reuse: probability of an inferred strategy under target
    contingencies, with uncertainty.

-   Negative-transfer cost: excess error, latency, recovery, or risk
    caused by inappropriate reuse.

-   Durability: transfer effect as a function of delay.

-   Adaptation rate: speed with which reused structure is revised after
    mismatch.

-   Representation sensitivity: interaction between source-target
    representation change and transfer.

Self-report of usefulness is evidence about perceived transfer, not
proof of behavioral transfer. Faster target performance may reflect
familiarity, motor priming, motivation, selection, or common task
ability. Mediation claims require temporally ordered carrier
measurements and sensitivity analysis.

# 12. Transfer Protocol

1\. Declare source and target interaction contracts.\
2. Specify which target dimensions differ and which invariants license
comparison.\
3. Define the candidate carrier and mechanism before observing target
outcomes.\
4. Measure source learning separately from target transfer.\
5. Include a no-source or alternative-source counterfactual.\
6. Control prior exposure, baseline ability, motivation, device access,
and opportunity structure.\
7. Test immediate and delayed target performance where durability
matters.\
8. Measure positive, negative, and null outcomes, including recovery and
strategy change.\
9. Separate direct observations, derived features, latent carriers, and
causal conclusions.\
10. Report uncertainty, heterogeneity, exclusions, and boundary
conditions.\
11. Replicate across at least one additional target context before
claiming generality.

# 13. Falsification Matrix

  -----------------------------------------------------------------------
  **Claim**               **Evidence against**    **Consequence**
  ----------------------- ----------------------- -----------------------
  Interaction transfer    Established learning    Reject new primitive;
  needs a special         and transfer models     retain only
  primitive               explain all observed    coordination vocabulary
                          effects with no loss    

  Source-target           Transfer is unrelated   Revise similarity
  similarity predicts     to declared             dimensions or reject
  transfer                similarities after      overlap mechanism
                          controls                

  Belief mediates         Belief change is        Remove belief mediation
  interface transfer      unreliable or does not  claim
                          predict target action   

  Strategy reuse supports Target gains occur      Treat outcome gain as
  far transfer            without evidence of     unexplained transfer
                          strategy access or      
                          adaptation              

  Distributed carriers    Removing artifacts and  Narrow framework to
  matter                  coordination resources  agent-internal carriers
                          leaves effects          for that domain
                          unchanged               

  Transfer differs from   Exposure-only controls  Classify effect as
  familiarity             explain the full target familiarity or
                          effect                  repetition, not
                                                  structural transfer

  Framework improves      Typed variables add no  Reduce framework to
  prediction              held-out gain over      descriptive taxonomy
                          source exposure and     
                          target similarity       
  -----------------------------------------------------------------------

# 14. Threats to Validity

Transfer is unusually sensitive to source-target definition. Researchers
can manufacture "far transfer" by describing contexts broadly or
manufacture "near transfer" by choosing fine-grained dimensions.
Distance must therefore be a declared vector, not an intuitive label.

Selection and expectancy threaten causal inference: experienced users
differ before the source episode, and participants may infer target
hypotheses. Practice effects, regression, instrumentation change, and
repeated testing can mimic transfer. Latent carriers such as strategy
and schema are model-dependent and should not be inferred from one
trace.

The framework may privilege well-bounded computational tasks. Open-ended
work, collective practice, and changing institutions can transform the
target itself. In such cases transfer may be better described as
recontextualization or development of activity rather than transport of
stable content.

# 15. Reusable Artifacts

## A. Transfer Ontology

Entities: source interaction, target interaction, agent or collective,
experience-state component, carrier, cue, correspondence, adaptation,
outcome, artifact, context, delay, measurement model.

Relations: acquired-in, retained-until, cued-by, corresponds-to,
reused-in, adapted-for, mediated-by, expressed-as, improves, impairs,
persists, decays, and is-measured-by.

## B. Transfer Contract

Identity: source and target episode identifiers, boundaries, timescales,
participants, and tasks.\
Source learning: experience component changed, evidence, magnitude, and
uncertainty.\
Target shift: changed and preserved dimensions across semantic,
structural, representational, opportunity, modality, device, social, and
temporal axes.\
Carrier: knowledge, procedure, strategy, belief, value, habit,
attunement, artifact, or coordination practice.\
Mechanism: retrieval, analogy, shared production, policy reuse, cueing,
abstraction, compilation, or participation transformation.\
Outcome: direct measures, derived metrics, latent estimates, direction,
durability, and heterogeneity.\
Counterfactual: control condition and assumptions supporting source
attribution.\
Failure conditions: no source learning, no retention, access failure,
mismatch, negative transfer, confounding, or measurement non-invariance.

## C. Experience Model

Experience is represented as a versioned update to distributed state
rather than as a scalar amount. Each update records source episode,
affected component, direction, confidence, persistence estimate,
contexts in which it has been expressed, and known failure conditions.

## D. Metric Registry

  --------------------------------------------------------------------------
  **Metric**          **Numerator /     **Required        **Prohibited
                      estimand**        controls**        interpretation**
  ------------------- ----------------- ----------------- ------------------
  Target transfer     Counterfactual    Baseline, prior   Does not identify
  effect              target difference exposure, target  carrier
                                        opportunity       

  Savings             Trials/time saved Criterion         Not generality by
                      to criterion      equivalence,      itself
                                        practice dose     

  Generalization      Effect across     Stable            Distance is not
  gradient            distance vector   measurement and   one-dimensional
                                        target difficulty 

  Strategy reuse      Posterior         Trace             Not directly
                      probability or    comparability,    observed intention
                      coded recurrence  alternative       
                                        strategies        

  Negative-transfer   Excess harm       Target semantics  Not evidence of
  cost                relative to       and feedback      low ability
                      control                             

  Durability          Effect over delay Retention         Immediate effect
                                        interval and      is not durable
                                        intervening       transfer
                                        experience        
  --------------------------------------------------------------------------

# 16. Conclusion

Existing theories of learning, transfer, expertise, adaptation, analogy,
skill, reinforcement learning, and situated practice are sufficient to
explain the known constituents of interaction transfer. The evidence
does not justify a new primitive or a container called interaction
memory.

A cross-disciplinary synthesis is nevertheless warranted. Computational
interaction research requires a typed account because representation,
opportunity, semantic structure, motor procedure, strategy, belief,
artifact support, and coordination can transfer differently. Transfer is
best defined as a source-dependent difference expressed in a distinct
target context under declared source-target relations and a valid
counterfactual. The scientific burden is not to show that experienced
agents perform differently, but to specify what changed, how it was
accessed, why it applied, what was adapted, and which alternative
explanations were excluded.

# 17. References

Thorndike, E. L., & Woodworth, R. S. (1901). The influence of
improvement in one mental function upon the efficiency of other
functions. Psychological Review.

Judd, C. H. (1908). The relation of special training to general
intelligence. Educational Review.

Singley, M. K., & Anderson, J. R. (1989). The Transfer of Cognitive
Skill. Harvard University Press.

Barnett, S. M., & Ceci, S. J. (2002). When and where do we apply what we
learn? A taxonomy for far transfer. Psychological Bulletin, 128(4),
612-637.

Bransford, J. D., Brown, A. L., & Cocking, R. R. (Eds.). (2000). How
People Learn. National Academies Press.

National Academies of Sciences, Engineering, and Medicine. (2018). How
People Learn II. National Academies Press.

Gentner, D. (1983). Structure-mapping: A theoretical framework for
analogy. Cognitive Science, 7, 155-170.

Gick, M. L., & Holyoak, K. J. (1983). Schema induction and analogical
transfer. Cognitive Psychology, 15, 1-38.

Anderson, J. R. (1982). Acquisition of cognitive skill. Psychological
Review, 89, 369-406.

Fitts, P. M., & Posner, M. I. (1967). Human Performance. Brooks/Cole.

Ericsson, K. A., Krampe, R. T., & Tesch-Romer, C. (1993). The role of
deliberate practice in the acquisition of expert performance.
Psychological Review, 100, 363-406.

Lave, J. (1988). Cognition in Practice. Cambridge University Press.

Greeno, J. G., Smith, D. R., & Moore, J. L. (1993). Transfer of situated
learning. In Transfer on Trial.

Beach, K. (1999). Consequential transitions: A sociocultural expedition
beyond transfer in education. Review of Research in Education, 24,
101-139.

Hutchins, E. (1995). Cognition in the Wild. MIT Press.

Engestrom, Y. (1987). Learning by Expanding. Orienta-Konsultit.

Sutton, R. S., Precup, D., & Singh, S. (1999). Between MDPs and
semi-MDPs: A framework for temporal abstraction in reinforcement
learning. Artificial Intelligence, 112, 181-211.

Taylor, M. E., & Stone, P. (2009). Transfer learning for reinforcement
learning domains: A survey. Journal of Machine Learning Research, 10,
1633-1685.

Pan, S. J., & Yang, Q. (2010). A survey on transfer learning. IEEE
Transactions on Knowledge and Data Engineering, 22(10), 1345-1359.

Thorndike, R. L. (1949). Personnel Selection: Test and Measurement
Techniques. Wiley.

Norman, D. A. (2013). The Design of Everyday Things. Basic Books.

Card, S. K., Moran, T. P., & Newell, A. (1983). The Psychology of
Human-Computer Interaction. Erlbaum.

Suchman, L. A. (1987). Plans and Situated Actions. Cambridge University
Press.
