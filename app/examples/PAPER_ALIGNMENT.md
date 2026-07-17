# Example-to-Research Alignment

This register prevents an interactive figure from becoming a visual metaphor
that exceeds the Version 1.0.0 research. Definitions and source keys come from
`docs/02_Citation_Evidence/Citation_Map.md` and
`Concept_Source_Matrix.csv`. The package labels those source mappings
corpus-derived and heuristic; the keys below are alignment candidates, not
ratified evidence claims.

| Example | Primary canonical concepts | Internal research basis | Candidate source keys | Figure claim boundary |
|---|---|---|---|---|
| CIS-EX-003 | system state; participant; capability; permission; enablement; reachability; exposure; signaling; believed action; opportunity profile; action; transition; trace; reversibility | Citation Map; Experimental Handbook opportunity protocol; Measurement Handbook evidence separation | `gibson1979`; `sandhu1996`; `ferraiolo2003`; `vanderaalst2016`; `fipa2002`; `park1981`; `taylor1994` | Demonstrates that availability and trace predicates can vary independently. It does not establish affordance, discovery, uptake, causal recurrence, behavior, or strategy. |
| CIS-EX-004 | representation; projection; scoped invariance; equivalence; similarity; incomparability; similarity contract | Citation Map projection contract and typed invariance definitions; Experimental Handbook comparison protocol | `tarski1944`; `cousot1977`; `gentner1983`; `gower1971`; `taylor1994`; `zhang1994` | Demonstrates preservation, transformation, omission, introduction, and typed comparison under an explicit field correspondence. It refuses overall equivalence from partial preservation. |
| CIS-EX-005 | observation; behavioral evidence; measurement contract; trace; construct evidence; mechanism evidence; generalized claim | Measurement Handbook governing rule and eight evidence levels; Experimental Handbook separation of records, events, behavior, latent constructs, and conclusions | `stevens1946`; `taylor1994`; `cronbach1955`; `yarkoni2017`; `suppes1963` | Demonstrates that evidence levels require cumulative gates. It never derives intention, mechanism, construct validity, or transport from a raw event alone. |
| CIS-EX-006 | representation; projection; exposure; signaling; opportunity profile; scoped invariance; typed comparison | Projection contract; Citation Map representation and opportunity definitions; Experimental Handbook comparison protocol | `cousot1977`; `gentner1983`; `gower1971`; `zhang1994`; `gibson1979` | Demonstrates exact semantic-state projection equivalence alongside an intentional signaling difference. It does not establish interface, behavior, interaction, accessibility, usability, or outcome equivalence. |
| CIS-EX-007 | participant; capability; permission; exposure; signaling; belief; selection; rejection; outcome; opportunity mismatch; recovery; trace | Opportunity and interaction contracts; Measurement Handbook evidence separation; Experimental Handbook trace protocol | `sandhu1996`; `ferraiolo2003`; `vanderaalst2016`; `fipa2002`; `taylor1994` | Demonstrates that an exposed, signaled, and believed action can still be incapable and rejected, then records a distinct recovery action. It does not infer intent, honesty, trust, understanding, or real tool access. |
| CIS-EX-008 | projection; exposure; signaling; belief; selection; recovery; behavioral evidence; measurement; explanatory gain; predictive gain | Projection, Opportunity, Interaction, Behavioral Evidence, Measurement, and optional Prediction contracts; Experimental and Measurement Handbooks | `gibson1979`; `sandhu1996`; `vanderaalst2016`; `stevens1946`; `cronbach1955`; `yarkoni2017` | Defines a proposed study and explicit freeze gate. It contains no observations, preregistration, validated instrument, causal result, prediction, or transport claim. |

## Alignment requirements

Every new interactive figure must identify:

1. the canonical concepts it instantiates;
2. the exact internal definition or protocol it operationalizes;
3. candidate source keys already present in the evidence package;
4. the observable interaction that tests the concept separation;
5. prohibited inferences and empirical claims;
6. executable or browser checks that would falsify the figure's behavior.

Source claims must not be strengthened until the evidence register is manually
ratified. A visually compelling relationship is not evidence that the
relationship is theoretically or empirically valid.
