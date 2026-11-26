"""Sky Jukebox (top menu > Other > Sky Jukebox, src/sky_jukebox.c).

The driver (drivers.jukebox) opens it and plays every track for 50 frames;
run.data["jukebox"] holds (track, BGM song header, status, rms, peak).
"""

from game import jukebox_tracks
from harness import check, expect, fail

STOP_BGM = 999  # Red's STOP_BGM: StartNewBGM ignores it
DIALGA = 67     # track 68, "Dialga's Fight to the Finish!" (song 1000)
MIN_PEAK = 256  # 16-bit samples; silence is 0


@check("sky", "No Sky Jukebox track uses song id 999 (STOP_BGM)")
def jukebox_no_stop_bgm(t):
    tracks = jukebox_tracks()
    bad = [f"{i + 1}: {n}" for i, (n, s) in enumerate(tracks) if s == STOP_BGM]
    expect(len(tracks) == 141, f"{len(tracks)} tracks in src/data/sky_jukebox_data.h, expected 141")
    expect(not bad, "tracks on song 999: " + ", ".join(bad))
    return f"141 tracks, none on 999; track 68 '{tracks[DIALGA][0]}' is song {tracks[DIALGA][1]}"


@check("sky", "Every Sky Jukebox track starts its song on the BGM player and is audible (incl. track 68)")
def jukebox_tracks_play(t):
    f = yield from t.wait(lambda f: "jukebox_done" in t.events or "jukebox_missing" in t.events,
                          "the jukebox run")
    expect("jukebox_missing" not in t.events, "the jukebox did not open (menu navigation)")
    tracks = t.game.jukebox_tracks
    played = t.run.data["jukebox_done"]
    errs, quiet = [], []
    for idx, hdr, status, rms, peak in played:
        name, song = tracks[idx]
        if hdr != t.game.song_headers[song] or not status & 0xFFFF:
            errs.append(f"{idx + 1} '{name}': BGM plays {t.game.header_name(hdr)} "
                        f"(status {status:#x}), expected song {song}")
        elif peak < MIN_PEAK:
            quiet.append(f"{idx + 1} '{name}' (peak {peak})")
    seen = {p[0] for p in played}
    missing = [i + 1 for i in range(len(tracks)) if i not in seen]
    expect(not missing, f"tracks never reached: {missing[:10]}")
    expect(DIALGA in seen, "track 68 not played")
    expect(not errs, "; ".join(errs[:5]) + (f" (+{len(errs) - 5})" if len(errs) > 5 else ""))
    expect(not quiet, "silent: " + "; ".join(quiet[:8]))
    d = [p for p in played if p[0] == DIALGA][0]
    return (f"{len(played)} tracks play their song; track 68 '{tracks[DIALGA][0]}' "
            f"rms {d[3]:.0f} peak {d[4]}")


@check("sky", "Sky Jukebox list window: its top frame is on screen")
def jukebox_window_top(t):
    f = yield from t.wait_event("jukebox_open")
    col = [f.pixel(120, y) for y in range(0, 40)]
    white = [y for y, p in enumerate(col) if p == (247, 255, 247)]  # the frame's highlight rows
    if not white or white[0] < 3:
        t.snap(f, "jukebox")
        fail(f"frame highlight rows at x=120: {white[:4]} (top frame cut off?)")
    fill = [y for y, p in enumerate(col) if p == (33, 33, 33)]
    expect(fill and 0 < fill[0] - white[0] <= 6, f"no window fill right under the top frame (fill rows {fill[:3]})")
    return f"top frame highlight at y={white[0]}, fill from y={fill[0]}"
