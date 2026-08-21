Formal research paper

July 2026

  -----------------------------------------------------------------------
  **Final determination: 3. A general theory of projection is justified,
  but semantic invariance requires strict scope conditions.**
  -----------------------------------------------------------------------

  -----------------------------------------------------------------------

# Abstract

Representation is not one homogeneous relation. Across semiotics,
philosophy of science, mathematics, logic, cognitive science,
cartography, information visualization, programming languages,
databases, compilers, accessibility, and human-computer interaction, a
representation is treated variously as a sign relation, a model, a
structure-preserving mapping, an encoding, an external cognitive
resource, an abstraction, a view, or a public instrument. No single
definition subsumes these traditions without loss. A stable
cross-disciplinary core nevertheless emerges: a representation is a
materially or formally realized vehicle used within an interpretive
practice to provide selective access to a declared target under a
mapping or rule of correspondence. Representations preserve some
relations and observables, transform others, omit others, and introduce
operations, saliences, ambiguities, and costs. Equivalence is therefore
typed rather than absolute. Syntactic, semantic, informational,
structural, topological, computational, inferential, task, perceptual,
behavioral, and interactional equivalence impose different identity
conditions and require explicit observers, contexts, metrics, and
tolerances.

The paper evaluates whether \'projection\' adds explanatory value beyond
representation. Existing theories supply most component mechanisms:
model morphisms, abstraction functions, database views, bidirectional
lenses, encodings, simulations, and scientific models. They do not
provide one shared contract linking preservation and loss to epistemic
access and action opportunity across formal and empirical domains.
Projection is therefore justified as a cross-disciplinary analytical
role, not as a new primitive substance: a declared transformation from a
target description to a representation form for specified observers and
uses. Semantic invariance is coherent only when the target content,
interpretation rules, admissible contexts, observables, and tolerance
are fixed. Informational equivalence does not imply inferential,
perceptual, task, behavioral, or interactional equivalence. The
resulting reusable artifacts are a representation taxonomy, typed
equivalence matrix, projection contract, comparison protocol, and
falsification matrix.

Primary contribution: representation change can be analyzed rigorously
by declaring a target, mapping, preservation profile, loss profile,
operations, observer model, use conditions, and failure conditions; no
unqualified semantic-invariance claim is scientifically defensible.

# 1. Problem Statement

Scientific and computational work depends on representations while
repeatedly warning that representations are not their targets.
Equations, diagrams, data tables, maps, simulations, source code,
database views, interfaces, and narratives can concern the same target
yet support different inferences and actions. The central problem is not
merely that formats differ. It is that every representation selects
structure, establishes observables, redistributes cognitive work, and
constrains what can be inspected or changed.

Three errors follow from treating representation as transparent. First,
identity is inferred from common reference: two vehicles are assumed
equivalent because they concern the same target. Second, meaning is
inferred from information preservation: equal recoverable data are
assumed to yield equal understanding. Third, behavior is attributed
directly to representation without specifying observers, tasks, prior
knowledge, context, or available operations. This paper rejects all
three inferences.

The research question is: What is a representation, what can remain
invariant across representations, and what changes when the same
underlying target is represented differently? The inquiry is independent
of specific interfaces and software architectures. It asks whether
existing theories are sufficient or whether a general theory of
projection is required to coordinate them.

# 2. Literature Review Method

The review uses a structured conceptual synthesis rather than a
statistical meta-analysis. It samples foundational and primary work from
philosophy of science and language, semiotics, formal logic,
mathematics, scientific modeling, information theory, cognitive science,
distributed and external cognition, visualization, cartography,
programming-language semantics, compilers, databases, knowledge
representation, accessibility, and HCI. Sources were selected when they
explicitly define representation, specify a mapping or interpretation
relation, characterize preservation or loss, define an equivalence
relation, or report effects of representational form on reasoning and
action.

Claims were coded along eight dimensions: vehicle, target, mapping,
interpreter, preserved properties, transformed or omitted properties,
available operations, and evaluation criterion. Contradictory positions
were retained. The synthesis does not use a pre-existing interaction
ontology as evidence. It distinguishes observations reported in
empirical studies from philosophical interpretation and from the
paper\'s proposed analytical framework.

Limitations are material. Several traditions use the same word for
different roles, while others avoid the word but formalize related
structures. Formal results establish properties relative to stipulated
semantics and observables; they do not automatically generalize to human
interpretation. Empirical results establish performance effects under
specific tasks and populations; they do not prove universal
representational mechanisms.

# 3. Major Theories of Representation

## 3.1 Semiotic and referential accounts

Peircean semiotics treats a sign through a triadic relation among sign,
object, and interpretant. Signhood is relational rather than an
intrinsic property of a vehicle. This blocks a target-only definition: a
mark is not a representation merely by resembling or correlating with
something; it functions representationally through an interpretive
relation. Saussurean traditions emphasize differences within a sign
system and conventional relations between signifier and signified.
Goodman rejects resemblance as a necessary basis of representation and
analyzes symbol systems through reference, denotation, exemplification,
and syntactic and semantic differentiation.

Strength: these accounts explain why identical vehicles may mean
differently across practices and why dissimilar vehicles may represent
the same target. Limit: they offer limited quantitative guidance about
preserved structure, computational behavior, or task performance. Their
central constraint is indispensable: representation requires a
rule-governed relation, not mere physical similarity.

## 3.2 Philosophy of science and scientific modeling

Scientific-representation theories disagree over whether representation
is resemblance, isomorphism, partial isomorphism, similarity, inference,
or use. Structural accounts emphasize mappings between model structure
and target structure. Similarity accounts make representation selective
and purpose-relative. Inferential conceptions emphasize a model\'s
capacity to license competent reasoning about a target. Pragmatic
accounts place agents, purposes, and contexts inside the representation
relation. Perspectival approaches stress that scientific representations
disclose selected aspects under conditions rather than mirror complete
reality.

A common result is negative: no representation represents everything
about its target. Scientific models idealize, abstract, distort, and
sometimes deliberately misrepresent while remaining epistemically
useful. Accuracy is multidimensional and purpose-relative, but not
arbitrary; empirical fit, robustness, inferential reliability, and error
characterization constrain acceptable use.

## 3.3 Mental, external, and distributed representation

Cognitive science uses \'representation\' for internal states or
structures that carry content and participate in computation, but
representationalism is contested by ecological, enactive, and dynamical
approaches. External-cognition research shifts attention from internal
content to the joint system formed by agents and external structures.
Zhang and Norman\'s representational analysis shows that formally
equivalent task structures can distribute information differently
between mind and environment, changing memory demands and permissible
operations. Hutchins extends the unit to socially and materially
distributed cognitive systems.

Strength: these traditions explain why a vehicle can reorganize
reasoning without changing target information. Limit: claims about
internal representations remain theoretically disputed, and external
performance effects depend on learned conventions, perceptual
capacities, and task structure.

## 3.4 Mathematics, logic, and model theory

Mathematics supplies precise preservation vocabulary. A homomorphism
preserves specified operations or relations; an isomorphism is a
structure-preserving bijection with an inverse of the relevant kind;
homeomorphism preserves topological structure; equivalence relations
partition objects under declared criteria. Model theory distinguishes a
formal language, a structure interpreting it, and satisfaction. Logical
equivalence concerns truth across interpretations; elementary
equivalence concerns satisfaction of the same first-order sentences;
definitional and categorical equivalences impose different translations
between theories.

These results establish that invariance is always indexed to structure.
Isomorphic objects may differ physically; homeomorphic spaces may differ
metrically; logically equivalent expressions may differ cognitively or
computationally. Formal equivalence cannot be transferred across levels
without proof.

## 3.5 Information theory and coding

Information theory formalizes uncertainty reduction, channel capacity,
coding, and loss without supplying semantic meaning. Shannon explicitly
brackets semantic aspects of communication from the engineering problem.
Lossless coding permits exact reconstruction of a source sequence under
a code; lossy coding permits controlled distortion under a measure.
Sufficient statistics preserve all information in a sample relevant to a
specified parameter, demonstrating again that preservation is relative
to an inferential target.

Strength: exact measures of recoverability, uncertainty, and distortion.
Limit: identical information-theoretic content can support different
interpretations, inferences, and actions. Semantic or behavioral
equivalence cannot be inferred from entropy or decodability alone.

## 3.6 Cartography and information visualization

Cartography treats projection explicitly as a mapping from one geometric
surface to another. No flat world map preserves area, angle, shape,
direction, and distance globally. Projection families declare which
properties are preserved and where distortion occurs. Visualization
similarly encodes data attributes into graphical marks and channels.
Graphical-perception experiments show that encodings differ in decoding
accuracy; position along a common scale generally supports more accurate
quantitative judgment than area or volume. A visualization may therefore
be data-correct while inferentially poor.

These fields provide the clearest empirical analogy for a projection
contract: source domain, target form, invariant class, distortion class,
and intended use must be stated together.

## 3.7 Programming languages, compilers, and computation

Programming-language semantics distinguishes syntax from denotation,
operational behavior, and observations. Two programs may be
syntactically different yet denotationally equivalent, contextually
equivalent, or bisimilar under defined observations. Compiler
correctness is commonly expressed as preservation of semantics or
observable behavior from source to target, with explicit allowances for
undefined behavior, resource variation, and implementation-specific
observations.

Abstract interpretation formalizes sound approximation between concrete
and abstract semantic domains, often through Galois connections.
Soundness preserves truth of specified properties from abstraction to
concrete behavior; completeness is stronger and frequently unavailable.
This is a mature theory of projection-like mapping, but its scope is
formal semantic analysis rather than human epistemic access.

## 3.8 Databases, views, and bidirectional transformations

Codd\'s relational model separates logical data structure from physical
representation and motivates data independence. A database view exposes
a derived representation of source data. View-update theory asks how
changes to the view correspond to changes in the source. Bidirectional
transformations and lenses formalize paired mappings subject to
round-trip laws. These theories demonstrate that projection is not only
read access: available updates and their consistency conditions are part
of the representational relation.

Limit: database equivalence normally presumes formal schemas and
well-defined queries. It does not explain salience, discoverability,
perceptual interpretation, or learned action strategies.

## 3.9 Knowledge representation

Knowledge representation treats formal languages as surrogates for
domains, commitments about what exists, fragments of reasoning, media
for computation, and means of human expression. Ontologies, description
logics, frames, semantic networks, and probabilistic models preserve
different inferential commitments. Expressiveness trades off against
tractability and decidability. Two formalisms may encode corresponding
facts yet differ in what can be inferred efficiently or transparently.

## 3.10 Accessibility, multimodality, and HCI

Accessibility standards distinguish content and relationships from
sensory presentation. Requirements not to depend solely on color, shape,
location, or sound imply that a target instruction or relation should
survive modality change. Yet modality substitution is not identity:
spatial overview, temporal scanning, privacy, precision, fatigue, and
learnability can differ. HCI adds mappings, feedback, signifiers,
constraints, and action availability. Interface forms are therefore not
passive displays of an invariant semantics; they mediate observation and
intervention.

# 4. Representation-Target Relations

A representation cannot be adequately defined by a vehicle alone. The
minimum relation includes a vehicle V, a target T, a correspondence or
construction rule M, an interpretive practice I, and a use context C.
The target need not be physical reality. It may be a scientific object,
dataset, formal structure, process, model, possible state, rule system,
or prior representation. Nor must the target be fully determinate
independent of practice: classifications and model-defined quantities
may be partly constituted by the representational framework.

The paper adopts the following neutral definition: A representation is a
materially or formally realized vehicle that, within an interpretive
practice, provides selective access to a declared target by means of a
rule-governed correspondence. \'Selective access\' covers reference,
measurement, inference, simulation, communication, coordination, and
intervention. The definition does not require resemblance, mental
content, full fidelity, or observer-independent semantics.

Meaning, content, information, and interpretation remain distinct.
Information concerns distinctions and recoverability under a code or
probability model. Content is what a representation is taken to be about
or to assert under a semantics. Meaning includes inferential, pragmatic,
or use consequences within an interpretive system. Interpretation is the
process or rule by which a vehicle is related to content or target. A
single information-bearing pattern can receive multiple interpretations;
a common content can be encoded with different information costs.

# 5. Preservation, Transformation, and Loss

Representation is selective preservation under transformation.
Preservation claims identify a relation or observable P such that
relevant distinctions in the target remain recoverable or valid in the
representation. Transformation claims identify systematic changes to
form, scale, granularity, coordinate system, ordering, or dynamics.
Omission claims identify target distinctions not encoded or not
recoverable. Introduction claims identify structure contributed by the
representation, including categories, visual grouping, defaults,
coordinate axes, interaction operations, or uncertainty not present in
the target description.

  --------------------------------------------------------------------------------
  **Property**      **Meaning of      **Typical test**           **Failure
                    preservation**                               example**
  ----------------- ----------------- -------------------------- -----------------
  Identity          Declared target   Injectivity or stable      Aggregation
                    entities remain   identifiers under scope.   merges distinct
                    distinguishable                              entities.
                    under the                                    
                    mapping.                                     

  Semantic          Declared          Interpret both forms under A label
  relations         propositions or   a common semantics.        translation
                    reference                                    changes category
                    relations retain                             boundaries.
                    truth conditions.                            

  Structure         Specified         Homomorphism/isomorphism   A table omits
                    relations and     test.                      graph
                    operations                                   reachability
                    commute with the                             structure.
                    mapping.                                     

  Topology          Continuity,       Homeomorphism or adjacency Map projection
                    adjacency, or     comparison.                tears or changes
                    neighborhood is                              neighborhood.
                    retained.                                    

  Order             Ordering          Monotonicity/order         Alphabetical
                    relations remain  isomorphism.               sorting destroys
                    valid.                                       temporal
                                                                 sequence.

  Quantity          Specified         Metric error bounds.       Area encoding
                    measures remain                              biases magnitude
                    accurate within                              estimates.
                    tolerance.                                   

  Temporal          Ordering,         Trace or temporal-logic    Narrative
  structure         duration, or      comparison.                linearizes
                    simultaneity is                              concurrent
                    preserved.                                   events.

  Uncertainty       Probability,      Calibration and            Point estimate
                    interval,         propagation tests.         suppresses
                    provenance, or                               distribution.
                    confidence is                                
                    retained.                                    

  Constraints       Valid and invalid Constraint satisfaction or View admits
                    states/actions    round-trip tests.          updates with no
                    remain                                       valid source
                    correspondingly                              update.
                    represented.                                 

  Computational     Declared          Contextual equivalence,    Optimization
  behavior          observations of   bisimulation, refinement.  changes
                    execution remain                             floating-point
                    the same.                                    results.

  Inferential       Queries or        Theory interpretation or   Abstraction
  consequences      conclusions in a  query equivalence.         proves only a
                    declared logic                               strict subset.
                    are preserved.                               

  Action            Specified         Operation-set and          Read-only view
  possibilities     feasible          transition comparison.     removes update
                    operations and                               capability.
                    effects                                      
                    correspond.                                  
  --------------------------------------------------------------------------------

Loss cannot generally be measured independently of purpose and observer.
Information-theoretic loss requires a source distribution and distortion
measure. Structural loss requires a declared signature. Semantic loss
requires an interpretation. Task loss requires a performance criterion.
Perceptual loss requires an observer model. A purpose-independent
catalogue of omitted distinctions is possible, but assigning importance
to those omissions is not.

# 6. Typed Equivalence Relations

\'Equivalent\' is scientifically incomplete unless the equivalence type,
observables, context, and tolerance are stated. The following matrix
distinguishes relations that are often conflated.

  ----------------------------------------------------------------------------------------------------
  **Type**          **Must remain the same**           **May differ**    **Test / scope condition**
  ----------------- ---------------------------------- ----------------- -----------------------------
  Syntactic         Form under a grammar or            Meaning,          Token/tree equality or
                    normalization rule.                behavior, use.    canonicalization.

  Semantic          Denotation or truth conditions     Syntax, cost,     Interpretation equality over
                    under a declared semantics.        salience,         specified models.
                                                       interaction.      

  Informational     Recoverable distinctions or mutual Presentation,     Lossless transforms or
                    reconstructability.                inference cost,   bounded information loss.
                                                       behavior.         

  Structural        Selected relations and operations. Unselected        Homomorphism/isomorphism over
                                                       properties and    a signature.
                                                       material          
                                                       realization.      

  Topological       Continuity and neighborhood        Metric, angle,    Homeomorphism or
                    relations.                         area, scale.      topology-preserving map.

  Computational     Declared observable execution      Internal steps,   Contextual equivalence,
                    behavior.                          resources,        bisimulation, refinement.
                                                       syntax.           

  Inferential       Answers or consequences for a      Other             Query equivalence or
                    specified query/logic class.       consequences,     consequence preservation.
                                                       cognitive cost.   

  Task              Success distribution for a         Strategies, time, Equivalence/non-inferiority
                    specified task and population.     errors outside    with tolerance.
                                                       metric.           

  Perceptual        Discriminability or perceptual     Semantics and     Psychophysical discrimination
                    organization under conditions.     task outcomes.    thresholds.

  Behavioral        Distribution of declared           Internal          Controlled comparison over
                    actions/outcomes.                  interpretation    population/context.
                                                       and unmeasured    
                                                       behavior.         

  Interactional     Available                          Surface form and  Bisimulation-like comparison
                    operation-transition-observation   internal          plus human-use tests.
                    structure.                         implementation.   
  ----------------------------------------------------------------------------------------------------

Known counterexamples show non-entailment among types. Algebraically
equivalent equations can produce different solution strategies.
Informationally equivalent graphs and tables can differ in comparison
accuracy. Semantically equivalent programs can differ in time, energy,
numerical stability, or security side channels. Equal task completion
can conceal different understanding, error recovery, and transfer.
Behavioral equivalence under one context can disappear after learning or
under time pressure.

# 7. Invariance Under Projection

An unrestricted claim that meaning remains invariant under
representation change is too strong. \'Same target\' does not guarantee
same content, because a projection may alter categorization, precision,
presupposition, indexical frame, or available interpretation. A coherent
invariance claim must specify at least six items: the target
description; the content or property family asserted invariant; the
mapping between forms; the interpretation rules; the admissible contexts
and observers; and the metric or tolerance.

Let T be a declared target domain, R1 and R2 representation domains,
p1:T→R1 and p2:T→R2 projection functions, and J1 and J2 interpretation
functions into a comparison domain K. Content invariance for property
family Q holds when J1(p1(t)) and J2(p2(t)) agree on Q for all t within
the declared domain and tolerance. This is not circular if Q and the
interpretation functions are independently specified. It becomes
circular when equivalence is defined merely as \'preserving the same
meaning\' and meaning is inferred only from judged equivalence.

Target invariance, content invariance, meaning invariance, behavioral
invariance, task-outcome invariance, and interpretation invariance are
independent claims. A target can remain fixed while interpretations
vary. Content can be logically invariant while behavior changes. Task
outcomes can remain equal while strategies and understanding differ.
Interpretation can converge while feasible actions differ.

The evidence therefore supports the phrase \'scoped semantic
invariance,\' not semantic invariance simpliciter. Formalization is
possible where target semantics and correspondence rules are explicit.
Empirical testing is required where interpretation depends on human
observers, learned conventions, modality, or context.

# 8. Epistemic Access and Opportunity

Representations actively organize epistemic access. They determine which
distinctions are visible without transformation, which comparisons are
local, what must be remembered, what can be searched, what errors become
salient, and which inferences are executable through perceptual or
computational operations. External representations can convert internal
computation into perceptual recognition, but they can also conceal
provenance or encourage invalid inferences.

Opportunity should not be introduced as a replacement for affordance,
choice set, action space, or information access. Existing concepts cover
much of the terrain. Ecological affordances concern action possibilities
relative to organism-environment systems. Decision theory and
reinforcement learning formalize available actions and policies. Control
theory formalizes reachable states and controllability. HCI
distinguishes actual, perceived, and signaled actions. Visualization and
external cognition analyze operations and inferential access.

A cross-disciplinary analysis nevertheless requires three distinct sets:
feasible actions F, signaled or directly discoverable actions S, and
believed actions B for an observer in context. Representational change
may leave F fixed while changing S and B; it may also change F when the
representation is an operative view that permits or blocks
transformations. \'Opportunity profile\' is retained only as a
descriptive tuple ⟨F,S,B,inferential operations,error-recovery
operations,coordination operations⟩, not as a new ontological entity.

Representation does not cause behavior directly. A defensible causal
model includes representation, observer capabilities and prior
knowledge, task, incentives, environment, available operations, and
temporal history. Experimental attribution requires manipulation of
representation while controlling or measuring these mediators and
moderators.

# 9. Comparative Cases

## 9.1 One semantic structure as table, graph, map, and narrative

Target: a directed network of public-health facilities, referral
relations, service capacities, locations, and temporal disruptions. A
table preserves attribute values and supports sorting, filtering, and
exact lookup; it suppresses path structure unless computed. A node-link
graph exposes connectivity and centrality but can obscure exact
quantities and geographic distance. A map preserves selected spatial
relations and supports regional comparison while distorting geometry
according to projection and potentially hiding non-spatial dependencies.
A narrative preserves causal or temporal interpretation and supports
explanation but linearizes concurrency and makes exhaustive comparison
difficult.

The target need not change, but no pair is globally equivalent. They may
be informationally equivalent if each can be reconstructed from the same
dataset, structurally equivalent for selected relations, or
task-equivalent for a specific query. Behavioral predictions include
faster exact lookup in tables, faster path recognition in graphs, faster
spatial clustering judgments in maps, and better causal recall from
narrative; these remain empirical hypotheses conditioned on scale,
literacy, and task.

## 9.2 One scientific target through equations, diagrams, simulation, and prose

Target: a susceptible-infectious-recovered epidemic model with specified
parameters and assumptions. Differential equations preserve formal
dependencies and permit analytic reasoning. A compartment diagram
exposes flows and conservation structure. Simulation exposes
trajectories, stochastic variation, and sensitivity under parameter
settings. Prose states assumptions, interpretations, and limitations not
contained in the equations. The forms are complementary rather than
substitutable. Equation and code may disagree through discretization or
implementation error; a diagram may omit nonlinear terms; prose may
introduce ambiguity. Scientific adequacy requires cross-representation
consistency tests.

## 9.3 One computational system through GUI, CLI, API, and conversation

Target: a version-control system\'s repository states and operations. A
GUI externalizes status and constrains commands, supporting recognition
and discoverability. A command line provides compositional, scriptable
operations and exact textual traces but requires recall. An API exposes
machine-addressable operations, schemas, and errors while omitting
interactive guidance. A conversational interface maps natural-language
requests to operations, lowering formulation cost but adding
interpretive uncertainty and a need for confirmation and provenance.

Core repository transitions may be computationally equivalent when each
invokes the same validated operations. They are not interactionally
equivalent: available compositions, visibility of consequences, error
prevention, and auditability differ. Equal task completion does not
establish equal understanding or safety.

## 9.4 Accessibility across visual, auditory, and tactile forms

Target: a transit network with stations, lines, transfer points, service
alerts, and route options. A visual map offers parallel spatial
overview. Auditory presentation serializes access and increases memory
and navigation costs unless structured for query. A tactile map
preserves selected topology and spatial layout but has resolution and
labeling constraints. Multimodal forms can preserve route semantics
while differing in perceptual access, privacy, scanning time, and error
recovery. Accessibility requires content and relations to be
programmatically determinable or available in alternative forms, but
equivalent access is a performance and usability claim, not a
consequence of nominal content duplication.

## 9.5 Informational equivalence with different reasoning

The classic isomorphic arithmetic-task results analyzed by Zhang and
Norman show that representations distributing information externally can
change problem difficulty despite equivalent abstract structure.
Visualization research similarly shows that equal numerical data encoded
by position, length, angle, area, or color are decoded with different
accuracy. These cases falsify the inference from informational
equivalence to cognitive or behavioral equivalence.

# 10. Candidate Formal Model

Projection is defined here as an analytical role: a declared
transformation that produces a representation of a target for specified
observers and uses. It does not replace \'representation,\'
\'encoding,\' \'view,\' \'abstraction,\' \'model,\' or \'simulation\'
inside disciplines where those terms are sufficient. It supplies a
common comparison schema across them.

A projection contract is the tuple Π = ⟨T,R,p,I,P,X,O,A,U,C,E⟩, where T
is the source or target domain; R is the representation domain; p is the
transformation or construction rule; I is the interpretation rule or
practice; P is the preservation profile; X is the transformation,
omission, and introduction profile; O is the observer model; A is the
available operation set; U is intended use; C is context and scope; and
E is error, uncertainty, tolerance, and failure conditions.

For a target state t, the representation r=p(t) is scientifically
analyzable when the contract permits independent investigators to
determine what claims are licensed, which distinctions are unavailable,
how operations correspond to target transitions, and under what
conditions conclusions fail. The model is deliberately weaker than a
universal semantics. It allows formal mappings, physical instruments,
public symbols, and learned representational practices.

A comparison between projections Π1 and Π2 is made over a declared
property family Q and observer-task distribution D. Formal preservation
is tested by commuting diagrams, reconstruction, logical consequence, or
behavioral refinement where applicable. Empirical access is tested
through accuracy, latency, search paths, confidence, error types,
learning, transfer, and recovery. Causal claims require randomized or
otherwise identified manipulation and mediation analysis where feasible.

# 11. Falsification Tests

  -----------------------------------------------------------------------
  **Claim**               **Evidence against**    **Consequence**
  ----------------------- ----------------------- -----------------------
  Representation requires Stable predictive       Revise relational
  a target and            representation relation definition.
  interpretive rule.      definable solely by     
                          intrinsic vehicle       
                          properties.             

  Equivalence must be     One equivalence         Collapse taxonomy.
  typed.                  relation proven to      
                          preserve all            
                          scientifically relevant 
                          properties across       
                          domains.                

  Informational           Controlled studies      Remove behavioral
  equivalence does not    consistently show       separation.
  imply behavioral        identical action        
  equivalence.            distributions across    
                          informationally         
                          equivalent forms and    
                          populations.            

  Scoped semantic         No non-circular         Reject
  invariance is coherent. independent             semantic-invariance
                          specification of        language.
                          content and             
                          interpretation can be   
                          constructed even in     
                          formal cases.           

  Projection adds         Existing single         Use that framework;
  cross-disciplinary      framework already       discard projection
  value.                  covers formal           contract.
                          preservation, human     
                          epistemic access,       
                          operations,             
                          uncertainty, and        
                          failure without         
                          translation loss.       

  Representations         After controlling task, Restrict claim to
  organize epistemic      observer, operations,   formal access only.
  access.                 and context,            
                          representational        
                          manipulation produces   
                          no reliable differences 
                          in access measures.     

  Opportunity profile is  Affordance,             Adopt established
  not reducible to one    action-space, or view   construct exclusively.
  existing construct.     theory fully captures   
                          feasible, signaled,     
                          believed, inferential,  
                          recovery, and           
                          coordination            
                          operations.             

  Representation and      Preservation and        Treat separation as
  implementation can      operation claims cannot domain-limited.
  often be separated.     be stated independently 
                          of device, rendering,   
                          data structure, or      
                          execution substrate in  
                          target cases.           
  -----------------------------------------------------------------------

The most damaging result would be demonstration that the projection
contract merely restates an existing general theory with no added
comparative predictions or measurement discipline. The framework
therefore earns retention only if it improves cross-form specification,
reveals hidden non-equivalences, or supports reproducible comparative
experiments.

# 12. Threats to Validity

Construct validity is threatened by polysemy. \'Representation,\'
\'model,\' \'meaning,\' \'information,\' and \'equivalence\' change
across traditions. The paper mitigates this by defining roles and typed
relations rather than asserting lexical identity. External validity is
threatened by moving from formal domains with stipulated semantics to
human contexts with negotiated interpretation. Formal claims are
therefore not generalized without observer and context variables.

Selection bias remains because the literature is too large for
exhaustive review. The synthesis favors foundational accounts and
explicit formalizations, potentially underrepresenting practice-based,
non-Western, phenomenological, and artistic theories. Empirical claims
in visualization and cognition often use restricted tasks and
participant populations. Accessibility equivalence is especially
sensitive to heterogeneous capabilities and technologies.

Causal validity is limited. Observed differences between representations
may arise from familiarity, training, ordering, modality, incentives, or
implementation quality. Studies must control content and available
operations while avoiding the false assumption that surface matching
controls interpretation. Finally, the proposed contract may be too
general to generate novel predictions; its value should be judged by
comparative use, not conceptual elegance.

# 13. Implications for Interaction Research

Interaction research should not posit an observer-independent semantic
state merely because multiple interfaces address a common backend
object. It should declare the target description and authority that
stabilizes it. Representation, opportunity, interpretation, action, and
outcome should remain separate variables. Feasible actions may be
invariant while signaled and believed actions vary; identical actions
may be interpreted differently; equal outcomes may arise through
different strategies.

Representation similarity should be typed. A GUI and API may be
computationally equivalent but perceptually and interactionally
dissimilar. Behavioral equivalence requires a population, context, task
distribution, metrics, and tolerance. Transfer between representations
should be analyzed through preserved conceptual relations, learned
operations, and changed cues rather than through visual resemblance
alone.

The projection contract can support experiments by making manipulation
explicit. Researchers can hold target and task constant, vary one
projection property, measure epistemic access and opportunity profiles,
and test mediators such as salience, memory load, inferred action set,
or confidence. This creates falsifiable work without presuming a new
discipline or ontology.

# 14. Conclusion

Cross-disciplinary evidence rejects a unitary theory in which
representation is resemblance, encoding, formal mapping, mental state,
or public artifact alone. It also rejects absolute equivalence and
unrestricted semantic invariance. Representations are selective,
rule-governed means of access to declared targets within interpretive
practices. They preserve some distinctions, transform or omit others,
and introduce operations and organizational effects.

Existing theories are powerful but fragmented by domain. Model theory,
morphisms, information theory, abstract interpretation, observational
equivalence, database views, lenses, cartographic projection, semiotics,
scientific modeling, and external cognition already explain major
components. No evidence supports replacing them with a wholly new
representation theory. A general theory of projection is justified only
as a shared analytical contract that coordinates those established
mechanisms and requires explicit scope conditions.

Final determination: 3. A general theory of projection is justified, but
semantic invariance requires strict scope conditions.

# 15. Reusable Representation-Analysis Framework

## A. Representation Taxonomy

  -----------------------------------------------------------------------------------------
  **Type**          **Defining        **Primary preservation concern**   **Typical risk**
                    relation**                                           
  ----------------- ----------------- ---------------------------------- ------------------
  Indexical /       Causal or         Traceability, quantity,            Instrument bias or
  measurement       calibrated        uncertainty.                       invalid
                    relation to                                          calibration.
                    target.                                              

  Symbolic /        Conventional sign Reference and inferential role.    Ambiguity and
  linguistic        system and                                           context shift.
                    interpretation.                                      

  Structural /      Mapping between   Selected relations and operations. Mistaking partial
  mathematical      relational                                           for total
                    structures.                                          isomorphism.

  Model /           Purposeful        Empirical and explanatory          Idealization
  scientific        surrogate used    relevance.                         outside scope.
                    for inference.                                       

  Diagrammatic /    Spatial encoding  Topology, order, magnitude,        Perceptual
  visual            of relations or   grouping.                          distortion or
                    quantities.                                          salience bias.

  Narrative         Temporally and    Sequence, agency, explanation.     Linearization and
                    causally                                             selective framing.
                    organized                                            
                    discourse.                                           

  Encoding / code   Rule-based        Decodability and error bounds.     Semantic
                    transformation of                                    indeterminacy.
                    symbols or                                           
                    signals.                                             

  Abstraction       Sound             Specified properties or judgments. False
                    approximation of                                     completeness.
                    a richer domain.                                     

  View / projection Derived exposure  Query answers and update           Hidden source
                    of source         correspondence.                    distinctions.
                    structure.                                           

  Simulation        Executable model  Dynamic behavior under             Implementation and
                    producing         assumptions.                       parameter
                    trajectories.                                        artifacts.

  Interface /       Observable and    Operation-transition-observation   Confusing
  operative         manipulable       relation.                          discoverability
  representation    access surface.                                      with feasibility.

  Internal          State posited to  Explanatory role in cognition.     Unobservable or
  cognitive         carry content and                                    theory-dependent
                    guide processing.                                    content.
  -----------------------------------------------------------------------------------------

## B. Equivalence Matrix

Use the typed equivalence table in Section 6. Every equivalence claim
must complete: type; invariant; admissible difference; observer; task;
context; metric; tolerance; and test. Multiple types may be asserted,
but none may be inferred from another without evidence.

## C. Projection Contract

  -----------------------------------------------------------------------
  **Field**                           **Required declaration**
  ----------------------------------- -----------------------------------
  Target domain                       What is represented; authority and
                                      version; boundaries and
                                      granularity.

  Representation domain               Vehicle/form and admissible
                                      instances.

  Mapping                             Construction, encoding,
                                      measurement, query, or
                                      transformation rule.

  Interpretation                      Semantics, conventions, training,
                                      and decoding assumptions.

  Preserved properties                Relations, quantities, behaviors,
                                      consequences, or operations
                                      retained.

  Transformed properties              Changes of coordinate, scale,
                                      order, granularity, modality, or
                                      dynamics.

  Omitted properties                  Distinctions unavailable or
                                      unrecoverable.

  Introduced properties               Categories, saliences, defaults,
                                      ambiguity, artifacts, or noise.

  Available operations                Read, query, compare, manipulate,
                                      update, undo, coordinate, export.

  Observer assumptions                Capabilities, knowledge, language,
                                      access needs, and role.

  Intended use                        Questions, decisions, tasks, and
                                      prohibited uses.

  Uncertainty and error               Provenance, confidence, distortion,
                                      latency, and tolerance.

  Failure conditions                  Known counterexamples, out-of-scope
                                      states, and invalid inferences.
  -----------------------------------------------------------------------

## D. Representation Comparison Protocol

1.  Declare one target and its authoritative boundaries without assuming
    observer-independent meaning.

2.  Inventory each representation vehicle, mapping, interpretation rule,
    and available operation.

3.  Specify candidate invariants and the equivalence type for each;
    reject untyped equivalence claims.

4.  Construct preservation, transformation, omission, and introduction
    profiles.

5.  Hold target content and task constant where possible; record
    unavoidable implementation differences.

6.  Declare observer population, prior knowledge, modality, context, and
    accessibility conditions.

7.  Measure formal correctness separately from epistemic access, task
    performance, behavior, learning, and transfer.

8.  Test operation correspondence, error recovery, uncertainty
    communication, and update semantics.

9.  Analyze mediation and moderation rather than attributing behavior
    directly to representation.

10. Report scope, tolerances, contradictory results, and conditions
    under which equivalence fails.

## E. Falsification Matrix

Use the matrix in Section 11 as the minimum test set. Any application
should add domain-specific failure conditions and identify which result
would require abandoning, narrowing, or replacing the projection
analysis.

# 16. References

Blackwell, A. F., Britton, C., Cox, A., Green, T. R. G., Gurr, C.,
Kadoda, G., Kutar, M., Loomes, M., Nehaniv, C., Petre, M., Roast, C.,
Roes, C., Wong, A., & Young, R. M. (2001). Cognitive dimensions of
notations: Design tools for cognitive technology. In Cognitive
Technology.

Bohannon, A., Pierce, B. C., & Vaughan, J. A. (2006). Relational lenses:
A language for updatable views. PODS.

Card, S. K., Mackinlay, J. D., & Shneiderman, B. (Eds.). (1999).
Readings in information visualization. Morgan Kaufmann.

Cleveland, W. S., & McGill, R. (1984). Graphical perception: Theory,
experimentation, and application to the development of graphical
methods. Journal of the American Statistical Association, 79, 531-554.

Codd, E. F. (1970). A relational model of data for large shared data
banks. Communications of the ACM, 13, 377-387.

Cousot, P., & Cousot, R. (1977). Abstract interpretation: A unified
lattice model for static analysis of programs by construction or
approximation of fixpoints. POPL, 238-252.

Daston, L., & Galison, P. (2007). Objectivity. Zone Books.

Dretske, F. I. (1981). Knowledge and the flow of information. MIT Press.

Eco, U. (1976). A theory of semiotics. Indiana University Press.

Engelhardt, Y. (2002). The language of graphics. Institute for Logic,
Language and Computation.

Frigg, R., & Nguyen, J. (2020). Modelling nature: An opinionated
introduction to scientific representation. Springer.

Gibson, J. J. (1979). The ecological approach to visual perception.
Houghton Mifflin.

Giere, R. N. (2006). Scientific perspectivism. University of Chicago
Press.

Goodman, N. (1976). Languages of art (2nd ed.). Hackett. (Original work
published 1968).

Green, T. R. G., & Petre, M. (1996). Usability analysis of visual
programming environments: A cognitive dimensions framework. Journal of
Visual Languages & Computing, 7, 131-174.

Hutchins, E. (1995). Cognition in the wild. MIT Press.

Johnson-Laird, P. N. (1983). Mental models. Harvard University Press.

Kosslyn, S. M. (1994). Image and brain. MIT Press.

Larkin, J. H., & Simon, H. A. (1987). Why a diagram is (sometimes) worth
ten thousand words. Cognitive Science, 11, 65-100.

Marr, D. (1982). Vision. W. H. Freeman.

Milner, R. (1989). Communication and concurrency. Prentice Hall.

Norman, D. A. (1988). The psychology of everyday things. Basic Books.

Palmer, S. E. (1978). Fundamental aspects of cognitive representation.
In E. Rosch & B. B. Lloyd (Eds.), Cognition and categorization. Erlbaum.

Peirce, C. S. (1931-1958). Collected papers of Charles Sanders Peirce.
Harvard University Press.

Rothenberg, J. (1989). The nature of modeling. In L. E. Widman, K. A.
Loparo, & N. R. Nielsen (Eds.), Artificial intelligence, simulation, and
modeling. Wiley.

Saussure, F. de. (1983). Course in general linguistics. Duckworth.
(Original work published 1916).

Shannon, C. E. (1948). A mathematical theory of communication. Bell
System Technical Journal, 27, 379-423, 623-656.

Shimojima, A. (2015). Semantic properties of diagrams and their
cognitive potentials. CSLI Publications.

Spence, R. (2007). Information visualization: Design for interaction
(2nd ed.). Pearson.

Stevens, S. S. (1946). On the theory of scales of measurement. Science,
103, 677-680.

Suchman, L. A. (1987). Plans and situated actions. Cambridge University
Press.

Tarski, A. (1944). The semantic conception of truth and the foundations
of semantics. Philosophy and Phenomenological Research, 4, 341-376.

Tufte, E. R. (1983). The visual display of quantitative information.
Graphics Press.

Ware, C. (2012). Information visualization: Perception for design (3rd
ed.). Morgan Kaufmann.

W3C. (2023). Web Content Accessibility Guidelines (WCAG) 2.2. World Wide
Web Consortium.

Woodward, J. (2003). Making things happen: A theory of causal
explanation. Oxford University Press.

Zhang, J., & Norman, D. A. (1994). Representations in distributed
cognitive tasks. Cognitive Science, 18, 87-122.
