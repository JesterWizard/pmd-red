#!/usr/bin/env python3
"""Build-time check: ground map file aliases in src/ground_files_table.c stay byte-identical.

A duplicate ground map file is removed from src/ground_map_files_*.c and its table
entry points at the kept symbol instead, annotated with `/* alias: PATH */`, where
PATH is the original file the alias replaces. This check verifies that every such
PATH still exists and is byte-identical to the file its table entry now points at.
"""

from __future__ import annotations

import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
TABLE_C = ROOT / "src" / "ground_files_table.c"
MAP_FILES_GLOB = "ground_map_files_*.c"

INCBIN_RE = re.compile(r'^const u8 (gFile\w+)\[\] ALIGNED\(4\) = INCBIN_U8\("([^"]+)"\);\s*$')
ALIAS_RE = re.compile(r"/\*\s*alias:\s*(\S+?)\s*\*/")
POINTER_RE = re.compile(r"&(gFile\w+)\b")


def fail(msg: str) -> None:
    print(f"check_ground_file_aliases: FAIL: {msg}", file=sys.stderr)
    sys.exit(1)


def load_incbins() -> dict[str, str]:
    symbols: dict[str, str] = {}
    for src in sorted((ROOT / "src").glob(MAP_FILES_GLOB)):
        for lineno, line in enumerate(src.read_text().splitlines(), 1):
            if "INCBIN" not in line:
                continue
            m = INCBIN_RE.match(line)
            if not m:
                fail(f"{src.relative_to(ROOT)}:{lineno}: unrecognised INCBIN line: {line.strip()}")
            sym, path = m.group(1), m.group(2)
            if sym in symbols:
                fail(f"{src.relative_to(ROOT)}:{lineno}: symbol {sym} is defined twice")
            symbols[sym] = path
    return symbols


def main() -> int:
    symbols = load_incbins()
    count = 0
    for lineno, line in enumerate(TABLE_C.read_text().splitlines(), 1):
        am = ALIAS_RE.search(line)
        if not am:
            continue
        alias_path = am.group(1)
        pm = POINTER_RE.search(line)
        if not pm:
            fail(f"alias {alias_path} (src/ground_files_table.c:{lineno}) has no &gFile pointer on its line")
        keep_sym = pm.group(1)
        if keep_sym not in symbols:
            fail(f"alias {alias_path} (src/ground_files_table.c:{lineno}) points at {keep_sym}, "
                 f"which has no INCBIN in src/{MAP_FILES_GLOB}")
        keep_path = symbols[keep_sym]
        alias_file = ROOT / alias_path
        keep_file = ROOT / keep_path
        if not alias_file.is_file():
            fail(f"alias {alias_path} (src/ground_files_table.c:{lineno}) does not exist. "
                 f"The alias file changed or was removed: restore its own INCBIN for {alias_path} "
                 f"in src/{MAP_FILES_GLOB} and point its table entry back at it.")
        if not keep_file.is_file():
            fail(f"kept file {keep_path} of {keep_sym} (for alias {alias_path}) does not exist")
        if alias_file.read_bytes() != keep_file.read_bytes():
            fail(f"alias {alias_path} (src/ground_files_table.c:{lineno}) is no longer byte-identical "
                 f"to {keep_path} ({keep_sym}). The alias file changed: restore its own INCBIN for "
                 f"{alias_path} in src/{MAP_FILES_GLOB} and point its table entry back at it.")
        count += 1
    print(f"ground file aliases OK ({count} aliases)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
