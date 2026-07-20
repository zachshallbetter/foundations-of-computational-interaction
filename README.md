# Foundations of Computational Interaction (FCI)

**FCI** is an interdisciplinary research program for formally describing, measuring, modeling, and
predicting human–computer interaction.

> It is a **research program, not an established discipline**. Its scientific necessity and empirical
> advantage remain to be demonstrated. Nothing here should be read as a validated result unless a
> record says so explicitly — and the records are written to make that distinction checkable rather
> than rhetorical.

---

## What is actually here

| Layer | Path | What it is |
|---|---|---|
| **Conceptual corpus** | [`docs/`](docs/) | The knowledge system of record — definitions, research papers, reference material, publication records |
| **C reference substrate** | [`app/`](app/) | A freestanding C11 kernel demonstrating computational coherence for a *deterministic subset* of the ontology |
| **Corpus tooling** | [`scripts/`](scripts/) | Repository-level checks that run in CI |

### `docs/` — knowledge system of record

| Directory | Contents |
|---|---|
| [`01_Knowledge_System_of_Record/`](docs/01_Knowledge_System_of_Record/) | Canonical definitions, glossary, relational ontology, contract definitions |
| [`02_Research_Papers/`](docs/02_Research_Papers/) | Papers in **logical dependency order** — explanandum → primary object → architecture of sciences → representation/projection → ontology & semantics → opportunity → interaction → behavior → measurement → similarity → transfer → strategies |
| [`03_External_Literature/`](docs/03_External_Literature/) | Supporting external literature |
| [`04_Reference/`](docs/04_Reference/) | Bibliography, dataset schemas, templates, concept graphs, the audit standard |
| [`05_Publication/`](docs/05_Publication/) | Publication guidelines and consistency audits |
| [`90_Project/`](docs/90_Project/) | Release manifests, audits, decisions, previous release packages, the v1.0 `Reviews/`, and [`Research_Practices.md`](docs/90_Project/Research_Practices.md) |

Start with **[`docs/START_HERE.md`](docs/START_HERE.md)**.

### `app/` — the C reference substrate

A freestanding **C11** kernel plus validation schemas, benchmarks, and stress tests.

**What it establishes:** that a deterministic subset of the FCI ontology is computationally coherent —
it executes, and its stated invariants hold under test.

**What it does not establish** — stated plainly, because the distinction is the point: it does **not**
implement or validate the empirical, probabilistic, concurrent, causal, comparative, or predictive
framework. Passing these tests is reference-kernel conformance and nothing more.

See [`app/README.md`](app/README.md) for the build.

---

## Versioning — layers version independently

FCI versions theory, specifications, software, publication infrastructure, and examples
**independently**. A shared number never implies cross-layer conformance.

| Layer | Version | Stability |
|---|---:|---|
| FCI theory | 0.9.0 | pre-ratification; ontology labels pending identifier ratification |
| Contract schemas | 0.2.0 | draft normative candidates |
| Dataset schema | 0.3.0 | exploratory, not piloted |
| C reference substrate | 0.1.0 | experimental API; no compatibility guarantee before 1.0.0 |
| Publication infrastructure | 0.1.0 | internal-use package |
| Examples (`CIS-EX-NNN`) | stable identity + independent revision | identity stable; a semantic replacement gets a **new** ID |

**Non-coupling is policy, not convention:** a theory patch does not require a software release; a
schema release does not imply empirical validation; passing C tests establishes reference-kernel
conformance only. Cross-layer compatibility must be *declared in a conformance record* — it is never
inferred from equal version numbers.

Authoritative policy: [`app/VERSIONING.md`](app/VERSIONING.md).

> **On `CIS-EX-*` identifiers.** The program was renamed from "CIS" to FCI, but example identifiers
> were deliberately **not** renamed — their stability is the contract. Residual `cis` symbols in the C
> substrate are a separate in-flight rename, not an oversight.

---

## Verification gate

Run before proposing a merge. CI runs the same commands.

```bash
cd app && make test                    # build + unit, stress, example, schema and benchmark suites
python3 scripts/check-doc-links.py     # every internal markdown link resolves
python3 scripts/check-structure.py     # documented directories actually exist
```

`make test` exercises six binaries: substrate unit tests; 8192 deterministic traces with an
opportunity-independence check; example generation; 31 JSON schemas with 10 identified contract
instances; a state-projection invariant benchmark; and an overclaim-rejection benchmark.

CI lives in [`.github/workflows/`](.github/workflows/):

| Workflow | Gate |
|---|---|
| `ci.yml` | Builds and tests the C substrate under **both gcc and clang**, then asserts the `make conformance` vectors are **byte-identical across compilers** — two builds each passing their own tests would not test the determinism claim. Also checks corpus links and that documented directories exist. A mandatory `conclusion` job asserts **every** dependency succeeded — a skipped or cancelled job can never count as green |
| `pr-checks.yml` | A PR touching `docs/` must record it in [`docs/CHANGELOG.md`](docs/CHANGELOG.md); a PR touching `app/` must record it in [`app/RELEASE_NOTES.md`](app/RELEASE_NOTES.md) — the per-layer analogue of a single changelog gate |

---

## Changelogs

Per-layer, matching the versioning policy:

- **Corpus** — [`docs/CHANGELOG.md`](docs/CHANGELOG.md)
- **C substrate** — [`app/RELEASE_NOTES.md`](app/RELEASE_NOTES.md)

---

## Licensing

Split licensing — [`LICENSES.md`](LICENSES.md) is the authoritative path map.

| Material | License |
|---|---|
| Code, schemas, tooling (`app/`, `scripts/`, `*.schema.json`) | **Apache-2.0** ([`LICENSE-CODE`](LICENSE-CODE)) |
| Research corpus, owned documentation and figures (`docs/` prose) | **CC BY 4.0** ([`LICENSE-CONTENT`](LICENSE-CONTENT)) |
| Third-party materials | excluded or separately attributed |

*Licensing is provisional pending confirmation against publication and commercialization plans.*

## Contributing

Working conventions, the authority order, per-layer versioning and the full gate are in
`CLAUDE.md`. Research doctrine — editorial language, example identity, publication
quality gates — is in `.agents/AGENTS.md`. How claims may be made and revised is
in [`docs/90_Project/Research_Practices.md`](docs/90_Project/Research_Practices.md).
`AGENTS.md` is the entry point for agents.

> Root-level agent guidance (`AGENTS.md`, `CLAUDE.md`) is **local tooling config and is not tracked** —
> it matches a machine-wide gitignore rule. It is referenced by name rather than by link for that
> reason: a link would resolve for a contributor who has the files and break on a fresh clone. Check
> `git ls-files` for the authoritative answer on any given file rather than trusting this note.

## Citation

See [`CITATION.cff`](CITATION.cff).
