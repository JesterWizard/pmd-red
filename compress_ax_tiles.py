#!/usr/bin/env python3
"""Build GMLZ+LZ77 copies of AX monster .4bpp tiles for the hack ROM.

Incremental runs only re-compress tiles whose .lz is missing or older than the
.4bpp source. Pass --stamp PATH so make can skip rebuilding monster_gfx when
nothing changed (stamp mtime is only refreshed when a .lz is rewritten).
"""

from pathlib import Path
import argparse
import subprocess

ROOT = Path(__file__).resolve().parent
AX_MON_DIR = ROOT / "graphics" / "ax" / "mon"
GBAGFX = ROOT / "tools" / "gbagfx" / "gbagfx"
GROUND_LZ_MAGIC = b"GMLZ"


def lz77_decompress(data: bytes) -> bytes:
    if len(data) < 4 or data[0] != 0x10:
        raise ValueError("compressed data does not have an LZ77 header")

    output_size = data[1] | (data[2] << 8) | (data[3] << 16)
    output = bytearray()
    source_pos = 4

    while len(output) < output_size:
        if source_pos >= len(data):
            raise ValueError("truncated LZ77 flag byte")
        flags = data[source_pos]
        source_pos += 1

        for bit in range(7, -1, -1):
            if len(output) >= output_size:
                break
            if flags & (1 << bit):
                if source_pos + 1 >= len(data):
                    raise ValueError("truncated LZ77 back-reference")
                first = data[source_pos]
                second = data[source_pos + 1]
                source_pos += 2
                length = (first >> 4) + 3
                distance = ((first & 0xF) << 8) | second
                start = len(output) - distance - 1
                if start < 0:
                    raise ValueError("invalid LZ77 back-reference")
                for i in range(length):
                    output.append(output[start + i])
            else:
                if source_pos >= len(data):
                    raise ValueError("truncated LZ77 literal")
                output.append(data[source_pos])
                source_pos += 1

    return bytes(output[:output_size])


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--force", action="store_true")
    parser.add_argument(
        "--stamp",
        type=Path,
        help="touch this file only when a .lz was written (or stamp is missing)",
    )
    parser.add_argument(
        "--verify-sample",
        type=int,
        default=32,
        help="round-trip-check this many newly built files (0 = all built, -1 = none)",
    )
    parser.add_argument(
        "--quiet",
        action="store_true",
        help="print nothing when zero files were rebuilt",
    )
    args = parser.parse_args()

    if not GBAGFX.exists():
        raise SystemExit(f"{GBAGFX} is missing; run `make -C tools/gbagfx` first")

    raw_files = sorted(AX_MON_DIR.rglob("*.4bpp"))
    if not raw_files:
        raise SystemExit(
            f"no .4bpp tiles under {AX_MON_DIR}; build graphics first "
            f"(make will generate them from PNGs)"
        )

    raw_bytes = 0
    compressed_bytes = 0
    built = 0
    verified = 0

    for raw_path in raw_files:
        compressed_path = Path(str(raw_path) + ".lz")
        raw_stat = raw_path.stat()
        needs_build = args.force or not compressed_path.exists()
        if not needs_build:
            needs_build = compressed_path.stat().st_mtime < raw_stat.st_mtime

        if needs_build:
            subprocess.run(
                [str(GBAGFX), str(raw_path), str(compressed_path)],
                check=True,
            )
            lz_data = compressed_path.read_bytes()
            if lz_data.startswith(GROUND_LZ_MAGIC):
                compressed_data = lz_data
            elif lz_data.startswith(b"\x10"):
                compressed_data = GROUND_LZ_MAGIC + lz_data
                compressed_path.write_bytes(compressed_data)
            else:
                raise SystemExit(f"gbagfx did not emit LZ77 for {raw_path}")
            built += 1

            if args.verify_sample >= 0 and (
                args.verify_sample == 0 or verified < args.verify_sample
            ):
                raw_data = raw_path.read_bytes()
                if lz77_decompress(compressed_data[len(GROUND_LZ_MAGIC) :]) != raw_data:
                    raise SystemExit(f"LZ77 round-trip failed for {raw_path}")
                verified += 1
                raw_bytes += len(raw_data)
                compressed_bytes += len(compressed_data)
            else:
                raw_bytes += raw_stat.st_size
                compressed_bytes += compressed_path.stat().st_size
        else:
            # Cache hit: sizes only (no full-file reads).
            raw_bytes += raw_stat.st_size
            compressed_bytes += compressed_path.stat().st_size

    if args.stamp is not None:
        if built > 0 or not args.stamp.exists():
            args.stamp.parent.mkdir(parents=True, exist_ok=True)
            args.stamp.touch()

    if built > 0 or not args.quiet:
        saved = raw_bytes - compressed_bytes
        ratio = compressed_bytes / raw_bytes if raw_bytes else 0
        print(
            f"ax tiles: {len(raw_files)} files "
            f"({built} rebuilt): {raw_bytes} -> {compressed_bytes} bytes "
            f"({ratio:.1%}, saved {saved} bytes)"
        )


if __name__ == "__main__":
    main()
