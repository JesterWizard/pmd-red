#!/usr/bin/env python3
"""Explorers of Sky demake: Gen 4 species and moves from an EoS ROM.

    tools/make_sky_gen4_data.py EOS.nds [--report]

Explorers of Sky is the same engine family as Rescue Team, and its data
lines up with Red's:

  * move ids: EoS 0x000-0x1AD are Red's move ids (EoS's 0x166/0x167
    Revenge/Avalanche are leftover duplicates; Red keeps its own) and EoS adds
    the Gen 4 moves at 0x1AE-0x21E. So learnsets and move data carry over by id.
  * species: Red's ids stay; the 107 Gen 4 species are appended after
    MONSTER_RAYQUAZA_CUTSCENE (first EoS form of each national dex number).
  * species stats, level-up tables and learnsets use the same units.

Fields EoS stores differently are mapped from the data both games share
(move range text -> Red range id, crit chance, exp yield scale), so Gen 4
values follow Red's conventions. The tool writes:

  include/constants/sky_gen4.h    MONSTER_* / MOVE_* ids, counts
  src/data/sky_gen4_data.c        gSkyMonsterData (Red + Gen 4), Gen 4 level
                                  data, gSkyMoveData (Red + Gen 4), learnsets
                                  for every species from EoS
  build-free report with --report

Red's own tables (data/monster/*.json, data/move/*.json) are read as the base,
so retail data is untouched; the sky build points its loaders at these tables.
"""
from __future__ import annotations

import collections
import json
import re
import statistics
import struct
import sys
import textwrap
from pathlib import Path

import ndspy.rom
from skytemple_files.common.types.file_types import FileType
from skytemple_files.common.util import get_ppmdu_config_for_rom
from skytemple_files.container.sir0.handler import Sir0Handler

ROOT = Path(__file__).resolve().parents[1]
OUT_H = ROOT / "include" / "constants" / "sky_gen4.h"
OUT_C = ROOT / "src" / "data" / "sky_gen4_data.c"

RED_MONSTER_COUNT = 424            # MONSTER_RAYQUAZA_CUTSCENE + 1
RED_MOVE_JSON_COUNT = 413          # entries in data/move/move_data.json
FIRST_GEN4_MOVE = 0x1AE
LAST_GEN4_MOVE = 0x21E
MUNCHLAX_DEX, RED_MUNCHLAX = 446, 420

TYPES = ["TYPE_NONE", "TYPE_NORMAL", "TYPE_FIRE", "TYPE_WATER", "TYPE_GRASS", "TYPE_ELECTRIC",
         "TYPE_ICE", "TYPE_FIGHTING", "TYPE_POISON", "TYPE_GROUND", "TYPE_FLYING", "TYPE_PSYCHIC",
         "TYPE_BUG", "TYPE_ROCK", "TYPE_GHOST", "TYPE_DRAGON", "TYPE_DARK", "TYPE_STEEL"]
CATEGORIES = ["CATEGORY_PHYSICAL", "CATEGORY_SPECIAL", "CATEGORY_STATUS"]
MOVEMENT = {0: None, 1: None, 2: "MOVEMENT_TYPE_CHASM", 3: "MOVEMENT_TYPE_WALL",
            4: "MOVEMENT_TYPE_LAVA", 5: "MOVEMENT_TYPE_WATER"}

# EoS has no friend areas: Gen 4 species go to a Red friend area of their
# primary type (secondary type where it fits better).
FRIEND_AREA_BY_TYPE = {
    "TYPE_NORMAL": "FRIEND_AREA_SKY_BLUE_PLAINS", "TYPE_FIRE": "FRIEND_AREA_SCORCHED_PLAINS",
    "TYPE_WATER": "FRIEND_AREA_TREASURE_SEA", "TYPE_GRASS": "FRIEND_AREA_JUNGLE",
    "TYPE_ELECTRIC": "FRIEND_AREA_THUNDER_MEADOW", "TYPE_ICE": "FRIEND_AREA_FRIGID_CAVERN",
    "TYPE_FIGHTING": "FRIEND_AREA_MT_DISCIPLINE", "TYPE_POISON": "FRIEND_AREA_POISON_SWAMP",
    "TYPE_GROUND": "FRIEND_AREA_FURNACE_DESERT", "TYPE_FLYING": "FRIEND_AREA_FLYAWAY_FOREST",
    "TYPE_PSYCHIC": "FRIEND_AREA_DECREPIT_LAB", "TYPE_BUG": "FRIEND_AREA_MIST_RISE_FOREST",
    "TYPE_ROCK": "FRIEND_AREA_MT_DEEPGREEN", "TYPE_GHOST": "FRIEND_AREA_DARKNESS_RIDGE",
    "TYPE_DRAGON": "FRIEND_AREA_DRAGON_CAVE", "TYPE_DARK": "FRIEND_AREA_RAVAGED_FIELD",
    "TYPE_STEEL": "FRIEND_AREA_MAGNETIC_QUARRY",
}


# EoS descriptions too long for Red's 4-line box.
DESC_OVERRIDES = {
    "Metal Burst": "Gives the user the Metal Burst status,\nwhich counters damage from moves and\nregular attacks.",
}


def ident(name: str) -> str:
    """'Mime Jr.' -> 'MIME_JR', 'Porygon-Z' -> 'PORYGON_Z'."""
    s = name.replace("é", "e").replace("♀", "_F").replace("♂", "_M")
    s = re.sub(r"[^A-Za-z0-9]+", "_", s).strip("_")
    return s.upper()


def camel(name: str) -> str:
    return "".join(p.capitalize() for p in ident(name).split("_"))


def cstr(s: str) -> str:
    return s.replace("\\", "\\\\").replace('"', '\\"').replace("\n", "\\n")


def enc_move(m: int) -> list[int]:
    return [m] if m < 0x80 else [0x80 | (m >> 7), m & 0x7F]


def clean_desc(raw: str) -> str:
    """EoS move description -> Red style (3 short lines, YELLOW keywords)."""
    m = re.search(r"\[BAR\]\[CR\]\n(.*?)\n\n", raw, re.S)
    text = m.group(1) if m else raw
    text = re.sub(r"\[CS:\w\](.*?)\[CR\]", r"\1", text)
    text = re.sub(r"\[LS:\d+\](.*?)\[LE\]", r"\1", text)
    text = re.sub(r"\[[^\]]*\]", "", text)
    text = " ".join(text.split())
    # Whole sentences only, as many as fit in 4 lines of ~38 characters.
    sentences = re.split(r"(?<=[.!])\s+", text)
    keep = sentences[:1]
    for sent in sentences[1:]:
        if len(textwrap.wrap(" ".join(keep + [sent]), 38)) > 4:
            break
        keep.append(sent)
    lines = textwrap.wrap(" ".join(keep), 38)
    if len(lines) > 4:
        lines = textwrap.wrap(" ".join(keep), 42)[:4]
    return "\n".join(lines)


class EoS:
    def __init__(self, path: str):
        self.rom = ndspy.rom.NintendoDSRom.fromFile(path)
        cfg = get_ppmdu_config_for_rom(self.rom)
        self.md = FileType.MD.deserialize(self.rom.getFileByName("BALANCE/monster.md"))
        self.waza = FileType.WAZA_P.deserialize(self.rom.getFileByName("BALANCE/waza_p.bin"))
        self.levels = FileType.BIN_PACK.deserialize(self.rom.getFileByName("BALANCE/m_level.bin"))
        strings = FileType.STR.deserialize(self.rom.getFileByName("MESSAGE/text_e.str")).strings
        blocks = cfg.string_index_data.string_blocks

        def block(name):
            b = blocks[name]
            return strings[b.begin:b.end]
        self.mon_names = block("Pokemon Names")
        self.mon_cats = block("Pokemon Categories")
        self.move_names = block("Move Names")
        self.move_descs = block("Move Descriptions")
        self.item_names = block("Item Names")
        self.ability_names = block("Ability Names")

    def level_data(self, md_index: int) -> bytes:
        raw = Sir0Handler.deserialize(self.levels[md_index]).content
        return FileType.COMMON_AT.deserialize(raw).decompress()


def red_symbols(path: Path, prefix: str) -> dict[str, str]:
    """label -> string from an asm names file."""
    out, label = {}, None
    for line in path.read_text().splitlines():
        m = re.match(r"(\w+):", line)
        if m:
            label = m.group(1)
            continue
        m = re.match(r'\s*\.string "(.*)\\0"', line)
        if m and label and label.startswith(prefix):
            out[label] = m.group(1)
    return out


def red_constants(path: Path, prefix: str) -> dict[str, int]:
    out = {}
    for line in path.read_text().splitlines():
        m = re.match(rf"#define ({prefix}\w+)\s+(0x[0-9A-Fa-f]+|\d+)\b", line)
        if m:
            out[m.group(1)] = int(m.group(2), 0)
    return out


def sprite_palette(name: str) -> int:
    """Red overworld palette tools/convert_eos_wan_to_ax.py picked for the sprite."""
    h = ROOT / "src" / "data" / "ax" / f"{ident(name).lower()}.h"
    if h.exists():
        # The note is in the header's first comment lines (compress_ax_anims.py
        # puts its own marker line first).
        m = re.search(r"Red overworld palette (\d+)", "\n".join(h.read_text().split("\n")[:5]))
        if m:
            return int(m.group(1))
    return 0


def range_bits(r) -> int:
    """EoS WazaMoveRangeSettings -> Red's u16 targeting flags (4 nibbles)."""
    return (int(r.target) & 0xF) | ((int(r.range) & 0xF) << 4) | ((int(r.condition) & 0xF) << 8) | ((int(r.unused) & 0xF) << 12)


def norm(s: str) -> str:
    return re.sub(r"[^A-Z0-9]", "", s.upper().replace("É", "E"))


def main() -> int:
    eos = EoS(sys.argv[1])
    report = "--report" in sys.argv
    red_mons = json.loads((ROOT / "data/monster/monster_data.json").read_text())
    red_moves = json.loads((ROOT / "data/move/move_data.json").read_text())
    red_mon_ids = red_constants(ROOT / "include/constants/monster.h", "MONSTER_")
    red_abilities = red_constants(ROOT / "include/constants/ability.h", "ABILITY_")
    red_items = red_constants(ROOT / "include/constants/item.h", "ITEM_")
    red_move_ids = red_constants(ROOT / "include/constants/move_id.h", "MOVE_")
    red_ranges = {v: k for k, v in red_constants(ROOT / "include/constants/move_range.h", "MOVE_RANGE_").items()}
    red_names = red_symbols(ROOT / "data/monster/monster_names.s", "MonsterName")

    # ---- EoS md index for each national dex number (first entry/form) ----
    by_dex: dict[int, int] = {}
    for i, e in enumerate(eos.md.entries[:600]):
        if e.national_pokedex_number and e.national_pokedex_number not in by_dex:
            by_dex[e.national_pokedex_number] = i
    # No Arceus in EoS; Munchlax (446) already has Red id MONSTER_MUNCHLAX (a
    # dummy entry in Red), which gets EoS's data instead of a new id.
    gen4 = [(dex, by_dex[dex]) for dex in range(387, 494) if dex in by_dex and dex != MUNCHLAX_DEX]
    gen4_ids = {}
    for n, (dex, mdi) in enumerate(gen4):
        gen4_ids[mdi] = RED_MONSTER_COUNT + n
    mon_const = {}
    for n, (dex, mdi) in enumerate(gen4):
        mon_const[RED_MONSTER_COUNT + n] = "MONSTER_" + ident(eos.mon_names[mdi])

    # Red species -> EoS md index (dex number; forms share it)
    red_to_md = {}
    for sid, e in enumerate(red_mons):
        dex = e["dexInternal"][0]
        if 0 < dex < 387 and dex in by_dex:
            red_to_md[sid] = by_dex[dex]
    red_to_md[RED_MUNCHLAX] = by_dex[MUNCHLAX_DEX]

    # ---- mappings learnt from shared data ----
    range_votes = collections.defaultdict(collections.Counter)
    crit_votes = collections.defaultdict(collections.Counter)
    tflag_same = tflag_total = 0
    for mid, rm in enumerate(red_moves):
        if mid == 0 or mid >= len(eos.waza.moves):
            continue
        em = eos.waza.moves[mid]
        range_votes[em.range_check_text][rm.get("rangeID", "MOVE_RANGE_NONE")] += 1
        crit_votes[em.crit_chance][rm.get("critChance", 0)] += 1
        t = int(rm.get("targetingFlags", "0"), 2)
        et = range_bits(em.settings_range)
        if et is not None:
            tflag_total += 1
            tflag_same += (t == et)
    range_map = {k: v.most_common(1)[0][0] for k, v in range_votes.items()}
    crit_map = {k: v.most_common(1)[0][0] for k, v in crit_votes.items()}
    exp_ratio = statistics.median(
        red_mons[s]["expYield"] / eos.md.entries[m].exp_yield
        for s, m in red_to_md.items() if eos.md.entries[m].exp_yield > 0 and red_mons[s]["expYield"] > 0)

    def eos_move_entry(mid: int) -> dict:
        em = eos.waza.moves[mid]
        tf = range_bits(em.settings_range)
        tfa = range_bits(em.settings_range_ai)
        rng = range_map.get(em.range_check_text, "MOVE_RANGE_FRONT_FOE")
        return {
            "basePower": em.base_power, "type": TYPES[em.type] if em.type < len(TYPES) else "TYPE_NORMAL",
            "category": CATEGORIES[em.category], "targetingFlags": tf, "aiTargetingFlags": tfa,
            "basePP": em.base_pp, "aiWeight": em.ai_weight,
            "accuracy": (em.miss_accuracy, em.accuracy, em.ai_condition1_chance),
            "numberOfChainedHits": em.number_chained_hits, "maxUpgradeLevel": em.max_upgrade_level,
            "critChance": crit_map.get(em.crit_chance, em.crit_chance),
            "affectedByMagicCoat": em.affected_by_magic_coat, "isSnatchable": em.is_snatchable,
            "usesMouth": em.uses_mouth, "cannotHitFrozen": em.ai_frozen_check,
            "ignoresTaunted": em.ignores_taunted, "rangeID": rng,
        }

    # 0x1D3 is an unused "$$$" slot in EoS too.
    unused_moves = {mid for mid in range(FIRST_GEN4_MOVE, LAST_GEN4_MOVE + 1) if not ident(eos.move_names[mid])}
    new_moves = [mid for mid in range(FIRST_GEN4_MOVE, LAST_GEN4_MOVE + 1) if mid not in unused_moves]
    move_const = {mid: "MOVE_" + ident(eos.move_names[mid]) for mid in new_moves}
    # avoid clashes with Red constants (e.g. MOVE_AVALANCHE is new; keep unique)
    for mid, c in list(move_const.items()):
        if c in red_move_ids and red_move_ids[c] != mid:
            move_const[mid] = c + "_GEN4"

    # ---- abilities / items by name ----
    red_ab_norm = {norm(k[len("ABILITY_"):]): k for k in red_abilities}
    ab_aliases = {"LIGHTNINGROD": "LIGHTNINGROD", "COMPOUNDEYES": "COMPOUNDEYES"}

    def ability(eid: int) -> str:
        if eid in (0, 255) or eid >= len(eos.ability_names):
            return "0"
        n = norm(eos.ability_names[eid])
        n = {"STEADFAST": "STEADFAST"}.get(n, n)
        return red_ab_norm.get(n, "0")

    red_item_norm = {norm(k[len("ITEM_"):]): k for k in red_items}

    def item(eid: int) -> str | None:
        if eid <= 0 or eid >= len(eos.item_names):
            return None
        return red_item_norm.get(norm(eos.item_names[eid]))

    # ---- alphabetical ranks over Red + Gen 4 ----
    names_all = {}
    for sid, e in enumerate(red_mons):
        names_all[sid] = (red_names.get(e["name"], e["name"]), e["alphabetParent"][0])
    for mdi, sid in gen4_ids.items():
        names_all[sid] = (eos.mon_names[mdi], 0)
    order = sorted(names_all, key=lambda s: (names_all[s][0].lower(), names_all[s][1], s))
    alpha = {sid: rank for rank, sid in enumerate(order)}

    # ---------------------------------------------------------------- header
    h = ["/* Generated by tools/make_sky_gen4_data.py — do not edit. */",
         "#ifndef GUARD_CONSTANTS_SKY_GEN4_H", "#define GUARD_CONSTANTS_SKY_GEN4_H", "",
         f"#define SKY_FIRST_GEN4_MONSTER {RED_MONSTER_COUNT}",
         f"#define SKY_GEN4_MONSTER_COUNT {len(gen4)}"]
    for sid in sorted(mon_const):
        h.append(f"#define {mon_const[sid]} {sid}")
    h += ["", f"#define SKY_FIRST_GEN4_MOVE 0x{FIRST_GEN4_MOVE:X}",
          f"#define SKY_LAST_GEN4_MOVE 0x{LAST_GEN4_MOVE:X}"]
    for mid in new_moves:
        h.append(f"#define {move_const[mid]} 0x{mid:X}")
    h += ["", "#endif", ""]
    OUT_H.write_text("\n".join(h))

    # ---------------------------------------------------------------- C data
    c = ["/* Generated by tools/make_sky_gen4_data.py from Explorers of Sky — do not edit. */",
         '#include "global.h"', "#ifdef SKY_STORY",
         '#include "constants/ability.h"', '#include "constants/evolve_type.h"',
         '#include "constants/friend_area.h"', '#include "constants/item.h"',
         '#include "constants/monster.h"', '#include "constants/move_category.h"',
         '#include "constants/move_id.h"', '#include "constants/move_range.h"',
         '#include "constants/type.h"', '#include "constants/walkable_tile.h"',
         '#include "moves.h"', '#include "constants/sky_gen4.h"', '#include "structs/str_moves.h"',
         '#include "structs/str_pokemon.h"', ""]

    # Red labels used
    labels = set()
    for e in red_mons:
        labels.add(e["name"]); labels.add(e["category"])
    for e in red_moves:
        labels.add(e["name"]); labels.add(e["description"]); labels.add(e["useText"])
    for l in sorted(labels):
        c.append(f"extern u8 {l}[];")
    c.append("")

    # Gen 4 species names / categories
    for mdi, sid in gen4_ids.items():
        cm = camel(eos.mon_names[mdi])
        c.append(f'static const u8 sSkyName{cm}[] = _("{cstr(eos.mon_names[mdi])}");')
        c.append(f'static const u8 sSkyCategory{cm}[] = _("{cstr(eos.mon_cats[mdi])}");')
    c.append("")

    def mon_entry(e: dict, name_expr: str, cat_expr: str, sid: int) -> list[str]:
        types = e["types"] + ["TYPE_NONE"] * (2 - len(e["types"]))
        abil = e["abilities"] + ["0"] * (2 - len(e["abilities"]))
        pre = e.get("preEvolution", {})
        req = e.get("evolutionRequirements", {})
        return [
            "    {",
            f"        .species = (u8 *){name_expr}, .category = (u8 *){cat_expr},",
            f"        .overworldPalette = {e['overworldPalette']}, .bodySize = {e['bodySize']},",
            f"        .movementSpeed = {e['movementSpeed']}, .dialogueSprites = {e.get('dialogueSprites', 0)},",
            f"        .unk12 = {int(bool(e.get('unk12', False)))},",
            f"        .types = {{ {types[0]}, {types[1]} }}, .movementType = {e.get('movementType', 0)},",
            f"        .friendArea = {e['friendArea']}, .abilities = {{ {abil[0]}, {abil[1]} }},",
            f"        .shadowSize = {e['shadowSize']}, .regenSpeed = {e['regenSpeed']},",
            f"        .canMove = {int(bool(e.get('canMove', False)))}, .chanceAsleep = {e['chanceAsleep']},",
            f"        .baseHP = {e['baseHP']}, .expYield = {e['expYield']},",
            f"        .baseAtkSpAtk = {{ {e['baseAtkSpAtk'][0]}, {e['baseAtkSpAtk'][1]} }},",
            f"        .baseDefSpDef = {{ {e['baseDefSpDef'][0]}, {e['baseDefSpDef'][1]} }},",
            f"        .weight = {e['weight']}, .size = {e['size']},",
            f"        .unk30 = {e['unk30']}, .unk31 = {e['unk31']}, .unk32 = {e['unk32']},",
            f"        .canThrowItems = {int(bool(e.get('canThrowItems', False)))},",
            f"        .preEvolution = {{ {pre.get('evolveFrom', 0)}, {pre.get('evolveType', 0)} }},",
            f"        .evolutionRequirements = {{ {req.get('mainRequirement', 0)}, {req.get('additionalRequirement', 0)} }},",
            f"        .dexInternal = {{ {e['dexInternal'][0]}, {e['dexInternal'][1]} }},",
            f"        .recruitRate = {e['recruitRate']},",
            f"        .alphabetParent = {{ {alpha[sid]}, {e['alphabetParent'][1]} }},",
            "    },",
        ]

    gen4_entries = {}
    skipped_evos = []
    for mdi, sid in list(gen4_ids.items()) + [(by_dex[MUNCHLAX_DEX], RED_MUNCHLAX)]:
        e = eos.md.entries[mdi]
        types = [TYPES[e.type_primary]] + ([TYPES[e.type_secondary]] if 0 < e.type_secondary < 18 else [])
        abil = [a for a in (ability(e.ability_primary), ability(e.ability_secondary)) if a != "0"]
        fa = FRIEND_AREA_BY_TYPE[types[0]]
        if types[0] == "TYPE_NORMAL" and len(types) > 1:
            fa = FRIEND_AREA_BY_TYPE[types[1]]
        entry = {
            "overworldPalette": sprite_palette(eos.mon_names[mdi]), "bodySize": e.body_size, "movementSpeed": 1,
            "types": types, "friendArea": fa, "abilities": abil or ["0"],
            "shadowSize": e.shadow_size, "regenSpeed": 100, "canMove": e.can_move,
            "chanceAsleep": e.chance_spawn_asleep, "baseHP": e.base_hp,
            "expYield": max(1, round(e.exp_yield * exp_ratio)),
            "baseAtkSpAtk": [e.base_atk, e.base_sp_atk], "baseDefSpDef": [e.base_def, e.base_sp_def],
            "weight": e.weight, "size": e.size, "unk30": 10, "unk31": 10, "unk32": 24,
            "canThrowItems": True, "dexInternal": [e.national_pokedex_number, sid],
            "recruitRate": e.recruit_rate1, "alphabetParent": [0, sid],
        }
        mv = MOVEMENT.get(int(e.movement_type))
        if mv:
            entry["movementType"] = mv
        # evolution
        if e.evo_method and e.pre_evo_index:
            pre_md = e.pre_evo_index
            pre_sid = gen4_ids.get(pre_md)
            if pre_sid is None:
                dex = eos.md.entries[pre_md].national_pokedex_number
                pre_sid = next((s for s, m in red_to_md.items() if eos.md.entries[m].national_pokedex_number == dex), None)
            method = int(e.evo_method)
            if pre_sid is not None:
                if method == 1:
                    entry["preEvolution"] = {"evolveFrom": pre_sid, "evolveType": "EVOLVE_TYPE_LEVEL"}
                    entry["evolutionRequirements"] = {"mainRequirement": e.evo_param1}
                elif method == 2:
                    entry["preEvolution"] = {"evolveFrom": pre_sid, "evolveType": "EVOLVE_TYPE_IQ"}
                    entry["evolutionRequirements"] = {"mainRequirement": e.evo_param1}
                elif method == 3 and item(e.evo_param1):
                    entry["preEvolution"] = {"evolveFrom": pre_sid, "evolveType": "EVOLVE_TYPE_ITEM"}
                    entry["evolutionRequirements"] = {"mainRequirement": item(e.evo_param1)}
                else:
                    # Gen 4 evolution items (Shiny Stone, Razor Claw, ...) and
                    # move/gender conditions don't exist in Red: evolve by level.
                    lvl = 40 if method != 1 else e.evo_param1
                    entry["preEvolution"] = {"evolveFrom": pre_sid, "evolveType": "EVOLVE_TYPE_LEVEL"}
                    entry["evolutionRequirements"] = {"mainRequirement": lvl}
                    skipped_evos.append((eos.mon_names[mdi], method, e.evo_param1, e.evo_param2))
        # base form for "parent"
        base = mdi
        while eos.md.entries[base].pre_evo_index:
            base = eos.md.entries[base].pre_evo_index
        if base in gen4_ids:
            entry["alphabetParent"][1] = gen4_ids[base]
        else:
            dex = eos.md.entries[base].national_pokedex_number
            entry["alphabetParent"][1] = next((s for s, m in red_to_md.items()
                                               if eos.md.entries[m].national_pokedex_number == dex), sid)
        gen4_entries[sid] = entry

    # ---- friend areas: whole evolution lines, <= 16 species per area ----
    # (Wigglytuff's friend-area list holds 16 species; src/wigglytuff_shop2.c)
    area_count = collections.Counter()
    seen_names = set()
    type_area = collections.defaultdict(collections.Counter)
    for e in red_mons:
        if e["friendArea"] == "FRIEND_AREA_NONE" or e["name"] in seen_names:
            continue
        seen_names.add(e["name"])
        area_count[e["friendArea"]] += 1
        for t in e["types"]:
            type_area[t][e["friendArea"]] += 1
    lines = collections.defaultdict(list)
    for sid, entry in gen4_entries.items():
        if sid == RED_MUNCHLAX:
            continue
        lines[entry["alphabetParent"][1]].append(sid)
    for base, members in sorted(lines.items()):
        lead = gen4_entries[members[0]] if base not in gen4_entries else gen4_entries[base]
        if base < RED_MONSTER_COUNT:
            # Gen 4 evolution of a Red species: join its family's area.
            fam = red_mons[base]["friendArea"]
            if area_count[fam] + len(members) <= 16:
                for m in members:
                    gen4_entries[m]["friendArea"] = fam
                area_count[fam] += len(members)
                continue
        cands = []
        for t in lead["types"]:
            cands += [a for a, _ in type_area[t].most_common()]
        cands.append(FRIEND_AREA_BY_TYPE[lead["types"][0]])
        cands += [a for a, _ in sorted(area_count.items(), key=lambda x: x[1])]
        area = next(a for a in cands if area_count[a] + len(members) <= 16)
        for m in members:
            gen4_entries[m]["friendArea"] = area
        area_count[area] += len(members)
    if report:
        print("friend areas after Gen 4 (max 16):", max(area_count.values()))

    c.append("const MonsterDataEntry gSkyMonsterData[MONSTER_MAX] = {")
    for sid, e in enumerate(red_mons):
        e = dict(e)
        pre = e.get("preEvolution")
        if sid == RED_MUNCHLAX:
            e = gen4_entries[sid]
            e["dexInternal"][1] = red_mons[sid]["dexInternal"][1]
            # Red's own sprite / portraits for Munchlax stay.
            e["overworldPalette"] = red_mons[sid]["overworldPalette"]
            e["dialogueSprites"] = red_mons[sid].get("dialogueSprites", 0)
            e["friendArea"] = red_mons[sid]["friendArea"]
            c += mon_entry(e, red_mons[sid]["name"], red_mons[sid]["category"], sid)
            continue
        c += mon_entry(e, e["name"], e["category"], sid)
    for mdi, sid in gen4_ids.items():
        cm = camel(eos.mon_names[mdi])
        c += mon_entry(gen4_entries[sid], f"sSkyName{cm}", f"sSkyCategory{cm}", sid)
    c.append("};")
    c.append("")

    # Gen 4 level data (uncompressed LevelData[100])
    c.append("const LevelData gSkyGen4LevelData[SKY_GEN4_MONSTER_COUNT + 1][100] = {")
    for mdi, sid in list(gen4_ids.items()) + [(by_dex[MUNCHLAX_DEX], RED_MUNCHLAX)]:  # Munchlax last
        d = eos.level_data(mdi)
        rows = []
        for lv in range(100):
            exp, hp, a, sa, df, sd, _ = struct.unpack_from("<iHBBBBH", d, lv * 12)
            rows.append(f"{{{exp},{hp},{{{a},{sa}}},{{{df},{sd}}},0}}")
        c.append("    { " + ", ".join(rows) + " },")
    c.append("};")
    c.append("")

    # ---- moves ----
    for mid in new_moves:
        cm = camel(eos.move_names[mid])
        c.append(f'static const u8 sSkyMoveName{cm}[] = _("{cstr(eos.move_names[mid])}");')
        desc = DESC_OVERRIDES.get(eos.move_names[mid]) or clean_desc(eos.move_descs[mid])
        c.append(f'static const u8 sSkyMoveDesc{cm}[] = _("{cstr(desc)}");')
    c.append("")

    def move_entry(m: dict, name: str, desc: str, use: str) -> str:
        acc = m["accuracy"]
        return ("    { " + f".name = (u8 *){name}, .basePower = {m['basePower']}, .type = {m['type']}, "
                f".category = {m['category']}, .targetingFlags = {{ {m['targetingFlags']}, {m['aiTargetingFlags']} }}, "
                f".basePP = {m['basePP']}, .aiWeight = {m['aiWeight']}, "
                f".accuracy = {{ {acc[0]}, {acc[1]}, {acc[2]} }}, "
                f".numberOfChainedHits = {m['numberOfChainedHits']}, .maxUpgradeLevel = {m['maxUpgradeLevel']}, "
                f".critChance = {m['critChance']}, .affectedByMagicCoat = {int(bool(m['affectedByMagicCoat']))}, "
                f".isSnatchable = {int(bool(m['isSnatchable']))}, .usesMouth = {int(bool(m['usesMouth']))}, "
                f".cannotHitFrozen = {int(bool(m['cannotHitFrozen']))}, .ignoresTaunted = {int(bool(m['ignoresTaunted']))}, "
                f".rangeID = {m['rangeID']}, .description = (u8 *){desc}, .useText = (u8 *){use} }},")

    def red_move(rm: dict) -> dict:
        g = lambda k, d=0: rm.get(k, d)
        return {
            "basePower": g("basePower"), "type": g("type", "TYPE_NONE"), "category": g("category", "CATEGORY_PHYSICAL"),
            "targetingFlags": int(g("targetingFlags", "0"), 2), "aiTargetingFlags": int(g("aiTargetingFlags", "0"), 2),
            "basePP": g("basePP"), "aiWeight": g("aiWeight"),
            "accuracy": (g("accuracy1"), g("accuracy2"), g("aiConditionRandomChance")),
            "numberOfChainedHits": g("numberOfChainedHits"), "maxUpgradeLevel": g("maxUpgradeLevel"),
            "critChance": g("critChance"), "affectedByMagicCoat": g("affectedByMagicCoat", False),
            "isSnatchable": g("isSnatchable", False), "usesMouth": g("usesMouth", False),
            "cannotHitFrozen": g("cannotHitFrozen", False), "ignoresTaunted": g("ignoresTaunted", False),
            "rangeID": g("rangeID", "MOVE_RANGE_NONE"),
        }

    c.append("const MoveDataEntry gSkyMoveData[NUM_MOVE_IDS] = {")
    for mid in range(LAST_GEN4_MOVE + 1):
        if mid in unused_moves:
            rm = red_moves[0]
            c.append(move_entry(red_move(rm), rm["name"], rm["description"], rm["useText"]))
        elif mid >= FIRST_GEN4_MOVE:
            cm = camel(eos.move_names[mid])
            c.append(move_entry(eos_move_entry(mid), f"sSkyMoveName{cm}", f"sSkyMoveDesc{cm}", "MoveUseTextUse"))
        elif mid < RED_MOVE_JSON_COUNT:
            rm = red_moves[mid]
            c.append(move_entry(red_move(rm), rm["name"], rm["description"], rm["useText"]))
        else:
            # Red ids 0x19D-0x1AD (internal: weather ball types, 2nd turns): as in Red,
            # past the end of its 413-entry table; give them the "nothing" entry.
            rm = red_moves[0]
            c.append(move_entry(red_move(rm), rm["name"], rm["description"], rm["useText"]))
    c.append("};")
    c.append("")

    # ---- learnsets from EoS for every species ----
    def learnset(mdi: int | None):
        if mdi is None or mdi >= len(eos.waza.learnsets):
            return None
        ls = eos.waza.learnsets[mdi]
        lvl = []
        for m in ls.level_up_moves:
            if 0 < m.move_id <= LAST_GEN4_MOVE:
                lvl += enc_move(m.move_id) + [m.level_id]
        tm = []
        for m in ls.tm_hm_moves:
            if 0 < m <= LAST_GEN4_MOVE:
                tm += enc_move(m)
        return lvl + [0], tm + [0]

    c.append("static const u8 sSkyNoMoves[] = { 0 };")
    red_ptrs = (ROOT / "data/monster/learnset/learnset_ptrs.s").read_text()
    red_ls = re.findall(r"\.4byte (\w+)", red_ptrs)
    red_pairs = [(red_ls[i], red_ls[i + 1]) for i in range(0, len(red_ls) - 1, 2)]
    for a, b in red_pairs:
        for l in (a, b):
            if l != "0":
                c.append(f"extern const u8 {l}[];")
    ls_rows = []
    for sid in range(RED_MONSTER_COUNT + len(gen4)):
        mdi = red_to_md.get(sid) if sid < RED_MONSTER_COUNT else next(m for m, s in gen4_ids.items() if s == sid)
        got = learnset(mdi)
        if got is None:
            if sid < len(red_pairs) and red_pairs[sid][0] != "0":
                ls_rows.append(f"    {{ {red_pairs[sid][0]}, {red_pairs[sid][1]} }},")
            else:
                ls_rows.append("    { sSkyNoMoves, sSkyNoMoves },")
            continue
        lv, tm = got
        c.append(f"static const u8 sSkyLevelUp{sid}[] = {{ {', '.join(map(str, lv))} }};")
        c.append(f"static const u8 sSkyHMTM{sid}[] = {{ {', '.join(map(str, tm))} }};")
        ls_rows.append(f"    {{ sSkyLevelUp{sid}, sSkyHMTM{sid} }},")
    c.append("const MoveLearnset gSkyMoveLearnsets[MONSTER_MAX] = {")
    c += ls_rows
    c.append("};")
    c.append("#endif")
    OUT_C.write_text("\n".join(c) + "\n")

    if report:
        print(f"Gen 4 species: {len(gen4)}  ids {RED_MONSTER_COUNT}..{RED_MONSTER_COUNT + len(gen4) - 1}")
        print(f"exp yield ratio Red/EoS: {exp_ratio:.2f}")
        print(f"targeting flags equal for shared moves: {tflag_same}/{tflag_total}")
        print("range map:", range_map)
        print("crit map:", crit_map)
        print("evolutions changed to level 40:", skipped_evos)
        missing_ab = sorted({eos.ability_names[a] for mdi in gen4_ids for a in
                             (eos.md.entries[mdi].ability_primary, eos.md.entries[mdi].ability_secondary)
                             if a not in (0, 255) and ability(a) == "0"})
        print("abilities missing in Red:", missing_ab)
    return 0


if __name__ == "__main__":
    sys.exit(main())
