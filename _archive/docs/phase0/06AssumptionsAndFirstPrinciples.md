# Deliverable 06: Assumptions and First Principles

**Program:** Computational Interaction Science (CompInt)  
**Date:** 2026-07-17  
**Status:** Canonical Reference Model  

This document catalogs the foundational assumptions and first principles of Computational Interaction Science (CompInt). It separates them into five strict categories: Axioms, Working Assumptions, Empirical Claims, Design Principles, and Ethical Constraints.

---

## 1. Axioms (Non-falsifiable Foundations)

1.1 **The Separability Axiom:** System state, semantic assignments, projection mappings, and participant interpretations are distinct, non-reducible conceptual layers. Conflating them destroys analytical clarity.  
1.2 **The Relational Axiom:** Interaction is not a property of an interface or a user in isolation, but a dynamic coupling relation between distinguishable transition systems.  
1.3 **The Constructive Axiom:** Every representation is selective and constructive; it introduces spatial, visual, or structural constraints that are absent in the target domain, and omits details present in the target.

---

## 2. Working Assumptions (Necessary Simplifications)

2.1 **Finite Representation Assumption:** For mathematical and computational tracking, the system state is assumed to be representable as a finite set of bounded variables (e.g., the 16 variables in `cis.h`), and time is discretized into monotonic ticks.  
2.2 **Rational Adaptation Assumption:** Human participants are assumed to adapt their behavioral actions to maximize performance or minimize cognitive load relative to their perceived opportunity profiles, within the bounds of their interaction history.  
2.3 **Static Semantics Assumption:** In reference kernel executions, the underlying semantic rules and transition effects are assumed to remain static for the duration of an interaction episode, though they may change between episodes.

---

## 3. Empirical Claims (Falsifiable Hypotheses)

3.1 **The Invariance Transfer Hypothesis:** Human learning and action-sequence transfer across different user interfaces is predicted better by their shared **Interaction Grammar** (semantic actions) than by their visual similarity (morphology).  
3.2 **The Opportunity Mismatch Predictor:** A high mismatch score between the system's projection exposure and the user's believed action set (measured under the Opportunity Contract) predicts a statistically significant increase in task latency, error rate, and recovery time.  
3.3 **The Exposure vs. Demographics Predictor:** User performance variance on an unfamiliar interface is predicted better by a vector of their prior software exposure history (Interaction History Profile) than by demographic variables (age, gender, ethnicity).

---

## 4. Design Principles (Prescriptive Guides)

4.1 **Strict Separation of Gating:** Software architectures should separate capability checks (what the user's system can execute) from permission checks (what the user's role is authorized to perform) and exposure (what the visual interface exposes).  
4.2 **Explicit Recovery Paths:** Projections must explicitly signal recovery and reverse actions (`reversible = 1` in the opportunity profile) rather than leaving them hidden or implicit.  
4.3 **Representation Provenance:** Interactive systems must record and transmit the specific version of the Projection Contract used to generate a trace, ensuring that data is never analyzed without its visual context.

---

## 5. Ethical Constraints (Moral & Governance Limits)

5.1 **Consent-Trace Binding:** Behavioral traces must never be recorded, aggregated, or replayed without explicit, granular participant consent that declares the intended analytical use.  
5.2 **Prohibition of Psychological Profiling:** System logs and event traces must only be used to evaluate interface opportunities and system usability. They must not be used to infer protected identity traits, personality models, or permanent psychological profiles.  
5.3 **Indigenous Data Sovereignty:** Data collected from, or affecting, sovereign communities must respect CARE (Collective Benefit, Authority to Control, Responsibility, Ethics) and OCAP (Ownership, Control, Access, Possession) principles. Community authority overrides general academic research protocols.
