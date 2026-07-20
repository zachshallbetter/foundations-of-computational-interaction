# Unreleased

- `VERSIONING.md`: the FCI theory layer is relabelled **0.9.0** (was 1.0.0), with the rationale recorded
  in the policy itself. Substrate, schema, dataset and publication versions are **unchanged** — this is
  a single-layer correction, and per the non-coupling rules it implies nothing about any other layer.

- `verify-object` now permits exactly the four external symbols C11 §4 allows a freestanding
  implementation to require (`memcpy`, `memset`, `memmove`, `memcmp`) and rejects everything else.
  This is a **precisification, not a relaxation**: cross-compiler CI found that GCC inlines this
  substrate's struct copies while Clang emits `memcpy`, so the previous zero-undefined-symbol
  assertion encoded a claim stronger than "freestanding" that no portable build can satisfy.
  Verified that the check still rejects a genuine external dependency. The stronger property is
  still available by shipping substrate-local implementations of the four; that option is recorded
  in the Makefile rather than taken silently.
- `app/README.md` corrected: it claimed `make test` rejects *any* undefined external symbol, which
  was true only under GCC.

- `verify-object` now reports **which** undefined symbols were found, and under which compiler,
  instead of failing silently via `test -z`. The freestanding invariant is a real claim about the
  substrate; a gate that asserts it without saying what broke is not diagnosable. CI's first
  cross-compiler run failed here under Linux clang with no usable log output — this is the fix for
  that, not a relaxation of the check.

# FCI Internal Consolidation Candidate 1.0.0

This candidate freezes the interdisciplinary-synthesis determination, authority
order, naming policy, ontology labels, conformance levels, and C reference scope.
It adds draft contract and modular dataset schemas, governance controls,
machine-generated ontology and contract figures, two deterministic benchmarks,
and one proposed study protocol. CIS-EX-008 now includes ten complete draft
contract instances plus positive and negative synthetic dataset fixtures for the
record-to-measure lineage.

Contract schemas 0.2.0 make the previously implicit reproduction boundaries
structurally mandatory: projection host and feedback, action vocabulary and
consequences, interaction identity and provenance, behavioral coding lineage,
measurement interpretation and uncertainty budgets, and the complete
similarity, transfer, strategy, prediction, and comparison claim boundaries.
The ten CIS-EX-008 instances and synthetic contract references migrate with the
schema; theory remains 1.0.0.

Breaking draft changes: dataset schema 0.3.0 requires environments and explicit
participant consent references; the C execution record adds trace schema version
1 and replay rejects incompatible versions; the recurrence helper is named
`cis_trace_has_aba_recurrence_pattern`.

External release remains blocked by concept-ID ratification, authoritative
bibliography and evidence review, schema pilots, derivative regeneration,
empirical work, and independent technical, methods, accessibility, and
ethics/community review. No publication date or reviewer is assigned.
