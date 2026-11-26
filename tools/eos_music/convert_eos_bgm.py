#!/usr/bin/env python3
"""Convert Explorers of Sky BGM (SOUND/BGM/bgmNNNN.smd + its bgmNNNN.swd
instrument bank) into Rescue Team m4a songs that play on EoS's own
instruments.

    tools/eos_music/convert_eos_bgm.py EOS.nds [--jukebox-only | --me-only]

For each song: SMDL -> MIDI (sound/songs/midi/*.mid, MIDI program = EoS
program id) -> mid2agb -> sound/songs/<label>.s, with the song's own
voicegroup (sky_vg_bgmNNNN) generated from bgmNNNN.swd in front of it
(see sky_soundfont.py). The EoS samples every song uses become WaveData in
sound/songs/sky_samples.s (+ sound/direct_sound_samples/sky/*.bin).

  * SONGS (song ids 61..71) are the story songs, used by the sky scenes.
  * every Sky Jukebox track (EoS overlay 9's track -> bgm table, names from
    the "Music Tracks" strings) not in SONGS becomes sound/songs/sky_bgm_NNNN.s,
    appended to the song table after its last entry
    (sound/sky_jukebox_songs.inc, under SKY_STORY), and
    src/data/sky_jukebox_data.h lists all 141 tracks with their song ids.

Volumes: split / program / sample volume (and the gain that normalised each
sample to full 8-bit scale) scale note velocities; EoS volume x expression
becomes MIDI volume; each song's master volume is chosen with an offline m4a
mix model (m4a_render.py) so the 8-bit mixer keeps headroom.

Loops: one song-wide loop, except for ambient songs whose tracks loop on
their own with different lengths (per_track_loops): those are converted one
track at a time (midi/<name>_trackN.mid) so every track keeps its own loop.

`--jukebox-only` keeps seq_061..068 as they are (their voicegroups are still
built, so sky_samples.s keeps their samples).

Jingles: EoS's "ME" fanfares (SOUND/ME/me0001..me0013.smd, programs AND
samples in SOUND/ME/me.swd) always convert too, to sound/songs/sky_me_NNNN.s
(voicegroup sky_vg_meNNNN, samples sound/songs/sky_me_samples.s with labels
sky_me_wav_* and sound/direct_sound_samples/sky/me_*.bin). The song table
points Red's fanfare ids 200..219 at them under SKY_STORY (the mapping is
hand-picked: documentation/Features/SkyDemake.md). `--me-only` converts only
the jingles.
"""
from __future__ import annotations

import re
import struct
import subprocess
import sys
from pathlib import Path

import ndspy.rom

sys.path.insert(0, str(Path(__file__).resolve().parent))
import m4a_render  # noqa: E402
import smdl  # noqa: E402
import sky_soundfont  # noqa: E402

ROOT = Path(__file__).resolve().parents[2]
MID2AGB = ROOT / "tools" / "mid2agb" / "mid2agb"
SONG_DIR = ROOT / "sound" / "songs"
MIDI_DIR = SONG_DIR / "midi"

# (song slot / music id, EoS bgm id, name)
SONGS = [
    (61, 69, "sky_on_the_beach_at_dusk"),
    (62, 21, "sky_beach_cave"),
    (63, 15, "sky_boss_battle"),
    (64, 14, "sky_in_the_depths_of_the_pit"),
    (65, 130, "sky_title_theme"),
    (66, 2, "sky_top_menu_theme"),
    (67, 1, "sky_exploration_team_theme"),
    (68, 6, "sky_welcome_to_the_world_of_pokemon"),
    # EoS bgm0101 "Storm" (BGM_STORM, m01a0101/0102): the storm at sea.
    (69, 101, "sky_storm"),
    # EoS bgm0100 "Ocean1" (BGM_OCEAN1): the waves on the beach. EoS layers it
    # under the music on its second BGM player (bgm2_*); the demake plays it
    # on the ambience player (src/sky_ambience.c).
    (70, 100, "sky_ocean"),
    # EoS bgm0116 "Fire Crackling (louder)" (BGM_FIRE_CRACKLING_LOUDER): the
    # guild's torches at dusk (m01a0104).
    (71, 116, "sky_fire_crackling"),
]

RENDER_SECONDS = 90

# Level trims (dB) on top of the headroom model, which brings every song to
# about the same mix level. EoS's Ocean1 sits well under the scene sounds
# (DeSmuME, m01a0208: the waves ~6.5 dB under the text blips, ~15 dB under
# Zubat's tackle); at the model's level it was ~4.5 dB over that against the
# blips and ~7 dB over it against the SEs (mGBA), so it is trimmed by 6 dB.
LEVEL_DB = {"seq_070": -6.0}


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


def _at(changes: list[tuple[int, int]], tick: int, default: int) -> int:
    v = default
    for t, x in changes:
        if t > tick:
            break
        v = x
    return v


def tick_seconds(song: smdl.Song):
    tempos = sorted({(t, max(bpm, 1)) for tr in song.tracks for t, bpm in tr.tempos})
    if not tempos or tempos[0][0] != 0:
        tempos.insert(0, (0, 120))
    marks = []
    sec = 0.0
    for i, (t, bpm) in enumerate(tempos):
        marks.append((t, sec, bpm))
        if i + 1 < len(tempos):
            sec += (tempos[i + 1][0] - t) / song.tpqn * 60 / bpm

    def conv(tick: int) -> float:
        for t, s, bpm in reversed(marks):
            if tick >= t:
                return s + (tick - t) / song.tpqn * 60 / bpm
        return 0.0
    return conv


def song_programs(song: smdl.Song) -> set[int]:
    return {p for t in song.tracks if t.notes for _, p in t.programs}


def per_track_loops(song: smdl.Song) -> bool:
    """DSE loops every track on its own (0x99 loop point .. 0x98 end of
    track). In music the tracks loop together (equal loops, give or take a
    trailing rest), so the song gets one loop for all tracks, as mid2agb
    writes it. Ambient songs (bgm0100..0118, 0179..0193: storm, wind, waves)
    instead layer short loops of different lengths, e.g. bgm0101 "Storm":
    wind noise looping every 145 / 150 / 85 ticks over a 3420-tick rumble.
    One song-wide loop would play each short loop once and then leave it
    silent until the longest track loops, so these get a loop per track."""
    lens = [t.end_tick - t.loop_tick for t in song.tracks if t.notes and t.loop_tick is not None]
    return bool(lens) and min(lens) * 2 < max(lens)


def song_to_midi(song: smdl.Song, tones: dict, sf: sky_soundfont.SoundFont):
    """Returns (MIDI files, master volume, stats). One MIDI file for the
    song, or, with per-track loops (per_track_loops), one per track: mid2agb
    puts a MIDI file's loop markers in every track, so each track is
    converted on its own with its own loop."""
    loop = None
    end = 0
    for t in song.tracks:
        if t.loop_tick is not None:
            loop = t.loop_tick if loop is None else min(loop, t.loop_tick)
        end = max(end, t.end_tick)
    per_track = per_track_loops(song)

    # conductor: tempo + loop markers ("[" / "]" for mid2agb)
    tempo = []
    for t in song.tracks:
        for tick, bpm in t.tempos:
            us = int(60_000_000 / max(bpm, 1))
            tempo.append((tick, 0, b"\xFF\x51\x03" + us.to_bytes(3, "big")))
    if not tempo:
        tempo.append((0, 0, b"\xFF\x51\x03" + (500000).to_bytes(3, "big")))

    def loop_marks(lo, hi) -> list:
        if lo is None:
            return []
        return [(lo, 1, b"\xFF\x06\x01["), (hi, 9, b"\xFF\x06\x01]")]
    cond = tempo + loop_marks(loop, end)

    # pass 1: notes with their split's velocity factor
    tracks = []
    for t in song.tracks:
        if not t.notes:
            continue
        progs = sorted(t.programs)
        mix = sorted([(tk, "v", v) for tk, v in t.volumes] + [(tk, "e", e) for tk, e in t.expressions])
        notes = []
        for n in t.notes:
            prog = _at(progs, n.tick, 0)
            key = max(0, min(127, n.key))
            tone = tones.get((prog, key))
            if tone is None or tone.gain <= 0:
                continue
            notes.append((n, key, prog, tone, n.vel * tone.gain))
        if notes:
            tracks.append((t, progs, mix, notes))
        if len(tracks) >= 16:
            break
    peak = max((x[4] for tr in tracks for x in tr[3]), default=1.0)
    scale = 127 / peak if peak > 0 else 1.0

    def vel(raw: float) -> int:
        return max(1, min(127, round(raw * scale)))

    # pass 2: MIDI + notes for the mix model
    to_s = tick_seconds(song)
    out = [midi_track(cond)]
    render_notes = []
    for ch, (t, progs, mix, notes) in enumerate(tracks):
        c = ch & 0xF
        ev = []
        for tick, p in progs:
            ev.append((tick, 0, bytes([0xC0 | c, p & 0x7F])))
        vol_changes = []
        v, e = 127, 127
        for tick, kind, x in mix:
            if kind == "v":
                v = min(x, 127)
            else:
                e = min(x, 127)
            vol_changes.append((tick, round(v * e / 127)))
        if not vol_changes or vol_changes[0][0] > 0:
            vol_changes.insert(0, (0, 127))
        for tick, x in vol_changes:
            ev.append((tick, 1, bytes([0xB0 | c, 7, x])))
        for tick, pan in t.pans:
            ev.append((tick, 1, bytes([0xB0 | c, 10, min(pan, 127)])))
        for tick, b in t.bends:
            m = max(0, min(16383, b + 8192))
            ev.append((tick, 1, bytes([0xE0 | c, m & 0x7F, m >> 7])))
        for n, key, prog, tone, raw in notes:
            dur = max(1, n.dur)
            vv = vel(raw)
            ev.append((n.tick, 3, bytes([0x90 | c, key, vv])))
            ev.append((n.tick + dur, 2, bytes([0x80 | c, key, 0])))
            # the mix model hears a per-track loop repeat (a song-wide loop
            # only plays once, as before)
            period = t.end_tick - t.loop_tick if per_track and t.loop_tick is not None else 0
            tick = n.tick
            while True:
                start = to_s(tick)
                if start >= RENDER_SECONDS:
                    break
                drum = tone.pan != 0
                render_notes.append((start, to_s(tick + dur) - start, key, vv,
                                     _at(vol_changes, n.tick, 127),
                                     _at(t.pans, n.tick, 64) - 64,
                                     tone.pan if drum else 0, tone.adsr, tone.wave_label, key))
                if period <= 0 or n.tick < t.loop_tick:
                    break
                tick += period
        out.append(midi_track(ev))

    def midi(chunks: list) -> bytes:
        return b"MThd" + struct.pack(">IHHH", 6, 1, len(chunks), song.tpqn) + b"".join(chunks)
    if per_track:
        # tempo in the first track only: m4a's tempo is the player's
        mids = [midi([midi_track((tempo if i == 0 else []) + loop_marks(t.loop_tick, t.end_tick)), chunk])
                for i, ((t, *_), chunk) in enumerate(zip(tracks, out[1:]))]
        end = max(t.end_tick for t, *_ in tracks)
    else:
        mids = [midi(out)]
    seconds = min(RENDER_SECONDS, to_s(end) + 2)
    mvl, level = m4a_render.headroom_mvl(render_notes, sf.render_waves(), seconds)
    return mids, mvl, level


TRACK_RULE = "@******************************************************@"


def splice_tracks(texts: list[str], label: str) -> str:
    """One song from mid2agb outputs of one track each (per-track loops):
    track 1 of output i becomes track i + 1."""
    head = texts[0].split("@**************** Track 1 ")[0]
    foot = texts[0].split(TRACK_RULE)[1]
    body = []
    for i, text in enumerate(texts):
        trk = "@**************** Track 1 " + text.split("@**************** Track 1 ")[1].split(TRACK_RULE)[0]
        trk = trk.replace("Track 1 ", f"Track {i + 1} ", 1)
        body.append(re.sub(rf"\b{label}_1(?=\b|_)", f"{label}_{i + 1}", trk))
    foot = re.sub(r"\.byte\t1\t@ NumTrks", f".byte\t{len(texts)}\t@ NumTrks", foot)
    foot = foot.replace(f"\t.word\t{label}_1\n",
                        "".join(f"\t.word\t{label}_{i + 1}\n" for i in range(len(texts))))
    return head + "".join(body) + TRACK_RULE + foot


def convert_smd(rom, sf, smd: str, bank: str, vg_label: str, label: str, out: Path,
                midi_name: str, desc: str) -> None:
    """smd (EoS sequence) on bank's programs -> m4a song `label` in `out`."""
    song = smdl.parse(rom.getFileByName(smd))
    vg, vg_asm, tones = sf.voicegroup_from(bank, vg_label, song_programs(song))
    mids, mvl, level = song_to_midi(song, tones, sf)
    if label in LEVEL_DB:
        mvl = max(1, round(mvl * 10 ** (LEVEL_DB[label] / 20)))

    def mid2agb(data: bytes, name: str) -> str:
        mid = MIDI_DIR / f"{name}.mid"
        mid.write_bytes(data)
        subprocess.run([str(MID2AGB), str(mid), str(out), f"-L{label}", f"-V{mvl:03d}",
                        "-G000", "-P050", "-E"], check=True)
        return out.read_text()
    if len(mids) == 1:
        text = mid2agb(mids[0], midi_name)
    else:
        (MIDI_DIR / f"{midi_name}.mid").unlink(missing_ok=True)
        text = splice_tracks([mid2agb(m, f"{midi_name}_track{i + 1}") for i, m in enumerate(mids)],
                             label)
    text = text.replace("voicegroup000", vg)
    out.write_text(f"@ Explorers of Sky demake: EoS {desc} on EoS's own instruments\n"
                   f"@ ({bank.rsplit('/', 1)[-1]}), generated by tools/eos_music/convert_eos_bgm.py\n"
                   f"#ifdef SKY_STORY\n" + vg_asm + text + "#endif\n")
    print(f"{label}: EoS {desc}: mvl {mvl} (mix level {level:.0f} at 127)")


def convert(rom, sf, bgm: int, label: str, out: Path, midi_name: str, name: str) -> None:
    convert_smd(rom, sf, f"SOUND/BGM/bgm{bgm:04d}.smd", f"SOUND/BGM/bgm{bgm:04d}.swd",
                f"sky_vg_bgm{bgm:04d}", label, out, midi_name, f"bgm{bgm:04d} ({name})")


# SOUND/ME/me0001.smd .. me0013.smd. me0000 is skipped: it is note-for-note
# me0006 (only its header differs) and EoS plays it only from a debug ME test.
ME_IDS = range(1, 14)


def convert_me(rom) -> None:
    """EoS jingles -> sound/songs/sky_me_NNNN.s + sky_me_samples.s."""
    sf = sky_soundfont.SoundFont(rom, ROOT, sample_bank="SOUND/ME/me.swd", prefix="sky_me",
                                 bin_prefix="me", out_name="sky_me_samples.s")
    for i in ME_IDS:
        label = f"sky_me_{i:04d}"
        convert_smd(rom, sf, f"SOUND/ME/me{i:04d}.smd", "SOUND/ME/me.swd", f"sky_vg_me{i:04d}",
                    label, SONG_DIR / f"{label}.s", label, f"me{i:04d}")
    count, size = sf.write()
    print(f"jingles: {len(sf.used_samples())} EoS ME samples, {count} WaveData, {size} bytes")


# EoS US overlay 9 (Sky Jukebox): u16 bgm id per jukebox track.
JUKEBOX_TABLE_OFFSET = 0x2BE4
JUKEBOX_TRACKS = 141
STOP_BGM = 999  # include/constants/bg_music.h
SONG_TABLE = ROOT / "sound" / "song_table.inc"
JUKEBOX_INC = ROOT / "sound" / "sky_jukebox_songs.inc"
JUKEBOX_C = ROOT / "src" / "data" / "sky_jukebox_data.h"


def sky_song_count(path: Path) -> int:
    """Number of `song` entries in the song table as the sky build sees it
    (SKY_STORY defined: `#else` branches skipped), before the jukebox include."""
    stack = []          # True while the current #if branch is live
    count = 0
    for line in path.read_text().splitlines():
        s = line.strip()
        if s.startswith("#ifdef") or s.startswith("#ifndef"):
            live = (s.split()[1] == "SKY_STORY") == s.startswith("#ifdef")
            stack.append(live)
        elif s.startswith("#else"):
            stack[-1] = not stack[-1]
        elif s.startswith("#endif"):
            stack.pop()
        elif all(stack):
            if "sky_jukebox_songs.inc" in s:
                break
            if s.startswith("#include"):   # sky_red_bgm_table.inc (ids 0..128), sky_red_se_table.inc (300..938)
                inc = path.parent / s.split('"')[1].split("/")[-1]
                count += sum(1 for l in inc.read_text().splitlines() if l.startswith("song "))
                continue
            if s.startswith("song "):
                count += 1
    return count


def jukebox(rom, sf) -> None:
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
    first = sky_song_count(SONG_TABLE)
    existing = {bgm: slot for slot, bgm, _ in SONGS}
    extra = []      # song table entries from `first` on (labels)
    song_ids = []
    for bgm, name in zip(bgms, names):
        if bgm in existing:
            song_ids.append(existing[bgm])
            continue
        label = f"sky_bgm_{bgm:04d}"
        if label not in extra:
            convert(rom, sf, bgm, label, SONG_DIR / f"{label}.s", label, name)
            if first + len(extra) == STOP_BGM:
                # Red's StartNewBGM ignores song 999 (STOP_BGM): keep that
                # slot as a never-played placeholder.
                extra.append(None)
            extra.append(label)
        song_ids.append(first + extra.index(label))
    JUKEBOX_INC.write_text("@ Sky Jukebox songs (tools/eos_music/convert_eos_bgm.py), song ids "
                           f"{first}..{first + len(extra) - 1}\n"
                           + "".join(f"song {l},  0,  0\n" if l else
                                     f"song {extra[i + 1]},  0,  0  @ {STOP_BGM} = STOP_BGM: never played\n"
                                     for i, l in enumerate(extra)))
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


def convert_songs(rom, sf) -> None:
    for slot, bgm, name in SONGS:
        label = f"seq_{slot:03d}"
        convert(rom, sf, bgm, label, SONG_DIR / f"{label}.s", name, name)


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    MIDI_DIR.mkdir(parents=True, exist_ok=True)
    convert_me(rom)
    if "--me-only" in sys.argv:
        return 0
    sf = sky_soundfont.SoundFont(rom, ROOT)
    if "--jukebox-only" not in sys.argv:
        convert_songs(rom, sf)
    else:
        for _, bgm, _ in SONGS:
            song = smdl.parse(rom.getFileByName(f"SOUND/BGM/bgm{bgm:04d}.smd"))
            sf.voicegroup(bgm, song_programs(song))
    jukebox(rom, sf)
    count, size = sf.write()
    print(f"samples: {len(sf.used_samples())} EoS samples, {count} WaveData, {size} bytes")
    return 0


if __name__ == "__main__":
    sys.exit(main())
