# Changelog

## Unreleased

- **Working practices documented and made checkable.** Added `CLAUDE.md` (operational agent guide: layout, authority order, the verification gate, CI, per-layer versioning and changelogs, branch/commit conventions, engineering craft) and `AGENTS.md` as the agent entry point. The existing `.agents/AGENTS.md` remains authoritative for **research doctrine**; the split is deliberate — doctrine constrains what may be claimed and how it is written, operations constrain how changes are verified and recorded.
- Added [`90_Project/Research_Practices.md`](90_Project/Research_Practices.md): maturity vs provenance as independent dimensions, preregistration, the discovery criterion (a discovery must show the prior basis *could not in principle* have exposed it), permanence of negative results, the structural/representational/convenience classification, and an explicit section on what these practices do **not** establish.
- **Corrected `docs/README.md`, which was stale in both directions**: it described `00_Project/`, `03_Research_Infrastructure/` and `04_External_Literature/`, none of which exist, and omitted `03_External_Literature/`, `04_Reference/`, `05_Publication/` and `90_Project/`, which do. Every link check had passed throughout — the link checker validates links, not claims about structure.
- Added `scripts/check-structure.py`, now gated in CI, which verifies documented directory claims against the filesystem in both directions (described-but-absent and present-but-undescribed). It found the seven drifts above.
- Fixed a dangling reference in `.agents/AGENTS.md` §6.1: the authority order lives in `app/AUTHORITY.md`, not `README.md`, and is now linked directly.

- **Repository renamed** to `foundations-of-computational-interaction` (from `CompInt`), matching the program's full name. GitHub redirects the old URL; local clones should update their remote.
- **Continuous integration added** (`.github/workflows/`), modelled on the Fundamental engine's gate discipline and adapted to FCI's per-layer versioning:
  - `ci.yml` builds and tests the C reference substrate under **both gcc and clang**, then asserts the `make conformance` vectors are **byte-identical across compilers** — determinism across toolchains is the substrate's actual claim, and each build passing its own tests would not test it. A mandatory `conclusion` job asserts every dependency succeeded, so a skipped or cancelled job can never count as green.
  - `pr-checks.yml` enforces record-keeping **per layer** rather than repo-wide: a PR touching `docs/` must add to `docs/CHANGELOG.md`, a PR touching `app/` must add to `app/RELEASE_NOTES.md`. A single shared changelog would imply exactly the cross-layer coupling `app/VERSIONING.md` exists to deny. A further check flags multi-layer version bumps whose description does not address coupling.
- **Corpus link integrity is now gated** (`scripts/check-doc-links.py`): every internal markdown link must resolve. First run found one broken link across the 94 markdown files in the corpus — a `_archive/` reference in the README to a directory that does not exist.
- **README rewritten** for accuracy: removed the non-existent `_archive/` layer, documented the real directory inventory, stated what the C substrate does *and does not* establish, surfaced the per-layer versioning table, and documented the verification gate.

- Added the **Scientific Project Audit and Grading Standard** (`04_Reference/Handbooks/Scientific_Project_Audit_Standard/`, v0.1.0-draft): fatal validity gates, twelve scientific dimensions, formula/scoring rules, project-type profiles, reporting standard, worked examples, governance, and reusable audit report/scorecard templates.
- Standardized program naming to **Foundations of Computational Interaction (FCI)**, replacing the interim "the proposed model" placeholder and residual "CIS" usages; the acronym is defined on first use per document. Example identifiers (`CIS-EX-*`) are unchanged.
- Added machine-checkable governance schemas: `ethics-gate-assessment.schema.json` (the eight non-compensatory ethics/power gates) and `data-management-plan.schema.json`.
- Corpus hygiene: repaired an OCR-garbled bibliography block in the Canonical Glossary, corrected a stray bibliography count (600 → 267 canonical), and repaired a corrupted terminology change-log and package reference in the consolidation records.

## 1.0.0

Initial clean corpus release.

- Organized research papers by dependency order.
- Established the knowledge system of record.
- Separated generated research artifacts from external literature.
- Consolidated existing contracts into a derivative specification.
- Removed operating-system metadata, obsolete duplicates, and temporary audit or migration reports.
- Normalized filenames to `Title_Case_With_Underscores.ext`.
- Preserved all active theoretical, reference, and source content.
