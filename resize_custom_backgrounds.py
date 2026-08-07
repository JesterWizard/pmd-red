#!/usr/bin/env python3
"""Prepare graphics/custom/backgrounds/*.png as 240x160, 128-color images.

1. Scale each PNG to 160px height (width proportional) with bilinear filtering.
2. Extract a 240x160 crop from the horizontal center.
3. Quantize to 128 colors (median cut, no dither).
Overwrites each PNG in place.
"""

from __future__ import annotations

import argparse
import sys
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parent
SRC_DIR = ROOT / "graphics" / "custom" / "backgrounds"
TARGET_WIDTH = 240
TARGET_HEIGHT = 160
TARGET_COLORS = 128


def quantize(im: Image.Image, colors: int) -> Image.Image:
    rgb = im.convert("RGB")
    return rgb.quantize(
        colors=colors,
        method=Image.Quantize.MEDIANCUT,
        dither=Image.Dither.NONE,
    )


def process(
    path: Path,
    width: int,
    height: int,
    colors: int,
    dry_run: bool = False,
) -> tuple[int, int, int]:
    with Image.open(path) as im:
        old_colors = len(im.getcolors(maxcolors=1_000_000) or [])
        work = im

        if work.size[1] != height:
            new_w = max(1, round(work.size[0] * height / work.size[1]))
            work = work.resize((new_w, height), Image.Resampling.BILINEAR)

        cur_w, cur_h = work.size
        if cur_w < width or cur_h < height:
            raise ValueError(f"{path.name}: {cur_w}x{cur_h} smaller than {width}x{height}")

        left = (cur_w - width) // 2
        top = (cur_h - height) // 2
        work = work.crop((left, top, left + width, top + height))

        if dry_run:
            return old_colors, colors, colors

        out = quantize(work, colors)
        out.save(path)
        new_colors = len(out.getcolors(maxcolors=colors) or [])
        return old_colors, colors, new_colors


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--dir",
        type=Path,
        default=SRC_DIR,
        help=f"Directory of PNGs (default: {SRC_DIR})",
    )
    parser.add_argument("--width", type=int, default=TARGET_WIDTH, help="Crop width in pixels")
    parser.add_argument("--height", type=int, default=TARGET_HEIGHT, help="Target/crop height in pixels")
    parser.add_argument("--colors", type=int, default=TARGET_COLORS, help="Max palette colors")
    parser.add_argument("--dry-run", action="store_true", help="Print planned changes without writing")
    args = parser.parse_args()

    directory: Path = args.dir
    if not directory.is_dir():
        print(f"error: not a directory: {directory}", file=sys.stderr)
        return 1

    paths = sorted(directory.glob("*.png"))
    if not paths:
        print(f"error: no PNGs in {directory}", file=sys.stderr)
        return 1

    for path in paths:
        try:
            old_c, target_c, new_c = process(
                path, args.width, args.height, args.colors, dry_run=args.dry_run
            )
        except ValueError as e:
            print(f"error: {e}", file=sys.stderr)
            return 1
        tag = "would quantize" if args.dry_run else "quantized"
        print(f"{tag} {path.name}: {old_c} -> {new_c} colors (target {target_c})")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
