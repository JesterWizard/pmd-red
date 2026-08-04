#!/usr/bin/env python3
"""Generate / print PMD Red EWRAM + IWRAM occupancy from pmd_red.map.

Unlike binary-only hacks, this decomp already names RAM via the linker. Prefer
the map over Thumb LDR pool guesses. Optional: tools/scan_ram_literals.py for
a baserom cross-check.

Usage:
  python3 tools/gen_ram_map.py [--map pmd_red.map] [--emit-asm]
"""

from __future__ import annotations

import argparse
import re
import sys
from pathlib import Path

EWRAM_START = 0x02000000
EWRAM_END = 0x02040000
IWRAM_START = 0x03000000
IWRAM_END = 0x03008000

# Proven free bands from matching pmd_red.map + crt0.s stack tops.
FREE_EWRAM_TOP = 0x0203B368  # ewram_init_end
FREE_EWRAM_BOTTOM = EWRAM_END
FREE_IWRAM_TOP = 0x03004108  # gUnknown_3004000 / end of iwram_lib
FREE_IWRAM_BOTTOM = 0x03007F00  # sp_sys

SYM_RE = re.compile(r"^\s+(0x0[23][0-9a-fA-F]{6})\s+([A-Za-z_][A-Za-z0-9_]*)\s*$")
OBJ_RE = re.compile(
    r"\s+(ewram_data|ewram_lib|ewram_init|iwram_data|iwram_init)\s+"
    r"(0x0[23][0-9a-fA-F]+)\s+(0x[0-9a-fA-F]+)\s+(\S+)"
)


def parse_map(path: Path) -> tuple[list[tuple[int, str]], list[tuple[int, str]], list[tuple]]:
    text = path.read_text(errors="replace")
    ew: list[tuple[int, str]] = []
    iw: list[tuple[int, str]] = []
    seen: set[str] = set()
    for line in text.splitlines():
        m = SYM_RE.match(line)
        if not m:
            continue
        addr = int(m.group(1), 16)
        name = m.group(2)
        if name in seen or name.endswith("_start") or name.endswith("_end") or name == "end":
            continue
        seen.add(name)
        if EWRAM_START <= addr < EWRAM_END:
            ew.append((addr, name))
        elif IWRAM_START <= addr < IWRAM_END:
            iw.append((addr, name))
    ew.sort()
    iw.sort()

    objs: list[tuple] = []
    for line in text.splitlines():
        m = OBJ_RE.match(line)
        if m:
            kind, addr_s, size_s, obj = m.groups()
            objs.append((kind, int(addr_s, 16), int(size_s, 16), obj))
    return ew, iw, objs


def emit_pool(path: Path, region: str, syms: list[tuple[int, str]], free_top: int) -> None:
    lines = [
        "@ =============================================================================",
        "@ AUTO-GENERATED — do not edit by hand.",
        "@ python3 tools/gen_ram_map.py --emit-asm",
        f"@ Named {region.upper()} linker globals in the used band (see ram_map_{region}.s).",
        "@ Documentation only (comments) — symbols already exist in the decomp link.",
        "@ =============================================================================",
        "",
    ]
    count = 0
    for addr, name in syms:
        if addr >= free_top:
            continue
        lines.append(f"@ {name} = 0x{addr:08X}")
        count += 1
    path.write_text("\n".join(lines) + "\n")
    print(f"Wrote {path} ({count} symbols)", file=sys.stderr)


def print_report(ew, iw, objs) -> None:
    print("=== PMD Red RAM occupancy (from linker map) ===")
    print(
        f"EWRAM used static+init: 0x{EWRAM_START:08X}–0x{FREE_EWRAM_TOP:08X} "
        f"({FREE_EWRAM_TOP - EWRAM_START} bytes)"
    )
    print(
        f"EWRAM free pool:        0x{FREE_EWRAM_TOP:08X}–0x{FREE_EWRAM_BOTTOM:08X} "
        f"({FREE_EWRAM_BOTTOM - FREE_EWRAM_TOP} bytes, ~{(FREE_EWRAM_BOTTOM - FREE_EWRAM_TOP)/1024:.1f} KiB)"
    )
    print(
        f"IWRAM used+lib:         0x{IWRAM_START:08X}–0x{FREE_IWRAM_TOP:08X} "
        f"({FREE_IWRAM_TOP - IWRAM_START} bytes)"
    )
    print(
        f"IWRAM free pool:        0x{FREE_IWRAM_TOP:08X}–0x{FREE_IWRAM_BOTTOM:08X} "
        f"({FREE_IWRAM_BOTTOM - FREE_IWRAM_TOP} bytes, ~{(FREE_IWRAM_BOTTOM - FREE_IWRAM_TOP)/1024:.1f} KiB)"
    )
    print("IWRAM stacks/fixed:     0x03007F00–0x03008000 (sys/IRQ stacks + INTR words)")
    print("Flash (save):           0x0E000000+ FLASH1M — fully used by save pak (not free)")

    print("\n=== Top EWRAM objects ===")
    for kind, addr, size, obj in sorted(
        (o for o in objs if o[0].startswith("ewram")), key=lambda x: -x[2]
    )[:12]:
        print(f"  {size:7d}  0x{addr:08X}  {kind:12s}  {obj}")

    print("\n=== IWRAM objects ===")
    for kind, addr, size, obj in sorted(
        (o for o in objs if o[0].startswith("iwram")), key=lambda x: x[1]
    ):
        print(f"  {size:5d}  0x{addr:08X}–0x{addr+size:08X}  {kind:12s}  {obj}")

    print(f"\nNamed EWRAM globals: {len(ew)}  |  Named IWRAM globals: {len(iw)}")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--map", type=Path, default=Path("pmd_red.map"))
    ap.add_argument(
        "--emit-asm",
        action="store_true",
        help="Write inventory fragments under asm/ (included by ram_map_*.s)",
    )
    args = ap.parse_args()
    if not args.map.is_file():
        print(f"missing map: {args.map} (build the ROM first)", file=sys.stderr)
        return 1
    ew, iw, objs = parse_map(args.map)
    print_report(ew, iw, objs)
    if args.emit_asm:
        out = Path("asm")
        out.mkdir(parents=True, exist_ok=True)
        emit_pool(out / "ram_map_ewram_pool.inc", "ewram", ew, FREE_EWRAM_TOP)
        emit_pool(out / "ram_map_iwram_pool.inc", "iwram", iw, FREE_IWRAM_TOP)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
