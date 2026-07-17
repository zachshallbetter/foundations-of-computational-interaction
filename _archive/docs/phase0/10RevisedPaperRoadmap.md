# Deliverable 10: Revised Paper Roadmap

**Program:** Computational Interaction Science (CompInt)  
**Date:** 2026-07-17  
**Status:** Canonical Reference Model  

This document evaluates the proposed foundational papers for the Computational Interaction Science (CompInt) research program. It establishes a strict dependency order, defines their purposes, and makes merge, delete, or revision recommendations for each.

---

## 1. Disciplinary Constraint
**CRITICAL RULE:** No work on writing or compiling individual research papers (Papers 1 through 10+) may begin until this Phase 0 review is complete and the deliverables are consistent.

---

## 2. Revised Paper Directory and Recommendations

### Paper 1: Computational Interaction Foundations
*   **Dependency Order:** 1 (First Paper)
*   **Purpose:** Introduce CompInt as an interdisciplinary synthesis framework for disambiguating interaction confounds.
*   **One-Sentence Contribution:** Formulates the core relational layers (domain, state, projection, opportunity, strategy, trace) separating computational logic from human interpretation.
*   **Prior Terms Addressed:** "new science", "independent discipline" (both revised to "interdisciplinary synthesis").
*   **Reusable Artifact:** The core glossary and Relational Ontology.
*   **Evaluation Path:** Conceptual consistency review by adjacent fields (HCI, Cognitive Science).
*   **Recommendation:** **Keep** (acts as the program's manifesto).

### Paper 2: Representation, Invariance, and Projection
*   **Dependency Order:** 2 (Requires Paper 1)
*   **Purpose:** Formalize the mathematical and computational rules governing how projections preserve or omit domain state.
*   **One-Sentence Contribution:** Defines the formal conditions for scoped invariance under projection, proving that semantic equivalence does not imply opportunity equivalence.
*   **Prior Terms Addressed:** "semantic invariance" (revised to "scoped invariance").
*   **Reusable Artifact:** The Projection Contract schema.
*   **Evaluation Path:** Mathematical proof of bisimulation invariants on the reference substrate.
*   **Recommendation:** **Keep**.

### Paper 3: Opportunity, Affordance, and Action Availability
*   **Dependency Order:** 3 (Requires Paper 2)
*   **Purpose:** Generalize ecological affordance theory to accommodate state-dependent, permission-gated symbolic environments.
*   **One-Sentence Contribution:** Establishes the Opportunity Profile as a twelve-dimensional coordination vector representing technical, administrative, and perceived action availability.
*   **Prior Terms Addressed:** "design affordance", "behavioral opportunity" (merged into "Opportunity Profile").
*   **Reusable Artifact:** The Opportunity Contract schema.
*   **Evaluation Path:** Diagnostic experiment measuring reaction time under signaling/exposure mismatch conditions.
*   **Recommendation:** **Keep**.

### Paper 4: Behavioral Evidence and Trace Representation
*   **Dependency Order:** 4 (Requires Paper 3)
*   **Purpose:** Formulate the rules for turning raw event logs into validated empirical evidence.
*   **One-Sentence Contribution:** Constructs the Behavioral Evidence Contract, requiring explicit timestamp alignment, action attribution, and the systematic elimination of rival explanations before claiming intent.
*   **Prior Terms Addressed:** "behavioral trace" (distinguished from "formal trace").
*   **Reusable Artifact:** The Behavioral Evidence Contract schema.
*   **Evaluation Path:** Replication study testing trace replay integrity under simulated network latency.
*   **Recommendation:** **Keep**.

### Paper 5: Measurement of Computational Interaction
*   **Dependency Order:** 5 (Requires Paper 4)
*   **Purpose:** Establish metrics for interaction adaptation without treating numerical scores as psychological constructs.
*   **One-Sentence Contribution:** Formulates the Measurement Contract, standardizing metrics for recovery efficiency, opportunity mismatch, and completion.
*   **Prior Terms Addressed:** "usability metric" (revised to "instrumented measure").
*   **Reusable Artifact:** The Measurement Contract schema.
*   **Evaluation Path:** Construct validity testing (convergent and discriminant analysis) across desktop and mobile devices.
*   **Recommendation:** **Keep**.

### Paper 6: Interaction Similarity and Scoped Comparison
*   **Dependency Order:** 6 (Requires Paper 5)
*   **Purpose:** Define formal methods to compare two or more interaction episodes.
*   **One-Sentence Contribution:** Replaces global scalar similarity scores with a multi-dimensional Similarity Profile that preserves incomparability.
*   **Prior Terms Addressed:** "interaction distance" (merged into "Similarity").
*   **Reusable Artifact:** The Similarity Contract schema.
*   **Evaluation Path:** Trace edit-distance calculations comparing users executing equivalent tasks under different layout morphologies.
*   **Recommendation:** **Keep**.

### Paper 7: Interaction Strategies and Behavioral Adaptation
*   **Dependency Order:** 7 (Requires Paper 6)
*   **Purpose:** Model how users adapt their actions and manage resources when encountering interface changes.
*   **One-Sentence Contribution:** Formalizes the Strategy Contract, modeling strategy as a policy over contingencies (switching, recovery, and stopping) rather than a linear sequence of events.
*   **Prior Terms Addressed:** "action plan" (revised to "conditional strategy").
*   **Reusable Artifact:** The Strategy Contract schema.
*   **Evaluation Path:** Out-of-sample prediction testing comparing GOMS, Markov chains, and Strategy Contracts.
*   **Recommendation:** **Keep**.

### Paper 8: The Limits of Computational Interaction Models
*   **Dependency Order:** 8 (Requires Paper 7)
*   **Purpose:** Define what CompInt cannot explain and outline its epistemic boundaries.
*   **One-Sentence Contribution:** Proposes the Doctrine of Bounded Explanation, restricting interaction models from claiming authority over culture, demographics, or personality.
*   **Prior Terms Addressed:** "universal ontology" (rejected).
*   **Reusable Artifact:** None.
*   **Evaluation Path:** Adversarial review by sociologists and accessibility experts.
*   **Recommendation:** **Keep**.

### Paper 9: Comparative Interaction and Synthesis
*   **Dependency Order:** 9 (Requires Paper 8)
*   **Purpose:** Summarize the empirical results of the program and finalize the disciplinary synthesis.
*   **One-Sentence Contribution:** Proves the coordinated utility of the contract stack across pilot studies, resolving whether the program should remain an interdisciplinary synthesis or seek independent status.
*   **Prior Terms Addressed:** None.
*   **Reusable Artifact:** The complete validated release package (V1.0.0).
*   **Evaluation Path:** Peer review and dissemination.
*   **Recommendation:** **Keep**.

---

## 3. Merged and Deleted Papers

*   **Interaction Ecology (Paper):** **Merged** into Paper 7 (Interaction Strategies) as the "Interaction History Profile" component of user context.
*   **Interaction Morphology (Paper):** **Merged** into Paper 2 (Representation and Projection) as a layout parameter governing preconscious search.
*   **Interaction Grammar (Paper):** **Merged** into Paper 1 (Foundations) and Paper 3 (Opportunity) as the semantic action vocabulary.
*   **Context Atlas (Paper):** **Deleted** (determined to be a database implementation detail with zero explanatory value).
*   **Adaptive Intervention (Paper):** **Merged** into Paper 7 (Strategies) as the system's policy response.
