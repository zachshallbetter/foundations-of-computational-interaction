# Computational Interaction Science

**Short name:** CompInt  
**Status:** Interdisciplinary scientific synthesis and research program; not presently justified as an independent scientific discipline  
**Canonical document set:** v0.5  
**Origin:** Introduced by Zachary Shallbetter during the development of Fundamental, 2025–2026

This directory is the entry point for the Computational Interaction Science research program. It contains the current canonical definitions, ontology, limits, conceptual relationship to Fundamental, and encyclopedia-style overview. The supporting literature reviews and foundational research papers are maintained separately in [`/research`](./research/).

CompInt studies computational interaction as an explanatory target. It examines how human, computational, collective, institutional, and hybrid participants become mutually consequential through coupling, representation, interpretation, opportunity, behavior, strategy, state transition, and feedback.

CompInt is an interdisciplinary scientific synthesis for describing, measuring,
modeling, comparing, and predicting computational interaction. Future
disciplinary recognition remains an empirical question.

The program remains provisional. Its concepts are intended to be tested, revised, merged with existing theory, or rejected when the evidence requires it.

## Start here

Read the documents in this order:

1. **[Computational Interaction Science — Encyclopedia Article Draft](./Computational%20Interaction%20Science%20-%20Encyclopedia%20Article%20Draft%20v0.3.md)**  
   The broadest introduction to the field, its origins, scope, concepts, adjacent disciplines, applications, criticisms, and current status.

2. **[Computational Interaction Science Glossary](./Computational%20Interaction%20Science%20Glossary%20v0.4.md)**  
   The provisional system of record for canonical terms, definitions, boundaries, and maturity levels.

3. **[A Relational Ontology of Computational Interaction](./A%20Relational%20Ontology%20of%20Computational%20Interaction%20v0.3.md)**  
   The current relational architecture connecting domain commitments, state, semantics, projection, representation, interpretation, opportunity, interaction, behavior, strategy, evidence, and feedback.

4. **[The Limits of Computational Interaction Models](./The%20Limits%20of%20Computational%20Interaction%20Models%20v0.2.md)**  
   The epistemic boundaries of the program: what CompInt may explain, what it may only suggest, and what remains outside its authority.

5. **[Scoped Invariance Under Projection](./Scoped%20Invariance%20Under%20Projection%20v0.4.md)**  
   The theory of typed preservation across projections. It replaces broad claims of semantic invariance with explicit targets, mappings, observers, metrics, tolerances, and validity domains.

6. **[Fundamental and Computational Interaction Science](./Fundamental%20and%20Computational%20Interaction%20Science%20v0.4.md)**  
   The relationship between the scientific program and Fundamental as a representation-independent computational research substrate.

7. **[Wikipedia Readiness Review](./Computational%20Interaction%20Science%20-%20Wikipedia%20Readiness%20Review%20v0.2.md)**  
   Publication constraints, notability requirements, conflict-of-interest considerations, and the distinction between a canonical project article and a Wikipedia submission.

The archived first ontology remains available for provenance:

- **[A Canonical Ontology of Interaction — Archived v0.1](./A%20Canonical%20Ontology%20of%20Interaction%20-%20Archived%20v0.1.md)**

It is not an active source of truth.

## Directory structure

```text
/
├── README.md
├── Computational Interaction Science - Encyclopedia Article Draft v0.3.md
├── Computational Interaction Science Glossary v0.4.md
├── A Relational Ontology of Computational Interaction v0.3.md
├── The Limits of Computational Interaction Models v0.2.md
├── Scoped Invariance Under Projection v0.4.md
├── Fundamental and Computational Interaction Science v0.4.md
├── Computational Interaction Science - Wikipedia Readiness Review v0.2.md
├── A Canonical Ontology of Interaction - Archived v0.1.md
└── research/
    ├── foundational literature reviews
    ├── completed research papers
    ├── source notes and bibliographies
    ├── methods and evidence artifacts
    └── future research outputs
```

The root directory contains canonical and public-facing documents. The `/research` directory contains the underlying papers and evidence that justify, challenge, or revise them.

## Canonical authority

The document hierarchy is:

```text
Research papers and evidence
        ↓
Canonical glossary and ontology
        ↓
Concept papers and limits
        ↓
Encyclopedia and public-facing summaries
```

Research findings do not automatically become canonical. A finding should update the glossary or ontology only after its terminology, definitions, dependencies, operationalization, falsifiability, and evidentiary status have been reconciled across the document set.

When documents conflict:

1. Prefer the most recent verified research finding.
2. Update the glossary first.
3. Update the relational ontology second.
4. Synchronize concept papers and public summaries.
5. Preserve replaced material only when needed for provenance, replication, or historical comparison.

## Current research architecture

The completed and planned research program follows this dependency chain:

```text
Scientific objects
        ↓
Representation and projection
        ↓
Ontology, semantics, and interpretation
        ↓
Opportunity and action availability
        ↓
Interaction
        ↓
Behavior
        ↓
Measurement
        ↓
Interaction similarity
        ↓
Transfer and adaptation
        ↕
Interaction strategy
        ↓
Formal models
        ↓
Prediction
        ↓
Comparative interaction
        ↓
Computational Interaction Science synthesis
```

Transfer and strategy are mutually constraining rather than strictly linear. Transfer helps establish whether strategic organization persists across contexts; strategy identifies what may have transferred.

## Core contracts

The research program currently relies on a family of explicit contracts:

| Contract | Function |
|---|---|
| Projection Contract | Declares what a projection preserves, transforms, omits, introduces, and exposes. |
| Opportunity Contract | Declares typed action availability, authority, signaling, belief, consequence, and recovery. |
| Interaction Contract | Declares participants, boundaries, coupling, events, transitions, recurrence, invariants, and closure. |
| Behavioral Evidence Contract | Declares how records become events, traces, patterns, inferences, and bounded claims. |
| Measurement Contract | Declares the measurand, observation process, operationalization, scale, uncertainty, validity evidence, and permitted interpretation. |
| Similarity Contract | Declares what is compared, under which mappings, observables, invariants, transformations, metrics, tolerances, and validity domain. |
| Strategy Contract | Declares the strategy-bearing system, state abstraction, criteria, policies, information use, commitments, contingency rules, resources, rivals, and evidence. |

These contracts are research instruments, not metaphysical commitments. Their value depends on whether they improve reproducibility, comparison, explanation, prediction, or intervention.

## Current foundational constraints

The program presently treats the following as stable working constraints:

- Interaction is a legitimate explanatory target, but disciplinary autonomy remains unproven.
- Representation is not identical with its target.
- Representation is selective and constructive.
- Equivalence and invariance are typed, scoped, and measurement-relative.
- Opportunity is multidimensional and is not a new primitive.
- Interaction is not reducible to action, communication, computation, observation, behavior, or state transition alone.
- Behavior is attributed under an observation model; raw records are not behavior by themselves.
- A metric is not a construct.
- Similarity is not one universal relation.
- A strategy is supported by traces but is not identical with traces.
- Internal cognition, intention, belief, and understanding are not directly observable.
- Culture, demographics, and interaction history are context, not deterministic mechanisms.
- Fundamental is a research substrate, not evidence that CompInt is correct.

## Research file conventions

Files in `/research` should use descriptive titles and preserve their publication status. Recommended metadata at the top of each file:

```text
Title
Subtitle
Version
Status
Research question
Dependencies
Supersedes / superseded by
Canonical concepts affected
Source provenance
```

Suggested statuses are:

- Draft
- Under review
- Foundational research paper
- Replication
- Adversarial review
- Superseded
- Archived

A research file should not be silently overwritten after it has been used as evidence. Corrections, revised editions, deviations, and retractions should be versioned and recorded.

## Terminology

Use **Computational Interaction Science** for the formal name and **CompInt** as the short name.

Use **interaction participant** as the broad category. Use **agent**, **human participant**, **computational participant**, **collective participant**, **institutional participant**, and related terms only when their narrower properties matter.

Use **CompInt**, not **CIS**, in public-facing shorthand where ambiguity with other established meanings is likely.

## Contribution boundary

The present contribution is best stated as:

> CompInt is a typed relational framework and research methodology for explaining how declared computational systems become selectively accessible, interpretable, actionable, comparable, and behaviorally consequential through interaction.

Whether that framework becomes an independent scientific discipline remains an open empirical and institutional question. The final synthesis must choose among three conclusions:

1. Existing disciplines already provide a sufficient scientific account.
2. CompInt is best understood as an interdisciplinary synthesis.
3. CompInt has a sufficiently distinct explanatory object, ontology, empirical program, and theoretical foundation to justify recognition as an independent scientific discipline.

No outcome is assumed in advance.
