# Explaining the Foundational Model

The proposed model is designed to answer one central question:

> What happened when a participant encountered a computational system, and
> which conclusions are justified by the available evidence?

## The door example

Suppose an interface shows a button labeled **Open door**. That single screen
does not tell us whether the door can be opened.

The action might be defined by the system but disabled in the current state. The
participant might lack the required capability or permission. The interface
might expose the action without making it noticeable. The participant might
believe it is available when it is not. An attempt might be rejected. An
executed transition might still fail its stated outcome criterion.

The proposed model preserves those differences instead of calling all of them
“interaction.”

## Five questions

1. **What does the system admit?** Domain commitments define participants,
   states, actions, constraints, and transition semantics.
2. **Can this participant act now?** Capability, permission, enablement, and
   reachability are evaluated for a participant, action, state, and horizon.
3. **What does this representation make available?** A projection may preserve,
   transform, omit, or introduce structure while exposing and signaling
   operations differently.
4. **What actually occurred?** A formal trace distinguishes selection,
   rejection, execution, transition, and explicit outcome.
5. **What may be concluded?** Behavioral, measurement, causal, predictive, and
   comparative claims require additional contracts and evidence.

## Closely related terms remain separate

| Plain-language question | the proposed model distinction |
|---|---|
| Does the action exist? | domain-valid |
| Does this participant have what it requires? | capable |
| Is this participant authorized? | permitted |
| Does the current state allow it? | enabled |
| Can the target be reached within the declared search? | reachable |
| Is an action path present in this projection? | exposed |
| Does the projection indicate that path? | signaled |
| Does the participant report that it is available? | believed available |
| Was it attempted? | selected |
| Did the transition commit? | executed |
| Did it meet an explicit outcome criterion? | successful |
| Can an authorized exact round trip restore the state? | reversible |

These predicates can agree, but none is a synonym for another.

## What the implementation establishes

The minimal deterministic kernel proves that a selected subset of these
distinctions can be represented, executed, replayed, and compared without hidden
allocation, clocks, operating-system services, or external libraries. Golden
tests make representation drift visible.

It does not prove human interpretation, behavior, trust, accessibility,
causality, strategy, construct validity, prediction, transport, or disciplinary
independence. Those are research claims, not properties that implementation can
manufacture.

## How to use the examples

Begin with CIS-EX-003. Select a participant and action, then vary exposure,
signaling, belief, and search horizon. Read the three conclusions first: whether
the system can execute, whether the action is available through the projection,
and whether participant belief agrees. Attempt the action only after predicting
the result. The trace then shows whether selection became execution and whether
an outcome was actually observed.

CIS-EX-004 asks what remains invariant across two projections. CIS-EX-005 asks
how far a claim can move from raw record toward construct, mechanism, or
generalization. CIS-EX-006 and CIS-EX-007 turn those separations into executable
failure-sensitive benchmarks.

## Short definition

> the proposed model is an interdisciplinary scientific synthesis for describing,
> measuring, modeling, comparing, and predicting computational interaction
> without claiming more than the system and evidence show.
