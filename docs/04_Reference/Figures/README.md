# Figure Library

This directory contains the reusable FCI figure set. `FIG-001` is regenerated from its checked-in Graphviz source; the PNG, SVG, and PDF are derivatives and must not be edited directly.

## FIG-001 — Canonical analytical dependency graph

- Version: 1.0.0
- Editable source: `FIG-001_Concept_Dependency_Graph.dot`
- Derivatives: `.svg`, `.png`, `.pdf`
- Caption: Analytical dependencies run left to right. Dashed reverse edges mark causal feedback or theory revision and do not reverse analytical dependence. Contract nodes identify the executable interfaces that operationalize parts of the ontology. The terminal determination is limited to interdisciplinary scientific synthesis; the figure does not claim an independent discipline.
- Accessibility: every node has a text label; edge style distinguishes analytical dependence, participation, operationalization, and feedback without relying on color alone.
- License/status: project-authored consolidation figure; reuse terms follow the repository license.

Regenerate with:

```sh
dot -Tsvg docs/06_Figures/FIG-001_Concept_Dependency_Graph.dot -o docs/06_Figures/FIG-001_Concept_Dependency_Graph.svg
dot -Tpng -Gdpi=180 docs/06_Figures/FIG-001_Concept_Dependency_Graph.dot -o docs/06_Figures/FIG-001_Concept_Dependency_Graph.png
dot -Tpdf docs/06_Figures/FIG-001_Concept_Dependency_Graph.dot -o docs/06_Figures/FIG-001_Concept_Dependency_Graph.pdf
```

The catalog records additional figure-bearing source artifacts. They are not silently extracted or redrawn because captions, authority, and reuse rights require ratification.

## FIG-002 — Contract architecture

- Version: 0.2.0
- Editable source: `FIG-002_Contract_Architecture.dot`
- Derivatives: `.svg`, `.png`, `.pdf`
- Caption: Contract dependencies run left to right. Node labels distinguish
  unary, relational, evidence-governed, multi-episode, and target/horizon
  contracts. The brown path is the evidence lineage from instrument record to a
  bounded claim; dotted links show which contracts govern its transformations.
- Accessibility: relationship types are written on nodes and edges and do not
  depend on color.
- License/status: project-authored draft architecture; reuse terms follow the
  repository license.

Regenerate by substituting `FIG-002_Contract_Architecture` in the three Graphviz
commands above.
