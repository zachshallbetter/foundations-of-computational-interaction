# CompInt Conformance Specification 0.1.0

Conformance is layered. No layer inherits another layer's status.

## Levels

### T — Theory alignment

An artifact states the CompInt 1.0.0 interdisciplinary-synthesis determination,
uses the canonical ontology labels, distinguishes analytical dependency from
causal direction, and makes no disciplinary-independence claim.

### C — Contract conformance

An artifact validates against a named contract schema version and records the
contract instance identifier, version, authority, scope, and prohibited
interpretations. Draft 0.x schema validation is not contract ratification.

### D — Dataset conformance

A dataset validates against `interaction_study.schema.json` 0.3.0, resolves all
referenced records, preserves evidence lineage, declares missingness and
uncertainty, and identifies immutable protocol and contract versions.

### R — Deterministic reference-kernel conformance

An implementation matches the selected deterministic semantics exercised by
the C golden tests: bounded scalar state, deterministic predicates and effects,
atomic invariant-preserving commit, projections, opportunity dimensions,
bounded reachability, formal traces, replay, and typed comparisons.

R conformance does not include OEPLTS probability, observation and instrument
channels, coupling semantics, concurrency, composition, participant-local
state, belief distributions, strategy, causality, prediction, or empirical
measurement validity.

### E — Empirical protocol conformance

A study has preregistered and frozen relevant contracts, instruments, coding,
exclusions, uncertainty, analysis, alternatives, falsification conditions, and
data governance. No study in this repository currently claims E conformance.

### P — Publication readiness

References and evidence mappings are authority-verified and reviewed, figures
have rights and accessibility records, schemas are piloted, and all generated
derivatives match sources. The current repository does not claim P conformance.

## Required conformance statement

Every release or study must list each claimed level, exact version, evidence,
known exclusions, and reviewer status. Silence means no claim.

Passing a lower-level check never licenses a higher-level claim. In particular:

- computation is not empirical validation;
- schema validity is not measurement validity;
- a formal trace is not behavioral evidence;
- prediction output is not calibration or transport evidence;
- an A-B-A state-changing pattern is not reciprocal causal closure;
- polished derivatives are not publication readiness.
