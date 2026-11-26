#!/usr/bin/env python3
"""Convert Explorers of Sky BGM sequences (SOUND/BGM/bgmNNNN.smd) into Rescue
Team m4a songs that play on Red's main BGM voicegroup (bank_000).

    tools/eos_music/convert_eos_bgm.py EOS.nds

Also converts every Sky Jukebox track (EoS overlay 9's track -> bgm table,
names from the "Music Tracks" strings): tracks not in SONGS become
sound/songs/sky_bgm_NNNN.s, appended to the song table after its last entry
(sound/sky_jukebox_songs.inc, under SKY_STORY), and
src/data/sky_jukebox_data.h lists all 141 tracks with their song ids.

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


# EoS US overlay 9 (Sky Jukebox): u16 bgm id per jukebox track.
JUKEBOX_TABLE_OFFSET = 0x2BE4
JUKEBOX_TRACKS = 141
SONG_TABLE = ROOT / "sound" / "song_table.inc"
JUKEBOX_INC = ROOT / "sound" / "sky_jukebox_songs.inc"
JUKEBOX_C = ROOT / "src" / "data" / "sky_jukebox_data.h"


def convert(rom, bgm: int, label: str, out: Path, mvl: int, overrides: dict, name: str) -> None:
    song = smdl.parse(rom.getFileByName(f"SOUND/BGM/bgm{bgm:04d}.smd"))
    mid = MIDI_DIR / f"{label}.mid"
    mid.write_bytes(song_to_midi(song, overrides))
    subprocess.run([str(MID2AGB), str(mid), str(out), f"-L{label}", f"-V{mvl:03d}",
                    "-G000", "-P050", "-E"], check=True)
    text = out.read_text().replace("voicegroup000", "bank_000")
    out.write_text(f"@ Explorers of Sky demake: EoS bgm{bgm:04d} ({name}) on Red voices,\n"
                   f"@ generated by tools/eos_music/convert_eos_bgm.py\n"
                   f"#ifdef SKY_STORY\n" + text + "#endif\n")


def jukebox(rom) -> None:
    import ndspy.codeCompression as cc
    from skytemple_files.common.types.file_types import FileType
    from skytemple_files.common.util import get_ppmdu_config_for_rom

    ov = rom.loadArm9Overlays()[9]
    data = cc.decompress(ov.data) if ov.compressed else ov.data
    bgms = [struct.unpack_from("<H", data, JUKEBOX_TABLE_OFFSET + 2 * i)[0] for i in range(JUKEBOX_TRACKS)]
    cfg = get_ppmdu_config_for_rom(rom)
    blk = cfg.string_index_data.string_blocks["Music Tracks"]
    strings = FileType.STR.deserialize(rom.getFileByName("MESSAGE/text_e.str")).strings
    names = [s.strip() for s in strings[blk.begin:blk.end]]
    assert len(names) == JUKEBOX_TRACKS

    # Red's table ends here; jukebox songs are appended after it.
    first = sum(1 for line in SONG_TABLE.read_text().splitlines() if line.startswith("song "))
    existing = {bgm: slot for slot, bgm, *_ in SONGS}
    extra = []
    song_ids = []
    for bgm, name in zip(bgms, names):
        if bgm in existing:
            song_ids.append(existing[bgm])
            continue
        label = f"sky_bgm_{bgm:04d}"
        if label not in extra:
            convert(rom, bgm, label, SONG_DIR / f"{label}.s", 105, {}, name)
            extra.append(label)
        song_ids.append(first + extra.index(label))
    JUKEBOX_INC.write_text("@ Sky Jukebox songs (tools/eos_music/convert_eos_bgm.py), song ids "
                           f"{first}..{first + len(extra) - 1}\n"
                           + "".join(f"song {l},  0,  0\n" for l in extra))
    lines = ["/* Generated by tools/eos_music/convert_eos_bgm.py from EoS — do not edit. */",
             f"#define SKY_JUKEBOX_FIRST_SONG {first}",
             f"#define SKY_JUKEBOX_SONG_COUNT {len(extra)}",
             f"#define SKY_JUKEBOX_TRACKS {JUKEBOX_TRACKS}",
             "", "#ifdef SKY_JUKEBOX_DATA",
             "static const struct SkyJukeboxTrack sSkyJukeboxTracks[SKY_JUKEBOX_TRACKS] = {"]
    for name, sid in zip(names, song_ids):
        lines.append(f'    {{ _("{name}"), {sid} }},')
    lines += ["};", "#endif", ""]
    JUKEBOX_C.write_text("\n".join(lines))
    print(f"jukebox: {JUKEBOX_TRACKS} tracks, {len(extra)} new songs at {first}..")


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    MIDI_DIR.mkdir(parents=True, exist_ok=True)
    if "--jukebox-only" not in sys.argv:
        convert_songs(rom)
    jukebox(rom)
    return 0


def convert_songs(rom) -> None:
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


if __name__ == "__main__":
    sys.exit(main())
