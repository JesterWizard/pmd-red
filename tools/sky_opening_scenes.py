"""Explorers of Sky demake: turn the recorded opening scenes
(tools/sky_opening_record.py) into GBA data for src/sky_opening.c.

Used by tools/make_sky_opening.py. Per scene (make_sky_opening.SCENES):

  * Fades: EoS fades each screen with its master brightness. The level is
    found per frame and screen by matching the shown colours against the
    palettes faded by every level; the layer captures are "unfaded" through
    the same table.
  * Background: each GBA layer is one DS map layer (or two, flattened) of one
    screen or of both (EoS's continuous two-screen maps). The layer's frames
    are registered against each other (integer offsets: the DS camera and
    the layer's own scrolling) and stitched into a "world" on the DS's tile
    grid. Every world tile is turned back into EoS's 4bpp indices and palette
    (each DS map tile uses one 16-colour palette), so palette animation plays
    as in EoS. On the GBA the world streams into a 31x21-tile ring.
  * Sprites: every frame's OAM entries (both screens) with their tile data,
    as GBA OBJs (the DS and the GBA have the same shapes and sizes). The few
    8bpp entries (extended palettes: shadows, sparkles) become 4bpp with the
    colours seen on screen.
  * The GBA shows 240x160 of the DS's 256x384: a view per frame, from the
    scene's keyframes, in "canvas" pixels (the top screen over the bottom
    one).
  * A frame in which EoS shows nothing but white in that view (a white-out
    that is complete) is marked: the GBA shows white, all of it.

Lapras's scene is not stitched from pictures: its layers are EoS's map
itself and its sprites are completed (tools/sky_opening_map.py).
"""
from __future__ import annotations

import pickle
import struct
from pathlib import Path

import numpy as np

OBJ_W = [[8, 16, 32, 64], [16, 32, 32, 64], [8, 8, 16, 32]]
OBJ_H = [[8, 16, 32, 64], [8, 8, 16, 32], [16, 32, 32, 64]]
GBA_W, GBA_H = 240, 160
REGION = {"top": (0, 192), "bottom": (192, 384), "both": (0, 384)}


def chan(c):
    c = np.asarray(c, dtype=np.int32)
    return np.stack([c & 31, (c >> 5) & 31, (c >> 10) & 31], -1)


def join(ch):
    return (ch[..., 0] | (ch[..., 1] << 5) | (ch[..., 2] << 10)).astype(np.int32)


def fade(ch, mode, k):
    if mode == 0:
        return ch - ((ch * k) >> 4)
    return ch + (((31 - ch) * k) >> 4)


class Rec:
    """One scene's recordings."""

    def __init__(self, cache: Path, name: str):
        self.name = name
        self.layers = {p: np.load(cache / f"{p}_{name}.npz")["shots"] for p in ("bg2", "bg3", "obj", "full")}
        with open(cache / f"state_{name}.pkl", "rb") as fh:
            d = pickle.load(fh)
        # DeSmuME's picture after a frame shows the OAM, palettes and
        # registers of the frame before (the game updates them in VBlank):
        # pair each picture with the state recorded one frame earlier
        self.states = d["states"][:1] + d["states"][:-1]
        self.blobs = d["blobs"]
        self.n = len(self.states)

    def pals(self, i, eng):
        """BG and OBJ palette RAM of an engine (512 colours, 15-bit)."""
        s = self.states[i][eng]
        return np.array(struct.unpack("<256H", s["bgpal"]) + struct.unpack("<256H", s["objpal"])) & 0x7FFF


def screens(region):
    a, b = REGION[region]
    out = []
    if a < 192:
        out.append(("B", 0, min(b, 192)))
    if b > 192:
        out.append(("A", max(a, 192), b))
    return out


def best_fade(obs, pal_ch):
    """(mode, k, score): the master-brightness level that explains the shown
    colours `obs` (unique, non-zero, 15-bit) from the palettes."""
    if len(obs) == 0:
        return 0, 16, 1.0
    if len(obs) <= 2 and all(c == 0x7FFF for c in obs.tolist()):
        return 1, 16, 1.0   # all white: a white-out, not white art
    O = chan(obs)
    best = (0, 0, -1.0)
    for mode in (0, 1):
        for k in range(17):
            F = fade(pal_ch, mode, k)
            d = np.abs(O[:, None, :] - F[None, :, :]).max(-1).min(1)
            sc = float((d == 0).mean())
            if sc > best[2] + 1e-9:
                best = (mode, k, sc)
    return best


class Scene:
    def __init__(self, rec: Rec):
        self.rec = rec
        self.capfade = {}   # (i, eng) -> (mode, k): fade baked into the layer captures
        self.unfaded = {}

    def capture_fade(self, i, eng, y0, y1):
        key = (i, eng)
        if key not in self.capfade and eng == "B":
            # the top engine's master brightness is readable
            mb = self.rec.states[i]["mbB"]
            mode = mb >> 14
            k = min(16, mb & 31)
            self.capfade[key] = (0, 0) if mode == 0 or k == 0 else (0 if mode == 2 else 1, k)
        if key not in self.capfade and eng == "A":
            # DeSmuME's single-layer pictures of the bottom engine come out
            # without its master brightness (the "full" pass has it)
            self.capfade[key] = (0, 0)
        if key not in self.capfade:
            r = self.rec
            obs = np.unique(np.concatenate([r.layers[p][i, y0:y1].ravel() for p in ("bg2", "bg3", "obj")]))
            obs = obs[obs != 0]
            pal = np.unique(r.pals(i, eng))
            self.capfade[key] = best_fade(obs, chan(pal))[:2]
        return self.capfade[key]

    def blend_of(self, i, eng, layer):
        """(eva, evb) when EoS alpha-blends this BG layer over what is behind
        it at frame i (BLDCNT: first target, alpha mode), else None."""
        cnt, alpha, _ = self.rec.states[i][eng]["bld"]
        if (cnt >> 6) & 3 == 1 and cnt >> layer & 1:
            return min(16, alpha & 31), min(16, (alpha >> 8) & 31)
        return None

    def unfade(self, img, i, eng, y0, y1, layer=None):
        """The capture rows y0..y1 of frame i without the fade (unknown -> 0).
        A blended layer, captured alone, comes out as colour * EVA / 16 over
        the black backdrop: that is undone the same way."""
        mode, k = self.capture_fade(i, eng, y0, y1)
        bl = self.blend_of(i, eng, layer) if layer is not None else None
        blended = k == 0 and bl is not None and bl[0] < 16
        if blended:
            k = 16 - bl[0]
        if k == 0:
            return img.copy()
        if k == 16:
            return np.zeros_like(img)
        pal = np.unique(self.rec.pals(i, eng)[:256] if blended else self.rec.pals(i, eng))
        pal = pal[pal != 0]
        faded = join((chan(pal) * bl[0]) >> 4) if blended else join(fade(chan(pal), mode, k))
        lut = {}
        for f, o in zip(faded.tolist(), pal.tolist()):
            lut.setdefault(f, o)
        u, inv = np.unique(img, return_inverse=True)
        mapped = np.array([lut.get(int(c), 0) for c in u], dtype=img.dtype)
        return mapped[inv].reshape(img.shape)

    def layer_image(self, i, layers, region):
        """The chosen map layers of a region, flattened (front first), unfaded."""
        y0, y1 = REGION[region]
        out = np.zeros((y1 - y0, 256), dtype=np.uint16)
        for eng, a, b in screens(region):
            part = np.zeros((b - a, 256), dtype=np.uint16)
            for p in sorted(layers, key=lambda l: l == 3):  # BG2 in front of BG3
                img = self.unfade(self.rec.layers[f"bg{p}"][i, a:b], i, eng, a, b, layer=p)
                part = np.where(part == 0, img, part)
            out[a - y0:b - y0] = part
        return out


    def index_image(self, i, img, region):
        """Each colour as its first palette slot in that frame's palette RAM
        (so registration does not see palette animation)."""
        y0, _ = REGION[region]
        out = np.zeros(img.shape, dtype=np.int32)
        for eng, a, b in screens(region):
            pal = self.rec.pals(i, eng)[:256].tolist()
            lut = {}
            for k, c in enumerate(pal):
                if k % 16:
                    lut.setdefault(c, k + 1)
            part = img[a - y0:b - y0]
            u, inv = np.unique(part, return_inverse=True)
            m = np.array([0 if c == 0 else lut.get(int(c), 0x10000 | int(c)) for c in u], dtype=np.int32)
            out[a - y0:b - y0] = m[inv].reshape(part.shape)
        return out


# ---------------------------------------------------------------- registration

def _score(p, c, dx, dy):
    """Content moved by (dx, dy) from p to c: c[y, x] == p[y - dy, x - dx]."""
    h, w = p.shape
    ys, ye = max(0, dy), min(h, h + dy)
    xs, xe = max(0, dx), min(w, w + dx)
    if ye - ys < 8 or xe - xs < 8:
        return -1.0, 0
    pc = p[ys - dy:ye - dy, xs - dx:xe - dx]
    cc = c[ys:ye, xs:xe]
    m = (pc != 0) & (cc != 0)
    n = int(m.sum())
    if n < 200:
        return -1.0, n
    return float((pc[m] == cc[m]).mean()), n


def _phase_peaks(p, c, count=4):
    a = (p != 0) * (p.astype(np.float64) % 997)
    b = (c != 0) * (c.astype(np.float64) % 997)
    a -= a.mean(); b -= b.mean()
    R = np.fft.fft2(b) * np.conj(np.fft.fft2(a))
    R /= np.abs(R) + 1e-9
    r = np.fft.ifft2(R).real
    h, w = r.shape
    out = []
    for k in np.argsort(r.ravel())[::-1][:count]:
        dy, dx = divmod(int(k), w)
        out.append((dx - w if dx > w // 2 else dx, dy - h if dy > h // 2 else dy))
    return out


def register(images, skip=(), lock=None, cuts=None):
    """Camera positions (world x, y of the image's top-left) for a sequence of
    images of one layer. Frames in `skip` (faded) and frames with nothing to
    match hold the nearest known camera. A frame that matches nothing of the
    one before is a cut (EoS's camera jumping): its camera starts again at
    (0, 0) and its index goes to `cuts`."""
    n = len(images)
    cams = [None] * n
    prev_i, vel = None, (0, 0)
    skip = set(skip)
    for i in range(n):
        img = images[i]
        if i in skip or (img != 0).sum() < 200:
            continue
        if prev_i is None:
            cams[i] = (0, 0)
            prev_i = i
            continue
        p = images[prev_i]
        gap = i - prev_i
        pred = (vel[0] * gap, vel[1] * gap)
        cands = {(pred[0] + dx, pred[1] + dy) for dx in range(-2, 3) for dy in range(-2, 3)}
        cands |= {(dx, dy) for dx in range(-1, 2) for dy in range(-1, 2)}
        scored = [(_score(p, img, dx, dy)[0], dx, dy) for dx, dy in cands]
        if max(s for s, _, _ in scored) < 0.97:
            for (dx, dy) in _phase_peaks(p, img):
                for ex in range(-1, 2):
                    for ey in range(-1, 2):
                        scored.append((_score(p, img, dx + ex, dy + ey)[0], dx + ex, dy + ey))
        if lock:
            scored = [t for t in scored if not ("x" in lock and t[1]) and not ("y" in lock and t[2])] or [(0.0, 0, 0)]
        top = max(s for s, _, _ in scored)
        if top < 0.35 and cuts is not None and (img != 0).sum() > 5000:
            cuts.append(i)
            cams[i] = (0, 0)
            vel = (0, 0)
            prev_i = i
            continue
        # among the (nearly) best matches, the one closest to the motion so
        # far (flat skies match many shifts; animated tiles match none well)
        tol = 0.003 if top >= 0.97 else 0.08
        _, dx, dy = min((abs(dx - pred[0]) + abs(dy - pred[1]), dx, dy)
                        for s, dx, dy in scored if s >= top - tol)
        # the content moved by (dx, dy): the camera moved by (-dx, -dy)
        pc = cams[prev_i]
        cams[i] = (pc[0] - dx, pc[1] - dy)
        vel = (dx // gap, dy // gap) if gap == 1 else vel
        prev_i = i
    # frames with nothing to match: hold the nearest known camera
    known = [i for i in range(n) if cams[i] is not None]
    if not known:
        return [(0, 0)] * n
    for i in range(n):
        if cams[i] is None:
            j = min(known, key=lambda k: abs(k - i))
            cams[i] = cams[j]
    return cams


# ------------------------------------------------------------------- stitching

class World:
    """A stitched layer: 4bpp tiles on the DS tile grid.

    tiles[ty][tx] is None (transparent) or (bytes32 4bpp, (engine, palette));
    the world's pixel (0, 0) is camera-space (ox, oy) (see Layer)."""

    def __init__(self, tiles, ox, oy):
        self.tiles, self.ox, self.oy = tiles, ox, oy
        self.h, self.w = len(tiles), len(tiles[0]) if tiles else 0


def _palette_masks(colors, pals):
    """Bit p set when colour is one of palette p's colours 1..15 (pals: list of
    16-colour lists); colour 0 -> all bits."""
    lut = {}
    for p, pal in enumerate(pals):
        for c in pal[1:16]:
            lut[c] = lut.get(c, 0) | (1 << p)
    u, inv = np.unique(colors, return_inverse=True)
    full = (1 << len(pals)) - 1
    m = np.array([full if c == 0 else lut.get(int(c), 0) for c in u], dtype=np.int64)
    return m[inv].reshape(colors.shape)


def stitch(scene: Scene, images, cams, region, faded, frames):
    """images: per frame (rows, 256) unfaded; cams: camera per frame; faded:
    per frame bool (pasted last); frames: the frames to use. Returns World."""
    rows = images[0].shape[0]
    xs = [cams[i][0] for i in frames]; ys = [cams[i][1] for i in frames]
    x0, y0 = min(xs), min(ys)
    W, H = max(xs) - x0 + 256, max(ys) - y0 + rows
    world = np.zeros((H, W), dtype=np.int32)
    src = np.full((H, W), -1, dtype=np.int32)
    yreg = REGION[region][0]
    covered = np.zeros((H, W), dtype=bool)   # seen by an unfaded frame
    for i in sorted(frames, key=lambda i: (faded[i], i)):
        img = images[i]
        X, Y = cams[i][0] - x0, cams[i][1] - y0
        w = world[Y:Y + rows, X:X + 256]
        s = src[Y:Y + rows, X:X + 256]
        cv = covered[Y:Y + rows, X:X + 256]
        put = (w == 0) & (img != 0)
        if faded[i] >= 100:
            put &= ~cv
        w[put] = img[put]
        s[put] = i
        if not faded[i]:
            cv[:] = True
    # the palettes of each pixel's frame: (engine, p) for both engines
    eng_of_row = np.array(["B" if yreg + r < 192 else "A" for r in range(rows)])
    keys = [(e, p) for e in "AB" for p in range(16)]
    masks = np.zeros((H, W), dtype=np.int64)
    pal_cache = {}

    def pals_at(i):
        if i not in pal_cache:
            pa = scene.rec.pals(i, "A"); pb = scene.rec.pals(i, "B")
            pal_cache[i] = [list(pa[p * 16:p * 16 + 16]) for p in range(16)] + \
                           [list(pb[p * 16:p * 16 + 16]) for p in range(16)]
        return pal_cache[i]

    for i in np.unique(src[src >= 0]):
        sel = src == i
        masks[sel] = _palette_masks(world[sel], pals_at(int(i)))
    full = (1 << 32) - 1
    masks[src < 0] = full
    # the tile grid's phase: the one where most tiles fit one palette
    best = None
    for py in range(8):
        for px in range(8):
            m = masks[py:, px:]
            hh, ww = (m.shape[0] // 8) * 8, (m.shape[1] // 8) * 8
            t = m[:hh, :ww].reshape(hh // 8, 8, ww // 8, 8)
            a = np.bitwise_and.reduce(np.bitwise_and.reduce(t, axis=3), axis=1)
            nz = world[py:py + hh, px:px + ww].reshape(hh // 8, 8, ww // 8, 8).any(axis=(1, 3))
            fit = int(((a != 0) & nz).sum()) - int(((a == 0) & nz).sum()) * 4
            if best is None or fit > best[0]:
                best = (fit, px, py)
    _, px, py = best
    # pad so the grid starts at a tile boundary
    padl, padt = (8 - px) % 8, (8 - py) % 8
    world = np.pad(world, ((padt, (-(H + padt)) % 8), (padl, (-(W + padl)) % 8)))
    src = np.pad(src, ((padt, (-(H + padt)) % 8), (padl, (-(W + padl)) % 8)), constant_values=-1)
    masks = np.pad(masks, ((padt, (-(H + padt)) % 8), (padl, (-(W + padl)) % 8)), constant_values=full)
    Ht, Wt = world.shape[0] // 8, world.shape[1] // 8
    tiles = []
    bad = 0
    for ty in range(Ht):
        row = []
        for tx in range(Wt):
            px_ = world[ty * 8:ty * 8 + 8, tx * 8:tx * 8 + 8]
            if not px_.any():
                row.append(None)
                continue
            sr = src[ty * 8:ty * 8 + 8, tx * 8:tx * 8 + 8]
            fr = int(np.bincount(sr[sr >= 0]).argmax())
            m = int(np.bitwise_and.reduce(masks[ty * 8:ty * 8 + 8, tx * 8:tx * 8 + 8].ravel()))
            # prefer the engine of the screen this tile was seen on
            ry = (ty * 8 - padt) - (cams[fr][1] - y0) + yreg
            prefer = "B" if ry < 192 else "A"
            cand = [k for k in range(32) if m >> k & 1]
            pals = pals_at(fr)
            if cand:
                cand.sort(key=lambda k: (keys[k][0] != prefer, k))
                k = cand[0]
            else:
                bad += 1
                k = max(range(32), key=lambda k: (np.isin(px_[px_ != 0], pals[k][1:]).sum(), keys[k][0] == prefer))
            pal = pals[k]
            idx = np.zeros((8, 8), dtype=np.uint8)
            pch = chan(np.array(pal[1:16]))
            for y in range(8):
                for x in range(8):
                    c = int(px_[y, x])
                    if c == 0:
                        continue
                    if c in pal[1:16]:
                        idx[y, x] = pal[1:16].index(c) + 1
                    else:
                        idx[y, x] = int(np.abs(pch - chan(c)).sum(-1).argmin()) + 1
            data = bytes(int(idx[y, x]) | (int(idx[y, x + 1]) << 4) for y in range(8) for x in range(0, 8, 2))
            row.append((data, keys[k]))
        tiles.append(row)
    world_obj = World(tiles, x0 - padl, y0 - padt)
    world_obj.bad = bad
    return world_obj


class Layer:
    """One GBA BG layer of a scene: worlds (versions: a layer whose content
    changes, not just moves, gets a new world from that frame) and, per
    frame, the version and the camera of the DS image (world pixel = camera +
    image pixel - origin)."""

    def __init__(self, worlds, version, cams, region):
        self.worlds, self.version, self.cams, self.region = worlds, version, cams, region

    def view(self, i, wx, wy):
        """(version, world x, world y) of the GBA view's top-left (canvas wx, wy) at frame i."""
        w = self.worlds[self.version[i]]
        cx, cy = self.cams[i]
        return self.version[i], cx + wx - w.ox, cy + (wy - REGION[self.region][0]) - w.oy


def segment_versions(idx_images, cams, thresh=0.03, max_versions=1):
    """Frame -> version. A frame that no longer matches its version's world
    (animated map tiles, a growing glow) switches to an earlier version it
    matches (animations that cycle) or starts a new one (at most
    max_versions; after that the last version is held)."""
    n = len(idx_images)
    version = [0] * n
    if max_versions <= 1:
        return version
    rows = idx_images[0].shape[0]
    xs = [c[0] for c in cams]; ys = [c[1] for c in cams]
    x0, y0 = min(xs), min(ys)
    W, H = max(xs) - x0 + 256, max(ys) - y0 + rows
    worlds = [np.zeros((H, W), dtype=np.int32)]
    v = 0

    def mismatch(world, img, X, Y):
        w = world[Y:Y + rows, X:X + 256]
        m = (w != 0) & (img != 0)
        if m.sum() < 500:
            return 0.0
        return float((w[m] != img[m]).mean())

    for i in range(n):
        img = idx_images[i]
        X, Y = cams[i][0] - x0, cams[i][1] - y0
        if (img != 0).sum() >= 500 and mismatch(worlds[v], img, X, Y) > thresh:
            scores = [mismatch(w, img, X, Y) for w in worlds]
            j = int(np.argmin(scores))
            if scores[j] <= thresh:
                v = j
            elif len(worlds) < max_versions:
                worlds.append(np.zeros((H, W), dtype=np.int32))
                v = len(worlds) - 1
        w = worlds[v][Y:Y + rows, X:X + 256]
        put = (w == 0) & (img != 0)
        w[put] = img[put]
        version[i] = v
    return version


def build_layer(scene: Scene, layers, region, max_versions=1, thresh=0.03, lock=None, find_cuts=False):
    n = scene.rec.n
    images = [scene.layer_image(i, layers, region) for i in range(n)]
    idx = [scene.index_image(i, im, region) for i, im in enumerate(images)]
    # 0: the capture shows the palette's colours; else how much worse it is
    # (stitch pastes the best frames first): a blended layer comes darkened
    # by its EVA, several colours falling on one; a fade says nothing sure
    faded = []
    for i in range(n):
        f = 0
        for eng, a, b in screens(region):
            if scene.capture_fade(i, eng, a, b)[1] != 0:
                f = 100
            for p in layers:
                bl = scene.blend_of(i, eng, p)
                if bl and bl[0] < 16:
                    f = max(f, 17 - bl[0])
        faded.append(f)
    if max_versions == "frames":
        # a still layer whose picture changes (light rays growing): a world
        # per different picture (at most 24, evenly picked); a frame whose
        # picture cannot be read (a white-out over it) keeps the one before
        seen, order, version, v = {}, [], [], 0
        y0, y1 = REGION[region]
        for i in range(n):
            # (a capture with no transparent pixel left is the white-out)
            whited = all(scene.rec.layers[f"bg{p}"][i, y0:y1].all() for p in layers)
            if images[i].any() and not whited:
                key = images[i].tobytes()
                if key not in seen:
                    seen[key] = len(order)
                    order.append(i)
                v = seen[key]
            version.append(v)
        step = (len(order) + 23) // 24 if order else 1
        kept = order[::step] or [0]
        version = [min(v // step, len(kept) - 1) for v in version]
        cams = [(0, 0)] * n
        worlds = [stitch(scene, images, cams, region, faded, [i]) for i in kept]
        return Layer(worlds, version, cams, region), images
    cuts = []
    cams = register(idx, skip=[i for i in range(n) if faded[i]], lock=lock, cuts=cuts if find_cuts else None)
    if lock == "x":
        cams = [(0, c[1]) for c in cams]
    elif lock == "y":
        cams = [(c[0], 0) for c in cams]
    elif lock == "xy":
        cams = [(0, 0)] * n
    # each cut starts a part with its own world(s)
    version = [0] * n
    bounds = [0] + sorted(cuts) + [n]
    base = 0
    for a, b in zip(bounds, bounds[1:]):
        if a >= b:
            continue
        part = segment_versions(idx[a:b], cams[a:b], thresh, max_versions)
        for i in range(a, b):
            version[i] = base + part[i - a]
        base += max(part) + 1
    worlds = []
    for v in range(max(version) + 1):
        frames = [i for i in range(n) if version[i] == v]
        worlds.append(stitch(scene, images, cams, region, faded, frames))
    return Layer(worlds, version, cams, region), images

def render_world(world: World, pal_of, x, y, w, h):
    """15-bit picture of a world window (x, y = world pixel); pal_of(key) ->
    16 colours. Transparent -> 0."""
    out = np.zeros((h, w), dtype=np.int32)
    for ty in range(y >> 3, (y + h + 7) >> 3):
        for tx in range(x >> 3, (x + w + 7) >> 3):
            if not (0 <= ty < world.h and 0 <= tx < world.w) or world.tiles[ty][tx] is None:
                continue
            data, key = world.tiles[ty][tx]
            pal = pal_of(key)
            idx = np.frombuffer(data, dtype=np.uint8)
            pix = np.stack([idx & 15, idx >> 4], -1).reshape(8, 8)
            col = np.where(pix == 0, 0, np.array(pal)[pix])
            Y, X = ty * 8 - y, tx * 8 - x
            ys, xs = max(0, -Y), max(0, -X)
            ye, xe = min(8, h - Y), min(8, w - X)
            if ys < ye and xs < xe:
                out[Y + ys:Y + ye, X + xs:X + xe] = col[ys:ye, xs:xe]
    return out


# ------------------------------------------------------------- GBA conversion

def _period(get, n, m, tol=0.1):
    """Smallest p (>= 16 cells) with get(i, j) == get(i + p, j) for all but
    `tol` of the cells known in both."""
    best = None
    for p in range(16, n - 8):
        eq = ne = 0
        for i in range(n - p):
            for j in range(m):
                x, y = get(i, j), get(i + p, j)
                if x is None or y is None:
                    continue
                if x[0] == y[0]:
                    eq += 1
                else:
                    ne += 1
        if eq + ne >= 200 and ne <= tol * (eq + ne):
            return p
    return best


def reduce_period(world: World):
    """A layer that scrolls by itself (EoS's back-scroll) repeats: keep one
    period. Returns (world, wrap_x, wrap_y)."""
    wrap_x = wrap_y = False
    if world.w > 40:
        p = _period(lambda i, j: world.tiles[j][i], world.w, world.h)
        if p:
            for y in range(world.h):
                row = world.tiles[y]
                world.tiles[y] = [next((row[x2] for x2 in range(x, world.w, p) if row[x2] is not None), None)
                                  for x in range(p)]
            world.w, wrap_x = p, True
            # a texture scrolling at an angle leaves holes: take the nearest
            # tile above or below
            rows = [y for y in range(world.h) if any(t is not None for t in world.tiles[y])]
            for x in range(world.w):
                col = [world.tiles[y][x] for y in range(world.h)]
                known = [y for y in range(world.h) if col[y] is not None]
                if not known:
                    continue
                for y in range(rows[0], rows[-1] + 1):
                    if col[y] is None:
                        j = min(known, key=lambda k: abs(k - y))
                        world.tiles[y][x] = col[j]
    if world.h > 40:
        p = _period(lambda i, j: world.tiles[i][j], world.h, world.w)
        if p:
            world.tiles = [[next((world.tiles[y2][x] for y2 in range(y, world.h, p) if world.tiles[y2][x] is not None), None)
                            for x in range(world.w)] for y in range(p)]
            world.h, wrap_y = p, True
    return world, wrap_x, wrap_y


def flip_variants(data: bytes):
    """(hflip, vflip) -> the 4bpp tile flipped."""
    rows = [data[i * 4:i * 4 + 4] for i in range(8)]

    def hf(r):
        nib = []
        for v in r:
            nib += [v & 15, v >> 4]
        nib = nib[::-1]
        return bytes(nib[i] | (nib[i + 1] << 4) for i in range(0, 8, 2))
    out = {}
    for h in (0, 1):
        for v in (0, 1):
            rr = rows[::-1] if v else rows
            out[(h, v)] = b"".join(hf(r) if h else r for r in rr)
    return out


def world_to_gba(world: World, slot_of, bank, index):
    """-> map: per cell, tile number in the layer's bank << 16 | the GBA
    tilemap's flip and palette bits, 0xFFFFFFFF transparent. New tiles go to
    `bank` (shared by the layer's versions, so the GBA reloads only the
    tiles that change)."""
    mp = []
    for y in range(world.h):
        for x in range(world.w):
            t = world.tiles[y][x]
            if t is None:
                mp.append(0xFFFFFFFF)
                continue
            data, key = t
            ent = None
            for (h, v), d in flip_variants(data).items():
                if d in index:
                    ent = (index[d] << 16) | (h << 10) | (v << 11)
                    break
            if ent is None:
                index[data] = len(bank)
                ent = len(bank) << 16
                bank.append(data)
            mp.append(ent | (slot_of[key] << 12))
    return mp


def display_fade(rec: Rec, i, eng):
    """The fade EoS shows on a screen at frame i: -k towards black, +k towards white."""
    if eng == "B":
        mb = rec.states[i]["mbB"]
        mode, k = mb >> 14, min(16, mb & 31)
        if mode == 0 or k == 0:
            return 0
        return -k if mode == 2 else k
    full = rec.layers["full"][i, 192:]
    obs = np.unique(full)
    obs = obs[obs != 0]
    if len(obs) == 0:
        return -16
    mode, k, _ = best_fade(obs, chan(np.unique(rec.pals(i, "A"))))
    return -k if mode == 0 else k


class SlotAlloc:
    """GBA palette slots for DS palettes (keys), kept stable across frames."""

    def __init__(self, n=16):
        self.slots = [None] * n

    def frame(self, keys):
        keys = list(dict.fromkeys(keys))
        for k in keys:
            if k in self.slots:
                continue
            free = [s for s in range(len(self.slots)) if self.slots[s] is None or self.slots[s] not in keys]
            if not free:
                raise SystemExit("sky opening: more than 16 OBJ palettes in one frame")
            s = next((s for s in free if self.slots[s] is None), free[0])
            self.slots[s] = k
        return {k: self.slots.index(k) for k in keys}


def obj_canvas(eng, a0, a1, gap=0):
    x, y = a1 & 511, a0 & 255
    if x >= 256:
        x -= 512
    if y >= 192:
        y -= 256
    return x, y + (192 + gap if eng == "A" else 0)


def ext_votes(rec: Rec, i, eng, a0, a1, data, votes):
    """Counts, per value of an 8bpp (extended palette) entry, the colours the
    OBJ picture shows at its pixels: votes[value][15-bit colour] += 1."""
    w, h = OBJ_W[a0 >> 14][a1 >> 14], OBJ_H[a0 >> 14][a1 >> 14]
    x, y = obj_canvas(eng, a0, a1)
    pic = rec.layers["obj"][i]
    hf, vf = (a1 >> 12) & 1, (a1 >> 13) & 1
    y_lo, y_hi = (192, 384) if eng == "A" else (0, 192)
    for ty in range(h):
        Y = y + ty
        if not y_lo <= Y < y_hi:
            continue
        for tx in range(w):
            X = x + tx
            if not 0 <= X < 256:
                continue
            sx, sy = (w - 1 - tx if hf else tx), (h - 1 - ty if vf else ty)
            v = data[((sy // 8) * (w // 8) + sx // 8) * 64 + (sy % 8) * 8 + sx % 8]
            if v:
                c = votes.setdefault(v, {})
                k = int(pic[Y, X])
                c[k] = c.get(k, 0) + 1


def ext_tables_of(rec: Rec, frames):
    """(engine, palette) -> {value: colour} for the scene's 8bpp entries: the
    colour most of a value's pixels show over the whole scene. (One frame is
    not enough: where another sprite stands on a shadow the picture shows
    that sprite, and a black shadow looks like nothing at all.)"""
    votes = {}
    for i in frames:
        for eng in "AB":
            for (oi, a0, a1, a2, bk) in rec.states[i][eng]["ents"]:
                if a0 & 0x2000:
                    ext_votes(rec, i, eng, a0, a1, rec.blobs[bk], votes.setdefault((eng, a2 >> 12), {}))
    return {k: {v: max(c, key=c.get) for v, c in tab.items()} for k, tab in votes.items()}


def to_4bpp(data, w, h, mapping):
    out = bytearray()
    for t in range(w * h // 64):
        d = data[t * 64:t * 64 + 64]
        for k in range(0, 64, 2):
            out.append(mapping.get(d[k], 0) | (mapping.get(d[k + 1], 0) << 4))
    return bytes(out)


def view_track(keys, n, ease=True):
    """Canvas (wx, wy) of the GBA view per frame, smoothstep (or straight,
    for a view that follows EoS's own steady camera) between keyframes."""
    out = []
    for i in range(n):
        if i <= keys[0][0]:
            out.append(tuple(keys[0][1:]))
            continue
        if i >= keys[-1][0]:
            out.append(tuple(keys[-1][1:]))
            continue
        for (a, ax, ay), (b, bx, by) in zip(keys, keys[1:]):
            if a <= i <= b:
                t = (i - a) / (b - a)
                if ease:
                    t = t * t * (3 - 2 * t)
                out.append((round(ax + (bx - ax) * t), round(ay + (by - ay) * t)))
                break
    return out


def convert_scene(cache: Path, cfg, rom=None):
    """One GBA scene (a frame range of a recorded scene) -> its data."""
    rec = Rec(cache, cfg["rec"])
    sc = Scene(rec)
    a, b = cfg.get("frames", (0, rec.n - 1))
    n = b - a + 1
    views = view_track([(k - a, x, y) for k, x, y in cfg["view"]], n, cfg.get("ease", True))
    # a scene whose backgrounds are EoS's map itself, on a canvas with a gap
    # between the screens (tools/sky_opening_map.py)
    ms = filled = None
    if cfg.get("map"):
        import sky_opening_map as som
        ms = som.MapScene(rom, cfg["map"], rec)
        filled = som.complete_objs(rec, ms.gap, [ms.top_y[0] - y for y in ms.top_y], first=a)
    layers = []
    opts_of = {}
    for spec in ([] if ms else cfg["bg"]):
        if spec is None:
            layers.append(None)
            continue
        region, dsl = spec[0], spec[1]
        opts = spec[2] if len(spec) > 2 else {}
        lay, imgs = build_layer(sc, dsl, region, max_versions=opts.get("versions", 1),
                                thresh=opts.get("thresh", 0.03), lock=opts.get("lock"),
                                find_cuts=opts.get("cuts", False))
        lay.images, lay.ds_layers = imgs, dsl
        opts_of[id(lay)] = opts
        layers.append(lay)
    # BG palette slots: every (engine, palette) the tiles use; DS palette p
    # keeps slot p where it can
    keys = {}
    for lay in layers:
        if lay is None:
            continue
        for v in {lay.version[i] for i in range(a, b + 1)}:
            for row in lay.worlds[v].tiles:
                for t in row:
                    if t:
                        keys[t[1]] = keys.get(t[1], 0) + 1
    if ms:
        for ml in ms.layers:
            for row in ml.cells:
                for c in row:
                    if c:
                        keys[("A", c[3])] = keys.get(("A", c[3]), 0) + 1
    # the two screens of one map have the same palettes: one slot for both
    alias = {}
    for k in list(keys):
        if k[0] == "B" and ("A", k[1]) in keys:
            same = [np.array_equal(rec.pals(i, "A")[k[1] * 16:k[1] * 16 + 16], rec.pals(i, "B")[k[1] * 16:k[1] * 16 + 16])
                    for i in range(a, b + 1, 4)]
            if sum(same) >= 0.75 * len(same):
                alias[k] = ("A", k[1])
                keys[("A", k[1])] += keys.pop(k)
    slot_of = {}
    order = sorted(keys, key=lambda k: -keys[k])
    for k in order:
        if k[1] not in slot_of.values():
            slot_of[k] = k[1]
    for k in order:
        if k not in slot_of:
            free = [s for s in range(16) if s not in slot_of.values()]
            if not free:
                raise SystemExit(f"sky opening {cfg['name']}: more than 16 BG palettes {sorted(keys)}")
            slot_of[k] = free[0]
    for k, to in alias.items():
        slot_of[k] = slot_of[to]
    gl = []
    for lay in layers:
        if lay is None:
            gl.append(None)
            continue
        vers = []
        bank, index = [], {}
        for v in sorted({lay.version[i] for i in range(a, b + 1)}):
            w, wrap_x, wrap_y = reduce_period(lay.worlds[v])
            mp = world_to_gba(w, slot_of, bank, index)
            vers.append(dict(w=w.w, h=w.h, wrapx=wrap_x, wrapy=wrap_y, map=mp, src=v))
        tiles = b"".join(bank)
        for d in vers:
            d["tiles"] = tiles
        gl.append(dict(versions=vers, vindex={d["src"]: k for k, d in enumerate(vers)}, layer=lay, tiles=tiles))
    if ms:
        for ml in ms.layers:
            # a tileset: the map's own tiles (0 blank), then the animated ones
            mp = [e if e == 0xFFFFFFFF else (e & 0xFFFF0FFF) | (slot_of[("A", (e >> 12) & 15)] << 12) for e in ml.gba_map()]
            v = dict(w=ml.w, h=ml.h, wrapx=True, wrapy=False, map=mp, src=0, tiles=b"".join(ml.tiles), tileset=True,
                     anim=dict(first=ml.first, count=ml.count, frames=[b"".join(f) for f in ml.frames]))
            gl.append(dict(versions=[v], vindex={0: 0}, layer=None, tiles=v["tiles"]))
    frames, objs, obj_bank, obj_index = [], [], [], {}
    bg_sets, obj_sets = [], []
    alloc = SlotAlloc()
    # an extra picture over the scene (the logo): OBJs in every frame, first
    # in the list (in front, and their tiles keep their place in OBJ VRAM)
    over = cfg.get("overlay")
    if over:
        obj_bank.append(over["tiles"])
    shifts = cfg.get("obj_shift", ())
    ext_tables = {("X",) + k: tab for k, tab in ext_tables_of(rec, range(a, b + 1)).items()}
    prev_list = None
    max_tiles = 0
    for fi in range(n):
        i = a + fi
        wx, wy = views[fi]
        fr = dict(x=[0, 0], y=[0, 0], ver=[0, 0], flags=0, bgblend=None)
        eng_view = "A" if wy + 80 >= 192 else "B"
        for li, g in enumerate(gl):
            if g is None:
                continue
            if ms:
                ml = ms.layers[li]
                fr["x"][li] = (ms.x[li][i] + wx) % (ml.w * 8)
                fr["y"][li] = ms.top_y[i] + wy - ml.row0 * 8
                fr["ver"][li] = ms.anim[li][i]   # (a tileset layer: its animation frame)
                continue
            lay = g["layer"]
            # EoS shows nothing of this layer in the view (a flash that is
            # over, light that has not come yet): the stitched world would
            # show it, so the layer is hidden for this frame
            part = np.concatenate([rec.layers[f"bg{p}"][i][max(wy, REGION[lay.region][0]):min(wy + GBA_H, REGION[lay.region][1]),
                                                           wx:wx + GBA_W] for p in lay.ds_layers])
            if not part.any():
                fr["flags"] |= 2 << li
            # EoS blends BG2 over the rest (light rays, haze)
            if li == 0 and len(lay.ds_layers) == 1:
                bl = sc.blend_of(i, eng_view, lay.ds_layers[0])
                if bl and bl != (16, 0):
                    fr["flags"] |= 1
                    fr["bgblend"] = bl
            v, x, y = g["layer"].view(i, wx, wy)
            fr["ver"][li] = g["vindex"][v]
            w = g["versions"][fr["ver"][li]]
            if w["wrapx"]:
                x %= w["w"] * 8
            if w["wrapy"]:
                y %= w["h"] * 8
            fr["x"][li], fr["y"][li] = x, y
        pa, pb = rec.pals(i, "A"), rec.pals(i, "B")
        cols = [0] * 256
        mask = 0
        for k, s in slot_of.items():
            if k in alias:
                continue
            src = pa if k[0] == "A" else pb
            cols[s * 16:s * 16 + 16] = [int(c) for c in src[k[1] * 16:k[1] * 16 + 16]]
            if k[0] == "A":
                mask |= 1 << s
        cols[0] = int((pa if wy + 80 >= 192 else pb)[0])
        key = (tuple(cols), mask)
        if key not in bg_sets:
            bg_sets.append(key)
        fr["bgpal"] = bg_sets.index(key)
        ents = []
        if over:
            for (px, py, tile, pal) in over["pieces"]:
                ents.append(dict(x=over["x"] + px, y=over["y"] + py, tile=tile, shape=0, size=1, hf=0, vf=0,
                                 semi=0, prio=0, pk=("L", pal), eng="A", ntiles=4))
        if filled is not None:
            raw = filled[i]
        else:
            raw = [(eng, a0, a1, a2, bk) + obj_canvas(eng, a0, a1)
                   for eng in "AB" for (oi, a0, a1, a2, bk) in rec.states[i][eng]["ents"]]
        for (eng, a0, a1, a2, bk, x, y) in raw:
            w, h = OBJ_W[a0 >> 14][a1 >> 14], OBJ_H[a0 >> 14][a1 >> 14]
            gx, gy = x - wx, y - wy
            for (x0, y0, x1, y1, dx, dy) in shifts:   # canvas box -> moved on the GBA
                if x0 <= x < x1 and y0 <= y < y1:
                    gx, gy = gx + dx, gy + dy
            if gx >= GBA_W or gx + w <= 0 or gy >= GBA_H or gy + h <= 0:
                continue
            if filled is None and ((eng == "B" and y >= 192) or (eng == "A" and y + h <= 192)):
                continue
            data = rec.blobs[bk]
            if a0 & 0x2000:
                pk = ("X", eng, a2 >> 12)
                mapping = ext_tables.setdefault(pk + ("map",), {})
                for v in sorted(set(data) - {0}):
                    if v not in mapping and len(mapping) < 15:
                        mapping[v] = len(mapping) + 1
                data = to_4bpp(data, w, h, mapping)
            else:
                pk = (eng, a2 >> 12)
            if data not in obj_index:
                obj_index[data] = sum(len(d) for d in obj_bank) // 32
                obj_bank.append(data)
            ents.append(dict(x=gx, y=gy, tile=obj_index[data], shape=a0 >> 14, size=a1 >> 14,
                             hf=(a1 >> 12) & 1, vf=(a1 >> 13) & 1, semi=int((a0 >> 10) & 3 == 1),
                             prio=(a2 >> 10) & 3, pk=pk, eng=eng, ntiles=w * h // 64))
        total, kept = 0, []
        for e in ents:
            if total + e["ntiles"] > 512:
                continue
            total += e["ntiles"]
            kept.append(e)
        max_tiles = max(max_tiles, sum(e["ntiles"] for e in ents))
        slots = alloc.frame([e["pk"] for e in kept])
        ocols = [0] * 256
        omask = 0
        for s, pk in enumerate(alloc.slots):
            if pk is None:
                continue
            if pk[0] == "L":
                pal, eng = over["pals"][pk[1]], "A"
            elif pk[0] == "X":
                tab, mapping = ext_tables.get(pk, {}), ext_tables[pk + ("map",)]
                pal = [0] * 16
                for v, ix in mapping.items():
                    pal[ix] = tab.get(v, 0)
                eng = pk[1]
            else:
                src = pa if pk[0] == "A" else pb
                pal = [int(c) for c in src[256 + pk[1] * 16:256 + pk[1] * 16 + 16]]
                eng = pk[0]
            ocols[s * 16:s * 16 + 16] = pal
            if eng == "A":
                omask |= 1 << s
        okey = (tuple(ocols), omask)
        if okey not in obj_sets:
            obj_sets.append(okey)
        fr["objpal"] = obj_sets.index(okey)
        lst = [(e["x"], e["y"], e["tile"], e["shape"] | (e["size"] << 2) | (e["hf"] << 4) | (e["vf"] << 5)
                | (e["semi"] << 6) | (e["prio"] << 7) | (slots[e["pk"]] << 9) | (int(e["eng"] == "A") << 13))
               for e in kept]
        if lst != prev_list:
            fr["first"] = len(objs)
            objs.extend(lst)
            prev_list = lst
        else:
            fr["first"] = frames[-1]["first"]
        fr["count"] = len(lst)
        fr["fadeA"], fr["fadeB"] = display_fade(rec, i, "A"), display_fade(rec, i, "B")
        if ms:
            # one picture from both screens: the top screen's fade (the one
            # that is read, not estimated) for all of it
            fr["fadeA"] = fr["fadeB"]
        elif (rec.layers["full"][i][wy:wy + GBA_H, wx:wx + GBA_W] == 0x7FFF).all():
            # EoS shows nothing but white here (a white-out that is complete):
            # so does the GBA, whatever a blend's rounding or an estimated
            # fade would leave
            fr["flags"] |= 8
        semi = next((e for e in kept if e["semi"]), None)
        if fr["bgblend"]:
            fr["eva"], fr["evb"] = fr["bgblend"]
        elif semi:
            ba = rec.states[i][semi["eng"]]["bld"][1]
            fr["eva"], fr["evb"] = min(16, ba & 31), min(16, (ba >> 8) & 31)
        else:
            fr["eva"], fr["evb"] = 16, 0
        frames.append(fr)
    return dict(name=cfg["name"], layers=gl, frames=frames, objs=objs, obj_tiles=b"".join(obj_bank),
                bg_sets=bg_sets, obj_sets=obj_sets, max_tiles=max_tiles, rec=rec, views=views, start=a,
                gap=ms.gap if ms else 0)


# ------------------------------------------------------------ preview render

def _fade_col(c, level):
    ch = chan(c)
    if level < 0:
        ch = ch * (16 + level) // 16
    elif level > 0:
        ch = ch + (31 - ch) * level // 16
    return join(ch)


def render_gba(conv, fi):
    """What src/sky_opening.c should show for frame fi (240x160, 15-bit):
    a check of the converted data, and the GBA side of the comparison sheets."""
    fr = conv["frames"][fi]
    if fr["flags"] & 8:
        return np.full((GBA_H, GBA_W), 0x7FFF, dtype=np.int32)
    bgc, bgm = conv["bg_sets"][fr["bgpal"]]
    obc, obm = conv["obj_sets"][fr["objpal"]]
    bgc = np.array(bgc, dtype=np.int32)
    obc = np.array(obc, dtype=np.int32)
    for s in range(16):
        lv = fr["fadeA"] if bgm >> s & 1 else fr["fadeB"]
        bgc[s * 16:s * 16 + 16] = _fade_col(bgc[s * 16:s * 16 + 16], lv)
        lv = fr["fadeA"] if obm >> s & 1 else fr["fadeB"]
        obc[s * 16:s * 16 + 16] = _fade_col(obc[s * 16:s * 16 + 16], lv)
    out = np.full((GBA_H, GBA_W), int(bgc[0]), dtype=np.int32)
    prio = np.full((GBA_H, GBA_W), 4, dtype=np.int32)
    for li in (1, 0):   # BG3 then BG2
        g = conv["layers"][li]
        if g is None or fr["flags"] & (2 << li):
            continue
        blend = li == 0 and fr["flags"] & 1
        v = g["versions"][0 if g["versions"][0].get("tileset") else fr["ver"][li]]
        anim = v.get("anim")
        X, Y = fr["x"][li], fr["y"][li]
        for ty in range(GBA_H // 8 + 1):
            for tx in range(GBA_W // 8 + 1):
                cx, cy = (X >> 3) + tx, (Y >> 3) + ty
                if v["wrapx"]:
                    cx %= v["w"]
                if v["wrapy"]:
                    cy %= v["h"]
                if not (0 <= cx < v["w"] and 0 <= cy < v["h"]):
                    continue
                e = v["map"][cy * v["w"] + cx]
                if e == 0xFFFFFFFF:
                    continue
                t = e >> 16
                if anim and t >= anim["first"]:
                    t -= anim["first"]
                    d = np.frombuffer(anim["frames"][fr["ver"][li]][t * 32:t * 32 + 32], dtype=np.uint8)
                else:
                    d = np.frombuffer(v["tiles"][t * 32:t * 32 + 32], dtype=np.uint8)
                pix = np.stack([d & 15, d >> 4], -1).reshape(8, 8)
                if e & 0x400:
                    pix = pix[:, ::-1]
                if e & 0x800:
                    pix = pix[::-1]
                col = bgc[((e >> 12) & 15) * 16 + pix]
                px0 = ((X >> 3) + tx) * 8 - X
                py0 = ((Y >> 3) + ty) * 8 - Y
                for yy in range(8):
                    sy = py0 + yy
                    if not 0 <= sy < GBA_H:
                        continue
                    for xx in range(8):
                        sx = px0 + xx
                        if 0 <= sx < GBA_W and pix[yy, xx]:
                            if blend:
                                a, b2 = chan(int(col[yy, xx])), chan(int(out[sy, sx]))
                                out[sy, sx] = int(join(np.minimum(31, (a * fr["eva"] + b2 * fr["evb"]) // 16)))
                            else:
                                out[sy, sx] = col[yy, xx]
                            prio[sy, sx] = 2 if li == 0 else 3
    objt = conv["obj_tiles"]
    for (x, y, tile, attr) in reversed(conv["objs"][fr["first"]:fr["first"] + fr["count"]]):
        shape, size = attr & 3, (attr >> 2) & 3
        w, h = OBJ_W[shape][size], OBJ_H[shape][size]
        hf, vf, semi, pr, pal = (attr >> 4) & 1, (attr >> 5) & 1, (attr >> 6) & 1, (attr >> 7) & 3, (attr >> 9) & 15
        d = np.frombuffer(objt[tile * 32:tile * 32 + w * h // 2], dtype=np.uint8)
        nib = np.stack([d & 15, d >> 4], -1).reshape(h // 8, w // 8, 8, 8)
        img = nib.transpose(0, 2, 1, 3).reshape(h, w)
        if hf:
            img = img[:, ::-1]
        if vf:
            img = img[::-1]
        for yy in range(h):
            sy = y + yy
            if not 0 <= sy < GBA_H:
                continue
            for xx in range(w):
                sx = x + xx
                if 0 <= sx < GBA_W and img[yy, xx] and pr <= prio[sy, sx]:
                    c = int(obc[pal * 16 + img[yy, xx]])
                    if semi:
                        a, b2 = chan(c), chan(int(out[sy, sx]))
                        c = int(join(np.minimum(31, (a * fr["eva"] + b2 * fr["evb"]) // 16)))
                    out[sy, sx] = c
    return out


def rgb8(img):
    img = np.asarray(img, dtype=np.int32)
    return np.stack([(img & 31) << 3, ((img >> 5) & 31) << 3, ((img >> 10) & 31) << 3], -1).astype(np.uint8)
