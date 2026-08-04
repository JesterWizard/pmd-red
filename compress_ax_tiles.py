#!/usr/bin/env python3
"""Build GMLZ+LZ77 copies of AX monster .4bpp tiles for the hack ROM."""

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
        "--verify-sample",
        type=int,
        default=32,
        help="round-trip-check this many files (0 = all, slow)",
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

    for i, raw_path in enumerate(raw_files):
        compressed_path = Path(str(raw_path) + ".lz")
        if args.force or not compressed_path.exists() or (
            compressed_path.stat().st_mtime < raw_path.stat().st_mtime
        ):
            subprocess.run(
                [str(GBAGFX), str(raw_path), str(compressed_path)],
                check=True,
            )
            lz_data = compressed_path.read_bytes()
            if lz_data.startswith(GROUND_LZ_MAGIC):
                pass
            elif lz_data.startswith(b"\x10"):
                compressed_path.write_bytes(GROUND_LZ_MAGIC + lz_data)
            else:
                raise SystemExit(f"gbagfx did not emit LZ77 for {raw_path}")
            built += 1

        raw_data = raw_path.read_bytes()
        compressed_data = compressed_path.read_bytes()
        if not compressed_data.startswith(GROUND_LZ_MAGIC):
            raise SystemExit(f"{compressed_path} missing GMLZ; re-run with --force")

        if args.verify_sample == 0 or i < args.verify_sample:
            if lz77_decompress(compressed_data[len(GROUND_LZ_MAGIC) :]) != raw_data:
                raise SystemExit(f"LZ77 round-trip failed for {raw_path}")

        raw_bytes += len(raw_data)
        compressed_bytes += len(compressed_data)

    saved = raw_bytes - compressed_bytes
    ratio = compressed_bytes / raw_bytes if raw_bytes else 0
    print(
        f"ax tiles: {len(raw_files)} files "
        f"({built} rebuilt): {raw_bytes} -> {compressed_bytes} bytes "
        f"({ratio:.1%}, saved {saved} bytes)"
    )


if __name__ == "__main__":
    main()
