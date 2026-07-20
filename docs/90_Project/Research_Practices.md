# Research practices

**Status:** active method. Governs how claims in this repository may be made, recorded, and revised.
Where the corpus defines *what the program is about* and the verification gate defines *how changes
are checked*, this document sits between them: it constrains **when a claim is allowed to
strengthen**.

The program's own stance is that its scientific necessity and empirical advantage remain to be
demonstrated. That stance is only meaningful if something enforces it. These practices are that
enforcement.

---

## 1. Maturity and provenance are different dimensions

How settled a claim is, and what backs it, are independent. Conflating them is the most common way a
research artifact overstates itself.

| Provenance | Independence |
|---|---|
| emerged from a mechanism built earlier for another purpose | **high** |
| revealed by an independent implementation or substrate | **high** |
| independent adversarial test | **medium** |
| fixture written against the implementation it was designed alongside | **low** |
| architectural argument | **none** |

Two claims can share a maturity label and differ completely in support. One exercising a mechanism
that could have behaved otherwise **can fail**; one exercising a construct introduced in the same
change as its test is a tautology with assertions.

**Rule: maturity may never outrun provenance.** A claim cannot be called established on the strength
of a check written against its own implementation. The converse is also an error — calling something a
hypothesis when an independent result revealed it understates what is known.

**Every unsupported claim must name the experiment that would support it.** A claim with no path to
evidence is a permanent assumption wearing the costume of a pending one.

---

## 2. Preregistration

Where a change is expected to establish something, record the expectation **before** doing the work,
in a commit that precedes it. Commit order is the evidence; it can be checked by someone who does not
trust the author.

A registered prediction states what would count as **failure**, not only success. A prediction that
cannot fail is a description.

**Expect accuracy to fall as scope widens.** A maturing program should increasingly meet cases it did
not anticipate. Accuracy rising while scope widens is a signal to scrutinize — most likely the
predictions are being written to be safe. Track surprises rather than minimizing them: a program with
no falsifications is not being tested.

---

## 3. The discovery criterion

A **discovery** is a concept the framework was missing, found because something could not be expressed
without it. Recording one requires stating:

- what forced it;
- why the **prior** formulation was wrong — incoherent or incomplete, not merely improvable;
- **why no existing material could have revealed it**;
- what was deliberately **not** generalized at the same time.

The third requirement is load-bearing. It forces a discovery to demonstrate *necessity*: not "something
we had not written down" but "something the prior basis could not, in principle, have exposed."
Without it, any overlooked idea can be relabelled a discovery.

The fourth guards the opposite failure. A change that quietly generalized three adjacent concepts looks
identical to a minimal one unless the restraint is recorded.

---

## 4. Negative results are permanent

A **negative result** is a hypothesis that was held, worked on, and then disproven. It is not a
retracted draft and not a corrected error.

Recording it matters because **revising a claim erases the intuition behind it** — and the abandoned
intuition is precisely what a later reader is most likely to re-propose. The history of what a program
stopped believing is often more useful than the list of what it accepted.

Negative results are never deleted, never renumbered, and never rewritten into a revision note. A
superseded entry names its successor rather than disappearing. Hypotheses are recorded **as they were
actually held**, not softened in hindsight into something obviously wrong.

An entry reconstructed after the fact is weaker evidence of discipline than one recorded when the
belief was abandoned, and should be labelled as reconstructed.

---

## 5. Refinements are classified before they are accepted

| Kind | Meaning | Disposition |
|---|---|---|
| **structural** | the framework lacked a concept | accepted; becomes a recorded discovery |
| **representational** | the concept existed; this expresses it better | allowed; **not** a discovery |
| **convenience** | eases the work, adds no explanatory power | **not accepted** |

A two-way split is insufficient: representational changes have nowhere to go and get misfiled as a
neighbour. That ambiguity is how a framework drifts while appearing disciplined.

Rejections should be **written down**, not merely made. A rejection count assembled from memory is a
floor, not a total, and should say so.

---

## 6. Layers do not move together

[`app/VERSIONING.md`](../../app/VERSIONING.md) is a research instrument, not bookkeeping. Its claim —
that theory, schemas, substrate, publication infrastructure and examples version **independently** —
is what prevents the most common category error in a repository like this: treating a passing test
suite as evidence for a theoretical claim.

- Passing C tests establishes **reference-kernel conformance only**.
- A schema release does **not** imply empirical validation.
- Cross-layer compatibility must be **declared in a conformance record**, never inferred from equal
  version numbers.

Per-layer changelogs follow from this, and CI enforces them. A single shared changelog would assert
exactly the coupling the policy denies.

---

## 7. What these practices do not do

- They do not make the program's central thesis more likely to be true.
- They do not remove author bias — where one author writes the material, registers the predictions and
  grades them, the record is a *discipline*, not independent evidence. Its guarantee is commit order.
- They cannot establish that the framework is **useful**, only that it is being changed honestly.
- They are slower than working by judgement alone. The cost is real. What it buys is the ability to
  say which parts of the program were forced by evidence and which were chosen.

---

## Relationship to the Fundamental engine

The Fundamental engine (`fundamental-engine`) is an independent runtime that adapted substrates to a
contract under a closely related protocol, and its
[`docs/method/empirical-protocol.md`](https://github.com/zachshallbetter/fundamental-engine/blob/main/docs/method/empirical-protocol.md)
states the domain-neutral form of this method.

The two programs converged on it independently and **neither validates the other**. Fundamental is
apparatus, not evidence: if the experimental platform and simulation kernel disappeared, the
conceptual theory would have to remain valid. Software here is the reference implementation, not the
contribution.
