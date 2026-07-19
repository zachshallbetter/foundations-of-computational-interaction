# FCI Benchmark Suite 0.1.0

Benchmarks are identified examples with executable assertions. They remain
deterministic reference tests, not empirical studies.

| ID | Source | Contract set | Expected output |
|---|---|---|---|
| CIS-EX-006 | `projection-benchmark.c` | Projection; Opportunity; Comparison | `PASS: state projection invariant; signaling intentionally differs` |
| CIS-EX-007 | `overclaim-benchmark.c` | Opportunity; Interaction; Behavioral Evidence boundary; Measurement boundary | `PASS: unsupported claim rejected; limitation recovery recorded` |

`make benchmarks` builds and executes both programs; `make test` treats any
nonzero exit as failure. Exact purposes, exercised concepts, research claims,
non-claims, and validation definitions are controlled by `../README.md` and
`../PAPER_ALIGNMENT.md`.

Path cost, discoverability, trust, novice/expert differences, auditability,
accessibility, concurrency, and real external-tool behavior require empirical or
richer formal layers and are not fabricated by these deterministic fixtures.
