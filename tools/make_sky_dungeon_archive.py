#!/usr/bin/env python3
"""Explorers of Sky demake: the sky build's dungeon file archive.

    tools/make_sky_dungeon_archive.py IN.s OUT.s [--report]

IN.s is data/dungeon_sbin.s after the C preprocessor and preproc (so every
file is plain .byte/.2byte/.4byte/.align/.incbin data under labels). OUT.s is
the same archive without the files the sky build never opens:

  b##fon b##cel b##cex b##pal b##canm b##emap#   Red's dungeon tilesets: every
                                                 dungeon and dungeon-type
                                                 ground map draws EoS's Beach
                                                 Cave (src/sky_dungeon_tileset.c)
  talk## talkp##                                 Red's dungeon talk lines: the
                                                 sky build speaks EoS's
                                                 (src/sky_dungeon_talk.c)

Their entries leave the pksdir0 table (still sorted, so OpenFile's binary
search works; the entry count is rewritten) and every labelled block that only
those entries reached is dropped: a block is dropped when the full table
reaches it and the reduced table does not. Blocks nothing references (padding,
data reached by falling through from the label before) are kept. Each kept
block keeps its original address modulo 4, so .align and word reads inside the
archive behave as in Red's layout.

The vanilla build assembles data/dungeon_sbin.s unchanged (byte-identical).
"""
from __future__ import annotations

import os
import re
import sys

DROP_NAME = re.compile(r"^(b\d\d(fon|cel|cex|pal|canm|emap\d)|talkp?\d+)$")
ROOT_LABELS = ["gDungeonFileArchive"]
LABEL_RE = re.compile(r"^([A-Za-z_][A-Za-z_0-9]*):\s*(@.*)?$")
GLOBAL_RE = re.compile(r"^\s*\.global\s+([A-Za-z_][A-Za-z_0-9]*)")
WORD_RE = re.compile(r"^\s*\.4byte\s+([A-Za-z_][A-Za-z_0-9]*)\s*(@.*)?$")


class Block:
    def __init__(self, label: str | None):
        self.label = label
        self.head: list[str] = []   # .global / comments before the label
        self.lines: list[str] = []  # label line and data
        self.refs: list[str] = []
        self.addr = 0
        self.size = 0


def items(arg: str) -> int:
    arg = arg.split("@")[0].strip()
    return len([a for a in arg.split(",") if a.strip()]) if arg else 0


def parse(lines: list[str]) -> list[Block]:
    blocks = [Block(None)]
    pending: list[str] = []
    for line in lines:
        m = LABEL_RE.match(line)
        if m:
            b = Block(m.group(1))
            b.head = pending
            pending = []
            b.lines.append(line)
            blocks.append(b)
            continue
        if GLOBAL_RE.match(line) or not line.strip() or line.lstrip().startswith(("#", "@")):
            pending.append(line)
            continue
        cur = blocks[-1]
        cur.lines += pending
        pending = []
        cur.lines.append(line)
        m = WORD_RE.match(line)
        if m:
            cur.refs.append(m.group(1))
    blocks[-1].lines += pending
    return blocks


def layout(blocks: list[Block]) -> None:
    """Original address (from 0) and size of every block."""
    pos = 0
    for b in blocks:
        b.addr = pos
        for line in b.lines:
            s = line.split("@")[0].strip()
            if s.startswith(".byte"):
                pos += items(s[5:])
            elif s.startswith(".2byte"):
                pos += 2 * items(s[6:])
            elif s.startswith(".4byte"):
                pos += 4 * items(s[6:])
            elif s.startswith(".align"):
                n = 1 << int(s[6:].split(",")[0])
                pos = (pos + n - 1) // n * n
            elif s.startswith(".incbin"):
                pos += os.path.getsize(re.search(r'"([^"]+)"', s).group(1))
            elif s.startswith((".section", ".global")) or not s or s.startswith("#") or LABEL_RE.match(s):
                pass
            else:
                raise SystemExit(f"make_sky_dungeon_archive: unexpected line: {line}")
        b.size = pos - b.addr


def block_bytes(b: Block) -> bytes:
    out = bytearray()
    for line in b.lines:
        s = line.split("@")[0].strip()
        if s.startswith(".byte"):
            out += bytes(int(x, 0) for x in s[5:].split(",") if x.strip())
    return bytes(out)


def reach(by_label: dict[str, Block], roots: list[str]) -> set[str]:
    seen: set[str] = set()
    todo = list(roots)
    while todo:
        name = todo.pop()
        if name in seen or name not in by_label:
            continue
        seen.add(name)
        todo += by_label[name].refs
    return seen


def main() -> int:
    src, dst = sys.argv[1], sys.argv[2]
    report = "--report" in sys.argv
    blocks = parse(open(src, encoding="latin-1").read().split("\n"))
    layout(blocks)
    by_label = {b.label: b for b in blocks if b.label}

    archive = by_label["gDungeonFileArchive"]
    table = by_label["StartOfDungeonTable"]
    if len(table.refs) % 2:
        raise SystemExit("make_sky_dungeon_archive: odd pksdir0 table")
    entries = list(zip(table.refs[0::2], table.refs[1::2]))
    names = {n: block_bytes(by_label[n]).split(b"\0")[0].decode("ascii") for n, _ in entries}
    keep = [(n, d) for n, d in entries if not DROP_NAME.match(names[n])]
    dropped = [names[n] for n, d in entries if DROP_NAME.match(names[n])]
    sorted_names = [names[n] for n, _ in keep]
    if sorted_names != sorted(sorted_names, key=lambda s: s.encode()):
        raise SystemExit("make_sky_dungeon_archive: table not sorted")

    full = reach(by_label, ROOT_LABELS)
    # Rewrite the table (one .4byte pair per kept entry) and the count.
    word_lines = [i for i, line in enumerate(table.lines) if WORD_RE.match(line)]
    new_lines = table.lines[:word_lines[0]]
    for n, d in keep:
        new_lines += [f".4byte {n}", f".4byte {d}"]
    new_lines += table.lines[word_lines[-1] + 1:]
    table.lines = new_lines
    table.refs = [r for pair in keep for r in pair]
    count_old = len(entries).to_bytes(4, "little")
    for i, line in enumerate(archive.lines):
        s = line.split("@")[0].strip()
        if s.startswith(".byte") and bytes(int(x, 0) for x in s[5:].split(",") if x.strip()) == count_old:
            archive.lines[i] = ".byte " + ", ".join(f"0x{c:02x}" for c in len(keep).to_bytes(4, "little"))
            break
    else:
        raise SystemExit("make_sky_dungeon_archive: entry count not found")
    reduced = reach(by_label, ROOT_LABELS)
    drop = full - reduced

    out: list[str] = []
    gap = False
    saved = 0
    for b in blocks:
        if b.label in drop:
            gap = True
            saved += b.size
            continue
        if gap:
            # Back to the block's original address modulo 4.
            out.append(".balign 4, 0")
            if b.addr % 4:
                out.append(f".skip {b.addr % 4}, 0")
            gap = False
        out += b.head + b.lines
    with open(dst, "w", encoding="latin-1") as f:
        f.write("\n".join(out) + "\n")
    if report:
        print(f"entries {len(entries)} -> {len(keep)} ({len(dropped)} dropped), "
              f"blocks dropped {len(drop)}, {saved} bytes")
    return 0


if __name__ == "__main__":
    sys.exit(main())
