# CIS-EX-008 Dataset Fixtures

`valid-synthetic-study.json` is an invented, deterministic lineage fixture. It
contains no person, observation, effect, or evidence. Its fixed timestamps and
values exist only to exercise the Version 0.3.0 record architecture from
participants and environment through raw records, coded events, opportunity,
trace, measures, uncertainty, and explicit empty advanced layers.

`invalid-missing-environment.json` is a negative structural fixture. It omits the
required `environments` collection and intentionally leaves other nested objects
incomplete. The dependency-free validator must accept its JSON syntax but reject
it as a required-field-complete study.

These checks are deliberately rudimentary. They do not implement all JSON Schema
2020-12 keywords, resolve identifiers, validate date-time semantics, or establish
empirical validity.
