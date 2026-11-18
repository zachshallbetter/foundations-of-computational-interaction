# Security Policy

## Reporting a vulnerability

Please report security issues privately rather than opening a public issue. Use GitHub private
vulnerability reporting:

**https://github.com/zachshallbetter/foundations-of-computational-interaction/security/advisories/new**

Include a description of the issue and its impact, steps to reproduce (a minimal example is ideal),
and the affected path and version.

This is a solo-maintained project. Handling is best-effort with no SLA: there is no guaranteed
response or fix time.

## Scope

The repository holds a research corpus (`docs/`), a freestanding C11 reference substrate (`app/`) and
repository check scripts (`scripts/`). The substrate is a conformance instrument for a deterministic
subset of the ontology, not a production system. Reports about memory-safety or undefined-behavior
defects in `app/`, and about the repository's scripts and CI workflows, are in scope. The corpus is
documentation; reports about it are normally ordinary issues.

## Supported versions

Only the latest tagged release receives fixes. Fixes land on `main` and ship in the next release.
