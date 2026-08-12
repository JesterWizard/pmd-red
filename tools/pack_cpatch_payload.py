#!/usr/bin/env python3
"""Pack pmd_red.gba into RescueTemple's shipped C Patch feature bundle (.rcp).

End users never see pmd_red.gba — RescueTemple embeds this file and applies it
to a retail baserom.gba on Install/Build.
"""
from __future__ import annotations

import argparse
import hashlib
import re
import struct
import sys
import zlib
from pathlib import Path

MAGIC = b"RCP1"
ROM_VA = 0x08000000


def parse_map(map_text: str) -> tuple[int, int]:
    symbol = re.search(r"0x([0-9a-fA-F]+)\s+gRuntimeConfigRom\b", map_text)
    section = re.search(
        r"\.runtime_config\s+0x([0-9a-fA-F]+)\s+0x([0-9a-fA-F]+)",
        map_text,
    )
    if not symbol:
        raise SystemExit("gRuntimeConfigRom not found in map")
    if not section:
        raise SystemExit(".runtime_config section not found in map")
    offset = int(symbol.group(1), 16) - ROM_VA
    capacity = int(section.group(2), 16)
    if offset < 0 or capacity <= 0:
        raise SystemExit(f"invalid config region offset={offset:#x} capacity={capacity:#x}")
    return offset, capacity


def pack(baserom: Path, feature_rom: Path, map_path: Path, output: Path) -> None:
    base = baserom.read_bytes()
    feature = feature_rom.read_bytes()
    offset, capacity = parse_map(map_path.read_text(errors="replace"))
    if offset + capacity > len(feature):
        raise SystemExit(
            f"config region 0x{offset:X}+{capacity} exceeds feature ROM ({len(feature)} bytes)"
        )

    compressed = zlib.compress(feature, level=6)
    header = struct.pack(
        "<4sI20sIII",
        MAGIC,
        1,  # version
        hashlib.sha1(base).digest(),
        offset,
        capacity,
        len(feature),
    )
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(header + compressed)
    print(
        f"Wrote {output} ({output.stat().st_size} bytes) "
        f"config@0x{offset:X}/{capacity} feature={len(feature)} compressed={len(compressed)}"
    )


def main() -> None:
    root = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--baserom",
        type=Path,
        default=root / "baserom.gba",
        help="Retail US 1.0 baserom (SHA-1 recorded in bundle)",
    )
    parser.add_argument(
        "--feature-rom",
        type=Path,
        default=root / "pmd_red.gba",
        help="Built decomp ROM providing C Patch feature code",
    )
    parser.add_argument(
        "--map",
        type=Path,
        default=root / "pmd_red.map",
        help="Linker map with gRuntimeConfigRom",
    )
    parser.add_argument(
        "-o",
        "--output",
        type=Path,
        default=root
        / "RescueEditor/src/RescueEditor.Core/Resources/CPatchFeaturePayload.rcp",
    )
    args = parser.parse_args()
    for path in (args.baserom, args.feature_rom, args.map):
        if not path.is_file():
            raise SystemExit(f"missing {path}")
    pack(args.baserom, args.feature_rom, args.map, args.output)


if __name__ == "__main__":
    main()
