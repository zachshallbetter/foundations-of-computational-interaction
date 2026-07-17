# Metadata Audit Report

The audit records field-level status for every canonical reference. No absent field was populated by inference.

## Coverage

- Original records: 312
- Canonical records: 267
- Exact duplicate records merged: 45
- Records with DOI: 14
- DOIs with valid syntax: 14
- Malformed DOIs: 0
- Records with ISBN: 4
- ISBNs with valid checksum: 4
- Records with volume: 52
- Records with issue: 52
- Records with pages: 107
- Individually externally corroborated records: 2

## Material defect

The DOI on the Sen and Wasow record is truncated (`10.1146/annurev-polisci-032015-`) and is flagged invalid rather than silently repaired.

## Required follow-up

Run exact-record matching through Crossref Simple Text Query or REST API in a network environment that supports API/form access; then verify books against publisher or national-library records.