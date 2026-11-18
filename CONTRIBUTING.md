# Contributing

This repository is maintained by Zachary Shallbetter.

## Before opening a change

1. Read [`docs/START_HERE.md`](docs/START_HERE.md) and [`docs/90_Project/Research_Practices.md`](docs/90_Project/Research_Practices.md).
2. Respect layer authority: [`app/AUTHORITY.md`](app/AUTHORITY.md).
3. Run the verification gate in the README (`make test`, link check, structure check).

## Recording changes

- Corpus changes → [`docs/CHANGELOG.md`](docs/CHANGELOG.md)
- Substrate changes → [`app/RELEASE_NOTES.md`](app/RELEASE_NOTES.md)

Continuous integration enforces both.

## Claims

Do not strengthen empirical or disciplinary claims beyond what the records state. Negative results belong in [`docs/90_Project/Negative_Results.md`](docs/90_Project/Negative_Results.md).

## Conventions

- **Branches** are named for the work: `feat/…`, `fix/…`, `docs/…`, `chore/…`, `research/…`.
- **Commits and PR titles** use normal engineering prose in the imperative mood. Keep a PR focused on one change.
- **Pull requests** follow the template: what and why, how it was verified, and notes. Green CI is required to merge.

## Agent guidance

The agent guide in [`AGENTS.md`](AGENTS.md) points to the research doctrine and the operations guide. Both apply to people as well.

## Conduct, support and security

See [`CODE_OF_CONDUCT.md`](CODE_OF_CONDUCT.md), [`SUPPORT.md`](SUPPORT.md) and [`SECURITY.md`](SECURITY.md).
