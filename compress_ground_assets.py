#!/usr/bin/env python3
"""Build and verify LZ77 copies of the ground-map assets."""

from pathlib import Path
import argparse
import subprocess


ROOT = Path(__file__).resolve().parent
RAW_DIR = ROOT / "data" / "map_bg"
COMPRESSED_DIR = ROOT / "data" / "map_bg_lz"
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

    return bytes(output)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--force",
        action="store_true",
        help="recompress assets even when the output is newer than the source",
    )
    args = parser.parse_args()

    if not GBAGFX.exists():
        raise SystemExit(
            f"{GBAGFX} is missing; run `make -C tools/gbagfx` first"
        )

    raw_files = sorted(path for path in RAW_DIR.iterdir() if path.is_file())
    COMPRESSED_DIR.mkdir(parents=True, exist_ok=True)
    raw_bytes = 0
    compressed_bytes = 0

    for raw_path in raw_files:
        compressed_path = COMPRESSED_DIR / f"{raw_path.name}.lz"
        if args.force or not compressed_path.exists() or (
            compressed_path.stat().st_mtime < raw_path.stat().st_mtime
        ):
            subprocess.run(
                [str(GBAGFX), str(raw_path), str(compressed_path)],
                check=True,
            )
            lz_data = compressed_path.read_bytes()
            if not lz_data.startswith(b"\x10"):
                raise SystemExit(f"gbagfx did not emit LZ77 for {raw_path}")
            compressed_path.write_bytes(GROUND_LZ_MAGIC + lz_data)

        raw_data = raw_path.read_bytes()
        compressed_data = compressed_path.read_bytes()
        if not compressed_data.startswith(GROUND_LZ_MAGIC):
            raise SystemExit(
                f"{compressed_path} is missing the GMLZ container; "
                f"re-run with --force"
            )
        if lz77_decompress(compressed_data[len(GROUND_LZ_MAGIC) :]) != raw_data:
            raise SystemExit(f"LZ77 round-trip failed for {raw_path}")

        raw_bytes += len(raw_data)
        compressed_bytes += len(compressed_data)

    saved = raw_bytes - compressed_bytes
    ratio = compressed_bytes / raw_bytes if raw_bytes else 0
    print(
        f"verified {len(raw_files)} ground assets: "
        f"{raw_bytes} -> {compressed_bytes} bytes "
        f"({ratio:.1%}, saved {saved} bytes)"
    )


if __name__ == "__main__":
    main()
