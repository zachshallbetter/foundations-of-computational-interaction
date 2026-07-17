# Concept Validation Record

## Determination

The selected deterministic subset of the Version 1.0.0 concepts forms a coherent minimal computational substrate when four
boundaries are enforced: declarations are separate from state, projections are
separate from targets, availability is separate from observed action and outcome,
and records are separate from interpretations. The C implementation validates those
boundaries mechanically. It does not validate the theory empirically.

The supplied publication package also establishes limits that affect implementation:

- all 54 `canonical_id` cells in `Concept_Source_Matrix.csv` and the corresponding
  evidence IDs are blank, so no canonical identifier is invented here;
- concept-to-source mappings are explicitly heuristic and pending human ratification;
- the dataset schema leaves coded events, measures, uncertainty, payload, and state
  structurally open, so it is unsuitable as a machine execution contract without a
  normative schema change;
- handbooks require provenance, uncertainty, alternative explanations, falsification,
  and validity evidence, so raw transitions cannot legitimately produce strategy,
  intention, mechanism, or generalized claims.

## Canonical concept disposition

Status meanings: **executed** is a directly implemented and tested primitive;
**represented** can be declared or recorded without an inference claim; **research
layer** requires a study-specific empirical, interpretive, or normative contract and
is deliberately not inferred by the substrate.

| Canonical concept | Status | Fundamental treatment |
|---|---|---|
| Domain commitments | Executed | Bounded variables, actions, predicates, effects, roles, capabilities, and invariants form the explicit domain. |
| System state | Executed | A fixed ordered vector of bounded signed 64-bit cells. |
| Semantic assignment | Executed | Predicates and effects assign operational transition meaning to action names. |
| Semantic state | Represented | Current state under the declared operational semantics; richer content is not inferred. |
| Information | Research layer | Typed values and traces are retained; informational meaning or quantity requires a measurement contract. |
| Representation | Executed | State and projected state are distinct material structures. |
| Projection | Executed | Fields declare source, integer transform, introduced value, and omitted-state mask. |
| Scoped invariance | Executed | Typed exact state and projection comparisons require matching field identity, source, transform, and omission scope. |
| Interpretation | Research layer | No intention, content, or purpose is inferred from a transition. |
| Interaction participant | Executed | Stable bounded participant identity, role, and capability mask. |
| Agent | Represented | A participant becomes an acting participant by selecting a declared action; autonomy is not implied. |
| Environment | Represented | Declared domain state supplies the bounded action environment. |
| Affordance | Research layer | Capability and environmental preconditions are available separately; the relational construct is not collapsed into either. |
| Opportunity | Executed | A typed profile coordinates separate availability and trace predicates. |
| Opportunity profile | Executed | Domain validity, capability, permission, enablement, target-bound reachability, exposure, signaling, belief, selection, execution, explicit outcome success, tested reversibility, expectation, and uncertainty remain separate fields. |
| Capability | Executed | Required and possessed bit sets are checked before transition. |
| Permission | Executed | Role authorization is checked independently of capability. |
| Enablement | Executed | Current-state preconditions are evaluated independently. |
| Reachability | Executed | Bounded breadth-first state search tests existence of an admissible path. |
| Exposure | Executed | Projection action mask declares executable access paths. |
| Signaling | Executed | A separate projection mask declares perceivable action signals. |
| Discoverability | Research layer | Signaling and selection can be observed, but discovery probability and process require a study. |
| Believed action | Represented | Availability belief, confidence, and expected consequence are caller-supplied observations. |
| Action | Executed | A named table entry joins authorization, preconditions, and effects. |
| State transition | Executed | Effects apply to a copy, then bounds and invariants pass before atomic state commit. |
| Observation | Represented | Caller-supplied ticks, events, outcomes, and projected snapshots are explicit records. |
| Situated behavior | Research layer | Traces support later attribution; behavior is not inferred from action alone. |
| Behavioral evidence | Research layer | Formal traces preserve identity, result, outcome, time, and hashes; behavioral evidence additionally requires segmentation, attribution, alternatives, uncertainty, and provenance under a Behavioral Evidence Contract. |
| Behavioral equivalence | Research layer | Exact trace comparison is available, but population distributions, task, context, metric, and tolerance require a similarity contract. |
| Interactional equivalence | Represented | State, projection, and trace equivalence primitives exist; a complete operation-transition-observation contract is study-specific. |
| Interaction | Research layer | State-changing records and an A-B-A pattern can be recovered; coupling, uptake, reciprocal constraint, and the strict interaction criteria require declared evidence. |
| Interaction episode | Represented | One system trace is a bounded episode; boundary and timescale are supplied by the embedding study. |
| Coupling | Represented | Shared state is the minimal mediating pathway through which participant actions alter later possibilities. |
| Perturbation | Represented | A committed effect is the minimal propagated state difference. |
| Uptake | Represented | A later transition whose preconditions depend on changed state provides operational uptake evidence. |
| Recurrence | Represented | `cis_trace_has_aba_recurrence_pattern` reports only an A-B-A state-changing pattern; coupling and causal closure require declared analysis. |
| Interaction contract | Represented | Domain, participants, state, actions, invariants, trace, failure results, reverses, and completion predicates cover the executable core. |
| Interaction morphology | Research layer | No rendering or physical surface exists in the substrate. |
| Interaction grammar | Executed | Actions, predicate operators, effect operators, and transitions form a modality-independent typed vocabulary. |
| Interaction history | Represented | Trace order and participant identity preserve history; learning effects are not inferred. |
| Trace | Executed | A fixed-capacity formal trace records selection, rejection or execution, separate outcome, hashes, and time; it is not behavioral evidence by itself. |
| Measurement contract | Represented | Primitive timing, frequency, completion, recovery, and mismatch measures require caller-declared interpretation and units. |
| Interaction similarity | Represented | State, projection, and trace comparison primitives are typed, use explicit trace identity maps, and return comparability separately. |
| Token identity | Executed | One system instance and its monotonic event sequence preserve episode history. |
| Type identity | Research layer | Classification rules must be declared by a study; structural resemblance does not establish type identity. |
| Equivalence | Executed | Exact equality is returned only inside an explicit state, projection, or trace comparator. |
| Similarity | Executed | State range distance, projection field agreement, and correspondence-mapped trace edit distance yield integer permyriad scores. |
| Incomparability | Executed | Comparators return `comparable = 0` when shape, provenance kind, omission scope, bounds, or capacity prevents a common space. |
| Similarity contract | Represented | Comparator choice supplies the frame; study-level mapping, weights, tolerance, uncertainty, and validity domain remain external declarations. |
| Strategy | Research layer | No strategy is inferred from a trace. |
| Strategy contract | Research layer | State abstraction, policy, contingencies, rivals, and evidence must be supplied by a study. |
| Policy | Represented | A caller can select actions conditionally; the substrate does not learn or infer a policy. |
| Fundamental | Executed | Freestanding state, semantics, projection, inspection, snapshots, deterministic hashing, and replay are the implementation's center. |
| Computational Interaction Science | Research layer | The substrate makes the program testable; comparative explanatory gain and empirical validity require actual studies. |

## Mechanical validation

`tests/test_cis.c` exercises declaration validation, duplicate identity rejection,
capability and permission separation, enablement, atomic bounds rejection, monotonic
time, explicit success outcomes, replay and divergence detection, projection
provenance and omission, bounded reachability, opportunity mismatch, reversibility,
recurrence, recovery timing, state/projection/trace comparison, and measurements.

The production object is compiled freestanding with builtin and stack-protector calls
disabled. `make test` checks it with `nm` and fails if any external symbol remains.
The implementation has no allocation, I/O, clock, filesystem, network, operating
system, or third-party call. Hosted I/O exists only in the demo and test driver.

## Further test findings and resolutions

| Finding | Conflict with Version 1.0 | Resolution |
|---|---|---|
| Reachability defaulted to enablement when no target was supplied. | Enablement is a current-state precondition relation; reachability requires a declared target, constraints, and horizon. | Opportunity evaluation now requires a target predicate and always runs bounded reachability. |
| Declaring a reverse action was treated as proof of reversibility. | Reversibility is an outcome relation, not metadata presence. | The engine now executes the forward and reverse semantics under the same participant authority and requires exact restoration of the prior state. |
| Projected snapshots discarded field identity and transformation provenance. | Similarity and invariance require an explicit correspondence and preserved/transformed/introduced/omitted structure. | Projected snapshots now retain complete field declarations; incompatible names, sources, transforms, kinds, or omission masks are incomparable. |
| Trace edit distance assumed equal numeric participant and action indices had equal meaning. | Interaction similarity requires a declared correspondence mapping. | Trace comparison now requires participant and action identity maps and refuses comparison without them. |
| An A-B-A event pattern was reported as recurrence. | Temporal order alone does not establish coupling, uptake, or causal return influence. | The API now reports only the exact state-changing A-B-A recurrence pattern; causal recurrence remains a research-layer determination. |
| Recovery measurement replayed actions without checking trace hashes. | Behavioral evidence must preserve provenance and reject divergent records. | Recovery measurement now validates every before/after hash and returns replay divergence on tampering. |
| Execution was initially treated as successful outcome. | Selected, executed, and successful are distinct trace predicates. | Outcome is now an explicit, separately recorded success, failure, or unknown value. |
| The interactive profile rendered an unobserved outcome like a failed outcome. | Unknown evidence is not negative evidence; execution and success remain separate. | The successful dimension is now tri-valued: yes after explicit success, no after explicit failure, and unknown when no outcome is observed. |
| The interactive summary collapsed system executability into projection exposure. | Capability, permission, enablement, exposure, and belief are different relations. | The figure now reports system executability, projected availability, and belief alignment as three separate conclusions before showing their component dimensions. |
| Draft 0.1.0 contracts named evidence boundaries without requiring all fields needed to reproduce them. | A contract cannot govern a claim when host modality, episode identity, coding lineage, interpretation, uncertainty, counterfactual, abstention, or comparison evidence may be omitted. | Contract schemas 0.2.0 require the missing reproduction boundaries; all ten CIS-EX-008 instances, explanatory templates, synthetic references, validators, and FIG-002 migrate together. |
| The initial contract-instance test checked field names but accepted any declared contract version. | Versioned draft schemas require exact instance-to-schema alignment. | The dependency-free validator now requires schema and contract version 0.2.0 for every identified CIS-EX-008 contract instance. |

The deterministic stress suite executes and replays 8,192 bounded traces across
successful and rejected transitions, then independently varies capability, permission,
enablement, reachability, exposure, signaling, and belief. This specifically guards
against recombining the opportunity dimensions corrected above.

## Experiential validation definition

The interactive door model, identified as **CIS-EX-003**, is a second,
inspectable execution of the same minimal
domain used by the C tests: two bounded state cells, four table-defined actions, three
participants with distinct role/capability combinations, projection-controlled
exposure and signaling, target-bound reachability, explicit belief, and separately
recorded selection, execution, and outcome.

Every visual state is hashed with the same byte order and FNV-1a procedure as
`cis_state_hash`. The four **CIS-EX-002** expected values are generated by
`make conformance` from
the freestanding C object and asserted as golden vectors by `tests/test_cis.c`. A live
parity failure is therefore visible in the model rather than hidden in presentation.
The visual trace is an experiential aid, not behavioral evidence and not an empirical
validation of discoverability, strategy, affordance, uptake, or causal recurrence.
The complete example identity, controls, expected behavior, exercised concepts,
and non-claims are defined in `examples/README.md`.

Browser checks exercised successful and rejected transitions, atomic rejection,
success remaining false for an unknown outcome, explicit success annotation,
capability/permission/enablement/reachability separation, all four C state hashes,
the 320–620 pixel reflow boundary, horizontal overflow, and console diagnostics.

Successive CIS-EX-003 visual reviews found a flat control hierarchy, an
undifferentiated opportunity tile matrix, excessive empty trace space, decorative
active-state color, and a summary that obscured the boundary between execution,
projection, belief, and unknown outcome. The corrected figure leads with three
plain-language conclusions, groups the paper's analytical layers, replaces the tile
matrix with compact evidence rows, preserves unknown explicitly, uses one state
surface, and retains accessible labels without hover titles.

CIS-EX-004 and CIS-EX-005 extend experiential validation to the two boundaries not
made visually primary by CIS-EX-003: governed projection comparison and the eight
measurement evidence levels. Their exact canonical concept, source-key, interaction,
and non-claim alignments are maintained in `examples/PAPER_ALIGNMENT.md`.

CIS-EX-008 extends structural validation through a complete draft contract chain:
two Projection instances, Opportunity, Interaction, Behavioral Evidence, and five
Measurement instances. A positive synthetic study fixture demonstrates the bounded
record-to-measure lineage; a negative fixture proves that a required environment
cannot be silently omitted. These fixtures establish schema and lineage behavior
only, not empirical validity or authorization to collect participant data.

## Falsification boundary

This artifact would fail its fundamental claim if replay diverged from an untampered
trace, a rejected transition mutated state, a projection obscured whether structure
was omitted or introduced, any opportunity dimension implied another without an
explicit rule, comparison reported equivalence across incompatible shapes, capacity
exhaustion were silent, or the library object acquired an external symbol. Those
conditions are executable failures rather than interpretive judgments.
