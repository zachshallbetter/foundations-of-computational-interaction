# Bounded Reference Substrate for Computational Interaction

Foundations of Computational Interaction is an interdisciplinary scientific program for describing, measuring, comparing, modeling, and predicting human-computer interaction. It coordinates established theories and methods around computational interaction as a shared explanatory object, framing the work as a foundational model rather than a proposal for a new academic field.

This repository implements a deterministic, fixed-capacity reference kernel for a selected subset of the proposed model's ontology. It demonstrates separability and internal computational coherence; it does not implement or validate the complete empirical, probabilistic, concurrent, causal, comparative, or predictive framework.

For a plain-language walkthrough, start with [`../docs/04_Reference/Handbooks/Explaining_CompInt.md`](../docs/04_Reference/Handbooks/Explaining_CompInt.md), then use the example implementation files to test each distinction directly.

## What it validates

The model keeps the research's main analytical layers separate:

- **domain commitments** are explicit state-variable, action, transition, invariant,
  participant, and role declarations;
- **system state** is a bounded vector of signed 64-bit cells;
- **operational semantics** are ordered predicates and effects;
- **projections** explicitly label preserved, transformed, introduced, and omitted
  structure and separately expose and signal actions;
- **opportunity** reports domain validity, capability, permission, enablement,
  reachability, exposure, signaling, belief, selection, execution, success, and
  reversibility as separate fields;
- **interaction** is retained as an event trace with participant identity, before and
  after state hashes, failures, and an exact ABA recurrence-pattern test that makes no
  causal claim;
- **snapshots and replay** use a deterministic canonical integer encoding;
- **comparison** includes typed exact state/projection equivalence, normalized state
  similarity, and trace edit similarity under an explicit identity correspondence;
- **measurement** includes timing, frequency, completion, opportunity mismatch, and
  recovery primitives without treating any metric as a construct.

The implementation does not claim empirical construct validation. It validates that
the concepts can form a coherent, deterministic computational substrate. Strategy,
interpretation, behavioral attribution, and generalized claims remain evidence-bearing
research layers and are not inferred from raw actions.

## Authority order

When artifacts disagree, resolve them in this order:

1. final synthesis determination;
2. canonical glossary;
3. relational ontology and `docs/CANONICAL_ONTOLOGY.md` synchronization freeze;
4. versioned normative contract schemas;
5. research handbooks and protocols;
6. individual foundational papers and ratified evidence;
7. `CONFORMANCE.md` and the computational reference specification;
8. C implementation and tests;
9. examples and visualizations;
10. generated PDF, DOCX, PNG, SVG, and standalone HTML derivatives;
11. historical or archived documents.

Code never silently defines theory. Bibliography records never define canonical
concepts. Generated derivatives are never edited as sources.

## Build and run

```sh
make
make test
make demo
make conformance
make benchmarks
```

These commands require only a C11 compiler and `make`. The library itself uses only
the C standard headers for fixed-width integer and size types; it performs no I/O,
allocation, filesystem, clock, network, or operating-system calls.
The library object is compiled as freestanding code, and `make test` rejects any
undefined external symbol in it. The demo and test executables use hosted C only to
print their results.

## Layout

- `include/cis.h` — complete public data model and operations
- `src/cis.c` — dependency-free implementation
- `tests/test_cis.c` — executable research-concept validation
- `tests/test_stress.c` — deterministic state-machine and opportunity stress tests
- `tests/test_examples.c` — example identity and generated-output synchronization
- `tests/test_schemas.c` — dependency-free JSON syntax and local-reference validation
- `examples/README.md` — stable identifiers and complete contracts for every example
- `examples/manifest.csv` — machine-readable example identity registry
- `examples/door.c` — CIS-EX-001, smallest end-to-end interaction
- `examples/conformance.c` — CIS-EX-002, C-generated state/hash vectors
- `examples/benchmarks/projection-benchmark.c` — CIS-EX-006, cross-interface projection test
- `examples/benchmarks/overclaim-benchmark.c` — CIS-EX-007, incapable-action overclaim test
- `examples/visualizations/interaction-substrate-lab.html` — CIS-EX-003,
  self-contained experiential model
- `examples/visualizations/projection-invariance-workbench.html` — CIS-EX-004,
  governed projection comparison
- `examples/visualizations/evidence-inference-ladder.html` — CIS-EX-005,
  measurement evidence boundary
- `examples/PAPER_ALIGNMENT.md` — canonical concept, source-key, and claim alignment
- `CONCEPT_VALIDATION.md` — disposition and validation boundary for all 54 concepts
- `../docs/01_Knowledge_System_of_Record/08_Canonical_Registry/Canonical_Ontology.md` — frozen theory determination and ontology labels
- `../docs/04_Reference/Handbooks/Explaining_CompInt.md` — plain-language conceptual walkthrough
- `CONFORMANCE.md` — layered theory, schema, implementation, and empirical claims
- `VERSIONING.md` — independent version lines and compatibility rules
- `NAMING.md` — the proposed model terminology and legacy C namespace policy
- `AUTHORITY.md` — conflict, supersession, deprecation, and errata control
- `DOCUMENT_MAP.md` — canonical/supporting/historical artifact registry
- `../docs/01_Knowledge_System_of_Record/10_Governance/` — research data and protocol governance minimum

## Deliberate limits

Capacities are compile-time constants, names are bounded byte arrays, time is an
unsigned caller-supplied tick, and values are signed 64-bit integers. Reachability is
bounded breadth-first search. Projection transforms use integer multiply/add. These
limits avoid hidden allocation and numerical behavior and make exhaustion a typed
error. Increasing a capacity changes storage only, not semantics.

Canonical concept identifiers in the supplied `Concept_Source_Matrix.csv` and
`Evidence_Register.csv` are blank. This implementation therefore uses descriptive C
identifiers and does not invent authoritative canonical IDs.

The C representation is deliberately bounded to 16 state variables, 16 actions,
16 participants, 128 trace records, 128 reachability states, and a 16-step horizon.
Roles and capabilities use 32-bit masks; predicates are scalar comparisons; effects
are `SET` and `ADD`; projections are affine integer fields; belief is caller-supplied;
and no serialization, wire format, thread safety, probability, or concurrency
semantics are claimed. A production formal specification must not be created by
merely increasing these constants.

The public header identifies API version 0.1.0 and trace schema version 1.
Execution records carry that trace version, and replay rejects an incompatible
version. No stable serialization format exists; in-memory structure layout is not
a wire format or compatibility guarantee. Independent systems require external
synchronization because the mutable API is not thread-safe.
