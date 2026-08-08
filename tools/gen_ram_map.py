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

# Fallbacks if the map is missing expected markers (matching-era snapshot).
FALLBACK_FREE_EWRAM_TOP = 0x0203D0C8  # ewram_init_end
FALLBACK_FREE_IWRAM_TOP = 0x03004108  # gUnknown_3004000 / end of iwram_lib
FREE_IWRAM_BOTTOM = 0x03007F00  # sp_sys
# The user stack grows down from sp_sys into the free band. Dungeon floor
# generation peaks around 8 KiB of frames, so allocations must stop here.
STACK_RESERVE_TOP = 0x03005F00

SYM_RE = re.compile(r"^\s+(0x0[23][0-9a-fA-F]{6})\s+([A-Za-z_][A-Za-z0-9_]*)\s*$")
OBJ_RE = re.compile(
    r"\s+(ewram_data|ewram_lib|ewram_init|iwram_data|iwram_init)\s+"
    r"(0x0[23][0-9a-fA-F]+)\s+(0x[0-9a-fA-F]+)\s+(\S+)"
)
MARKER_RE = re.compile(
    r"^\s+(0x0[23][0-9a-fA-F]+)\s+([A-Za-z_][A-Za-z0-9_]*)\s*(?:=\s*\.)?\s*$"
)


def parse_marker(text: str, name: str) -> int | None:
    for line in text.splitlines():
        m = MARKER_RE.match(line)
        if m and m.group(2) == name:
            return int(m.group(1), 16)
    return None


def parse_nm_absolutes(elf: Path) -> dict[str, int]:
    """Absolute .set symbols often omit from the map; nm still lists them."""
    if not elf.is_file():
        return {}
    import subprocess

    try:
        out = subprocess.check_output(
            ["arm-none-eabi-nm", str(elf)], text=True, stderr=subprocess.DEVNULL
        )
    except (OSError, subprocess.CalledProcessError):
        return {}
    found: dict[str, int] = {}
    for line in out.splitlines():
        parts = line.split()
        if len(parts) >= 3 and parts[1] in ("A", "a"):
            try:
                found[parts[2]] = int(parts[0], 16)
            except ValueError:
                pass
    return found


def parse_map(path: Path) -> tuple[list[tuple[int, str]], list[tuple[int, str]], list[tuple], int, int, int]:
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

    abs_syms = parse_nm_absolutes(path.with_suffix(".elf"))
    free_ewram_top = (
        parse_marker(text, "ewram_init_end")
        or abs_syms.get("FreeEwramSpaceTop")
        or FALLBACK_FREE_EWRAM_TOP
    )
    free_iwram_top = (
        parse_marker(text, "gUnknown_3004000")
        or abs_syms.get("FreeRamSpaceTop")
        or FALLBACK_FREE_IWRAM_TOP
    )
    used_iwram_top = abs_syms.get("UsedFreeRamSpaceTop") or free_iwram_top
    return ew, iw, objs, free_ewram_top, free_iwram_top, used_iwram_top


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


def print_report(
    ew, iw, objs, free_ewram_top: int, free_iwram_top: int, used_iwram_top: int
) -> None:
    free_ewram_bytes = EWRAM_END - free_ewram_top
    free_iwram_bytes = STACK_RESERVE_TOP - used_iwram_top
    print("=== PMD Red RAM occupancy (from linker map) ===")
    print(
        f"EWRAM used static+init: 0x{EWRAM_START:08X}–0x{free_ewram_top:08X} "
        f"({free_ewram_top - EWRAM_START} bytes)"
    )
    print(
        f"EWRAM free pool:        0x{free_ewram_top:08X}–0x{EWRAM_END:08X} "
        f"({free_ewram_bytes} bytes, ~{free_ewram_bytes/1024:.1f} KiB)"
    )
    print(
        f"IWRAM used+lib:         0x{IWRAM_START:08X}–0x{free_iwram_top:08X} "
        f"({free_iwram_top - IWRAM_START} bytes)"
    )
    print(
        f"IWRAM custom used thru: 0x{used_iwram_top:08X} "
        f"(FreeRamSpaceTop was 0x{free_iwram_top:08X})"
    )
    print(
        f"IWRAM free remaining:   0x{used_iwram_top:08X}–0x{STACK_RESERVE_TOP:08X} "
        f"({free_iwram_bytes} bytes, ~{free_iwram_bytes/1024:.1f} KiB)"
    )
    print(
        f"IWRAM stack scratch:    0x{STACK_RESERVE_TOP:08X}–0x{FREE_IWRAM_BOTTOM:08X} "
        "(deep stack, e.g. dungeon floor generation — do not allocate)"
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
    ew, iw, objs, free_ewram_top, free_iwram_top, used_iwram_top = parse_map(args.map)
    print_report(ew, iw, objs, free_ewram_top, free_iwram_top, used_iwram_top)
    if args.emit_asm:
        out = Path("asm")
        out.mkdir(parents=True, exist_ok=True)
        emit_pool(out / "ram_map_ewram_pool.inc", "ewram", ew, free_ewram_top)
        emit_pool(out / "ram_map_iwram_pool.inc", "iwram", iw, free_iwram_top)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
