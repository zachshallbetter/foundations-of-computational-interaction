# Changelog

## Unreleased

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
