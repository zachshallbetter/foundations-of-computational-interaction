# Workspace Agent Rules: Foundations of Computational Interaction

These rules guide the research, editorial refactoring, repositioning, and software development within the Foundations of Computational Interaction repository.

---

## 1. Guiding Principle

Do not ask whether the work succeeds in defining a new discipline. Instead, evaluate whether it succeeds in constructing a coherent, scientifically useful conceptual model of computational interaction. All editorial decisions must reinforce that objective.

---

## 2. Architectural Layers

The repository corpus must be framed around three distinct layers:

1.  **Layer 1 — The Scholarly Program:** The long-term research effort, referred to as **Foundations of Computational Interaction**. This is the epistemic infrastructure for the scientific study of computational interaction. It specifies the conditions under which computational interaction can be represented, observed, measured, and compared. It includes historical research, ontology, semantics, representation, projection, interpretation, observation, evidence, measurement, and comparison. It is not itself a model.
2.  **Layer 2 — The Principal Scientific Contribution:** A formal, conceptual model of computational interaction. It is described generically as "a formal model of computational interaction" or "a foundational model of computational interaction." It defines entities, relationships, representations, transformations, observations, evidence, measurement, and comparison. It is *not* a scientific discipline, and does *not* replace HCI or Computational Interaction.
3.  **Layer 3 — Scientific Models (Downstream Consumers):** Explanation and prediction are not produced by the foundational model itself. They are produced by scientific models (e.g., cognitive, ecological, probabilistic, activity-theoretic, or economic models) built within the framework established by the foundational work. The foundational model supports them rather than replaces them.

---

## 3. The Epistemological Questions

Every component of the program answers a necessary epistemological question to establish the conditions under which explanation and prediction become scientifically meaningful:
*   **Ontology:** *What exists?*
*   **Semantics:** *What do operations mean?*
*   **Representation:** *How is it represented?*
*   **Projection:** *What survives transformation?*
*   **Interpretation:** *What is system action vs. user purpose?*
*   **Opportunity:** *What is the fundamental unit of choice?*
*   **Observation:** *What can be observed?*
*   **Evidence:** *What counts as evidence?*
*   **Measurement:** *What can be measured?*
*   **Comparison:** *What can be compared?*

---

## 4. Editorial Guidelines

*   **Scientific Language:** Replace institutional language with scientific language. Avoid phrasing like *"Computational Interaction Science proposes/defines..."* or *"the discipline of Computational Interaction Science."* Prefer *"FCI...",* *"the model defines...",* *"this work develops...",* *"this research establishes...",* or *"this paper defines..."*
*   **Branding Reduction:** Minimize proper noun branding and acronyms. Prefer natural scientific prose (e.g., *"The model distinguishes...",* *"The model represents..."*).
*   **Relationship to Existing Work:** Frame the relationship as complementary:
    *   *Existing Computational Interaction:* Develops computational methods for understanding and optimizing interaction.
    *   *This Body of Work:* Develops a formal conceptual model for representing, observing, measuring, and comparing computational interaction.
*   **Introductions:** Every paper's introduction must state its specific role in the overall model (e.g., *"This paper defines the ontological foundation of FCI"*).

---

## 5. Research Program & Scientific Boundaries (Phase 0)

### 5.1 Mission & Central Question
*   **Mission:** Decide whether interaction merits a distinct computational science. Do not defend a thesis blindly, write papers first, design products, or invent unnecessary branding terms. Success is defined as a truthful recommendation to: `proceed`, `revise`, `merge`, or `abandon`.
*   **Central Question:** Can interaction be a coherent scientific unit independent of interfaces, products, and implementations?
*   **Implementation Independence:** This is required. If the experimental platform (Observatory) and simulation kernel (Fundamental) disappear, the conceptual theory must still remain valid. Software is the apparatus/reference implementation, not the contribution.

### 5.2 Observations & Lived Experience
*   **Core Observation:** People with different lived, cultural, linguistic, professional, technical, or material histories may perceive and use the same software differently.
*   **Exposure-Based Origins:** Recurring differences observed in community engagements (e.g., orientation, navigation, collaboration, verification) must not be assumed to have essentialist cultural causes. Investigate specific mechanisms, exposure histories, and interaction ecologies.
*   **The Work Thesis:** Interaction behavior emerges from accumulated lifetime exposure to tools, software, games, education, language, writing systems, community practice, governance, workflows, physical environment, visual traditions, material culture, and institutions.

### 5.3 Candidate Field Definition & Negative Space
*   **Computational Interaction Science (Proposed):** The study of how people perceive, interpret, act on, adapt to, and transfer across structured information systems, and how these processes can be formally described, measured, and modeled.
*   **Negative Space:** This work is *not* UX design, usability, design systems, personality models, learning styles, cultural taxonomy, demographic segmentation, marketing, AI interface models, telemetry platforms, or accessibility standards. If the model collapses into existing fields without material loss, merge or stop.
*   **Research Stance:** Adversarial and constructive. Assume current terms are invalid. Challenge novelty, need, scope, falsifiability, operationalization, ethics, and overlap.

### 5.4 Adjacent Fields & Existing Models
*   **Adjacent Fields to Analyze:** HCI, Human Factors, Cognitive Science, Cog Psychology, Ecological Psychology, Distributed Cognition, Situated Cognition, Activity Theory, Embodied Cognition, Information Foraging, Info Visualization, Semiotics, Anthropology, Cross-Cultural HCI, Learning Science, Behavioral Economics, Systems Theory, Cybernetics, Complexity, Human-AI, Game Studies.
*   **Existing Models to Evaluate:** Affordances, Seven Stages of Action, GOMS/KLM, Mental Models, Distributed Cog, Activity Theory, Situated Action, Embodied Cog, Info Foraging, Cognitive Load, Flow, Technology Acceptance Model (TAM), Adaptive Interfaces, Cross-Cultural HCI.
*   *For each field/model:* Analyze scope, unit of analysis, mechanisms, empirical strength, limits, and overlaps to identify genuine gaps.

### 5.5 Core Concepts & Priority Topics
1.  **Interaction Ecology:** Lifetime habitats and accumulated experiences shape approaches to unfamiliar systems. Exposure profiles predict behavioral similarity better than demographics.
2.  **Interaction Morphology:** Visual and spatial composition (shape, color, density, alignment, symmetry, positioning) encodes preconscious structural expectations before semantic interpretation.
3.  **Interaction Grammar:** Interfaces express action grammars transferring across systems beyond low-level input events.
4.  **Behavioral Opportunities:** The fundamental unit of choice/measurement. Defined as: `Known State + Visible Information + Available Actions + Choice/Avoidance + Outcome`. Relative models predict behavior better than event counts or self-reports.
5.  **Semantic Representation & Transfer:** Translation loss across representations during form changes tracks semantic fidelity and prior grammar exposure, not surface similarity.

### 5.6 Context Variables
*   Analyze context variables strictly as moderators, covariates, exposures, or confounds—never as essentialist identities.
*   **Variables include:** Age band, current/raised region, migration, languages/scripts, reading direction, education/occupation, community roles, device/software history, gaming, visual/material traditions, collaborative norms, institutional exposure, and access needs.

---

## 6. Repository Rules & Infrastructure

> **Operational conventions** — the verification gate, CI, per-layer versioning and changelogs, branch
> and commit conventions — are in [CLAUDE.md](../CLAUDE.md). Claim-strength practices (preregistration,
> the discovery criterion, negative results, evidence provenance) are in
> [docs/90_Project/Research_Practices.md](../docs/90_Project/Research_Practices.md).

### 6.1 Authority and Scope
Apply the authority order in [app/AUTHORITY.md](../app/AUTHORITY.md) (final synthesis determination, then canonical glossary, then relational ontology, …). Treat [docs/01_Knowledge_System_of_Record/08_Canonical_Registry/Canonical_Ontology.md](../docs/01_Knowledge_System_of_Record/08_Canonical_Registry/Canonical_Ontology.md) as the current label and determination freeze, contract schemas as draft 0.x normative candidates, C as a deterministic subset, and examples as explanatory derivatives. Never let code, bibliography records, or generated files silently change theory.

Use **FCI** as the preferred short name and **Interaction Participant** as the general participant category. Retain the `cis_` C namespace only under the legacy policy in [NAMING.md](../app/NAMING.md). Use `formal trace`, `execution record`, or `instrument record` unless an empirical Behavioral Evidence Contract is applied.

### 6.2 Examples and Visual Review Rules
Every executable, interactive model, visualization, or worked scenario added to this repository must be an identified example.

1.  Allocate the next unused `CIS-EX-NNN` identifier in `examples/manifest.csv`.
2.  Put the identifier and applicable theory version in the source artifact.
3.  Add a complete `examples/README.md` definition covering purpose, inputs or controls, concepts exercised, expected behavior, non-claims, and validation.
4.  Keep editable visualization fragments under `examples/visualizations/src/` and generated standalone files under `examples/visualizations/`.
5.  Add golden assertions or behavioral tests wherever the example makes an executable claim.
6.  Align every interactive figure in [examples/PAPER_ALIGNMENT.md](../app/examples/PAPER_ALIGNMENT.md), including canonical concepts, internal research basis, candidate source keys, and claim boundary.
7.  Run `make test`; missing identities, missing definitions, and stale generated visualization output are failures.

**Visual Quality Review Rules:**
Interactive figures must pass visual review at both wide and narrow widths:
*   The primary relationship must be visually dominant.
*   Controls and evidence must be hierarchically distinct.
*   Color must have a stable, semantic role.
*   Empty states must remain compact.
*   Text must not clip or overflow.
*   Focusable controls must use native keyboard behavior.
*   No decorative treatment should imply a stronger research claim than is supported.

Never reuse or renumber an example identifier. A material semantic change gets a new identifier; a correction that restores the documented contract retains the existing identifier and updates its validation record.

---

## 7. Quality Gates & Publication Rules

*   **Canonical Canon:** One primary contribution per paper. Theory before implementation, definitions before use, assumptions explicit, observations separate from inference, claims falsifiable.
*   **Quality Gate Checks:**
    *   Every claim must be cited or explicitly labeled as an inference.
    *   Every new term must be systematically compared to existing literature vocabulary.
    *   Every gap must be evidenced, and every hypothesis must be operationalizable.
    *   Every identity claim must be non-essentialist.
    *   Every recommendation must include its failure conditions.
