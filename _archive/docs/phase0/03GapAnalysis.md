# Deliverable 03: Gap Analysis

**Program:** Computational Interaction Science (CompInt)  
**Date:** 2026-07-17  
**Status:** Canonical Reference Model  

This document evaluates the proposed research program against a strict **Gap Standard**. It identifies where adjacent fields (such as HCI, Cognitive Psychology, and Software Engineering) leave an unexplained space that justifies the existence of CompInt as an interdisciplinary coordination framework.

---

## 1. The Gap Standard

To guard against semantic inflation (rebranding existing ideas with new terms), a genuine scientific gap must satisfy four criteria:
1.  **Important Phenomenon:** The target phenomenon must have material, measurable, and real-world consequences.
2.  **Insufficient Existing Explanation:** Existing models and disciplines must fail to fully explain, predict, or control the phenomenon.
3.  **Testable New Mechanism:** A concrete, operationalizable, and falsifiable mechanism must be proposed.
4.  **Research Utility:** Resolving the gap must yield measurable improvements in empirical reproducibility, predictive power, or engineering control.

---

## 2. Evaluation of Non-Gaps

The following common justifications for new interaction theories are explicitly rejected as **Non-Gaps**:
*   **Fragmented Vocabulary:** The fact that different fields use different terms (e.g., "affordance" in design vs. "capability" in security) is a translation issue, not a scientific gap.
*   **Different Branding:** Creating a new name (e.g., "UX Engineering") to repackage established usability evaluation practices is marketing, not science.
*   **Missing Product:** The lack of a specific software package or dashboard (e.g., "an AI-driven interface designer") is a product opportunity, not a theoretical gap.
*   **Team Unawareness of Theory:** A developer's lack of familiarity with ecological psychology or process algebra is an educational gap, not a scientific one.

---

## 3. The Genuine Gap: Multi-Representational Invariance and Opportunity Gating

CompInt targets a single, highly consequential phenomenon that lies at the intersection of—but is not fully explained by—adjacent fields.

### 3.1 The Phenomenon
When a computational system's underlying state is projected across different visual, auditory, or modality-based representations, human interaction behavior changes dramatically. A user who performs perfectly on a spatial-canvas interface may fail completely on a command-line interface, even though both represent the *exact same underlying logical system state and operations*.

### 3.2 Insufficient Existing Explanations
*   **HCI and Design Systems:** Focus on design guidelines and aesthetics (e.g., color contrast, padding, layout alignment). They can predict that a clean layout is "easier to use," but they lack the formal tools to mathematically verify whether two different interfaces are *interactionally equivalent* or if key invariants have been omitted.
*   **Cognitive Science and Psychology:** Model the human user's internal strategies (e.g., using ACT-R) but treat the computer as a static input-output device. They cannot easily model dynamic, state-dependent permission shifts and projection omissions occurring inside the software runtime.
*   **Software Engineering and Formal Methods:** Can verify that two systems are bisimilar (computational equivalence), but they do not model the human interpretation or the visual signifiers (signaling) that make operations accessible to a human observer.

### 3.3 The Testable New Mechanism: Governed Projections and Opportunity Profiles
CompInt proposes that interaction behavior is not a direct response to visual cues, but rather emerges from the alignment or misalignment of three structures:
1.  **Logical State and Semantics ($X, S$):** What is logically possible.
2.  **Projected Exposure and Signaling ($P$):** What is visually/conceptually exposed.
3.  **Agent Belief and Strategy ($U, \Sigma$):** What the user believes is available and how they organize their actions.

This relationship is operationalized via the **Opportunity Profile ($\Omega$)**. Opportunity is not a static property of the system or the user, but a typed relational profile (comprising capability, permission, enablement, exposure, signaling, and belief) evaluated at the moment of action. 

This mechanism leads to a highly falsifiable prediction:
> **Holding system semantics and task goals constant, changes in projection parameters ($P$) alter the opportunity profile ($\Omega$) in ways that systematically and predictably reorganize the observed behavioral strategies ($\Sigma$) and error rates of participants.**

### 3.4 Research Utility
By formalizing these relations in the contract stack (specifically the Projection, Opportunity, and Similarity Contracts) and implementing them in a deterministic reference kernel (Fundamental):
*   Researchers can mathematically calculate the **Representational Loss** when moving from a desktop screen to a mobile screen.
*   Telemetry systems can analyze click traces in context, separating "user mistakes" (mismatches in signaling/belief) from "system errors" (precondition failures).
*   Experiments testing transfer across interfaces can isolate whether learning generalizes via visual resemblance (morphology) or action structure (interaction grammar).

---

## 4. Gap Assessment Summary

| Dimension | Existing State | The CompInt Gap | Research Benefit |
|---|---|---|---|
| **Interface Equivalence** | Subjective visual review or GOMS execution-time estimation. | Mathematical verification of typed invariants across projections. | Formally proven portable UI designs that preserve task-critical constraints. |
| **Telemetry Attribution** | Raw event counts (clicks, scroll rates) without state context. | Opportunity-aware trace coding (linking actions to alternatives). | Distinguishing cognitive overload from poor signifiers and mechanical blocks. |
| **Affordance Modeling** | Physical Gibsonian affordances or vague "design affordance" labels. | State-dependent, role-based symbolic opportunity profile. | Clear, executable check of action feasibility at each step of an episode. |
| **Strategy Inference** | Assuming trace sequences are plans. | Strategy contracts verified against rival models. | Explaining adaptation and recovery behavior under error states. |
