# Foundations of Computational Interaction

**An interdisciplinary research program for formally describing, measuring, modeling, and predicting human–computer interaction.** The repository holds a versioned knowledge system of record, a freestanding C11 reference substrate for a deterministic subset of that ontology, and the verification tooling that keeps both checkable.

[![Release](https://img.shields.io/github/v/release/zachshallbetter/foundations-of-computational-interaction?label=release&color=4da3ff)](https://github.com/zachshallbetter/foundations-of-computational-interaction/releases/latest)
[![CI](https://github.com/zachshallbetter/foundations-of-computational-interaction/actions/workflows/ci.yml/badge.svg)](https://github.com/zachshallbetter/foundations-of-computational-interaction/actions/workflows/ci.yml)
[![License: CC BY 4.0](https://img.shields.io/badge/corpus-CC%20BY%204.0-lightgrey)](LICENSE-CONTENT)
[![License: Apache-2.0](https://img.shields.io/badge/code-Apache--2.0-blue)](LICENSE-CODE)
![Theory: 0.5.0](https://img.shields.io/badge/theory-0.5.0-2dd4bf)
![Status: research program](https://img.shields.io/badge/status-research%20program-4da3ff)

> It is a **research program, not an established independent discipline**. Its scientific necessity and empirical advantage remain to be demonstrated. Nothing here should be read as a validated empirical result unless a record says so explicitly — and the records are written to make that distinction checkable rather than rhetorical.

## See it run — 30 seconds

The smallest complete use of the reference substrate: declare one bounded state cell, assign semantics to one action, authorize one participant, commit one transition, project the result, print its stable hash.

```bash
cd app && make demo && ./build/door
# state=1 events=1 hash=8184434590310759885
```

The **hash is the point**. The same declaration, the same transition, the same number — on any conforming build, under GCC or Clang. That reproducibility is what the corpus is trying to make precise, and it is the one claim you can check before reading anything else.

Source: [`app/examples/door.c`](app/examples/door.c) (`CIS-EX-001`).

## The idea

Most interaction research either describes systems informally or evaluates them empirically without a shared formal object. This program treats interaction as something that can be **declared, constrained, measured, and projected** under explicit authority — with a hard line between:

1. **What the records claim** (definitions, contracts, arguments, negative results)
2. **What the substrate demonstrates** (computational coherence for a deterministic subset)
3. **What has not been established** (empirical validity, predictive advantage, independent review)

The knowledge system of record is authoritative for concepts. The C substrate is a conformance instrument for a subset of those concepts. Neither substitutes for the other.

## What is here

| Layer | Path | Role |
|---|---|---|
| **Conceptual corpus** | [`docs/`](docs/) | Knowledge system of record — ontology, glossary, papers, reference material, publication records |
| **C reference substrate** | [`app/`](app/) | Freestanding C11 kernel for a *deterministic subset* of the ontology |
| **Corpus tooling** | [`scripts/`](scripts/) | Repository checks enforced in CI |

### Knowledge system of record (`docs/`)

| Directory | Contents |
|---|---|
| [`01_Knowledge_System_of_Record/`](docs/01_Knowledge_System_of_Record/) | Canonical definitions, glossary, relational ontology, contracts |
| [`02_Research_Papers/`](docs/02_Research_Papers/) | Papers in logical dependency order |
| [`03_External_Literature/`](docs/03_External_Literature/) | Supporting external literature (not project-licensed) |
| [`04_Reference/`](docs/04_Reference/) | Bibliography, schemas, templates, concept graphs, audit standard |
| [`05_Publication/`](docs/05_Publication/) | Publication guidelines and consistency audits |
| [`90_Project/`](docs/90_Project/) | Manifests, decisions, research practices, negative-results registry, prior releases |

Start with **[`docs/START_HERE.md`](docs/START_HERE.md)**.

### Reference substrate (`app/`)

A freestanding **C11** kernel with validation schemas, benchmarks, and stress tests.

**What it establishes:** a deterministic subset of the ontology is computationally coherent — it executes, and its stated invariants hold under test across compilers.

**What it does not establish:** empirical, probabilistic, concurrent, causal, comparative, or predictive validity. Passing these tests is **reference-kernel conformance** and nothing more.

See [`app/README.md`](app/README.md) for the build.

## Versioning — layers version independently

Theory, specifications, software, publication infrastructure, and examples version **independently**. A shared number never implies cross-layer conformance.

| Layer | Version | Stability |
|---|---:|---|
| Theory | 0.5.0 | early; pre-ratification |
| Contract schemas | 0.2.0 | draft normative candidates |
| Dataset schema | 0.3.0 | exploratory, not piloted |
| C reference substrate | 0.1.0 | experimental API before 1.0.0 |
| Publication infrastructure | 0.1.0 | internal-use package |
| Examples (`CIS-EX-NNN`) | stable identity + independent revision | semantic replacement gets a **new** ID |

**Non-coupling is policy:** a theory patch does not require a software release; a schema release does not imply empirical validation; passing C tests establishes kernel conformance only. Cross-layer compatibility must be declared in a conformance record.

Authoritative policy: [`app/VERSIONING.md`](app/VERSIONING.md).

> **On `CIS-EX-*` identifiers.** Example identifiers were deliberately not renamed when the program title settled. Their stability is the contract. Residual historical symbols in the C substrate are a separate in-flight rename, not an oversight.

Repository release tag **`v0.5.0`** marks the theory corpus package corresponding to theory version 0.5.0 (see [`VERSION`](VERSION)).

## Verification

Run before proposing a change. Continuous integration runs the same commands.

```bash
cd app && make test                 # build + unit, stress, example, schema, benchmark suites
python3 scripts/check-doc-links.py  # internal markdown links resolve
python3 scripts/check-structure.py  # documented directories exist
```

`make test` exercises six binaries: substrate unit tests; 8192 deterministic traces with an opportunity-independence check; example generation; JSON schema validation with identified contract instances; a state-projection invariant benchmark; and an overclaim-rejection benchmark.

| Workflow | Gate |
|---|---|
| [`ci.yml`](.github/workflows/ci.yml) | C substrate under **gcc and clang**, byte-identical conformance vectors across compilers, corpus link and structure checks; a mandatory `conclusion` job requires every dependency to succeed |
| [`pr-checks.yml`](.github/workflows/pr-checks.yml) | Changes under `docs/` must be recorded in [`docs/CHANGELOG.md`](docs/CHANGELOG.md); changes under `app/` must be recorded in [`app/RELEASE_NOTES.md`](app/RELEASE_NOTES.md) |

## Changelogs

Per-layer, matching the versioning policy:

- **Corpus** — [`docs/CHANGELOG.md`](docs/CHANGELOG.md)
- **C substrate** — [`app/RELEASE_NOTES.md`](app/RELEASE_NOTES.md)

## Licensing

Split licensing. [`LICENSES.md`](LICENSES.md) is the authoritative path map.

| Material | License |
|---|---|
| Code, schemas, tooling (`app/`, `scripts/`, `*.schema.json`) | **Apache-2.0** ([`LICENSE-CODE`](LICENSE-CODE)) |
| Research corpus and owned documentation (`docs/` prose) | **CC BY 4.0** ([`LICENSE-CONTENT`](LICENSE-CONTENT)) |
| Third-party materials | excluded or separately attributed |

Licensing remains provisional pending confirmation against publication and commercialization plans.

## Authority and practice

- **How claims may be made and revised** — [`docs/90_Project/Research_Practices.md`](docs/90_Project/Research_Practices.md)
- **Which artifact wins a conflict** — [`app/AUTHORITY.md`](app/AUTHORITY.md)
- **Negative results** — [`docs/90_Project/Negative_Results.md`](docs/90_Project/Negative_Results.md)

## Citation

If you use this work, please cite it.

```bibtex
@misc{shallbetter_foundations_computational_interaction_0_5_0,
  author       = {Shallbetter, Zachary},
  title        = {Foundations of Computational Interaction},
  year         = {2026},
  version      = {0.5.0},
  publisher    = {Zenodo},
  note         = {Research program corpus and reference substrate},
  url          = {https://github.com/zachshallbetter/foundations-of-computational-interaction},
  orcid        = {0009-0009-9450-3429}
}
```

Machine-readable citation metadata: [`CITATION.cff`](CITATION.cff).  
Archival deposit metadata: [`.zenodo.json`](.zenodo.json).

> After the Zenodo record for version 0.5.0 is published, the concept DOI will be recorded in `CITATION.cff` and a DOI badge will be added here, following the same pattern used for [Fundamental](https://github.com/zachshallbetter/fundamental-engine).

## Author

**Zachary Shallbetter**  
ORCID: [0009-0009-9450-3429](https://orcid.org/0009-0009-9450-3429)
