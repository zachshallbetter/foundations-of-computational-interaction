# Versioning Policy

FCI versions theory, specifications, software, publication infrastructure,
and examples independently. A shared number never implies cross-layer
conformance.

| Layer | Current version | Stability | Compatibility rule |
|---|---:|---|---|
| FCI theory | 0.5.0 | early; pre-ratification, ontology labels pending identifier ratification | Patch clarifies without changing commitments; minor adds backward-compatible theory; major changes commitments. |
| Contract schemas | 0.2.0 | draft normative candidates | Any incompatible field, meaning, or validation change increments minor until 1.0.0. |
| Dataset schema | 0.3.0 | exploratory, not piloted | Breaking record or reference changes increment minor until 1.0.0. |
| C reference substrate | 0.1.0 | experimental API | No compatibility guarantee before 1.0.0; every breaking change is recorded. |
| Publication infrastructure | 0.1.0 | internal-use package | Derivatives must identify their source release; metadata verification is independent. |
| Examples | stable `CIS-EX-NNN` identity plus independent revision | identity stable; behavior contract explicit | Semantic replacement gets a new ID; corrections retain ID and update validation. |

## On the 0.5.0 label

The theory layer carried **1.0.0**, then briefly **0.9.0**. Neither was ever tagged or published.

`1.0.0` claimed a ratification that has not occurred — ontology labels remain pending identifier
ratification, and the program's own stance is that its scientific necessity and empirical advantage
remain to be demonstrated. `0.9.0` still implied *approaching release*, which overstates how settled
the theory is. **0.5.0** is the honest position: substantial work exists, and it is nowhere near a
stable commitment.

**No theory content changed by either correction.** These are relabellings, not revisions. Records
elsewhere citing "theory 1.0.0" — example alignment records, prior release notes, editorial reports —
refer to the same content under a former label and are deliberately left unedited: rewriting them would
misstate what was validated when.

## Non-coupling rules

- A theory patch does not automatically require a software release.
- A schema release does not imply empirical validation.
- Passing C tests establishes reference-kernel conformance only.
- Updating bibliography metadata does not change theory.
- Generated PDF, DOCX, PNG, and HTML derivatives inherit their source version
  and never control it.
- Compatibility across layers must be declared in a conformance record; it is
  never inferred from equal version numbers.
