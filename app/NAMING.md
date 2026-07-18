# Naming Policy

**Formal name:** Foundations of Computational Interaction  
**Preferred short name:** the proposed model  
**Supported determination:** interdisciplinary scientific synthesis and research
program, not an established independent scientific discipline

Use **the proposed model** in repository prose, schema titles, examples, and new public
interfaces. Use **Foundations of Computational Interaction** on first formal mention.

The existing C namespace (`cis_`, `Cis*`, `CIS_*`) is a Version 0.1 legacy
namespace retained to avoid a cosmetic API rewrite during consolidation. It does
not denote a separate project or stronger disciplinary claim. A future stable
library namespace should use `compint_` after an API design and migration plan
are ratified; aliases must not create two permanent systems of record.

`Agent` is subordinate to the general ontology:

```text
Interaction Participant
└── Acting Participant
    └── Agent
        ├── AI Agent
        └── Autonomous Agent
```

Use `Interaction Participant` for the general category. Use `Agent` only when
action selection through a policy, rule, control process, intention, or related
organization is specifically in scope.

Use `formal trace`, `execution record`, or `instrument record` for C events.
Reserve `behavioral evidence` for records processed under an instantiated
Behavioral Evidence Contract with segmentation, attribution, alternatives,
uncertainty, and provenance.
