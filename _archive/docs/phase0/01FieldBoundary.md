# Deliverable 01: Field Boundary and Adjacent Disciplines

**Program:** Computational Interaction Science (CompInt)  
**Date:** 2026-07-17  
**Status:** Canonical Reference Model  

This document evaluates the boundaries of Computational Interaction Science (CompInt) against its adjacent fields. It uses the required evaluation criteria: scope, unit, mechanisms, models, empirical strength, assumptions, limits, overlap, unexplained space, and new field need.

---

## 1. Human-Computer Interaction (HCI)

*   **Scope:** Broadly covers user interfaces, system design, usability engineering, user experience (UX), human factors, and social impacts of technology.
*   **Unit of Analysis:** The user interface (UI) and the user's task performance or subjective satisfaction.
*   **Mechanisms:** Usability guidelines, design heuristics, user-centered design processes, and technological interventions.
*   **Models:** Design patterns, usability heuristics (e.g., Nielsen), and interface evaluation cycles.
*   **Empirical Strength:** High pragmatic and industry validation, but highly fragmented; often relies on descriptive or qualitative methodologies that do not build a cumulative formal theory.
*   **Assumptions:** Systems should be designed around human needs; usability can be measured by user success and satisfaction.
*   **Limits:** Primarily design-oriented and prescriptive rather than explanatory. HCI rarely formalizes the mathematical relationship between state projection and behavioral strategy.
*   **Overlap:** Extensive. CompInt draws its primary empirical phenomena from human use of computational systems, which is the heart of HCI.
*   **Unexplained Space:** HCI has not established a unified, representation-independent formalism to model how semantic states translate across different visual projections, nor how action availability (opportunity) is structured independently of specific UI designs.
*   **Need for a New Field:** Low. The questions are within the natural horizon of HCI, particularly "Computational HCI" or "Interaction Science." CompInt should coordinate with HCI as a formal translation layer rather than try to stand apart.

---

## 2. Cognitive Psychology & Cognitive Science

*   **Scope:** The study of mind and mental processes (perception, memory, attention, reasoning, decision-making).
*   **Unit of Analysis:** The individual human mind, cognitive architectures, and mental representations.
*   **Mechanisms:** Information processing, cognitive load, working memory limits, attention allocation, and schema activation.
*   **Models:** Cognitive architectures (e.g., ACT-R, SOAR), GOMS/KLM, and dual-process models.
*   **Empirical Strength:** Very high. Supported by decades of controlled laboratory experiments, neuroimaging, and mathematical modeling.
*   **Assumptions:** Human cognition is an information-processing system; mental states can be modeled and measured.
*   **Limits:** Focuses on the internal mechanisms of the mind, often treating the computer/environment as a simple source of inputs or a target for outputs.
*   **Overlap:** CompInt relies heavily on cognitive psychology to model how human participants interpret projections and select strategies under cognitive load.
*   **Unexplained Space:** Cognitive psychology does not model the *computational system* or its formal state transitions as a co-equal, coupled partner in the interaction.
*   **Need for a New Field:** Medium. While cognitive science provides the models of the human side, it lacks the formal tools to specify the projection invariants of the software side.

---

## 3. Ecological Psychology

*   **Scope:** The study of perception and action as coupled systems, focusing on how organisms perceive environmental opportunities directly without complex mental representations.
*   **Unit of Analysis:** The organism-environment system.
*   **Mechanisms:** Direct perception, invariant extraction, and affordances.
*   **Models:** Gibson's theory of affordances, action-perception loops.
*   **Empirical Strength:** Strong within spatial navigation, motor control, and physical ergonomics.
*   **Assumptions:** The environment contains objective, perceivable structures that afford action relative to the organism's physical capability (effectivities).
*   **Limits:** Developed for physical environments. It struggles to model symbolic, state-dependent, and multi-layered digital spaces where "affordances" change dynamically with software state.
*   **Overlap:** CompInt's "Opportunity Profile" is a direct generalization of Gibson's affordances, extended to accommodate symbolic, state-dependent, and role-based permissions in computational environments.
*   **Unexplained Space:** Ecological psychology does not formally address symbolic, non-spatial, and logic-gated digital state spaces.
*   **Need for a New Field:** High need for translation. CompInt provides the necessary extensions to ecological psychology to make affordance theory mathematically applicable to computational state-transition systems.

---

## 4. Distributed Cognition & Situated Action

*   **Scope:** The study of cognition as a phenomenon distributed across individuals, tools, representations, and environments.
*   **Unit of Analysis:** The distributed cognitive system (e.g., a cockpit, a control room).
*   **Mechanisms:** Representational state transformations, external memory aids, and social coordinate practices.
*   **Models:** Hutchins' cognitive systems model, Suchman's plans-and-situated-actions framework.
*   **Empirical Strength:** High qualitative and observational validity (ethnography), but low formal predictive modeling.
*   **Assumptions:** Knowledge and action are constructed in the moment and are fundamentally situated in local practices and tools.
*   **Limits:** Tends to be descriptive rather than formal. It is difficult to write executable code or make quantitative predictions using distributed cognition models alone.
*   **Overlap:** CompInt adopts the core tenet that interaction behavior is situated and relies heavily on external projections.
*   **Unexplained Space:** Lack of formal, executable contracts to verify representation-invariance and opportunity states across software systems.
*   **Need for a New Field:** CompInt acts as a formalization engine for distributed cognition, translating qualitative insights about situated representations into executable mathematical models.

---

## 5. Activity Theory

*   **Scope:** A developmental psychology framework analyzing human activity as mediated by tools, community, and division of labor.
*   **Unit of Analysis:** The mediated activity system.
*   **Mechanisms:** Object-orientedness, tool mediation, internalization/externalization, and contradictions as drivers of change.
*   **Models:** Engeström’s triangular model of activity systems.
*   **Empirical Strength:** Highly useful for longitudinal, developmental, and qualitative studies of work practices.
*   **Assumptions:** Human mind and behavior cannot be understood in isolation from culturally constructed tools and social structures.
*   **Limits:** Non-formal; does not support mathematical modeling, state-machine tracking, or quantitative prediction of interactive episodes.
*   **Overlap:** CompInt shares the focus on tools (software as a mediating participant) and community rules (permissions/roles).
*   **Unexplained Space:** No mechanism to formally verify properties like scoped invariance or state transition reachability within the software.
*   **Need for a New Field:** CompInt provides the formal computational core that Activity Theory lacks, enabling the operational tracking of mediation.

---

## 6. Systems Theory & Cybernetics

*   **Scope:** The interdisciplinary study of systems, feedback, control, and communication.
*   **Unit of Analysis:** The system (open or closed) and its feedback loops.
*   **Mechanisms:** Feedback (positive/negative), homeostasis, self-organization, and state transition.
*   **Models:** State-space models, transfer functions, and control loops (e.g., Wiener).
*   **Empirical Strength:** Exceptionally high across engineering, biology, and computer science.
*   **Assumptions:** Complex phenomena can be modeled as networks of interacting feedback processes.
*   **Limits:** Often abstracts away the specific role of human semantic interpretation, representation projections, and cognitive strategies.
*   **Overlap:** CompInt is deeply rooted in cybernetic principles (especially the feedback loop and state-transition models).
*   **Unexplained Space:** Cybernetics does not natively represent the semantic boundary (how arbitrary data is projected, interpreted, and verified as evidence of meaning).
*   **Need for a New Field:** CompInt adapts cybernetic principles to focus specifically on the semantic and opportunity structures of computational interfaces.

---

## Summary Matrix of Adjacent Fields

| Field | Core Unit | Primary Mechanism | CompInt Overlap | Explanatory Gap Filled by CompInt |
|---|---|---|---|---|
| **HCI** | Interface / Task | Usability Heuristics | Empirical Domain | Multi-layered representation-independent formalisms. |
| **Cognitive Sci** | Human Mind | Information Processing | Interpretation / Strategy | Co-equal modeling of the computational state space. |
| **Ecological Psych** | Organism-Env | Physical Affordance | Opportunity Profile | Extensions to symbolic, state-dependent digital systems. |
| **Distributed Cog** | System | Representational Transfer | Situated Projections | Executable, quantitative models of external representations. |
| **Activity Theory** | Activity | Tool Mediation | Rules / Roles | Mathematical tracking of state-changing event traces. |
| **Cybernetics** | Feedback Loop | Control Theory | State Transition | Incorporating semantic interpretation and opportunity layers. |
