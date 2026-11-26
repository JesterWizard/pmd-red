"""Explorers of Sky instruments for the GBA m4a engine.

Builds, from EoS's DSE banks (SOUND/BGM/bgm.swd samples + the per-song
SOUND/BGM/bgmNNNN.swd programs; or, for the jingles, SOUND/ME/me.swd, which
holds both), m4a voicegroups and DirectSound samples:

  * every EoS sample a song uses is decoded (IMA-ADPCM / PCM), resampled to
    min(rate, max_rate) Hz with a windowed-sinc filter (the loop length is
    rounded to whole samples and the rate adjusted to match, so loops stay
    seamless and in tune), normalised to full 8-bit scale and written to
    sound/direct_sound_samples/sky/<bin_prefix>_NNN.bin (eos_ for bgm.swd).
  * one m4a WaveData per (sample, pitch) in sound/songs/<out_name>
    (sky_samples.s for bgm.swd, labels <prefix>_wav_NNN_k). m4a
    plays a WaveData at `freq / 1024` Hz on key 60 (MidiKeyToFreq), so the
    EoS root key / coarse / fine tune are baked into `freq`:
        DSE: rate(note) = 32728 * 2^((note - root + ctune + ftune/256) / 12)
    (32728 Hz = DS mixer rate; EoS samples carry tune = 12*log2(rate/32728);
    root, ctune and ftune come from the split, ftune is unsigned).
    A WaveData sample used with two different tunings is stored twice.
  * per song a voicegroup (MIDI program = EoS program id):
      - one split covering every key      -> DirectSound voice
      - several splits                     -> KeySplit voice + 128-key table
      - several splits with per-key pan    -> DrumTable voice (drum kits)
      - program missing / unusable         -> silent voice
  * the DSE volume envelope (attack, hold, decay -> sustain, decay2, release
    durations from the DSE duration table) is approximated by m4a's
    attack / decay / sustain / release bytes (per-frame, 59.73 Hz).
  * split / program / sample volume and the sample normalisation gain are not
    expressible in an m4a voice; they are returned as Tone.gain and applied
    to note velocities by the song converter.

Not ported: velocity layers (none in the songs used), overlapping layered
splits (the first split wins), key groups (kgrp voice stealing), LFOs
(vibrato / tremolo), and DSE's exact envelope curves.
"""
from __future__ import annotations

import math
from dataclasses import dataclass
from pathlib import Path

import numpy as np

import swdl

DS_RATE = 32728
GBA_RATE = 18157
FRAME_S = 280896 / 16777216          # one GBA frame (m4a envelope tick)

# DSE envelope duration table (ms, x envmult), from ppmdu's dse_common.hpp.
DSE_DURATION = [
    0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007,
    0x0008, 0x0009, 0x000A, 0x000B, 0x000C, 0x000D, 0x000E, 0x000F,
    0x0010, 0x0011, 0x0012, 0x0013, 0x0014, 0x0015, 0x0016, 0x0017,
    0x0018, 0x0019, 0x001A, 0x001B, 0x001C, 0x001D, 0x001E, 0x001F,
    0x0020, 0x0023, 0x0028, 0x002D, 0x0033, 0x0039, 0x0040, 0x0048,
    0x0050, 0x0058, 0x0062, 0x006D, 0x0078, 0x0083, 0x0090, 0x009E,
    0x00AC, 0x00BC, 0x00CC, 0x00DE, 0x00F0, 0x0104, 0x0119, 0x012F,
    0x0147, 0x0160, 0x017A, 0x0196, 0x01B3, 0x01D2, 0x01F2, 0x0214,
    0x0238, 0x025E, 0x0285, 0x02AE, 0x02D9, 0x0307, 0x0336, 0x0367,
    0x039B, 0x03D1, 0x0406, 0x0442, 0x047E, 0x04C4, 0x0500, 0x0546,
    0x058C, 0x0622, 0x0672, 0x06CC, 0x071C, 0x0776, 0x07DA, 0x0834,
    0x0898, 0x0906, 0x096A, 0x09D8, 0x0A50, 0x0ABE, 0x0B40, 0x0BB8,
    0x0C3A, 0x0CBC, 0x0D48, 0x0DDE, 0x0E6A, 0x0F00, 0x0FA0, 0x1040,
    0x10EA, 0x1194, 0x123E, 0x12F2, 0x13B0, 0x146E, 0x1536, 0x15FE,
    0x16D0, 0x17A2, 0x187E, 0x195A, 0x1A40, 0x1B30, 0x1C20, 0x1D1A,
    0x1E1E, 0x1F22, 0x2030, 0x2148, 0x2260, 0x2382, 0x2710, 0x7FFF,
]
SILENT = 0.01                         # "faded out" level for decay / release (-40 dB)


def dse_seconds(v: int, mult: int) -> float:
    v = max(0, min(127, v))
    if v == 127:
        return math.inf
    return DSE_DURATION[v] * max(1, mult) / 1000.0


def _rate_for(target: float, seconds: float) -> int:
    """m4a per-frame multiplier (x/256) that reaches `target` after `seconds`."""
    if seconds == math.inf:
        return 255
    n = seconds / FRAME_S
    if n < 1:
        return 0
    return max(0, min(255, round(256 * target ** (1 / n))))


def envelope_to_adsr(env: swdl.Envelope) -> tuple[int, int, int, int]:
    if not env.on:
        return 255, 0, 255, 0
    t_a = dse_seconds(env.attack, env.mult)
    frames = t_a / FRAME_S
    a = 255 if frames <= 1 else max(1, min(255, math.ceil((255 - 2 * env.atkvol) / frames)))
    t_h = dse_seconds(env.hold, env.mult) if env.hold else 0.0
    t_d = dse_seconds(env.decay, env.mult)
    t_d2 = dse_seconds(env.decay2, env.mult)
    sus = env.sustain / 127
    if sus >= 1 and t_d2 == math.inf:
        d, s = 0, 255
    elif t_d2 != math.inf:
        # decay to the sustain level, then decay2 fades it out: one m4a fade
        # to silence over the whole time.
        d, s = _rate_for(SILENT, t_h + (0 if sus >= 1 else t_d) + t_d2), 0
    elif sus <= 0:
        d, s = _rate_for(SILENT, t_h + t_d), 0
    else:
        d, s = _rate_for(sus, t_h + t_d), max(1, round(sus * 255))
    r = _rate_for(SILENT, dse_seconds(env.release, env.mult))
    return a, d, s, r


def resample(x: np.ndarray, ratio: float, t: np.ndarray, loop_start: int | None,
             taps: int = 16) -> np.ndarray:
    """Windowed-sinc interpolation of x at input positions t (output rate =
    input rate * ratio). Past the end, a looping sample repeats its loop."""
    n = len(x)
    fc = min(1.0, ratio) * 0.94
    base = np.floor(t).astype(np.int64)
    out = np.zeros(len(t))
    win = np.kaiser(2 * taps + 1, 8.0)
    for k in range(-taps, taps + 1):
        idx = base + k
        d = t - idx
        h = fc * np.sinc(fc * d) * np.interp(d, np.arange(-taps, taps + 1), win)
        if loop_start is not None:
            ll = n - loop_start
            over = idx >= n
            idx = np.where(over, loop_start + (idx - n) % ll, idx)
        valid = (idx >= 0) & (idx < n)
        out += np.where(valid, x[np.clip(idx, 0, n - 1)], 0.0) * h
    return out


@dataclass
class Wave:
    sample: int
    bin_name: str
    rate: float           # stored rate (Hz)
    ratio: float          # stored / original
    size: int
    loop_start: int
    looped: bool
    norm: float           # stored = original(int16)/256 * norm


@dataclass
class Tone:
    wave_label: str
    adsr: tuple
    pan: int              # -64..63
    gain: float           # velocity factor for this split

    def asm(self, key: int = 60, drum: bool = False) -> str:
        ps = (0xC0 + max(-64, min(63, self.pan)) // 2) & 0xFF if drum and self.pan else 0
        a, d, s, r = self.adsr
        return (f"\t.byte\t0x00, {key}, 0x00, 0x{ps:02X}\n\t.word\t{self.wave_label}\n"
                f"\t.byte\t{a}, {d}, {s}, {r}\n")


SILENT_TONE = Tone("sky_wav_silent", (255, 0, 0, 0), 0, 0.0)


class SoundFont:
    def __init__(self, rom, root: Path, max_rate: int = GBA_RATE, long_rate: int | None = None,
                 long_bytes: int = 1 << 30, sample_bank: str = "SOUND/BGM/bgm.swd",
                 prefix: str = "sky", bin_prefix: str = "eos", out_name: str = "sky_samples.s"):
        """sample_bank: the swdl holding the samples (pcmd). Each bank needs its
        own prefix / bin_prefix / out_name so labels and files do not collide;
        sky_wav_silent is defined by the default (bgm.swd) output only."""
        self.sample_bank = sample_bank
        self.main = swdl.parse(rom.getFileByName(sample_bank))
        self.prefix = prefix
        self.bin_prefix = bin_prefix
        self.out_name = out_name
        self.defines_silent = out_name == "sky_samples.s"
        self.rom = rom
        self.root = root
        self.bin_dir = root / "sound" / "direct_sound_samples" / "sky"
        self.max_rate = max_rate
        self.long_rate = long_rate
        self.long_bytes = long_bytes
        self.waves: dict[int, Wave] = {}               # sample id -> decoded wave
        self.wavedata: dict[tuple, str] = {}           # (sample id, freq) -> label
        self.data: dict[int, bytes] = {}
        self.label_info: dict[str, tuple] = {}         # label -> (sample id, freq)

    # -- samples ------------------------------------------------------------
    def wave(self, sid: int) -> Wave | None:
        if sid in self.waves:
            return self.waves[sid]
        info = self.main.samples.get(sid)
        if info is None or info.fmt not in (swdl.FMT_ADPCM, swdl.FMT_PCM8, swdl.FMT_PCM16):
            self.waves[sid] = None
            return None
        pcm, ls = swdl.sample_pcm(info, self.main.pcmd)
        x = pcm.astype(np.float64)
        looped = info.loop and ls < len(x) - 1
        rate = self.max_rate
        if self.long_rate and len(x) * min(1, rate / info.rate) > self.long_bytes:
            rate = self.long_rate
        ratio = min(1.0, rate / info.rate)
        if looped:
            ll = len(x) - ls
            if ratio < 1.0:
                ratio = max(1, round(ll * ratio)) / ll
            ls2 = round(ls * ratio)
            n2 = ls2 + round(ll * ratio)
            t = ls + (np.arange(n2) - ls2) / ratio
        else:
            ls2 = 0
            n2 = max(1, int(len(x) * ratio))
            t = np.arange(n2) / ratio
        y = x.copy() if ratio == 1.0 else resample(x, ratio, t, ls if looped else None)
        peak = max(1.0, float(np.abs(y).max()))
        norm = 127 * 256 / peak
        q = np.clip(np.round(y * norm / 256), -128, 127).astype(np.int8)
        if not looped:
            nz = np.nonzero(np.abs(q) > 1)[0]
            q = q[: (nz[-1] + 1) if len(nz) else 1]
        size = len(q)
        extra = q[ls2] if looped else np.int8(0)
        data = q.tobytes() + bytes([int(extra) & 0xFF])
        w = Wave(sid, f"{self.bin_prefix}_{sid:03d}.bin", info.rate * ratio, ratio, size, ls2, looped, norm)
        self.waves[sid] = w
        self.data[sid] = data
        return w

    def wavedata_label(self, split: swdl.Split) -> tuple[str | None, Wave | None]:
        w = self.wave(split.sample)
        if w is None:
            return None, None
        semis = 60 - split.rootkey + split.ctune + split.ftune / 256
        freq = round(DS_RATE * 2 ** (semis / 12) * w.ratio * 1024)
        key = (split.sample, freq)
        if key not in self.wavedata:
            label = f"{self.prefix}_wav_{split.sample:03d}_{len([k for k in self.wavedata if k[0] == split.sample])}"
            self.wavedata[key] = label
            self.label_info[label] = key
        return self.wavedata[key], w

    def tone(self, prog: swdl.Program, split: swdl.Split) -> Tone:
        label, w = self.wavedata_label(split)
        if label is None:
            return SILENT_TONE
        info = self.main.samples[split.sample]
        gain = (prog.vol / 127) * (split.vol / 127) * (info.vol / 127) / w.norm
        return Tone(label, envelope_to_adsr(split.env), split.pan - 64, gain)

    # -- voicegroups ----------------------------------------------------------
    def voicegroup(self, bgm: int, programs: set[int]) -> tuple[str, str, dict]:
        """Voicegroup sky_vg_bgmNNNN from SOUND/BGM/bgmNNNN.swd's programs."""
        return self.voicegroup_from(f"SOUND/BGM/bgm{bgm:04d}.swd", f"sky_vg_bgm{bgm:04d}", programs)

    def voicegroup_from(self, bank_path: str, label: str, programs: set[int]) -> tuple[str, str, dict]:
        """Returns (label, asm, tones) where tones[(program, key)] is the Tone that
        plays that key (its .gain is the velocity factor). The programs come from
        bank_path; their samples from this SoundFont's sample bank."""
        bank = swdl.parse(self.rom.getFileByName(bank_path))
        gains: dict[tuple[int, int], float] = {}
        voices, extra = [], []
        top = max(programs) if programs else 0
        for pid in range(top + 1):
            prog = bank.programs.get(pid) if pid in programs else None
            splits = [s for s in prog.splits if self.wave(s.sample) is not None] if prog else []
            if not splits:
                voices.append(f"@ program {pid}: silent\n" + SILENT_TONE.asm())
                continue
            per_key: list[Tone | None] = [None] * 128
            tones: list[Tone] = []
            for s in splits:
                t = self.tone(prog, s)
                tones.append(t)
                for k in range(max(0, s.lowkey), min(127, s.hikey) + 1):
                    if per_key[k] is None:     # overlapping layers: first split wins
                        per_key[k] = t
            for k, t in enumerate(per_key):
                if t is not None:
                    gains[(pid, k)] = t
            uniq = []
            for t in tones:
                if t not in uniq and t in per_key:
                    uniq.append(t)
            full = all(t == uniq[0] for t in per_key)
            if len(uniq) == 1 and full:
                voices.append(f"@ program {pid}: 1 split\n" + uniq[0].asm())
            elif any(t.pan for t in uniq):
                sub = f"{label}_p{pid}_drums"
                voices.append(f"@ program {pid}: {len(uniq)} splits, per-key pan\n"
                              f"\t.byte\t0x80, 0, 0, 0\n\t.word\t{sub}\n\t.word\t0\n")
                body = "".join((t or SILENT_TONE).asm(key=k, drum=True) for k, t in enumerate(per_key))
                extra.append(f"{sub}:\n{body}")
            else:
                sub = f"{label}_p{pid}_tones"
                tbl = f"{label}_p{pid}_keys"
                if any(t is None for t in per_key):
                    uniq.append(SILENT_TONE)
                idx = [uniq.index(t if t is not None else SILENT_TONE) for t in per_key]
                voices.append(f"@ program {pid}: {len(uniq)} splits\n"
                              f"\t.byte\t0x40, 0, 0, 0\n\t.word\t{sub}\n\t.word\t{tbl}\n")
                extra.append(f"{sub}:\n" + "".join(t.asm() for t in uniq))
                extra.append(f"{tbl}:\n" + "".join(
                    "\t.byte\t" + ", ".join(str(i) for i in idx[r:r + 16]) + "\n" for r in range(0, 128, 16)))
        asm = (f"\t.section .rodata\n\t.align\t2\n{label}:\n" + "".join(voices)
               + "".join(f"\t.align\t2\n{e}" for e in extra) + "\n")
        return label, asm, gains

    def used_samples(self) -> list[int]:
        return sorted({sid for sid, _ in self.wavedata})

    def render_waves(self) -> dict:
        """label -> (float samples, size, loop start, looped, freq) for m4a_render."""
        if getattr(self, "_render_cache", None) is None or len(self._render_cache) != len(self.label_info) + 1:
            out = {"sky_wav_silent": (np.zeros(2), 1, 0, False, 0x400000)}
            for label, (sid, freq) in self.label_info.items():
                w = self.waves[sid]
                data = np.frombuffer(self.data[sid], dtype=np.int8).astype(np.float64)
                out[label] = (data, w.size, w.loop_start, w.looped, freq)
            self._render_cache = out
        return self._render_cache

    # -- output ---------------------------------------------------------------
    def write(self) -> tuple[int, int]:
        """Writes the .bin samples and sound/songs/sky_samples.s. Returns
        (number of WaveData, ROM bytes)."""
        self.bin_dir.mkdir(parents=True, exist_ok=True)
        for old in self.bin_dir.glob(f"{self.bin_prefix}_*.bin"):
            old.unlink()
        for sid in self.used_samples():
            (self.bin_dir / self.waves[sid].bin_name).write_bytes(self.data[sid])
        lines = [f"@ Explorers of Sky demake: EoS instrument samples ({self.sample_bank}) as m4a",
                 "@ WaveData, generated by tools/eos_music/convert_eos_bgm.py — do not edit.",
                 "#ifdef SKY_STORY", "\t.section .rodata", ""]
        total = 0
        if self.defines_silent:
            lines += ["\t.align\t2", "\t.global\tsky_wav_silent", "sky_wav_silent:",
                      "\t.hword\t0x0000, 0x0000", "\t.word\t0x400000", "\t.word\t0", "\t.word\t1",
                      "\t.byte\t0, 0", ""]
            total = 16 + 2
        for (sid, freq), label in sorted(self.wavedata.items(), key=lambda kv: kv[1]):
            w = self.waves[sid]
            lines += ["\t.align\t2", f"\t.global\t{label}", f"{label}:",
                      f"\t.hword\t0x0000, 0x{0x4000 if w.looped else 0:04X}",
                      f"\t.word\t{freq} @ {freq / 1024:.2f} Hz at key 60",
                      f"\t.word\t{w.loop_start} @ loop start",
                      f"\t.word\t{w.size} @ size",
                      f'\t.incbin\t"sound/direct_sound_samples/sky/{w.bin_name}"', ""]
            total += 16 + ((len(self.data[sid]) + 3) & ~3)
        lines += ["#endif", ""]
        (self.root / "sound" / "songs" / self.out_name).write_text("\n".join(lines))
        return len(self.wavedata), total
