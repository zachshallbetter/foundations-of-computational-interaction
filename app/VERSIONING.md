# Versioning Policy

FCI versions theory, specifications, software, publication infrastructure,
and examples independently. A shared number never implies cross-layer
conformance.

| Layer | Current version | Stability | Compatibility rule |
|---|---:|---|---|
| FCI theory | 0.9.0 | pre-ratification; ontology labels pending identifier ratification | Patch clarifies without changing commitments; minor adds backward-compatible theory; major changes commitments. |
| Contract schemas | 0.2.0 | draft normative candidates | Any incompatible field, meaning, or validation change increments minor until 1.0.0. |
| Dataset schema | 0.3.0 | exploratory, not piloted | Breaking record or reference changes increment minor until 1.0.0. |
| C reference substrate | 0.1.0 | experimental API | No compatibility guarantee before 1.0.0; every breaking change is recorded. |
| Publication infrastructure | 0.1.0 | internal-use package | Derivatives must identify their source release; metadata verification is independent. |
| Examples | stable `CIS-EX-NNN` identity plus independent revision | identity stable; behavior contract explicit | Semantic replacement gets a new ID; corrections retain ID and update validation. |

## On the 0.9.0 label

The theory layer was previously labelled **1.0.0**. That number claimed a ratification that has not
occurred — the ontology labels are still pending identifier ratification, and the program's own stance
is that its scientific necessity and empirical advantage remain to be demonstrated. A 1.0 label asserts
stability the work has not earned, so the label was corrected downward to **0.9.0**.

**No theory content changed.** This is a relabelling, not a revision. Records elsewhere that cite
"theory 1.0.0" — example alignment records, prior release notes, editorial reports — refer to the same
content under its former label and are deliberately left unedited: rewriting them would misstate what
was validated when. Nothing was tagged or released at 1.0.0, so no published artifact contradicts this.

## Non-coupling rules

- A theory patch does not automatically require a software release.
- A schema release does not imply empirical validation.
- Passing C tests establishes reference-kernel conformance only.
- Updating bibliography metadata does not change theory.
- Generated PDF, DOCX, PNG, and HTML derivatives inherit their source version
  and never control it.
- Compatibility across layers must be declared in a conformance record; it is
  never inferred from equal version numbers.
