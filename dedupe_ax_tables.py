#!/usr/bin/env python3
"""Deduplicate AX pose/anim arrays in src/data/ax/*.h to shrink ROM tables.

Within each species header:
  - Identical pose arrays keep one definition; pose-table slots alias it.
  - Identical anim arrays keep one definition; anim-table slots alias it.

Optionally (--shared-anims) move anim bodies referenced by 2+ species into
src/data/ax_shared_anims.c so cross-species duplicates are stored once.

Idempotent for within-file dedupe. Re-run after regenerating AX headers.
"""

from __future__ import annotations

import argparse
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent
AX_DIR = ROOT / "src" / "data" / "ax"
SHARED_C = ROOT / "src" / "data" / "ax_shared_anims.c"
SHARED_H = ROOT / "include" / "ax_shared_anims.h"

POSE_RE = re.compile(
    r"static const ax_pose (\w+)\[\] = \{.*?\n\};",
    re.S,
)
ANIM_RE = re.compile(
    r"static const ax_anim (\w+)\[\] = \{.*?\n\};",
    re.S,
)
NORM_WS = re.compile(r"\s+")


def normalize_body(defn: str) -> str:
    # Compare initializer only (drop symbol name).
    body = defn.split("=", 1)[1]
    return NORM_WS.sub(" ", body).strip()


def replace_names(text: str, rename: dict[str, str]) -> str:
    if not rename:
        return text
    # Longest first so Pose10 is not partially matched as Pose1.
    names = sorted(rename.keys(), key=len, reverse=True)
    pattern = re.compile(r"\b(" + "|".join(re.escape(n) for n in names) + r")\b")

    def repl(m: re.Match[str]) -> str:
        return rename[m.group(1)]

    return pattern.sub(repl, text)


def dedupe_arrays(
    text: str, regex: re.Pattern[str]
) -> tuple[str, dict[str, str], int, int]:
    """Remove duplicate array defs; return text, rename map, removed count, kept."""
    matches = list(regex.finditer(text))
    if not matches:
        return text, {}, 0, 0

    body_to_canon: dict[str, str] = {}
    rename: dict[str, str] = {}
    remove_spans: list[tuple[int, int]] = []
    kept = 0

    for m in matches:
        name = m.group(1)
        key = normalize_body(m.group(0))
        if key not in body_to_canon:
            body_to_canon[key] = name
            kept += 1
            continue
        canon = body_to_canon[key]
        if name != canon:
            rename[name] = canon
        remove_spans.append(m.span())

    if not remove_spans:
        return text, {}, 0, kept

    # Delete duplicate definitions (from end so offsets stay valid).
    out = text
    for start, end in sorted(remove_spans, reverse=True):
        # Drop surrounding blank line if present.
        while start > 0 and out[start - 1] in " \t":
            start -= 1
        if start > 0 and out[start - 1] == "\n":
            start -= 1
        out = out[:start] + out[end:]

    out = replace_names(out, rename)
    return out, rename, len(remove_spans), kept


def process_file(path: Path, dry_run: bool) -> tuple[int, int]:
    original = path.read_text()
    text, pose_rename, pose_rm, _ = dedupe_arrays(original, POSE_RE)
    text, anim_rename, anim_rm, _ = dedupe_arrays(text, ANIM_RE)

    if (pose_rm or anim_rm) and not dry_run and text != original:
        if not text.startswith("/* ax-table-deduped"):
            text = (
                "/* ax-table-deduped: duplicate pose/anim arrays aliased */\n"
                + text
            )
        path.write_text(text)

    return pose_rm, anim_rm


def collect_shared_anims() -> dict[str, tuple[str, str, int, list[tuple[Path, str]]]]:
    """body_key -> (first_local_name, full_defn, refcount, owners) for multi-species bodies."""
    first: dict[str, tuple[str, str]] = {}
    counts: dict[str, int] = {}
    owners: dict[str, list[tuple[Path, str]]] = {}

    for path in sorted(AX_DIR.glob("*.h")):
        text = path.read_text()
        for m in ANIM_RE.finditer(text):
            name = m.group(1)
            key = normalize_body(m.group(0))
            counts[key] = counts.get(key, 0) + 1
            owners.setdefault(key, []).append((path, name))
            if key not in first:
                first[key] = (name, m.group(0))

    return {
        k: (first[k][0], first[k][1], counts[k], owners[k])
        for k in first
        if counts[k] > 1
    }


def emit_shared_anims(dry_run: bool) -> tuple[int, int]:
    """Move multi-species anim bodies into a shared TU; rewrite headers."""
    shared = collect_shared_anims()
    if not shared:
        return 0, 0

    # Stable IDs by body content.
    items = sorted(shared.items(), key=lambda kv: kv[0])
    id_for_body = {body: i for i, (body, _) in enumerate(items)}

    decls: list[str] = []
    defs: list[str] = []
    # path -> {local_name -> shared_name}
    renames: dict[Path, dict[str, str]] = {}

    for body, (_first_name, defn, _count, owners) in items:
        sid = id_for_body[body]
        shared_name = f"gAxSharedAnim_{sid:05d}"
        # Turn static def into global.
        new_defn = defn.replace(
            f"static const ax_anim {_first_name}[]",
            f"const ax_anim {shared_name}[]",
            1,
        )
        # If first_name wasn't in defn start (shouldn't happen), fall back:
        if new_defn == defn:
            new_defn = re.sub(
                r"static const ax_anim \w+\[\]",
                f"const ax_anim {shared_name}[]",
                defn,
                count=1,
            )
        defs.append(new_defn)
        decls.append(f"extern const ax_anim {shared_name}[];")
        for path, local_name in owners:
            renames.setdefault(path, {})[local_name] = shared_name

    if dry_run:
        return len(items), sum(len(v) for v in renames.values())

    SHARED_H.write_text(
        "#ifndef GUARD_AX_SHARED_ANIMS_H\n"
        "#define GUARD_AX_SHARED_ANIMS_H\n\n"
        '#include "structs/axdata.h"\n\n'
        "/* Auto-generated by dedupe_ax_tables.py — do not edit. */\n"
        + "\n".join(decls)
        + "\n\n#endif /* GUARD_AX_SHARED_ANIMS_H */\n"
    )
    SHARED_C.write_text(
        '#include "global.h"\n'
        '#include "ax_shared_anims.h"\n\n'
        "/* Auto-generated by dedupe_ax_tables.py — do not edit. */\n\n"
        + "\n\n".join(defs)
        + "\n"
    )

    include_line = '#include "ax_shared_anims.h"\n'
    files_touched = 0
    for path, rename in renames.items():
        text = path.read_text()
        # Remove local definitions that moved to shared.
        matches = list(ANIM_RE.finditer(text))
        remove_spans: list[tuple[int, int]] = []
        for m in matches:
            if m.group(1) in rename:
                remove_spans.append(m.span())
        for start, end in sorted(remove_spans, reverse=True):
            while start > 0 and text[start - 1] in " \t":
                start -= 1
            if start > 0 and text[start - 1] == "\n":
                start -= 1
            text = text[:start] + text[end:]

        text = replace_names(text, rename)

        if include_line not in text:
            # After optional dedupe banner / before first content.
            if text.startswith("/* ax-table-deduped"):
                nl = text.find("\n") + 1
                text = text[:nl] + include_line + text[nl:]
            else:
                text = include_line + text

        path.write_text(text)
        files_touched += 1

    return len(items), files_touched


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument(
        "--shared-anims",
        action="store_true",
        help="also pool identical anim arrays across species",
    )
    parser.add_argument(
        "--only",
        type=str,
        help="process a single species stem (e.g. pikachu)",
    )
    args = parser.parse_args()

    paths = sorted(AX_DIR.glob("*.h"))
    if args.only:
        paths = [AX_DIR / f"{args.only}.h"]
        if not paths[0].exists():
            raise SystemExit(f"missing {paths[0]}")

    pose_rm_total = anim_rm_total = 0
    for path in paths:
        pr, ar = process_file(path, args.dry_run)
        pose_rm_total += pr
        anim_rm_total += ar

    mode = "would remove" if args.dry_run else "removed"
    print(
        f"within-file: {mode} {pose_rm_total} pose arrays, "
        f"{anim_rm_total} anim arrays across {len(paths)} files"
    )

    if args.shared_anims:
        n_shared, n_files = emit_shared_anims(args.dry_run)
        print(
            f"shared-anims: {'would emit' if args.dry_run else 'emitted'} "
            f"{n_shared} shared arrays; "
            f"{'would touch' if args.dry_run else 'touched'} {n_files} files"
        )
        if not args.dry_run:
            print(f"  wrote {SHARED_C.relative_to(ROOT)}")
            print(f"  wrote {SHARED_H.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
