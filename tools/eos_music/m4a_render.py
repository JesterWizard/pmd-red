"""Rough offline model of m4a DirectSound playback (8-bit samples, per-frame
ADSR, MidiKeyToFreq pitch, ChnVolSet / TrkVolPitSet volume maths) used to
pick each song's master volume so the 8-bit mixer (which wraps instead of
clipping) keeps headroom, and to sanity-check pitch.

Channel stealing and reverb are not modelled, so levels are an upper bound."""
from __future__ import annotations

import math

import numpy as np

MIX_RATE = 18157
FRAME_SAMPLES = 304                  # ~18157 / 59.73
MASTER_VOL = 14                      # m4aSoundMode(... 14 << SOUND_MODE_MASVOL_SHIFT)


def key_freq(freq1024: int, key: int) -> float:
    return freq1024 / 1024 * 2 ** ((key - 60) / 12)


def envelope(adsr, gate_frames: int, max_frames: int) -> np.ndarray:
    a, d, s, r = adsr
    env, out, phase = 0, [], "a"
    for f in range(max_frames):
        if f >= gate_frames:
            env = (env * r) >> 8
            if env == 0:
                break
        elif phase == "a":
            env += a
            if env >= 255:
                env, phase = 255, "d"
        elif phase == "d":
            env = (env * d) >> 8
            if env <= s:
                env, phase = s, "s"
        out.append(env)
    return np.array(out, dtype=np.float64)


def voice(data: np.ndarray, size: int, loop_start: int, looped: bool, freq: float,
          nsamples: int) -> np.ndarray:
    step = freq / MIX_RATE
    pos = np.arange(nsamples) * step
    if looped:
        ll = size - loop_start
        pos = np.where(pos >= size, loop_start + np.mod(pos - loop_start, ll), pos)
    else:
        pos = pos[pos < size - 1]
    i = pos.astype(np.int64)
    fr = pos - i
    return data[i] * (1 - fr) + data[np.minimum(i + 1, len(data) - 1)] * fr


def render(notes, waves, seconds: float, mvl: int = 127) -> tuple[np.ndarray, np.ndarray]:
    """notes: (start_s, dur_s, key, velocity, vol 0..127, pan -64..63,
    tone pan -64..63 (drum kits), adsr, wave label, play key).
    waves: label -> (int8 array, size, loop_start, looped, freq1024)."""
    n = int(seconds * MIX_RATE)
    left = np.zeros(n)
    right = np.zeros(n)
    for start, dur, key, vel, vol, pan, tpan, adsr, label, pkey in notes:
        s0 = int(start * MIX_RATE)
        if s0 >= n:
            continue
        data, size, ls, looped, f1024 = waves[label]
        gate = max(1, math.ceil(dur * MIX_RATE / FRAME_SAMPLES))
        env = envelope(adsr, gate, min(gate + 600, (n - s0) // FRAME_SAMPLES + 1))
        if not len(env):
            continue
        env = (env * (MASTER_VOL + 1)).astype(np.int64) >> 4
        x = vol * mvl // 127 * 2
        y = max(-128, min(127, 2 * pan))
        vmr = ((y + 128) * x) >> 8
        vml = ((127 - y) * x) >> 8
        rv = min(255, (vel * (128 + tpan) * vmr) >> 14)
        lv = min(255, (vel * (127 - tpan) * vml) >> 14)
        ns = min(len(env) * FRAME_SAMPLES, n - s0)
        w = voice(data, size, ls, looped, key_freq(f1024, pkey), ns)
        e = np.repeat(env, FRAME_SAMPLES)[: len(w)]
        right[s0:s0 + len(w)] += w * ((rv * e).astype(np.int64) >> 8) / 256
        left[s0:s0 + len(w)] += w * ((lv * e).astype(np.int64) >> 8) / 256
    return left, right


def headroom_mvl(notes, waves, seconds: float, target: float = 112.0) -> tuple[int, float]:
    left, right = render(notes, waves, seconds, 127)
    both = np.abs(np.concatenate([left, right]))
    if not len(both):
        return 127, 0.0
    level = float(np.percentile(both, 99.99))
    mvl = 127 if level <= 0 else int(min(127, max(16, 127 * target / level)))
    return mvl, level
