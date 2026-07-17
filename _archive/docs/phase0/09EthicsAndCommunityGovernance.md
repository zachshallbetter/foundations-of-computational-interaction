# Deliverable 09: Ethics and Community Governance

**Program:** Computational Interaction Science (CompInt)  
**Date:** 2026-07-17  
**Status:** Governance Protocol  

This document defines the ethics guidelines and governance frameworks for human participant research within Computational Interaction Science. It establishes strict rules for data collection, participant autonomy, indigenous data sovereignty, and model contestability.

---

## 1. Core Research Ethics Requirements

Every empirical study under the CompInt program must enforce six core protections:

1.  **Granular Consent:** Participants must provide active, informed, and separate consent for:
    *   Visual projection rendering and recording.
    *   Trace logging (keystrokes, navigation clicks).
    *   Post-session interviews or questionnaire responses.
    *   Aggregated, anonymized dataset publication.
2.  **Partial Disclosure and Debriefing:** If an experiment requires hiding the true system state (e.g., introducing a simulated network delay or hidden permission blocks to test error recovery), the participant must be fully debriefed immediately after the session. The debrief must explain the necessity of the deception and obtain re-consent for the resulting data.
3.  **Data Minimization:** Traces must record only the absolute minimum event data needed to calculate opportunity profiles and strategy contracts. We explicitly prohibit logging raw keystrokes in free-text fields (to prevent capturing passwords/PII) or recording ambient audio/video.
4.  **Instant Withdrawal:** The interface must feature a visible, persistent control allowing the participant to withdraw from the study at any point. Upon activation, all trace data from the current session must be immediately deleted from memory and disk.
5.  **Collective Harm Assessment:** Researchers must evaluate whether publishing interaction data could lead to collective harm (e.g., profiling a specific professional group as "highly error-prone," which could be used to justify wage cuts or algorithmic monitoring).
6.  **Benefit Sharing:** Research findings and tools developed (including reference implementations and visualization substrates) must be returned to the participant communities in accessible, open formats.

---

## 2. Indigenous Data Sovereignty

Computational Interaction Science rejected pan-indigenous generalizations. All research involving or collecting data from Indigenous communities must adhere to localized protocols.

### 2.1 The Sovereignty Boundary
*   **OCAP® Principles:** For research involving First Nations in Canada, the principles of Ownership, Control, Access, and Possession (OCAP) are absolute. The community owns the data, controls its storage, and possesses final veto power over publication.
*   **CARE Principles:** For general indigenous data, researchers must align with the CARE Principles for Indigenous Data Governance (Collective Benefit, Authority to Control, Responsibility, Ethics).
*   **No Pan-Indigenous Universality:** There is no "universal indigenous user profile" or "native interface model." Indigenous communities are highly heterogeneous. Research must identify the specific local nation (e.g., Oglala Lakota Nation, Navajo Nation) and obtain formal research approval through their respective tribal council or Institutional Review Board (IRB).

### 2.2 Community Governance Overrides
**A local nation's governance protocols override any general academic or institutional IRB approval.** If a tribal council requests the deletion of a dataset, the withholding of a publication, or the restriction of access to specific interaction histories, researchers must comply immediately without appeal.

---

## 3. Prohibited Interpretations and Inferences

To prevent behavioral data from being weaponized, we enforce four strict bans on inference:

*   **No Protected Identity Profiling:** Trace data (e.g., typing speed, error frequency, layout search patterns) must never be used to infer protected identity traits (race, gender, sexual orientation, disability status, or religious affiliation).
*   **No Psychological Diagnoses:** Interaction strategies and latencies must not be translated into mental health labels (e.g., claiming a user has "ADHD" or "cognitive decline" based on search patterns).
*   **No Productivity Gating:** Companies must not use CompInt opportunity mismatch metrics to rank employees, automate firings, or enforce behavioral pacing.
*   **Model Contestability:** If an algorithm makes an automated decision affecting a user (e.g., denying access because of an inferred strategy mismatch), the user must be provided with:
    1.  A clear, plain-language description of the opportunity profile that led to the block.
    2.  An immediate path to override the automated decision.
    3.  A process to challenge the validity of the underlying behavioral model.
