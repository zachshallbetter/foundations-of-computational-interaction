# CIS-EX-008 Draft Contract Package

These ten instances operationalize the proposed projection-signaling study. They
are identified components of CIS-EX-008, not independent examples.

| Claim boundary | Instance |
|---|---|
| signaled condition | `projection-signaled.json` |
| exposed but unsignaled condition | `projection-unsignaled.json` |
| independent opportunity predicates | `opportunity.json` |
| reciprocal episode boundary | `interaction.json` |
| record, coding, attribution, and claim lineage | `behavioral-evidence.json` |
| unprompted discovery | `measurement-discovery.json` |
| rejected unavailable attempts | `measurement-invalid-attempt.json` |
| recovery duration | `measurement-recovery.json` |
| explicit completion | `measurement-completion.json` |
| participant-reported believed availability | `measurement-belief.json` |

Every instance is draft 0.2.0, aligned to theory 1.0.0, uses the CIS-EX-008
identity prefix, retains unratified concept identifiers as null, and prohibits
interpretations stronger than its evidence. `tests/test_schemas.c` parses every
file without external libraries and verifies the common and contract-specific
required-field inventory.

This is structural validation only. Full JSON Schema evaluation, cross-reference
resolution, instrument review, semantic compatibility, canonical-ID
ratification, governance approval, and preregistration remain required before a
contract may be frozen or used for participant collection.
