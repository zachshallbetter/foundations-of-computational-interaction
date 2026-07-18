# the proposed model Authority and Change Control

**Status:** canonical for repository conflict resolution  
**Version:** 1.0.0

## Controlling order

When artifacts disagree, the first applicable item controls:

1. final synthesis determination;
2. canonical glossary;
3. relational ontology;
4. versioned normative contract schemas;
5. research handbooks and frozen protocols;
6. foundational papers and ratified evidence;
7. formal reference and conformance specifications;
8. reference implementation and tests;
9. identified examples and visualizations;
10. generated derivatives;
11. historical and archived documents.

Code does not silently redefine theory. Bibliography records do not define
canonical concepts. Generated PDF, DOCX, PNG, SVG, and standalone HTML files are
derivatives, not sources of truth.

## Conflict resolution

Record the conflict, preserve both claims, and apply the higher-authority
artifact until its owner approves a normative change. A lower layer may expose
an inconsistency but cannot resolve it by changing meaning. Empirical evidence
may trigger review; it does not silently rewrite a frozen definition.

## Supersession and deprecation

A superseding artifact must identify its predecessor, effective version,
compatibility impact, migration rule, and retained provenance. Deprecated terms
remain as aliases only when required to interpret prior records. Archived
documents carry a visible non-authoritative status and are never cited as
current definitions.

## Corrections and errata

Editorial corrections retain version when they restore the documented meaning.
Meaning changes follow `VERSIONING.md`, update every dependent source artifact,
regenerate derivatives, and add a release note. Published artifacts are
immutable: corrections create a new version and an append-only erratum or
retraction record.
