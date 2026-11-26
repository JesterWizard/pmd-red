#!/usr/bin/env python3
"""Export Explorers of Sky portraits (FONT/kaomado.kao) for the Gen 4 species.

    tools/make_sky_gen4_portraits.py EOS.nds

Writes graphics/portraits/<species>/<Emotion>.png for every Gen 4 species in
include/constants/sky_gen4.h, for each of Red's 13 portrait emotions EoS has.
convert_custom_portraits.py (run by make) turns them into the ckaoNNN files of
the custom portrait archive; the sky build includes them (SKY_STORY).

EoS keeps each emotion at slot 2*e (2*e+1 is a pre-mirrored copy) and uses
Red's emotion order (Normal, Happy, Pain, Angry, Worried, Sad, Crying,
Shouting, Teary-Eyed, Determined, Joyous, Inspired, Surprised).
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
GEN4_H = ROOT / "include" / "constants" / "sky_gen4.h"
EMOTIONS = ["Normal", "Happy", "Pained", "Angry", "Worried", "Sad", "Crying",
            "Shouting", "TearyEye", "Determined", "Joyous", "Inspired", "Surprised"]


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
        for e, emo in enumerate(EMOTIONS):
            img = kao.get(by_dex[dex] - 1, 2 * e)
            if img is None:
                continue
            img.get().convert("RGBA").save(folder / f"{emo}.png")
            n += 1
        (folder / "credits.txt").write_text("Explorers of Sky portraits (Chunsoft / The Pokémon Company), "
                                            "exported by tools/make_sky_gen4_portraits.py\n")
        total += n
    print(f"{len(species)} species, {total} portraits")
    return 0


if __name__ == "__main__":
    sys.exit(main())
