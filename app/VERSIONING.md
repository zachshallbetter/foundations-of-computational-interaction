# Versioning Policy

the proposed model versions theory, specifications, software, publication infrastructure,
and examples independently. A shared number never implies cross-layer
conformance.

| Layer | Current version | Stability | Compatibility rule |
|---|---:|---|---|
| the proposed model theory | 1.0.0 | frozen determination; ontology labels pending identifier ratification | Patch clarifies without changing commitments; minor adds backward-compatible theory; major changes commitments. |
| Contract schemas | 0.2.0 | draft normative candidates | Any incompatible field, meaning, or validation change increments minor until 1.0.0. |
| Dataset schema | 0.3.0 | exploratory, not piloted | Breaking record or reference changes increment minor until 1.0.0. |
| C reference substrate | 0.1.0 | experimental API | No compatibility guarantee before 1.0.0; every breaking change is recorded. |
| Publication infrastructure | 0.1.0 | internal-use package | Derivatives must identify their source release; metadata verification is independent. |
| Examples | stable `CIS-EX-NNN` identity plus independent revision | identity stable; behavior contract explicit | Semantic replacement gets a new ID; corrections retain ID and update validation. |

## Non-coupling rules

- A theory patch does not automatically require a software release.
- A schema release does not imply empirical validation.
- Passing C tests establishes reference-kernel conformance only.
- Updating bibliography metadata does not change theory.
- Generated PDF, DOCX, PNG, and HTML derivatives inherit their source version
  and never control it.
- Compatibility across layers must be declared in a conformance record; it is
  never inferred from equal version numbers.
