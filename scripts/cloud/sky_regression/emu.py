"""The emulator a check sees: mgba_rpc over a pipe, plus per-frame views.

Emu runs build/tools/mgba_rpc on one ROM. Frame is what a check gets each
frame: cached reads of memory, IO registers, palettes, OAM and (on demand)
the picture, with helpers to decode the game state checks care about.
"""

import struct
import subprocess
from functools import cached_property

import numpy as np

KEYS = {
    "A": 1, "B": 2, "SELECT": 4, "START": 8, "RIGHT": 16, "LEFT": 32,
    "UP": 64, "DOWN": 128, "R": 256, "L": 512,
}

IO = 0x04000000
PAL = 0x05000000
VRAM = 0x06000000
OAM = 0x07000000

# IO register offsets.
DISPCNT, BG0CNT = 0x00, 0x08
WIN0H, WIN0V, WININ, WINOUT = 0x40, 0x44, 0x48, 0x4A
BLDCNT, BLDALPHA, BLDY = 0x50, 0x52, 0x54


def keymask(keys):
    """'A+B' or ['A', 'B'] or an int -> GBA key mask."""
    if isinstance(keys, int):
        return keys
    if not keys:
        return 0
    if isinstance(keys, str):
        keys = keys.split("+")
    m = 0
    for k in keys:
        m |= KEYS[k.upper()]
    return m


class Emu:
    def __init__(self, tool, rom):
        self.p = subprocess.Popen([tool, rom], stdin=subprocess.PIPE,
                                  stdout=subprocess.PIPE, bufsize=0)
        self.frame = 0

    def _cmd(self, line):
        self.p.stdin.write((line + "\n").encode())
        head = self.p.stdout.readline().decode().strip()
        if not head.startswith("ok"):
            raise RuntimeError(f"mgba_rpc: {line!r} -> {head!r}")
        return head[3:]

    def _data(self, line):
        n = int(self._cmd(line))
        out = bytearray()
        while len(out) < n:
            chunk = self.p.stdout.read(n - len(out))
            if not chunk:
                raise RuntimeError("mgba_rpc: short read")
            out += chunk
        return bytes(out)

    def run(self, n=1, keys=0):
        self.frame = int(self._cmd(f"run {n} {keymask(keys)}"))
        return self.frame

    def read(self, addr, n):
        return self._data(f"read {addr:#x} {n}")

    def fb(self):
        return np.frombuffer(self._data("fb"), np.uint8).reshape(160, 240, 3)

    def audio(self):
        """Audio since the last call: (samples, rms, peak), 16-bit full scale."""
        n, sumsq, peak = (int(v) for v in self._cmd("audio").split())
        rms = (sumsq / (2 * n)) ** 0.5 if n else 0.0
        return n, rms, peak

    def save_state(self, path):
        self._cmd(f"save {path}")

    def load_state(self, path, frame):
        self._cmd(f"load {path}")
        self.frame = int(self._cmd(f"setframe {frame}"))

    def close(self):
        try:
            self.p.stdin.write(b"quit\n")
            self.p.stdin.close()
        except (BrokenPipeError, OSError):
            pass
        self.p.wait(timeout=10)


def rgb555(c):
    """A GBA colour as (r, g, b), 5 bits each."""
    return (c & 31, (c >> 5) & 31, (c >> 10) & 31)


class Frame:
    """One emulated frame, as the checks see it. Reads are cached."""

    def __init__(self, emu, syms, game, n):
        self.emu = emu
        self.syms = syms
        self.game = game  # GameInfo: decoders shared by the checks
        self.n = n
        self._cache = {}

    # Raw memory --------------------------------------------------------------
    def read(self, addr, n):
        key = (addr, n)
        if key not in self._cache:
            self._cache[key] = self.emu.read(addr, n)
        return self._cache[key]

    def _block(self, base, size, addr, n):
        blk = self.read(base, size)
        return blk[addr - base:addr - base + n]

    def mem(self, addr, n):
        # IO, palette and OAM come from one cached read each.
        if IO <= addr < IO + 0x400:
            return self._block(IO, 0x400, addr, n)
        if PAL <= addr < PAL + 0x400:
            return self._block(PAL, 0x400, addr, n)
        if OAM <= addr < OAM + 0x400:
            return self._block(OAM, 0x400, addr, n)
        return self.read(addr, n)

    def u8(self, addr):
        return self.mem(addr, 1)[0]

    def s8(self, addr):
        return struct.unpack("<b", self.mem(addr, 1))[0]

    def u16(self, addr):
        return struct.unpack("<H", self.mem(addr, 2))[0]

    def s16(self, addr):
        return struct.unpack("<h", self.mem(addr, 2))[0]

    def u32(self, addr):
        return struct.unpack("<I", self.mem(addr, 4))[0]

    def s32(self, addr):
        return struct.unpack("<i", self.mem(addr, 4))[0]

    def sym(self, name):
        return self.syms[name]

    def var(self, name, kind="u32", offset=0):
        return getattr(self, kind)(self.syms[name] + offset)

    # Video --------------------------------------------------------------------
    def io(self, off):
        return self.u16(IO + off)

    def dispcnt(self):
        return self.io(DISPCNT)

    def bgcnt(self, bg):
        return self.io(BG0CNT + 2 * bg)

    def bg_priority(self, bg):
        return self.bgcnt(bg) & 3

    def bldalpha(self):
        v = self.io(BLDALPHA)
        return (v & 0x1F, (v >> 8) & 0x1F)

    def bg_color(self, pal, idx):
        return self.u16(PAL + 2 * (16 * pal + idx))

    def obj_color(self, pal, idx):
        return self.u16(PAL + 0x200 + 2 * (16 * pal + idx))

    def bg_palette(self, pal):
        return [self.bg_color(pal, i) for i in range(16)]

    def obj_palette(self, pal):
        return [self.obj_color(pal, i) for i in range(16)]

    def oam(self):
        """Visible OBJs as dicts (x, y, w, h, tile, pal, prio, affine)."""
        out = []
        raw = self.mem(OAM, 0x400)
        sizes = {(0, 0): (8, 8), (0, 1): (16, 16), (0, 2): (32, 32), (0, 3): (64, 64),
                 (1, 0): (16, 8), (1, 1): (32, 8), (1, 2): (32, 16), (1, 3): (64, 32),
                 (2, 0): (8, 16), (2, 1): (8, 32), (2, 2): (16, 32), (2, 3): (32, 64)}
        for i in range(128):
            a0, a1, a2 = struct.unpack_from("<HHH", raw, 8 * i)
            affine = bool(a0 & 0x100)
            if not affine and (a0 & 0x200):
                continue  # disabled
            shape, size = a0 >> 14, a1 >> 14
            if shape == 3:
                continue
            w, h = sizes[(shape, size)]
            if affine and a0 & 0x200:  # double size
                w, h = 2 * w, 2 * h
            x = a1 & 0x1FF
            if x >= 256:
                x -= 512
            y = a0 & 0xFF
            if y >= 160:
                y -= 256
            if x >= 240 or x + w <= 0 or y + h <= 0:
                continue  # off screen
            out.append(dict(i=i, x=x, y=y, w=w, h=h, tile=a2 & 0x3FF,
                            pal=a2 >> 12, prio=(a2 >> 10) & 3, affine=affine,
                            mode=(a0 >> 10) & 3))
        return out

    @cached_property
    def fb(self):
        """The frame as a 160x240x3 uint8 array (8-bit RGB)."""
        return self.emu.fb()

    def pixel(self, x, y):
        return tuple(int(v) for v in self.fb[y, x])

    def region(self, x0, y0, x1, y1):
        """Pixels of [x0, x1) x [y0, y1)."""
        return self.fb[y0:y1, x0:x1]

    def colors_in(self, x0, y0, x1, y1):
        r = self.region(x0, y0, x1, y1).reshape(-1, 3)
        return {tuple(int(v) for v in c) for c in np.unique(r, axis=0)}

    # Game state (decoders live in game.py) -------------------------------------
    @cached_property
    def text(self):
        return self.game.textbox_text(self)

    @cached_property
    def songs(self):
        return self.game.songs(self)

    @cached_property
    def map_id(self):
        return self.game.map_id(self)
