# CIS-EX-008 — Projection Signaling Study Protocol

**Theory version:** 1.0.0  
**Protocol version:** 0.1.0  
**Status:** proposed, not preregistered or frozen

## Research question

Holding target semantics and feasible operations constant, how do changes in
projection exposure and signaling affect discovery, believed availability,
action selection, invalid attempts, completion, and recovery?

## Design

Use a within-participant, counterbalanced comparison of two projections over the
same deterministic target and operation set. One projection exposes and signals
the target operation; the other exposes it without the target signifier. Match
latency, instructions, available operations, state transitions, success
criteria, and feedback after execution. Randomize condition order using a seed
recorded in the frozen preregistration. Separate training tasks from measured
tasks and insert a transfer task to detect carryover.

Population, accessibility accommodations, sample size, recruitment, device
constraints, task content, and stopping thresholds remain unset until methods,
accessibility, and ethics review. Sample size must follow a preregistered
precision or power analysis; this protocol does not invent a count.

## Required contract instances

- Projection Contract for each condition;
- Opportunity Contract defining actual and believed availability separately;
- Interaction Contract defining episode boundary, failure, completion, and
  recovery;
- Behavioral Evidence Contract defining records, detection, coding,
  attribution, alternatives, missingness, and adjudication;
- Measurement Contract for each outcome;
- optional Prediction Contract only if an out-of-sample forecast is registered.

All instances must validate, use immutable versions, and retain unratified
concept identifiers as null until ratification. Draft contract labels do not
license collection.

Draft 0.2.0 instances are maintained under `CIS-EX-008/contracts/`: two Projection
Contracts, one Opportunity Contract, one Interaction Contract, one Behavioral
Evidence Contract, and separate Measurement Contracts for discovery, invalid
attempts, recovery, completion, and believed availability. Their README records
the exact mapping and structural validation boundary.

`CIS-EX-008/data/` contains one explicitly synthetic Version 0.3.0 lineage
fixture and one intentionally invalid missing-environment fixture. Neither is an
observation or a substitute for an instrument pilot.

## Direct records and derived variables

Instrument records: projection shown, operation exposure, signifier state,
timestamp, selected operation, execution result, feedback, state transition,
task completion, abandonment, and recovery transition.

Derived only under frozen rules: unprompted discovery event, prompted discovery,
invalid attempt, path length, recovery duration, and completion. Believed
availability, expected consequence, perceived reversibility, and confidence are
participant reports or latent measures, never inferred from non-selection.

## Analysis boundary

Estimate condition effects with participant-level repeated structure, order and
carryover terms, effect sizes, uncertainty, missingness sensitivity, and the
preregistered equivalence bounds. Compare a baseline state-and-trace model with
typed opportunity variables only out of sample. Preserve confirmatory and
exploratory analyses separately and append deviations.

Equal completion does not establish equal discovery, understanding,
accessibility, trust, or interaction equivalence. A signaling effect does not
establish a universal perceptual mechanism or transport beyond the declared
population, task, projection, device, and context.

## Freeze gate

Preregistration is blocked until canonical concept identifiers, study-specific
governance, consent, instruments, coding rules, manipulation checks, sample-size
rationale, accessibility review, analysis code, and independent methods review
are complete. No participant collection is authorized by this example.
