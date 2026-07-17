# Consent Governance 0.1.0

Every participant dataset references an immutable consent record conforming to
`consent-record.schema.json`. Consent scope declares study participation,
recording modalities, data categories, retention, future reuse, sharing,
publication, recontact, withdrawal, and any automated or AI-assisted processing.

Amendments create a new consent version and append a relationship to the prior
version; they never overwrite it. Published releases freeze the applicable
version. Withdrawal creates a new `withdrawn` record and triggers the study data
management disposition process.

Sensitive cultural, community, institutional, or collective contexts may
require authority beyond individual consent. The study must record the relevant
community review, decision scope, dissent, benefit/risk distribution, reuse
limits, and continuing contact. Consent never converts an unnecessary or
disproportionate collection into an acceptable one.
