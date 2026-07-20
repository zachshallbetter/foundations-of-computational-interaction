# Negative results

**Status:** permanent record. Governed by
[`Research_Practices.md` §4](Research_Practices.md) — entries are never deleted, never renumbered, and
never rewritten into a revision note.

A negative result is a hypothesis that was **held, worked on, and then disproven**. It is not a
retracted draft and not a corrected error. Recording it matters because revising a claim erases the
intuition behind it, and the abandoned intuition is precisely what a later reader is most likely to
re-propose.

Hypotheses are recorded **as they were actually held**, not softened in hindsight into something
obviously wrong.

---

## N-001 — FCI vocabulary transfers directly as an application's authoring language

**Hypothesis, as held.** The ontology's terms — opportunity, projection, episode, attention field,
similarity contract — are the right names for the things an interactive application is *made of*. A
system built on FCI would therefore adopt the vocabulary into its own types and APIs, and doing so
would make the application clearer, because the names would finally match the phenomena.

**Status:** falsified.

**Falsified by.** The first external application to attempt it — an operational airspace-tracking
system built on an independent runtime. The team adopted FCI's **architectural** commitments in full:
separation of system state from representation, non-mutating projections, phase-ordered frame
scheduling, and headless parity between server and client. They then **explicitly rejected the
nomenclature**, in their own evaluation document, as boilerplate that would slow development without
adding explanatory power — declining to rename running symbols to match the papers.

**What this narrows.** FCI's value transferred as **structure, not vocabulary**. The architectural
commitments survived contact with a domain that had real deadlines and real performance constraints;
the naming did not. This is a meaningful narrowing of the program's claim, not a defeat — but it must
be recorded as a narrowing rather than absorbed silently, because the original hypothesis was that the
vocabulary *was* the contribution.

**What it does not establish.** It does not show the vocabulary is wrong, only that it did not
transfer *unassisted* to an application team optimizing for delivery. A single case cannot distinguish
"the terms are poorly chosen" from "the terms are correct but carry a cost this team declined to pay,"
and the second reading is at least as likely. Distinguishing them requires either a second independent
application or a study of comprehension, neither of which exists.

**Reading it against §1.** The provenance here is **revealed by an independent implementation** —
high independence, because the team was solving their own problem and had no stake in FCI's central
question. That is stronger evidence than a fixture, and weaker than a controlled comparison.

---

## N-002 — the reference substrate demonstrates the framework's operational adequacy

**Hypothesis, as held.** A deterministic C kernel that executes the ontology coherently is evidence
that the framework is adequate for building real interactive systems.

**Status:** falsified.

**Falsified by.** The same application. Its operational requirements — network jitter absorption,
client-side dead reckoning, conflict detection under partial information, and reconciliation between
server-authoritative and locally-predicted state — are **entirely outside** the deterministic subset
the substrate implements. The kernel's coherence says nothing about them.

**What this narrows.** Passing the reference substrate's tests establishes *reference-kernel
conformance* and nothing further. This was already the stated position in `app/VERSIONING.md` and the
substrate README; what the application supplies is the first **external confirmation** that the
disclaimer is load-bearing rather than ritual modesty. The gap it names — everything probabilistic,
concurrent, and latency-bound — is the gap between the framework and an operational system.

---

## Registry discipline

- Entries are numbered in the order recorded and are **permanent**. A superseded entry names its
  successor rather than disappearing.
- An entry **reconstructed after the fact** is weaker evidence of discipline than one recorded when
  the belief was abandoned, and must be labelled as such. Both entries above were recorded
  contemporaneously with the evaluation that produced them.
- A hypothesis that was never actually held does not belong here. This registry is not a list of
  things that would have been wrong.
