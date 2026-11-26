#!/usr/bin/env python3
"""Explorers of Sky demake: play EoS tracks in place of Red's music.

    tools/eos_music/sky_red_bgm_map.py

Red's background songs (song ids 0..128) play on Red's instruments
(voicegroups bank_000 / bank_014). In the sky build each id points at an EoS
track instead (the story songs 61..71 and the Sky Jukebox songs, already
converted by convert_eos_bgm.py onto EoS's own instruments), so Red's music
sequences, both music voicegroups and their samples are left out of the ROM.

EoS has no versions of Red's songs, so the mapping is by name where EoS has
the same piece (Rising Fear, Kecleon's Shop, Monster House!, Heartwarming,
In the Depths of the Pit, Welcome to the World of Pokémon!, Boss Battle!)
and otherwise by place and mood (town -> Treasure Town, dojo -> Marowak Dojo,
volcano -> Steam Cave, ...).

Writes sound/sky_red_bgm_table.inc (song ids 0..128 for the sky build).
"""
from __future__ import annotations

import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
JUKEBOX_C = ROOT / "src" / "data" / "sky_jukebox_data.h"
JUKEBOX_INC = ROOT / "sound" / "sky_jukebox_songs.inc"
OUT = ROOT / "sound" / "sky_red_bgm_table.inc"

# Red song id: (Red name, EoS Sky Jukebox track name)
MAP = {
    0: ("(unused 0)", None),
    1: ("Rescue Team Base", "Wigglytuff's Guild"),
    2: ("Friend Area: Swamp", "Murky Forest"),
    3: ("Friend Area: Caves", "Cave and Side Path"),
    4: ("Dream", "Beyond the Dream"),
    5: ("Benevolent Spirit", "A Wish for Peace"),
    6: ("Legend of Ninetales", "I Saw Something Again..."),
    7: ("Pokémon Square", "Treasure Town"),
    8: ("File Select", "Top Menu Theme"),
    9: ("Rising Fear", "Rising Fear"),
    10: ("There's Trouble!", "Oh No!"),
    11: ("Boss Battle", "Boss Battle!"),
    12: ("Welcome to the World of Pokémon", "Welcome to the World of Pokémon!"),
    13: ("A New Adventure", "Random Dungeon Theme 1"),
    14: ("Thunderwave Cave", "Drenched Bluff"),
    15: ("Sinister Woods", "Dusk Forest"),
    16: ("Friend Area: Pond", "Spring Cave"),
    17: ("Kecleon Shop", "Kecleon's Shop"),
    18: ("Stop, Thief!", "Outlaw!"),
    19: ("World Calamity", "Planet's Paralysis"),
    20: ("Great Canyon", "Northern Desert"),
    21: ("Stormy Sea", "Surrounded Sea"),
    22: ("Sky Tower", "Temporal Tower"),
    23: ("Sky Tower Summit", "Temporal Spire"),
    24: ("The Escape", "Growing Anxiety"),
    25: ("Mt. Blaze", "Mt. Horn"),
    26: ("Rayquaza's Domain", "Temporal Pinnacle"),
    27: ("Friend Area: Stratos Lookout", "Sky Peak Final Pass"),
    28: ("Friend Area: Rainbow Peak", "Sky Peak Prairie"),
    29: ("Dream Eater", "In the Nightmare"),
    30: ("Friend Area: Deepsea Current", "Miracle Sea"),
    31: ("Friend Area: Seafloor Cave", "Brine Cave"),
    32: ("Battle with Rayquaza", "Dialga's Fight to the Finish!"),
    33: ("Mt. Blaze Peak", "Mt. Travail"),
    34: ("Friend Area: Volcanic Pit", "Dark Crater"),
    35: ("Friend Area: Cryptic Cave", "Crystal Cave"),
    36: ("Escape Through the Snow", "Have to Get Home"),
    37: ("The Other Side", "Air of Unease"),
    38: ("The Mountain of Fire", "Deep Dark Crater"),
    39: ("Frosty Grotto", "Dark Ice Mountain"),
    40: ("Intro", "Title Theme"),
    41: ("Aftermath", "Time Restored"),
    42: ("Farewell", "Don't Ever Forget..."),
    43: ("Title Screen", "Title Theme"),
    44: ("Credits", "Ending Theme"),
    45: ("Time of Reunion", "Memories Returned"),
    46: ("Opening Title", "Pokémon Exploration Team Theme"),
    50: ("(blank)", None),
    51: ("Dungeon Fail", "Sympathy"),
    52: ("Dungeon Complete", "Job Clear!"),
    100: ("Friend Area (unused 1)", "Random Dungeon Theme 2"),
    101: ("Heartwarming", "Heartwarming"),
    102: ("Lapis Cave", "Crystal Crossing"),
    103: ("A Successful Rescue", "Proud Accomplishment"),
    104: ("Frosty Forest", "Icicle Forest"),
    105: ("Friend Area: Steppe", "Foggy Forest"),
    106: ("Friend Area: Oceanic", "Craggy Coast"),
    107: ("Friend Area: Field", "Fortune Ravine"),
    108: ("Magma Cavern", "Steam Cave"),
    109: ("Friend Area (unused 2)", "Random Dungeon Theme 3"),
    110: ("Makuhita Dojo", "Marowak Dojo"),
    111: ("Mt. Thunder", "Amp Plains"),
    112: ("Friend Area: Lab", "Star Cave"),
    113: ("Silent Chasm", "Chasm Cave"),
    114: ("In the Depths of the Pit", "In the Depths of the Pit"),
    115: ("Mt. Freeze", "Vast Ice Mountain"),
    116: ("Friend Area: Wilds", "Barren Valley"),
    117: ("Friend Area: Legendary Island", "Hidden Highland"),
    118: ("Friend Area: Southern Island", "Southern Jungle"),
    119: ("Friend Area: Enclosed Island", "Aegis Cave"),
    120: ("Mt. Steel", "Mt. Bristle"),
    121: ("Friend Area: Forest", "Treeshroud Forest"),
    122: ("Friend Area: Final Island", "Hidden Land"),
    123: ("Mt. Freeze Peak", "Vast Ice Mountain Peak"),
    124: ("Magma Cavern Pit", "Upper Steam Cave"),
    125: ("Tiny Woods", "Apple Woods"),
    126: ("Mt. Thunder Peak", "Far Amp Plains"),
    127: ("Friend Area: Healing Forest", "Mystifying Forest"),
    128: ("Monster House", "Monster House!"),
}
SKY_STORY_IDS = range(61, 72)   # the converted EoS story songs keep their ids


def main() -> None:
    first = int(re.search(r"SKY_JUKEBOX_FIRST_SONG (\d+)", JUKEBOX_C.read_text()).group(1))
    juke_labels = [l.split()[1].rstrip(",") for l in JUKEBOX_INC.read_text().splitlines()
                   if l.startswith("song ")]
    label_of_song = {first + i: l for i, l in enumerate(juke_labels)}
    label_of_song.update({sid: f"seq_{sid:03d}" for sid in SKY_STORY_IDS})
    by_name = {}
    for name, sid in re.findall(r'\{ _\("(.*?)"\), (\d+) \}', JUKEBOX_C.read_text()):
        by_name.setdefault(name, int(sid))
    lines = ["@ Explorers of Sky demake: song ids 0..128 in the sky build",
             "@ (generated by tools/eos_music/sky_red_bgm_map.py — do not edit)"]
    for sid in range(129):
        if sid in SKY_STORY_IDS:
            lines.append(f"song seq_{sid:03d},  0,  0")
            continue
        red, eos = MAP.get(sid, (None, None))
        if eos is None:
            lines.append("song empty_song,  0,  0" + (f"  @ {red}" if red else ""))
            continue
        label = label_of_song[by_name[eos]]
        lines.append(f"song {label},  0,  0  @ {sid}: {red} -> {eos}")
    OUT.write_text("\n".join(lines) + "\n")
    print(f"wrote {OUT.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
