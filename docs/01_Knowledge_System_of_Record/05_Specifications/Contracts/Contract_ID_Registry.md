# Contract ID Registry

**Status:** candidate · **Supersedes:** the single shared family identifier `COMPINT-CONTRACT-001`.

Each normative contract type now has a **unique, stable identifier**. The former shared identifier
`COMPINT-CONTRACT-001` is retained as a **deprecated family alias** that resolves to the whole set below,
so existing references and historical artifacts stay resolvable. New references **must** use a specific
per-type ID; ambiguous new use of the family alias is deprecated. Version lives in metadata, not in the
stable ID (see the canonical namespace plan, C1.6).

## Per-type identifiers

| Contract ID | Contract type | Schema (`docs/04_Reference/Templates/`) | Status |
|---|---|---|---|
| `COMPINT-CONTRACT-PROJECTION-001` | Projection | `Projection_Contract.schema.json` | candidate |
| `COMPINT-CONTRACT-OPPORTUNITY-001` | Opportunity | `Opportunity_Contract.schema.json` | candidate |
| `COMPINT-CONTRACT-INTERACTION-001` | Interaction | `Interaction_Contract.schema.json` | candidate |
| `COMPINT-CONTRACT-BEHAVIORAL-EVIDENCE-001` | Behavioral Evidence | `Behavioral_Evidence_Contract.schema.json` | candidate |
| `COMPINT-CONTRACT-MEASUREMENT-001` | Measurement | `Measurement_Contract.schema.json` | candidate |
| `COMPINT-CONTRACT-SIMILARITY-001` | Similarity | `Similarity_Contract.schema.json` | candidate |
| `COMPINT-CONTRACT-TRANSFER-001` | Transfer | `Transfer_Contract.schema.json` | candidate |
| `COMPINT-CONTRACT-STRATEGY-001` | Strategy | `Strategy_Contract.schema.json` | candidate |
| `COMPINT-CONTRACT-PREDICTION-001` | Prediction | `Prediction_Contract.schema.json` | candidate |
| `COMPINT-CONTRACT-COMPARISON-001` | Comparison | `Comparison_Contract.schema.json` | candidate |
| `COMPINT-CONTRACT-COMMON-001` | Common base (shared metadata/lifecycle; the `ContractEnvelope` precursor, C1.10) | `Contract_Common.schema.json` | candidate |

## Deprecated family alias (migration)

| Alias | Resolves to | Since | Planned removal |
|---|---|---|---|
| `COMPINT-CONTRACT-001` | all `COMPINT-CONTRACT-*-001` above | map v0.1.0 | on canonical namespace ratification (C1.6) |

Rules: the alias remains resolvable for provenance; it must not be used to introduce new ambiguous
references; a reference that could match more than one per-type ID is invalid and must name the type.
