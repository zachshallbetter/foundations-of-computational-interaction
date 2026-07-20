# Changelog

Corpus / theory layer. The C reference substrate versions **independently** — see
[`../app/RELEASE_NOTES.md`](../app/RELEASE_NOTES.md) and [`../app/VERSIONING.md`](../app/VERSIONING.md).
A shared number never implies cross-layer conformance.

## Unreleased

- **Opened the negative-results registry** ([`90_Project/Negative_Results.md`](90_Project/Negative_Results.md)), which `Research_Practices.md` §4 has mandated since it was written but which had no file. Seeded with the two hypotheses the program's **first external application** disproved: that FCI vocabulary transfers directly as an application's authoring language (the team adopted every architectural commitment and explicitly rejected the nomenclature), and that the reference substrate demonstrates operational adequacy (their requirements — jitter, dead reckoning, conflict detection under partial information — fall entirely outside the deterministic subset). Both narrow the program's claim; neither refutes it. Recorded because revising a claim erases the intuition behind it, and the abandoned intuition is what a later reader is most likely to re-propose.

- **CI: replaced the third-party path-filter action with plain git.** GitHub began forcing Node 24 onto actions that target Node 20; the filter action died silently mid-run and took the whole gate with it, having passed hours earlier. A path filter is a one-line diff and does not need a dependency that can break underneath the repository. Checkout, upload-artifact and download-artifact bumped to current majors at the same time.
- **Contributor guidance consolidated into tracked documentation.** The README's contributing section and `90_Project/Research_Practices.md` referenced local tooling configuration that is not part of the repository, so those pointers resolved for some contributors and broke on a fresh clone. Both now reference tracked documents only — the research practices, the authority order, the versioning policy and the verification gate.

_Nothing yet._

## 0.5.0 — 2026-07-20

**First released version.**

This supersedes two earlier labels, **neither of which was ever tagged or published**:

- `1.0.0` claimed a ratification that has not occurred — ontology labels remain pending identifier
  ratification, and the program's own stance is that its scientific necessity and empirical advantage
  remain to be demonstrated.
- `0.9.0` still implied *approaching release*, which overstates how settled the theory is.

`0.5.0` is the honest position: substantial work exists, and it is nowhere near a stable commitment.
Everything previously recorded under those labels ships here — the entries are retained below rather
than discarded.

- **README accuracy corrections.** The `90_Project/` row omitted `Reviews/` and `Research_Practices.md`. The CI table understated `ci.yml`, which runs a **gcc + clang matrix** and compares the `make conformance` vectors across compilers — the comparison, not the two passing builds, is what tests the determinism claim.

- **Theory version corrected downward, 1.0.0 → 0.5.0** (via a briefly-held `0.9.0`, never tagged). The 1.0 label claimed a ratification that has not occurred: ontology labels are still pending identifier ratification, and the program's own stance is that its scientific necessity and empirical advantage remain to be demonstrated. **No theory content changed** — this is a relabelling, not a revision. Records that cite "theory 1.0.0" (example alignment records, prior release notes, editorial reports) are deliberately left unedited, because rewriting them would misstate what was validated when. Nothing was ever tagged or released at 1.0.0, so no published artifact contradicts the change.
- The two top-level v1.0 records — the comprehensive repository review and the program closeout TODO — were **moved, not deleted**, to `90_Project/Reviews/`. They are 783 lines of unique material with no equivalent anywhere else in the corpus; the canonical-cleanup intent was to clear the top level, which a move achieves without destroying the record.

- **Working practices documented and made checkable.** Operational conventions — layout, authority order, the verification gate, CI, per-layer versioning and changelogs, branch and commit conventions — are now written down alongside the research-claim practices they depend on.
- Added [`90_Project/Research_Practices.md`](90_Project/Research_Practices.md): maturity vs provenance as independent dimensions, preregistration, the discovery criterion (a discovery must show the prior basis *could not in principle* have exposed it), permanence of negative results, the structural/representational/convenience classification, and an explicit section on what these practices do **not** establish.
- **Corrected `docs/README.md`, which was stale in both directions**: it described `00_Project/`, `03_Research_Infrastructure/` and `04_External_Literature/`, none of which exist, and omitted `03_External_Literature/`, `04_Reference/`, `05_Publication/` and `90_Project/`, which do. Every link check had passed throughout — the link checker validates links, not claims about structure.
- Added `scripts/check-structure.py`, now gated in CI, which verifies documented directory claims against the filesystem in both directions (described-but-absent and present-but-undescribed). It found the seven drifts above.

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

- `scripts/check-doc-links.py` now enumerates **tracked** markdown via `git ls-files` rather than walking the filesystem. It was scanning untracked local files, so a local run could fail where CI — which never sees them — passed. Repository link integrity is a property of tracked content.

### Previously recorded under the unreleased `1.0.0` label

Initial clean corpus release.

- Organized research papers by dependency order.
- Established the knowledge system of record.
- Separated generated research artifacts from external literature.
- Consolidated existing contracts into a derivative specification.
- Removed operating-system metadata, obsolete duplicates, and temporary audit or migration reports.
- Normalized filenames to `Title_Case_With_Underscores.ext`.
- Preserved all active theoretical, reference, and source content.
