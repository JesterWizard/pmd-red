#!/usr/bin/env python3
"""Explorers of Sky demake: record EoS's boot opening in DeSmuME for
tools/make_sky_opening.py.

    tools/sky_opening_record.py EOS.nds CACHE_DIR [--pass bg2|bg3|obj|all]

EoS's opening (unionall.ssb DEMO_02) is fourteen ground scenes driven by
scripts (camera moves, actors, objects, effects, scrolling layers, palette
animation). Instead of re-implementing EoS's ground engine, the demake plays
back what EoS puts on screen, using EoS's own graphics: this runs the ROM
headless (py-desmume, a cold boot, no input: deterministic) and records,
frame by frame, both screens with one layer at a time:

  * pass bg2 / bg3: the front / back map layer alone (BG2 / BG3 on both
    engines; EoS's ground mode uses no other BG layer during the opening),
    as 15-bit colours, 256x384 (top screen over bottom screen);
  * pass obj: the OBJ layer alone, and the state: every visible OAM entry
    with its tile data (deduplicated), the BG and OBJ palette RAM, the
    blend registers and the top engine's master brightness;
  * pass full: everything, as shown (for the fades: EoS fades the screens
    with the master brightness, which the layer passes do not always show).

Frames are DeSmuME frames from power-on (frame 1 = the first). Each pass
writes CACHE_DIR/<pass>_<scene>.npz (or .pkl) for the scenes in
make_sky_opening.SCENES. The ROM is only read.
"""
from __future__ import annotations

import argparse
import hashlib
import os
import pickle
import struct
import subprocess
import sys
from pathlib import Path

import numpy as np

os.environ.setdefault("SDL_VIDEODRIVER", "dummy")
os.environ.setdefault("SDL_AUDIODRIVER", "dummy")

OBJ_W = [[8, 16, 32, 64], [16, 32, 32, 64], [8, 8, 16, 32]]
OBJ_H = [[8, 16, 32, 64], [8, 8, 16, 32], [16, 32, 32, 64]]
PASSES = {"bg2": (2,), "bg3": (3,), "obj": (4,), "full": (0, 1, 2, 3, 4)}


def screen15(e) -> np.ndarray:
    """Both screens as 15-bit BGR colours (DeSmuME outputs c << 3)."""
    a = np.asarray(e.screenshot().convert("RGB"), dtype=np.uint16) >> 3
    return a[..., 0] | (a[..., 1] << 5) | (a[..., 2] << 10)


def obj_state(e) -> dict:
    m = e.memory.unsigned
    rd = lambda a, n: bytes(m[a:a + n])
    rec = {}
    for eng, oam_a, vram, io in (("A", 0x07000000, 0x06400000, 0x04000000),
                                 ("B", 0x07000400, 0x06600000, 0x04001000)):
        oam = rd(oam_a, 1024)
        dispcnt = struct.unpack("<I", rd(io, 4))[0]
        bnd = (dispcnt >> 20) & 3
        ents = []
        for i in range(128):
            a0, a1, a2 = struct.unpack_from("<3H", oam, i * 8)
            if (a0 & 0x300) == 0x200 or (a0 >> 14) == 3:
                continue
            w, h = OBJ_W[a0 >> 14][a1 >> 14], OBJ_H[a0 >> 14][a1 >> 14]
            data = rd(vram + ((a2 & 0x3FF) << (5 + bnd)), w * h // (1 if a0 & 0x2000 else 2))
            ents.append((i, a0, a1, a2, data))
        aff = [struct.unpack_from("<h", oam, k * 8 + 6)[0] for k in range(128)]
        rec[eng] = dict(ents=ents, aff=aff, dispcnt=dispcnt,
                        bgcnt=struct.unpack_from("<4H", rd(io + 8, 8)),
                        objpal=rd(0x05000200 if eng == "A" else 0x05000600, 512),
                        bgpal=rd(0x05000000 if eng == "A" else 0x05000400, 512),
                        bld=struct.unpack("<3H", rd(io + 0x50, 6)))
    rec["mbB"] = struct.unpack("<H", rd(0x0400106C, 2))[0]
    return rec


def run_pass(rom: str, cache: Path, name: str, scenes) -> None:
    from desmume.emulator import DeSmuME

    e = DeSmuME()
    e.open(rom)
    for layer in range(5):
        on = layer in PASSES[name]
        e.gpu_set_layer_main_enable_state(layer, on)
        e.gpu_set_layer_sub_enable_state(layer, on)
    last = max(s["end"] for s in scenes)
    frame = 0
    cur = None
    shots: list = []
    states: list = []
    blobs: dict = {}
    while frame < last:
        e.cycle(with_joystick=False)
        frame += 1
        sc = next((s for s in scenes if s["start"] <= frame <= s["end"]), None)
        if sc is not cur:
            if cur is not None:
                save_scene(cache, name, cur, shots, states, blobs)
            cur, shots, states, blobs = sc, [], [], {}
        if sc is None:
            continue
        shots.append(screen15(e))
        if name == "obj":
            st = obj_state(e)
            for eng in "AB":
                ents = []
                for (i, a0, a1, a2, data) in st[eng]["ents"]:
                    k = hashlib.sha1(data).hexdigest()[:16]
                    blobs.setdefault(k, data)
                    ents.append((i, a0, a1, a2, k))
                st[eng]["ents"] = ents
            states.append(st)
    if cur is not None:
        save_scene(cache, name, cur, shots, states, blobs)


def save_scene(cache, name, scene, shots, states, blobs) -> None:
    np.savez_compressed(cache / f"{name}_{scene['name']}.npz", shots=np.stack(shots))
    if name == "obj":
        with open(cache / f"state_{scene['name']}.pkl", "wb") as fh:
            pickle.dump(dict(states=states, blobs=blobs), fh)
    print(f"  recorded {name} {scene['name']}: {len(shots)} frames", flush=True)


def record(rom: str, cache: Path, scenes, passes=("bg2", "bg3", "obj", "full")) -> None:
    """Runs the missing passes in parallel processes."""
    cache.mkdir(parents=True, exist_ok=True)
    todo = [p for p in passes
            if not all((cache / f"{p}_{s['name']}.npz").exists() for s in scenes)]
    procs = [subprocess.Popen([sys.executable, __file__, rom, str(cache), "--pass", p]) for p in todo]
    for p in procs:
        if p.wait() != 0:
            raise SystemExit("sky_opening_record: a recording pass failed")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("rom")
    ap.add_argument("cache", type=Path)
    ap.add_argument("--pass", dest="which", default="all")
    a = ap.parse_args()
    sys.path.insert(0, str(Path(__file__).resolve().parent))
    from make_sky_opening import SCENES

    if a.which == "all":
        record(a.rom, a.cache, SCENES)
    else:
        a.cache.mkdir(parents=True, exist_ok=True)
        run_pass(a.rom, a.cache, a.which, SCENES)
    return 0


if __name__ == "__main__":
    sys.exit(main())
