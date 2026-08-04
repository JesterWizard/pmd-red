#!/usr/bin/env python3
"""Generate src/pmd2_font_data.h from graphics/custom/pmd2_font_sheet.png."""

from pathlib import Path

import numpy as np
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
SHEET = ROOT / "graphics/custom/pmd2_font_sheet.png"
OUT = ROOT / "src/pmd2_font_data.h"
ROWS = 12


def get_bands(ink, merge_gap=0):
    row_has = ink.any(axis=1)
    bands = []
    in_run = False
    start = 0
    for y, v in enumerate(row_has):
        if v and not in_run:
            start = y
            in_run = True
        elif not v and in_run:
            bands.append((start, y))
            in_run = False
    if in_run:
        bands.append((start, len(row_has)))

    out = []
    for y0, y1 in bands:
        strip = ink[y0:y1]
        col_has = strip.any(axis=0)
        glyphs = []
        in_run = False
        xs = 0
        for x, v in enumerate(col_has):
            if v and not in_run:
                xs = x
                in_run = True
            elif not v and in_run:
                glyphs.append((xs, x))
                in_run = False
        if in_run:
            glyphs.append((xs, strip.shape[1]))
        if merge_gap > 0 and glyphs:
            merged = [glyphs[0]]
            for g in glyphs[1:]:
                if g[0] - merged[-1][1] <= merge_gap:
                    merged[-1] = (merged[-1][0], g[1])
                else:
                    merged.append(g)
            glyphs = merged
        out.append((y0, y1, glyphs))
    return out


def pack_glyph(bitmap):
    words = []
    for r in range(ROWS):
        row = list(bitmap[r]) if r < len(bitmap) else []
        pixels = [0xF if (i < len(row) and row[i]) else 0 for i in range(12)]
        for w in range(3):
            val = 0
            for n in range(4):
                val |= (pixels[w * 4 + n] & 0xF) << (n * 4)
            words.append(val)
    return words


def extract_glyph(ink, y0, y1, x0, x1):
    band_h = y1 - y0
    patch = ink[y0:y1, x0:x1]
    cols = patch.any(axis=0)
    if not cols.any():
        return [[0] * 1 for _ in range(ROWS)], 4
    cx0 = int(np.argmax(cols))
    cx1 = int(len(cols) - np.argmax(cols[::-1]))
    glyph = patch[:, cx0:cx1]
    w = glyph.shape[1]
    bitmap = []
    for r in range(ROWS):
        if r < band_h:
            bitmap.append([1 if glyph[r, c] else 0 for c in range(w)])
        else:
            bitmap.append([0] * max(w, 1))
    return bitmap, max(w + 1, 2)


def main():
    arr = np.array(Image.open(SHEET))
    ink = ((arr[:, :, :3].sum(axis=2) > 180) & (arr[:, :, 3] > 128)).astype(np.uint8)

    bands = get_bands(ink, merge_gap=0)
    bands[5] = get_bands(ink, merge_gap=1)[5]

    assign = {
        0: list(range(ord("a"), ord("m") + 1)),
        1: list(range(ord("n"), ord("z") + 1)),
        2: list(range(ord("A"), ord("M") + 1)),
        3: list(range(ord("N"), ord("Z") + 1)),
        4: [ord(c) for c in "1234567890:+-"],
        5: [0x2C, 0x2E, 0xA1, 0x21, 0xBF, 0x3F, 0x91, 0x92, 0x93, 0x94, 0xBD, 0xBE, 0x5F],
    }

    glyphs = {}
    for bi, ids in assign.items():
        y0, y1, glist = bands[bi]
        if len(glist) != len(ids):
            raise SystemExit(f"band {bi}: got {len(glist)} glyphs, expected {len(ids)}")
        for cid, (x0, x1) in zip(ids, glist):
            bitmap, advance = extract_glyph(ink, y0, y1, x0, x1)
            if cid in (0x2E, 0x2C, ord(":")):
                advance = max(advance, 3)
            elif cid == ord("1"):
                advance = max(advance, 4)
            glyphs[cid] = (pack_glyph(bitmap), advance)

    glyphs[0x20] = ([0] * 36, 4)
    glyphs[0x27] = glyphs[0x92]
    glyphs[0x22] = glyphs[0x93]

    ordered = sorted(glyphs.items(), key=lambda kv: kv[0])
    alias_src = {0x22: 0x93, 0x27: 0x92}

    lines = [
        "/* Auto-generated from graphics/custom/pmd2_font_sheet.png — do not edit. */",
        "#ifndef GUARD_PMD2_FONT_DATA_H",
        "#define GUARD_PMD2_FONT_DATA_H",
        "",
        f"#define PMD2_FONT_GLYPH_COUNT {len(ordered)}",
        "",
    ]

    emitted = set()
    for cid, _ in ordered:
        src = alias_src.get(cid, cid)
        if src in emitted:
            continue
        emitted.add(src)
        words = glyphs[src][0]
        lines.append(f"static const u16 sPmd2Glyph_{src:02X}[36] = {{")
        for r in range(ROWS):
            chunk = words[r * 3 : (r + 1) * 3]
            lines.append("    " + ", ".join(f"0x{w:04X}" for w in chunk) + ",")
        lines.append("};")
        lines.append("")

    lines.append("static const unkChar sPmd2FontChars[PMD2_FONT_GLYPH_COUNT] = {")
    for cid, (words, width) in ordered:
        src = alias_src.get(cid, cid)
        w = glyphs[src][1]
        lines.append(
            f"    {{ .unk0 = sPmd2Glyph_{src:02X}, .unk4 = 0x{cid:04X}, .width = {w}, "
            f".unk8 = 0, .fill9 = 0, .unkA = 2, .fillB = 0 }},"
        )
    lines.append("};")
    lines.append("")
    lines.append("#endif /* GUARD_PMD2_FONT_DATA_H */")
    lines.append("")

    OUT.write_text("\n".join(lines))
    print(f"Wrote {OUT.relative_to(ROOT)} ({len(ordered)} glyphs)")


if __name__ == "__main__":
    main()
