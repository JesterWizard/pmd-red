#!/usr/bin/env python3
"""Chapter 3's free roam on gs181 (documentation/Features/SkyChapter3.md, "Free
roam"): writes events/sky/draft/ch3/free_roam.scene, groups 0-12 of chapter 3's
station file, which tools/event_editor/ch3/station.py puts in place of the
draft's placeholders.

    python3 tools/event_editor/ch3/free_roam.py EOS.nds

* Group 0 is the hub: every chapter-3 map runs gs181, and EXECUTE_MAP_VAR (a map
  change, Continue, the end of an event) runs group 0's enter script, which jumps
  to the map's own group (by GROUND_ENTER).
* Groups 1-12 are the maps EoS's chapter-3 free roam reaches: an enter script
  that loads the map, its signs and shopkeepers (sector 1), the townsfolk of the
  scenario (EoS's um03 station sectors, here sectors 2-6), the hero and the
  partner at the entry the player came by (GROUND_ENTER_LINK, sectors 10+), the
  exits (events of sector 0) and the story triggers of the scenario (events of
  the scenario's sector).
* What the NPCs, signs and shopkeepers say is translated from EoS's own
  scripts (um03NN, enterNN: the branch EoS takes in each scenario of the
  chapter) by tools/event_editor/eos_import.py's translator.

The layout (positions, exits, entries) is EoS's (enter.sse / um03.sss), as
listed in MAPS below. The ROM is only read.
"""
from __future__ import annotations

import re
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
sys.path.insert(0, str(HERE.parent))
import eos_import as E  # noqa: E402
import exps as X  # noqa: E402

OUT = ROOT / "events/sky/draft/ch3/free_roam.scene"

# chapter 3's free-roam scenarios and the sets EoS's stations tell apart
SCN = [(4, 0), (4, 1), (4, 2), (4, 3), (4, 4), (4, 5), (4, 6)]

# ---------------------------------------------------------------- the maps
# links: entry number -> (hero x, y, facing), (partner x, y). Link 0 is where the
# last scene left them (each event says which).
# exits: (x, y, w, h, script): a GETOUT script (`to MAP LINK` or a named script).
# signs: (x, y, w, h, level, enter script).
# objects: (kind, x, y).
# always: (EoS actor, x, y, facing, talk source or None).
# sets: scenario set -> dict(npcs=[as always], triggers=[(x, y, w, h, event)]).
TOWN1, TOWN2, OPEN, FAIL, MORNING = "town1", "town2", "open", "fail", "morning"
SET_OF = {(4, 0): MORNING, (4, 1): TOWN1, (4, 2): TOWN2, (4, 3): OPEN, (4, 4): OPEN, (4, 5): FAIL, (4, 6): FAIL}

MAPS = [
    dict(group=1, name="b2f", map="SKY_GUILD_B2F_CH3", level="G01P04A", bgm="SKY_WIGGLYTUFFS_GUILD",
         what="the guild's B2F (EoS G01P04A, station UM03)",
         links={0: ((60, 31.5, "WEST"), (60, 34.5)), 1: ((40.5, 24.5, "SOUTH"), (40.5, 21.5)),
                2: ((73, 35.5, "WEST"), (77, 35.5)), 3: ((52.5, 27.5, "SOUTH"), (52.5, 24.5)),
                4: ((8, 35.5, "EAST"), (4, 35.5))},
         exits=[(39, 11, 3, 2, "to SKY_GUILD_B1F_CH3 2"), (0, 31, 2, 7, "to SKY_GUILD_MESS_HALL_CH3 1"),
                (50, 21, 5, 2, "to SKY_GUILD_WIGGLYTUFF_CH3 1"), (79, 31, 2, 7, "to SKY_GUILD_CREW_ROOM_CH3 1")],
         signs=[(4.5, 32.5, 5, 1, "G01P04A", "enter24"), (76.5, 32.5, 5, 1, "G01P04A", "enter25")],
         always=[("NPC_GUREGGURU", 28.5, 27.5, "SOUTH", ("G01P04A", "enter05"))],
         sets={MORNING: dict(npcs=[("NPC_PERAPPU", 57, 27.5, "SOUTH", None)],
                             triggers=[(66, 28, 2, 10, "SKY_CH3_TOWN_EVENT"), (50, 28, 2, 10, "SKY_CH3_TOWN_EVENT"),
                                       (51, 27, 16, 2, "SKY_CH3_TOWN_EVENT"), (51, 37, 16, 2, "SKY_CH3_TOWN_EVENT")]),
               OPEN: dict(npcs=[("NPC_DOGOOMU", 27, 38.5, "SOUTHWEST", ("G01P04A", "um0306")),
                                ("NPC_PERAPPU", 57, 27.5, "SOUTH", ("G01P04A", "um0307"))]),
               FAIL: dict(npcs=[("NPC_DOGOOMU", 27, 38.5, "SOUTHWEST", ("G01P04A", "um0308")),
                                ("NPC_PERAPPU", 57, 27.5, "SOUTH", ("G01P04A", "um0309"))])}),
    dict(group=2, name="b1f", map="SKY_GUILD_B1F_CH3", level="G01P03A", bgm="SKY_WIGGLYTUFFS_GUILD",
         what="the guild's B1F (EoS G01P03A, station UM03): Bidoof waits by the Outlaw Notice Board",
         links={1: ((43, 23, "SOUTH"), (40, 23)), 2: ((43, 23, "SOUTH"), (40, 23))},
         exits=[(40, 14, 3, 2, "to SKY_GUILD_1F_CH3 2"), (44, 21, 4, 1, "to SKY_GUILD_B2F_CH3 1")],
         signs=[(31.5, 22.5, 5, 5, "G01P03A", "enter11"), (55.5, 22.5, 5, 5, "G01P03A", "enter12"),
                (22.5, 31.5, 5, 1, "G01P03A", "enter13")],
         sets={OPEN: dict(npcs=[("NPC_BIPPA", 58.5, 25.5, "SOUTH", ("G01P03A", "m03a0501")),
                                ("NPC_TOGEPII", 31, 32.5, "NORTH", ("G01P03A", "um0305")),
                                ("NPC_NYOROTONO", 34, 29.5, "SOUTHWEST", ("G01P03A", "um0306")),
                                ("NPC_REDIBA", 28, 29.5, "SOUTHEAST", ("G01P03A", "um0307"))]),
               FAIL: dict(npcs=[("NPC_KIMAWARI", 39, 33.5, "NORTH", ("G01P03A", "um0308")),
                                ("NPC_BIPPA", 50, 34.5, "SOUTH", ("G01P03A", "um0310")),
                                ("NPC_TOGEPII", 31, 32.5, "NORTH", ("G01P03A", "um0312")),
                                ("NPC_NYOROTONO", 34, 29.5, "SOUTHWEST", ("G01P03A", "um0313")),
                                ("NPC_REDIBA", 28, 29.5, "SOUTHEAST", ("G01P03A", "um0314"))])}),
    dict(group=3, name="f1", map="SKY_GUILD_1F_CH3", level="G01P02A", bgm="SKY_WIGGLYTUFFS_GUILD",
         what="the guild's 1F (EoS G01P02A)",
         links={1: ((25.5, 26.5, "NORTH"), (25.5, 29.5)), 2: ((28, 23.5, "SOUTH"), (23.5, 23.5))},
         exits=[(21, 31, 9, 2, "to SKY_GUILD_ENTRANCE_DAY 1"), (24, 20, 3, 2, "to SKY_GUILD_B1F_CH3 1")],
         signs=[(19.5, 24.5, 5, 1, "G01P02A", "enter07"), (33.5, 24.5, 5, 1, "G01P02A", "enter08")]),
    dict(group=4, name="gate", map="SKY_GUILD_ENTRANCE_DAY", level="G01P01A", bgm="SKY_WIGGLYTUFFS_GUILD",
         what="the guild's entrance by day (EoS G01P01A)",
         links={1: ((30, 22.5, "SOUTH"), (30, 19.5)), 2: ((30, 44.5, "NORTH"), (30, 47.5))},
         exits=[(27, 17, 6, 2, "to SKY_GUILD_1F_CH3 1"), (26, 49, 8, 2, "to SKY_CROSSROADS 1")],
         objects=[("SKY_OBJ_TOTEM_POLE_1", 18, 22.5), ("SKY_OBJ_TOTEM_POLE_2", 42, 22.5)]),
    dict(group=5, name="cross", map="SKY_CROSSROADS", level="P01P01A", bgm="SKY_TREASURE_TOWN",
         what="the crossroads (EoS P01P01A, station UM03)",
         links={1: ((27, 10.5, "SOUTH"), (27, 7.5)), 2: ((27, 49.5, "NORTH"), (27, 52.5)),
                3: ((9, 24.5, "EAST"), (5, 24.5)), 4: ((45, 24.5, "WEST"), (49, 24.5))},
         exits=[(22, 2, 10, 2, "to SKY_GUILD_ENTRANCE_DAY 2"), (5, 54, 45, 3, "to SKY_BEACH_PATH 2"),
                (0, 18, 3, 10, "to SKY_TREASURE_TOWN_SQUARE 1"), (51, 17, 3, 14, "exploration")],
         signs=[(17.5, 18.5, 5, 1, "P01P01A", "enter24"), (21.5, 28.5, 3, 1, "P01P01A", "enter41")],
         sets={FAIL: dict(npcs=[("NPC_HEIGANI", 32, 20.5, "SOUTH", ("P01P01A", "um0301"))])}),
    dict(group=6, name="path", map="SKY_BEACH_PATH", level="P01P02A", bgm="SKY_TREASURE_TOWN",
         what="the path down to the beach (EoS P01P02A)",
         links={1: ((9, 30.5, "EAST"), (5, 30.5)), 2: ((27, 9.5, "SOUTH"), (27, 6.5))},
         exits=[(0, 21, 3, 20, "to SKY_BEACH_DAY_CH3 1"), (17, 0, 20, 4, "to SKY_CROSSROADS 2")]),
    dict(group=7, name="beach", map="SKY_BEACH_DAY_CH3", level="D01P11A", bgm=None,
         what="the beach (EoS D01P11A: chapter 1's map)",
         links={1: ((91, 27.5, "WEST"), (95, 27.5))},
         exits=[(97, 19, 2, 15, "to SKY_BEACH_PATH 1"), (6, 20, 6, 6, "beach_cave")]),
    dict(group=8, name="square", map="SKY_TREASURE_TOWN_SQUARE", level="T01P01A", bgm="SKY_TREASURE_TOWN",
         what="Treasure Town, the square (EoS T01P01A, station UM03)",
         links={1: ((76, 26.5, "WEST"), (80, 26.5)), 2: ((8, 26.5, "EAST"), (4, 26.5)),
                5: ((48, 24.5, "WEST"), (48, 27.5)),      # after m03a0109
                6: ((72, 28.5, "SOUTH"), (72, 26.5)),     # after m03a0201
                7: ((44, 24.5, "EAST"), (40, 24.5))},     # after m03a0403
         exits=[(82, 21, 2, 13, "to SKY_CROSSROADS 3"), (0, 21, 2, 10, "to SKY_TREASURE_TOWN_WEST 1"),
                (59, 41, 6, 2, "dojo")],
         signs=[(14.5, 22.5, 3, 1, "T01P01A", "enter19"), (74.5, 22.5, 3, 1, "T01P01A", "enter20")],
         objects=[("SKY_OBJ_TOTEM_POLE_2", 73, 35.5), ("SKY_OBJ_TOTEM_POLE_4", 77, 35.5),
                  ("SKY_OBJ_TOTEM_POLE_3", 81, 35.5)],
         always=[("NPC_YOMAWARU", 65, 20.5, "SOUTH", ("T01P01A", "enter05"))],
         sets={TOWN1: dict(npcs="folk", triggers=[(80, 21, 2, 15, "SKY_CH3_DETOUR_EVENT")]),
               TOWN2: dict(npcs="folk+", triggers=[(34, 16, 2, 15, "SKY_CH3_VISION_EVENT")]),
               OPEN: dict(npcs="folk"),
               FAIL: dict(npcs=[("NPC_BANEBUU", 56, 23.5, "SOUTH", ("T01P01A", "um0314")),
                                ("NPC_POPPO", 47, 34.5, "NORTHEAST", ("T01P01A", "um0316")),
                                ("NPC_TANEBOO", 50, 32.5, "SOUTHWEST", ("T01P01A", "um0317")),
                                ("NPC_OOSUBAME", 26, 29.5, "WEST", ("T01P01A", "um0318")),
                                ("NPC_KEMUSSO", 22, 29.5, "EAST", ("T01P01A", "um0319"))])}),
    dict(group=9, name="west", map="SKY_TREASURE_TOWN_WEST", level="T01P02A", bgm="SKY_TREASURE_TOWN",
         what="Treasure Town, the west side (EoS T01P02A, station UM03): Kecleon Market, Kangaskhan Storage",
         links={1: ((61, 26.5, "WEST"), (65, 26.5)), 2: ((8, 26.5, "EAST"), (4, 26.5)),
                5: ((43, 24.5, "EAST"), (39, 26.5))},     # after m03d0314
         exits=[(67, 21, 2, 10, "to SKY_TREASURE_TOWN_SQUARE 2"), (0, 21, 2, 13, "sharpedo")],
         signs=[(13.5, 22.5, 3, 1, "T01P02A", "enter16"), (51.5, 22.5, 3, 1, "T01P02A", "enter17")],
         objects=[("SKY_OBJ_TOTEM_POLE_2", 3, 35.5), ("SKY_OBJ_TOTEM_POLE_4", 7, 35.5),
                  ("SKY_OBJ_TOTEM_POLE_3", 11, 35.5)],
         always=[("NPC_GARUURA", 22.5, 20.5, "SOUTH", ("T01P02A", "enter10")),
                 ("NPC_KAKUREON2", 43.5, 20.5, "SOUTH", ("T01P02A", "enter11")),
                 ("NPC_KAKUREON1", 40.5, 20.5, "SOUTH", ("T01P02A", "enter12"))],
         sets={TOWN1: dict(npcs="folk"), TOWN2: dict(npcs="folk"), OPEN: dict(npcs="folk"),
               FAIL: dict(npcs=[("NPC_YARUKIMONO", 23, 28.5, "EAST", ("T01P02A", "um0305")),
                                ("NPC_KAGEBOUZU", 12, 28.5, "WEST", ("T01P02A", "um0307")),
                                ("NPC_YAMIKARASU", 8, 28.5, "EAST", ("T01P02A", "um0308"))])}),
    dict(group=10, name="wiggly", map="SKY_GUILD_WIGGLYTUFF_CH3", level="G01P05A", bgm="SKY_WIGGLYTUFFS_GUILD",
         what="Wigglytuff's room (EoS G01P05A, station UM03)",
         links={1: ((25.5, 38.5, "NORTH"), (25.5, 41.5))},
         exits=[(18, 43, 15, 2, "to SKY_GUILD_B2F_CH3 3")],
         sets={OPEN: dict(npcs=[("NPC_PUKURIN", 25.5, 24.5, "SOUTH", ("G01P05A", "um0301"))]),
               FAIL: dict(npcs=[("NPC_PUKURIN", 25.5, 24.5, "SOUTH", ("G01P05A", "um0302"))])}),
    dict(group=11, name="mess", map="SKY_GUILD_MESS_HALL_CH3", level="G01P06A", bgm="SKY_WIGGLYTUFFS_GUILD",
         what="the mess hall by day (EoS G01P06A, station UM03; shown on chapter 2's g01p06b)",
         links={1: ((53, 28.5, "WEST"), (57, 28.5))},
         exits=[(61, 25, 2, 7, "to SKY_GUILD_B2F_CH3 4")],
         signs=[(58.5, 26.5, 5, 1, "G01P06A", "enter04")],
         sets={OPEN: dict(npcs=[("NPC_CHIRIIN", 44, 25.5, "SOUTH", ("G01P06A", "um0301"))]),
               FAIL: dict(npcs=[("NPC_CHIRIIN", 44, 25.5, "SOUTH", ("G01P06A", "um0302"))])}),
    dict(group=12, name="crew", map="SKY_GUILD_CREW_ROOM_CH3", level="G01P07A", bgm="SKY_WIGGLYTUFFS_GUILD",
         what="the crew room (EoS G01P07A): the morning starts here, the beds save",
         links={1: ((8, 22.5, "EAST"), (4, 22.5)), 2: ((25.5, 23, "SOUTH"), (19.5, 23))},
         exits=[(0, 19, 2, 7, "crew_exit")],
         signs=[(7.5, 21.5, 5, 1, "G01P07A", "enter07")],
         # EoS enter.sse layer 5: stepping onto the beds saves (enter04); not when the morning
         # starts on them (entry 2)
         link_events={1: [(24, 21, 3, 3, "G01P07A", "enter04")]}),
]
# Treasure Town's townsfolk at (4, 1)-(4, 4) (EoS T01P01A / T01P02A UM03 sector 10)
FOLK = {
    "T01P01A": [("NPC_KIMAWARI", 41, 46.5, "SOUTH", ("T01P01A", "um0306")),
                ("NPC_HEIGANI", 41, 35.5, "NORTHEAST", ("T01P01A", "um0308")),
                ("NPC_POPPO", 47, 34.5, "NORTHEAST", ("T01P01A", "um0310")),
                ("NPC_TANEBOO", 50, 32.5, "SOUTHWEST", ("T01P01A", "um0311")),
                ("NPC_OOSUBAME", 26, 29.5, "WEST", ("T01P01A", "um0312")),
                ("NPC_KEMUSSO", 22, 29.5, "EAST", ("T01P01A", "um0313"))],
    "T01P02A": [("NPC_YARUKIMONO", 20, 28.5, "EAST", ("T01P02A", "um0301")),
                ("NPC_KAGEBOUZU", 12, 28.5, "WEST", ("T01P02A", "um0303")),
                ("NPC_YAMIKARASU", 8, 28.5, "EAST", ("T01P02A", "um0304"))],
}
# (4, 2): Azurill, Drowzee and Marill in the square (EoS T01P01A UM03 sector 3: no talk)
TOWN2_EXTRA = [("NPC_RURIRI", 47, 17.5, "WEST", None), ("NPC_SURIIPU", 43, 18.5, "EAST", None),
               ("NPC_MARIRU", 47, 20.5, "WEST", None)]

# shopkeepers who stand inside their building's doorway, which the map's front layer
# (EoS's upper layer) draws over: drawn over it (EoS shows them)
FRONT = {"NPC_GARUURA"}

# shopkeepers behind a counter: (rows down to the counter's front, its width in tiles)
COUNTERS = {"NPC_KAKUREON1": (2, 2), "NPC_KAKUREON2": (2, 2), "NPC_GARUURA": (2, 2), "NPC_YOMAWARU": (2, 2)}

# the scripts the exits run that are not a plain map change
SPECIAL_EXITS = {
    # P01P01A enter04: before (4, 5) the partner holds the team back (EoS's lines); from
    # (4, 5) EoS opens its world map: here straight to Mt. Bristle (the only place to go)
    "exploration": "cross_exploration",
    "beach_cave": "beach_cave",       # D01P11A enter02: Beach Cave (not in the demo)
    "dojo": "square_dojo",            # T01P01A enter03: Marowak Dojo (its inside is not converted)
    "sharpedo": "west_sharpedo",      # T01P02A enter02: Sharpedo Bluff (not converted)
    "crew_exit": "crew_exit",         # G01P07A enter01: the morning address, or B2F
}

# ---------------------------------------------------------------- talk scripts


def find_label(stmts, name):
    """(the list holding label `name`, its index) in a statement tree."""
    for i, s in enumerate(stmts):
        if s.kind == "label" and s.name == name:
            return stmts, i
        for b in [s.body] + [b for _, b in s.cases if isinstance(b, list)] + [b for _, b in s.elifs] + \
                ([s.orelse] if s.orelse else []):
            if b:
                r = find_label(b, name)
                if r:
                    return r
    return None


def scn_eval(c, sc):
    """A condition on scn($SCENARIO_MAIN) at scenario sc: True / False, None if it is not one."""
    if c is None:
        return None
    if c[0] == "bin" and c[1] in ("||", "&&"):
        a, b = scn_eval(c[2], sc), scn_eval(c[3], sc)
        if a is None or b is None:
            return None
        return (a or b) if c[1] == "||" else (a and b)
    if c[0] == "bin" and c[2][0] == "scn" and c[2][1][1].lstrip("$") == "SCENARIO_MAIN" and c[3][0] == "list":
        v = tuple(x[1] for x in c[3][1])
        return {">=": sc >= v, "==": sc == v, "<": sc < v, ">": sc > v, "<=": sc <= v, "!=": sc != v}[c[1]]
    if c[0] == "bin" and c[2][0] == "scn":      # another scenario (SIDE): its first stage
        v = tuple(x[1] for x in c[3][1])
        return {">=": (0, 0) >= v, "==": (0, 0) == v, "<": (0, 0) < v, ">": (0, 0) > v, "<=": (0, 0) <= v}[c[1]]
    if c[0] == "index" and c[1][0] == "var" and c[1][1].lstrip("$") in ("SCENARIO_TALK_BIT_FLAG", "SCENARIO_MAIN_BIT_FLAG"):
        return False   # EoS's talk flags: the first time (the GBA keeps none)
    return None


def specialise(stmts, routine, sc, depth=0):
    """The statements EoS runs at scenario sc: scenario ifs / switches decided, the special
    episodes' switch on its default (the story), jumps followed to their label."""
    out = []
    for s in stmts:
        if depth > 8:
            break
        if s.kind == "if":
            taken = None
            for c, b in [(s.cond, s.body)] + list(s.elifs):
                r = scn_eval(c, sc)
                if r is None:
                    out.append(s)
                    taken = "kept"
                    break
                if r:
                    taken = b
                    break
            if taken == "kept":
                continue
            out += specialise(taken if taken is not None else (s.orelse or []), routine, sc, depth)
            if ends_flow(out):
                return out
            continue
        if s.kind == "switch" and s.cond and s.cond[0] == "var" and s.cond[1].lstrip("$") == "EXECUTE_SPECIAL_EPISODE_TYPE":
            body = next((b for v, b in s.cases if "default" in v), [])
            out += specialise(body, routine, sc, depth)
            if ends_flow(out):
                return out
            continue
        if s.kind == "switch" and s.cond and s.cond[0] == "index" and s.cond[1][0] == "scn":
            k = sc[E.ival(s.cond[2])]
            body = None
            for v, b in s.cases:
                for x in v:
                    if x == "default":
                        continue
                    if (x[0] == "num" and x[1] == k) or (x[0] == "cmp" and eval_cmp(x, k)):
                        body = b
                if body is not None:
                    break
            if body is None:
                body = next((b for v, b in s.cases if "default" in v), [])
            out += specialise(body, routine, sc, depth)
            if ends_flow(out):
                return out
            continue
        if s.kind == "jump":
            hit = find_label(routine.body, s.name)
            if hit:
                lst, i = hit
                out += specialise(lst[i + 1:], routine, sc, depth + 1)
            return out
        if s.kind == "label":
            continue
        if s.kind == "ctrl" and s.name in ("break", "continue"):
            continue
        out.append(s)
        if s.kind == "ctrl" and s.name in ("end", "hold", "return"):
            return out
    return out


def eval_cmp(x, k):
    op, v = x[1], E.ival(x[2])
    return {"==": k == v, ">=": k >= v, "<=": k <= v, "<": k < v, ">": k > v}.get(op, False)


def ends_flow(stmts):
    return bool(stmts) and (stmts[-1].kind == "ctrl" and stmts[-1].name in ("end", "hold", "return")
                            or (stmts[-1].kind == "call" and stmts[-1].name == "JumpCommon"))


# the free roam's talk: one script binds the names it speaks with in slots 7-9 (no two
# talk scripts run at once)
TALK_SLOTS = ["TALK_A", "TALK_B", "TALK_C"]
DROP_CALLS = {"SetAnimation", "Turn2DirectionLives", "Turn2Direction", "WaitExecuteLives", "debug_Print",
              "supervision_Suspend", "WaitEffect"}


class Talk:
    def __init__(self, rom):
        self.rom = rom
        self.cache = {}
        self.todo = []

    def load(self, level, name):
        key = (level, name)
        if key not in self.cache:
            from skytemple_files.script.ssb.handler import SsbHandler
            ssb = SsbHandler.deserialize(self.rom.rom.getFileByName(f"SCRIPT/{level}/{name}.ssb"), self.rom.cfg)
            self.cache[key] = ssb.to_explorerscript()[0]
        return self.cache[key]

    def script(self, sname, level, name, npc, counter=False):
        """A free-roam talk script (`script2` of an actor or object) from EoS's level/name.
        counter: the script of the counter in front of shopkeeper npc (an invisible object)."""
        text = self.load(level, name)
        mod = X.parse(text)
        r0 = mod.routine("0")
        bodies = {}
        for sc in SCN:
            body = specialise(r0.body, r0, sc)
            key = "\n".join(s.src for s in body)
            bodies.setdefault(key, (body, []))[1].append(sc)
        out = [f"script {sname}   # EoS {level} {name}" + (f" ({npc})" if npc else ""), "    DEBUGINFO"]
        if npc and counter:
            kind = E.ACTORS.get(npc, (None, f"SKY_LIVES_{npc}"))[1]
            out.append(f"    UPDATE_NAME kind=ACTOR_TYPE who=TALK_A id={kind}   # the shopkeeper behind the counter")
        elif npc:
            out += ["    SELECT_ANIMATION 2", "    UPDATE_NAME kind=ACTOR_SELF who=TALK_A id=0x0"]
        out.append("    WAIT 1")
        if (level, name) == ("G01P07A", "enter04"):
            # the beds save (EoS sets $SCENARIO_MAIN_BIT_FLAG[7]): Continue comes back to the bed
            out.append("    UPDATE_VARINT CALC_SET GROUND_ENTER_LINK 2   # Continue: the crew room, at the bed")
        groups = list(bodies.values())
        if len(groups) > 1:
            for k, (_, scs) in enumerate(groups):
                for a, b in scs:
                    out.append(f"    JUMPIF_SCENE_EQ SCENARIO_MAIN {a} {b} {900 + k}")
            out.append("    JUMP_SCRIPT END_TALK")
        for k, (body, scs) in enumerate(groups):
            if len(groups) > 1:
                out.append(f"  LABEL {900 + k}   # scenario {', '.join(f'({a}, {b})' for a, b in scs)}")
            out += self.translate(body, level, name, npc)
        out.append("end")
        return out

    def translate(self, body, level, name, npc):
        ssa = dict(level=level, script=name, layers=[dict(
            actors=[dict(name=npc, dir=None, script=-1, x=0, y=0, xo=0, yo=0)] if npc else [],
            objects=[], performers=[])])
        tr = E.Translator("def 0 {\n}\n", ssa, chapter=3)
        me = tr.ents[0] if tr.ents else None
        if me is not None:
            me.spawned = True
        keep = []
        for s in body:
            if s.kind == "call" and s.name in DROP_CALLS and (s.target is None or not me or
                                                             E.re.sub(r"^ACTOR_", "", str(s.target[1])) != me.eos):
                continue
            if s.kind == "call" and s.name == "ExecuteCommon" and s.args and "LIVES_REPLY" in str(s.args[0]):
                continue      # the NPC turns to the player: the GBA's talk does it
            if s.kind == "call" and s.name == "JumpCommon":
                break         # CORO_END_TALK: the script ends with JUMP_SCRIPT END_TALK
            if s.kind == "ctrl" and s.name in ("end", "hold", "return"):
                break
            keep.append(s)
        rows = []
        tr.block(keep, me, rows)
        lines = []
        names = {}
        for r in rows:
            if isinstance(r, tuple):
                lines.append(f"  LABEL {r[1]}")
                continue
            if r is None or not isinstance(r, str):
                continue
            if r.startswith("# TODO eos"):
                self.todo.append(f"{level} {name}: {r}")
            if r.startswith("RET"):
                continue
            lines.append("    " + r)
            if r.startswith("EXECUTE_FUNCTION"):
                lines.append("    HALT   # the event takes over")
                break
        # names: the speaker itself is TALK_A, the hero and the partner keep theirs, others B, C
        out = []
        own = me.npc if me is not None else None
        used = []
        for ln in lines:
            for w in re.findall(r"\bwho=([A-Z]\w*)", ln) + re.findall(r"@([A-Z]\w*)@", ln):
                if w not in ("PLAYER", "PARTNER") and w != own and w not in used:
                    used.append(w)
        slot = {own: "TALK_A"} if own else {}
        for i, w in enumerate(used):
            slot[w] = TALK_SLOTS[1 + i] if 1 + i < len(TALK_SLOTS) else "TALK_C"
        bind = []
        for w in used:
            kind = next((k for _, (n, k) in E.ACTORS.items() if n == w), f"SKY_LIVES_{w}")
            bind.append(f"    UPDATE_NAME kind=ACTOR_TYPE who={slot[w]} id={kind}   # the text names it")
        for n in sorted(getattr(tr, "named", set())):
            if n in ("PLAYER", "PARTNER"):
                bind.append(f"    UPDATE_NAME kind=ACTOR_TYPE who={n} id={'0x21' if n == 'PLAYER' else '0x22'}")
        for ln in lines:
            ln = re.sub(r"\bwho=([A-Z]\w*)", lambda m: f"who={slot.get(m.group(1), m.group(1))}", ln)
            ln = re.sub(r"@([A-Z]\w*)@", lambda m: "@" + slot.get(m.group(1), m.group(1)) + "@", ln)
            out.append(ln)
        return bind + out + ["    JUMP_SCRIPT END_TALK"]


# ---------------------------------------------------------------- the groups


def tiles(v):
    return str(v)


def build(rom) -> str:
    talk = Talk(rom)
    out = ["# " + "-" * 72,
           "# Chapter 3's free roam (made by tools/event_editor/ch3/free_roam.py from EoS's",
           "# enter.sse, um03 stations and talk scripts; SkyChapter3.md, \"Free roam\").",
           "# " + "-" * 72, "",
           "```c",
           "/* the free roam's talk scripts bind their speakers here (no two run at once) */",
           "#define NPC_TALK_A 9", "#define NPC_TALK_B 8", "#define NPC_TALK_C 7",
           "```", ""]
    # the hero and the partner, the townsfolk, the exits that are not a plain map change
    out += SPECIAL_SCRIPTS.split("\n")
    out.append("")
    # group 0: the hub
    out += ["script g0_s0_station control=ENTER_CONTROL type=SCRIPT_TYPE_01   # every chapter-3 map's enter: its group",
            "    DEBUGINFO",
            "    CJUMP_VAR GROUND_ENTER"]
    for m in MAPS:
        out.append(f"    COND_EQUAL MAP_{m['map']} {m['group']}")
    out += ["    JUMP_STATION 8 0   # (Treasure Town)"]
    for m in MAPS:
        out += [f"  LABEL {m['group']}", f"    JUMP_STATION {m['group']} 0   # {m['name']}"]
    out += ["end", ""]
    sectors = {0: ["    sector station=0"]}
    for m in MAPS:
        g = m["group"]
        name = m["name"]
        secs = []          # (number, text)
        evts0 = []
        # exits
        for i, (x, y, w, h, what) in enumerate(m.get("exits", [])):
            sn = f"g{g}_exit{i}"
            if what.startswith("to "):
                _, target, link = what.split()
                out += [f"script {sn} control=GETOUT_NORMAL type=SCRIPT_TYPE_02   # to {target} (entry {link})",
                        "    DEBUGINFO", f"    SKY_GOTO_MAP map=MAP_{target} link={link}", "    HALT", "end", ""]
            else:
                sn = f"g{g}_{SPECIAL_EXITS[what]}"
            evts0.append((x, y, w, h, sn))
        # signs (talk scripts on invisible objects)
        objs = []
        for i, (x, y, w, h, lv, sc) in enumerate(m.get("signs", [])):
            sn = f"g{g}_sign_{sc}"
            out += talk.script(sn, lv, sc, None) + [""]
            objs.append(f"    object kind=15 w={w} h={h} x={x} y={y} script2={sn}   # EoS {lv} {sc}")
        for kind, x, y in m.get("objects", []):
            objs.append(f"    object kind={kind} w=2 h=1 x={x} y={y} script=g{g}_obj   # EoS enter.sse")
        if m.get("objects"):
            out += [f"script g{g}_obj", "    DEBUGINFO", "    HALT", "end", ""]
        acts = []
        for i, (eos, x, y, f, src) in enumerate(m.get("always", [])):
            acts.append(actor_row(talk, out, g, f"a{i}", eos, x, y, f, src))
            if eos in COUNTERS and src:
                # EoS talks to a shopkeeper across the counter; the GBA's talk reaches the next
                # tile only: an invisible object on the counter takes the talk
                dy, w = COUNTERS[eos]
                sn = f"g{g}_counter_{src[1]}"
                out += talk.script(sn, src[0], src[1], eos, counter=True) + [""]
                objs.append(f"    object kind=15 w={w} h=1 x={x} y={y + dy} script2={sn}   # {eos}'s counter")
        s1 = "    sector"
        if acts:
            out += [f"actors g{g}_s1_lives"] + acts + ["end", ""]
            s1 += f" actors=g{g}_s1_lives"
        if objs:
            out += [f"objects g{g}_s1_objs"] + objs + ["end", ""]
            s1 += f" objects=g{g}_s1_objs"
        # scenario sets: sectors 2..
        setsec = {}
        for k, (setname, spec) in enumerate(m.get("sets", {}).items()):
            sec = 2 + k
            setsec[setname] = sec
            npcs = spec.get("npcs", [])
            if npcs in ("folk", "folk+"):
                npcs = FOLK[m["level"]] + (TOWN2_EXTRA if npcs == "folk+" else [])
            rows = [actor_row(talk, out, g, f"{setname}{i}", *n) for i, n in enumerate(npcs)]
            st = "    sector"
            if rows:
                out += [f"actors g{g}_s{sec}_lives"] + rows + ["end", ""]
                st += f" actors=g{g}_s{sec}_lives"
            if spec.get("triggers"):
                evs = sorted({e for *_, e in spec["triggers"]})
                for e in evs:
                    out += [f"script g{g}_{e.lower()} control=GETOUT_NORMAL type=SCRIPT_TYPE_02   # EoS: the coroutine starts",
                            "    DEBUGINFO", f"    EXECUTE_FUNCTION {e}", "    HALT", "end", ""]
                out.append("```c")
                out.append(f"/* EoS {m['level']} UM03: the story's triggers ({setname}) */")
                out.append(f"static const struct GroundEventData s_gs181_g{g}_s{sec}_evts[] = {{")
                for x, y, w, h, e in spec["triggers"]:
                    out.append(f"    {{ {w}, {h}, 0, 0, {{ {x}, {y}, 0, 0 }}, &s_gs181_g{g}_{e.lower()}_sref }},")
                out += ["};", "```", ""]
                st += f" events=g{g}_s{sec}_evts"
            secs.append((sec, st))
        # entries: sectors 10..
        linksec = {}
        for k, (link, ((hx, hy, hf), (px, py))) in enumerate(sorted(m["links"].items())):
            sec = 10 + k
            linksec[link] = sec
            out += [f"actors g{g}_s{sec}_lives",
                    f"    actor kind=0 facing={hf} x={hx} y={hy} script=ch3_hero   # entry {link}",
                    f"    actor kind=4 facing={hf} x={px} y={py} script=ch3_partner",
                    "end", ""]
            evs = m.get("link_events", {}).get(link, [])
            if evs:
                for x, y, w, h, lv, sc in evs:
                    out += [ln.replace(f"script g{g}_ev_{sc}   #", f"script g{g}_ev_{sc} control=GETOUT_NORMAL type=SCRIPT_TYPE_02   #")
                            for ln in talk.script(f"g{g}_ev_{sc}", lv, sc, None)] + [""]
                out.append("```c")
                out.append(f"/* EoS {m['level']} enter.sse: the events at entry {link} */")
                out.append(f"static const struct GroundEventData s_gs181_g{g}_s{sec}_evts[] = {{")
                for x, y, w, h, lv, sc in evs:
                    out.append(f"    {{ {w}, {h}, 0, 0, {{ {x}, {y}, 0, 0 }}, &s_gs181_g{g}_ev_{sc}_sref }},")
                out += ["};", "```", ""]
                secs.append((sec, f"    sector events=g{g}_s{sec}_evts actors=g{g}_s{sec}_lives"))
            else:
                secs.append((sec, f"    sector actors=g{g}_s{sec}_lives"))
            m.setdefault("_linkev", {})[link] = bool(evs)
        # the exits
        out.append("```c")
        out.append(f"/* EoS {m['level']} enter.sse: the exits */")
        out.append(f"static const struct GroundEventData s_gs181_g{g}_s0_evts[] = {{")
        for x, y, w, h, sn in evts0:
            out.append(f"    {{ {w}, {h}, 0, 0, {{ {x}, {y}, 0, 0 }}, &s_gs181_{sn}_sref }},")
        out += ["};", "```", ""]
        # the enter script
        st = [f"script g{g}_s0_station control=ENTER_CONTROL type=SCRIPT_TYPE_01   # {m['what']}",
              "    DEBUGINFO", f"    SELECT_MAP {m['map']}",
              "    UPDATE_VARINT CALC_SET PARTNER1_KIND 2   # the partner (lives kind 4) follows the hero"]
        if acts or objs:
            st.append("    SELECT_ENTITIES group=-1 sector=1   # signs, objects, shopkeepers")
        if setsec:
            for sc in SCN:
                s = SET_OF[sc]
                if s in setsec:
                    st.append(f"    JUMPIF_SCENE_EQ SCENARIO_MAIN {sc[0]} {sc[1]} {10 + setsec[s]}   # {s}")
            st.append("    JUMP_LABEL 1")
            for s, sec in setsec.items():
                spec = m["sets"][s]
                st.append(f"  LABEL {10 + sec}")
                if spec.get("npcs"):
                    st.append(f"    SELECT_LIVES group=-1 sector={sec}   # {s}: who is there")
                if spec.get("triggers"):
                    st.append(f"    SELECT_EVENTS g=-1 s={sec}   # {s}: the story's triggers")
                st.append("    JUMP_LABEL 1")
            st.append("  LABEL 1")
        st.append("    CJUMP_VAR GROUND_ENTER_LINK   # where the hero comes in")
        for link, sec in linksec.items():
            st.append(f"    COND_EQUAL {link} {100 + link}")
        first = min(linksec)
        st.append(f"    JUMP_LABEL {100 + first}")
        for link, sec in linksec.items():
            st += [f"  LABEL {100 + link}", f"    SELECT_LIVES group=-1 sector={sec}"]
            if m["_linkev"].get(link):
                st.append(f"    SELECT_EVENTS g=-1 s={sec}")
            st.append("    JUMP_LABEL 2")
        st += ["  LABEL 2", "    SELECT_EVENTS g=-1 s=0   # the exits"]
        if m["bgm"]:
            st.append(f"    BGM_SWITCH {m['bgm']}")
        else:
            st += ["    BGM_STOP", "    SKY_AMBIENCE song=SKY_OCEAN frames=0   # EoS BGM_OCEAN1"]
        st += ["    FADE_IN wait=FALSE frames=-1", "    RET", "end", ""]
        out[len(out):len(out)] = st
        sec_lines = [f"    sector events=g{g}_s0_evts station={g}", s1 if s1 != "    sector" else "    sector"]
        nums = {0: sec_lines[0], 1: sec_lines[1]}
        for sec, txt in secs:
            nums[sec] = txt
        sectors[g] = [nums.get(i, "    sector") for i in range(max(nums) + 1)]
    out.append("# sectors (station.py puts these in place of the draft's placeholders)")
    for g, rows in sectors.items():
        out += [f"sectors g{g}"] + rows + ["end", ""]
    if talk.todo:
        print("TODO in talk scripts:\n  " + "\n  ".join(talk.todo), file=sys.stderr)
    return "\n".join(out) + "\n"


def actor_row(talk, out, g, tag, eos, x, y, facing, src):
    npc, kind = E.ACTORS.get(eos, (eos, f"SKY_LIVES_{eos}"))
    talk_s = ""
    if src:
        lv, sc = src
        sn = f"g{g}_talk_{sc}" if not sc.startswith("m03") else f"g{g}_talk_{sc}"
        if not any(l.startswith(f"script {sn} ") for l in out):
            out += talk.script(sn, lv, sc, eos) + [""]
        talk_s = f" script2={sn}"
    stand = "ch3_stand_front" if eos in FRONT else "ch3_stand"
    return f"    actor kind={kind} facing={facing} x={x} y={y} script={stand}{talk_s}   # EoS {eos}"


SPECIAL_SCRIPTS = '''script ch3_hero
    DEBUGINFO
    SELECT_ANIMATION 2
    CALL_SCRIPT WAIT_START_FUNC
    RET
end

script ch3_partner
    DEBUGINFO
    SELECT_ANIMATION 2
    CALL_SCRIPT WAIT_START_FUNC
    RET
end

script ch3_stand   # EoS's townsfolk stand where they are (EoS lets some wander: CORO_MOVE_TYPE1)
    DEBUGINFO
    SELECT_ANIMATION 2
    HALT
end

script ch3_stand_front   # a shopkeeper in a doorway: drawn over the map's front layer
    DEBUGINFO
    SELECT_ANIMATION 2
    SET_OBJ_FLAGS 0x80000
    HALT
end

script g5_cross_exploration control=GETOUT_NORMAL type=SCRIPT_TYPE_02   # EoS P01P01A enter04
    DEBUGINFO
    JUMPIF_SCENE_LT SCENARIO_MAIN 4 5 0
    # from (4, 5) (EoS: its world map, "Where would you like to go?"): Mt. Bristle
    ASK2 flag=FALSE default=-1 who=-1 text="{CENTER_ALIGN}Where would you like to go?"
    CHOICE label=1 text="Mt. Bristle"
    CHOICE label=2 text="Cancel"
    JUMP_LABEL 2
  LABEL 1
    TEXTBOX_CLEAR
    BGM_FADEOUT 60
    CMD_UNK_AF RESCUE_DUNGEON_MT_STEEL TRUE
    NEXT_DUNGEON frames=30 dungeon=MT_STEEL   # EoS main_EnterDungeon(4) (Mt. Bristle: Red's Mt. Steel run)
    HALT
  LABEL 2
    TEXTBOX_CLEAR
    RET
  LABEL 0
    UPDATE_NAME kind=ACTOR_TYPE who=PARTNER id=0x22
    PORTRAIT place=LEFT_BOTTOM_2 who=PARTNER emotion=NORMAL
    MSG_NPC who=PARTNER text=" We can't take any detours."
    MSG_NPC who=PARTNER text=" We have the guild's work to\\ndo now."
    MSG_NPC who=PARTNER text=" Bidoof's waiting at the guild.\\nWe have to hurry!"
    JUMP_SCRIPT END_TALK
end

script g7_beach_cave control=GETOUT_NORMAL type=SCRIPT_TYPE_02   # EoS D01P11A enter02: Beach Cave
    DEBUGINFO
    MSG_INSTANT text="{CENTER_ALIGN}The Beach Cave is not in this demo."
    JUMP_SCRIPT END_TALK
end

script g8_square_dojo control=GETOUT_NORMAL type=SCRIPT_TYPE_02   # EoS T01P01A enter03: Marowak Dojo
    DEBUGINFO
    MSG_INSTANT text="{CENTER_ALIGN}Marowak Dojo is not in this demo."
    JUMP_SCRIPT END_TALK
end

script g9_west_sharpedo control=GETOUT_NORMAL type=SCRIPT_TYPE_02   # EoS T01P02A enter02: Sharpedo Bluff
    DEBUGINFO
    MSG_INSTANT text="{CENTER_ALIGN}Sharpedo Bluff is not in this demo."
    JUMP_SCRIPT END_TALK
end

script g12_crew_exit control=GETOUT_NORMAL type=SCRIPT_TYPE_02   # EoS G01P07A enter01
    DEBUGINFO
    # the morning (c00a0201 set EoS's $SCENARIO_MAIN_BIT_FLAG[1]): the morning address
    JUMPIF_ARRAY SKY_SCENARIO_MAIN_BIT_FLAG 1 0
    SKY_GOTO_MAP map=MAP_SKY_GUILD_B2F_CH3 link=2
    HALT
  LABEL 0
    EXECUTE_FUNCTION SKY_CH3_ADDRESS_EVENT   # EoS CORO_EVENT_HA_CHO / CORO_EVENT_M03_07B
    HALT
end'''


def main() -> int:
    rom = E.Rom(sys.argv[1])
    OUT.parent.mkdir(parents=True, exist_ok=True)
    OUT.write_text(build(rom))
    print(f"wrote {OUT.relative_to(ROOT)}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
