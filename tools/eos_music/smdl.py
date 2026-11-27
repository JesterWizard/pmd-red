"""Minimal Explorers of Sky SMDL (sequence) parser.

Event layout follows the format notes in psy_commando's ppmdu tools
(SMDL "trk " chunks, note/pause/command events)."""
from __future__ import annotations

import struct
from dataclasses import dataclass, field

PAUSE_TABLE = [96, 72, 64, 48, 36, 32, 24, 18, 16, 12, 9, 8, 6, 4, 3, 2]

# command -> number of parameter bytes
CMD_LEN = {
    0x90: 0, 0x91: 1, 0x92: 1, 0x93: 2, 0x94: 3, 0x95: 1, 0x96: 0, 0x97: 0,
    0x98: 0, 0x99: 0, 0x9C: 1, 0x9D: 0, 0x9E: 0,
    0xA0: 1, 0xA1: 1, 0xA4: 1, 0xA5: 1, 0xA8: 2, 0xA9: 1, 0xAA: 1, 0xAB: 1,
    0xAC: 1, 0xAF: 3, 0xB0: 0, 0xB1: 1, 0xB2: 1, 0xB3: 1, 0xB4: 2, 0xB5: 1,
    0xB6: 1, 0xBC: 1, 0xBE: 1, 0xBF: 1, 0xC0: 0, 0xC3: 1, 0xCB: 2,
    0xD0: 1, 0xD1: 1, 0xD2: 1, 0xD3: 2, 0xD4: 3, 0xD5: 2, 0xD6: 2, 0xD7: 2,
    0xD8: 2, 0xDB: 1, 0xDC: 5, 0xDD: 4, 0xDF: 1,
    0xE0: 1, 0xE1: 1, 0xE2: 3, 0xE3: 1, 0xE4: 5, 0xE5: 4, 0xE7: 1,
    0xE8: 1, 0xE9: 1, 0xEA: 3, 0xEC: 5, 0xED: 4, 0xEF: 1,
    0xF0: 5, 0xF1: 4, 0xF2: 2, 0xF3: 3, 0xF6: 1, 0xF8: 2,
}


@dataclass
class Note:
    tick: int
    key: int
    vel: int
    dur: int


@dataclass
class Track:
    index: int
    channel: int
    notes: list = field(default_factory=list)
    programs: list = field(default_factory=list)   # (tick, program)
    volumes: list = field(default_factory=list)    # (tick, vol)
    expressions: list = field(default_factory=list)
    pans: list = field(default_factory=list)       # (tick, pan 0..127)
    bends: list = field(default_factory=list)      # (tick, signed 16)
    tempos: list = field(default_factory=list)     # (tick, bpm)
    # 0xD4 pitch sweeps: (tick, duration in ticks, target in semitones); a
    # duration of 0 sets the pitch at once (EoS resets it with D4 00 00 00)
    pitch_sweeps: list = field(default_factory=list)
    loop_tick: int | None = None
    end_tick: int = 0


@dataclass
class Song:
    tpqn: int
    tracks: list


def parse(data: bytes) -> Song:
    assert data[:4] == b"smdl", data[:4]
    song_off = 0x40
    assert data[song_off:song_off + 4] == b"song"
    tpqn = struct.unpack_from("<H", data, song_off + 0x12)[0]
    pos = song_off + 0x40
    tracks = []
    while pos + 16 <= len(data):
        label = data[pos:pos + 4]
        if label == b"eoc\x20":
            break
        assert label == b"trk\x20", (label, pos)
        length = struct.unpack_from("<I", data, pos + 0xC)[0]
        body = data[pos + 16:pos + 16 + length]
        tracks.append(parse_track(body))
        pos = pos + 16 + length
        pos = (pos + 3) & ~3
    return Song(tpqn, tracks)


def parse_track(body: bytes) -> Track:
    t = Track(index=body[0], channel=body[1])
    sweeps = []
    i = 4
    tick = 0
    octave = 4
    last_pause = 0
    last_dur = 0
    while i < len(body):
        ev = body[i]
        i += 1
        if ev < 0x80:
            vel = ev
            p = body[i]
            i += 1
            nb = (p >> 6) & 3
            octave += ((p >> 4) & 3) - 2
            note = p & 0xF
            if nb:
                dur = int.from_bytes(body[i:i + nb], "big")
                i += nb
                last_dur = dur
            else:
                dur = last_dur
            t.notes.append(Note(tick, octave * 12 + note, vel, dur))
        elif ev < 0x90:
            last_pause = PAUSE_TABLE[ev - 0x80]
            tick += last_pause
        elif ev == 0x90:
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
            # pause until the last note is released (approximate)
            last_pause = body[i]
            tick += last_pause
            i += 1
        elif ev == 0x98:
            break
        elif ev == 0x99:
            t.loop_tick = tick
        elif ev == 0xA0:
            octave = body[i]
            i += 1
        elif ev == 0xA1:
            octave += struct.unpack_from("b", body, i)[0]
            i += 1
        elif ev in (0xA4, 0xA5):
            t.tempos.append((tick, body[i]))
            i += 1
        elif ev == 0xAC:
            t.programs.append((tick, body[i]))
            i += 1
        elif ev == 0xE0:
            t.volumes.append((tick, body[i]))
            i += 1
        elif ev in (0xE2, 0xEA):
            # sweeps: u16 duration (ticks), then the target volume / pan,
            # reached linearly from the current value (Ocean1's waves, the
            # storm's wind; ppmdu: Unk_0xE2 / Unk_0xEA, 3 bytes). Expanded into
            # steps after the track is read (sweep_steps).
            sweeps.append((tick, ev, struct.unpack_from("<H", body, i)[0], body[i + 2]))
            i += 3
        elif ev == 0xD4:
            # pitch sweep: u16 duration (ticks; the same as the volume sweep
            # it comes with), s8 target in semitones (ppmdu: Unk_0xD4)
            t.pitch_sweeps.append((tick, struct.unpack_from("<H", body, i)[0],
                                   struct.unpack_from("b", body, i + 2)[0]))
            i += 3
        elif ev == 0xE3:
            t.expressions.append((tick, body[i]))
            i += 1
        elif ev == 0xE8:
            t.pans.append((tick, body[i]))
            i += 1
        elif ev == 0xD7:
            t.bends.append((tick, struct.unpack_from(">h", body, i)[0]))
            i += 2
        elif ev in CMD_LEN:
            i += CMD_LEN[ev]
        else:
            raise ValueError(f"unknown SMDL event 0x{ev:02X} at {i - 1}")
    t.end_tick = tick
    if sweeps:
        t.volumes = sweep_steps(t.volumes, [(a, d, x) for a, e, d, x in sweeps if e == 0xE2], 127)
        t.pans = sweep_steps(t.pans, [(a, d, x) for a, e, d, x in sweeps if e == 0xEA], 64)
    return t


SWEEP_STEP = 2  # ticks between the steps of a volume / pan sweep


def sweep_steps(sets: list, sweeps: list, default: int) -> list:
    """Merge set events (tick, value) and sweeps (tick, duration, target)
    into set events: a sweep goes linearly from the value at its start to
    its target; a later set or sweep cuts it short."""
    marks = sorted([(tk, 0, v, 0) for tk, v in sets] + [(tk, 1, x, d) for tk, d, x in sweeps])
    out = []
    cur = default
    for k, (tk, kind, x, d) in enumerate(marks):
        stop = marks[k + 1][0] if k + 1 < len(marks) else None
        if kind == 0 or d <= 0:
            out.append((tk, x))
            cur = x
            continue
        start = cur
        for step in range(SWEEP_STEP, d + SWEEP_STEP, SWEEP_STEP):
            at = tk + min(step, d)
            if stop is not None and at > stop:
                break
            cur = round(start + (x - start) * min(step, d) / d)
            out.append((at, cur))
    return out
