# CompInt Program TODO — Version 1.0 Closeout and Version 2.0 Validation

**Program:** Computational Interaction Science (CompInt)  
**Current determination:** Interdisciplinary scientific synthesis and research program  
**Repository baseline:** `Computational_Interaction_Science_v1.0_Lossless_Refactor`  
**Version 1.0 objective:** Close, verify, and publish the conceptual corpus without changing theory.  
**Version 2.0 objective:** Test whether CompInt constructs and contracts provide reliable, valid, causal, predictive, or intervention-relevant gain over simpler alternatives.

---

## Status legend

- [ ] Not started
- [~] In progress
- [x] Complete
- [R] Requires repository review
- [!] Blocked by external dependency
- [D] Decision required
- [V2] Deferred to Version 2.0 research

## Priority legend

- **P0** — Blocks a trustworthy Version 1.0 release
- **P1** — Required for publication-quality Version 1.0
- **P2** — Required for empirical operation or external adoption
- **P3** — Longer-term research expansion


## Verification evidence

Status changes marked “Agent-reported” are based on the repository verification report supplied on 2026-07-17. They record reported completion but do not substitute for direct inspection of the repository, command output, manifests, or file contents. Remaining review items are limited to claims not established by that report.

## Scope rule

Version 1.0 is frozen as a conceptual synthesis. Do not modify canonical definitions, ontology, contracts, or formal semantics during closeout. Any theoretical correction or extension belongs in `90_Project/Version_2/` and must not silently enter the Version 1.0 corpus.

---

# A. Completed consolidation work

## A1. Scientific determination

- [x] Adopt the governing determination that CompInt is an interdisciplinary scientific synthesis and research program.
- [x] State that CompInt is not presently justified as an independent scientific discipline.
- [x] State that future disciplinary recognition depends on comparative empirical gain.
- [x] Separate current contributions from unproven claims.
- [x] Verify that this determination appears consistently in every canonical Version 1.0 document. *(Agent-reported repository audit.)*
- [x] Search for residual language implying established disciplinary autonomy. *(Agent-reported grep across active `/docs`; residual occurrences are framed as unproven or archived.)*

## A2. Repository architecture

- [x] Refactor the repository into a single navigable structure:
  - `01_Knowledge_System_of_Record/`
  - `02_Research_Papers/`
  - `03_External_Literature/`
  - `04_Reference/`
  - `05_Publication/`
  - `90_Project/`
- [x] Preserve previous releases under project history rather than mixing them with active content.
- [x] Preserve provenance and historical artifacts.
- [x] Generate a lossless release package.
- [x] Separate repository, release, and archive concerns.
- [x] Verify that every file from prior packages appears either canonically or in preserved history. *(Agent-reported; archived packages and lineage maps present.)*
- [x] Confirm that no historical derivative is presented as an active source of truth. *(Agent-reported.)*

## A3. Canonical system and integration artifacts

- [x] Establish the Knowledge System of Record as the sole conceptual authority.
- [x] Produce canonical ontology, glossary, vocabulary, definition index, dependency graph, knowledge graph, cross-reference matrix, and artifact index.
- [x] Separate research-paper provenance from canonical definitions.
- [x] Isolate candidate Version 2.0 changes from Version 1.0.
- [x] Confirm that the registry indexes the Knowledge System of Record rather than duplicating or redefining it. *(Agent-reported.)*
- [x] Confirm one definition per canonical concept across active files. *(Agent-reported synchronization between glossary and ontology.)*

## A4. Editorial and publication infrastructure

- [x] Complete an editorial-normalization pass over the available publication infrastructure.
- [x] Produce editorial style, terminology, consistency, cross-reference, and readiness reports.
- [x] Preserve normalized Markdown, DOCX, and PDF derivatives where available.
- [x] Produce publication templates, handbooks, figure catalog, author guide, maintenance guide, and publication reports.
- [R] Run the same editorial checks against the complete refactored repository, not only the earlier publication-infrastructure subset.

## A5. Bibliography

- [x] Consolidate bibliography records.
- [x] Produce canonical BibTeX and CSL JSON exports.
- [x] Produce APA, IEEE, Chicago, and MLA renderings.
- [x] Produce duplicate, missing-metadata, reference, and Crossref audit reports.
- [x] Preserve unresolved metadata rather than infer it.
- [x] Verify that the refactored repository points only to the latest bibliography release. *(Agent-reported path: `docs/04_Reference/Bibliography/Verified_v1.1.2/`.)*
- [!] Complete authoritative field-by-field verification for all references cited in the final publication manuscript.
- [!] Complete final retraction and correction checks for cited journal literature.

---

# B. Version 1.0 release closeout

## P0.1 Authority and governance

- [x] Create or verify `AUTHORITY.md` in the active repository. *(Agent-reported at `app/AUTHORITY.md`.)*
- [x] Define the controlling order:
  1. Canonical status determination.
  2. Canonical glossary and ontology.
  3. Normative contract specifications.
  4. Research handbooks and protocols.
  5. Foundational papers.
  6. Formal reference specifications.
  7. Reference implementations.
  8. Examples and visualizations.
  9. Generated derivatives.
  10. Historical archives.
- [x] State that code cannot silently redefine theory.
- [x] State that PDF and DOCX files are derivatives unless explicitly designated otherwise.
- [x] Document conflict resolution, supersession, deprecation, correction, and errata procedures.

## P0.2 Canonical document map and manifest

- [x] Create or verify `DOCUMENT_MAP.md`. *(Agent-reported at `app/DOCUMENT_MAP.md`, updated for reorganized paths.)*
- [x] Assign a stable document ID to every canonical artifact. *(Agent-reported.)*
- [R] Record purpose, authority level, status, version, dependencies, reviewer, and canonical path. *(Paths and IDs reported complete; remaining metadata fields require manifest inspection.)*
- [x] Mark every artifact as canonical, supporting, generated, historical, archived, or deprecated. *(Agent-reported through active structure and lineage maps.)*
- [x] Create one machine-readable release manifest with checksums. *(Agent-reported `FILE_MANIFEST.csv` and `SHA256SUMS.txt`.)*
- [x] Record source-to-derivative relationships. *(Agent-reported through `MIGRATION_MAP.md` and manifest lineage.)*
- [x] Confirm that every previous release artifact is traceable. *(Agent-reported.)*

## P0.3 Canonical concept registry

- [x] Confirm stable machine identifiers for every canonical concept. *(Agent-reported: 54 concepts with lowercase, hyphenated IDs.)*
- [R] Require for each concept:
  - stable ID;
  - current label;
  - canonical definition;
  - status and maturity;
  - dependencies;
  - source paper;
  - operationalization status;
  - validation status;
  - superseded definitions;
  - forbidden synonyms;
  - version introduced;
  - version deprecated.
- [x] Resolve any blank canonical identifier cells. *(Agent-reported.)*
- [x] Confirm that legacy definitions exist only in provenance or supersession records. *(Agent-reported active/archived separation.)*
- [V2] Add empirical validity and failed-validation fields as evidence accumulates.

## P0.4 Terminology consistency

- [x] Verify formal name: **Computational Interaction Science**. *(Agent-reported.)*
- [x] Verify short and adjectival form: **CompInt**. *(Agent-reported.)*
- [x] Retain `cis_` as a documented legacy C namespace for compatibility. *(Agent-reported decision.)*
- [x] Verify **Interaction Participant** as the broad canonical category where intended. *(Agent-reported.)*
- [x] Verify that **Agent** is used only where action-selection organization is required. *(Agent-reported.)*
- [R] Search active files for legacy semantic-state language, trace/behavior conflation, record/evidence conflation, visible/perceived opportunity conflation, and outcome/understanding equivalence.
- [R] Confirm consistent symbols across papers, contracts, diagrams, and schemas.

## P0.5 Contract inventory and conformance

- [R] Confirm the Version 1.0 normative contract inventory:
  - Projection Contract;
  - Opportunity Contract;
  - Interaction Contract;
  - Behavioral Evidence Contract;
  - Measurement Contract;
  - Similarity Contract;
  - Transfer Contract;
  - Strategy Contract;
  - Prediction Contract;
  - Comparison Contract.
- [R] Give every contract a stable ID, version, owner, status, schema, example, validation tests, and compatibility rules.
- [R] Define which contracts are required for each claim type.
- [R] Create or verify `CONFORMANCE.md`.
- [R] Define minimum, comparative, latent-inference, causal, and full-foundational reporting profiles.
- [x] Validate all normative schemas and examples. *(Agent-reported `make test`: 31 schemas and examples pass.)*
- [V2] Test whether contract fields provide measurable explanatory or predictive gain.

## P0.6 Dataset and evidence architecture

- [R] Confirm modular schemas for participants, environments, contracts, raw records, coded events, traces, measures, uncertainty, similarity, transfer, strategy, prediction, and comparison.
- [R] Distinguish raw records, detected events, attributed behavioral events, traces, and latent inferences.
- [R] Include schema version, provenance, missingness, uncertainty, interpretation limits, and evidence lineage.
- [R] Include valid and invalid examples.
- [R] Confirm append-only provenance rules for corrections and deviations.
- [V2] Extend schemas for continuous time, hybrid dynamics, partial order, and distributed interaction.

## P0.7 Publication editing

- [R] Apply the publication style guide to the complete active corpus.
- [R] Normalize American English, Oxford commas, capitalization, hyphenation, quotation style, acronym handling, defined terms, headings, and typography.
- [R] Verify front matter, back matter, table of contents, lists of figures, tables, contracts, and appendices.
- [R] Verify figure placement, caption style, equation numbering, glossary formatting, index formatting, page breaks, running heads, and running feet.
- [R] Perform a final proof pass after typesetting.
- [!] Complete tagged-PDF accessibility review and remediation.
- [!] Confirm print-quality figure resolution and final export settings.

## P0.8 Bibliographic release gate

- [x] Freeze citation keys for Version 1.0. *(Agent-reported.)*
- [R] Confirm zero known malformed canonical records.
- [x] Confirm duplicate merges and edition distinctions. *(Agent-reported: 45 duplicates merged; 267 canonical records.)*
- [R] Link every correction to an authoritative source.
- [R] Keep unresolved fields blank with explicit reasons.
- [!] Verify cited records against Crossref, publisher records, library catalogs, ORCID, ISBN/ISSN authorities, proceedings, and standards bodies.
- [!] Confirm retraction and correction status for cited works.
- [R] Generate a final post-verification bibliography audit.

## P0.9 Release packaging

- [x] Verify repository checksums and ZIP integrity. *(Agent-reported checksums and preserved release archives; ZIP integrity previously passed.)*
- [R] Verify that generated derivatives match their canonical sources.
- [R] Generate final release notes and known limitations.
- [R] Produce one publication package and one preservation archive.
- [x] Remove obsolete release candidates from the active working tree while retaining them in history. *(Agent-reported under `docs/90_Project/Previous_Releases/`.)*
- [D] Assign final Version 1.0 publication date.
- [!] Obtain ISBN or DOI only if a publisher or repository requires them.

## P0.10 Independent review

- [ ] Obtain at least one independent technical review.
- [ ] Obtain at least one research-methods review.
- [ ] Obtain at least one ethics or community review.
- [ ] Record reviewer comments, responses, accepted changes, rejected changes, and dissent.
- [ ] Confirm that no review response changes Version 1.0 theory without explicit Version 2.0 governance.

---

# C. Version 1.0 publication gate

Version 1.0 may be released when all of the following are true:

- [x] The interdisciplinary-synthesis determination is consistent across the active corpus. *(Agent-reported.)*
- [x] One Knowledge System of Record governs definitions and ontology. *(Agent-reported.)*
- [x] Every canonical concept has a stable ID and one active definition. *(Agent-reported: 54 concepts.)*
- [ ] Every normative contract has a versioned specification and schema.
- [ ] Repository authority, supersession, and versioning rules are explicit.
- [x] The document map and machine-readable release manifest are complete. *(Agent-reported; metadata completeness still requires direct inspection.)*
- [ ] The evidence lineage from record to claim is explicit.
- [x] All normative schemas validate. *(Agent-reported `make test`.)*
- [x] All included examples validate or pass their documented checks. *(Agent-reported `make test`.)*
- [ ] The complete corpus has passed editorial and publication review.
- [ ] The bibliography cited by the publication has completed authoritative verification.
- [ ] Generated derivatives match canonical sources.
- [ ] Known limitations and empirical non-claims are explicit.
- [ ] Independent technical, methods, and ethics/community reviews are recorded.
- [ ] No active document claims empirical or disciplinary validation beyond the evidence.

---

# D. Version 2.0 empirical validation program

## P0.11 Cross-paper consistency before formal extension

- [ ] Verify one definition per term across all papers.
- [ ] Verify consistent equations and symbols.
- [ ] Verify compatible contract fields and uncertainty models.
- [ ] Verify participant and agent scopes.
- [ ] Verify interaction boundaries against trace segmentation.
- [ ] Verify that similarity dimensions map to measured variables.
- [ ] Verify that strategy evidence is representable through the Behavioral Evidence Contract.
- [ ] Verify ontology coverage of every construct used in active papers.

## P0.12 Boundary, identity, and participation

- [ ] Develop and test distinctions among:
  - interaction attempt;
  - coupling event;
  - interaction episode;
  - recurrent interaction;
  - interaction system.
- [ ] Define boundary-validity criteria rather than relying only on disclosure.
- [ ] Test pause/resume, retry, multi-device continuation, nested episodes, asynchronous closure, and background participation.
- [ ] Define a strict participant admission test.
- [ ] Distinguish participant, mediator, resource, condition, and environment.
- [ ] Evaluate one-shot and unilateral cases without forcing circular boundary expansion.

## P0.13 Construct validation and contract ablation

- [ ] Validate:
  - opportunity profile;
  - believed action set;
  - interpretive state;
  - interaction strategy;
  - interactional equivalence;
  - behavioral evidence quality.
- [ ] Measure inter-rater reliability.
- [ ] Measure test-retest reliability.
- [ ] Test convergent and discriminant validity.
- [ ] Test sensitivity to manipulation.
- [ ] Test calibration and inference failure conditions.
- [ ] Test stability across populations, tasks, and contexts.
- [ ] Ablate contract fields and measure explanatory, predictive, and intervention loss.
- [ ] Compare full contracts against simpler baseline models.

## P0.14 Causal architecture

- [ ] Distinguish definitional counterfactual dependence, mechanistic dependence, statistical association, and intervention-supported causation.
- [ ] Specify causal graphs, confounders, mediators, moderators, interventions, estimands, and identification assumptions.
- [ ] Model carryover, learning, interference, and nonstationarity.
- [ ] Establish when projection effects may be attributed through opportunity, interpretation, or strategy.
- [ ] Require causal claims to identify design and assumptions explicitly.

## P1.15 Continuous, embodied, concurrent, and distributed interaction

- [ ] Evaluate hybrid-system, dynamical, stochastic, process, event-structure, and Petri-net formalisms.
- [ ] Support continuous time and weak segmentation.
- [ ] Support parallel and partially ordered activity.
- [ ] Support partial observability and participant-local state.
- [ ] Support embodied trajectories and sensorimotor coordination.
- [ ] Support institutionally distributed authority and delayed consequences.
- [ ] Avoid forcing all phenomena into discrete event logs.

## P1.16 Strategy and transfer identity

- [ ] Define strategy identity independently of successful transfer.
- [ ] Preregister strategy invariants before observing target outcomes.
- [ ] Distinguish parameter adjustment, tactic substitution, adaptation, and strategy replacement.
- [ ] Define transfer carriers without circular reliance on transfer success.
- [ ] Test competing strategy and transfer models.

## P1.17 Culture and institutional mediation

- [ ] Develop a positive account of convention, role, norm, authority, sanction, practice, negotiated meaning, and division of labor.
- [ ] Incorporate activity theory, ethnomethodology, conversation analysis, practice theory, anthropology, and organizational studies.
- [ ] Preserve non-essentialism and prohibit demographic inference without independent justification.
- [ ] Treat institutions and culture as possible mechanisms, not merely confounders.

## P1.18 Adversarial benchmark independent of Fundamental

- [ ] Build cases involving improvised social interaction, contested meaning, changing ontology, distributed authority, continuous coordination, ambiguous boundaries, asynchronous closure, unstable semantic state, and non-deterministic interpretation.
- [ ] Compare Fundamental against CompInt rather than allowing Fundamental to define the evaluation space.
- [ ] Record where Fundamental cannot represent relevant phenomena.

## P1.19 Comparative scientific gain

- [ ] Compare:
  1. transition-system baselines;
  2. integrated HCI/cognitive-science accounts;
  3. process-mining or workflow accounts;
  4. full CompInt;
  5. ablated CompInt variants.
- [ ] Measure reliability, construct recoverability, explanatory fit, held-out prediction, intervention prediction, transfer prediction, annotation cost, reporting burden, model complexity, error detection, and practical utility.
- [ ] Define success criteria before evaluation.
- [ ] Treat failure to outperform integrated alternatives as a valid scientific result.

## P1.20 First decisive empirical study

- [ ] Study: holding target semantics and feasible operations constant, test how projection exposure and signaling affect discovery, believed availability, action selection, error, and recovery.
- [ ] Freeze all required contracts before data collection.
- [ ] Define direct and latent outcomes separately.
- [ ] Preregister hypotheses, exclusions, stopping rules, missing-data treatment, and analysis.
- [ ] Compare baseline state-and-trace models against typed CompInt variables.
- [ ] Test incremental explanatory and out-of-sample predictive gain.
- [ ] Publish protocols, schemas, analysis code, data where permitted, deviations, failed analyses, and alternative models.

---

# E. Long-term research and adoption

## P2.21 Benchmark program

- [ ] Establish versioned benchmarks across GUI, CLI, API, conversational, multimodal, accessible, collaborative, safety-critical, institutional, robotic, embodied, and continuous interaction.
- [ ] Maintain raw records, frozen contracts, governance, and leakage controls.

## P2.22 Reliability and replication

- [ ] Test boundary coding, coupling identification, event attribution, opportunity coding, strategy inference, and comparison-gate reliability.
- [ ] Conduct direct, conceptual, multi-site, transport, and robustness replications.
- [ ] Track cross-laboratory reproducibility.

## P2.23 Prediction and intervention validation

- [ ] Test discovery, invalid-attempt, error, recovery, transfer, and strategy prediction.
- [ ] Test calibration, abstention, cross-projection transport, and intervention gain.
- [ ] Compare against strong integrated baselines.

## P3.24 Disciplinary-threshold review

- [ ] Revisit disciplinary status only after evidence of replicated mechanisms, stable validity domains, predictive or intervention gain, unique explanatory necessity, shared benchmarks, independent adoption, and a sustained research community.
- [ ] Do not revisit the determination based on conceptual completeness alone.

---

# F. Immediate execution order

## Release closeout

1. [x] Audit the lossless refactor against all previous packages and close any preservation gaps. *(Agent-reported.)*
2. [~] Finalize `AUTHORITY.md`, `DOCUMENT_MAP.md`, the concept registry, and the release manifest. *(Core artifacts reported complete; direct metadata inspection remains.)*
3. [~] Run terminology, definition, symbol, contract, and schema consistency checks over the active corpus. *(Terminology, definitions, schemas, and examples reported complete; symbol and contract-field consistency remain.)*
4. [ ] Apply the publication style guide to the complete repository.
5. [ ] Complete authority verification for references actually cited in the publication.
6. [~] Validate schemas, examples, derivatives, checksums, and ZIP integrity. *(Schemas, examples, checksums, tests, and ZIP integrity reported complete; source-to-derivative equivalence remains.)*
7. [ ] Obtain independent technical, methods, and ethics/community reviews.
8. [ ] Publish the Version 1.0 release and preservation archive.

## Version 2.0 launch

1. [ ] Complete the cross-paper consistency review.
2. [ ] Specify boundary, identity, and participant validation studies.
3. [ ] Design the contract-ablation and construct-validation program.
4. [ ] Specify the causal architecture.
5. [ ] Build adversarial and comparative benchmarks.
6. [ ] Preregister the first decisive empirical study.

---

# Current overall status

**Version 1.0 conceptual corpus:** substantially complete.  
**Repository consolidation:** complete; preservation and lineage audit reported complete.  
**Canonical integration:** glossary, ontology, identifiers, terminology, and status determination reported consistent; direct artifact-level review remains for symbols, contract metadata, and manifest completeness.  
**Publication infrastructure:** substantially complete, pending corpus-wide application and final proofing.  
**Bibliography:** normalized and audited; authoritative verification remains incomplete for the final cited set.  
**Empirical validation:** not complete; belongs to Version 2.0.  
**Independent scientific status:** not established and must not be claimed in Version 1.0.
