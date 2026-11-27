"""Explorers of Sky demake: an opening scene whose backgrounds come straight
from EoS's map files, and whose sprites are complete where EoS hides them.

Used by tools/sky_opening_scenes.py for the scenes with `map=` in
make_sky_opening.GBA_SCENES (Lapras's sea, t02a0202 on S13P03A).

That scene cannot be stitched from the recorded pictures the way the others
are:

  * `back2_SetMode(6)` puts a gap of 64 lines between the DS's two screens:
    the bottom screen shows the map 256 lines below the top one, not 192.
    What is in the gap (Lapras's body while it crosses, the Wingull) is not
    drawn at all, on either screen.
  * The far sea is animated tiles (`s13p03a5.bpa`: 132 tiles, 8 frames, the
    rows of waves sliding at 2 to 12 px a frame), on a layer that scrolls by
    itself (`back_SetBackScrollSpeed(-120, -6)`: 15 and 0.75 px a frame).

So the two map layers are taken from MAP_BG (`.bma` chunks, `.bpc` tiles,
`.bpa` animated tiles), with EoS's own tile indices, flips and palettes, as a
tileset per GBA layer plus the animated tiles' frames. Where the picture is
at each frame (the camera, each layer's scroll, the animation frame) is a
small model with the script's speeds, its phases fitted to the recording and
then checked against every recorded frame, pixel for pixel.

The sprites are the recorded OAM entries of both screens put on one canvas
with the gap. Each piece is followed through the scene (a "track": all of
them stand still in the world while the camera moves). Where EoS drops a
piece because it is off its screen (in the gap, or below the top screen), the
piece is put back: its picture and bob repeat with the period of its
animation, taken from the frames where EoS does draw it.
"""
from __future__ import annotations

import numpy as np

OBJ_W = [[8, 16, 32, 64], [16, 32, 32, 64], [8, 8, 16, 32]]
OBJ_H = [[8, 16, 32, 64], [8, 8, 16, 32], [16, 32, 32, 64]]
GBA_RING_TILES = 704   # tile slots of a GBA layer (src/sky_opening.c)


def _tile_px(data: bytes) -> np.ndarray:
    d = np.frombuffer(data, dtype=np.uint8)
    return np.stack([d & 15, d >> 4], -1).reshape(8, 8)


class MapLayer:
    """One map layer as a GBA tileset layer.

    cells[ty][tx] = (tile, flip x, flip y, palette) or None; tile 0 is the
    blank one, tiles first..first+count-1 are animated (frames[j]: their 4bpp
    data in frame j; seq: the frame shown at each step of the cycle)."""

    def __init__(self, rom, level, bpc, bma, k):
        from skytemple_files.common.types.file_types import FileType
        lay = bpc.layers[k]
        # (the .bma's upper layer, layer1, uses the .bpc's first)
        chunks = bma.layer1 if k == 0 else bma.layer0
        tw, th = bma.tiling_width, bma.tiling_height
        W, H = bma.map_width_chunks, bma.map_height_chunks
        cells = [[None] * (W * tw) for _ in range(H * th)]
        for cy in range(H):
            for cx in range(W):
                c = chunks[cy * W + cx]
                for n in range(tw * th):
                    e = lay.tilemap[c * tw * th + n]
                    if e.idx:
                        cells[cy * th + n // tw][cx * tw + n % tw] = (e.idx, int(e.flip_x), int(e.flip_y), e.pal_idx)
        rows = [y for y in range(len(cells)) if any(cells[y])]
        self.row0 = rows[0]
        self.cells = cells[rows[0]:rows[-1] + 1]
        self.h, self.w = len(self.cells), W * tw
        self.tiles = [bytes(32)] + [bytes(t) for t in lay.tiles[1:]]
        self.first, self.count, self.frames, self.seq = len(self.tiles), 0, [], [0]
        slots = [s for s in range(4) if lay.bpas[s]]
        if len(slots) > 1:
            raise SystemExit(f"sky opening map {level}: more than one animated tile set on a layer")
        if slots:
            bpa = FileType.BPA.deserialize(rom.getFileByName(f"MAP_BG/{level}{k * 4 + slots[0] + 1}.bpa"))
            self.count = bpa.number_of_tiles
            self.frames = [[bytes(t) for t in bpa.tiles_for_frame(j)] for j in range(bpa.number_of_frames)]
            # a frame stays for its duration + 1 game frames
            self.seq = [j for j, fi in enumerate(bpa.frame_info) for _ in range(fi.duration_per_frame + 1)]
        if self.first + self.count > GBA_RING_TILES:
            raise SystemExit(f"sky opening map {level}: {self.first + self.count} tiles on a layer (at most {GBA_RING_TILES})")
        # index pictures (palette * 16 + colour, 0 transparent), one per frame
        self.pics = []
        for j in range(max(1, len(self.frames))):
            pic = np.zeros((self.h * 8, self.w * 8), dtype=np.int32)
            for ty in range(self.h):
                for tx in range(self.w):
                    c = self.cells[ty][tx]
                    if c is None:
                        continue
                    idx, fx, fy, pal = c
                    px = _tile_px(self.tiles[idx] if idx < self.first else self.frames[j][idx - self.first])
                    if fx:
                        px = px[:, ::-1]
                    if fy:
                        px = px[::-1]
                    pic[ty * 8:ty * 8 + 8, tx * 8:tx * 8 + 8] = np.where(px == 0, 0, pal * 16 + px)
            self.pics.append(pic)

    def window(self, j, x, y, w, h):
        """The index picture of frame j, w x h from map pixel (x, y); it
        repeats sideways, and is empty above and below."""
        ys = np.arange(y - self.row0 * 8, y - self.row0 * 8 + h)
        ok = (ys >= 0) & (ys < self.h * 8)
        out = np.zeros((h, w), dtype=np.int32)
        xs = (x + np.arange(w)) % (self.w * 8)
        out[ok] = self.pics[j][ys[ok]][:, xs]
        return out

    def gba_map(self):
        mp = []
        for row in self.cells:
            for c in row:
                mp.append(0xFFFFFFFF if c is None else (c[0] << 16) | (c[1] << 10) | (c[2] << 11) | (c[3] << 12))
        return mp


class MapScene:
    """The two layers (0: front, BG2; 1: back, BG3) and where they are at
    each recorded frame: top_y (the map line at the top of the top screen),
    x[l] (the map column at the screens' left), anim[l] (animation frame)."""

    def __init__(self, rom, spec, rec):
        from skytemple_files.common.types.file_types import FileType
        level = spec["level"]
        get = lambda ext: rom.getFileByName(f"MAP_BG/{level}.{ext}")
        bma = FileType.BMA.deserialize(get("bma"))
        bpc = FileType.BPC.deserialize(get("bpc"))
        self.gap = spec["gap"]
        self.layers = [MapLayer(rom, level, bpc, bma, k) for k in (0, 1)]
        n = rec.n
        c0, clen = spec["cam"]
        self.top_y = [spec["top"] - max(0, min(clen, i - c0)) for i in range(n)]
        self.rec = rec
        # frames whose captures show the palettes' own colours
        plain = [i for i in range(n) if rec.states[i]["mbB"] & 31 == 0]
        self.x, self.anim = [None, None], [None, None]
        for l, lay in enumerate(self.layers):
            speed = spec["scroll"][l]
            period = lay.w * 8
            seq = lay.seq
            # where the layer is (x, cycle step) at one frame with much of it on screen
            caps = rec.layers[f"bg{2 + l}"]
            i0 = max(plain, key=lambda i: int((caps[i] != 0).sum()))
            best = None
            for st in range(len(seq)):
                if st and seq[st] == seq[st - 1]:
                    continue
                for x in range(period):
                    sc = self._match(l, i0, x, seq[st], step=8)
                    if best is None or sc > best[0]:
                        best = (sc, x, st)
            _, x0, st0 = best
            # the sub-pixel phase of the scroll and the cycle's phase: the
            # ones that fit every plain frame
            fits = []
            for sub in range(8):
                xs = [((x0 * 8 + sub + speed * (i - i0)) >> 3) % period for i in range(n)]
                for ph in range(len(seq)) if lay.count else [0]:
                    # (the bottom screen's tiles may be a frame ahead of the top one's)
                    for lead in (0, 1) if lay.count else [0]:
                        an = [seq[(i - i0 + ph) % len(seq)] for i in range(n + 1)]
                        if an[i0 + lead] != seq[st0]:
                            continue
                        sc = sum(self._match(l, i, xs[i], an[i], 8, an[i + lead]) for i in plain[::3])
                        fits.append((sc, xs, an, lead))
            _, self.x[l], self.anim[l], lead = max(fits, key=lambda t: t[0])
            bad = [i for i in plain
                   if self._match(l, i, self.x[l][i], self.anim[l][i], 1, self.anim[l][i + lead]) < 1.0]
            if bad:
                raise SystemExit(f"sky opening map {level}: layer {l} does not match the recording at frames {bad[:12]}")
            # the GBA plays the bottom screen's frames (most of the sea is there)
            self.anim[l] = [self.anim[l][i + lead] for i in range(n)]
        print(f"  map {level}: both layers match the recording on {len(plain)} frames", flush=True)

    def _match(self, l, i, x, j, step, j_bottom=None):
        """Share of pixels (every `step`-th line) where the layer drawn at
        column x, frame j (j_bottom on the bottom screen) is the recorded
        picture of frame i."""
        lay = self.layers[l]
        cap = self.rec.layers[f"bg{2 + l}"][i]
        same = total = 0
        for eng, r0, off in (("B", 0, 0), ("A", 192, 192 + self.gap)):
            pal = self.rec.pals(i, eng)[:256]
            idx = lay.window(j if eng == "B" or j_bottom is None else j_bottom, x, self.top_y[i] + off, 256, 192)[::step]
            pic = np.where(idx == 0, 0, pal[idx])
            part = cap[r0:r0 + 192:step]
            m = (pic != 0) | (part != 0)
            same += int((pic[m] == part[m]).sum())
            total += int(m.sum())
        return same / total if total else 1.0


# -------------------------------------------------------------------- sprites

def _period(states, lo, hi):
    """Smallest p with states[f] == states[f + p] over lo..hi (all known)."""
    for p in range(1, (hi - lo + 1) // 2 + 1):
        if all(states[f] == states[f + p] for f in range(lo, hi + 1 - p)):
            return p
    return None


def complete_objs(rec, gap, shift, first=0):
    """Per frame, the OAM entries of both screens on the canvas (the bottom
    screen `gap` lines under the top one), with the pieces EoS leaves out
    while they are off its screens put back.

    shift[i]: how far the camera has moved the world down the canvas by
    frame i. -> per frame a list of (engine, a0, a1, a2, blob key, x, y), in
    OAM order (the first is in front)."""
    n = rec.n
    tracks = []
    for i in range(n):
        for eng in "BA":
            for (oi, a0, a1, a2, bk) in rec.states[i][eng]["ents"]:
                if a0 & 0x2000:
                    raise SystemExit("sky opening: an 8bpp OBJ in a scene with completed sprites")
                x, y = a1 & 511, a0 & 255
                x -= 512 if x >= 256 else 0
                y -= 256 if y >= 192 else 0
                y += (192 + gap if eng == "A" else 0) - shift[i]
                size = (OBJ_W[a0 >> 14][a1 >> 14], OBJ_H[a0 >> 14][a1 >> 14])
                near = [t for t in tracks if t["size"] == size and abs(t["at"][0] - x) + abs(t["at"][1] - y) <= 6]
                if near:
                    t = min(near, key=lambda t: abs(t["at"][0] - x) + abs(t["at"][1] - y))
                else:
                    t = dict(size=size, obs={}, at=None)
                    tracks.append(t)
                if i in t["obs"]:
                    continue   # the same piece on the other screen
                t["obs"][i] = (x, y, bk, eng, a0, a1, a2, oi)
                t["at"] = (x, y)
    out = [[] for _ in range(n)]
    added = 0
    for t in tracks:
        obs = t["obs"]
        seen = sorted(obs)
        w, h = t["size"]
        xs = [o[0] for o in obs.values()]
        ys = [o[1] for o in obs.values()]
        bx, by = int(np.median(xs)), int(np.median(ys))
        t["rank"] = float(np.median([o[7] for o in obs.values()]))
        states = {i: (o[0] - bx, o[1] - by, o[2]) for i, o in obs.items()}
        still = max(xs) - min(xs) <= 4 and max(ys) - min(ys) <= 4
        if still:
            # from the scene's start, unless it comes in over an edge
            x0, y0 = obs[seen[0]][0], obs[seen[0]][1] + shift[seen[0]]
            enters = y0 <= 16 - h or x0 <= 16 - w or x0 >= 256 - 16
            lo = seen[0] if enters else first
            # not drawn although it is wholly on a screen: its animation hides it
            for i in range(seen[0], seen[-1] + 1):
                y = by + shift[i]
                if i not in obs and ((0 <= y and y + h <= 192) or (192 + gap <= y and y + h <= 384 + gap)):
                    states[i] = None
            # the longest stretch of known frames gives the period
            runs, a = [], None
            for i in range(n + 1):
                if i in states and a is None:
                    a = i
                elif i not in states and a is not None:
                    runs.append((a, i - 1))
                    a = None
            ra, rb = max(runs, key=lambda r: r[1] - r[0])
            p = _period(states, ra, rb)
            if p is not None:
                # parts of the scene with their own phase (EoS restarts an
                # animation when the sprite comes onto the other screen)
                tables, table, part_of = [], None, {}
                for i in sorted(states):
                    if table is None or (i % p in table and table[i % p] != states[i]):
                        table = {}
                        tables.append(table)
                    table[i % p] = states[i]
                    part_of[i] = len(tables) - 1
                known = sorted(states)
                for i in range(lo, n):
                    if i in states:
                        continue
                    before = [k for k in known if k < i]
                    after = [k for k in known if k > i]
                    order = ([part_of[before[-1]]] if before else []) + ([part_of[after[0]]] if after else [])
                    st = next((tables[k][i % p] for k in order if i % p in tables[k]), None)
                    if st is None:
                        continue
                    # drawn like the nearest frame EoS draws it in
                    src = obs[min(seen, key=lambda k: abs(k - i))]
                    obs[i] = (bx + st[0], by + st[1], st[2]) + src[3:]
                    added += 1
        for i, o in obs.items():
            out[i].append((t["rank"], o))
    res = []
    for i in range(n):
        res.append([(o[3], o[4], o[5], o[6], o[2], o[0], o[1] + shift[i])
                    for _, o in sorted(out[i], key=lambda e: e[0])])
    print(f"  sprites: {len(tracks)} pieces followed, {added} piece-frames put back", flush=True)
    return res
