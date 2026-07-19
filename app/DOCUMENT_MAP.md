# Canonical Document Map

**Map version:** 0.1.0  
**Review status:** internal consolidation; external reviewers unassigned

| Document ID | Artifact | Role | Version | Status | Depends on | Reviewer |
|---|---|---|---:|---|---|---|
| COMPINT-DET-001 | `README.md` supported determination | canonical determination | 1.0.0 | frozen | final synthesis | unassigned |
| COMPINT-AUTH-001 | `AUTHORITY.md` | canonical governance | 1.0.0 | frozen | determination | unassigned |
| COMPINT-GLOSS-001 | `../docs/01_Knowledge_System_of_Record/02_Glossary/Computational_Interaction_Science_Glossary_v0.4.md` | canonical vocabulary | 0.4 | provisional system of record | research corpus | unassigned |
| COMPINT-ONTO-001 | `../docs/01_Knowledge_System_of_Record/01_Ontology/Current/A_Relational_Ontology_of_Computational_Interaction_v0.3.md` | canonical relational ontology | 0.3 | provisional | glossary | unassigned |
| COMPINT-ONTO-ARCH-001 | `../docs/90_Project/Previous_Releases/Computational_Interaction_Science_Canonical_Corpus_v1.0.0.zip` | historical provenance | 0.1 | archived/superseded | none | not applicable |
| COMPINT-ENC-001 | `../docs/01_Knowledge_System_of_Record/03_Encyclopedia/Computational_Interaction_Science_Encyclopedia_Article_Draft_v0.3.md` | supporting public synthesis | 0.3 | draft | glossary; ontology | unassigned |
| COMPINT-LIMITS-001 | `../docs/02_Research_Papers/13_Formal_Models/The_Limits_of_Computational_Interaction_Models_v0.2.md` | supporting limits paper | 0.2 | draft | determination; ontology | unassigned |
| COMPINT-INVAR-001 | `../docs/02_Research_Papers/04_Representation_and_Projection/Scoped_Invariance_Under_Projection_v0.4.md` | supporting concept paper | 0.4 | draft | ontology; comparison contract | unassigned |
| COMPINT-FUND-001 | `../docs/01_Knowledge_System_of_Record/04_Framework/Fundamental_and_Computational_Interaction_Science_v0.4.md` | supporting implementation relationship | 0.4 | draft | ontology; conformance | unassigned |
| COMPINT-WIKI-001 | `../docs/01_Knowledge_System_of_Record/07_Reviews/Computational_Interaction_Science_Wikipedia_Readiness_Review_v0.2.md` | publication constraint | 0.2 | current review memo | encyclopedia article | unassigned |
| COMPINT-CONTRACT-* | `docs/04_Reference/Templates/*.schema.json` — per-type IDs, see [Contract ID Registry](../docs/01_Knowledge_System_of_Record/05_Specifications/Contracts/Contract_ID_Registry.md) | draft normative contract system; `COMPINT-CONTRACT-001` retained as deprecated family alias | 0.2.0 | candidate | glossary; ontology | unassigned |
| COMPINT-DATA-001 | `docs/04_Reference/Dataset_Schema/interaction_study.schema.json` | exploratory interchange schema | 0.3.0 | candidate | contracts | unassigned |
| COMPINT-CONFORM-001 | `CONFORMANCE.md` | normative conformance boundary | 1.0.0 | frozen | authority; contracts | unassigned |
| COMPINT-KERNEL-001 | `include/cis.h`; `src/cis.c` | deterministic reference subset | 0.1.0 | experimental | conformance | tests |
| COMPINT-EXAMPLES-001 | `examples/manifest.csv` | example registry | 1.0.0 theory alignment | active | kernel; contracts | tests |
| COMPINT-PUB-001 | `docs/` publication infrastructure | supporting release package | 0.1.0 | internal only | all source artifacts | unassigned |
| COMPINT-EXPLAIN-001 | `docs/EXPLAINING_COMPINT.md` | supporting conceptual introduction | 0.1.0 | active | determination; ontology; examples | unassigned |

No `/research` directory is present in this checkout, so a paper-by-paper
research index cannot be truthfully generated here. The figure catalog records
16 source-paper entries from the supplied corpus, but the cited source DOCX
paths are absent. Restoring and reviewing that corpus is a release blocker; the
map does not invent paper files or statuses.

Generated `.pdf`, `.docx`, `.png`, `.svg`, `.html`, `.zip`, and spreadsheet
artifacts are derivatives unless a row above explicitly designates otherwise.
Duplicate canonical documents have not been created; the archived ontology is
retained solely for provenance.
