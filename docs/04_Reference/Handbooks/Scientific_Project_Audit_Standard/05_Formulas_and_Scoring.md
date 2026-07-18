# Formulas and scoring

## General requirements

Every formula used in an audit must declare:

- purpose;
- inputs;
- output;
- domain;
- units or scale;
- assumptions;
- missing-data rule;
- uncertainty treatment;
- interpretation;
- prohibited interpretation.

Formulas in this document are defaults. Project-specific substitutions are permitted only when documented and scientifically justified.

## Fatal gate eligibility

For required gate `j`:

\[
G_j \in \{0,1\}
\]

Overall eligibility is:

\[
G = \prod_{j=1}^{m} G_j
\]

If any required gate fails, `G = 0` and the project receives a non-passing gate status regardless of its quality score.

## Evidence-confidence coefficient

For dimension `i`:

\[
c_i \in [0,1]
\]

Recommended anchors:

| Confidence | Interpretation |
|---:|---|
| 0.00 | No inspectable evidence |
| 0.25 | Assertion or severely incomplete evidence |
| 0.50 | Plausible but weakly verified evidence |
| 0.75 | Substantial independently inspectable evidence |
| 1.00 | Strong, replicated, or formally demonstrated evidence |

Confidence-adjusted score:

\[
a_i = s_i c_i
\]

where `s_i` is the raw dimension score from 0 to 4.

## Weighted quality score

\[
Q = 25 \times \frac{\sum_{i=1}^{n} w_i s_i c_i}{\sum_{i=1}^{n} w_i}
\]

`Q` ranges from 0 to 100 when all scores are within the declared bounds.

Default weights:

| Dimension | Weight |
|---|---:|
| D1 Problem significance | 6 |
| D2 Contribution clarity | 7 |
| D3 Ontological coherence | 8 |
| D4 Semantic precision | 8 |
| D5 Formal and representational adequacy | 9 |
| D6 Operationalization and measurement validity | 12 |
| D7 Design and identification | 10 |
| D8 Evidence quality | 10 |
| D9 Analysis and uncertainty | 9 |
| D10 Comparative scientific gain | 8 |
| D11 Reproducibility and cumulative utility | 7 |
| D12 Conclusion validity | 6 |

Weights must be fixed before scoring. Changes require a written rationale.

## Dependency integrity

For required dependency stage `k`:

\[
d_k \in [0,1]
\]

Geometric dependency integrity:

\[
D = \left(\prod_{k=1}^{p} d_k\right)^{1/p}
\]

Weakest dependency:

\[
D_{\min} = \min_k d_k
\]

Dependency-adjusted score:

\[
Q_D = Q\sqrt{D}
\]

A strong grade is prohibited when `D_min < 0.50` unless the weak stage is explicitly non-applicable to the declared project type and claim scope.

## Final numerical score

For gate-eligible projects:

\[
F = Q_D
\]

For projects with a failed fatal gate, report `NG` rather than converting the failure into a numeric zero. The quality profile may still be reported diagnostically.

## Grade bands

| Grade | Score | Interpretation |
|---|---:|---|
| A | 90-100 | Strong scientific contribution |
| A- | 85-89 | Strong with bounded deficiencies |
| B+ | 80-84 | Scientifically credible and useful |
| B | 75-79 | Adequate with material improvement needed |
| B- | 70-74 | Conditionally adequate |
| C | 60-69 | Exploratory; not scientifically established |
| D | 50-59 | Major validity deficiencies |
| F | Below 50 | Scientifically inadequate |
| NG | Any fatal gate failed | Not eligible for a passing scientific grade |

## Claim support

For claim `j`, score relevance, evidence quality, inferential fit, independence, and uncertainty adequacy as values in `[0,1]`:

\[
S_j = (r_j e_j f_j i_j u_j)^{1/5}
\]

Importance-weighted project support:

\[
S_{claims} = \frac{\sum_j v_j S_j}{\sum_j v_j}
\]

A thesis-critical claim should not be treated as established when any essential factor is zero.

## Comparative utility

Let:

- `B` = demonstrated scientific benefit in `[0,1]`;
- `C` = operational complexity in `[0,1]`;
- `R` = introduced risk in `[0,1]`;
- `lambda` = complexity penalty;
- `rho` = risk penalty.

Then:

\[
U = \frac{B}{1 + \lambda C + \rho R}
\]

A proposed addition is justified only when:

\[
\Delta B > \lambda\Delta C + \rho\Delta R
\]

## Ablation value

For component `j`:

\[
A_j = P_{full} - P_{-j}
\]

For multiple outcomes:

\[
A_j = \sum_r \alpha_r(P_{full,r} - P_{-j,r})
\]

Outcome weights `alpha_r` must be declared before analysis.

## Reliability and agreement

For two-rater categorical agreement, where appropriate:

\[
\kappa = \frac{p_o-p_e}{1-p_e}
\]

The selected agreement statistic must match the number of raters, scale type, missingness pattern, and intended generalization.

A generic variance decomposition for test-retest or rater reliability is:

\[
\mathrm{ICC} = \frac{\sigma^2_{between}}{\sigma^2_{between}+\sigma^2_{within}}
\]

The exact ICC form must be specified.

## Measurement error

Classical decomposition:

\[
X = T + E
\]

`T` is model-relative target value, not metaphysical truth.

## Uncertainty propagation

For `y = f(x_1, ..., x_n)`:

\[
\sigma_y^2 \approx \sum_i \left(\frac{\partial f}{\partial x_i}\right)^2\sigma_i^2 + 2\sum_{i<j}\frac{\partial f}{\partial x_i}\frac{\partial f}{\partial x_j}\operatorname{Cov}(x_i,x_j)
\]

Use simulation, bootstrap, or posterior propagation when local linear approximation is inadequate.

## Prediction and calibration

Root mean squared error:

\[
\mathrm{RMSE} = \sqrt{\frac{1}{N}\sum_{i=1}^{N}(y_i-\hat{y}_i)^2}
\]

Expected calibration error:

\[
\mathrm{ECE} = \sum_{b=1}^{B}\frac{n_b}{N}|\operatorname{acc}(b)-\operatorname{conf}(b)|
\]

Calibration results must disclose binning or smoothing choices and should be accompanied by a calibration plot or equivalent diagnostic.

## Replication and transport

Let protocol reproducibility, analytic reproducibility, result reproducibility, and transport validity be values in `[0,1]`:

\[
R = (part)^{1/4}
\]

When one component is legitimately non-applicable, remove it from the product and root rather than assigning a perfect score.

## Maturity levels

| Level | Scientific state |
|---|---|
| M0 | Idea or conjecture |
| M1 | Defined conceptual proposal |
| M2 | Internally coherent formalization |
| M3 | Operationalized and instrumented |
| M4 | Pilot evidence |
| M5 | Independent empirical validation |
| M6 | Replicated across settings |
| M7 | Comparative scientific advantage demonstrated |
| M8 | Stable cumulative research infrastructure |
