# Deliverable 04: Concept Audit

**Program:** Computational Interaction Science (CompInt)  
**Date:** 2026-07-17  
**Status:** Canonical Reference Model  

This document conducts a rigorous audit of the 15 candidate concepts proposed for Computational Interaction Science. It tests each concept against established literature to ensure that no terms are kept purely for branding, and assigns each a status (Keep, Rename, Merge, or Reject).

---

## 1. Interaction Ecology
*   **Existing Equivalent:** Media Ecology (postman1970), Information Ecology (nardi1999), or Socio-technical Systems (trist1981).
*   **Defined Problem:** How a history of exposure to varying software systems, tools, and environments shapes a user's expectations when encountering an unfamiliar system.
*   **Need for Concept:** High. Current HCI models treat users as blank slates or segregate them by demographic groups. We need a concept to capture the accumulated exposure profile.
*   **Novelty Assessment:** Medium. The term "ecology" is metaphorical; however, formalizing the ecological history as a vector of software habitats is novel.
*   **Mechanism:** Accumulation of expectations (action schemas, visual cues, feedback protocols) from prior software habitats.
*   **Formal Boundary:** Bounded by the participant's historical interface exposure; excludes biological heredity or general personality traits.
*   **Operationalization:** A vector of software applications used, hours of exposure, and frequency of specific interface paradigms (e.g., swiping, command lines).
*   **Falsifiable Prediction:** Behavioral similarity on a new task is better predicted by similarity in exposure history profiles than by demographic characteristics (age, gender, region).
*   **Ethics Risk:** Profiling exposure histories could be used to exclude under-exposed populations from using advanced interfaces.
*   **Recommendation:** **Rename** to **Interaction History profile** (to strip the ecological metaphor and emphasize the empirical, recordable exposure vector).

---

## 2. Interaction Habitat
*   **Existing Equivalent:** Software Environment, Platform, or Tech Stack.
*   **Defined Problem:** Bounding the set of systems, modalities, and visual conventions a participant regularly interacts with.
*   **Need for Concept:** Low. "Environment" and "Platform" are well-understood.
*   **Novelty Assessment:** Low. Purely metaphorical renaming.
*   **Mechanism:** N/A.
*   **Formal Boundary:** N/A.
*   **Operationalization:** N/A.
*   **Falsifiable Prediction:** N/A.
*   **Ethics Risk:** N/A.
*   **Recommendation:** **Reject** (use existing terms: "computational environment" or "software platform").

---

## 3. Interaction Lineage
*   **Existing Equivalent:** Design History, Version Lineage, or Software Evolution.
*   **Defined Problem:** Tracking how visual, semantic, and structural design conventions evolve across successive versions of a system.
*   **Need for Concept:** Low. Design history and software configuration management are mature.
*   **Novelty Assessment:** None.
*   **Mechanism:** N/A.
*   **Formal Boundary:** N/A.
*   **Operationalization:** N/A.
*   **Falsifiable Prediction:** N/A.
*   **Ethics Risk:** N/A.
*   **Recommendation:** **Reject** (use "design history" or "version history").

---

## 4. Interaction Distance
*   **Existing Equivalent:** Semantic Distance (hutchins1985), Cognitive Distance, or Edit Distance.
*   **Defined Problem:** Quantifying the difference in action-sequence structure, visual projection, or semantic mapping between two interaction episodes.
*   **Need for Concept:** High, but it overlaps with "Interaction Similarity."
*   **Novelty Assessment:** Low. Already well-described by Hutchins as semantic/articulatory distance in the "Seven Stages of Action."
*   **Mechanism:** Mapping distance between state transitions, opportunity profiles, and event traces.
*   **Formal Boundary:** Restricted to formal trace and state differences under a specified Similarity Contract.
*   **Operationalization:** Trace edit distance or projection field divergence.
*   **Falsifiable Prediction:** Learning transfer rates between system A and system B correlate negatively with their calculated interaction distance.
*   **Ethics Risk:** Numerical distances may obscure critical accessibility blocks.
*   **Recommendation:** **Merge** into **Interaction Similarity** (as one metric within the similarity contract, rather than a distinct concept).

---

## 5. Ecological Compatibility
*   **Existing Equivalent:** Cognitive Fit (vessey1991) or Task-Technology Fit (goodhue1995).
*   **Defined Problem:** Measuring how well a system's projection aligns with the prior expectations (habitats) of a participant.
*   **Need for Concept:** Low. Explored extensively as "expectation alignment" or "consistency."
*   **Novelty Assessment:** None.
*   **Mechanism:** N/A.
*   **Formal Boundary:** N/A.
*   **Operationalization:** N/A.
*   **Falsifiable Prediction:** N/A.
*   **Ethics Risk:** N/A.
*   **Recommendation:** **Reject** (use "expectation alignment" or "compatibility under prior exposure").

---

## 6. Interaction Morphology
*   **Existing Equivalent:** Visual Hierarchy, Layout Structure, or UI Topology.
*   **Defined Problem:** How the spatial, temporal, and sensory properties of a representation (geometry, density, rhythm) influence preconscious user attention and search.
*   **Need for Concept:** High. Traditional HCI analyzes either static visual layout (graphic design) or dynamic state transitions (functional code). We need a term for the structure of the representation surface.
*   **Novelty Assessment:** High. Integrates gestalt principles with state-space representations.
*   **Mechanism:** Saccade patterns and attention allocation driven by visual geometry prior to semantic processing.
*   **Formal Boundary:** Limited to the layout, shape, and grouping parameters of the projection; excludes the semantic meaning of the controls.
*   **Operationalization:** Density metrics, boundary indices, alignment measures, and color-salience distributions.
*   **Falsifiable Prediction:** Changing morphology parameters (e.g., alignment/symmetry) while holding semantic actions and labels constant changes initial search path orientation and task completion times.
*   **Ethics Risk:** Relying on visual morphology patterns can systematically disenfranchise users relying on screen readers or other non-visual modalities.
*   **Recommendation:** **Keep** (vital for distinguishing representation aesthetics from functional state transitions).

---

## 7. Interaction Grammar
*   **Existing Equivalent:** Command Language Grammar (moran1981), Action-Object Syntax.
*   **Defined Problem:** Defining the vocabulary and composition rules for semantic actions independent of visual rendering.
*   **Need for Concept:** High. Prevents coupling interaction research to specific screen layouts.
*   **Novelty Assessment:** Medium. Exists in formal grammar models but needs consolidation around modern web APIs.
*   **Mechanism:** Formal composition of transition operators (e.g., `select -> modify -> commit`).
*   **Formal Boundary:** Bounded by the action vocabulary of the domain; excludes low-level motor events (e.g., mouse coordinate moves).
*   **Operationalization:** A formal grammar specification (BNF) mapping semantic actions to state changes.
*   **Falsifiable Prediction:** User transfer is higher between systems that share an interaction grammar but have different layouts than between systems that share layout styles but have different grammars.
*   **Ethics Risk:** Complex grammars may create steep cognitive barriers.
*   **Recommendation:** **Keep** (standardizes the modality-independent action vocabulary).

---

## 8. Semantic Representation
*   **Existing Equivalent:** Conceptual Model (norman1983) or External Representation (zhang1994).
*   **Defined Problem:** How system states and semantic structures are mapped to a visual or accessible vehicle.
*   **Need for Concept:** High, but overlaps with the core concept of "Representation."
*   **Novelty Assessment:** Low. Well-documented in cognitive science.
*   **Mechanism:** Relational mapping between target states and representational signs.
*   **Formal Boundary:** Bounded by the mapping rules defined in the Projection Contract.
*   **Operationalization:** Mapping functions and invariant predicates.
*   **Falsifiable Prediction:** Mismatches in mapping rules predict systematic conceptual errors.
*   **Ethics Risk:** None.
*   **Recommendation:** **Merge** into the core concept of **Representation** (to avoid redundant layers).

---

## 9. Semantic Fidelity
*   **Existing Equivalent:** Representational Fidelity or Semantic Preserving Map.
*   **Defined Problem:** Measuring the extent to which a projection preserves the semantic relations and truth values of the target domain.
*   **Need for Concept:** High. Critical for evaluating abstract visualizations or summary views.
*   **Novelty Assessment:** Medium. Extends mathematical homomorphism to user interfaces.
*   **Mechanism:** Preserving logical relations under projection mappings.
*   **Formal Boundary:** Bounded by the semantic predicates in the source and target domains.
*   **Operationalization:** Percentage of logical relations preserved across the projection.
*   **Falsifiable Prediction:** Low semantic fidelity projections lead to higher decision errors on reasoning tasks.
*   **Ethics Risk:** High-fidelity claims may mask information hidden for political or institutional reasons.
*   **Recommendation:** **Keep** (renamed to **Semantic Preservation Index** to emphasize measurement).

---

## 10. Representational Loss
*   **Existing Equivalent:** Information Loss, Projection Omission, or Dimensionality Reduction.
*   **Defined Problem:** Quantifying what target states, relations, and operations are omitted or distorted by a projection.
*   **Need for Concept:** High. Essential for explaining why specific tasks become impossible on compact displays (e.g., mobile screens).
*   **Novelty Assessment:** Medium. Contextualizes information loss within the opportunity profile.
*   **Mechanism:** Gating or masking state variables and actions during projection.
*   **Formal Boundary:** Defined strictly by the omission fields in the Projection Contract.
*   **Operationalization:** Ratio of omitted state variables and actions to the total target state variables and actions.
*   **Falsifiable Prediction:** Tasks requiring omitted variables will show 100% failure rates on the target projection.
*   **Ethics Risk:** Arbitrary representational loss (e.g., hiding privacy controls) is a common dark pattern.
*   **Recommendation:** **Keep** (provides an explicit measure of interface constraints).

---

## 11. Behavioral Opportunities
*   **Existing Equivalent:** Affordance (gibson1979) or Action Availability.
*   **Defined Problem:** Bounding what is technically possible, permitted, and signaled to an actor at a specific time.
*   **Need for Concept:** High. "Affordance" is heavily overloaded.
*   **Novelty Assessment:** Medium. It integrates capability, permission, and enablement.
*   **Mechanism:** Logical evaluation of preconditions, role authorizations, and visual signifiers.
*   **Formal Boundary:** Defined strictly by the Opportunity Contract; excludes psychological desires.
*   **Operationalization:** The vector of opportunity dimensions in `cis.h`.
*   **Falsifiable Prediction:** Opportunity profiles outperform simple event logs in predicting next-action distributions.
*   **Ethics Risk:** Misrepresenting opportunities can manipulate users.
*   **Recommendation:** **Rename** to the core concept **Opportunity Profile** (already implemented in C).

---

## 12. Semantic Situation
*   **Existing Equivalent:** Context of Use, Problem State, or Situated Activity.
*   **Defined Problem:** The active configuration of domain state, active rules, and participant beliefs that gives meaning to an action.
*   **Need for Concept:** Low. Situated cognition already covers this.
*   **Novelty Assessment:** None.
*   **Mechanism:** N/A.
*   **Formal Boundary:** N/A.
*   **Operationalization:** N/A.
*   **Falsifiable Prediction:** N/A.
*   **Ethics Risk:** N/A.
*   **Recommendation:** **Reject** (use "situated context" or "system and participant state").

---

## 13. Interaction Strategy
*   **Existing Equivalent:** Cognitive Strategy, Control Policy, or Behavioral Program.
*   **Defined Problem:** Bounding the conditional organization of action selection, information request, and recovery across state transitions.
*   **Need for Concept:** High. Distinguishes raw click sequences from purposeful, adaptive organization.
*   **Novelty Assessment:** Medium. Integrates cybernetic feedback with cognitive search.
*   **Mechanism:** Policy mapping observed states to actions to optimize a set of criteria.
*   **Formal Boundary:** Inferred from multiple traces; not directly visible in a single action.
*   **Operationalization:** The Strategy Contract fields in `cis.h`.
*   **Falsifiable Prediction:** Modeling user actions as a Strategy Contract outperforms simple Markov chain models in out-of-sample trace prediction.
*   **Ethics Risk:** Classifying users by strategy can lead to discriminatory profiling.
*   **Recommendation:** **Keep** (essential for explaining adaptation and error recovery).

---

## 14. Adaptive Intervention
*   **Existing Equivalent:** Dynamic User Interface, Personalization, or Adaptive Control.
*   **Defined Problem:** Dynamically modifying projections or opportunities based on inferred participant strategies or performance.
*   **Need for Concept:** Low. "Adaptive UI" and "personalized systems" are well-understood.
*   **Novelty Assessment:** None.
*   **Mechanism:** N/A.
*   **Formal Boundary:** N/A.
*   **Operationalization:** N/A.
*   **Falsifiable Prediction:** N/A.
*   **Ethics Risk:** N/A.
*   **Recommendation:** **Reject** (use "adaptive projection adjustment" or "dynamic personalization").

---

## 15. Context Atlas
*   **Existing Equivalent:** User Profile, Context Metadata, or Schema Database.
*   **Defined Problem:** Storing and retrieving the context variables (age, language, devices, history) that moderate interaction.
*   **Need for Concept:** Low. This is a database implementation detail.
*   **Novelty Assessment:** None.
*   **Mechanism:** N/A.
*   **Formal Boundary:** N/A.
*   **Operationalization:** N/A.
*   **Falsifiable Prediction:** N/A.
*   **Ethics Risk:** N/A.
*   **Recommendation:** **Reject** (use "participant context profile" or "context variables database").

---

## Summary of Concept Audit Dispositions

| Candidate Concept | Disposition | Target Concept Name | Rationale |
|---|---|---|---|
| **Interaction Ecology** | Rename | **Interaction History Profile** | Strips ecological metaphor; focuses on empirical exposure vector. |
| **Interaction Habitat** | Reject | Computational Environment | Redundant with existing computer science terms. |
| **Interaction Lineage** | Reject | Design / Version History | Redundant with standard software engineering practices. |
| **Interaction Distance** | Merge | **Interaction Similarity** | Handled directly by the similarity contract metrics. |
| **Ecological Compatibility**| Reject | Expectation Alignment | Redundant with cognitive fit and consistency theories. |
| **Interaction Morphology** | Keep | **Interaction Morphology** | Bounds preconscious visual geometry of representations. |
| **Interaction Grammar** | Keep | **Interaction Grammar** | Modality-independent composition of semantic actions. |
| **Semantic Representation** | Merge | **Representation** | Avoids redundant architectural layers. |
| **Semantic Fidelity** | Keep (Rename) | **Semantic Preservation Index** | Focuses on measurable homomorphic relationships. |
| **Representational Loss** | Keep | **Representational Loss** | Quantifiable measurement of projection omissions. |
| **Behavioral Opportunities** | Rename | **Opportunity Profile** | Avoids terminological overlap; matches executable C struct. |
| **Semantic Situation** | Reject | Situated Context | Redundant with situated action and context models. |
| **Interaction Strategy** | Keep | **Interaction Strategy** | Explains conditional adaptation and error recovery. |
| **Adaptive Intervention** | Reject | Adaptive Control / UI | Redundant with established software terminology. |
| **Context Atlas** | Reject | Context Profile Database | Implementation detail; not a foundational scientific concept. |
