"""Explorers of Sky DSE "swdl" (instrument / sample bank) parser.

Layout follows psy_commando's ppmdu DSE notes (header 0x50 bytes, then
16-byte chunk headers "wavi", "prgi", "kgrp", "pcmd", "eod "):

  * wavi: u16 offset table (one slot per sample id) -> 0x40-byte sample infos
    (tuning, root key, format, rate, position in pcmd, loop in 32-bit words,
    volume envelope).
  * prgi: u16 offset table (one slot per program id) -> program header
    (0x10), LFOs (0x10 each), a 0x10 delimiter, then 0x30-byte splits
    (key / velocity range, sample id, tuning, root key, volume, pan, envelope).
  * pcmd: raw sample data (only in the main bank, SOUND/BGM/bgm.swd; the
    per-song banks bgmNNNN.swd reference it).

Sample formats: 0x000 PCM8, 0x100 PCM16, 0x200 IMA-ADPCM (4-byte header:
s16 predictor, u8 step index, u8 pad; low nibble first). Loop start/length
are in 32-bit words and, for ADPCM, count the 4-byte header.

Tuning: coarse tune is a signed semitone count, fine tune an UNSIGNED
1/256-semitone fraction (checked against the sample rates: every sample has
ctune + ftune/256 == 12*log2(rate / 32728), e.g. 16016 Hz -> -13 + 161/256).
A split's root key and key transpose always satisfy root + ktps == 60.
"""
from __future__ import annotations

import struct
from dataclasses import dataclass, field

import numpy as np

FMT_PCM8 = 0x000
FMT_PCM16 = 0x100
FMT_ADPCM = 0x200
FMT_PSG = 0x300


@dataclass
class Envelope:
    on: int
    mult: int
    atkvol: int
    attack: int
    decay: int
    sustain: int
    hold: int
    decay2: int
    release: int

    @classmethod
    def read(cls, b: bytes, off: int) -> "Envelope":
        # off -> envon, envmult; atkvol, attack, decay, sustain, hold, decay2, release at off + 8
        return cls(b[off], b[off + 1], *b[off + 8:off + 15])


@dataclass
class SampleInfo:
    id: int
    ftune: int
    ctune: int
    rootkey: int
    ktps: int
    vol: int
    pan: int
    fmt: int
    loop: bool
    rate: int
    pos: int
    loopbeg: int   # words
    looplen: int   # words
    env: Envelope


@dataclass
class Split:
    id: int
    lowkey: int
    hikey: int
    lovel: int
    hivel: int
    sample: int
    ftune: int
    ctune: int
    rootkey: int
    ktps: int
    vol: int
    pan: int
    kgrp: int
    env: Envelope
    raw: bytes = b""


@dataclass
class Program:
    id: int
    vol: int
    pan: int
    splits: list = field(default_factory=list)
    lfos: list = field(default_factory=list)


@dataclass
class Bank:
    samples: dict           # id -> SampleInfo
    programs: dict          # id -> Program
    pcmd: bytes | None
    kgrp: bytes | None


def _chunks(d: bytes):
    pos = 0x50
    while pos + 16 <= len(d):
        lab = d[pos:pos + 4]
        ln = struct.unpack_from("<I", d, pos + 12)[0]
        if lab == b"eod ":
            break
        yield lab, d[pos + 16:pos + 16 + ln]
        pos = (pos + 16 + ln + 15) & ~15


def parse(d: bytes) -> Bank:
    assert d[:4] == b"swdl", d[:4]
    nwavi = struct.unpack_from("<H", d, 0x46)[0]
    nprgi = struct.unpack_from("<H", d, 0x48)[0]
    samples, programs, pcmd, kgrp = {}, {}, None, None
    for lab, body in _chunks(d):
        if lab == b"wavi":
            offs = struct.unpack_from(f"<{nwavi}H", body, 0)
            for o in offs:
                if not o:
                    continue
                e = body[o:o + 0x40]
                sid, ft, ct, rk, kt, vol, pan = struct.unpack_from("<HBbBbBb", e, 2)
                fmt = struct.unpack_from("<H", e, 0x12)[0]
                rate, pos, lb, ll = struct.unpack_from("<IIII", e, 0x20)
                samples[sid] = SampleInfo(sid, ft, ct, rk, kt, vol, pan, fmt, bool(e[0x15]),
                                          rate, pos, lb, ll, Envelope.read(e, 0x30))
        elif lab == b"prgi":
            offs = struct.unpack_from(f"<{nprgi}H", body, 0)
            for o in offs:
                if not o:
                    continue
                pid, nspl, pvol, ppan = struct.unpack_from("<HHBB", body, o)
                nlfo = body[o + 0xB]
                p = Program(pid, pvol, ppan)
                q = o + 16
                for _ in range(nlfo):
                    p.lfos.append(body[q:q + 16])
                    q += 16
                q += 16
                for _ in range(nspl):
                    s = body[q:q + 0x30]
                    sid = struct.unpack_from("<H", s, 0x12)[0]
                    ft, ct, rk, kt, vol, pan, kg = struct.unpack_from("<BbbbBbB", s, 0x14)
                    p.splits.append(Split(s[1], s[4], s[5], s[8], s[9], sid, ft, ct, rk, kt,
                                          vol, pan, kg, Envelope.read(s, 0x20), s))
                    q += 0x30
                programs[pid] = p
        elif lab == b"pcmd":
            pcmd = body
        elif lab == b"kgrp":
            kgrp = body
    return Bank(samples, programs, pcmd, kgrp)


IMA_STEPS = [
    7, 8, 9, 10, 11, 12, 13, 14, 16, 17, 19, 21, 23, 25, 28, 31, 34, 37, 41, 45,
    50, 55, 60, 66, 73, 80, 88, 97, 107, 118, 130, 143, 157, 173, 190, 209, 230,
    253, 279, 307, 337, 371, 408, 449, 494, 544, 598, 658, 724, 796, 876, 963,
    1060, 1166, 1282, 1411, 1552, 1707, 1878, 2066, 2272, 2499, 2749, 3024, 3327,
    3660, 4026, 4428, 4871, 5358, 5894, 6484, 7132, 7845, 8630, 9493, 10442,
    11487, 12635, 13899, 15289, 16818, 18500, 20350, 22385, 24623, 27086, 29794,
    32767]
IMA_INDEX = [-1, -1, -1, -1, 2, 4, 6, 8]


def decode_adpcm(b: bytes) -> np.ndarray:
    pred, idx = struct.unpack_from("<hB", b, 0)
    idx = min(idx, 88)
    out = np.empty((len(b) - 4) * 2, dtype=np.int16)
    n = 0
    for byte in b[4:]:
        for nib in (byte & 0xF, byte >> 4):
            step = IMA_STEPS[idx]
            diff = step >> 3
            if nib & 1:
                diff += step >> 2
            if nib & 2:
                diff += step >> 1
            if nib & 4:
                diff += step
            if nib & 8:
                pred -= diff
            else:
                pred += diff
            pred = max(-32768, min(32767, pred))
            idx = max(0, min(88, idx + IMA_INDEX[nib & 7]))
            out[n] = pred
            n += 1
    return out


def sample_pcm(info: SampleInfo, pcmd: bytes) -> tuple[np.ndarray, int]:
    """Decode a sample to int16 PCM. Returns (pcm, loop_start_in_samples)."""
    nbytes = (info.loopbeg + info.looplen) * 4
    raw = pcmd[info.pos:info.pos + nbytes]
    lb = info.loopbeg * 4
    if info.fmt == FMT_ADPCM:
        return decode_adpcm(raw), max(0, (lb - 4) * 2)
    if info.fmt == FMT_PCM16:
        return np.frombuffer(raw, dtype="<i2").astype(np.int16), lb // 2
    if info.fmt == FMT_PCM8:
        return (np.frombuffer(raw, dtype=np.int8).astype(np.int16) << 8), lb
    raise ValueError(f"sample {info.id}: unsupported format 0x{info.fmt:X}")
