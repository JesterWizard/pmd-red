#!/usr/bin/env python3
"""Scan baserom Thumb LDR literal pools for IWRAM / EWRAM / Flash-bus addresses.

Optional cross-check against the linker-backed maps in asm/ram_map_*.s.
Prefer tools/gen_ram_map.py (pmd_red.map) as the source of truth for this decomp.

Usage:
  python3 tools/scan_ram_literals.py [--rom baserom.gba]
"""

from __future__ import annotations

import argparse
import struct
import sys
from collections import defaultdict
from pathlib import Path

ROM_BASE = 0x08000000


def in_iwram(a: int) -> bool:
    return 0x03000000 <= a <= 0x03007FFF


def in_ewram(a: int) -> bool:
    return 0x02000000 <= a <= 0x0203FFFF


def in_sram(a: int) -> bool:
    return 0x0E000000 <= a <= 0x0E00FFFF


def scan_pools(rom: bytes) -> dict[str, dict[int, list[int]]]:
    hits: dict[str, dict[int, list[int]]] = {
        "iwram": defaultdict(list),
        "ewram": defaultdict(list),
        "sram": defaultdict(list),
    }
    size = len(rom)
    for off in range(0, size - 2, 2):
        hw = rom[off] | (rom[off + 1] << 8)
        if (hw & 0xF800) != 0x4800:
            continue
        imm = hw & 0xFF
        pc = (ROM_BASE + off + 4) & ~2
        pool_off = pc + imm * 4 - ROM_BASE
        if pool_off < 0 or pool_off + 4 > size:
            continue
        word = struct.unpack_from("<I", rom, pool_off)[0]
        if in_iwram(word):
            hits["iwram"][word].append(off)
        elif in_ewram(word):
            hits["ewram"][word].append(off)
        elif in_sram(word):
            hits["sram"][word].append(off)
    return hits


def clusters(addrs: list[int], merge_gap: int) -> list[tuple[int, int]]:
    if not addrs:
        return []
    out: list[tuple[int, int]] = []
    start = end = addrs[0]
    for a in addrs[1:]:
        if a - end <= merge_gap:
            end = a
        else:
            out.append((start, end))
            start = end = a
    out.append((start, end))
    return out


def print_report(hits: dict[str, dict[int, list[int]]]) -> None:
    for region, merge in (("iwram", 0x40), ("ewram", 0x100), ("sram", 0x100)):
        d = hits[region]
        aligned = sorted(a for a in d if a % 4 == 0)
        print(f"\n=== {region.upper()} pool-backed aligned: {len(aligned)} ===")
        if not aligned:
            continue
        print(f"range 0x{min(aligned):08X}–0x{max(aligned):08X}")
        freq = sorted(((a, len(v)) for a, v in d.items() if a % 4 == 0), key=lambda x: -x[1])
        print("top 20:")
        for a, c in freq[:20]:
            print(f"  0x{a:08X} hits={c:4d}")
        print(f"clusters (merge gap < {merge:#x}):")
        for s, e in clusters(aligned, merge):
            n = sum(1 for a in aligned if s <= a <= e)
            h = sum(len(d[a]) for a in aligned if s <= a <= e)
            print(f"  0x{s:08X}–0x{e:08X} unique={n:3d} hits={h:5d} span={e - s + 4:#x}")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--rom", type=Path, default=Path("baserom.gba"))
    args = ap.parse_args()
    if not args.rom.is_file():
        print(f"missing ROM: {args.rom}", file=sys.stderr)
        return 1
    rom = args.rom.read_bytes()
    print_report(scan_pools(rom))
    print(
        "\nNote: for free-space decisions use asm/ram_map_*.s / "
        "python3 tools/gen_ram_map.py (linker map is authoritative)."
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
