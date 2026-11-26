#!/usr/bin/env python3
"""Convert Explorers of Sky BGM sequences (SOUND/BGM/bgmNNNN.smd) into Rescue
Team m4a songs that play on Red's main BGM voicegroup (bank_000).

    tools/eos_music/convert_eos_bgm.py EOS.nds

For each song in SONGS: SMDL -> MIDI (sound/songs/midi/sky_*.mid) -> mid2agb
-> sound/songs/seq_NNN.s. Only the note data comes from EoS; the instruments
are Red's (EoS's DS sample banks are not ported). Each EoS track is mapped to
a Red voice by role:

  * EoS programs 126/127 (drum kits) -> Red voice 127 (drum kit, GM-style keys
    in both games, so drum keys are kept).
  * other tracks by register (median pitch) and note density:
    bass -> 95, low strings/pad -> 46, mid -> 14/5, high lead -> 76,
    very high bells -> 118.
  * per-song overrides in SONGS where a track clearly wants something else.

EoS keys line up with MIDI keys (checked against Red's own arrangements of
Welcome to the World of Pokémon, which both games share).
"""
from __future__ import annotations

import statistics
import struct
import subprocess
import sys
from pathlib import Path

import ndspy.rom

sys.path.insert(0, str(Path(__file__).resolve().parent))
import smdl  # noqa: E402

ROOT = Path(__file__).resolve().parents[2]
MID2AGB = ROOT / "tools" / "mid2agb" / "mid2agb"
SONG_DIR = ROOT / "sound" / "songs"
MIDI_DIR = SONG_DIR / "midi"

# (song slot / music id, EoS bgm id, name, master volume, {eos track index: red voice})
SONGS = [
    # EoS bgm0101 "Storm" is an ambient storm-noise loop, not music: the storm
    # scene keeps Red's Stormy Sea.
    (61, 69, "sky_on_the_beach_at_dusk", 110, {}),
    (62, 21, "sky_beach_cave", 110, {}),
    (63, 15, "sky_boss_battle", 115, {}),
    (64, 14, "sky_in_the_depths_of_the_pit", 110, {}),
    (65, 130, "sky_title_theme", 110, {}),
    (66, 2, "sky_top_menu_theme", 105, {}),
    (67, 1, "sky_exploration_team_theme", 110, {}),
    (68, 6, "sky_welcome_to_the_world_of_pokemon", 105, {}),
]

DRUM_PROGRAMS = {126, 127}


def pick_voice(track: smdl.Track) -> int:
    progs = [p for _, p in track.programs]
    if any(p in DRUM_PROGRAMS for p in progs):
        return 127
    keys = [n.key for n in track.notes]
    med = statistics.median(keys)
    span = max(keys) - min(keys)
    if med < 50:
        return 95          # bass
    if med < 62:
        return 46 if span > 6 else 95
    if med < 70:
        return 14          # mid line
    if med < 78:
        return 76          # lead
    if med < 88:
        return 5           # high line
    return 118             # bells / sparkles


def vlq(n: int) -> bytes:
    out = [n & 0x7F]
    n >>= 7
    while n:
        out.append(0x80 | (n & 0x7F))
        n >>= 7
    return bytes(reversed(out))


def midi_track(events: list[tuple[int, int, bytes]]) -> bytes:
    events.sort(key=lambda e: (e[0], e[1]))
    body = bytearray()
    last = 0
    for tick, _, data in events:
        body += vlq(tick - last) + data
        last = tick
    body += vlq(0) + b"\xFF\x2F\x00"
    return b"MTrk" + struct.pack(">I", len(body)) + bytes(body)


def song_to_midi(song: smdl.Song, overrides: dict[int, int]) -> bytes:
    tracks = []
    loop = None
    end = 0
    for t in song.tracks:
        if t.loop_tick is not None:
            loop = t.loop_tick if loop is None else min(loop, t.loop_tick)
        end = max(end, t.end_tick)

    # conductor: tempo + loop markers ("[" / "]" for mid2agb)
    cond = []
    for t in song.tracks:
        for tick, bpm in t.tempos:
            us = int(60_000_000 / max(bpm, 1))
            cond.append((tick, 0, b"\xFF\x51\x03" + us.to_bytes(3, "big")))
    if not cond:
        cond.append((0, 0, b"\xFF\x51\x03" + (500000).to_bytes(3, "big")))
    if loop is not None:
        cond.append((loop, 1, b"\xFF\x06\x01["))
        cond.append((end, 9, b"\xFF\x06\x01]"))
    tracks.append(midi_track(cond))

    ch = 0
    for t in song.tracks:
        if not t.notes:
            continue
        if ch == 9:
            ch += 1  # keep MIDI channel 10 free of meaning for mid2agb
        c = ch & 0xF
        ch += 1
        voice = overrides.get(t.index, pick_voice(t))
        ev = [(0, 0, bytes([0xC0 | c, voice & 0x7F]))]
        for tick, vol in t.volumes:
            ev.append((tick, 1, bytes([0xB0 | c, 7, min(vol, 127)])))
        for tick, ex in t.expressions:
            ev.append((tick, 1, bytes([0xB0 | c, 11, min(ex, 127)])))
        for tick, pan in t.pans:
            ev.append((tick, 1, bytes([0xB0 | c, 10, min(pan, 127)])))
        for n in t.notes:
            key = max(0, min(127, n.key))
            dur = max(1, n.dur)
            ev.append((n.tick, 3, bytes([0x90 | c, key, max(1, min(n.vel, 127))])))
            ev.append((n.tick + dur, 2, bytes([0x80 | c, key, 0])))
        tracks.append(midi_track(ev))
        if ch >= 16:
            break

    header = b"MThd" + struct.pack(">IHHH", 6, 1, len(tracks), song.tpqn)
    return header + b"".join(tracks)


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    MIDI_DIR.mkdir(parents=True, exist_ok=True)
    for slot, bgm, name, mvl, overrides in SONGS:
        song = smdl.parse(rom.getFileByName(f"SOUND/BGM/bgm{bgm:04d}.smd"))
        mid = MIDI_DIR / f"{name}.mid"
        mid.write_bytes(song_to_midi(song, overrides))
        label = f"seq_{slot:03d}"
        out = SONG_DIR / f"{label}.s"
        subprocess.run([str(MID2AGB), str(mid), str(out), f"-L{label}", f"-V{mvl:03d}",
                        "-G000", "-P050", "-E"], check=True)
        text = out.read_text()
        text = text.replace("voicegroup000", "bank_000")
        out.write_text(f"@ Explorers of Sky demake: EoS bgm{bgm:04d} ({name}) on Red voices,\n"
                       f"@ generated by tools/eos_music/convert_eos_bgm.py\n"
                       f"#ifdef SKY_STORY\n" + text + "#endif\n")
        print(f"{label}: EoS bgm{bgm:04d} {name}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
