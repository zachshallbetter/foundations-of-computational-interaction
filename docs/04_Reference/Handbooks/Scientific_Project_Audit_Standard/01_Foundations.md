# Foundations of scientific project audit

## Purpose

A scientific audit evaluates the integrity of the path from a research problem to a justified conclusion. It is not limited to editorial quality, publication readiness, statistical significance, software correctness, or methodological compliance.

## Unit of evaluation

Every audit must declare its unit of evaluation. Valid units include:

- research program;
- project;
- study;
- paper;
- theory;
- formal model;
- ontology;
- instrument;
- dataset;
- implementation;
- claim;
- replication.

A grade applies only to the declared unit and version. It must not be generalized automatically to a larger program, a later revision, or an unexamined implementation.

## Scientific object and implementation

The scientific object is the construct, relation, mechanism, regularity, or phenomenon under investigation. An implementation is a particular operational realization used to represent, observe, manipulate, estimate, or test that object.

Implementation success does not establish theoretical validity. Theoretical coherence does not establish implementation correctness. Both must be audited when both are claimed.

## Claim and evidence

A claim is a proposition advanced for scientific acceptance. Evidence is an observation, record, derivation, or result used to support or challenge that proposition.

The audit must distinguish:

- the phenomenon from its representation;
- the construct from its metric;
- the observation from its interpretation;
- the estimate from the estimand;
- the model from the modeled system;
- the conclusion from the evidence that warrants it.

## Epistemic dependency chain

The minimum scientific chain is:

```text
Problem
-> Concepts
-> Claims
-> Operationalization
-> Observation
-> Evidence
-> Inference
-> Conclusion
```

For computational interaction projects, the expanded chain is:

```text
Ontology
-> Semantics
-> Representation
-> Projection
-> Interpretation
-> Opportunity
-> Observation
-> Evidence
-> Measurement
-> Comparison
-> Scientific model
-> Explanation or prediction
```

The chain is not necessarily temporal. It is a dependency structure. A later stage may require revision of an earlier stage, but no stage may be treated as justified when its required dependencies remain undefined or invalid.

## Review, verification, validation, and grading

- **Review** examines the project against stated criteria.
- **Verification** asks whether an artifact conforms to its specification.
- **Validation** asks whether the specification, method, or model is adequate for its intended scientific use.
- **Audit** produces a traceable judgment across claims, dependencies, evidence, and methods.
- **Grading** summarizes the audit under a declared rubric.

No single activity substitutes for the others.

## Scientific quality and scientific state

Scientific quality concerns how well the work satisfies the requirements appropriate to its claims. Scientific state concerns how far the work has progressed from conjecture to replicated and transport-supported knowledge.

A project may be high quality at an early maturity level. It must not be described as empirically established until the evidence warrants that state.

## Non-compensability

The following principles are non-compensatory:

- reliability does not establish validity;
- prediction does not establish explanation;
- association does not establish causation;
- formal consistency does not establish empirical adequacy;
- software test success does not establish scientific validity;
- statistical significance does not establish importance;
- completeness does not repair incoherence;
- persuasive writing does not repair unsupported inference.
