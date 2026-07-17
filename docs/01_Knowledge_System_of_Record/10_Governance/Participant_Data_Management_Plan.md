# Participant Data Management Plan 0.1.0

**Status:** required template; no study is authorized by this document alone

## Study declaration

Before collection, freeze a study-specific instance naming the responsible
owner, review authority, protocol and consent versions, participant population,
purpose, data categories, instruments, storage locations, processors, access
roles, retention dates, deletion mechanism, export rules, reuse scope, incident
contact, and approved exceptions.

## Required controls

- Minimize: collect only fields justified by a frozen outcome or governance
  requirement. Full prompts, direct identifiers, protected attributes, free-form
  sensitive text, and precise location are prohibited unless specifically
  approved and necessary.
- Pseudonymize: keep the re-identification key in a separately controlled store;
  research records use a study-local participant reference.
- Separate: isolate sensitive context, consent records, contact data, raw
  instrument records, coded events, analysis data, and public derivatives.
- Authorize: deny access by default, use named roles, review grants, and remove
  access at role change or study close.
- Retain and delete: declare calendar dates or events for every data class.
  Deletion must cover primary, derivative, export, and backup handling, with an
  auditable disposition record.
- Export and reuse: log recipient, purpose, fields, transformations, agreement,
  consent basis, and expiration. New use outside consent or authority requires
  review before transfer.
- Audit: record access to sensitive data, exports, transformations, consent
  amendments, withdrawals, incidents, and deletions without logging the
  sensitive payload itself.

## Withdrawal and correction

Consent withdrawal is append-only. Record time, consent version, requested
scope, affected data classes, disposition, exceptions required by approved
policy, and completion. Never overwrite the original consent record. Link
corrections and exclusions to retained provenance so published analyses can
report their effect.

## Incident response

Stop affected collection or export, contain access, preserve minimal forensic
records, notify the responsible authority, assess participant and community
impact, apply required notification, remediate, and record closure. Credentials,
direct identifiers, full prompts, and raw sensitive payloads must not appear in
incident tickets or routine logs.
