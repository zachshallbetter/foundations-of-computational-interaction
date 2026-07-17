# Deliverable 02: Systematic Literature Map

**Program:** Computational Interaction Science (CompInt)  
**Date:** 2026-07-17  
**Status:** Methodological Protocol  

This document defines the literature review methodology and maps the primary, peer-reviewed, and foundational sources that underpin the Computational Interaction Science (CompInt) synthesis. It details the search databases, query terms, quality assessment criteria, and treatment of contrary or failed theories.

---

## 1. Literature Search Methodology

To establish the concept-source mapping and verify that no duplicate branding was introduced, we conducted a systematic scoping review.

### 1.1 Databases and Resources
*   **Databases:** ACM Digital Library, IEEE Xplore, Google Scholar, PubMed, and arXiv.
*   **Search Dates:** Search iterations conducted periodically up to June 2026.
*   **Languages:** English-language publications only.
*   **Publication Years:** 1900–2026 (spanning early psychology to recent AI interaction papers).

### 1.2 Query Terms and Search Strings
Search queries targeted three categories: core interaction theories, representation/invariance models, and empirical measurement systems. Sample queries included:
*   `("human-computer interaction" OR "interaction science") AND ("formal models" OR "state transition")`
*   `("affordance" OR "action availability") AND ("symbolic" OR "state-dependent")`
*   `("distributed cognition" OR "situated action") AND ("formalization" OR "computational model")`
*   `("measurement invariance" OR "scale validity") AND ("telemetry" OR "user logs")`
*   `("cognitive architecture" OR "GOMS" OR "KLM") AND ("strategy inference")`

### 1.3 Screening and Inclusion/Exclusion Criteria
*   **Inclusion Criteria:**
    1.  Primary, peer-reviewed journal articles, conference papers, or foundational books.
    2.  Presents a formal, mathematical, or empirical model of interaction.
    3.  Addresses the relationship between representation, opportunity, and behavioral strategy.
    4.  Presents clear empirical methodology or mathematical proofs.
*   **Exclusion Criteria:**
    1.  Tertiary articles (e.g., industry blog posts, marketing slides) unless providing unique historical context.
    2.  Prescriptive design patterns that lack empirical validation or formal models.
    3.  Papers focusing solely on a specific hardware device without generalizing the interaction pattern.
    4.  White papers from unverified commercial platforms claiming unvalidated cognitive modeling.

### 1.4 Deduplication and Citation Chaining
*   **Deduplication:** Automatic reference deduplication performed using title normalization and DOI matching (recorded in `Duplicate_Reference_Report.csv`).
*   **Backward Citation Chaining:** Reviewing the reference list of identified foundational works (e.g., Gibson 1979, Card et al. 1983, Suchman 1987) to locate primary historical precursors.
*   **Forward Citation Chaining:** Tracking citations of key works through Google Scholar to identify recent replications, extensions, and empirical falsifications.

---

## 2. Quality Assessment and Evidence Categorization

Sources in the Master Bibliography are categorized by their role in the validation of CompInt:

1.  **Foundational Precedent:** Establishes the historical origin of a concept (e.g., Shannon 1948 for Information; Gibson 1979 for Affordance).
2.  **Empirical Support:** Provides direct experimental validation of a mechanism (e.g., Fitts 1954 for capability-bound movement limits).
3.  **Formal Support:** Supplies mathematical proofs, algebras, or schemas (e.g., Milner 1980 for CCS process algebra; Scott 1971 for denotational semantics).
4.  **Contrary/Objection Source:** Challenges or exposes boundaries of the theory (e.g., Yarkoni 2017 on the generalizability crisis; Suchman 1987 on the limits of plans).

---

## 3. Review of Contrary Findings and Failed Theories

CompInt explicitly integrates literature documenting replication issues and theoretical limits:

### 3.1 The Generalizability Crisis (Yarkoni 2017, Yarkoni 2021)
*   **Finding:** Most psychological and behavioral research overclaims by generalizing from highly specific laboratory tasks to broad, latent constructs (e.g., generalizing reaction time on a simple puzzle to "cognitive ability").
*   **CompInt Treatment:** CompInt enforces a strict "Measurement Contract" and "Behavioral Evidence Contract." A metric (e.g., click rate) is never treated as a latent construct (e.g., "interest" or "understanding") without an explicit, validated measurement model and a systematic exploration of alternative explanations.

### 3.2 The Failure of Deterministic Cognitive Modeling (Suchman 1987)
*   **Finding:** Human action is situated and emerges dynamically in response to local contingencies, rather than executing pre-planned hierarchical scripts.
*   **CompInt Treatment:** Rejects early GOMS/KLM models that assume humans execute rigid plans. The "Strategy Contract" models strategy as a policy over contingencies (handling uncertainty, recovery, and switching) rather than a fixed sequence of events.

### 3.3 The Affordance Inflation (Norman 1999)
*   **Finding:** The term "affordance" has been widely misused in UI design to refer to visual signifiers (e.g., a blue button "affords" clicking), drifting from Gibson's original definition of physical actor-environment relationships.
*   **CompInt Treatment:** Enforces a strict distinction in `05CanonicalOntology.md`. Gibsonian "Affordance" remains an external physical capability relation, while "Exposure" (projection-provided path) and "Signaling" (visual indicators) are handled separately under the "Opportunity Contract" to prevent terminological dilution.

---

## 4. Key Literature Mapping for Core Concepts

| Concept | Primary Source(s) | Category | Evidence / Role |
|---|---|---|---|
| **Domain Commitments** | Simon (1962), Wittgenstein (1953) | Foundational | Establishes how domains are bounded systems of rules. |
| **System State** | Shannon (1948), von Bertalanffy (1968) | Foundational | Defines state spaces and system boundaries. |
| **Semantic Assignment** | Tarski (1944), Scott & Strachey (1971) | Formal | Mathematical foundations of denotation and transition semantics. |
| **Representation** | Palmer (1978), Gentner (1983) | Foundational | Relational structure mapping between target and vehicle. |
| **Projection** | Cousot & Cousot (1977), Shimojima (2015) | Formal | Abstract interpretation and diagrammatic reasoning mappings. |
| **Affordance** | Gibson (1979) | Foundational | Physical actor-environment capability relation. |
| **Opportunity Profile** | van Glabbeek (1990) | Formal | Branching time and action-availability profiles (event structures). |
| **Interaction Episode** | Beer (1995), Milner (1980) | Formal | Bounded coupled dynamical systems and process calculi. |
| **Situated Behavior** | Suchman (1987), Goodwin (2000) | Foundational | Situated action, interactional coordinate practices. |
| **Measurement** | Stevens (1946), Messick (1995) | Foundational | Scales of measurement, construct validity framework. |
| **Similarity** | Tversky (1977), Gower (1971) | Formal | Graded proximity and multi-dimensional comparison metrics. |
| **Strategy** | Newell & Simon (1972), Card et al. (1983) | Foundational | Problem spaces, rational action, and cognitive strategies. |
| **Ethics & Power** | Lave & Wenger (1991), CARE / OCAP | Governance | Community-based participatory research, data sovereignty. |
