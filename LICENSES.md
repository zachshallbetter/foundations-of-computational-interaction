# Licensing — content-boundary manifest

**Status: provisional.** This split-licensing structure is the recommended default and is **not final**
until confirmed against publication and commercialization plans. The full canonical license texts
(`Apache-2.0`, `CC BY 4.0`) are to be included in `LICENSE-CODE` / `LICENSE-CONTENT` at finalization;
until then those files carry the SPDX identifier and the authoritative URL.

This manifest is authoritative for **which license governs which path/artifact class**. Where prose in a
README and this manifest disagree, this manifest wins.

## Path / artifact-class map

| Path or artifact class | License | Notes |
|---|---|---|
| `app/**` (C source, headers, build, benchmarks, tests) | **Apache-2.0** | Code + patent grant |
| `**/*.schema.json` (contract & dataset schemas) | **Apache-2.0** | Executable/enforceable artifacts |
| Tooling / scripts (any executable) | **Apache-2.0** | |
| `docs/**` prose (`*.md`) authored by the project | **CC BY 4.0** | Research corpus & documentation |
| Project-owned figures (`docs/**/Figures/**` authored here) | **CC BY 4.0** | Owned diagrams only |
| Bibliographic records / citation metadata (`docs/04_Reference/**`) | mixed / third-party | Metadata about third-party works; not project-licensed. Cite original sources |
| Third-party external literature (`docs/03_External_Literature/**`) | **excluded** | Retained under original terms; not relicensed here |
| Bundled historical releases (`_archive/**`, `docs/90_Project/Previous_Releases/**`) | inherit-original | Archived byte-for-byte; governed by the terms in effect at their release |
| Generated artifacts (`*.pdf`, `*.docx` derived from `*.md`) | inherit-source | Same license as the Markdown source they render |

## Rules
- A path not listed here is **unlicensed pending classification** — do not assume permission.
- Third-party and excluded material must not be treated as project-licensed even when co-located.
- Datasets, figures, and nested archives may each differ from the surrounding directory — check this map, not the folder.
