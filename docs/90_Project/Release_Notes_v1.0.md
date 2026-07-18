# CompInt Version 1.0 Release Notes

**Consolidated Release Baseline**  
**Release Date:** July 17, 2026  
**Status:** Frozen Conceptual Synthesis & Release Candidate  

---

## 1. Component Version Matrix

"Version 1.0" designates the consolidated release baseline of the overall Foundations of Computational Interaction conceptual corpus and research paper collection. Individual software, schema, and database sub-components carry separate version lines reflecting their independent developmental maturity:

| Component | Version | Status | Description |
|---|---|---|---|
| **Conceptual Corpus** | 1.0.0 | Frozen | Definitional system of record: glossary, ontology, and governance contracts. |
| **C Reference Substrate** | 0.1.0 | Stable (Experimental) | Bounded, freestanding C11 reference implementation and tests. |
| **Contract Schemas** | 0.2.0 | Provisional Draft | 31 JSON Schemas defining the data exchange contracts. |
| **Bibliography** | 1.1.2 | Normalized & Audited | Deduplicated citation library with 267 canonical entries. |
| **Publication Infrastructure** | 1.0.0 | Stable | Production stylesheets and derivatives generation. |

---

## 2. Scientific Determination and Non-Claims

The proposed work is framed as an **epistemic infrastructure for the scientific study of computational interaction** (specifying representation, observation, and measurement conditions), rather than a direct explanatory or predictive theory. Downstream models (explanation and prediction) are consumers of this foundation. The following constraints and boundaries are explicitly declared for Version 1.0:

*   **No Empirical Validation:** No study in the current repository claims empirical validation (`E` conformance). All behavioral hypotheses and causal models remain unproven and are deferred to downstream scientific models.
*   **Software as Apparatus:** The C reference substrate compiles and passes its test suite with pedantic checks. However, it is an experimental apparatus designed to verify internal logical coherence, not an empirical validation of human cognitive behavior.
*   **Computational Limits:** The C Reference Substrate is strictly bounded in capacity (maximum 16 state variables, 16 actions, 16 participants, 128 trace records, 128 reachability states, and a 16-step lookahead horizon). It disclaims probability, concurrency, causal identification, and predictive inference.
*   **Bibliographic Limits:** The bibliography is audited and normalized, but not fully authority-verified. An automated Crossref API check verified that 11 of 13 unique DOIs are fully valid. Two records remain unresolved: the truncated Sen & Wasow DOI (`10.1146/annurev-polisci-032015-`) and the Cambridge University Press book DOI (`10.1017/9781316272503`) which maps to the book's ISBN and resolves directly but is not indexed as a standard Crossref journal work. In accordance with the non-inference protocol, these unverified fields are left blank or noted as unresolved.

---

## 3. Historical Release Preservation Records

Prior release packages are preserved byte-for-byte under `docs/90_Project/Previous_Releases/` to guarantee absolute provenance and traceability:

| ZIP Filename | Size (bytes) | SHA-256 Hash |
|---|---|---|
| `Computational-Interaction-Science-v1.0.0.zip` | 56,614,151 | `dfaaef4bc4f84de47dc940ef71c3e94f10df3f0041138cacc2118d5c9eb93461` |
| `Computational_Interaction_Science_Bibliography_Verification_v1.1.2.zip` | 472,992 | `fcd2d162c02e97a02303c09e08b6d659c7a7fda2b57382e16dd53b961405fcfe` |
| `Computational_Interaction_Science_Canonical_Corpus_v1.0.0.zip` | 1,310,016 | `b121f3f78f44a1589a3090e499b54d72d0385299c2f8ee29d1a33f14ebe22002` |
| `Computational_Interaction_Science_Consolidated_Release_v1.0_RC.zip` | 57,584,291 | `540ce28c8d4544b38126790d48046d3decbc4838ecb34b026c76bf84a5fd4e66` |
| `Computational_Interaction_Science_Editorial_Normalization_v1.1.1.zip` | 1,540,344 | `2118ea60ea562f5a14c3e9aea0cbe5a2cabd608df0106db35e54aa7cbfd6383a` |
| `Computational_Interaction_Science_Publication_Infrastructure_v1.0.0.zip` | 1,181,131 | `c6c49b1a234a1732b1caf089a9f783e9d8ce57ffcd2b4881ec7897e3e2f375eb` |
| `Computational_Interaction_Science_Reference_Artifacts.zip` | 1,359,476 | `a9db6d6a2416aa1999102162c5deced10a1f1783def0fad7add347552d42dfd1` |
