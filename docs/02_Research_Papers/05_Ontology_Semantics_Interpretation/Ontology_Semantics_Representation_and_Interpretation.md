**Ontology, Semantics, Representation, and Interpretation**

*Toward a Layered Theory of Computational Meaning*

Formal research paper \| July 2026

**Final determination**

**Yes. The concepts can be organized into a coherent computational
theory, provided the theory is relational rather than a fixed linear
pipeline and distinguishes formal semantics from observer
interpretation.**

# Abstract

Ontology, semantics, representation, information, interpretation, and
behavior are often arranged as if they formed a simple stack.
Cross-disciplinary analysis shows that the distinctions are real, but
the stack is too strong. Philosophical ontology studies what exists and
how categories of being are related; computational ontologies specify a
vocabulary and constraints for a domain. Formal semantics assigns
denotations, truth conditions, transitions, or observable behavior to
well-formed expressions. Information measures or characterizes
distinctions, correlations, descriptions, or truth-bearing content under
different theories. Representation is a vehicle-target relation that
selectively preserves and exposes structure. Interpretation is the
situated application of rules, conventions, prior knowledge, and goals
by a system or community. Behavior is a causal outcome produced by an
agent-system-environment process and is not entailed by representation
or interpretation alone.

The evidence supports a coherent computational theory, but not the
proposed one-way sequence Ontology -\> Semantic State -\> Representation
-\> Interpretation -\> Behavior. Ontology and semantics are mutually
constraining specifications; representations may encode syntactic
structures, semantic structures, or both; interpretation can establish,
recover, revise, or reject semantic assignments; information is typed
and may exist without meaning in Shannon\'s sense; and behavior feeds
back into interpretation and model revision. The minimal architecture
therefore consists of six roles linked by typed relations: domain
commitments, system state, semantic assignment, representational
realization, interpretive process, and situated action, with information
defined relative to a chosen theory and projection defined as a declared
transformation between target and accessible vehicle. The distinctions
are largely established separately in philosophy, logic, programming
languages, ontology engineering, semiotics, and cognitive science. The
warranted contribution is a cross-disciplinary synthesis and diagnostic
framework, not a new foundational vocabulary.

Primary contribution: computational meaningfulness should be analyzed as
a constrained relation among domain commitments, formal or socially
stabilized semantic assignments, representational vehicles,
interpreters, and action contexts; no single layer possesses meaning in
isolation.

# 1. Motivation

Computational systems manipulate physical states according to engineered
rules. Humans and other systems nevertheless treat some of those states
as files, instructions, maps, prices, permissions, identities, or
claims. The central theoretical problem is not whether bits can be
arranged into layers. It is what licenses movement from physical or
formal difference to semantic significance, and which distinctions
survive changes of notation, modality, implementation, or observer.

Conflation creates recurrent errors. A database schema is called an
ontology although it may encode only local storage constraints. A symbol
is said to contain meaning although its denotation depends on a semantic
interpretation. A user interface is described as the semantic layer
although it is one representation of system state. Successful behavior
is treated as proof of shared understanding although equivalent outcomes
may arise from different interpretations, heuristics, or accidents.
Conversely, strong anti-representational arguments sometimes deny
distinctions that formal computer science demonstrably uses to prove
compiler correctness, program equivalence, and knowledge-base
entailment.

This paper asks one question: Can ontology, semantics, representation,
interpretation, and behavior be organized into a coherent computational
theory without contradicting existing philosophy and computer science?
The test is conservative. A distinction is retained only when
established theories assign it a separable explanatory role or when its
removal produces a demonstrable loss of explanatory power.

# 2. Literature Review

## 2.1 Method

The review is a structured conceptual synthesis of foundational and
primary sources from analytic philosophy, formal ontology, knowledge
representation, model theory, programming-language semantics,
information theory, semiotics, cognitive science, linguistics,
distributed cognition, cybernetics, information science, and HCI.
Sources were selected when they define one of the focal concepts,
specify a formal relation among them, or provide a counterargument to
their separation.

Each source was coded for: the relata it presupposes; whether meaning is
intrinsic, assigned, causal, inferential, or use-dependent; whether an
interpreter is explicit; whether the account is formal or empirical; and
what would count as identity or change. Prior project papers were used
only as background and consistency constraints, not as evidence for the
layered model.

## 2.2 Foundational tensions

-   Realism versus conceptualism: ontology may concern reality itself or
    an explicit conceptualization used by a community.

-   Truth-conditional versus use-based semantics: meaning may be modeled
    by denotation and truth conditions, inferential role, convention,
    intention, or practical use.

-   Intrinsic versus derived intentionality: computational states may
    possess only observer-relative meaning, or may acquire content
    through causal, functional, biological, or social relations.

-   Syntactic versus semantic information: Shannon information excludes
    meaning, while semantic theories add truth, reference, relevance, or
    viability conditions.

-   Internal versus distributed interpretation: interpretation may be
    assigned to an individual mind, a formal evaluator, an organization,
    or a coupled cognitive system.

-   Linear versus recursive architecture: software diagrams often imply
    a pipeline, whereas semiotics, learning, and interaction require
    feedback and revision.

# 3. Existing Definitions

## 3.1 Ontology

In philosophical usage, ontology concerns what exists and the most
general categories and relations of being. It asks what kinds of
entities there are, what identity conditions they possess, and how
dependence, parthood, persistence, possibility, and modality are
structured. This is not a data model and not a vocabulary file.

In AI and information systems, an ontology is an explicit specification
of a conceptualization, later refined as a formal specification of a
shared conceptualization. Gruber\'s account emphasizes representational
vocabulary and portability; Guarino distinguishes a conceptualization
from the logical theory that approximates its intended models.
Computational ontologies commonly contain classes or types, relations,
functions or properties, individuals, axioms, constraints, and sometimes
processes, temporal relations, or modal commitments. OWL supplies a
formal syntax and model-theoretic semantics for such specifications.

A domain ontology is reusable commitment about a domain. A conceptual
model is usually designed for a particular application. A schema
constrains the organization and validity of stored or exchanged data. A
taxonomy primarily orders categories, typically through broader-narrower
or subtype relations. These artifacts may overlap, but none is
interchangeable with philosophical ontology.

  -----------------------------------------------------------------------------------
  **Term**               **Primary role**       **Typical          **What it does not
                                                contents**         by itself
                                                                   establish**
  ---------------------- ---------------------- ------------------ ------------------
  Philosophical ontology Account of being and   Entities,          A machine-readable
                         categories             identity,          vocabulary
                                                dependence,        
                                                modality,          
                                                relations          

  Formal ontology        Domain-independent     Parthood,          A local
                         structural theory      dependence,        application schema
                                                universals,        
                                                particulars, time  

  Computational/domain   Shared explicit domain Classes,           That the modeled
  ontology               commitment             relations, axioms, categories are
                                                constraints,       metaphysically
                                                instances          fundamental

  Conceptual model       Application-oriented   Entities,          Reusable domain
                         abstraction            relationships,     consensus
                                                processes, rules   

  Schema                 Data structure and     Fields, types,     Meaning beyond
                         validity constraints   keys,              declared or
                                                cardinalities      external semantics

  Taxonomy               Classification         Categories and     Rich relational or
                         hierarchy              broader/narrower   modal theory
                                                relations          
  -----------------------------------------------------------------------------------

## 3.2 Semantics

Semantics is not one relation. In formal logic, an interpretation maps
nonlogical vocabulary to a domain and assigns truth conditions to
sentences. Tarski\'s work sharply separates object language and
metalanguage and defines truth for formalized languages relative to an
interpretation. Model theory generalizes this relation between formal
languages and structures.

Programming-language semantics assigns mathematical meaning or execution
behavior to programs. Denotational semantics maps expressions to
mathematical objects; operational semantics specifies transitions of an
abstract machine; axiomatic semantics characterizes programs through
assertions and proof rules. These are alternative semantic descriptions
of computation, not psychological interpretation by users. Compiler
correctness is usually expressed as preservation or refinement between
source and target semantics, showing that representation and
implementation may change while declared behavior remains equivalent.

Linguistics and philosophy of language introduce truth conditions,
reference, compositionality, sense, speaker meaning, convention,
context, and pragmatic enrichment. Semiotics treats signification as a
triadic or systemic relation. Cognitive and embodied approaches add
grounding in perception, action, and environment. Consequently, a
general definition must avoid identifying semantics solely with human
understanding or solely with formal denotation.

Canonical definition used here: semantics is a rule-governed assignment
of content, denotation, truth conditions, inferential role, or behavior
to expressions, states, or signs within a specified system and domain. A
semantic state is the currently applicable set of content-bearing
assignments and relations under that semantics. It is not assumed to be
observer-independent; its status depends on whether the semantic theory
is formal, social, biological, or psychological.

## 3.3 Representation

Representation is a selective relation among a vehicle, a target, a
mapping or correspondence, and an interpretive practice. A
representation may be physical or formal; internal or public; symbolic,
iconic, indexical, diagrammatic, linguistic, numerical, or executable.
It can encode syntax without preserving target meaning, encode a
semantic model, or provide an interface through which semantic
consequences become inspectable and actionable.

Representations do not possess semantics in one uniform sense. In a
formal system, a representation has assigned semantics by definition of
an interpretation function. In social practice, a sign vehicle carries
conventional or use-stabilized meaning. In cognition, content may depend
on causal, teleological, functional, inferential, or ecological
relations. The vehicle alone is insufficient in every account except a
strong intrinsic-content theory, for which computational evidence is
weak and philosophical controversy remains substantial.

## 3.4 Interpretation

Interpretation has at least three established senses. In logic, an
interpretation is a mathematical assignment from vocabulary to a domain.
In semiotics and philosophy of language, interpretation is the
production or uptake of significance under conventions, context, and
inferential practices. In cognition and HCI, interpretation is an
empirically realized process by which an agent forms beliefs,
expectations, classifications, or action-relevant understandings from
available signs.

These senses must not be collapsed. A model-theoretic interpretation can
be completely specified without a conscious interpreter. A human
interpretation can diverge from the intended formal semantics. Multiple
human or institutional interpretations may coexist for the same vehicle,
and one observer may revise interpretation after action or feedback.

Canonical definition used here: interpretation is the application or
construction of semantic relations by an interpreting system under a
context, competence, history, and purpose. Its result may be a
denotation, belief, inference, expectation, classification, or action
policy. Interpretation differs from semantics because semantics
specifies or stabilizes admissible content relations, whereas
interpretation is an event, process, or act that applies, recovers,
negotiates, or revises them.

## 3.5 Information

Shannon information quantifies uncertainty and coding constraints over
possible messages; it explicitly brackets meaning. Algorithmic
information measures description length relative to a machine. Semantic
information theories add well-formedness, meaningfulness, truth,
reference, or causal relevance. Ecological information concerns
structured invariants available in organism-environment relations.
Pragmatic accounts concern information\'s effect on decision, action, or
viability.

No unqualified statement such as \'the information remained the same\'
is therefore acceptable. The theory, random variables or description
language, semantic interpretation, task, observer, and tolerance must be
named. A byte-preserving transformation may preserve Shannon information
while changing meaning through a different codebook; a lossy
representation may reduce recoverable data yet preserve all information
relevant to a task.

Canonical definition used here: information is a typed measure or
characterization of distinctions, correlations, descriptions, or content
relative to a specified source, code, semantic relation, or use.
Information is not treated as a synonym for data, meaning, or
interpretation.

## 3.6 Projection

Projection is retained as an analytical role rather than a new
substance. It is a declared transformation from a target description or
state into an accessible representational form under a contract that
identifies preserved, transformed, omitted, and introduced properties,
available operations, observer assumptions, intended uses, and failure
conditions. The term coordinates existing notions such as abstraction
functions, views, encodings, lenses, simulations, and model morphisms.
It adds value only when this declaration is explicit.

# 4. Comparative Analysis

  ---------------------------------------------------------------------------------------
  **Concept**      **Question     **Primary       **Identity        **Characteristic
                   answered**     relata**        criterion**       failure**
  ---------------- -------------- --------------- ----------------- ---------------------
  Ontology         What entities  Domain,         Same commitments  Category error or
                   and relations  categories,     or intended       incompatible
                   are admitted?  identity and    models under      commitment
                                  constraints     declared scope    

  Semantics        What do        Syntax/state,   Same denotation,  Undefined, ambiguous,
                   expressions or domain/model,   truth conditions, inconsistent, or
                   states denote, assignment      transition        non-compositional
                   imply, or do?  rules           behavior, or      assignment
                                                  consequences      

  Information      What           Source,         Same measure,     Loss, noise,
                   distinctions   alternatives,   recoverability,   falsehood,
                   or content are code or         truth-bearing     irrelevance, or
                   available      semantic        content, or       theory mismatch
                   under a        relation        relevance         
                   theory?                                          

  Representation   What vehicle   Vehicle,        Typed             Omission, distortion,
                   gives          target,         preservation      opacity, or
                   selective      mapping,        under a declared  unsupported inference
                   access to what practice        equivalence       
                   target?                                          

  Interpretation   How is         Interpreter,    Convergent        Misinterpretation,
                   significance   vehicle,        denotation,       underdetermination,
                   applied or     context,        belief,           or disagreement
                   constructed?   conventions,    inference, or     
                                  goals           policy under      
                                                  scope             

  Behavior         What does the  Agent/system,   Equivalent        Performance
                   situated       environment,    observable action divergence,
                   system do?     state, action,  traces or         adaptation, or
                                  feedback        outcomes under    confounding
                                                  conditions        
  ---------------------------------------------------------------------------------------

## 4.1 What is separable?

Ontology and semantics are distinguishable but interdependent. An
ontology supplies or constrains the kinds of entities over which a
semantics ranges; a semantics makes the ontology\'s expressions
truth-evaluable or inferentially usable. Ontology without semantics may
be an uninterpreted signature or informal categorization. Semantics
without ontological commitment is impossible in a broad Quinean sense
because variables and denotations range over something, but it need not
commit to a rich domain ontology.

Semantics and representation are distinguishable because multiple
syntactic or material vehicles can receive the same semantic assignment,
and one vehicle can receive different assignments under different
interpretations. Formal semantics relies on representations to state
expressions, models, and rules, but does not identify those tokens with
their denotations.

Semantics and interpretation partially overlap in ordinary language but
separate in formal and empirical analysis. Formal semantics can be
stipulated independently of any person\'s success in interpreting it.
Human interpretation can be studied as a process that approximates,
contests, or ignores intended semantics.

Behavior is downstream only in a weak causal sense. Semantic and
representational structures constrain possible behavior, but action also
depends on goals, memory, competence, attention, incentives, embodiment,
environmental state, and stochasticity. Behavior supplies evidence about
interpretation but never uniquely identifies it without additional
assumptions.

# 5. Candidate Layered Model

## 5.1 Rejection of the simple chain

The candidate chain Ontology -\> Semantic State -\> Representation -\>
Interpretation -\> Behavior is rejected as a universal architecture for
four reasons. First, ontologies are themselves representations with
semantics. Second, representations can precede or induce semantic
stabilization rather than merely render a prior semantic state. Third,
interpretation may modify the effective ontology and semantic state.
Fourth, behavior feeds back through observation, learning, and
institutional revision.

## 5.2 Minimal relational architecture

The minimum supported architecture contains six roles and seven typed
relations. Roles are not implementation layers; one artifact may realize
several roles, and one role may be distributed across artifacts and
agents.

  --------------------------------------------------------------------------
  **Role**                **Formal symbol**       **Definition**
  ----------------------- ----------------------- --------------------------
  Domain commitments      O                       Admissible entity,
                                                  relation, identity,
                                                  modality, and constraint
                                                  commitments for the
                                                  inquiry or system.

  System state            X                       Physical, computational,
                                                  social, or modeled
                                                  condition at a time.

  Semantic assignment     S                       Rule-governed assignment
                                                  of denotation, content,
                                                  truth conditions,
                                                  inferential consequences,
                                                  or transition behavior.

  Representational        R                       Vehicle or structure
  realization                                     providing selective access
                                                  to a target under a
                                                  mapping.

  Interpretive process    I                       Contextual application,
                                                  recovery, negotiation, or
                                                  revision of semantic
                                                  relations by a system or
                                                  practice.

  Situated behavior       B                       Observable action or state
                                                  transition produced in an
                                                  agent-system-environment
                                                  context.
  --------------------------------------------------------------------------

Core relations:

-   Commitment: O constrains the admissible domains and identity
    conditions of S.

-   Realization: a projection P maps selected aspects of X or S into R
    under an explicit preservation contract.

-   Interpretation: I applies an interpretation function or learned
    practice to R in context C, yielding an interpreted state J.

-   Affordance and policy mediation: J, goals G, capabilities K, and
    environment E jointly constrain an action policy pi.

-   Behavior: B is sampled or produced from pi under current conditions;
    it is not a direct function of R alone.

-   Evidence: observations of B and X update beliefs about I, S, or O
    but underdetermine them without intervention or auxiliary
    assumptions.

-   Feedback: interpretation and behavior may revise O, S, P,
    conventions, and future state.

A compact expression is:

**R = P(X, S \| O, Cₚ); J = I(R \| C, H, K); B \~ π(J, G, E, K);
observations update {O, S, P, I, π}**

This formalization is intentionally schematic. It blocks three invalid
inferences: same representation implies same interpretation; same
information implies same semantics; and same behavior implies same
understanding.

# 6. Cross-Disciplinary Synthesis

  -------------------------------------------------------------------------------------------------------------------------------------------------------------
  **Discipline**   **Ontology-equivalent**   **Semantics-equivalent**   **Representation-equivalent**   **Interpretation-equivalent**   **Behavior/evidence**
  ---------------- ------------------------- -------------------------- ------------------------------- ------------------------------- -----------------------
  Analytic         Ontological commitments;  Reference, truth           Signs, sentences, models        Speaker/hearer uptake;          Judgments, assertions,
  philosophy       categories                conditions, sense, use                                     interpretive charity            inferential practice

  Formal           Domain and signature      Satisfaction and           Formulas, structures, proofs    Mathematical assignment, not    Entailment and proof
  logic/model                                interpretation functions                                   psychological uptake            consequences
  theory                                                                                                                                

  Programming      Types, values, stores,    Denotational, operational, Source, AST, IR, bytecode       Evaluator/compiler and          Execution traces,
  languages        events                    axiomatic semantics                                        programmer understanding        outputs, safety
                                                                                                                                        properties

  AI/knowledge     Domain ontology and       Model-theoretic or         Knowledge base, graph,          Reasoner or agent use; human    Entailments, decisions,
  representation   predicates                procedural meaning         embeddings                      reading                         plans

  Information      Entities, concepts,       Aboutness, indexing        Metadata, records,              Indexer and seeker              Retrieval, selection,
  science          document kinds            meaning, relevance         classifications                 interpretation                  use

  Linguistics      Discourse entities and    Lexical, compositional,    Utterances, syntax, gesture     Pragmatic enrichment and        Responses, inferences,
                   event structures          dynamic semantics                                          discourse update                coordination

  Cognitive        World and task models     Mental content,            Internal/external structures    Perceptual and cognitive        Choice, recall,
  science                                    inferential or functional                                  construction                    learning, action
                                             role                                                                                       

  HCI              Task and system entities  Intended system and domain Interface states and            User sense-making and system    Interaction traces and
                                             meaning                    interaction forms               inference                       outcomes
  -------------------------------------------------------------------------------------------------------------------------------------------------------------

# 7. What Actually Changes?

  ----------------------------------------------------------------------------------------------------------------------------------------
  **Transformation**   **Ontology**     **Semantics**          **Information**   **Representation**   **Interpretation**   **Behavior**
  -------------------- ---------------- ---------------------- ----------------- -------------------- -------------------- ---------------
  Notation change      Usually          Invariant only under   May preserve      Changes              May change effort or May change
                       invariant if     semantics-preserving   formal content;                        error                speed/error
                       symbols are      translation            description                                                 despite
                       systematically                          length changes                                              semantic
                       renamed                                                                                             equivalence

  Visualization change Usually          Declared relations may Recoverability    Changes              Inference and        Comparison,
                       invariant        be preserved           and salience can  substantially        attention may change search, and
                                        selectively            change                                                      error behavior
                                                                                                                           often change

  Natural-language     Target           Translation may        Semantic and      Changes              Culture and          Coordination
  change               commitments may  preserve propositions  pragmatic content                      competence alter     and decision
                       remain; lexical  imperfectly            may shift                              uptake               behavior may
                       categories may                                                                                      change
                       not align                                                                                           

  Modality change      Can remain       Can remain invariant   Channel capacity  Changes              Perceptual           Latency,
                       invariant        under scoped content   and                                    processing differs   workload,
                                        mapping                recoverability                                              access, and
                                                               differ                                                      error differ

  Interaction          System domain    Operation denotations  Available state   Interactive          Action expectations  Feasible and
  technique change     may remain       may remain             evidence can      representation       change               selected action
                                                               differ            changes                                   sequences
                                                                                                                           change

  Rendering technology Normally         Normally invariant if  Signal properties Material realization May change under     Can change
  change               invariant        rendering is faithful  may change        changes              perceptual           through
                                                                                                      constraints          latency,
                                                                                                                           fidelity, or
                                                                                                                           accessibility

  Implementation       Can remain       Behavioral semantics   Internal          Internal             Human interpretation Observable
  change               invariant        must be proved         descriptions and  representations      may be unaffected    behavior
                                        preserved, not assumed traces change     change                                    invariant only
                                                                                                                           under specified
                                                                                                                           equivalence
  ----------------------------------------------------------------------------------------------------------------------------------------

# 8. Comparative Case Studies

## 8.1 Mathematical theorem

Target: a theorem and its proof-theoretic or model-theoretic
consequences. Ontology: mathematical objects, relations, and proof
objects admitted by the foundational system. Semantic structure:
satisfaction, entailment, and validity. Representations: symbolic
notation, geometric diagram, prose proof, and executable proof assistant
term. A notation change can preserve formal semantics while changing
cognitive accessibility. A diagram may expose invariants and suppress
exceptional cases. A proof assistant representation adds
machine-checkable dependencies and removes some pragmatic ambiguity.
Equivalent theorem statements do not imply equivalent proof
understanding.

## 8.2 Transportation network

Target: locations, connections, schedules, capacities, and routing
constraints. A geographic map preserves spatial geometry; a subway
diagram preserves connectivity and ordering while distorting distance;
an adjacency matrix preserves edge incidence and supports algebraic
operations; a routing graph adds weights and operational constraints.
The ontology can remain approximately stable while semantic relations
and available information differ by scope. Interpretation depends on the
user\'s task: navigation, network planning, accessibility assessment, or
capacity optimization. Behavioral route choice can change without any
change to the underlying network.

## 8.3 Computational workflow

Target: a computation and its permitted state transitions. Source code,
abstract syntax tree, bytecode, execution graph, and user interface are
not simply visual variants. They expose different entities and
operations. A compiler seeks semantic preservation between source and
target under a declared observation relation. The AST preserves
syntactic composition; bytecode preserves executable behavior but can
obscure source abstractions; an execution graph exposes causal or
control dependencies; a UI exposes selected domain actions rather than
program operations. Human interpretation and behavior vary by
representation even where compiler-level observational equivalence
holds.

# 9. Counterarguments and Falsification

  ------------------------------------------------------------------------
  **Claim under test**    **Contrary evidence or   **Consequence**
                          argument**               
  ----------------------- ------------------------ -----------------------
  Ontology and semantics  Every semantics          Treat them as
  are separable           quantifies over or       distinguishable roles
                          denotes some domain;     with mutual
                          intended models partly   constraints, not
                          constitute ontology      independent layers

  Semantics is            Natural-language and     Limit independence
  independent of          social meaning depend on claim to stipulated
  interpretation          use, context, and        formal semantics; model
                          communal practices       social semantics as
                                                   stabilized interpretive
                                                   practice

  Representation merely   Diagrams, notation, and  Allow representation
  exposes prior semantics interaction can          and interpretation to
                          restructure categories,  revise effective
                          inference, and later     semantic state and
                          semantic commitments     ontology

  Information is a        Shannon information      Type every information
  neutral middle layer    excludes meaning;        claim; do not place one
                          semantic information     generic information
                          theories disagree on     layer in the
                          truth and relevance      architecture

  Behavior reveals        Behavior is multiply     Require interventions,
  interpretation          realizable and           process measures, and
                          confounded by skill,     competing-model tests
                          goals, incentives,       
                          environment, and chance  

  Software architecture   Layered architectures    Use architecture as
  already proves the      are engineering          evidence of practical
  model                   decompositions, often    separability, not
                          leaky and                metaphysical proof
                          application-specific     

  Computers possess       Searle and               Remain neutral on
  intrinsic semantics     derived-intentionality   intrinsic machine
                          arguments deny that      understanding;
                          syntax alone suffices;   distinguish formal
                          causal and functional    semantics from
                          theories offer           phenomenal or
                          alternatives             intentional meaning
  ------------------------------------------------------------------------

# 10. Threats to Validity

Terminological heterogeneity is the principal threat. \'Interpretation\'
names a mathematical assignment in logic and a cognitive or cultural
process elsewhere. \'Ontology\' names both reality-directed inquiry and
engineered artifacts. The synthesis controls this by defining roles
rather than asserting lexical identity.

Formal and empirical results operate at different levels. A
semantics-preservation theorem establishes equivalence under stipulated
observations; it does not establish equal user understanding. Behavioral
studies show effects under particular tasks and populations; they do not
establish universal semantic mechanisms.

The review is cross-disciplinary rather than exhaustive. Hermeneutics,
phenomenology, enactivism, and social theory contain richer accounts of
interpretation than can be formalized here. Their omission would bias
the framework toward formalism, so the model explicitly permits socially
stabilized and enacted semantics while refusing to treat them as
computationally complete.

The architecture may be too general to predict behavior without
domain-specific mechanisms. This is intentional: it is a conceptual
bridge and diagnostic framework, not a complete cognitive theory. Its
empirical value depends on whether it supports clearer hypotheses,
transformation analyses, and falsification tests than undifferentiated
language does.

# 11. Discussion

The distinctions are not inventions. Philosophical ontology,
model-theoretic semantics, semiotic representation, and interpretive
practice have long been separated in their home disciplines. Computer
science adds unusually sharp demonstrations: a program\'s syntax,
denotation, operational behavior, intermediate representation, compiled
implementation, and user-facing presentation can be related by proofs
without being identical. Ontology engineering further separates a domain
commitment from a representation language and from application data.

What is missing is not another layer but a shared account of how the
roles compose. The proposed relational architecture supplies that
account conservatively. Meaningfulness is not located in the ontology,
semantic state, representation, interpreter, or behavior alone. It
arises when representational vehicles are governed by semantic relations
grounded or stabilized within a practice and successfully constrain
inference or action concerning a target. Formal systems can instantiate
this relation by stipulation and proof; human meaning adds competence,
history, convention, embodiment, and purpose.

For later work on semantic invariance, the result is precise. What may
remain invariant is never \'meaning\' without qualification. Candidate
invariants include ontological commitment, denotation, truth conditions,
inferential consequences, operational behavior, recoverable task
information, interpreted belief, or action outcome. Each requires a
declared semantics, context, observer class, admissible transformation,
and tolerance. Projection analysis should therefore state which of these
is claimed to remain invariant and which may change.

# 12. Conclusion

Ontology, semantics, representation, interpretation, and behavior can be
organized into a coherent computational theory without contradicting
existing philosophy and computer science. The evidence does not support
a strict hierarchy or a universal one-way pipeline. It supports a
relational architecture in which domain commitments constrain semantic
assignments; projections realize selected aspects of states and
semantics as representations; interpreters apply or construct
significance under context; and behavior emerges through goals,
capabilities, environment, and feedback.

The distinctions are already substantially established, but under
incompatible vocabularies and levels of analysis. A genuinely new
primitive is not warranted. A cross-disciplinary synthesis is warranted
because it prevents category errors and supplies a common method for
analyzing invariance, transformation, epistemic access, and behavior.
The central theoretical constraint is: no computational artifact is
meaningful solely by virtue of its physical form, and no observed
behavior uniquely determines the semantics or interpretation that
produced it.

# 13. Required Artifacts

## A. Canonical Definitions

  -----------------------------------------------------------------------
  **Concept**                         **Canonical definition**
  ----------------------------------- -----------------------------------
  Ontology                            A set of commitments about
                                      admissible entities, categories,
                                      relations, identity conditions,
                                      modalities, and constraints in a
                                      domain; in computation, an explicit
                                      formal specification approximating
                                      a shared conceptualization.

  Semantic state                      The content-bearing assignments and
                                      relations currently licensed by a
                                      specified semantics for a system or
                                      discourse state.

  Information                         A typed measure or characterization
                                      of distinctions, correlations,
                                      descriptions, or content relative
                                      to a specified source, code,
                                      semantic relation, or use.

  Representation                      A materially or formally realized
                                      vehicle that provides selective
                                      access to a declared target under a
                                      mapping and interpretive practice.

  Interpretation                      The application or construction of
                                      semantic relations by an
                                      interpreting system under context,
                                      competence, history, and purpose.

  Projection                          A declared transformation from a
                                      target description or state to an
                                      accessible representational form,
                                      specifying preservation,
                                      transformation, omission,
                                      introduction, operations,
                                      assumptions, uses, and failure
                                      conditions.
  -----------------------------------------------------------------------

## B. Relationship Diagram

The diagram is relational rather than strictly layered:

  -----------------------------------------------------------------------------------------------------------------------------------------------------
  **Constraint / **Domain commitments **Semantic assignment S** **Projection   **Representation   **Interpretation I** **Behavior B**
  feedback**     O**                                            P**            R**                                     
  -------------- -------------------- ------------------------- -------------- ------------------ -------------------- --------------------------------
  Forward role   Defines admissible   Assigns content/behavior  Selects and    Exposes vehicle    Constructs/applies   Produces situated action
                 domain                                         transforms                        significance         

  Primary input  Inquiry and practice O plus expressions/states X/S plus use   Projection output  R plus               Interpreted state plus
                                                                contract                          context/history      goals/capabilities/environment

  Feedback       Revised by           Revised by                Revised by     Redesigned after   Learns from outcomes Changes environment and future
  received       anomalies/practice   interpretation/evidence   failures       use                                     evidence
  -----------------------------------------------------------------------------------------------------------------------------------------------------

## C. Transformation Matrix

Table 7 is the reusable transformation matrix. Its rule is that
invariance must be typed and tested independently for ontology, formal
semantics, information, representation, interpretation, and behavior.

## D. Cross-Disciplinary Vocabulary

  --------------------------------------------------------------------------------------------------------------------
  **Neutral role     **Philosophy /    **AI / knowledge   **Programming languages**  **Linguistics /   **HCI /
  term**             logic**           representation**                              semiotics**       cognitive
                                                                                                       science**
  ------------------ ----------------- ------------------ -------------------------- ----------------- ---------------
  Domain commitments Ontology;         Domain ontology;   Types, values, stores,     Discourse         Task/world
                     ontological       TBox               event domains              ontology;         model
                     commitment                                                      referents         

  Semantic           Interpretation;   Model theory;      Denotational/operational   Reference; truth  Intended system
  assignment         satisfaction      entailment         semantics                  conditions;       meaning;
                                                                                     signification     conceptual
                                                                                                       model

  Representational   Sentence, model,  Knowledge graph,   Syntax, AST, IR, bytecode  Signifier,        Display,
  vehicle            symbol            assertions,                                   utterance,        artifact,
                                       embedding                                     diagram           interface state

  Interpretive       Understanding;    Reasoning or       Evaluation (formal) or     Pragmatic         Sense-making,
  process            hermeneutic       grounding process  programmer comprehension   interpretation;   recognition,
                     uptake                                                          semiosis          mental model
                                                                                                       formation

  Behavioral         Action or speech  Decision, plan,    Execution trace and output Response and      Interaction
  realization        act               policy                                        coordination      sequence,
                                                                                                       choice,
                                                                                                       performance
  --------------------------------------------------------------------------------------------------------------------

## E. Open Problems

-   Grounding: under what causal, functional, biological, or social
    conditions does formal semantics become intrinsic or non-derived
    meaning, if ever?

-   Semantic-state identity: which equivalence relation should govern
    claims that semantic state persists across languages, modalities, or
    implementations?

-   Interpretation measurement: how can competing interpretations be
    inferred without treating task success as equivalent understanding?

-   Ontology revision: how should frameworks represent cases where new
    representations alter the categories through which the target is
    understood?

-   Distributed interpretation: what is the correct unit when meaning is
    stabilized across people, artifacts, institutions, and computational
    agents?

-   Plural semantics: how should one system support multiple legitimate
    semantics or stakeholder interpretations without collapsing into
    ambiguity?

-   Machine-generated representations: how can provenance, intended use,
    and semantic commitments be recovered when no human authored a
    stable codebook?

-   Behavioral equivalence: what interventions distinguish shared
    semantic competence from policy imitation or coincidentally
    equivalent outcomes?

# References

Bar-Hillel, Y., & Carnap, R. (1953). Semantic information. British
Journal for the Philosophy of Science, 4, 147-157.

Borst, W. N. (1997). Construction of Engineering Ontologies for
Knowledge Sharing and Reuse. University of Twente.

Dretske, F. I. (1981). Knowledge and the Flow of Information. MIT Press.

Floridi, L. (2004). Outline of a theory of strongly semantic
information. Minds and Machines, 14, 197-221.

Gibson, J. J. (1979). The Ecological Approach to Visual Perception.
Houghton Mifflin.

Grice, H. P. (1957). Meaning. Philosophical Review, 66, 377-388.

Gruber, T. R. (1993). A translation approach to portable ontology
specifications. Knowledge Acquisition, 5, 199-220.

Guarino, N. (1998). Formal ontology and information systems. In
Proceedings of FOIS \'98, 3-15.

Hutchins, E. (1995). Cognition in the Wild. MIT Press.

Kolchinsky, A., & Wolpert, D. H. (2018). Semantic information,
autonomous agency, and nonequilibrium statistical physics. Interface
Focus, 8(6).

Morris, C. W. (1938). Foundations of the Theory of Signs. University of
Chicago Press.

Newell, A., & Simon, H. A. (1976). Computer science as empirical
inquiry: Symbols and search. Communications of the ACM, 19, 113-126.

Peirce, C. S. (1931-1958). Collected Papers of Charles Sanders Peirce.
Harvard University Press.

Plotkin, G. D. (1981/2004). A structural approach to operational
semantics. Journal of Logic and Algebraic Programming, 60-61, 17-139.

Searle, J. R. (1980). Minds, brains, and programs. Behavioral and Brain
Sciences, 3, 417-457.

Shannon, C. E. (1948). A mathematical theory of communication. Bell
System Technical Journal, 27, 379-423, 623-656.

Scott, D., & Strachey, C. (1971). Toward a Mathematical Semantics for
Computer Languages. Oxford University Computing Laboratory PRG-6.

Tarski, A. (1933/1956). The concept of truth in formalized languages. In
Logic, Semantics, Metamathematics. Oxford University Press.

W3C. (2012). OWL 2 Web Ontology Language: Structural Specification and
Functional-Style Syntax, Second Edition.

Wittgenstein, L. (1953). Philosophical Investigations. Blackwell.

Zhang, J., & Norman, D. A. (1994). Representations in distributed
cognitive tasks. Cognitive Science, 18, 87-122.
