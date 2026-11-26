"""Shared probes: dialogue box geometry, colours, picture comparisons."""

import re

import numpy as np

from emu import rgb555
from game import PRINT_WAITING


def rgb8(c):
    """A GBA colour as mGBA draws it (5 -> 8 bits: c << 3 | c >> 2)."""
    return tuple((v << 3) | (v >> 2) for v in rgb555(c))


# The Sky dialogue box (sSkyTextbox in src/string_format.c), in screen pixels:
# a 7-tile window from row 12, frame 5 px top/bottom and 7 px at the sides.
BOX_X0, BOX_X1 = 8, 231          # outer frame, inclusive
BOX_Y0, BOX_Y1 = 98, 149
FILL_X0, FILL_X1 = 15, 224       # fill inside the frame, inclusive
FILL_Y0, FILL_Y1 = 103, 144
TEXT_Y0, TEXT_Y1 = 104, 143      # rows text can use (the fill's corners are rounded)
FILL = (33, 33, 33)
WHITE = (255, 255, 255)
YELLOW = (255, 255, 0)           # hero / partner names
CYAN = (0, 255, 255)             # everyone else
# The frame as measured on the box (EoS's blues): top rows 98-102 at x=200,
# bottom rows 145-149, left columns 8-14 and right columns 225-231 at y=140.
FRAME_TOP = [(99, 140, 255), (231, 255, 255), (231, 255, 255), (57, 66, 255), (41, 41, 198)]
FRAME_BOTTOM = [(41, 41, 198), (57, 66, 255), (231, 255, 255), (231, 255, 255), (99, 140, 255)]
FRAME_LEFT = [(99, 140, 255)] + [(231, 255, 255)] * 4 + [(57, 66, 255), (41, 41, 198)]
FRAME_RIGHT = [(41, 41, 198), (99, 140, 255)] + [(231, 255, 255)] * 4 + [(41, 41, 198)]


def dialogue_ready(game, f):
    """A dialogue box is fully printed and waits for a press."""
    return game.print_state(f) in PRINT_WAITING and f.text != ""


SPEAKER_RE = re.compile(r"#(?:C.|c\{..\})([^#]*)#[Rr]:")


def speaker(text):
    """The speaker name at the start of a box's text ('' = none, '(hero)' =
    the hero's thoughts in parentheses)."""
    m = SPEAKER_RE.match(text)
    if m:
        return m.group(1)
    return "(hero)" if text.startswith("(") else ""


def px(f, x, y):
    return tuple(int(v) for v in f.fb[y, x])


def box_frame_errors(f):
    """Differences between the drawn box frame and the Sky frame."""
    errs = []
    col = [px(f, 200, y) for y in range(BOX_Y0, BOX_Y0 + 5)]
    if col != FRAME_TOP:
        errs.append(f"top frame at x=200 is {col}")
    col = [px(f, 200, y) for y in range(BOX_Y1 - 4, BOX_Y1 + 1)]
    if col != FRAME_BOTTOM:
        errs.append(f"bottom frame at x=200 is {col}")
    row = [px(f, x, 140) for x in range(BOX_X0, BOX_X0 + 7)]
    if row != FRAME_LEFT:
        errs.append(f"left frame at y=140 is {row}")
    row = [px(f, x, 140) for x in range(BOX_X1 - 6, BOX_X1 + 1)]
    if row != FRAME_RIGHT:
        errs.append(f"right frame at y=140 is {row}")
    return errs


def count_color(region, color):
    return int(np.all(region == np.array(color), axis=2).sum())


def best_shift(a, b, dys=range(-12, 13), dxs=range(-3, 4), margin=16):
    """(dy, dx, err): the shift of picture a that best matches picture b (mean
    absolute RGB error over the centre)."""
    a = a.astype(np.int16)
    b = b.astype(np.int16)
    h, w = b.shape[:2]
    best = None
    B = b[margin:h - margin, margin:w - margin]
    for dy in dys:
        for dx in dxs:
            A = a[margin + dy:h - margin + dy, margin + dx:w - margin + dx]
            err = float(np.abs(A - B).mean())
            if best is None or err < best[2]:
                best = (dy, dx, err)
    return best


def obj_pixels(f, exclude_pals=(0,)):
    """How many on-screen pixels inside the OBJs' boxes have one of that
    OBJ's palette colours (a visible-sprite measure)."""
    total = 0
    fb = f.fb
    for o in f.oam():
        if o["pal"] in exclude_pals or o["affine"]:
            continue
        cols = {rgb8(c) for c in f.obj_palette(o["pal"])[1:]}
        x0, y0 = max(o["x"], 0), max(o["y"], 0)
        x1, y1 = min(o["x"] + o["w"], 240), min(o["y"] + o["h"], 160)
        if x1 <= x0 or y1 <= y0:
            continue
        reg = fb[y0:y1, x0:x1].reshape(-1, 3)
        total += sum(1 for p in map(tuple, reg.tolist()) if p in cols)
    return total
