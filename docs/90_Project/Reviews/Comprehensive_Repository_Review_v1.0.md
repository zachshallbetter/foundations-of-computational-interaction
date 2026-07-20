# CompInt Version 1.0 — Comprehensive Repository Review

**Artifact reviewed:** `CompInt_Version_1.0.zip`  
**Review date:** 2026-07-17  
**Review scope:** repository architecture, authority and governance, canonical-system integration, manifests and checksums, documentation links, bibliography status, schemas and examples, C reference substrate, tests, archival preservation, and release readiness.

## Executive determination

The repository is substantially improved and now has a defensible long-term structure. The conceptual corpus, research papers, external literature, reference resources, publication support, and project history are separated clearly. The C reference substrate builds cleanly and all documented tests pass.

Version 1.0 is **not yet release-ready as a frozen publication artifact**. The remaining blockers are mostly integration and release-control defects rather than theoretical defects:

1. the root and internal documentation still contain stale paths and pre-refactor descriptions;
2. the machine-readable release manifest has four checksum mismatches;
3. the corpus-wide checksum file has five checksum mismatches;
4. `DOCUMENT_MAP.md` contains obsolete paths and a false statement that the research-paper corpus is absent;
5. authority rules are inconsistent across `app/AUTHORITY.md`, `docs/README.md`, and the KSR README;
6. duplicated bibliography-audit files are active in two locations;
7. the bibliography is normalized and deduplicated, but not authority-verified field by field;
8. the release contains macOS metadata and references a nonexistent `_archive/` directory.

These are correctable without changing Version 1.0 theory.

## Overall assessment

| Area | Assessment | Release effect |
|---|---|---|
| Repository architecture | Strong | Ready after documentation cleanup |
| Lossless preservation | Strong | Verified structurally; historical ZIPs retained |
| Canonical authority model | Mostly sound | Requires one synchronized authority statement |
| Canonical registry | Present and integrated | Metadata completeness still needs review |
| Research-paper organization | Strong | 16 dependency-ordered groups present |
| C reference substrate | Strong within stated scope | All documented tests pass |
| Schemas and examples | Strong syntactic/conformance baseline | Empirical validity remains out of scope |
| Release manifest | Failing integrity checks | P0 blocker |
| Corpus checksum manifest | Failing integrity checks | P0 blocker |
| Documentation/path consistency | Material defects | P0/P1 blocker |
| Bibliography | Useful normalized release | Not fully authority-verified |
| Independent review | Not recorded | Release gate remains open |

## 1. Repository architecture

The active `docs/` hierarchy is coherent:

```text
docs/
├── 01_Knowledge_System_of_Record/
├── 02_Research_Papers/
├── 03_External_Literature/
├── 04_Reference/
├── 05_Publication/
└── 90_Project/
```

This structure correctly separates:

- canonical definitions and specifications;
- scholarly argument and provenance;
- external literature;
- reusable research resources;
- publication-production material;
- audits, manifests, prior releases, and Version 2 planning.

The research-paper corpus is present in 16 dependency-ordered groups, from `01_Scientific_Explanandum` through `16_Program_Synthesis`.

### Finding A — `docs/README.md` is stale

`docs/README.md` still describes the old structure:

- `00_Project/`
- `03_Research_Infrastructure/`
- `04_External_Literature/`

Those paths no longer match the repository. It also says source research papers remain authoritative for original arguments “until normative consolidation is ratified,” which conflicts with the stronger authority model elsewhere.

**Severity:** P0 documentation-integrity defect.  
**Required correction:** Rewrite `docs/README.md` from the current directory tree and current authority model.

### Finding B — root `README.md` contains nonportable absolute links

The root README contains five `file:///Users/...` links. These only work on one local machine. It also describes a root `_archive/` directory that is not present in the reviewed archive.

**Severity:** P0 release-portability defect.  
**Required correction:** Replace all absolute local links with repository-relative links and remove or restore `_archive/`.

### Finding C — macOS metadata is included

The ZIP contains a `__MACOSX/` tree and AppleDouble files.

**Severity:** P2 packaging defect.  
**Required correction:** Exclude `__MACOSX`, `.DS_Store`, and `._*` files from the publication package.

## 2. Authority and governance

`app/AUTHORITY.md` is the strongest authority-control document in the repository. It defines conflict resolution, supersession, deprecation, errata, and the prohibition against code silently redefining theory.

### Finding D — authority order is inconsistent across files

Three different formulations currently coexist:

- `app/AUTHORITY.md` places the final determination first, then glossary, ontology, schemas, and handbooks;
- `app/README.md` refers to a nonexistent `docs/CANONICAL_ONTOLOGY.md` synchronization freeze;
- `docs/01_Knowledge_System_of_Record/README.md` says “Ratified specifications (none yet)” outrank ontology and glossary candidates;
- `docs/README.md` gives research papers residual authority pending ratification.

These cannot all be controlling statements.

**Severity:** P0 canonical-governance conflict.  
**Required correction:** Declare one authority document at repository root or make `app/AUTHORITY.md` repository-wide, then have all other files link to it without restating a divergent hierarchy.

## 3. Canonical document map

`app/DOCUMENT_MAP.md` is materially stale.

### Finding E — obsolete and incorrect paths

Examples include:

- `docs/04_Templates/*.schema.json`
- `docs/05_Dataset_Schema/interaction_study.schema.json`
- `docs/EXPLAINING_COMPINT.md`

The active paths are under `../docs/04_Reference/...`.

### Finding F — false corpus-absence statement

The file states:

> No `/research` directory is present in this checkout, so a paper-by-paper research index cannot be truthfully generated here.

The reviewed package contains the complete `docs/02_Research_Papers/` hierarchy with 16 groups. This statement is obsolete and directly contradicts the current repository.

**Severity:** P0 system-of-record defect.  
**Required correction:** Regenerate `DOCUMENT_MAP.md` from the actual tree and include every canonical artifact with current path, role, version, status, authority, dependencies, and reviewer.

## 4. Release manifests and checksums

### 4.1 `app/release-manifest.json`

The manifest contains 20 artifacts. Four recorded hashes do not match current files:

- `COMPINT-DET-001` — `app/README.md`
- `COMPINT-DOCMAP-001` — `app/DOCUMENT_MAP.md`
- `COMPINT-ONTO-SYNC-001` — canonical ontology
- `COMPINT-CONTRACT-001` — common contract schema

The manifest also retains known limitations that are no longer fully accurate, including “canonical concept identifiers are unratified,” while the current canonical glossary reportedly contains assigned slugs.

**Severity:** P0 release-integrity failure.  
**Required correction:** Regenerate the manifest after all content fixes; do not hand-edit hashes.

### 4.2 `docs/90_Project/Manifests/SHA256SUMS.txt`

When resolved relative to `docs/`, 259 of 264 entries match. Five files differ:

- `04_Reference/Dataset_Schema/Data_Dictionary.csv`
- `04_Reference/Dataset_Schema/interaction_study.schema.json`
- `04_Reference/Figures/FIG-001_Concept_Dependency_Graph.pdf`
- `04_Reference/Figures/FIG-001_Concept_Dependency_Graph.png`
- `04_Reference/Figures/README.md`

This indicates post-manifest edits or regenerated derivatives.

**Severity:** P0 release-integrity failure.  
**Required correction:** Determine whether each changed file is intentional, preserve the source lineage, and regenerate `FILE_MANIFEST.csv` and `SHA256SUMS.txt` together.

### 4.3 Historical checksum files

Checksum files inside historical audit and decision folders are relative to their original package roots, not their current extracted subdirectory. They appear broken when run in place.

**Severity:** P2 usability issue, not evidence of corruption.  
**Required correction:** Add a short README stating the expected verification root, or preserve the original ZIP as the sole byte-verifiable historical artifact.

## 5. Canonical registry and concept system

The canonical glossary and ontology exist under `08_Canonical_Registry`, and the ontology/glossary candidates remain available in their functional locations. The scientific determination is framed conservatively: CompInt is an interdisciplinary synthesis and research program, with disciplinary autonomy unproven.

A search of active Markdown did not find residual claims asserting CompInt as an established independent discipline. No direct matches were found for the most obvious legacy conflations identified in the TODO.

### Finding G — registry metadata completeness remains unverified

The repository establishes canonical labels and identifiers, but the review did not find machine-enforced completeness for every requested field:

- maturity;
- dependencies;
- operationalization status;
- validation status;
- superseded definitions;
- forbidden synonyms;
- version introduced/deprecated.

**Severity:** P1 release-quality issue.  
**Required correction:** Validate the canonical registry against an explicit schema or tabular completeness test.

### Finding H — canonical material is duplicated as views

The architecture says the canonical registry is an index/view rather than a second authority. That is defensible, but it requires explicit generated-from or synchronized-with metadata. Otherwise the glossary and ontology copies can drift.

**Severity:** P1 drift risk.  
**Required correction:** Designate one editable source per canonical concept and generate or mechanically compare the registry views.

## 6. Contracts, schemas, and examples

The repository includes 31 JSON schemas and 10 identified contract instances. The test suite verifies JSON syntax, local references, study fixtures, example identities, and source/generated-output synchronization.

All documented checks passed:

```text
PASS: fundamental CIS substrate
PASS: 8192 deterministic traces and opportunity independence
PASS: identified example sources and generated output
PASS: 31 JSON schemas and local references; 10 identified contract instances; valid/invalid study fixtures
PASS: state projection invariant; signaling intentionally differs
PASS: unsupported claim rejected; limitation recovery recorded
```

### Finding I — tests establish syntax and internal conformance, not full semantic validity

`test_schemas` is dependency-free and validates JSON syntax and local references. It does not by itself prove full JSON Schema dialect compliance, semantic consistency across all contracts, empirical validity, or interoperability with external validators.

**Severity:** P1 claim-calibration issue.  
**Required correction:** State exactly what the tests prove. Add validation with at least one standard JSON Schema implementation before publication if schemas are normative.

### Finding J — contract ownership and compatibility metadata require review

The TODO calls for stable ID, version, owner, status, schema, example, tests, and compatibility rules for each contract. The current test success does not establish that all metadata fields are complete.

**Severity:** P1 closeout item.

## 7. C reference substrate

The C substrate is well-bounded and accurately described as deterministic, fixed-capacity, freestanding, and experimental. It explicitly disclaims probability, concurrency, causal identification, empirical construct validation, generalized strategy inference, and stable serialization.

`make test` completed successfully under C11 with `-Wall -Wextra -Wpedantic -Werror`. The freestanding object had no undefined external symbols. Stress tests covered 8,192 deterministic traces.

### Strengths

- clear scope boundary;
- no hidden allocation, filesystem, clock, network, or OS dependencies in the library object;
- typed exhaustion behavior;
- deterministic hashing/replay constraints documented;
- examples tied to stable identifiers;
- tests distinguish computational coherence from empirical validation.

### Finding K — naming/status inconsistency

The public namespace remains `cis_`, while the program name is CompInt. This is documented as legacy compatibility, but example IDs also remain `CIS-EX-*`. The naming decision should state whether example IDs are intentionally frozen or should use a CompInt prefix in a future breaking version.

**Severity:** P2 governance clarity.

### Finding L — release status is internally mixed

The package is named Version 1.0, while the app manifest calls itself `internal-consolidation-candidate`, the C API is 0.1.0, schemas are 0.x drafts, and several canonical documents are 0.x provisional drafts. This can be valid under independent version lines, but the release front matter must explain that “Version 1.0” denotes the corpus release, not maturity 1.0 of every component.

**Severity:** P1 release-communication issue.

## 8. Bibliography and citation integrity

The bibliography package contains 267 canonical records derived from 312 source records, with 45 duplicates merged. It provides BibTeX, CSL JSON, rendered style outputs, audits, checksums, and unresolved-field reports.

The bibliography checksum file passes for all 38 entries.

### Finding M — “verified” overstates authority status

The metadata audit repeatedly marks DOI/ISBN fields as `syntax_valid_authority_unresolved`. At least one DOI is visibly truncated/malformed (`10.1146/annurev-polisci-032015-`). The package is therefore normalized, deduplicated, and audited, but not fully authority-verified.

**Severity:** P0 if used for final publication claims; otherwise P1.  
**Required correction:** Rename or qualify the release as “normalized and audited” until cited records are checked against authoritative registries and publisher records.

### Finding N — active duplicate audit files

Twenty-seven duplicate-hash groups exist outside historical ZIPs. Most are bibliography audits copied both to:

- `docs/04_Reference/Bibliography/Verified_v1.1.2/...`
- `docs/05_Publication/Bibliography_Audits/...`

This reintroduces the duplication the architecture was intended to remove.

**Severity:** P1 maintainability defect.  
**Required correction:** Keep canonical audit outputs in one location. In the other location, use a README or index linking to them.

## 9. Publication and derivative integrity

The repository contains 74 PDFs and 64 DOCX files. The authority policy correctly treats these as derivatives unless explicitly designated otherwise.

### Finding O — no corpus-wide source/derivative equivalence gate

The release contains many derivatives, but the active release checks do not prove that every PDF/DOCX matches its Markdown or source artifact. Existing checks cover examples and selected figures, not the entire publication corpus.

**Severity:** P1 publication blocker.  
**Required correction:** Add a derivative-generation manifest with source ID, generator/version, generation date, and source hash. Regenerate final derivatives in one controlled release step.

## 10. Archival preservation

Seven ZIP files are retained under project history, and the migration map explains their role. The active structure does not present those packages as current sources of truth.

The reviewed ZIP itself passes `unzip -t` with no compressed-data errors.

### Finding P — “byte-for-byte preservation” should be tied to recorded hashes

The claim is credible because original ZIPs are retained, but the release should record each archived ZIP’s size and SHA-256 in the active release manifest.

**Severity:** P1 provenance strengthening.

## 11. TODO accuracy

The updated TODO is materially better than the original and correctly separates Version 1 closeout from Version 2 validation. Several items marked complete based on the prior agent report must be reopened or narrowed:

- `DOCUMENT_MAP.md` is not currently correct;
- release-manifest metadata and hashes are not current;
- corpus checksums are not fully current;
- documentation paths are not synchronized;
- authority statements are not consistent;
- “verified bibliography” is not authority-verified;
- source-to-derivative equivalence is not demonstrated corpus-wide.

The TODO’s distinction between “Agent-reported” and directly inspected evidence was appropriate and prevented these claims from becoming silently authoritative.

## 12. Required closeout sequence

### P0 — must complete before calling the package Version 1.0 final

1. Choose one repository-wide authority statement and synchronize all references.
2. Rewrite root `README.md`, `docs/README.md`, KSR README, and `app/README.md` to current paths and status.
3. Regenerate `app/DOCUMENT_MAP.md` from the actual repository.
4. Resolve the five corpus checksum differences.
5. Regenerate `docs/90_Project/Manifests/FILE_MANIFEST.csv` and `SHA256SUMS.txt`.
6. Regenerate `app/release-manifest.json` and verify every hash and dependency.
7. Remove absolute `file:///` links and nonexistent `_archive/` references.
8. Qualify bibliography verification status and fix authority-verified metadata for all cited release references.
9. Re-run all tests and manifest verification after the final edits.

### P1 — publication-quality closeout

1. Remove active duplicate bibliography-audit copies.
2. Validate canonical-registry metadata completeness mechanically.
3. Validate normative schemas with a standard external JSON Schema validator.
4. Add source-to-derivative generation and equivalence records.
5. Record independent technical, methods, and ethics/community reviews.
6. Clarify component version lines in release front matter.
7. Add hashes for preserved historical ZIPs.

### P2 — cleanup

1. Exclude macOS metadata from release ZIPs.
2. Clarify future disposition of `cis_` and `CIS-EX-*` identifiers.
3. Add verification-root notes to historical checksum folders.

## Release recommendation

**Decision: hold Version 1.0 final publication; approve the architecture as the release candidate baseline.**

No further repository reorganization is warranted. The structure should now be frozen. Complete one controlled integration pass focused only on documentation synchronization, manifest regeneration, duplicate removal, bibliography qualification, derivative provenance, and independent review. Then generate a clean release artifact from the corrected repository and verify it from scratch.

## Evidence recorded during this review

- ZIP integrity: passed.
- Active files excluding macOS metadata and build outputs: 355.
- Markdown files checked for relative-link existence: 85.
- Broken relative Markdown links: 0.
- Absolute local `file:///` links: 5.
- C build and documented test suite: passed.
- JSON schemas checked by project tests: 31.
- Identified contract instances checked by project tests: 10.
- Stress traces: 8,192.
- App release-manifest artifacts: 20; checksum mismatches: 4.
- Corpus manifest entries: 264; checksum mismatches: 5.
- Bibliography checksum entries: 38; checksum mismatches: 0.
- Duplicate content groups outside archives/build outputs: 27.
