#!/usr/bin/env python3
"""Build src/data/sky_boss_wipe.h: EoS's boss-battle speed streaks (CORO_BOSS_WIPE_FUNC's
supervision_SpecialActing(13)) for the sky demake's boss transition (src/sky_boss_wipe.c).

EoS draws the streaks with the 3D engine, so they are not a file in the ROM: this tool records
them from DeSmuME and rebuilds the texture.

    make_sky_boss_wipe.py capture EOS_ROM STATE CAPDIR
        Runs EoS (py-desmume) from STATE, a savestate in Beach Cave Pit's m01a0401 a little before
        the fight (after "Come and get it!"), with only the main engine's BG0 (the 3D layer) shown.
        Waits for se_Play(5136) and saves the bottom screen of the next 80 frames as
        CAPDIR/e_NNN.png (NNN = frames after the sound).

    make_sky_boss_wipe.py build CAPDIR OUT_H
        Fits the six strips' textures to the capture and writes the header.

What the effect is (read from EoS's RAM during the capture and kept as constants below):
six strips of 4-pixel pills, each a 256x64 texture repeated every 256 pixels, centred on
screen rows 28, 36, 92, 100, 156 and 164. Each strip moves 4 px per frame; after DELAY frames it
speeds up by 1/4 px per frame to 9 px per frame. It opens vertically out of its centre line over
the 32 frames before DELAY ends. All strips fade in together (polygon alpha +1/31 per frame).
The strips at 28 / 92 / 156 draw over the ones at 36 / 100 / 164.
"""
import json
import os
import sys
from collections import Counter, defaultdict

import numpy as np
from PIL import Image

# centre y: (direction, delay)
STRIPS = {28: (-1, 44), 92: (1, 40), 156: (-1, 40), 36: (1, 36), 100: (-1, 32), 164: (1, 36)}
ORDER = [28, 92, 156, 36, 100, 164]          # BG1 (on top) then BG2
LAYER = {28: 0, 92: 0, 156: 0, 36: 1, 100: 1, 164: 1}
FIRST_MOVE = 11                               # frames after se_Play(5136) the strips first move
SETTLED = range(56, 74)                       # frames after the sound with every strip fully open
PILL_LENGTHS = [16, 33, 48, 80, 110]          # the pill widths EoS stretches its texture to
GBA_ROWS = range(16, 176)                     # EoS rows the GBA's 160 lines show


def capture(rom, state, outdir):
    os.environ.setdefault("SDL_VIDEODRIVER", "dummy")
    os.environ.setdefault("SDL_AUDIODRIVER", "dummy")
    from desmume.emulator import DeSmuME
    import pmdsky_debug_py as p

    os.makedirs(outdir, exist_ok=True)
    emu = DeSmuME()
    emu.open(rom)
    emu.savestate.load_file(state)
    for layer in range(5):
        emu.gpu_set_layer_main_enable_state(layer, layer == 0)
    hit = []
    regs = emu.memory.register_arm9

    def on_se(addr, size):
        if regs.r0 == 5136:
            hit.append(True)
    for a in p.na.arm9.functions.PlaySeByIdVolume.addresses:
        emu.memory.register_exec(0x02000000 + a, on_se)
    sound_frame = None
    for frame in range(1, 2000):
        emu.cycle(with_joystick=False)
        if sound_frame is None and hit:
            sound_frame = frame
        if sound_frame is not None:
            e = frame - sound_frame
            if e > 80:
                break
            emu.screenshot().crop((0, 192, 256, 384)).save(os.path.join(outdir, "e_%03d.png" % e))
    if sound_frame is None:
        sys.exit("se_Play(5136) never played: is STATE before CORO_BOSS_WIPE_FUNC?")


def sim(direction, delay, n):
    """Strip x after n frames of movement (EoS's own steps)."""
    x, speed = 0.0, 4.0
    for i in range(1, n + 1):
        if i > delay + 1:
            speed = min(9.0, speed + 0.25)
        x += speed
    return direction * x


def offset(yc, e):
    direction, delay = STRIPS[yc]
    return int(np.floor(sim(direction, delay, e - FIRST_MOVE)))


def build(capdir, out):
    frames = {e: np.asarray(Image.open(os.path.join(capdir, "e_%03d.png" % e)).convert("RGB")) for e in SETTLED}
    # EoS's 16 streak colours: the settled frames use exactly these.
    palette = sorted(set(map(tuple, np.concatenate([f.reshape(-1, 3) for f in frames.values()]).tolist())))
    if len(palette) != 16:
        sys.exit("expected 16 colours in the settled frames, found %d" % len(palette))
    lut = {(c[0] << 16) | (c[1] << 8) | c[2]: i for i, c in enumerate(palette)}
    idx = {}
    for e, a in frames.items():
        k = (a[..., 0].astype(int) << 16) | (a[..., 1].astype(int) << 8) | a[..., 2]
        out_i = np.zeros(k.shape, np.int16)
        for key, i in lut.items():
            out_i[k == key] = i
        idx[e] = out_i

    def strip_rows(tex, yc, o):
        return {yc - 32 + r: np.roll(tex[r], o) for r in range(64) if 0 <= yc - 32 + r < 192}

    def extract(tex=None):
        """Per texel, the most common colour over the settled frames; the lower strips skip
        pixels the upper strips cover."""
        new = {}
        for yc in ORDER:
            texture = np.zeros((64, 256), np.int16)
            tops = {}
            if tex is not None and LAYER[yc] == 1:
                for e in SETTLED:
                    top = np.zeros((192, 256), bool)
                    for yc2 in ORDER:
                        if LAYER[yc2] == 0:
                            for y, row in strip_rows(tex[yc2], yc2, offset(yc2, e)).items():
                                top[y] |= row > 0
                    tops[e] = top
            for r in range(64):
                y = yc - 32 + r
                if not 0 <= y < 192:
                    continue
                cols = [Counter() for _ in range(256)]
                for e in SETTLED:
                    o = offset(yc, e)
                    row = np.roll(idx[e][y], -o)
                    valid = np.ones(256, bool) if e not in tops else ~np.roll(tops[e][y], -o)
                    for u in np.nonzero(valid)[0]:
                        cols[u][int(row[u])] += 1
                for u in range(256):
                    texture[r, u] = cols[u].most_common(1)[0][0] if cols[u] else 0
            new[yc] = texture
        return new

    raw = extract()
    raw = extract(raw)
    raw = extract(raw)
    # Strip 164's pills sit one row lower than its 4-row grid; work on it shifted.
    raw[164] = np.roll(raw[164], -1, axis=0)

    # Rebuild every strip from clean pills: find them on the core row of each 4-row band,
    # snap their width, and draw the most common pill of that width.
    def segments(row):
        nz = row > 0
        if not nz.any():
            return []
        start = int(np.argmin(nz))
        out_s, x = [], 0
        while x < 256:
            if nz[(start + x) % 256]:
                x0 = x
                while x < 256 and nz[(start + x) % 256]:
                    x += 1
                out_s.append(((start + x0) % 256, x - x0))
            else:
                x += 1
        return out_s

    def pills(tex):
        found = []
        for band in range(15):
            r0 = 4 * band
            for x0, length in segments(tex[r0 + 1]):
                if length >= 12:
                    found.append((r0, x0, min(PILL_LENGTHS, key=lambda s: abs(s - length))))
        return found

    samples = defaultdict(list)
    for yc in (28, 100, 36, 92):
        for r0, x0, length in pills(raw[yc]):
            cols = (np.arange(-2, length + 2) + x0) % 256
            samples[length].append(raw[yc][r0:r0 + 4][:, cols])
    canon = {}
    for length, ps in samples.items():
        st = np.stack(ps)
        canon[length] = np.array([[Counter(st[:, i, j].tolist()).most_common(1)[0][0]
                                   for j in range(st.shape[2])] for i in range(st.shape[1])], np.int16)

    def synth(tex):
        result = np.zeros_like(tex)
        for r0, x0, length in pills(tex):
            cols = (np.arange(-2, length + 2) + x0) % 256
            pill = canon[length]
            for i in range(4):
                for j, c in enumerate(cols):
                    if pill[i, j] > 0:
                        result[r0 + i, c] = pill[i, j]
        return result

    tex = {yc: synth(raw[yc]) for yc in ORDER}
    tex[164] = np.roll(tex[164], 1, axis=0)

    # Per-strip x correction against the capture (the DS rasteriser rounds differently).
    def render(e, adjust):
        img = np.zeros((192, 256), np.int16)
        for yc in reversed(ORDER):
            for y, row in strip_rows(tex[yc], yc, offset(yc, e) + adjust[yc]).items():
                m = row > 0
                img[y][m] = row[m]
        return img
    adjust = {yc: 0 for yc in ORDER}
    for _ in range(2):
        for yc in ORDER:
            best = None
            for d in range(-3, 4):
                adjust[yc] = d
                score = sum(int((render(e, adjust) != idx[e]).sum()) for e in (58, 62, 66, 70))
                if best is None or score < best[0]:
                    best = (score, d)
            adjust[yc] = best[1]
    for e in (58, 64, 70):
        r = render(e, adjust)
        print("frame +%d: %d of %d streak pixels differ in shape" % (e, int(((r > 0) != (idx[e] > 0)).sum()), int((idx[e] > 0).sum())))

    # The GBA's row bank: every texture row the GBA can show, once.
    bank = [np.zeros(256, np.int16)]
    keys = {bank[0].tobytes(): 0}
    rowmap = {}
    for yc in ORDER:
        rows = []
        for r in range(64):
            row = tex[yc][r]
            if yc - 32 + r not in GBA_ROWS or not row.any():
                rows.append(0)
                continue
            if row.tobytes() not in keys:
                keys[row.tobytes()] = len(bank)
                bank.append(row.copy())
            rows.append(keys[row.tobytes()])
        rowmap[yc] = rows
    map_rows = (len(bank) + 7) // 8
    image = np.zeros((map_rows * 8, 256), np.int16)
    for i, row in enumerate(bank):
        image[i] = row
    tiles, tile_keys = [np.zeros((8, 8), np.int16)], {np.zeros((8, 8), np.uint8).tobytes(): 0}
    tilemap = np.zeros((map_rows, 32), np.int32)
    for ty in range(map_rows):
        for tx in range(32):
            t = image[ty * 8:ty * 8 + 8, tx * 8:tx * 8 + 8]
            entry = None
            for flip, v in ((0, t), (1, t[:, ::-1]), (2, t[::-1, :]), (3, t[::-1, ::-1])):
                k = v.astype(np.uint8).tobytes()
                if k in tile_keys:
                    entry = tile_keys[k] | ((flip & 1) << 10) | ((flip >> 1) << 11)
                    break
            if entry is None:
                tile_keys[t.astype(np.uint8).tobytes()] = len(tiles)
                entry = len(tiles)
                tiles.append(t.copy())
            tilemap[ty, tx] = entry
    print("%d bank rows, %d map rows, %d tiles (%d bytes)" % (len(bank), map_rows, len(tiles), len(tiles) * 32))

    def rgb555(c):
        return (c[0] >> 3) | ((c[1] >> 3) << 5) | ((c[2] >> 3) << 10)
    lines = [
        "/* Generated by tools/make_sky_boss_wipe.py from DeSmuME captures of EoS's CORO_BOSS_WIPE_FUNC",
        " * (SCRIPT/COMMON/unionall.ssb: supervision_SpecialActing(13)). Do not edit. */",
        "#define BOSS_WIPE_ROW_COUNT %d" % len(bank),
        "#define BOSS_WIPE_MAP_ROWS %d" % map_rows,
        "#define BOSS_WIPE_TILE_COUNT %d" % len(tiles),
        "",
        "static const u16 sBossWipePalette[16] = {",
        "    " + ", ".join("0x%04X" % rgb555(c) for c in palette) + ",",
        "};",
        "",
        "static const u32 sBossWipeTiles[BOSS_WIPE_TILE_COUNT * 8] = {",
    ]
    for t in tiles:
        words = []
        for y in range(8):
            w = 0
            for x in range(8):
                w |= int(t[y, x]) << (4 * x)
            words.append("0x%08X" % w)
        lines.append("    " + ", ".join(words) + ",")
    lines += ["};", "", "/* Map rows (32 entries each): tile index (local) | flip bits. */",
              "static const u16 sBossWipeMap[BOSS_WIPE_MAP_ROWS * 32] = {"]
    for ty in range(map_rows):
        lines.append("    " + ", ".join("0x%03X" % v for v in tilemap[ty]) + ",")
    lines += ["};", "", "/* Texture row (0-63) -> map row in the bank; 0 = empty. */",
              "static const u8 sBossWipeRowMap[6][64] = {"]
    for yc in ORDER:
        lines.append("    { " + ", ".join(str(v) for v in rowmap[yc]) + " }, /* strip y=%d */" % yc)
    lines += ["};", "", "/* centre y (DS screen), direction, delay, x adjust, layer (0 = on top) */",
              "static const struct BossWipeStrip sBossWipeStrips[6] = {"]
    for yc in ORDER:
        direction, delay = STRIPS[yc]
        lines.append("    { %d, %d, %d, %d, %d }," % (yc, direction, delay, adjust[yc], LAYER[yc]))
    lines.append("};")
    with open(out, "w") as f:
        f.write("\n".join(lines) + "\n")
    print("wrote", out)


if __name__ == "__main__":
    if len(sys.argv) == 5 and sys.argv[1] == "capture":
        capture(sys.argv[2], sys.argv[3], sys.argv[4])
    elif len(sys.argv) == 4 and sys.argv[1] == "build":
        build(sys.argv[2], sys.argv[3])
    else:
        sys.exit(__doc__)
