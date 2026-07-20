#!/usr/bin/env python3
"""Verify that directories described in prose actually exist.

The link checker validates links; it does not validate *claims about structure*. `docs/README.md`
described two directories that did not exist and omitted three that did, and every link check passed
the whole time. This closes that specific gap.

Scans the documentation files listed in TARGETS for backticked directory references of the form
`NN_Name/` and checks each against the filesystem, in both directions:

  - described but absent  → the document is stale
  - present but undescribed → the document is incomplete

    python3 scripts/check-structure.py [--quiet]
"""
from __future__ import annotations

import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

# (document, directory it describes)
TARGETS = [
    (ROOT / "docs" / "README.md", ROOT / "docs"),
    (ROOT / "README.md", ROOT / "docs"),
]

# `01_Knowledge_System_of_Record/` — numbered corpus directories only, so ordinary prose that
# happens to contain a slash is not mistaken for a structural claim.
REF = re.compile(r"`(\d{2}_[A-Za-z0-9_]+)/`")


def main() -> int:
    quiet = "--quiet" in sys.argv
    problems: list[str] = []
    checked = 0

    for doc, directory in TARGETS:
        if not doc.exists() or not directory.exists():
            continue
        described = {m for m in REF.findall(doc.read_text(encoding="utf-8"))}
        if not described:
            continue
        actual = {p.name for p in directory.iterdir() if p.is_dir() and re.match(r"\d{2}_", p.name)}
        rel = doc.relative_to(ROOT)
        checked += len(described)

        for name in sorted(described - actual):
            problems.append(f"  {rel}: describes `{name}/` — no such directory in {directory.relative_to(ROOT)}/")
        for name in sorted(actual - described):
            problems.append(f"  {rel}: does not describe `{name}/`, which exists")

    if problems:
        print(f"✗ {len(problems)} structure claim(s) do not match the filesystem:\n")
        print("\n".join(problems))
        return 1

    if not quiet:
        print(f"✓ structure claims ok — {checked} directory reference(s) verified")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
