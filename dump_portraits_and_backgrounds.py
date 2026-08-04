#!/usr/bin/env python3
"""Dump kao portraits and title-screen backgrounds to PNG."""

from __future__ import annotations

import re
import struct
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parent
KAO_DIR = ROOT / "data" / "kao"
OUT_PORTRAITS = ROOT / "graphics" / "portraits"
OUT_BACKGROUNDS = ROOT / "graphics" / "backgrounds"

EMOTIONS = [
    "Normal",
    "Happy",
    "Pained",
    "Angry",
    "Worried",
    "Sad",
    "Crying",
    "Shouting",
    "TearyEye",
    "Determined",
    "Joyous",
    "Inspired",
    "Surprised",
]

TITLE_BGS = [
    ("titlen0", "titlemenu_sbin_384C9C_3E34.bin", "titlemenu_sbin_388AD0_380.bin", False),
    ("titlen1", "titlemenu_sbin_388E55_4143.bin", "titlemenu_sbin_38CF98_380.bin", True),
    ("titlen2", "titlemenu_sbin_38D318_4928.bin", "titlemenu_sbin_391C48_380.bin", False),
]


def decompress_at(src: bytes, dst_len: int = 0) -> bytes:
    """Port of DecompressAT from src/decompress_at.c."""
    if len(src) < 7:
        raise ValueError("AT buffer too short")

    if src[:4] == b"AT4P":
        tmp2 = src[0x10] | (src[0x11] << 8)
        if dst_len != 0 and dst_len != tmp2:
            raise ValueError(f"dstLen mismatch: {dst_len} vs {tmp2}")
        idx_start = 0x12
    elif src[:4] == b"AT3P":
        idx_start = 0x10
    else:
        raise ValueError(f"bad AT magic: {src[:5]!r}")

    compressed_length = src[5] | (src[6] << 8)

    if src[4] == ord("N"):
        return bytes(src[7 : 7 + compressed_length])

    flags = [src[0x7 + i] + 3 for i in range(9)]
    dst = bytearray()
    cur_index = idx_start
    current_byte = 0
    cmd_bit = 8

    while cur_index < compressed_length:
        if dst_len != 0 and len(dst) >= dst_len:
            raise ValueError("wrote past dstLen")

        if cmd_bit == 8:
            current_byte = src[cur_index]
            cur_index += 1
            cmd_bit = 0

        if (current_byte & 0x80) == 0:
            command = (src[cur_index] >> 4) + 3
            tmp = (src[cur_index] & 0xF) << 8

            for i, flag in enumerate(flags):
                if command == flag:
                    command = 0x1F - i
                    break

            if command == 0x1F:
                c = src[cur_index] & 0xF
                cur_index += 1
                b = ((c & 0xF) << 4) | (c & 0xF)
                dst.append(b)
                dst.append(b)
            elif command == 0x1E:
                c = src[cur_index] & 0xF
                cur_index += 1
                dst.append(((c & 0xF) << 4) | ((c + 1) & 0xF))
                dst.append((((c + 1) & 0xF) << 4) | ((c + 1) & 0xF))
            elif command == 0x1D:
                c = src[cur_index] & 0xF
                cur_index += 1
                dst.append(((c & 0xF) << 4) | ((c - 1) & 0xF))
                dst.append(((c & 0xF) << 4) | (c & 0xF))
            elif command == 0x1C:
                c = src[cur_index] & 0xF
                cur_index += 1
                dst.append(((c & 0xF) << 4) | (c & 0xF))
                dst.append((((c - 1) & 0xF) << 4) | (c & 0xF))
            elif command == 0x1B:
                c = src[cur_index] & 0xF
                cur_index += 1
                dst.append(((c & 0xF) << 4) | (c & 0xF))
                dst.append(((c & 0xF) << 4) | ((c - 1) & 0xF))
            elif command == 0x1A:
                c = src[cur_index] & 0xF
                cur_index += 1
                dst.append(((c & 0xF) << 4) | ((c - 1) & 0xF))
                dst.append((((c - 1) & 0xF) << 4) | ((c - 1) & 0xF))
            elif command == 0x19:
                c = src[cur_index] & 0xF
                cur_index += 1
                dst.append(((c & 0xF) << 4) | ((c + 1) & 0xF))
                dst.append(((c & 0xF) << 4) | (c & 0xF))
            elif command == 0x18:
                c = src[cur_index] & 0xF
                cur_index += 1
                dst.append(((c & 0xF) << 4) | (c & 0xF))
                dst.append((((c + 1) & 0xF) << 4) | (c & 0xF))
            elif command == 0x17:
                c = src[cur_index] & 0xF
                cur_index += 1
                dst.append(((c & 0xF) << 4) | (c & 0xF))
                dst.append(((c & 0xF) << 4) | ((c + 1) & 0xF))
            else:
                cur_index += 1
                tmp += src[cur_index]
                cur_index += 1
                tmp += len(dst) - 0x1000
                for _ in range(command):
                    dst.append(dst[tmp])
                    tmp += 1
        else:
            dst.append(src[cur_index])
            cur_index += 1

        cmd_bit += 1
        current_byte = (current_byte << 1) & 0xFF

    return bytes(dst)


def load_at4px(path: Path, force_prefix: bool = False) -> bytes:
    data = path.read_bytes()
    if force_prefix or not data.startswith(b"AT4P"):
        data = b"AT4PX" + data
    return decompress_at(data)


def parse_rgb_palette(data: bytes) -> list[tuple[int, int, int, int]]:
    colors = []
    for i in range(0, len(data) - 3, 4):
        r, g, b, a = data[i], data[i + 1], data[i + 2], data[i + 3]
        # index 0 is treated as transparent for portraits
        alpha = 0 if i == 0 else 255
        colors.append((r, g, b, alpha))
    return colors


def blit_4bpp_tile(
    pixels: list[list[tuple[int, int, int, int]]],
    tile: bytes,
    pal: list[tuple[int, int, int, int]],
    dx: int,
    dy: int,
) -> None:
    for row in range(8):
        for col_pair in range(4):
            byte = tile[row * 4 + col_pair]
            for n, idx in enumerate((byte & 0xF, byte >> 4)):
                x = dx + col_pair * 2 + n
                y = dy + row
                pixels[y][x] = pal[idx]


def portrait_to_image(gfx: bytes, pal_data: bytes) -> Image.Image:
    if len(gfx) != 0x320:
        raise ValueError(f"expected 0x320 portrait tiles, got {len(gfx):#x}")
    pal = parse_rgb_palette(pal_data)
    if len(pal) < 16:
        raise ValueError("portrait palette too short")
    pixels = [[(0, 0, 0, 0) for _ in range(40)] for _ in range(40)]
    for ty in range(5):
        for tx in range(5):
            tile = gfx[(ty * 5 + tx) * 32 : (ty * 5 + tx + 1) * 32]
            blit_4bpp_tile(pixels, tile, pal, tx * 8, ty * 8)
    img = Image.new("RGBA", (40, 40))
    img.putdata([px for row in pixels for px in row])
    return img


def parse_kao_inc(path: Path) -> list[tuple[str, Path, Path, bool]]:
    """Return list of (emotion, pal_path, gfx_path, gfx_needs_at4px_prefix)."""
    text = path.read_text()
    lines = text.splitlines()

    label_info: dict[str, tuple[Path, bool]] = {}
    cur: str | None = None
    pending_prefix = False
    for line in lines:
        stripped = line.strip()
        m = re.match(r"((?:s|gUnknown_)\w+):$", stripped)
        if m:
            cur = m.group(1)
            pending_prefix = False
            continue
        if stripped == '.string "AT4PX"' and cur:
            pending_prefix = True
            continue
        m = re.match(r'\.incbin "([^"]+)"', stripped)
        if m and cur:
            label_info[cur] = (ROOT / m.group(1), pending_prefix)
            cur = None
            pending_prefix = False

    out: list[tuple[str, Path, Path, bool]] = []
    for idx, (pal_lab, gfx_lab) in enumerate(
        re.findall(r"kao_portrait\s+(\S+),\s*(\S+)", text)
    ):
        emotion = EMOTIONS[idx] if idx < len(EMOTIONS) else f"Emotion{idx}"
        if pal_lab == "0" or gfx_lab == "0":
            continue
        pal_path, _ = label_info[pal_lab]
        gfx_path, needs_prefix = label_info[gfx_lab]
        # Some bins already contain the AT4PX magic even without .string
        if gfx_path.read_bytes().startswith(b"AT4P"):
            needs_prefix = False
        out.append((emotion, pal_path, gfx_path, needs_prefix))
    return out


def dump_portraits() -> int:
    OUT_PORTRAITS.mkdir(parents=True, exist_ok=True)
    count = 0
    for inc in sorted(KAO_DIR.glob("*.inc")):
        species = inc.stem
        species_dir = OUT_PORTRAITS / species
        species_dir.mkdir(parents=True, exist_ok=True)
        for emotion, pal_path, gfx_path, needs_prefix in parse_kao_inc(inc):
            gfx = load_at4px(gfx_path, force_prefix=needs_prefix)
            img = portrait_to_image(gfx, pal_path.read_bytes())
            out = species_dir / f"{emotion}.png"
            img.save(out)
            count += 1
    return count


def decode_4bpp_tile(tiles: bytes, index: int, hflip: bool, vflip: bool) -> list[list[int]]:
    off = index * 32
    chunk = tiles[off : off + 32]
    if len(chunk) < 32:
        chunk = chunk + bytes(32 - len(chunk))
    grid = []
    for row in range(8):
        rowpx = []
        for col_pair in range(4):
            byte = chunk[row * 4 + col_pair]
            rowpx.append(byte & 0xF)
            rowpx.append(byte >> 4)
        grid.append(rowpx)
    if hflip:
        grid = [list(reversed(row)) for row in grid]
    if vflip:
        grid = list(reversed(grid))
    return grid


def render_title_bg(raw: bytes, pal_data: bytes, *, screen_only: bool = True) -> Image.Image:
    """Compose titlen* AT4PX (2×32×32 tilemaps + 4bpp tiles) with RGB palette."""
    tilemap_bytes = 2 * 32 * 32 * 2
    if len(raw) < tilemap_bytes:
        raise ValueError(f"title bg too small: {len(raw):#x}")

    tilemap = struct.unpack(f"<{2 * 32 * 32}H", raw[:tilemap_bytes])
    tiles = raw[tilemap_bytes:]
    pal = [(r, g, b, 255) for r, g, b, _ in parse_rgb_palette(pal_data)]
    while len(pal) < 256:
        pal.append((0, 0, 0, 255))

    # BG3 then BG2 (CHARBASE 2 @ VRAM+0x8000, 4bpp + palette bank)
    rgba = [[pal[0] for _ in range(256)] for _ in range(256)]
    for layer, base in ((1, 32 * 32), (0, 0)):
        for ty in range(32):
            for tx in range(32):
                entry = tilemap[base + ty * 32 + tx]
                grid = decode_4bpp_tile(
                    tiles, entry & 0x3FF, bool(entry & 0x400), bool(entry & 0x800)
                )
                pbank = (entry >> 12) & 0xF
                for row in range(8):
                    for col in range(8):
                        idx = grid[row][col]
                        if layer == 0 and idx == 0:
                            continue
                        rgba[ty * 8 + row][tx * 8 + col] = pal[pbank * 16 + idx]

    img = Image.new("RGBA", (256, 256))
    img.putdata([px for row in rgba for px in row])
    if screen_only:
        return img.crop((0, 0, 240, 160))
    return img


def dump_backgrounds() -> int:
    OUT_BACKGROUNDS.mkdir(parents=True, exist_ok=True)
    count = 0
    tm = ROOT / "graphics" / "titlemenu"
    for name, gfx_name, pal_name, needs_prefix in TITLE_BGS:
        gfx = load_at4px(tm / gfx_name, force_prefix=needs_prefix)
        pal = (tm / pal_name).read_bytes()
        out = OUT_BACKGROUNDS / f"{name}.png"
        render_title_bg(gfx, pal, screen_only=True).save(out)
        count += 1
        print(f"  {name}: uncomp={len(gfx)} -> {out.relative_to(ROOT)}")
    return count


def main() -> None:
    print("Dumping portraits...")
    n = dump_portraits()
    print(f"  wrote {n} portraits under {OUT_PORTRAITS.relative_to(ROOT)}")
    print("Dumping title backgrounds...")
    m = dump_backgrounds()
    print(f"  wrote {m} title backgrounds under {OUT_BACKGROUNDS.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
