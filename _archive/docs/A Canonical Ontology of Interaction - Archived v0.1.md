# ARCHIVED — Superseded Historical Document

**Archive status:** Superseded by *A Relational Ontology of Computational Interaction*, Draft 0.3.  
**Preservation reason:** Maintained for research provenance, theory evolution, and comparison only.  
**Do not use as the current ontology.**

The original document assumed a largely linear agent-environment sequence and treated Semantic State, Behavioral Opportunity, Agent Update, and Interaction Event more strongly than later research supports. Subsequent papers established a relational architecture; replaced Agent with Interaction Participant at the top level; defined strict reciprocal or recurrent interaction episodes; separated behavior from traces; introduced Measurement, Similarity, and Strategy Contracts; and treated opportunity and strategy as coordination or latent constructs rather than primitives.

---

# A Canonical Ontology of Interaction

**Version:** Draft 0.1  
**Project:** Computational Interaction Science  
**Status:** Foundational Concept Document

---

# Abstract

Assume a literature review returns a qualified negative finding:

> No existing framework fully defines a canonical, implementation-independent ontology of interaction that spans agents, environments, semantic states, representations, opportunities, actions, observations, and evidence while remaining suitable for computational modeling and empirical study.

That result would not establish Computational Interaction Science as an independent discipline. It would justify a narrower next step: define the minimum irreducible components of interaction, explain their relationships, and derive measurable propositions that existing frameworks do not organize coherently.

This document proposes a relational ontology centered on the **interaction event**. Interaction is treated not as a property of a person, interface, or system in isolation, but as a temporally bounded relationship in which an agent encounters a structured environment through a representation, perceives available possibilities, acts, observes consequences, and changes future behavior.

The framework distinguishes ten ontological categories: Agent, Environment, Semantic State, Representation, Behavioral Opportunity, Action, State Transition, Observation, Agent Update, and Behavioral Evidence. It then combines these categories into a descriptive model of interaction and derives an initial research program.

The proposal is provisional. Its value depends on whether its concepts survive comparison with existing theory, support operationalization, improve prediction or explanation, and remain useful independently of any particular implementation.

---

# 1. The Core Thesis

Interaction is not a property of a person, an interface, or a computational system in isolation.

Interaction is a temporally bounded relationship in which an agent encounters a structured environment through a representation, perceives available possibilities, acts, observes consequences, and changes future behavior.

A first canonical form is:

```text
Agent
  encounters
Environment
  through
Representation
  which exposes
Opportunities
  enabling
Action
  producing
State Change
  perceived as
Observation
  updating
Agent and Environment
```

This should not be interpreted merely as a workflow. Each term describes a distinct ontological category. The framework is useful only if collapsing these categories causes explanatory loss.

---

# 2. Why a Relational Ontology Is Required

Current interaction research is distributed across several disciplines.

Psychology studies perception, cognition, learning, and decision-making. Human–computer interaction studies people using computational systems. Human factors studies performance under environmental and operational constraints. Information visualization studies the representation of data and relationships. Anthropology studies culture and practice. Design studies communication, form, and use. Computer science studies computational implementation.

Each discipline contributes part of the explanation.

The proposed gap is not the absence of interaction research. It is the absence of a shared, implementation-independent ontology that preserves the relationships among:

- what an agent brings;
- what exists in the environment;
- how environmental state is represented;
- what actions are available;
- what action is selected;
- what changes;
- what consequence becomes observable;
- how subsequent behavior changes;
- how these events become evidence.

A canonical ontology would not replace adjacent disciplines. It would provide a shared structure through which their findings could be compared and composed.

---

# 3. The Irreducible Entities

## 3.1 Agent

An **Agent** is an entity capable of perceiving state, selecting among possible actions, and changing future behavior based on outcomes.

A human is an agent, but not the only possible agent. An agent may also be:

- a group;
- an organization;
- an artificial intelligence system;
- a human–AI team;
- a coordinated set of agents.

The theory does not require a complete psychological model. It requires only enough agency to distinguish perception, selection, action, and adaptation.

An agent carries prior state into an interaction. For a human participant, this may include:

- accumulated experience;
- language;
- learned conventions;
- habits;
- skills;
- expectations;
- goals;
- immediate context.

This historically acquired state is the domain provisionally described as **Interaction Ecology**.

Interaction Ecology is not the agent itself. It is one component of the agent’s state.

---

## 3.2 Environment

An **Environment** is the structured domain in which interaction occurs.

An environment contains some combination of:

- entities;
- relationships;
- constraints;
- resources;
- rules;
- possible states;
- processes;
- consequences.

An environment may be digital, physical, social, symbolic, or mixed.

Examples include:

- a customer relationship management system;
- a cockpit;
- a transit network;
- a paper form;
- a game board;
- a woven pattern;
- a conversational system;
- a collaborative workplace.

The environment is not identical to what the agent perceives. Some environmental state may be hidden, delayed, filtered, compressed, or inaccessible.

That distinction creates the need for Semantic State and Representation.

---

## 3.3 Semantic State

The **Semantic State** is what currently exists and what is currently true within the environment, independent of how that state is presented.

It may include:

- entities;
- properties;
- relationships;
- constraints;
- histories;
- goals;
- permissions;
- possible transitions.

For example, a transit network contains stops, lines, connections, schedules, disruptions, and service constraints. Those relationships persist whether the network is represented as:

- a geographic map;
- a schematic diagram;
- a timetable;
- spoken instructions;
- a list;
- a conversational response.

Semantic State prevents the theory from confusing presentation with the underlying domain.

---

## 3.4 Representation

A **Representation** is the form through which some portion of Semantic State becomes available to an Agent.

A representation may:

- select;
- organize;
- emphasize;
- hide;
- compress;
- transform;
- delay;
- annotate meaning.

Examples include:

- maps;
- tables;
- diagrams;
- timelines;
- narratives;
- forms;
- conversations;
- spatial arrangements;
- sound;
- haptic patterns.

A representation is not neutral. It changes what can be perceived easily, which relationships become salient, and which actions appear natural.

**Interaction Morphology** belongs within this category. Morphology describes the structural properties of a representation, including:

- topology;
- hierarchy;
- density;
- alignment;
- rhythm;
- enclosure;
- symmetry;
- direction;
- contrast;
- figure–ground structure;
- ornament;
- continuity.

Representation answers:

> How is Semantic State made available?

Morphology answers:

> How is that representation structurally organized?

---

## 3.5 Behavioral Opportunity

A **Behavioral Opportunity** is a bounded situation in which an Agent has access to a known subset of information and a known set of possible actions.

This is proposed as the smallest scientifically interpretable unit of interaction.

An action alone is ambiguous. Selecting “undo” may indicate:

- error recovery;
- caution;
- experimentation;
- habit;
- accidental activation;
- rejection of an outcome.

Its meaning depends on whether undo was available, what the Agent could see, what had just occurred, what alternatives existed, which objective was active, and what consequences were expected.

A Behavioral Opportunity therefore contains:

```text
Current Semantic State
Visible Information
Available Actions
Constraints
Objective
Time
Prior Events
Possible Consequences
```

The opportunity connects environment to behavior.

---

## 3.6 Action

An **Action** is a semantic intervention by an Agent intended to inspect, transform, navigate, verify, delegate, restore, or commit some part of the Environment.

Implementation events such as click, tap, drag, keypress, or utterance are input forms. They are not canonical Actions.

Canonical Actions may include:

- inspect;
- compare;
- reveal;
- move;
- group;
- relate;
- filter;
- verify;
- revise;
- delegate;
- recover;
- commit.

This is the domain of **Interaction Grammar**.

An Interaction Grammar defines which semantic actions are available, under which conditions, and how they may be composed.

---

## 3.7 State Transition

A **State Transition** is a change produced by an Action or by an environmental process.

A State Transition may affect:

- Semantic State;
- Representation;
- available Behavioral Opportunities;
- another Agent;
- the acting Agent’s future model of the Environment.

The theory distinguishes Action from consequence. Two systems may expose the same semantic Action while producing different transitions.

This distinction allows research to examine not only what Agents do, but how Environments respond.

---

## 3.8 Observation

An **Observation** is the state or consequence made available to an Agent following an Action or environmental change.

Observation is not identical to objective state.

The Environment may change without the Agent perceiving the change. A Representation may reveal a partial, delayed, compressed, or misleading consequence. Different Agents may observe different projections of the same State Transition.

Future behavior depends on observed consequences, not necessarily on complete environmental truth.

---

## 3.9 Agent Update

An **Agent Update** is a change in the Agent’s future interaction policy following Observation.

It may appear behaviorally as:

- learning;
- habituation;
- trust adjustment;
- strategy change;
- revised expectation;
- increased fluency;
- avoidance;
- transfer.

The framework does not claim direct access to internal cognition. Agent Update is inferred from later behavior and must remain distinguishable from direct Observation.

---

## 3.10 Behavioral Evidence

**Behavioral Evidence** is a documented relationship between a Behavioral Opportunity, an Action, a State Transition, an Observation, later behavior, and a research claim.

Evidence is not the raw event.

A click is telemetry.

A semantic Action is an interpreted event.

A feature is a reproducible computation over Actions and Opportunities.

A finding is a contextual inference supported by evidence.

The canonical evidence chain is:

```text
Behavioral Opportunity
→ Action
→ State Transition
→ Observation
→ Subsequent Behavior
→ Feature
→ Inference
```

Each step must remain separately inspectable.

---

# 4. The Interaction Event

These entities combine into the proposed unit of study.

> An **Interaction Event** is a bounded sequence in which an Agent, carrying prior state, encounters a represented portion of an Environment, resolves a Behavioral Opportunity through action or non-action, receives an Observation of resulting state, and potentially updates future behavior.

A preliminary descriptive scaffold is:

```text
Iₜ = ⟨Aₜ, Eₜ, Sₜ, Rₜ, Oₜ, Xₜ, ΔSₜ, Yₜ, Aₜ₊₁⟩
```

Where:

- `Aₜ` is Agent state at time `t`;
- `Eₜ` is the Environment;
- `Sₜ` is Semantic State;
- `Rₜ` is Representation;
- `Oₜ` is the Behavioral Opportunity;
- `Xₜ` is the selected Action or non-action;
- `ΔSₜ` is the resulting State Transition;
- `Yₜ` is the Observation available to the Agent;
- `Aₜ₊₁` is updated Agent state inferred from later behavior.

This notation is a descriptive scaffold, not a validated mathematical model.

---

# 5. The Two Changing Systems

The earlier intuition that a discipline should alternate between observer and observed becomes more precise when expressed as two changing systems:

```text
Agent State
↕
Interaction Event
↕
Environmental State
```

The Agent influences the Environment through Action.

The Environment influences the Agent through represented consequences.

Neither remains fixed.

The discipline therefore studies reciprocal adaptation.

This relationship should remain valid independently of any implementation. A computational substrate may later model portions of the reciprocity, but the theory cannot depend on a specific engine.

---

# 6. The Five Foundational Domains

The ontology suggests five initial research domains.

## 6.1 Acquired State

**Question:** What does the Agent bring?

This domain includes:

- interaction history;
- learned conventions;
- language;
- prior representations;
- community practice;
- occupational tools;
- physical and cultural environments.

This is the domain of **Interaction Ecology**.

---

## 6.2 Presented Structure

**Question:** What does the Environment expose, and how is it organized?

This domain includes Representation and Interaction Morphology.

---

## 6.3 Possible Action

**Question:** What can the Agent meaningfully do?

This is the domain of Interaction Grammar.

---

## 6.4 Situated Choice

**Question:** What information, alternatives, constraints, and consequences existed at the moment of Action?

This is the domain of Behavioral Opportunities.

---

## 6.5 Evidentiary Interpretation

**Question:** How do recorded events become defensible claims about interaction?

This is the domain of Behavioral Evidence.

These domains do not yet constitute a complete discipline. They form a coherent initial foundation from which further theory may be developed.

---

# 7. Initial Claims

The proposed framework makes several restrained claims.

1. Interaction cannot be explained by studying an Agent or Environment independently.

2. Action cannot be interpreted without opportunity context.

3. Representation cannot be treated as equivalent to Semantic State.

4. Current behavior depends partly on acquired experience.

5. Interaction is reciprocal: Actions change Environments, while observed environmental responses influence later Actions.

6. The same Semantic Environment may produce different behavior when Representation, Morphology, Grammar, or Opportunity structure changes.

7. Behavioral Evidence must preserve the chain from available context to observed outcome.

These claims remain provisional until they are compared against existing theory and tested empirically.

---

# 8. Explicit Non-Claims

The framework does not claim that:

- culture determines behavior;
- interaction history fully explains individual differences;
- all interaction can be reduced to a fixed grammar;
- internal cognition can be directly observed;
- representation is the only source of behavioral variation;
- computational formalization removes ambiguity;
- one ontology should replace HCI, psychology, anthropology, design, or human factors.

Its proposed value is organizational. It may provide a common language for connecting findings currently distributed across those fields.

---

# 9. Initial Falsifiable Propositions

## P1 — Opportunity Context Improves Interpretation

Behavioral models that include visible information and available actions will predict later participant behavior more accurately than models using Action logs alone.

## P2 — Interaction History Adds Explanatory Value

Measured interaction exposure will explain additional variance in unfamiliar-system behavior after demographic variables are included.

## P3 — Representation Alters Behavior Under Stable Semantics

Holding Semantic State and goals constant while changing Representation will produce measurable differences in orientation, action selection, verification, or recovery.

## P4 — Grammar Predicts Transfer

Transfer between systems will be stronger when they share semantic Interaction Grammar than when they share visual style alone.

## P5 — Observation Mediates Adaptation

Later behavior will correspond more closely to consequences made visible to the Agent than to environmental changes that were not observable.

## P6 — Interaction Is Reciprocal

Repeated interaction will change both Agent behavior and the effective Opportunity structure of the Environment.

Failure to support these propositions would weaken or require revision of the framework.

---

# 10. Initial Paper Sequence

If the ontology survives literature review and conceptual scrutiny, the first paper sequence should follow its dependency structure.

## Paper 1 — Interaction Ecology

Defines acquired Agent state and the mechanisms through which prior interaction experience may influence later behavior.

## Paper 2 — Interaction Morphology

Defines the structural properties through which Environments become perceptually organized.

## Paper 3 — Semantic Representation

Separates environmental meaning from the forms used to expose it.

## Paper 4 — Interaction Grammar

Defines semantic action systems independently of input modality.

## Paper 5 — Behavioral Opportunities

Establishes the contextual unit required to interpret Action scientifically.

## Paper 6 — Behavioral Evidence

Defines how Opportunities, Actions, State Transitions, and Observations become defensible research claims.

This sequence should remain provisional until the research program establishes which concepts are genuinely required and which duplicate existing theory.

---

# 11. Evaluation Requirements

The framework should proceed only if it can demonstrate more than terminological novelty.

Evaluation should determine whether it:

- defines concepts that existing literature does not already express sufficiently;
- improves prediction or explanation;
- supports independent operationalization;
- preserves distinctions that materially affect analysis;
- produces reproducible empirical designs;
- integrates findings across disciplines without erasing their differences;
- avoids demographic and cultural essentialism;
- survives replacement of any particular implementation.

A failure on these criteria should lead to revision, merger with existing theory, or abandonment.

---

# 12. Limitations

This document proposes an ontology, not an established discipline.

Several risks remain.

The categories may duplicate existing frameworks under new terminology. The proposed Interaction Event may be too broad to function as a useful unit of analysis. Behavioral Opportunities may be difficult to specify completely in open systems. Agent Update may remain underdetermined because internal state cannot be observed directly. Semantic State may itself be contested in socially constructed or collaborative environments. Computational expression may create false precision.

These limitations are not secondary concerns. They are central tests of whether the framework deserves to continue.

---

# 13. Conclusion

A qualified absence in existing literature would not justify declaring a new scientific discipline.

It would justify constructing and testing the minimum ontology such a discipline would require.

The proposed ontology treats interaction as a reciprocal event connecting Agent state and Environmental state through Representation, Opportunity, Action, State Transition, and Observation. It separates raw events from evidence, distinguishes meaning from form, and makes acquired experience part of the explanatory model without treating demographics as mechanisms.

Its contribution is provisional: a coherent structure against which existing theories, empirical results, and future research can be tested.

The preferred outcome is not the largest ontology.

It is the smallest defensible framework capable of explaining the greatest number of observable interaction phenomena.
