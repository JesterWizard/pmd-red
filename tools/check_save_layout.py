#!/usr/bin/env python3
"""Verify bit-packed save chunks fit their fixed buffers.

Fails if recruited-Pokémon serialization needs more bytes than
RECRUITED_POKEMON_SAVE_SIZE, or if unk448 cannot hold the sum of chunks.

Run: python3 tools/check_save_layout.py
"""
from __future__ import annotations

import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def read_define(path: Path, name: str, _stack: set[str] | None = None) -> int:
    if _stack is None:
        _stack = set()
    if name in _stack:
        raise SystemExit(f"cyclic #define while resolving {name}")
    _stack.add(name)

    text = path.read_text(encoding="utf-8", errors="replace")
    m = re.search(rf"#define\s+{re.escape(name)}\s+(.+)", text)
    if not m:
        raise SystemExit(f"missing #define {name} in {path}")
    expr = m.group(1).split("/*")[0].strip()
    if re.fullmatch(r"0x[0-9A-Fa-f]+|\d+", expr):
        return int(expr, 0)
    if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", expr):
        return read_define(path, expr, _stack)
    if "*" in expr:
        parts = [p.strip() for p in expr.strip("()").split("*")]
        prod = 1
        for p in parts:
            if re.fullmatch(r"0x[0-9A-Fa-f]+|\d+", p):
                prod *= int(p, 0)
            else:
                prod *= read_define(path, p, _stack)
        return prod
    raise SystemExit(f"cannot parse {name}={expr!r} in {path}")


def unk448_size() -> int:
    text = (ROOT / "include/save.h").read_text(encoding="utf-8", errors="replace")
    m = re.search(r"u8\s+unk448\[(0x[0-9A-Fa-f]+|\d+)\]", text)
    if not m:
        raise SystemExit("missing unk448[] size in include/save.h")
    return int(m.group(1), 0)


def main() -> int:
    iq_h = ROOT / "include/structs/str_iq_skill_flags.h"
    poke_h = ROOT / "include/pokemon_3.h"
    item_h = ROOT / "include/constants/item.h"
    ach_h = ROOT / "include/achievements.h"
    mon_h = ROOT / "include/constants/monster.h"

    iq_bits = read_define(iq_h, "IQ_SKILL_FLAGS_BIT_COUNT")
    recruited_cap = read_define(poke_h, "RECRUITED_POKEMON_SAVE_SIZE")
    inv_size = read_define(item_h, "TEAM_INVENTORY_SAVE_SIZE")
    ach_size = read_define(ach_h, "ACHIEVEMENTS_SAVE_SIZE")
    cafe_h = ROOT / "include/spinda_cafe.h"
    cafe_size = read_define(cafe_h, "SPINDA_CAFE_SAVE_SIZE")
    num_monsters = read_define(mon_h, "NUM_MONSTERS")

    # WritePoke1Bits fixed fields (excluding IQSkills): see src/pokemon_3.c
    # level7 + species9 + dung14 + unkC 7*2 + IQ10 + HP10 + offense32 + exp24
    # + tactic4 + held15 + moves (4*20) + name80
    bits_without_iq = (
        7 + 9 + 14 + 7 + 7 + 10 + 10 + 32 + 24 + 4 + 15 + 80 + 80
    )
    per = bits_without_iq + iq_bits
    max_team = 4
    # 413 pokemon + 4 team (1 exists-bit + poke) + 6*u16 + leader u16
    total_bits = num_monsters * per + max_team * (1 + per) + 6 * 16 + 16
    needed = (total_bits + 7) // 8

    chunks = [
        ("RECRUITED_POKEMON_SAVE_SIZE", recruited_cap),
        ("poke2 (150*4)", 150 * 4),
        ("TEAM_INVENTORY_SAVE_SIZE", inv_size),
        ("rescue", 0x10),
        ("friend areas", 0x8),
        ("adventure", 0x100),
        ("exclusive/unk", 0x594),
        ("mail", 0x221),
        ("ACHIEVEMENTS_SAVE_SIZE", ach_size),
        ("SPINDA_CAFE_SAVE_SIZE", cafe_size),
    ]
    blob = sum(c[1] for c in chunks)
    unk448 = unk448_size()

    print("=== save layout check ===")
    print(f"IQ flag bits:           {iq_bits}")
    print(f"NUM_MONSTERS:           {num_monsters}")
    print(f"bits/pokemon:           {per}")
    print(f"recruited needed:       {needed:#x} ({needed} bytes)")
    print(f"RECRUITED_* capacity:   {recruited_cap:#x} ({recruited_cap} bytes)")
    print(f"unk448 blob sum:        {blob:#x}")
    print(f"unk448[] size:          {unk448:#x}")

    rc = 0
    if needed > recruited_cap:
        print(
            f"ERROR: recruited Pokémon save needs {needed:#x} but "
            f"RECRUITED_POKEMON_SAVE_SIZE is {recruited_cap:#x} "
            f"(overflow {needed - recruited_cap} bytes). "
            "Grow the constant and unk448[].",
            file=sys.stderr,
        )
        rc = 1
    else:
        print(f"recruited headroom:     {recruited_cap - needed:#x}")

    if blob > unk448:
        print(
            f"ERROR: save chunks sum to {blob:#x} but unk448[] is only "
            f"{unk448:#x} (short {blob - unk448} bytes).",
            file=sys.stderr,
        )
        rc = 1
    else:
        print(f"unk448 headroom:        {unk448 - blob:#x}")

    if rc == 0:
        print("OK")
    return rc


if __name__ == "__main__":
    sys.exit(main())
