# Scientific audit reporting standard

## Required report sections

Every completed audit must use the following order.

## 1. Audit summary

Record:

- project and version;
- unit of evaluation;
- project type;
- audit purpose;
- gate status;
- numerical score if eligible;
- grade;
- maturity;
- verdict;
- strongest contribution;
- most serious defect;
- weakest dependency;
- required next action.

## 2. Scope and exclusions

State all reviewed artifacts, excluded artifacts, time boundaries, populations, domains, and assumptions. An audit must not imply coverage beyond this scope.

## 3. Project classification

State:

- contribution type;
- claim types;
- intended scientific use;
- claimed maturity;
- applicable audit profile;
- weighting profile.

## 4. Claim inventory

Include one row per material claim with:

- claim ID;
- claim text;
- type;
- criticality;
- evidence;
- assumptions;
- support score;
- status;
- required remediation.

## 5. Fatal gate report

For each gate, include:

- pass, fail, not applicable, or unassessable;
- evidence;
- rationale;
- consequence;
- remediation condition.

## 6. Dependency map

Map every thesis-critical claim from construct through conclusion. Identify broken, circular, ambiguous, or undocumented edges.

## 7. Formula and measurement audit

For every material quantity, formula, score, threshold, and estimator, report:

- definition;
- symbols;
- units;
- assumptions;
- source;
- dimensional and algebraic status;
- uncertainty treatment;
- interpretation;
- reproduction status;
- defects.

## 8. Dimension scorecard

Report raw score, weight, confidence, weighted contribution, evidence, defects, and remediation for each applicable dimension.

## 9. Comparative-gain and burden review

State:

- baseline;
- reduced alternatives;
- demonstrated benefit;
- added complexity;
- added risk;
- ablation results;
- whether the increment is justified.

## 10. Maturity assessment

State the assigned level and the evidence required to advance to the next level.

## 11. Findings by severity

Use:

- Critical - invalidates a thesis-critical claim or fatal gate;
- Major - materially weakens validity, reproducibility, or comparability;
- Moderate - limits scope or confidence;
- Minor - does not threaten scientific validity;
- Editorial - affects presentation only.

## 12. Remediation plan

Order corrections by dependency and scientific risk. Every item must define an acceptance criterion.

## 13. Final verdict

Use exactly one:

- Accept;
- Accept with minor revisions;
- Revise;
- Reframe;
- Rebuild;
- Reject.

A verdict must be accompanied by grade, maturity, and gate status. None of these substitutes for the others.

## Reporting prohibitions

An audit must not:

- assign favorable values to missing evidence;
- collapse gate failures into an average;
- treat polish as validity;
- infer causal or explanatory strength from prediction alone;
- state that work is replicated when only rerun;
- state that a construct is validated from one indicator alone;
- hide disagreement among auditors;
- omit material negative findings from the summary.
