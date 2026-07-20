#!/usr/bin/env python3
"""Verify that every internal markdown link in the corpus resolves.

A research corpus is a citation graph. A dead internal link is a broken citation, and in a repository
whose whole claim is traceability that is a correctness bug, not a formatting nit.

Checks relative links and anchors-with-paths; deliberately ignores external URLs (network-blocked CI
must not depend on the reachability of third-party sites) and pure in-page anchors.

    python3 scripts/check-doc-links.py [--quiet]
"""
from __future__ import annotations

import re
import subprocess
import sys
import urllib.parse
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SKIP_DIRS = {".git", "node_modules", "build", "_archive", ".agents"}

# [text](target) — not preceded by `!` (images are checked too, but via the same rule)
LINK = re.compile(r"(?<!\\)\[[^\]]*\]\(([^)\s]+)(?:\s+\"[^\"]*\")?\)")


def markdown_files() -> list[Path]:
    """Tracked markdown only.

    Walking the filesystem would also scan untracked local files (agent guidance, scratch notes),
    which CI never sees — so a local run could fail where CI passed. Repository link integrity is a
    property of tracked content. Falls back to a filesystem walk outside a git checkout.
    """
    try:
        out = subprocess.run(
            ["git", "-C", str(ROOT), "ls-files", "-z", "*.md"],
            capture_output=True, check=True, text=True,
        ).stdout
        tracked = [ROOT / n for n in out.split("\0") if n]
        if tracked:
            return [p for p in tracked if p.exists()
                    and not any(part in SKIP_DIRS for part in p.relative_to(ROOT).parts)]
    except (subprocess.CalledProcessError, FileNotFoundError):
        pass
    return [p for p in ROOT.rglob("*.md")
            if not any(part in SKIP_DIRS for part in p.relative_to(ROOT).parts)]


def is_external(target: str) -> bool:
    return target.startswith(("http://", "https://", "mailto:", "tel:", "ftp://", "//"))


def main() -> int:
    quiet = "--quiet" in sys.argv
    files = markdown_files()
    broken: list[tuple[Path, str, int]] = []
    checked = 0

    for path in files:
        try:
            text = path.read_text(encoding="utf-8")
        except UnicodeDecodeError:
            continue
        for lineno, line in enumerate(text.splitlines(), 1):
            for raw in LINK.findall(line):
                target = raw.strip()
                if not target or is_external(target) or target.startswith("#"):
                    continue
                # strip the fragment; a path must resolve even if its anchor is not verified
                path_part = urllib.parse.unquote(target.split("#", 1)[0])
                if not path_part:
                    continue
                checked += 1
                resolved = (path.parent / path_part).resolve()
                if not resolved.exists():
                    broken.append((path.relative_to(ROOT), target, lineno))

    if broken:
        print(f"✗ {len(broken)} broken internal link(s):\n")
        for rel, target, lineno in sorted(broken)[:60]:
            print(f"  {rel}:{lineno}  →  {target}")
        if len(broken) > 60:
            print(f"  … and {len(broken) - 60} more")
        return 1

    if not quiet:
        print(f"✓ internal doc links ok — {checked} link(s) across {len(files)} markdown files")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
