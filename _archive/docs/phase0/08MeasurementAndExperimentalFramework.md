# Deliverable 08: Measurement and Experimental Framework

**Program:** Computational Interaction Science (CompInt)  
**Date:** 2026-07-17  
**Status:** Methodological Protocol  

This document defines the experimental methodology, measurement standards, and validation protocols for Computational Interaction Science (CompInt). It structures a concrete experimental design to answer the program's initial evaluation question.

---

## 1. Initial Evaluation Question
**Question:** *Does implicit behavior tracked through meaningful interaction episodes predict a participant's performance on an unfamiliar interface better than an explicit questionnaire-based self-report?*

We compare:
*   **Independent Variable 1 (Implicit Behavior Elicitation):** Action selection patterns, opportunity mismatches, and recovery sequences recorded during a meaningful activity.
*   **Independent Variable 2 (Explicit Questionnaire Elicitation):** User-reported preferences, technology familiarity scales, and self-reported interface competence (e.g., System Usability Scale).
*   **Dependent Variable (Unfamiliar Interface Performance):** Task completion rate, error frequency, and strategy stabilization speed when introducing an unfamiliar interface projection representing the same logical domain.

### Meaningful Activity Constraint
To avoid the confounds of abstract puzzles (e.g., clicking random dots or solving tower-of-hanoi tasks, which lack intrinsic utility), the study uses a **Meal Decision/Dietary Preference task**. The participant uses the interface to select a dinner plan that matches their actual real-world dietary restrictions, budget, and taste preferences. Selecting a correct meal has intrinsic value; selecting an allergen violates a critical safety constraint.

---

## 2. Experimental Design Variables

*   **Unit of Analysis:** The Interaction Episode (bounded session starting at diet entry, ending at meal commit or abandonment).
*   **Semantic Task:** Selecting a recipe matching dietary restrictions (no peanuts, gluten-free), budget limits (under $15), and taste preferences (spicy).
*   **Representation:** A recipe catalog projected as either:
    *   *Projection A (Structured):* Grouped categories, explicit allergen tags, clear pricing.
    *   *Projection B (Unstructured/Conversational):* A chat assistant requiring text query and response, with hidden allergens and implicit pricing.
*   **Morphology:** Layout density, alignment, visual weights of price chips, and allergen icons.
*   **Interaction Grammar:** `select_filter -> inspect_details -> modify_selection -> commit_choice` (modal-independent syntax).
*   **Opportunity Profile:** Evaluated at each step for the `commit_choice` action (checking capability, permission, enablement, exposure, signaling, and participant belief).
*   **Action:** Click, tap, scroll, text input, filter select.
*   **Outcome:** Success (meal satisfies all dietary and budget rules), Failure (meal violates restrictions), or Abandonment.
*   **Context:** Mobile phone vs. Desktop computer; language (English vs. Spanish); local participant connection latency.
*   **Intervention:** Swapping the projection from structured tags (Projection A) to unstructured chat (Projection B) mid-session.
*   **Feature:** Time-to-first-click, recovery time from invalid inputs, filter usage frequency.
*   **Construct:** *Interaction Adaptation* (the speed and efficiency with which a participant recovers from opportunity mismatches and stabilizes their strategy).
*   **Prediction:** *Implicit behavioral traces (specifically opportunity mismatch frequency and recovery efficiency) on Projection A will predict task success rates when switched to the unfamiliar Projection B with significantly higher accuracy ($R^2$ increase $> 0.25$) than self-reported usability questionnaires.*

---

## 3. Validity Requirements and Verification

### 3.1 Construct Validity
We must prove that "Opportunity Mismatch" actually measures interface confusion rather than motor latency.
*   *Control:* Measure baseline motor speed (simple click test) and subtract it from search times.
*   *Convergent Validity:* Opportunity mismatch scores should correlate positively with objective eye-tracking gaze fixation counts on help files.
*   *Discriminant Validity:* Mismatch scores should not correlate with general intelligence (IQ) or personality traits (e.g., extroversion).

### 3.2 Content Validity
Ensure the Opportunity Contract covers all aspects of availability. The contract must represent capability, permission, enablement, exposure, signaling, and belief as distinct columns. Omitting any dimension (e.g., checking capability but ignoring permission) constitutes a content validity failure.

### 3.3 Criterion & Ecological Validity
*   *Criterion Validity:* The calculated interaction similarity score between two system traces must predict the actual time it takes a user to transfer their skills from the first system to the second.
*   *Ecological Validity:* The task must be performed on the user's personal device in their normal daily environment rather than on lab-controlled high-end hardware, ensuring results generalize to real-world software use.

### 3.4 Measurement Invariance
We must verify that the measurement instruments (the logging code and opportunity predicates) operate identically across different access channels:
*   **Across Devices:** Primitives must scale. Touch events on mobile and mouse clicks on desktop must map to the same semantic actions in the `Interaction Grammar`.
*   **Across Access Modes:** Users using screen readers (assistive accessibility projections) must produce the same trace structure as visual users.
*   **Across Languages:** Label localization changes must not alter the underlying signaling exposure in the Projection Contract.
