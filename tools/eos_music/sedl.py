"""Explorers of Sky DSE "sedl" (sound effect bank) parser.

Layout (checked against every SOUND/SE/*.sed and SOUND/SYSTEM/se_sys.sed):

  * header 0x40 bytes: "sedl"; u8 at 0x0E = the bank number (the high byte
    of the game's 16-bit SE ids: se_Play(0x2308) is bank 0x23 = event_s.sed,
    sequence 8); u16 at 0x30 = number of sequence slots; name at 0x20.
  * "seq " chunk (16-byte chunk header): u16 offset table (one slot per
    sequence, relative to the chunk data; 0 = empty), each sequence a 0x30
    header followed by "trk " chunks (the SMDL track format, see smdl.py)
    up to "eoc ".
  * "mcrl": per-sequence name records (u16 id, u16 size, "SE_NUM_...").
  * "bnkl": per-sequence list of the SOUND/SWD/NNN.swd banks it loads.

Tracks select their instrument bank with SMDL event 0xA8 (SetSwdlAndBank,
second byte = the SOUND/SWD bank number) or 0xA9/0xAA = 0x7F 0x7F (the
sedl's own bank: se_sys.swd for se_sys.sed, motion.swd for motion.sed).
"""
from __future__ import annotations

import re
import struct
from dataclasses import dataclass

import smdl

TPQN = 48


@dataclass
class Sequence:
    bank: int
    index: int
    name: str
    tracks: list            # smdl.Track (with .swd per program change)

    @property
    def se_id(self) -> int:
        return (self.bank << 8) | self.index


def parse(data: bytes) -> dict[int, Sequence]:
    assert data[:4] == b"sedl", data[:4]
    bank = data[0x0E]
    nslots = struct.unpack_from("<H", data, 0x30)[0]
    assert data[0x40:0x44] == b"seq "
    base = 0x50
    offs = struct.unpack_from(f"<{nslots}H", data, base)
    names = {}
    for m in re.finditer(rb"(..)(..)(SE_NUM_[A-Z0-9_]+)\x00", bytes(data), re.S):
        names[struct.unpack("<H", m.group(1))[0]] = m.group(3).decode()
    seqs = {}
    for i, o in enumerate(offs):
        if not o:
            continue
        q = base + o + 0x30
        tracks = []
        while data[q:q + 4] == b"trk ":
            ln = struct.unpack_from("<I", data, q + 12)[0]
            tracks.append(smdl.parse_track(data[q + 16:q + 16 + ln]))
            q = (q + 16 + ln + 3) & ~3
        seqs[i] = Sequence(bank, i, names.get(i, f"SE_{bank:02X}{i:02X}"), tracks)
    return seqs


def load_all(rom) -> dict[int, Sequence]:
    """All EoS SE sequences by 16-bit SE id, with each one's .sed path in .path."""
    out = {}
    for d in ("SOUND/SE", "SOUND/SYSTEM"):
        for n in rom.filenames[d].files:
            if n.endswith(".sed"):
                for s in parse(rom.getFileByName(f"{d}/{n}")).values():
                    s.path = f"{d}/{n}"
                    out[s.se_id] = s
    return out


@dataclass
class Ev:
    tick: int
    kind: str        # note, prog, vol, expr, pan, bend, bendr, tune_sweep, vol_sweep,
                     # pan_sweep, ctune, env, tempo, loop, end
    a: int = 0
    b: int = 0
    c: int = 0


PAUSES = smdl.PAUSE_TABLE


def walk(body: bytes, max_ticks: int = 48 * 64) -> list[Ev]:
    """Interprets one SMDL/SEDL track body into timed events. Repeats
    (0x9C count .. 0x9D) are unrolled (the segment plays `count` times);
    0x99 marks the loop point (kind "loop"); "end" carries the last tick.
    Notes carry (key, velocity, length). The program event carries the SWD
    bank (`b`, 0x7F7F = the sedl's own bank) of the last 0xA8/0xA9/0xAA."""
    out: list[Ev] = []
    i, tick, octave = 4, 0, 4
    last_pause = last_dur = 0
    bank_hi, bank_lo = 0x7F, 0x7F
    rep = []                         # [(pos, remaining, octave)]
    steps = 0
    while i < len(body) and tick < max_ticks and steps < 100000:
        steps += 1
        ev = body[i]
        i += 1
        if ev < 0x80:
            p = body[i]
            i += 1
            nb = (p >> 6) & 3
            octave += ((p >> 4) & 3) - 2
            if nb:
                last_dur = int.from_bytes(body[i:i + nb], "big")
                i += nb
            out.append(Ev(tick, "note", octave * 12 + (p & 0xF), ev, last_dur))
            continue
        if ev < 0x90:
            last_pause = PAUSES[ev - 0x80]
            tick += last_pause
            continue
        if ev == 0x90:
            tick += last_pause
        elif ev == 0x91:
            last_pause += body[i]
            tick += last_pause
            i += 1
        elif ev == 0x92:
            last_pause = body[i]
            tick += last_pause
            i += 1
        elif ev == 0x93:
            last_pause = struct.unpack_from("<H", body, i)[0]
            tick += last_pause
            i += 2
        elif ev == 0x94:
            last_pause = body[i] | (body[i + 1] << 8) | (body[i + 2] << 16)
            tick += last_pause
            i += 3
        elif ev == 0x95:
            last_pause = body[i]
            tick += last_pause
            i += 1
        elif ev == 0x98:
            break
        elif ev == 0x99:
            out.append(Ev(tick, "loop"))
        elif ev == 0x9C:
            rep.append([i + 1, body[i], octave])
            i += 1
        elif ev == 0x9D:
            if rep:
                rep[-1][1] -= 1
                if rep[-1][1] > 0:
                    i, octave = rep[-1][0], rep[-1][2]
                else:
                    rep.pop()
        elif ev == 0xA0:
            octave = body[i]
            i += 1
        elif ev == 0xA1:
            octave += struct.unpack_from("b", body, i)[0]
            i += 1
        elif ev in (0xA4, 0xA5):
            out.append(Ev(tick, "tempo", body[i]))
            i += 1
        elif ev == 0xA8:
            bank_hi, bank_lo = body[i], body[i + 1]
            i += 2
        elif ev == 0xA9:
            bank_hi = body[i]
            i += 1
        elif ev == 0xAA:
            bank_lo = body[i]
            i += 1
        elif ev == 0xAC:
            out.append(Ev(tick, "prog", body[i], (bank_hi << 8) | bank_lo))
            i += 1
        elif ev == 0xB0:
            out.append(Ev(tick, "env", 0, -1))
        elif ev in (0xB1, 0xB2, 0xB3, 0xB5, 0xB6):
            out.append(Ev(tick, "env", ev, body[i]))
            i += 1
        elif ev == 0xB4:
            out.append(Ev(tick, "env", 0xB4, body[i], body[i + 1]))
            i += 2
        elif ev == 0xD2:
            out.append(Ev(tick, "ctune", struct.unpack_from("b", body, i)[0], 0))
            i += 1
        elif ev == 0xD3:
            out.append(Ev(tick, "ctune", struct.unpack_from("b", body, i)[0], 1))
            i += 2
        elif ev == 0xD4:
            # SweepTune: u8 length (ticks), s16 LE target (1/256 semitone)
            out.append(Ev(tick, "tune_sweep", body[i], struct.unpack_from("<h", body, i + 1)[0]))
            i += 3
        elif ev == 0xD7:
            out.append(Ev(tick, "bend", struct.unpack_from(">h", body, i)[0]))
            i += 2
        elif ev == 0xDB:
            out.append(Ev(tick, "bendr", body[i]))
            i += 1
        elif ev == 0xE0:
            out.append(Ev(tick, "vol", body[i]))
            i += 1
        elif ev == 0xE2:
            # SweepTrackVol: u16 LE length (ticks), u8 target
            out.append(Ev(tick, "vol_sweep", struct.unpack_from("<H", body, i)[0], body[i + 2]))
            i += 3
        elif ev == 0xE3:
            out.append(Ev(tick, "expr", body[i]))
            i += 1
        elif ev == 0xE8:
            out.append(Ev(tick, "pan", body[i]))
            i += 1
        elif ev == 0xEA:
            out.append(Ev(tick, "pan_sweep", struct.unpack_from("<H", body, i)[0], body[i + 2]))
            i += 3
        elif ev in smdl.CMD_LEN:
            i += smdl.CMD_LEN[ev]
        else:
            raise ValueError(f"unknown SEDL event 0x{ev:02X} at {i - 1}")
    out.append(Ev(tick, "end"))
    return out


def track_bodies(data: bytes) -> dict[int, list[bytes]]:
    """Raw track bodies of every sequence of a sedl file, by sequence index."""
    nslots = struct.unpack_from("<H", data, 0x30)[0]
    base = 0x50
    offs = struct.unpack_from(f"<{nslots}H", data, base)
    out = {}
    for i, o in enumerate(offs):
        if not o:
            continue
        q = base + o + 0x30
        bodies = []
        while data[q:q + 4] == b"trk ":
            ln = struct.unpack_from("<I", data, q + 12)[0]
            bodies.append(bytes(data[q + 16:q + 16 + ln]))
            q = (q + 16 + ln + 3) & ~3
        out[i] = bodies
    return out
