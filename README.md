# Foundations of Computational Interaction (FCI)

**Foundations of Computational Interaction (FCI)** is an interdisciplinary scientific synthesis and research program for formally describing, measuring, modeling, and predicting human–computer interaction. It is a research program, not an established independent discipline; its scientific necessity and empirical advantage remain to be demonstrated.

---

## Repository structure

This repository is organized into three main layers:

1. **[`docs/`](docs/) — Conceptual corpus & knowledge system of record**
   - `01_Knowledge_System_of_Record/` — canonical definitions, glossary, relational ontology (v0.3), and contract definitions.
   - `02_Research_Papers/` — scholarly papers and arguments in logical dependency order.
   - `03_External_Literature/` — supporting external literature.
   - `04_Reference/` — reference bibliography (v1.1.2), dataset schemas, templates, and concept graphs.
   - `05_Publication/` — publication guidelines and consistency audits.
   - `90_Project/` — release manifests, audits, and previous release packages.
2. **[`app/`](app/) — C reference substrate**
   - A freestanding C11 reference substrate demonstrating computational coherence for a deterministic subset of the FCI ontology. Includes validation schemas, benchmark programs, and stress tests. It does not implement or validate the complete empirical, probabilistic, concurrent, causal, comparative, or predictive framework.
3. **[`_archive/`](_archive/) — archived releases**
   - Preserved historical release data and pre-normalization files.

---

## Getting started

- To understand the conceptual synthesis and directory layout, start with **[`docs/START_HERE.md`](docs/START_HERE.md)**.
- To build the C reference kernel and run validation tests, see **[`app/README.md`](app/README.md)**.

---

## Licensing

This repository uses split licensing — see **[`LICENSES.md`](LICENSES.md)** for the authoritative path map:

- **Code, schemas, and tooling** (e.g. `app/`, `*.schema.json`): **Apache-2.0** ([`LICENSE-CODE`](LICENSE-CODE)).
- **Research corpus and owned documentation/figures** (e.g. `docs/` prose, figures): **CC BY 4.0** ([`LICENSE-CONTENT`](LICENSE-CONTENT)).
- Third-party materials are excluded or separately attributed.

*Licensing is provisional pending confirmation against publication and commercialization plans; see `LICENSES.md`.*
