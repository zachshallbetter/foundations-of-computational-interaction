#!/usr/bin/env python3
"""Generate llms.txt and llms-full.txt for the FCI corpus.

`llms.txt` is an index (llmstxt.org): what this program is, what it does not claim, and where each
document lives. `llms-full.txt` concatenates the **project-licensed corpus** into one file.

## The licensing constraint

`LICENSES.md` is the authoritative path map and it is not uniform. Concatenating `docs/**` wholesale
would inline third-party material into a single artifact carrying the project's CC BY 4.0 banner —
which the manifest forbids in as many words:

    Third-party and excluded material must not be treated as project-licensed even when co-located.

So the full text is built from an **allowlist** of project-owned paths. Excluded material is named in
the index with a pointer, never inlined. A path that is not explicitly allowed is skipped and reported,
because `LICENSES.md` says an unlisted path is "unlicensed pending classification — do not assume
permission." Silence defaults to exclusion, not inclusion.

    python3 scripts/gen-llms.py [--out DIR]
"""
from __future__ import annotations

import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SITE = "https://github.com/zachshallbetter/foundations-of-computational-interaction/blob/main"

# Project-licensed prose (CC BY 4.0) — safe to inline.
INCLUDE_DIRS = [
    ("docs/01_Knowledge_System_of_Record", "Canonical definitions, glossary, relational ontology, contract definitions"),
    ("docs/02_Research_Papers", "Research papers in logical dependency order"),
    ("docs/05_Publication", "Publication guidelines and consistency audits"),
    ("docs/90_Project", "Release manifests, audits, decisions, research practices, negative results"),
]

# Apache-2.0 documentation for the reference substrate.
INCLUDE_APP_DOCS = True

ROOT_DOCS = ["README.md", "LICENSES.md", "docs/README.md", "docs/START_HERE.md", "docs/CHANGELOG.md", "docs/ROADMAP.md"]

# Named in the index, never inlined. Reason is printed so the exclusion is auditable.
EXCLUDE = {
    "docs/03_External_Literature": "third-party literature — excluded from project licensing, retained under original terms",
    "docs/04_Reference": "bibliographic records and citation metadata — mixed/third-party, not project-licensed",
    "docs/90_Project/Previous_Releases": "bundled historical releases — inherit-original, archived byte-for-byte",
    "_archive": "bundled historical releases — inherit-original",
}


def is_excluded(rel: str) -> str | None:
    for path, reason in EXCLUDE.items():
        if rel == path or rel.startswith(path + "/"):
            return reason
    return None


def tracked_markdown() -> list[Path]:
    """Tracked files only — untracked local notes are not corpus."""
    try:
        out = subprocess.run(["git", "-C", str(ROOT), "ls-files", "-z", "*.md"],
                             capture_output=True, check=True, text=True).stdout
        return [ROOT / n for n in out.split("\0") if n]
    except (subprocess.CalledProcessError, FileNotFoundError):
        return sorted(ROOT.rglob("*.md"))


def h1_of(path: Path) -> str:
    for line in path.read_text(encoding="utf-8", errors="replace").splitlines():
        if line.startswith("# "):
            return line[2:].strip()
    return path.stem.replace("_", " ")


def main() -> int:
    out_dir = ROOT
    if "--out" in sys.argv:
        out_dir = Path(sys.argv[sys.argv.index("--out") + 1]).resolve()
    out_dir.mkdir(parents=True, exist_ok=True)

    all_md = tracked_markdown()
    included: list[Path] = []
    skipped: list[tuple[str, str]] = []

    allowed_prefixes = [d for d, _ in INCLUDE_DIRS] + (["app"] if INCLUDE_APP_DOCS else [])

    for p in all_md:
        rel = p.relative_to(ROOT).as_posix()
        reason = is_excluded(rel)
        if reason:
            skipped.append((rel, reason))
            continue
        if rel in ROOT_DOCS or any(rel.startswith(pre + "/") for pre in allowed_prefixes):
            included.append(p)
        else:
            skipped.append((rel, "not on the project-licensed allowlist (LICENSES.md: unlisted ⇒ unlicensed pending classification)"))

    included.sort(key=lambda p: p.relative_to(ROOT).as_posix())

    # ---- llms.txt (index)
    idx = [
        "# Foundations of Computational Interaction (FCI)",
        "",
        "> An interdisciplinary research program for formally describing, measuring, modeling, and",
        "> predicting human–computer interaction. It is a **research program, not an established",
        "> discipline** — its scientific necessity and empirical advantage remain to be demonstrated.",
        "> Nothing here is a validated result unless a record says so explicitly.",
        "",
        "Versions move **independently per layer**; a shared number never implies cross-layer conformance.",
        "Theory 0.5.0 (pre-ratification) · contract schemas 0.2.0 · dataset schema 0.3.0 ·",
        "C reference substrate 0.1.0. Passing the substrate's tests establishes reference-kernel",
        "conformance only — not empirical validation.",
        "",
        f"- [llms-full.txt]({SITE}/llms-full.txt): the project-licensed corpus concatenated into one file",
        "",
    ]
    for d, desc in INCLUDE_DIRS:
        docs = [p for p in included if p.relative_to(ROOT).as_posix().startswith(d + "/")]
        if not docs:
            continue
        idx += [f"## {Path(d).name.replace('_', ' ')}", "", f"{desc}.", ""]
        for p in docs:
            rel = p.relative_to(ROOT).as_posix()
            idx.append(f"- [{h1_of(p)}]({SITE}/{rel})")
        idx.append("")

    idx += ["## Excluded from the full text", "",
            "Named here rather than inlined, because `LICENSES.md` forbids treating them as",
            "project-licensed even when co-located:", ""]
    for path, reason in EXCLUDE.items():
        idx.append(f"- `{path}` — {reason}")
    idx.append("")

    (out_dir / "llms.txt").write_text("\n".join(idx), encoding="utf-8")

    # ---- llms-full.txt
    full = [
        "# Foundations of Computational Interaction — full corpus",
        "",
        "Generated from the project-licensed corpus only. Third-party literature, bibliographic",
        "metadata and archived releases are deliberately absent — see LICENSES.md.",
        "",
        "Prose is CC BY 4.0; `app/**` documentation describes Apache-2.0 code.",
        "",
        "FCI is a research program, not an established discipline. Its scientific necessity and",
        "empirical advantage remain to be demonstrated.",
        "", "=" * 78, "",
    ]
    for p in included:
        rel = p.relative_to(ROOT).as_posix()
        full += [f"<!-- {rel} -->", "", p.read_text(encoding="utf-8", errors="replace").rstrip(), "", "=" * 78, ""]

    (out_dir / "llms-full.txt").write_text("\n".join(full), encoding="utf-8")

    kib = (out_dir / "llms-full.txt").stat().st_size // 1024
    print(f"✓ llms.txt + llms-full.txt ({kib} KiB) — {len(included)} documents included")
    by_reason: dict[str, int] = {}
    for _, reason in skipped:
        by_reason[reason] = by_reason.get(reason, 0) + 1
    for reason, n in sorted(by_reason.items(), key=lambda kv: -kv[1]):
        print(f"  excluded {n:>3}  {reason}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
