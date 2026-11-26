"""Rough reader for Red's m4a2s song sources (sound/songs/seq_NNN.s):
per-track voices and the notes written in the track (patterns are counted
once). Good enough for statistics (pitch range / histogram per voice)."""
from __future__ import annotations

import re
from pathlib import Path

NOTE_NAMES = {"Cn": 0, "Cs": 1, "Dn": 2, "Ds": 3, "En": 4, "Fn": 5, "Fs": 6,
              "Gn": 7, "Gs": 8, "An": 9, "As": 10, "Bn": 11}


def note_to_midi(tok: str) -> int | None:
    m = re.fullmatch(r"([A-G][ns])(M?)(\d)", tok)
    if not m:
        return None
    octave = int(m.group(3)) * (-1 if m.group(2) else 1)
    return NOTE_NAMES[m.group(1)] + 12 * (octave + 2)  # Cn3 = 60


def parse(path: Path):
    tracks = []
    cur = None
    for line in path.read_text().split("\n"):
        if "Track" in line and line.startswith("@"):
            cur = {"voices": [], "notes": []}
            tracks.append(cur)
            continue
        if cur is None:
            continue
        m = re.search(r"VOICE\s*,\s*(\d+)", line)
        if m:
            cur["voices"].append(int(m.group(1)))
            continue
        if ".byte" in line:
            toks = [t.strip() for t in line.split(".byte", 1)[1].split(",")]
            for t in toks:
                k = note_to_midi(t)
                if k is not None:
                    cur["notes"].append(k)
    return tracks
