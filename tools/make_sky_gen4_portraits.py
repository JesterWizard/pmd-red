#!/usr/bin/env python3
"""Export Explorers of Sky portraits (FONT/kaomado.kao) for the Gen 4 species.

    tools/make_sky_gen4_portraits.py EOS.nds

Writes graphics/portraits/<species>/<Emotion>.png for every Gen 4 species in
include/constants/sky_gen4.h, for each of Red's 13 portrait emotions EoS has.
convert_custom_portraits.py (run by make) turns them into the ckaoNNN files of
the custom portrait archive; the sky build includes them (SKY_STORY).

EoS keeps each emotion at slot 2*e (2*e+1 is a pre-mirrored copy) and uses
Red's emotion order (Normal, Happy, Pain, Angry, Worried, Sad, Crying,
Shouting, Teary-Eyed, Determined, Joyous, Inspired, Surprised), then 13 Dizzy,
14-15 special, 16 Sigh, 17 Stunned, 18-19 special. The sky build also takes the
EoS emotions past Red's 13 that the story scripts use (EXTRA_EMOTIONS: Dizzy,
Sigh); convert_custom_portraits.py keeps them at their EoS numbers.
"""
from __future__ import annotations

import re
import sys
from pathlib import Path

import ndspy.rom
from PIL import Image
from skytemple_files.common.types.file_types import FileType

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
import make_sky_cutaways  # noqa: E402,F401  (PIL putpalette patch)

OUT = ROOT / "graphics" / "portraits"
# Red species whose faces the sky build takes from EoS as well (they replace
# Red's / SpriteCollab's in the sky build only, see convert_custom_portraits.py):
# every hero / partner choice and chapter 1's Zubat and Koffing.
SKY_RED_OUT = ROOT / "graphics" / "portraits_sky"
SKY_RED_SPECIES = {  # folder: national dex
    "bulbasaur": 1, "charmander": 4, "squirtle": 7, "pikachu": 25, "meowth": 52,
    "psyduck": 54, "machop": 66, "cubone": 104, "eevee": 133, "chikorita": 152,
    "cyndaquil": 155, "totodile": 158, "phanpy": 231, "treecko": 252, "torchic": 255,
    "mudkip": 258, "skitty": 300, "vulpix": 37, "zubat": 41, "koffing": 109,
    # chapter 2's guild crew and Treasure Town folk (documentation/Features/SkyChapter2.md)
    "wigglytuff": 40, "diglett": 50, "dugtrio": 51, "pidgey": 16, "ledyba": 165,
    "sunflora": 192, "wurmple": 265, "swellow": 277, "seedot": 273, "loudred": 294,
    "spoink": 325, "corphish": 341, "chimecho": 358,
    # Munchlax keeps Red's id 420 (a partner choice): EoS's faces, not SpriteCollab's Normal
    "munchlax": 446,
    # chapter 3's actors and free-roam folk (documentation/Features/SkyChapter3.md)
    "marill": 183, "azurill": 298, "drowzee": 96, "kecleon": 352, "magnemite": 81,
    "grovyle": 253, "duskull": 355, "kangaskhan": 115, "marowak": 105, "ursaring": 217,
    "teddiursa": 216, "vigoroth": 288, "shuppet": 353, "murkrow": 198, "togepi": 175,
    "politoed": 186, "poochyena": 261, "spinda": 327,
}
GEN4_H = ROOT / "include" / "constants" / "sky_gen4.h"
EMOTIONS = ["Normal", "Happy", "Pained", "Angry", "Worried", "Sad", "Crying",
            "Shouting", "TearyEye", "Determined", "Joyous", "Inspired", "Surprised"]
# EoS emotion number -> file name (EMOTION_DIZZY / EMOTION_SIGH in emotions.h)
EXTRA_EMOTIONS = {13: "Dizzy", 16: "Sigh", 17: "Stunned"}  # Stunned: chapter 3 (Chatot)
ALL_EMOTIONS = list(enumerate(EMOTIONS)) + sorted(EXTRA_EMOTIONS.items())


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    md = FileType.MD.deserialize(rom.getFileByName("BALANCE/monster.md"))
    kao = FileType.KAO.deserialize(rom.getFileByName("FONT/kaomado.kao"))
    by_dex = {}
    for i, e in enumerate(md.entries[:600]):
        if e.national_pokedex_number and e.national_pokedex_number not in by_dex:
            by_dex[e.national_pokedex_number] = i
    first = int(re.search(r"#define SKY_FIRST_GEN4_MONSTER (\d+)", GEN4_H.read_text()).group(1))
    species = [(n, int(v)) for n, v in re.findall(r"#define MONSTER_(\w+) (\d+)", GEN4_H.read_text())]
    dexes = [d for d in range(387, 494) if d in by_dex and d != 446]  # Munchlax: Red id
    assert len(dexes) == len(species), (len(dexes), len(species))
    total = 0
    for (name, sid), dex in zip(species, dexes):
        assert sid == first + dexes.index(dex)
        folder = OUT / name.lower()
        folder.mkdir(parents=True, exist_ok=True)
        n = 0
        for e, emo in ALL_EMOTIONS:
            img = kao.get(by_dex[dex] - 1, 2 * e)
            if img is None:
                continue
            img.get().convert("RGBA").save(folder / f"{emo}.png")
            n += 1
        (folder / "credits.txt").write_text("Explorers of Sky portraits (Chunsoft / The Pokémon Company), "
                                            "exported by tools/make_sky_gen4_portraits.py\n")
        total += n
    for name, dex in sorted(SKY_RED_SPECIES.items()):
        folder = SKY_RED_OUT / name
        folder.mkdir(parents=True, exist_ok=True)
        for e, emo in ALL_EMOTIONS:
            img = kao.get(by_dex[dex] - 1, 2 * e)
            if img is not None:
                img.get().convert("RGBA").save(folder / f"{emo}.png")
                total += 1
        (folder / "credits.txt").write_text("Explorers of Sky portraits (Chunsoft / The Pokémon Company), "
                                            "exported by tools/make_sky_gen4_portraits.py\n")
    print(f"{len(species)} + {len(SKY_RED_SPECIES)} species, {total} portraits")
    return 0


if __name__ == "__main__":
    sys.exit(main())
