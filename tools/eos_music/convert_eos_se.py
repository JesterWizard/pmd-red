#!/usr/bin/env python3
"""Convert Explorers of Sky sound effects (DSE "sedl" banks SOUND/SE/*.sed and
SOUND/SYSTEM/se_sys.sed) into m4a songs that play on EoS's own instruments,
for the sky build's sound effect ids 300..938.

    tools/eos_music/convert_eos_se.py EOS.nds

Which EoS SE plays for each Red SE id is the hand-checked table in
sky_red_se_map.py (with the evidence for each entry). For every EoS SE used:

  * its tracks (sedl.walk: notes, program / bank changes, volume, expression,
    pan, pitch bend + bend range, SweepTune, volume / pan sweeps, repeats,
    the loop point) are written straight to m4a assembly,
    sound/songs/sky_se_BBII.s (BB = EoS bank, II = sequence), at 48 ticks per
    beat (the m4a tempo byte is EoS's bpm, i.e. twice the m4a bpm/2 value),
    with its own voicegroup (sky_vg_se_BBII) in front.
  * instruments come from the SWD banks the tracks select (0xA8/0xA9/0xAA:
    0x64NN = SOUND/SWD/NNN.swd; 0x7Fxx = the sedl's own bank:
    SOUND/SYSTEM/se_sys.swd, SOUND/SE/motion.swd). Sampled programs become DirectSound voices (samples
    decoded, resampled to the mixer rate and stored as
    sound/direct_sound_samples/sky/seNNN_SSS.bin, WaveData in
    sound/songs/sky_se_samples.s; see sky_soundfont.py). EoS's PSG programs
    (sample format 0x300 = square wave, the wavi entry's byte 0x19 = duty
    (d+1)/8; 0x400 = noise) become the GBA's CGB square / noise voices, as
    Red's own system sounds are.
  * a track's envelope overrides (0xB0..0xB6) give it its own voice.
  * pitch: the split's root key / coarse / fine tune are baked into the
    WaveData frequency (DirectSound) or the note (PSG). Pitch bend (0xD7 with
    0xDB range) and SweepTune (0xD4: u8 ticks, s16 target in 1/256
    semitone, a glide from each note's start) become BEND with one BENDR per
    track.
  * volume: m4a VOL = EoS volume x expression / 127; note velocity = EoS
    velocity x program / split / sample volume; then x SE_GAIN (PSG_GAIN for
    SEs on CGB voices only), so they play at about the level of Red's own
    SEs, but never above TARGET_LEVEL for a lone SE in the m4a mix model
    (m4a_render.py), below the level where the 8-bit mixer wraps. The gain
    goes into VOL up to 127, the rest into the velocities.

  * the loop point (0x99) becomes a GOTO only when Red's SE for that id loops
    too (the game stops looping SEs itself; one that Red lets end must end).
  * the SEs used have 1 or 2 tracks; the sky build gives every SE player 2
    (sound/music_player_table.inc). A third track would be dropped.

Not ported: LFOs (0xDC/0xE4/0xEC vibrato / tremolo), fine-tune events
(0xD0/0xD1), coarse-tune events (0xD2/0xD3).

Writes sound/songs/sky_se_*.s, sound/songs/sky_se_samples.s,
sound/direct_sound_samples/sky/se*.bin and sound/sky_red_se_table.inc
(song table ids 300..938 for the sky build).
"""
from __future__ import annotations

import copy
import math
import re
import struct
import sys
from pathlib import Path

import ndspy.rom

sys.path.insert(0, str(Path(__file__).resolve().parent))
import m4a_render  # noqa: E402
import sedl  # noqa: E402
import sky_soundfont  # noqa: E402
import swdl  # noqa: E402
from sky_red_se_map import SCENE_SE_LOOPS, SCENE_SE_PLAYERS, SE_MAP  # noqa: E402

ROOT = Path(__file__).resolve().parents[2]
SONG_DIR = ROOT / "sound" / "songs"
TABLE_INC = ROOT / "sound" / "sky_red_se_table.inc"
SONG_TABLE = ROOT / "sound" / "song_table.inc"
FIRST, LAST = 300, 938
MAX_TRACKS = 2
TARGET_LEVEL = 96.0          # lone-SE mix level cap (of 127)
# EoS's SE levels are set against the DS mixer; on the GBA they came out at
# ~0.4-0.8x the level of Red's own SE for the same id (measured in mGBA: loudest
# 100 ms RMS, played alone). These gains bring them to about Red's level.
SE_GAIN = 1.6                # SEs with DirectSound (sampled) notes
PSG_GAIN = 1.25              # SEs on the CGB square / noise voices only

N_LENS = sorted({*range(1, 25), 28, 30, 32, 36, 40, 42, 44, 48, 52, 54, 56, 60, 64, 66, 68,
                 72, 76, 78, 80, 84, 88, 90, 92, 96})
W_LENS = [0] + N_LENS

OWN_BANK = {0x3F: "SOUND/SYSTEM/se_sys.swd", 0x01: "SOUND/SE/motion.swd"}


def bank_path(sed_bank: int, swd: int) -> str | None:
    """The SWD a track's program change reads: 0xA8/0xA9/0xAA set (hi, lo).
    hi 0x64 = SOUND/SWD/<lo>.swd; hi 0x7F = the sedl's own bank (se_sys.sed
    uses 0x7F7F, motion.sed 0x7F01: lo is then the sedl's bank number, not
    a SOUND/SWD file -- motion.sed's programs live in motion.swd, and
    SOUND/SWD/001.swd holds only 15 unrelated programs)."""
    if swd >> 8 == 0x7F:
        return OWN_BANK.get(sed_bank)
    return f"SOUND/SWD/{swd & 0xFF:03d}.swd"


def wait_tokens(n: int) -> list[str]:
    out = []
    while n > 0:
        w = max(x for x in W_LENS if x <= n)
        out.append(f"W{w:02d}")
        n -= w
    return out


# --- instruments -------------------------------------------------------------

class Banks:
    """One SoundFont per SWD bank (each holds its own samples)."""

    def __init__(self, rom):
        self.rom = rom
        self.fonts: dict[str, sky_soundfont.SoundFont] = {}
        self.parsed: dict[str, swdl.Bank] = {}
        self.raw: dict[str, bytes] = {}

    def bank(self, path: str) -> swdl.Bank:
        if path not in self.parsed:
            self.raw[path] = bytes(self.rom.getFileByName(path))
            self.parsed[path] = swdl.parse(self.raw[path])
        return self.parsed[path]

    def font(self, path: str) -> sky_soundfont.SoundFont:
        if path not in self.fonts:
            tag = "sys" if "se_sys" in path else ("motion" if "motion" in path else path[-7:-4])
            self.fonts[path] = sky_soundfont.SoundFont(
                self.rom, ROOT, sample_bank=path, prefix=f"sky_se{tag}",
                bin_prefix=f"se{tag}", out_name="sky_se_samples.s")
        return self.fonts[path]

    def psg_duty(self, path: str, sample: int) -> int | None:
        """DS PSG duty (0..6) of a 0x300 sample, -1 for noise (0x400), None if sampled."""
        info = self.bank(path).samples.get(sample)
        if info is None or info.fmt not in (0x300, 0x400):
            return None
        if info.fmt == 0x400:
            return -1
        d = self.raw[path]
        for lab, body in swdl._chunks(d):
            if lab == b"wavi":
                n = struct.unpack_from("<H", d, 0x46)[0]
                off = struct.unpack_from(f"<{n}H", body, 0)[sample]
                return body[off + 0x19]
        return 3


def apply_env(env: swdl.Envelope, overrides: tuple) -> swdl.Envelope:
    e = copy.copy(env)
    for op, a, b in overrides:
        if op == 0:
            e.on = 0
        elif op == 0xB1:
            e.atkvol = a
        elif op == 0xB2:
            e.attack = a
        elif op == 0xB3:
            e.hold = a
        elif op == 0xB4:
            e.decay, e.sustain = a, b
        elif op == 0xB5:
            e.decay2 = a
        elif op == 0xB6:
            e.release = a
    return e


def cgb_env(env: swdl.Envelope) -> tuple[int, int, int, int]:
    """DSE envelope -> m4a CGB attack / decay (0..7 frames per step),
    sustain (0..15), release (0..7)."""
    if not env.on:
        return 0, 0, 15, 0
    frame = sky_soundfont.FRAME_S

    def steps(seconds, n):
        if seconds == math.inf:
            return 0
        return max(0, min(7, round(seconds / frame / max(1, n))))
    sus = max(0, min(15, round(env.sustain / 127 * 15)))
    t_d2 = sky_soundfont.dse_seconds(env.decay2, env.mult)
    a = steps(sky_soundfont.dse_seconds(env.attack, env.mult), 15) if env.attack else 0
    d = steps(sky_soundfont.dse_seconds(env.decay, env.mult), 15 - sus) if sus < 15 else 0
    if t_d2 != math.inf:
        # the decay2 fade-out: fold it into the decay to silence
        d, sus = max(1, steps(t_d2, 15)), 0
    r = steps(sky_soundfont.dse_seconds(env.release, env.mult), 15)
    return a, d, sus, r


GBA_DUTY = {0: 0, 1: 1, 2: 1, 3: 2, 4: 2, 5: 3, 6: 0}   # DS (d+1)/8 -> 12.5/25/50/75 %


class Voice:
    def __init__(self, asm: str, key_shift: float, gain: float, tone=None, psg=False):
        self.asm = asm
        self.key_shift = key_shift      # PSG: semitones added to the note
        self.gain = gain                # velocity factor
        self.tone = tone                # sky_soundfont.Tone for DirectSound (mix model)
        self.psg = psg


def make_voice(banks: Banks, path: str | None, prog_id: int, overrides: tuple, track: int) -> Voice:
    silent = Voice(sky_soundfont.SILENT_TONE.asm(), 0, 0.0)
    if path is None:
        return silent
    bank = banks.bank(path)
    prog = bank.programs.get(prog_id)
    if prog is None or not prog.splits:
        return silent
    split = prog.splits[0]
    duty = banks.psg_duty(path, split.sample)
    env = apply_env(split.env, overrides)
    if duty is not None:
        a, d, s, r = cgb_env(env)
        gain = (prog.vol / 127) * (split.vol / 127)
        if duty < 0:
            asm = (f"\t.byte\t0x0C, 60, 0x00, 0x00\n\t.word\t0\n\t.byte\t{a}, {d}, {s}, {r}\n")
        else:
            kind = 0x09 if track == 0 else 0x0A
            asm = (f"\t.byte\t0x{kind:02X}, 60, 0x00, 0x00\n\t.word\t{GBA_DUTY.get(duty, 2)}\n"
                   f"\t.byte\t{a}, {d}, {s}, {r}\n")
        return Voice(asm, 60 - split.rootkey + split.ctune, gain, psg=True)
    font = banks.font(path)
    sp = copy.copy(split)
    sp.env = env
    tone = font.tone(prog, sp)
    if tone is sky_soundfont.SILENT_TONE:
        return silent
    info = font.main.samples[split.sample]
    gain = (prog.vol / 127) * (split.vol / 127) * (info.vol / 127)
    return Voice(tone.asm(), 0, gain, tone=tone)


# --- one SE -> m4a ---------------------------------------------------------------

def track_timeline(evs: list[sedl.Ev]):
    """Per-tick state of one track: notes and control values."""
    notes = []
    ctrl = []               # (tick, kind, value)
    vol = expr = 127
    pan = 64
    bend = 0
    bendr = 2
    sweep = None            # (length, target semis)
    prog = (0, 0x7F7F)
    env: list = []
    voice_key = None
    loop_tick = None
    end = 0
    for e in evs:
        t = e.tick
        if e.kind == "prog":
            prog = (e.a, e.b)
            env = []
        elif e.kind == "env":
            env = [x for x in env if x[0] != e.a] + [(e.a, e.b, e.c)]
        elif e.kind == "vol":
            vol = e.a
            ctrl.append((t, "vol", vol * expr / 127))
        elif e.kind == "expr":
            expr = e.a
            ctrl.append((t, "vol", vol * expr / 127))
        elif e.kind == "vol_sweep":
            start = vol
            n = max(1, e.a)
            for k in range(1, n + 1, 2 if n > 32 else 1):
                ctrl.append((t + k, "vol", (start + (e.b - start) * k / n) * expr / 127))
            ctrl.append((t + n, "vol", e.b * expr / 127))
            vol = e.b
        elif e.kind == "pan":
            pan = e.a
            ctrl.append((t, "pan", pan))
        elif e.kind == "pan_sweep":
            start = pan
            n = max(1, e.a)
            for k in range(1, n + 1, 2 if n > 32 else 1):
                ctrl.append((t + k, "pan", start + (e.b - start) * k / n))
            pan = e.b
        elif e.kind == "bendr":
            bendr = e.a
            ctrl.append((t, "bend", bend / 8192 * bendr))
        elif e.kind == "bend":
            bend = e.a
            ctrl.append((t, "bend", bend / 8192 * bendr))
        elif e.kind == "tune_sweep":
            sweep = (e.a, e.b / 256) if e.b else None
        elif e.kind == "note":
            voice_key = (prog[1], prog[0], tuple(env))
            notes.append((t, e.a, e.b, e.c, voice_key, sweep))
            end = max(end, t + e.c)
        elif e.kind == "loop":
            loop_tick = t
        elif e.kind == "end":
            end = max(end, t)
    return notes, ctrl, loop_tick, end


def audible_vols(notes, ctrl) -> list[float]:
    """The track volumes a note is heard at (127 until the first volume
    event). A volume set and replaced before any note sounds (EoS SEs often
    start a track at 127 and set the real level a few ticks later) does not
    limit the loudness gain."""
    last = {}                       # the last volume set at each tick wins
    for t, kind, x in ctrl:
        if kind == "vol":
            last[t] = x
    vev = sorted(last.items())
    if not vev or vev[0][0] > 0:
        vev.insert(0, (0, 127))
    out = []
    for i, (t, x) in enumerate(vev):
        nxt = vev[i + 1][0] if i + 1 < len(vev) else math.inf
        if any(s < nxt and s + max(1, d) > t for (s, _, _, d, _, _) in notes):
            out.append(x)
    return out


def convert_se(rom, banks: Banks, seqs, sid: int, priority: int, allow_loop: bool):
    seq = seqs[sid]
    data = rom.getFileByName(seq.path)
    bodies = sedl.track_bodies(data)[sid & 0xFF]
    tracks = []
    tempo = 120
    for body in bodies:
        evs = sedl.walk(body)
        for e in evs:
            if e.kind == "tempo":
                tempo = e.a
                break
        notes, ctrl, loop_tick, end = track_timeline(evs)
        if not allow_loop:
            loop_tick = None        # Red's SE for this id ends by itself: so does this one
        if notes:
            tracks.append((notes, ctrl, loop_tick, end))
    # the SE players have 1-2 tracks: keep the busiest ones, in their order
    if len(tracks) > MAX_TRACKS:
        keep = sorted(range(len(tracks)), key=lambda i: -len(tracks[i][0]))[:MAX_TRACKS]
        tracks = [tracks[i] for i in sorted(keep)]
    def vkey(vk, ti):
        # PSG voices are per track (track 0 -> square 1, track 1 -> square 2)
        path = bank_path(seq.bank, vk[0])
        if path:
            prog = banks.bank(path).programs.get(vk[1])
            if prog and prog.splits and banks.psg_duty(path, prog.splits[0].sample) is not None:
                return vk + (ti,)
        return vk + (0,)

    label = f"sky_se_{sid:04x}"
    vg = f"sky_vg_se_{sid:04x}"
    voices: dict[tuple, int] = {}
    vlist: list[Voice] = []
    for ti, (notes, _, _, _) in enumerate(tracks):
        for n in notes:
            k = vkey(n[4], ti)
            if k not in voices:
                path = bank_path(seq.bank, n[4][0])
                voices[k] = len(vlist)
                vlist.append(make_voice(banks, path, n[4][1], n[4][2], ti))
    # mix model (DirectSound notes only) for the master volume
    sec_per_tick = 60 / tempo / sedl.TPQN
    render = []
    waves = {}
    for ti, (notes, ctrl, _, _) in enumerate(tracks):
        for (t, key, vel, dur, vk, sw) in notes:
            v = vlist[voices[vkey(vk, ti)]]
            if v.tone is None:
                continue
            volv = 127
            for ct, kind, x in ctrl:
                if kind == "vol" and ct <= t:
                    volv = x
            render.append((t * sec_per_tick, dur * sec_per_tick, key, min(127, max(1, round(vel * v.gain))),
                           round(volv), 0, 0, v.tone.adsr, v.tone.wave_label, key))
    for f in banks.fonts.values():
        waves.update(f.render_waves())
    seconds = max((tr[3] for tr in tracks), default=0) * sec_per_tick + 1.5
    _, level = (m4a_render.headroom_mvl(render, waves, min(seconds, 20), TARGET_LEVEL)
                if render else (127, 0.0))
    # loudness: EoS's own levels x SE_GAIN (DirectSound) / PSG_GAIN (CGB only),
    # never above TARGET_LEVEL for a lone SE. The gain goes into VOL first (up
    # to 127), the rest into the note velocities.
    if render:
        gain = SE_GAIN if level <= 0 else min(SE_GAIN, TARGET_LEVEL / level)
    else:
        gain = PSG_GAIN
    vols = [x for tr in tracks for x in audible_vols(tr[0], tr[1])]
    vol_gain = min(gain, 127 / max(1, max(vols, default=127)))
    vel_gain = gain / vol_gain
    mvl = round(127 * vol_gain)

    lines = [f"@ Explorers of Sky demake: EoS SE {sid:#06x} {seq.name} ({seq.path})",
             "@ on EoS's own instruments, generated by tools/eos_music/convert_eos_se.py",
             "#ifdef SKY_STORY", '\t.include "MPlayDef.s"', "", "\t.section .rodata", "\t.align\t2",
             f"{vg}:"]
    for i, v in enumerate(vlist):
        lines.append(f"@ voice {i}")
        lines.append(v.asm.rstrip("\n"))
    lines.append("")
    track_labels = []
    for ti, (notes, ctrl, loop_tick, end) in enumerate(tracks):
        tl = f"{label}_{ti}"
        track_labels.append(tl)
        lines += ["\t.align\t2", f"{tl}:"]
        # bend: SweepTune glides per note + pitch bend, one BENDR per track
        bend_ev = sorted([(t, x) for t, k, x in ctrl if k == "bend"])
        sweep_ev = []
        for (t, key, vel, dur, vk, sw) in notes:
            if sw:
                ln, semis = sw
                for k in range(0, min(ln, dur) + 1):
                    sweep_ev.append((t + k, semis * k / max(1, ln)))
                sweep_ev.append((t + dur, None))
        def bend_at(t):
            b = 0.0
            for bt, x in bend_ev:
                if bt <= t:
                    b = x
            return b
        def sweep_at(t):
            s = 0.0
            for st, x in sweep_ev:
                if st <= t:
                    s = 0.0 if x is None else x
            return s
        ticks_b = sorted({t for t, _ in bend_ev} | {t for t, _ in sweep_ev})
        pitch = [(t, bend_at(t) + sweep_at(t)) for t in ticks_b]
        rng = max([abs(p) for _, p in pitch] + [0])
        bendr = max(1, min(127, math.ceil(rng))) if rng > 0 else 0
        events = []   # (tick, order, text)
        if ti == 0:
            events.append((0, 0, f"\t.byte\tTEMPO, {tempo}"))
        events.append((0, 1, f"\t.byte\tKEYSH, 0"))
        if bendr:
            events.append((0, 1, f"\t.byte\tBENDR, {bendr}"))
        last = {}
        final = {}
        for t, kind, x in ctrl:             # the last value of each tick wins
            final[(t, kind)] = x
        for (t, kind), x in sorted(final.items(), key=lambda c: c[0][0]):
            if kind == "vol":
                val = max(0, min(127, round(x * mvl / 127)))
                txt = f"\t.byte\tVOL, {val}"
            elif kind == "pan":
                val = max(0, min(127, round(x)))
                txt = f"\t.byte\tPAN, {val}"
            else:
                continue
            if last.get(kind) == val and t > 0:
                continue
            last[kind] = val
            events.append((t, 2, txt))
        if "vol" not in last:
            events.append((0, 2, f"\t.byte\tVOL, {round(127 * mvl / 127)}"))
        if bendr:
            lastb = None
            for t, p in pitch:
                b = max(-64, min(63, round(p / bendr * 64)))
                if b != lastb:
                    events.append((t, 3, f"\t.byte\tBEND, {b + 64}"))
                    lastb = b
        cur_voice = None
        for (t, key, vel, dur, vk, sw) in notes:
            vi = voices[vkey(vk, ti)]
            v = vlist[vi]
            if vi != cur_voice:
                events.append((t, 4, f"\t.byte\tVOICE, {vi}"))
                cur_voice = vi
            k = max(0, min(127, round(key + v.key_shift)))
            velo = max(1, min(127, round(vel * v.gain * vel_gain)))
            if v.gain <= 0:
                continue
            if dur in N_LENS:
                events.append((t, 5, f"\t.byte\tN{dur:02d}, {k}, {velo}"))
            else:
                events.append((t, 5, f"\t.byte\tTIE, {k}, {velo}"))
                events.append((t + max(1, dur), 1, f"\t.byte\tEOT, {k}"))
        events.sort(key=lambda e: (e[0], e[1]))
        now = 0
        looped = loop_tick is not None
        loop_label = f"{tl}_L"
        loop_done = False
        for t, _, txt in events:
            if looped and not loop_done and t >= loop_tick:
                lines += ["\t.byte\t" + w for w in wait_tokens(loop_tick - now)]
                now = loop_tick
                lines.append(f"{loop_label}:")
                loop_done = True
            if t > now:
                lines += ["\t.byte\t" + w for w in wait_tokens(t - now)]
                now = t
            lines.append(txt)
        if looped:
            if not loop_done:
                lines += ["\t.byte\t" + w for w in wait_tokens(max(0, loop_tick - now))]
                now = loop_tick
                lines.append(f"{loop_label}:")
            lines += ["\t.byte\t" + w for w in wait_tokens(max(1, end - now))]
            lines += ["\t.byte\tGOTO", f"\t.word\t{loop_label}"]
        else:
            lines += ["\t.byte\t" + w for w in wait_tokens(max(0, end - now))]
        lines += ["\t.byte\tFINE", ""]
    lines += ["\t.align\t2", f"\t.global\t{label}", f"{label}:",
              f"\t.byte\t{len(tracks)}, 0, {priority}, 0", f"\t.word\t{vg}"]
    lines += [f"\t.word\t{tl}" for tl in track_labels]
    lines += ["#endif", ""]
    (SONG_DIR / f"{label}.s").write_text("\n".join(lines))
    return label, len(tracks), mvl, level


# --- song table ------------------------------------------------------------------

def red_table() -> dict[int, tuple[str, int, int]]:
    """Red's (vanilla) song table entries for ids FIRST..LAST."""
    import subprocess
    out = subprocess.run(["cpp", "-P", str(SONG_TABLE)], capture_output=True, text=True,
                         cwd=SONG_TABLE.parent, check=True).stdout
    rows = [l.split() for l in out.splitlines() if l.startswith("song ")]
    table = {}
    for i, r in enumerate(rows):
        if FIRST <= i <= LAST:
            table[i] = (r[1].rstrip(","), int(r[2].rstrip(",")), int(r[3]))
    return table


def red_priority(label: str) -> int:
    p = SONG_DIR / f"{label}.s"
    if not p.exists():
        return 100
    m = re.search(rf"\.equ\s+{label}_pri,\s*(\d+)", p.read_text())
    return int(m.group(1)) if m else 100


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    seqs = sedl.load_all(rom)
    banks = Banks(rom)
    red = red_table()
    prio: dict[int, int] = {}
    loops: dict[int, bool] = {}
    for rid, (eid, _why) in SE_MAP.items():
        prio[eid] = max(prio.get(eid, 0), red_priority(red[rid][0]))
        red_src = SONG_DIR / f"{red[rid][0]}.s"
        loops[eid] = (loops.get(eid, False) or (red_src.exists() and "GOTO" in red_src.read_text())
                     or rid in SCENE_SE_LOOPS)
    for old in SONG_DIR.glob("sky_se_*.s"):
        old.unlink()
    labels = {}
    for eid in sorted(prio):
        label, ntr, mvl, level = convert_se(rom, banks, seqs, eid, prio[eid], loops[eid])
        labels[eid] = label
        print(f"{label}: {seqs[eid].name} tracks {ntr} mvl {mvl} (level at mvl 127: {level:.0f})")
    # samples
    bins = ROOT / "sound" / "direct_sound_samples" / "sky"
    for old in bins.glob("se*.bin"):
        old.unlink()
    lines = ["@ Explorers of Sky demake: EoS sound effect samples (SOUND/SWD/NNN.swd,",
             "@ SOUND/SE/motion.swd) as m4a WaveData, generated by",
             "@ tools/eos_music/convert_eos_se.py — do not edit.",
             "#ifdef SKY_STORY", "\t.section .rodata", ""]
    total = 0
    for path, f in sorted(banks.fonts.items()):
        for sid in f.used_samples():
            (bins / f.waves[sid].bin_name).write_bytes(f.data[sid])
        for (sid, freq), label in sorted(f.wavedata.items(), key=lambda kv: kv[1]):
            w = f.waves[sid]
            lines += ["\t.align\t2", f"\t.global\t{label}", f"{label}:",
                      f"\t.hword\t0x0000, 0x{0x4000 if w.looped else 0:04X}",
                      f"\t.word\t{freq} @ {freq / 1024:.2f} Hz at key 60",
                      f"\t.word\t{w.loop_start} @ loop start", f"\t.word\t{w.size} @ size",
                      f'\t.incbin\t"sound/direct_sound_samples/sky/{w.bin_name}"', ""]
            total += 16 + ((len(f.data[sid]) + 3) & ~3)
    lines += ["#endif", ""]
    (SONG_DIR / "sky_se_samples.s").write_text("\n".join(lines))
    # song table for ids FIRST..LAST
    out = [f"@ Sound effects {FIRST}..{LAST} in the sky build: the EoS SEs where",
           "@ tools/eos_music/sky_red_se_map.py maps the Red id (evidence there), else",
           "@ the Red SE. Player fields are as in Red. Generated by convert_eos_se.py."]
    for rid in range(FIRST, LAST + 1):
        lab, ms, me = red[rid]
        if rid in SCENE_SE_PLAYERS:     # empty in Red: give it an SE player
            ms = me = SCENE_SE_PLAYERS[rid]
        if rid in SE_MAP:
            eid = SE_MAP[rid][0]
            out.append(f"song {labels[eid]},  {ms},  {me}    @ {rid}: {seqs[eid].name}")
        else:
            out.append(f"song {lab},  {ms},  {me}")
    TABLE_INC.write_text("\n".join(out) + "\n")
    print(f"{len(labels)} EoS SEs for {len(SE_MAP)} Red ids; samples {total} bytes")
    return 0


if __name__ == "__main__":
    sys.exit(main())
