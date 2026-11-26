#!/usr/bin/env python3
"""Explorers of Sky demake: EoS's dungeon talk lines for the sky build.

    tools/make_sky_dungeon_talk.py EOS.nds [--report]

Writes src/data/sky_dungeon_talk.h for src/sky_dungeon_talk.c. Red keeps a
partner's dungeon lines in per-species files (talkNN / talkpNN in the dungeon
archive); EoS picks them like this (NA arm9 / overlay 29):

  * MESSAGE/tbl_talk.tlk has personality groups. Each group lists, per talk
    type (0 healthy, 1 half HP, 2 pinch, 3 level up, 4 wait, 5 ground wait),
    offsets added to TBL_TALK_GROUP_STRING_ID_START[type] (arm9 0x20AFCF8) to
    give a text_e.str id (GetTalkLine, arm9 0x202598C). After the groups comes
    a personality byte per monster id and 36 "special" personalities.
  * GetPersonalityIndex (ov29 0x234CFEC): the partner (joined_at 0xD7) uses
    special 0/1/2 by the PARTNER_TALK_KIND script variable (1/2/3); EoS sets
    it from PARTNER_TALK_KIND_TABLE (arm9 0x209CCE4) when the partner is
    chosen (kind 2 for partners not in the table). Other team members use
    their species' personality.
  * Talking to an ally (ov29 0x22F5A40): healthy at HP >= 80% of max, pinch
    when HasLowHealth (HP below 25%), half HP otherwise. A full-floor fixed
    room (Beach Cave Pit) always gives the group's third line; a future
    dungeon or secret floor one of the first two; elsewhere a random line.
    A line with [move:...] is retried (up to 20 times) when the speaker knows
    no move. [player] is the hero, [kind:0] a random species of the floor's
    spawn list (not Kecleon), [kind:1] the speaker's species, [move:1] one of
    its moves, [item:0] a random item of the floor's item list. Level-up
    lines (type 3) are spoken by team members other than the leader.

Each group's last line in tbl_talk.tlk is a "[M:D1]TALK_MESSAGE_..."
placeholder; those are left out. Species without a personality (EoS 255)
use group 0.
"""
from __future__ import annotations

import json
import re
import struct
import sys
from pathlib import Path

import ndspy.rom
import ndspy.code
from skytemple_files.common.types.file_types import FileType
from skytemple_files.data.tbl_talk.model import TblTalk

ROOT = Path(__file__).resolve().parents[1]
OUT_H = ROOT / "src" / "data" / "sky_dungeon_talk.h"

# NA (C2SE) addresses, pmdsky-debug.
ARM9 = 0x02000000
TBL_TALK_GROUP_STRING_ID_START = 0x020AFCF8
PARTNER_TALK_KIND_TABLE = 0x0209CCE4
PARTNER_TALK_KIND_ENTRIES = 11
TALK_TYPES = 4  # healthy, half HP, pinch, level up (wait / ground wait unused)

RED_MONSTER_COUNT = 424   # include/constants/sky_gen4.h SKY_FIRST_GEN4_MONSTER
MUNCHLAX_DEX, RED_MUNCHLAX = 446, 420


def convert(line: str) -> tuple[str, int]:
    """EoS text tags -> Red placeholders; returns (text, flags)."""
    flags = 0
    if "[move:" in line:
        flags |= 1
    if "[kind:0]" in line:
        flags |= 2
    if "[item:" in line:
        flags |= 4
    if "[player]" in line:
        flags |= 8
    if "[kind:1]" in line:
        flags |= 16
    s = line
    s = s.replace("[player]", "{POKEMON_1}")
    s = s.replace("[kind:0]", "{POKEMON_2}").replace("[kind:1]", "{POKEMON_3}")
    s = s.replace("[move:1]", "{MOVE_ITEM_0}")
    s = re.sub(r"\[item:0?\]", "{MOVE_ITEM_1}", s)
    s = re.sub(r"\[CS:\w\](.*?)\[CR\]", r"\1", s)
    s = s.replace("[K]", "")
    if "[" in s:
        raise SystemExit(f"make_sky_dungeon_talk: unhandled tag in {line!r}")
    return s, flags


def cstr(s: str) -> str:
    return s.replace("\\", "\\\\").replace('"', '\\"').replace("\n", "\\n")


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    if rom.idCode != b"C2SE":
        raise SystemExit("make_sky_dungeon_talk: needs the North American EoS ROM (C2SE)")
    report = "--report" in sys.argv
    arm9 = ndspy.code.MainCodeFile(rom.arm9, ARM9, rom.arm9PostData).sections[0].data
    strings = FileType.STR.deserialize(rom.getFileByName("MESSAGE/text_e.str")).strings
    talk = TblTalk(rom.getFileByName("MESSAGE/tbl_talk.tlk"))
    md = FileType.MD.deserialize(rom.getFileByName("BALANCE/monster.md"))
    starts = struct.unpack_from("<6h", arm9, TBL_TALK_GROUP_STRING_ID_START - ARM9)

    # EoS monster id (first form of each dex number) per sky species, as
    # tools/make_sky_gen4_data.py numbers them.
    by_dex: dict[int, int] = {}
    for i, e in enumerate(md.entries[:600]):
        if e.national_pokedex_number and e.national_pokedex_number not in by_dex:
            by_dex[e.national_pokedex_number] = i
    red_mons = json.loads((ROOT / "data/monster/monster_data.json").read_text())
    sky_to_eos: dict[int, int] = {}
    for sid, e in enumerate(red_mons[:RED_MONSTER_COUNT]):
        dex = e["dexInternal"][0]
        if 0 < dex < 387 and dex in by_dex:
            sky_to_eos[sid] = by_dex[dex]
    sky_to_eos[RED_MUNCHLAX] = by_dex[MUNCHLAX_DEX]
    gen4 = [by_dex[d] for d in range(387, 494) if d in by_dex and d != MUNCHLAX_DEX]
    for n, mdi in enumerate(gen4):
        sky_to_eos[RED_MONSTER_COUNT + n] = mdi
    monster_max = RED_MONSTER_COUNT + len(gen4)
    eos_to_sky = {}
    for sid, mdi in sorted(sky_to_eos.items()):
        eos_to_sky.setdefault(mdi, sid)

    # Partner talk kinds -> personality groups (specials 0, 1, 2).
    kind_group = {k: talk.special_personalities[k - 1] for k in (1, 2, 3)}
    partner_kinds = []
    default_kind = 2
    for i in range(PARTNER_TALK_KIND_ENTRIES):
        kind, mid = struct.unpack_from("<iI", arm9, PARTNER_TALK_KIND_TABLE - ARM9 + i * 8)
        if mid == 0:
            default_kind = kind
            continue
        base = mid % 600
        sid = eos_to_sky.get(base)
        if sid is None:
            raise SystemExit(f"make_sky_dungeon_talk: partner {mid} has no sky species")
        partner_kinds.append((sid, kind))

    used = sorted({talk.get_monster_personality(mdi) for mdi in sky_to_eos.values()} - {255}
                  | set(kind_group.values()) | {0})
    group_index = {g: n for n, g in enumerate(used)}

    lines: list[tuple[str, int]] = []
    line_index: dict[str, int] = {}
    groups = []
    for g in used:
        firsts, counts = [], []
        for ty in range(TALK_TYPES):
            ids = [starts[ty] + v for v in talk.groups[g][ty]]
            texts = [strings[i] for i in ids if not strings[i].startswith("[M:D1]")]
            first = len(lines)
            for t in texts:
                lines.append(convert(t))
            firsts.append(first)
            counts.append(len(texts))
        groups.append((g, firsts, counts))

    personality = []
    for sid in range(monster_max):
        mdi = sky_to_eos.get(sid)
        p = talk.get_monster_personality(mdi) if mdi is not None else 255
        personality.append(group_index[p] if p != 255 else group_index[0])

    out = [
        "/* Generated by tools/make_sky_dungeon_talk.py from an Explorers of Sky ROM",
        " * (MESSAGE/tbl_talk.tlk, MESSAGE/text_e.str, PARTNER_TALK_KIND_TABLE).",
        " * Do not edit. */",
        "",
        f"#define SKY_TALK_GROUP_COUNT {len(groups)}",
        f"#define SKY_TALK_DEFAULT_PARTNER_GROUP {group_index[kind_group[default_kind]]}",
        "",
        f"static const u8 *const sSkyTalkLines[{len(lines)}] = {{",
    ]
    for text, _ in lines:
        out.append(f'    _("{{POKEMON_0}}: {cstr(text)}"),')
    out.append("};")
    out.append("")
    out.append("/* SKY_TALK_USES_MOVE / _KIND / _ITEM / _PLAYER / _SELF */")
    out.append(f"static const u8 sSkyTalkLineFlags[{len(lines)}] = {{")
    for i in range(0, len(lines), 16):
        out.append("    " + ", ".join(str(f) for _, f in lines[i:i + 16]) + ",")
    out.append("};")
    out.append("")
    out.append("static const struct SkyTalkGroup sSkyTalkGroups[SKY_TALK_GROUP_COUNT] = {")
    for g, firsts, counts in groups:
        out.append(f"    {{ {{ {', '.join(map(str, firsts))} }}, {{ {', '.join(map(str, counts))} }} }}, /* EoS personality {g} */")
    out.append("};")
    out.append("")
    out.append("/* Personality group (index into sSkyTalkGroups) per species. */")
    out.append("static const u8 sSkyTalkPersonality[MONSTER_MAX] = {")
    for i in range(0, monster_max, 16):
        out.append("    " + ", ".join(str(p) for p in personality[i:i + 16]) + ",")
    out.append("};")
    out.append("")
    out.append("/* EoS PARTNER_TALK_KIND_TABLE: partner species -> group; other partners")
    out.append(" * use SKY_TALK_DEFAULT_PARTNER_GROUP. */")
    out.append(f"static const struct SkyPartnerTalkKind sSkyPartnerTalkKinds[{len(partner_kinds)}] = {{")
    const_names: dict[int, str] = {}
    for h in ("include/constants/monster.h", "include/constants/sky_gen4.h"):
        for m in re.finditer(r"#define (MONSTER_\w+)\s+(\d+)\b", (ROOT / h).read_text()):
            const_names.setdefault(int(m.group(2)), m.group(1))
    for sid, kind in partner_kinds:
        out.append(f"    {{ {const_names.get(sid, sid)}, {group_index[kind_group[kind]]} }}, /* talk kind {kind} */")
    out.append("};")
    gen4_h = (ROOT / "include/constants/sky_gen4.h").read_text()
    expected = RED_MONSTER_COUNT + int(re.search(r"#define SKY_GEN4_MONSTER_COUNT (\d+)", gen4_h).group(1))
    if monster_max != expected:
        raise SystemExit(f"make_sky_dungeon_talk: {monster_max} species, MONSTER_MAX is {expected}")
    OUT_H.write_text("\n".join(out) + "\n")
    if report:
        print(f"{len(groups)} groups, {len(lines)} lines, {sum(len(t) for t, _ in lines)} chars; "
              f"partner kinds {partner_kinds}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
