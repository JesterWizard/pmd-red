#!/usr/bin/env python3
"""Explorers of Sky dungeon floors (BALANCE/mappa_s.bin) as C data for the
sky build's dungeon overrides (src/sky_story.c).

    tools/make_sky_dungeon_floors.py EOS.nds 3 sDrenchedBluff > src/data/sky_drenched_bluff_floors.h
    tools/make_sky_dungeon_floors.py EOS.nds 4 sMtBristle > src/data/sky_mt_bristle_floors.h
    tools/make_sky_dungeon_floors.py EOS.nds 5 sMtBristlePeak --boss-codes 16 > src/data/sky_mt_bristle_peak_floors.h

For each floor of EoS dungeon N (the dungeon list in arm9 gives its floors in
mappa_s.bin) it writes:

  - the floor layout: EoS's floor properties are Red's FloorProperties byte for
    byte (offsets 0x00-0x1B: layout, room density, ..., Kecleon shop layout);
    the tileset, music and money bytes are set by the C code;
  - the wild Pokémon: species (by name: Red's constants or the Gen 4 ids in
    include/constants/sky_gen4.h), level and spawn weight (EoS's cumulative
    weights out of 10000 as single weights);
  - the traps: Red's trap ids (EoS 1-19 are Red's 1-19, EoS 22 Trip Trap is
    Red's 0), cumulative out of 10000 as Red's trapSpawnChances;
  - the floor items (EoS's floor item list; shop, Monster House and buried
    lists are left to Red's data, see the header): category weights and item
    weights, cumulative per category out of 10000, in Red's item ids (by name,
    ITEM_EOS_TO_RED for renamed ones). EoS items Red does not have are left
    out and the rest of the category is scaled back to 10000; EoS's
    "guaranteed" items (weight 0xFFFF) are listed apart;
  - a fixed floor (BALANCE/fixed.bin, EoS's boss rooms) in Red's "fixedmap"
    encoding, with its bosses' stats (overlay 10's monster spawn stats) and
    a spawn list at the bosses' levels. --boss-codes gives the Red fixed-room
    entity code (16 + the sFixedRoomEntities index, src/dungeon_generation_fixed.c)
    each EoS entity plays, in EoS entity id order: 16 is Skarmory's slot
    (Mt. Steel's boss room), 18 / 19 Gengar's / Ekans's (Team Meanies').
    `... EOS.nds 2 sBeachCavePit --boss-codes 18,19` gives Beach Cave Pit's
    room byte for byte as written by hand in src/sky_story.c.

Floors are labelled 1F or B1F by EoS's stairs direction (arm9's dungeon
restrictions). Everything left out or approximated is printed to stderr and
written into the header as a comment.
"""
from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

import ndspy.rom
from skytemple_files.common.types.file_types import FileType
from skytemple_files.common.util import get_binary_from_rom, get_ppmdu_config_for_rom
from skytemple_files.hardcoded.dungeons import HardcodedDungeons

ROOT = Path(__file__).resolve().parents[1]
GUARANTEED = 0xFFFF
RED_TRAPS = 20
EOS_TRIP_TRAP = 22

# EoS item name -> Red item constant, where the names differ or Red has a
# stand-in. None: Red has no such item (left out).
ITEM_EOS_TO_RED = {
    "X-Eye Seed": "ITEM_TOTTER_SEED",  # EoS: hallucination; Red has no such status, Totter Seed confuses
    "Mix Elixir": None,   # EoS's look-alike items ("...?"): no Red counterpart
    "Oren Berry": None,
    "Dough Seed": None,
    "Dropeye Seed": None,  # EoS: the map can't be seen; Red has no such status
    "Reviser Seed": None,  # EoS-only items (Gen 4 seeds and orbs): no Red counterpart
    "Slip Seed": None,
    "Via Seed": None,
    "Spurn Orb": None,
    "All-Hit Orb": None,
    "Foe-Seal Orb": None,
    "Poké": "ITEM_POKE",
}

# Red fixedmap codes (PlaceFixedRoomTile) for EoS's fixed-floor tile rules.
RED_FLOOR = 60        # floor, room 0 (sFixedRoomEntities[44]: nothing on it), as in Red's boss rooms
RED_WALL = 2          # impassable wall
RED_PLAYER_SPAWN = 4  # gDungeon->playerSpawn (a room without one fails generation)
RED_TEAM = [22, 23, 24, 25, 26, 27]  # team slots 1-6 (gDungeon->unkE220: leader, partner, ...)
EOS_TILE_TO_RED = {0x00: RED_FLOOR, 0x02: RED_WALL, 0x04: RED_TEAM[0], 0x60: RED_TEAM[1],
                   0x61: RED_TEAM[2], 0x62: RED_TEAM[3]}


def constants(path, prefix):
    text = (ROOT / path).read_text()
    return {m.group(1): int(m.group(2), 0) for m in
            re.finditer(r"^#define\s+(" + prefix + r"\w+)\s+(0x[0-9a-fA-F]+|\d+)\b", text, re.M)}


def const_name(name, prefix):
    s = name.upper().replace("É", "E").replace("♀", "_F").replace("♂", "_M")
    s = re.sub(r"[^A-Z0-9]+", "_", s).strip("_")
    return prefix + s


def item_name(n):
    """EoS item names carry text markup ("[M:I1]Warp Orb"): drop it."""
    return re.sub(r"\[[^\]]*\]", "", n)


def encode_fixedmap(w, h, codes):
    """Red's fixedmap room (read by sub_80511F0): width, height, flags, then
    runs: a byte (value << 4) | (count - 1) for values 0-15, or 0x0E and the
    value for a single tile (values 16 and up)."""
    out = [w, h, 0]
    i = 0
    while i < len(codes):
        v = codes[i]
        if v >= 16:
            out += [0x0E, v]
            i += 1
            continue
        n = 1
        while i + n < len(codes) and codes[i + n] == v and n < 16:
            n += 1
        if v == 0 and n == 15:  # 0x0E is the escape byte
            n = 14
        out.append((v << 4) | (n - 1))
        i += n
    return out


def fixed_floor(rom, cfg, fid, boss_codes, species, note):
    """EoS fixed floor `fid` -> (Red fixedmap bytes, [(species, EoS entity,
    Red code, spawn stats)], the room as text rows)."""
    from skytemple_files.dungeon_data.fixed_bin.model import EntityRule, TileRule
    from skytemple_files.hardcoded.fixed_floor import HardcodedFixedFloorTables as Tables

    fixed = FileType.FIXED_BIN.deserialize(rom.getFileByName("BALANCE/fixed.bin"), static_data=cfg)
    ov29 = get_binary_from_rom(rom, cfg.bin_sections.overlay29)
    ov10 = get_binary_from_rom(rom, cfg.bin_sections.overlay10)
    ents = Tables.get_entity_spawn_table(ov29, cfg)
    mons = Tables.get_monster_spawn_list(ov29, cfg)
    stats = Tables.get_monster_spawn_stats_table(ov10, cfg)
    ff = fixed.fixed_floors[fid]
    used = sorted({a.entity_rule_id for a in ff.actions if isinstance(a, EntityRule)})
    if len(boss_codes) != len(used):
        raise SystemExit(f"fixed floor {fid}: {len(used)} entities {used}, --boss-codes gives {len(boss_codes)}")
    code_of = dict(zip(used, boss_codes))
    grid = []
    for a in ff.actions:
        if isinstance(a, EntityRule):
            grid.append(code_of[a.entity_rule_id])
        elif isinstance(a, TileRule) and a.tr_type.value in EOS_TILE_TO_RED:
            grid.append(EOS_TILE_TO_RED[a.tr_type.value])
        else:
            raise SystemExit(f"fixed floor {fid}: no Red code for {a}")
    width, height = ff.width, ff.height

    def at(x, y):
        return grid[y * width + x]

    # Red's boss cutscenes put the team on the team slots and need a player
    # spawn: the slots EoS does not give go on the floor tiles below the
    # leader, in the column between leader and partner, as in Red's rooms.
    cells = [(x, y) for y in range(height) for x in range(width)]
    lead = next((p for p in cells if at(*p) == RED_TEAM[0]), None)
    if lead is None:
        raise SystemExit(f"fixed floor {fid}: no leader spawn")
    part = next((p for p in cells if at(*p) == RED_TEAM[1]), lead)
    extra = [c for c in RED_TEAM[2:] if c not in grid]
    extra = extra[:2] + [RED_PLAYER_SPAWN] + extra[2:]
    mx = (lead[0] + part[0]) // 2
    spots = [(mx, y) for y in range(lead[1] + 1, height) if at(mx, y) == RED_FLOOR]
    spots += sorted((p for p in cells if p[1] > lead[1] and at(*p) == RED_FLOOR and p not in spots),
                    key=lambda p: (abs(p[0] - mx) + abs(p[1] - lead[1]), p[1], p[0]))
    if len(spots) < len(extra):
        raise SystemExit(f"fixed floor {fid}: no room below the leader for the team slots")
    for c, (x, y) in zip(extra, spots):
        grid[y * width + x] = c
    bosses = []
    for e in used:
        m = mons[ents[e].monster_id]
        st = stats[m.stats_entry]
        bosses.append((species(m.md_idx % 600), e, code_of[e], st))
        if st.exp_yield:
            note(f"fixed floor {fid}: {species(m.md_idx % 600)} gives {st.exp_yield} EXP in EoS")
    sym = {RED_FLOOR: ".", RED_WALL: "#", RED_PLAYER_SPAWN: "S", RED_TEAM[0]: "L", RED_TEAM[1]: "P"}
    sym.update({c: str(k + 1) for k, c in enumerate(RED_TEAM) if k >= 2})
    rows = ["".join(sym.get(c, "B") for c in grid[y * width:(y + 1) * width]) for y in range(height)]
    return encode_fixedmap(width, height, grid), bosses, rows


def main() -> int:
    ap = argparse.ArgumentParser(description="EoS dungeon floors (mappa_s.bin) as C data for src/sky_story.c")
    ap.add_argument("rom", help="the EoS ROM")
    ap.add_argument("dungeon", type=int, help="EoS dungeon id")
    ap.add_argument("name", help="C name prefix, e.g. sMtBristle")
    ap.add_argument("--boss-codes", default="",
                    help="for a fixed floor: the Red room code of each EoS entity, e.g. 16 or 18,19")
    args = ap.parse_args()
    dungeon, name = args.dungeon, args.name
    boss_codes = [int(c) for c in args.boss_codes.split(",") if c]
    rom = ndspy.rom.NintendoDSRom.fromFile(args.rom)
    cfg = get_ppmdu_config_for_rom(rom)
    strings = FileType.STR.deserialize(rom.getFileByName("MESSAGE/text_e.str")).strings
    blocks = cfg.string_index_data.string_blocks

    def text(block, i):
        return strings[blocks[block].begin + i]

    dlist = HardcodedDungeons.get_dungeon_list(rom.arm9, cfg)[dungeon]
    mappa = FileType.MAPPA_BIN.deserialize(rom.getFileByName("BALANCE/mappa_s.bin"))
    floors = mappa.floor_lists[dlist.mappa_index][dlist.start_after:dlist.start_after + dlist.number_floors]
    dname = text("Dungeon Names (Main)", dungeon)
    up = HardcodedDungeons.get_dungeon_restrictions(rom.arm9, cfg)[dungeon].direction.value == 1

    def label(n):
        return f"{n}F" if up else f"B{n}F"

    monsters = constants("include/constants/monster.h", "MONSTER_")
    monsters.update(constants("include/constants/sky_gen4.h", "MONSTER_"))
    items = constants("include/constants/item.h", "ITEM_")
    item_data = json.loads((ROOT / "data/item/item_data.json").read_text())
    red_cat = {i: e["category"] for i, e in enumerate(item_data)}
    cats = constants("include/constants/item.h", "CATEGORY_")
    cats.pop("CATEGORY_7", None)
    cat_by_id = {v: k for k, v in cats.items()}
    cat_by_id[7] = "CATEGORY_7"
    eos_items = FileType.ITEM_P.deserialize(rom.getFileByName("BALANCE/item_p.bin")).item_list

    notes = []

    def note(s):
        if s not in notes:
            notes.append(s)
            print(s, file=sys.stderr)

    def species(md):
        n = text("Pokemon Names", md)
        c = const_name(n, "MONSTER_")
        if c not in monsters:
            raise SystemExit(f"no species constant {c} for EoS md {md} ({n})")
        return c

    def red_item(eos_id):
        n = item_name(text("Item Names", eos_id))
        if n in ITEM_EOS_TO_RED:
            c = ITEM_EOS_TO_RED[n]
            if c is None:
                note(f"left out: {n} (EoS item {eos_id}, Red has none)")
            elif c != const_name(n, "ITEM_"):
                note(f"stand-in: {n} (EoS item {eos_id}) -> {c}")
            return c, n
        c = const_name(n, "ITEM_")
        if c not in items:
            raise SystemExit(f"no item constant {c} for EoS item {eos_id} ({n}); add it to ITEM_EOS_TO_RED")
        return c, n

    out = []
    w = out.append
    w(f"/* Generated by tools/make_sky_dungeon_floors.py from EoS BALANCE/mappa_s.bin, dungeon {dungeon} "
      f"({dname}) — do not edit. */")
    w(f"#define {name}FloorCount {len(floors)}")
    w("")
    tables = []
    for n, f in enumerate(floors, 1):
        lay = f.layout
        ts = lay.terrain_settings
        flags = (int(ts.has_secondary_terrain) | int(ts.unk1) << 1 | int(ts.generate_imperfect_rooms) << 2
                 | int(ts.unk3) << 3 | int(ts.unk4) << 4 | int(ts.unk5) << 5 | int(ts.unk6) << 6 | int(ts.unk7) << 7)
        props = [lay.structure, lay.room_density & 0xFF, lay.tileset_id, lay.music_id, lay.weather,
                 lay.floor_connectivity, lay.initial_enemy_density & 0xFF, lay.kecleon_shop_chance,
                 lay.monster_house_chance, lay.unused_chance, lay.sticky_item_chance, int(lay.dead_ends),
                 lay.secondary_terrain, flags, int(lay.unk_e), lay.item_density, lay.trap_density,
                 lay.floor_number, lay.fixed_floor_id, lay.extra_hallway_density, lay.buried_item_density,
                 lay.water_density, int(lay.darkness_level), lay.max_coin_amount // 5,
                 lay.kecleon_shop_item_positions, lay.empty_monster_house_chance, 0, 0]
        assert len(props) == 0x1C
        tables.append(dict(props=props, lay=lay))

        # wild Pokémon
        prev = 0
        mons = []
        for m in sorted(f.monsters, key=lambda m: m.md_index):
            weight = m.main_spawn_weight - prev if m.main_spawn_weight else 0
            if m.main_spawn_weight:
                prev = m.main_spawn_weight
            mons.append((species(m.md_index), m.level, weight))
        w(f"static const struct SkySpawn {name}Spawns{n}[] = {{")
        for c, lvl, wt in mons:
            w(f"    {{ {c}, {lvl}, {wt} }},")
        w("};")

        # traps: EoS's cumulative weights -> single weights -> Red's ids,
        # cumulative again in Red's order
        single = {}
        p = 0
        for t, cum in sorted(f.traps.weights.items()):
            if cum and cum != p:
                r = 0 if t == EOS_TRIP_TRAP else t if 1 <= t < RED_TRAPS else None
                if r is None:
                    raise SystemExit(f"{label(n)}: EoS trap {t} has no Red trap")
                single[r] = cum - p
                p = cum
        red = [0] * RED_TRAPS
        a = 0
        for r in sorted(single):
            a += single[r]
            red[r] = a
        tables[-1]["traps"] = red

        # floor items: EoS's weights are cumulative per category (in EoS id
        # order, by EoS's own item categories) -> single weights per Red item
        il = f.floor_items
        guaranteed = []
        item_weights = {}  # category -> {Red item id: weight}
        prev = {}
        for eos_id, cum in sorted(il.items.items()):
            c, iname = red_item(eos_id)
            if cum == GUARANTEED:
                if c is None:
                    note(f"{label(n)}: guaranteed {iname} left out")
                else:
                    guaranteed.append(c)
                continue
            ec = eos_items[eos_id].category
            weight = cum - prev.get(ec, 0)
            prev[ec] = cum
            if c is None or weight <= 0:
                continue
            if cats[red_cat[items[c]]] != ec:
                note(f"{iname}: EoS category {ec}, Red's {c} is {red_cat[items[c]]}")
            item_weights.setdefault(ec, {})
            item_weights[ec][items[c]] = item_weights[ec].get(items[c], 0) + weight
        # categories: EoS's ids are Red's (0 thrown line, 1 thrown arc, 2
        # berries seeds vitamins, 3 food gummies, ... 6 Poké, ... 9 orbs)
        red_cats = [0] * len(cat_by_id)
        cat_weights = {}
        p = 0
        for ec in sorted(il.categories):
            cat_weights[ec] = il.categories[ec] - p
            p = il.categories[ec]
        a = 0
        cat_cum = {}
        for ec in sorted(cat_weights):
            if cat_by_id[ec] != "CATEGORY_POKE" and not item_weights.get(ec):
                note(f"{label(n)}: {cat_by_id[ec]} has no Red items, left out")
                continue
            a += cat_weights[ec]
            cat_cum[ec] = a
        for ec, v in cat_cum.items():
            red_cats[ec] = round(v * 10000 / a)
        item_cum = []
        for ec, ws in item_weights.items():
            if ec not in cat_cum:
                continue
            total = sum(ws.values())
            acc = 0
            for iid in sorted(ws):
                acc += ws[iid]
                item_cum.append((iid, round(acc * 10000 / total)))
        item_cum.sort()
        names = {v: k for k, v in items.items()}
        w(f"static const struct SkyItemWeight {name}Items{n}[] = {{")
        for iid, v in item_cum:
            w(f"    {{ {names[iid]}, {v} }},")
        w("    { 0, 0 },")
        w("};")
        tables[-1]["cats"] = red_cats
        tables[-1]["guaranteed"] = guaranteed

        # a fixed floor: the room, its bosses, a spawn list at their levels
        if lay.fixed_floor_id:
            room, bosses, rows = fixed_floor(rom, cfg, lay.fixed_floor_id, boss_codes, species, note)
            w(f"/* {label(n)}: EoS fixed floor {lay.fixed_floor_id} ({len(rows[0])}x{len(rows)}) in Red's fixedmap "
              f"encoding: # wall, . floor, B boss,")
            w(" * L leader, P partner, 3-6 the other team slots, S the player spawn.")
            for r in rows:
                w(f" *   {r}")
            w(" */")
            w(f"static const u8 {name}Room{n}[] = {{")
            for i in range(0, len(room), 12):
                w("    " + ", ".join(f"0x{b:02x}" for b in room[i:i + 12]) + ",")
            w("};")
            w("/* The bosses (overlay 10's monster spawn stats): species, Red room code, level, HP,")
            w(" * Attack, Sp. Atk, Defense, Sp. Def. */")
            w(f"static const struct SkyBoss {name}Bosses{n}[] = {{")
            for c, e, code, st in bosses:
                w(f"    {{ {c}, {code}, {st.level}, {st.hp}, {st.attack}, {st.special_attack}, "
                  f"{st.defense}, {st.special_defense} }}, /* EoS entity {e} */")
            w("};")
            # the room's species spawn at the level of the floor's spawn list
            # (GetSpawnedMonsterLevel): a list at the bosses' levels
            w(f"static const struct SkySpawn {name}BossSpawns{n}[] = {{")
            share = 10000 // len(bosses)
            for k, (c, e, code, st) in enumerate(bosses):
                w(f"    {{ {c}, {st.level}, {share if k else 10000 - share * (len(bosses) - 1)} }},")
                listed = next((lvl for cc, lvl, _ in mons if cc == c), None)
                if listed is not None and listed != st.level:
                    note(f"{label(n)}: the floor's spawn list has {c} L{listed}; the room's boss is "
                         f"L{st.level} (its spawn stats), which the GBA spawns")
            for c, lvl, wt in mons:
                if wt == 0:
                    w(f"    {{ {c}, {lvl}, 0 }},")
            w("};")
            tables[-1]["fixed"] = len(bosses)

    w("")
    w(f"static const struct SkyFloor {name}Floors[{name}FloorCount] = {{")
    for n, t in enumerate(tables, 1):
        lay = t["lay"]
        w(f"    {{ /* {label(n)}: layout {lay.structure}, rooms {lay.room_density}, connectivity {lay.floor_connectivity}, "
          f"enemies {lay.initial_enemy_density}, items {lay.item_density}, traps {lay.trap_density}, "
          f"water {lay.water_density}, darkness {int(lay.darkness_level)}, weather {lay.weather}, "
          f"EoS tileset {lay.tileset_id}, music {lay.music_id}, coins {lay.max_coin_amount} */")
        w("        .props = { " + ", ".join(str(b) for b in t["props"]) + " },")
        w(f"        .spawns = {name}Spawns{n}, .spawnCount = ARRAY_COUNT({name}Spawns{n}),")
        w("        .traps = { " + ", ".join(str(v) for v in t["traps"]) + " },")
        w("        .categories = { " + ", ".join(str(v) for v in t["cats"]) + " },")
        w(f"        .items = {name}Items{n},")
        g = t["guaranteed"]
        if len(g) > 2:
            raise SystemExit(f"{label(n)}: {len(g)} guaranteed items (SkyFloor holds 2)")
        w("        .guaranteed = { " + (", ".join(g) if g else "0") + " },")
        if "fixed" in t:
            w(f"        .room = {name}Room{n}, .bosses = {name}Bosses{n}, .bossCount = {t['fixed']},")
            w(f"        .bossSpawns = {name}BossSpawns{n}, .bossSpawnCount = ARRAY_COUNT({name}BossSpawns{n}),")
        w("    },")
    w("};")
    if notes:
        w("")
        w("/* Approximations:")
        for s in notes:
            w(f" *  - {s}")
        w(" */")
    print("\n".join(out))
    return 0


if __name__ == "__main__":
    sys.exit(main())
