# Identified Examples

Every example has a stable `CIS-EX-NNN` identifier. The identifier must appear
in the example source, this registry, tests that assert its contract when
applicable, and any validation document that cites it. Identifiers are never
reused. Material semantic changes require a new example identifier; corrections
that restore the documented contract retain the identifier and update its
validation history.

`manifest.csv` is the machine-readable index. Interactive examples keep an
editable HTML fragment under `visualizations/src/` and a generated standalone
HTML file under `visualizations/`; both carry the same identifier and theory
version. `make test` fails when any
registered example, description, editable source, standalone output, or source
identifier is missing.

## CIS-EX-001 — Minimal Door Transition

**Source:** `door.c`  
**Run:** `make demo`  
**Theory version:** 1.0.0  
**Implementation status:** executable C example

Purpose: demonstrate the smallest complete path through the public API without
introducing application architecture. The example declares one `door_open`
state cell with bounds `[0, 1]`, one `open` action, one participant, one
capability requirement, one role permission, one precondition, one effect, and
one preserved projection field. It executes at caller-supplied tick `1` and
prints projected state, trace length, and deterministic state hash.

Concepts exercised: domain commitments, system state, semantic assignment,
participant, agent, capability, permission, enablement, action, state
transition, projection, trace, token identity, and Fundamental.

Expected behavior: execution commits exactly one `0 → 1` transition, produces
one trace event, projects value `1`, and prints hash `8184434590310759885`.
Any other state, event count, result, or hash is a conformance failure.

Non-claims: the example does not establish interaction recurrence, successful
outcome, affordance, discoverability, behavior, strategy, or empirical validity.

## CIS-EX-002 — Door State Conformance Vectors

**Source:** `conformance.c`  
**Run:** `make conformance`  
**Theory version:** 1.0.0  
**Implementation status:** executable C reference generator

Purpose: establish a cross-representation identity check for the two-cell door
domain shared with CIS-EX-003. The example enumerates `position × locked` in
stable order and hashes each state using the production implementation. It is a
reference generator, not a second hash implementation.

Concepts exercised: system state, representation, scoped invariance, token
identity, equivalence, trace-independent snapshot identity, and Fundamental.

Expected vectors:

| Position | Locked | State hash |
|---:|---:|---:|
| 0 | 0 | 16981056525137609861 |
| 0 | 1 | 14748741118170020452 |
| 1 | 0 | 11289045597036932164 |
| 1 | 1 | 13521361004004521573 |

The vectors are golden assertions in `tests/test_cis.c` and live parity checks
in CIS-EX-003. A hash match establishes encoding parity only; it does not prove
semantic, behavioral, or interactional equivalence.

## CIS-EX-003 — Interaction Substrate Lab

**Editable source:** `visualizations/src/interaction-substrate-lab.html`  
**Standalone source:** `visualizations/interaction-substrate-lab.html`  
**Open:** load the file directly in a modern browser  
**Theory version:** 1.0.0  
**Implementation status:** self-contained interactive example

Purpose: make the research separations directly experienceable. The lab uses a
two-cell door domain (`position`, `locked`), four actions (`open`, `close`,
`lock`, `unlock`), and three participants whose roles and capabilities differ.
It exposes the complete opportunity profile while actions are selected,
accepted, rejected, executed, and assigned an explicit outcome.

Controls:

- participant changes role and capability conditions;
- intended action also declares the reachability target;
- outcome after execution keeps an unobserved outcome separate from failure;
- search horizon bounds breadth-first reachability;
- exposed, signaled, and believed switches vary independent opportunity axes;
- attempt records an accepted or rejected selection atomically;
- reset creates a fresh local episode.

Visible evidence:

- current state and projection;
- separate conclusions for system executability, projected availability, and
  belief alignment;
- parity against all four CIS-EX-002 C vectors;
- twelve independent opportunity and trace predicates, including unknown
  outcome rather than false success when no outcome was observed;
- belief-versus-executable-availability mismatch;
- participant-lane event trace with committed, rejected, successful, failed,
  and unknown outcomes encoded separately.

Concepts exercised: domain commitments, state, operational semantics,
participant, agent, environment, projection, capability, permission,
enablement, reachability, exposure, signaling, believed action, action,
transition, opportunity profile, trace, measurement mismatch, reversibility,
comparison parity, and Fundamental.

Expected behavior: rejected actions never mutate state; unknown outcomes never
imply success; exposure never implies signaling or belief; reachability changes
with participant authority and horizon; reversibility requires an authorized
exact forward/reverse round trip; every reachable door state matches its C hash.

Non-claims: the trace is an experiential aid, not behavioral evidence. The lab
does not infer affordance, discoverability, uptake, causal recurrence,
interaction type, policy, strategy, mechanism, or generalized validity.

Validation: browser checks cover successful and rejected transitions, explicit
outcomes, dimension independence, C-vector parity, narrow reflow, overflow, and
runtime diagnostics. The authoritative findings and boundaries are recorded in
`../CONCEPT_VALIDATION.md`.

## CIS-EX-004 — Projection and Invariance Workbench

**Editable source:** `visualizations/src/projection-invariance-workbench.html`  
**Standalone source:** `visualizations/projection-invariance-workbench.html`  
**Open:** load the standalone file directly in a modern browser  
**Theory version:** 1.0.0  
**Implementation status:** self-contained interactive figure

Purpose: make a projection contract inspectable. One declared target is rendered
through a fixed operator projection and an adjustable comparison projection.
Users can preserve, transform, omit, or introduce fields and observe which
typed comparison claims remain licensed.

Controls: temperature may be preserved in Celsius, transformed to Fahrenheit,
or omitted; alarm state may be preserved or omitted; a summary label may be
introduced. The figure reports common comparison space, normalized temperature
information, alarm-task invariance, structural equivalence, and a final typed
verdict without collapsing them into one score.

Concepts exercised: representation, projection, scoped invariance,
transformation, omission, introduced structure, correspondence, equivalence,
similarity, incomparability, and similarity contract.

Expected behavior: an invertible unit transform preserves temperature
information but breaks structural equivalence; omitting alarm removes evidence
for alarm-task invariance; an introduced summary breaks exact structure; no
common observable produces incomparability; partial preservation never reports
overall equivalence.

Non-claims: matching values do not establish token identity, behavioral or
interactional equivalence, observer interpretation, construct validity, or
empirical usefulness.

## CIS-EX-005 — Evidence and Inference Ladder

**Editable source:** `visualizations/src/evidence-inference-ladder.html`  
**Standalone source:** `visualizations/evidence-inference-ladder.html`  
**Open:** load the standalone file directly in a modern browser  
**Theory version:** 1.0.0  
**Implementation status:** self-contained interactive figure

Purpose: operationalize the Measurement Handbook's eight evidence levels and
the governing rule that a metric is not a construct. A fixed raw event remains
constant while users enable the evidential gates required to license stronger
statements.

Controls: instrument verification, independent coding, preregistered estimator,
model calibration, construct validity, causal-alternative tests, and independent
scope replication form an ordered chain. Later checks cannot bypass an earlier
missing gate.

Concepts exercised: raw record, verified observation, coded observation,
derived measure, model estimate, construct evidence, mechanism evidence,
generalized claim, measurement contract, behavioral evidence, uncertainty
boundary, and prohibited interpretation.

Expected behavior: the highest defensible statement advances exactly one level
for each contiguous satisfied gate; an unchecked earlier gate blocks all later
claims; a raw latency never becomes construct, mechanism, or generalized
evidence by visual emphasis alone.

Non-claims: the example does not validate the fixed record, operationalization,
construct, model, mechanism, population, or transport domain. Its purpose is to
show the evidence required before those claims could be considered.

## CIS-EX-006 — GUI/CLI Projection Benchmark

**Source:** `benchmarks/projection-benchmark.c`  
**Run:** `make benchmarks`  
**Theory version:** 1.0.0  
**Implementation status:** executable C benchmark

Purpose: hold domain state, action semantics, participant authority, and the
projected semantic field constant while varying interface signaling. The GUI
projection exposes and signals `save`; the CLI projection exposes the same
action without signaling it.

Concepts exercised: representation, projection, scoped invariance, exposure,
signaling, believed availability, opportunity profile, correspondence, and
typed comparison.

Expected behavior: the projected states are exactly equivalent at similarity
`10000/10000`; exposure agrees; signaling differs. The program exits nonzero if
any of those assertions fails.

Non-claims: semantic projection equivalence does not establish interface,
behavioral, interactional, accessibility, usability, or outcome equivalence.

## CIS-EX-007 — Conversational Overclaim Benchmark

**Source:** `benchmarks/overclaim-benchmark.c`  
**Run:** `make benchmarks`  
**Theory version:** 1.0.0  
**Implementation status:** executable C benchmark

Purpose: model a conversational assistant that presents an external-send
action despite lacking the required capability. The attempted action must be
rejected without state mutation. A separate supported action records an
explicit limitation and recovery outcome.

Concepts exercised: participant, capability, permission, exposure, signaling,
belief, selection, rejection, execution, outcome, opportunity mismatch,
recovery, and trace.

Expected behavior: the unsupported action returns `CIS_ERR_CAPABILITY`, records
a rejected trace event, and leaves state unchanged. The explanation action then
executes, receives an explicit success outcome, and resolves the belief-versus-
availability mismatch. The program exits nonzero on any conflation.

Non-claims: the benchmark does not model natural-language understanding,
honesty, intention, trust, user interpretation, or real external tool access.

## CIS-EX-008 — Projection Signaling Study Protocol

**Source:** `studies/CIS-EX-008_projection-signaling-study.md`  
**Use:** protocol review only  
**Theory version:** 1.0.0  
**Implementation status:** proposed worked study; not preregistered or executed

Purpose: translate the first decisive empirical question into a bounded,
counterbalanced design while exposing every unresolved decision that must be
closed before participant collection.

Inputs: two governed projections over one target and operation set; frozen
contract instances; reviewed instruments, coding rules, governance, consent,
sample-size rationale, counterbalancing, and analysis plan.

Associated artifacts: `studies/CIS-EX-008/contracts/` contains ten complete
draft 0.2.0 instances covering both projections, opportunity, interaction, behavioral
evidence, and five separately scoped measurements. They are structurally checked
but deliberately remain draft and unauthorized for collection.
`studies/CIS-EX-008/data/` adds identified positive and negative synthetic
dataset fixtures covering the record-to-measure lineage without fabricating
empirical evidence.

Concepts exercised: projection, exposure, signaling, believed availability,
selection, execution, recovery, formal and behavioral trace separation,
measurement, uncertainty, carryover, explanatory gain, and predictive gain.

Expected behavior: reviewers can trace each proposed variable from instrument
record through coding and measurement to a bounded claim, and the freeze gate
prevents collection while identifiers, governance, instruments, or review are
unresolved. Dependency-free tests accept every complete draft instance and the
synthetic study fixture, then reject the intentionally incomplete study fixture.

Non-claims: this protocol contains no participants, observations, effect size,
validated instrument, preregistration, causal result, predictive result, or
generalization.

Research alignment for CIS-EX-003 through CIS-EX-008 is maintained in
`PAPER_ALIGNMENT.md`.

## Visual quality contract

Interactive figures are research interfaces, not decorative supplements. Each
must make one primary relationship dominant, group controls by analytical role,
show false and unknown states without hiding them, use color only with a text or
shape cue, retain native keyboard controls, fit without horizontal overflow at
320 pixels, avoid large empty plot regions, and expose the example identifier
and theory version. Visual emphasis must never imply equivalence, causality,
validity, success, or generalization unless the corresponding computational or
evidential gate is satisfied.
