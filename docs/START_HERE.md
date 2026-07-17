# Start Here

This repository has one working structure and one archive.

1. `01_Knowledge_System_of_Record` — canonical concepts, definitions, specifications, registry, indexes, and graphs.
2. `02_Research_Papers` — scholarly arguments and provenance.
3. `03_External_Literature` — supporting literature retained with the corpus.
4. `04_Reference` — bibliography, citation maps, handbooks, templates, schemas, and figures.
5. `05_Publication` — style guidance, editorial reports, publication reports, and bibliography audits.
6. `90_Project` — decisions, audits, Version 2 planning, manifests, and unchanged historical releases.

## Authority

The Knowledge System of Record is authoritative for definitions and contracts. Research papers provide argument and provenance. The canonical registry is an index inside the Knowledge System of Record, not a second source of truth. The verified bibliography under `04_Reference/Bibliography/Verified_v1.1.2` supersedes earlier bibliography exports for publication use.

## Lossless refactor

No source release package was deleted. Every input package is preserved byte-for-byte under `90_Project/Previous_Releases`. Active files were reorganized into a simpler working tree. Consult `90_Project/Manifests/FILE_MANIFEST.csv` and `MIGRATION_MAP.md` for traceability.
