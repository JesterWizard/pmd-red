#!/usr/bin/env python3
"""Translate an Explorers of Sky scene script to a .scene file (a draft to hand-tune).

    tools/event_editor/eos_import.py ROM SCRIPT/G01P01B/m02a0101 [more...] -o OUT.scene
    tools/event_editor/eos_import.py ROM m02a0101 m02a0105 -o OUT.scene      # found by name
    tools/event_editor/eos_import.py --exps m02a0101.exps --ssa m02a0101.json -o OUT.scene
    tools/event_editor/eos_import.py ROM m02a0101 --dump DIR                 # write the .exps and .json

Each EoS acting script (SCRIPT/<LEVEL>/<name>.ssb, decompiled to ExplorerScript
with skytemple-files, and its .ssa: who stands where) becomes one group of the
scene file: the actors and objects of each SSA layer at their positions (a
layer is a sector), the main routine (`def 0`) as the group's station script,
and one script for each actor and object. The ROM is only read.

How the EoS commands map (chapter 1's hand-made scenes are the reference; see
documentation/EventEditor.md, "Import from EoS"):

* The main routine runs in the station script. A command for an actor
  (`MovePositionOffset<actor X>(...)`) runs in X's script: the station sends
  it a cue (ALERT_CUE / AWAIT_CUE_COND), X runs the commands, and
  `WaitExecuteLives(X)` waits for X's "done" cue (X meets it with
  AWAIT_CUE_COND, so no cue is lost).
* Messages, portraits (FACE_POS -> PLACEMENT), text tags ([K] -> {WAIT_PRESS},
  [hero] -> {NAME_0}, ...), sounds (se_Play ids -> the Red ids that play that
  EoS SE, SE_SKY_*), music (BGM_* -> MUS_SKY_*), jingles (me_Play), fades,
  white-outs, camera, emotes (SetEffect), the common coroutines (jumps, look
  around, head shake...), layers (supervision_Acting -> SELECT_LIVES /
  SELECT_OBJECTS), second-screen pictures (back2_SetGround -> SKY_CUTAWAY),
  Lock / Unlock, labels, switch / if, menus.
* Anything else becomes a `# TODO eos: <the EoS line>` comment (and nothing
  runs for it): it is never dropped without a mark.

Names the drafts use that do not exist yet (the chapter-2 maps, actors, songs,
CGs, SEs) follow documentation/Features/SkyChapter2.md; `scenes.py check
--allow-unknown` checks such a file up to them and lists them.
"""
from __future__ import annotations

import argparse
import json
import math
import re
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import exps as X  # noqa: E402
import scenes  # noqa: E402

ROOT = HERE.parents[1]

# ---------------------------------------------------------------- mappings

# EoS actor (SSA / script name without ACTOR_) -> (NPC define, lives kind)
ACTORS = {
    "PLAYER": ("PLAYER", "0"),
    "ATTENDANT1": ("PARTNER", "34"),
    "NPC_ZUBATTO": ("ZUBAT", "SKY_LIVES_ZUBAT"),
    "NPC_DOGAASU": ("KOFFING", "SKY_LIVES_KOFFING"),
    "NPC_PUKURIN": ("WIGGLYTUFF", "SKY_LIVES_WIGGLYTUFF"),
    "NPC_HEIGANI_KRABBY": ("KRABBY", "SKY_LIVES_KRABBY"),
    "NPC_KURABU": ("KRABBY", "SKY_LIVES_KRABBY"),
    "NPC_DIGUDA": ("DIGLETT", "SKY_LIVES_DIGLETT"),
    # chapter 2 (SkyChapter2.md, naming contract)
    "NPC_PERAPPU": ("CHATOT", "SKY_LIVES_CHATOT"),
    "NPC_DOGOOMU": ("LOUDRED", "SKY_LIVES_LOUDRED"),
    "NPC_DAGUTORIO": ("DUGTRIO", "SKY_LIVES_DUGTRIO"),
    "NPC_KIMAWARI": ("SUNFLORA", "SKY_LIVES_SUNFLORA"),
    "NPC_BIPPA": ("BIDOOF", "SKY_LIVES_BIDOOF"),
    "NPC_CHIRIIN": ("CHIMECHO", "SKY_LIVES_CHIMECHO"),
    "NPC_HEIGANI": ("CORPHISH", "SKY_LIVES_CORPHISH"),
    "NPC_GUREGGURU": ("CROAGUNK", "SKY_LIVES_CROAGUNK"),
    "NPC_BANEBUU": ("SPOINK", "SKY_LIVES_SPOINK"),
    "NPC_KEMUSSO": ("WURMPLE", "SKY_LIVES_WURMPLE"),
    "NPC_OOSUBAME": ("SWELLOW", "SKY_LIVES_SWELLOW"),
    "NPC_POPPO": ("PIDGEY", "SKY_LIVES_PIDGEY"),
    "NPC_REDIBA": ("LEDYBA", "SKY_LIVES_LEDYBA"),
    "NPC_TANEBOO": ("SEEDOT", "SKY_LIVES_SEEDOT"),
}

# EoS object (SSA object name) -> object kind
OBJECTS = {
    "g01p01a1": "SKY_OBJ_RELIC_FRAGMENT",
    "t01p01a1": "SKY_OBJ_TOTEM_POLE_1",
    "t01p01a3": "SKY_OBJ_TOTEM_POLE_2",
    # chapter 2 (SkyChapter2.md, Sprites: Objects)
    "g01p01a3": "SKY_OBJ_GUILD_GATE",
    "g01p05a1": "SKY_OBJ_EXPLORATION_KIT",
    "g01p06b1": "SKY_OBJ_DINNER",
    "d02p31a1": "SKY_OBJ_PEARL",
}

# EoS level -> GBA map id (chapter 1's maps; chapter 2's from the naming contract)
LEVELS = {
    "V01P07B": "SKY_STORM_WAVES", "V01P01A": "SKY_STORM_SEA", "D01P11A": "SKY_BEACH_DAY",
    "G01P01B2": "SKY_GUILD_DUSK", "V01P04B": "SKY_KRABBY_BUBBLES", "V01P05B": "SKY_KRABBY_SUNSET",
    "D01P11B": "SKY_BEACH_DUSK", "D01P41A": "SKY_BEACH_CAVE_PIT",
    "G01P01B": "SKY_GUILD_ENTRANCE", "G01P02A": "SKY_GUILD_1F", "G01P03A": "SKY_GUILD_B1F",
    "G01P04A": "SKY_GUILD_B2F", "G01P04A2": "SKY_GUILD_B2F_DOOR", "G01P04C": "SKY_GUILD_B2F_NIGHT",
    "G01P05A": "SKY_GUILD_WIGGLYTUFF", "G01P05C": "SKY_GUILD_WIGGLYTUFF_NIGHT",
    "G01P06B": "SKY_GUILD_MESS_HALL", "G01P07A": "SKY_GUILD_CREW_ROOM", "G01P07C": "SKY_GUILD_CREW_ROOM_NIGHT",
    "D02P11A": "SKY_DRENCHED_BLUFF_ENTRANCE", "D02P31A": "SKY_DRENCHED_BLUFF_END",
    # main-screen pictures EoS plays as maps, with actors or text over them
    "V02P03A": "SKY_SENTRY_POST", "V02P08A": "SKY_KIT_OPEN",
}
# chapter 2's scenes are on gs180 (SkyChapter2.md, station gs180): g01p01b2 (chapter 1's
# MAP_SKY_GUILD_DUSK, gs178) is MAP_SKY_GUILD_DUSK2 there, the same files on gs180
LEVELS_CH2 = {"G01P01B2": "SKY_GUILD_DUSK2"}

# second-screen pictures (back2_SetGround, or a V level shown on the main
# screen) -> story CG; (still CG, pan CG over the scene's map)
CGS = {
    "V01P03A": ("SKY_DAY", "SKY_DAY_SCROLL"), "V01P03B": ("SKY_DUSK", None),
    "V02P01A": ("GUILD_SKY", "GUILD_SKY_SCROLL"), "V01P06B": ("RELIC_FRAGMENT", None),
    "V26P06A": ("SUNSET_SKY", None),
}
# chapter 2's (SkyChapter2.md, Story CGs; events/sky/cutaways.cfg)
CGS.update({"V02P02A": ("SENTRY_GRATE", None), "V02P06A": ("NIGHT_SKY", None)})
# main-screen levels with no actor and no text over them, shown as a CG
# (back_SetGround ... screen_FadeOut: the waits in between are its frames)
MAIN_CGS = {"V01P08B": "GUILD_GATE"}

# EoS song -> music id (MUS_SKY_*; chapter 2's from the naming contract)
MUSIC = {
    "BGM_STORM": "SKY_STORM", "BGM_OCEAN1": "SKY_OCEAN", "BGM_FIRE_CRACKLING_LOUDER": "SKY_FIRE_CRACKLING",
    "BGM_ON_THE_BEACH_AT_DUSK": "SKY_ON_THE_BEACH_AT_DUSK", "BGM_BEACH_CAVE": "SKY_BEACH_CAVE",
    "BGM_BOSS_BATTLE": "SKY_BOSS_BATTLE", "BGM_IN_THE_DEPTHS_OF_THE_PIT": "SKY_IN_THE_DEPTHS_OF_THE_PIT",
}

# EoS dungeons (main_EnterDungeon) -> script dungeon: Beach Cave is Red's Tiny
# Woods, Drenched Bluff Red's Thunderwave Cave (SkyChapter2.md, Drenched Bluff);
# -1 (EoS's $DUNGEON_ENTER) is chapter 2's dungeon
DUNGEONS = {1: "TINY_WOODS", 3: "THUNDERWAVE_CAVE", -1: "THUNDERWAVE_CAVE"}
DUNGEON_OPEN = {3: "RESCUE_DUNGEON_THUNDERWAVE_CAVE"}

FACE_POS = {   # EoS FACE_POS_* -> PLACEMENT_* (chapter 1: STANDARD, BOTTOM_*_FACEINW, TOP_*_CENTER, TOP_LC_FACEOUTW)
    "STANDARD": "LEFT_BOTTOM_2",
    "BOTTOM_L_FACEINW": "LEFT_BOTTOM_2", "BOTTOM_R_FACEINW": "RIGHT_BOTTOM_FLIP",
    "BOTTOM_L_FACEOUTW": "LEFT_BOTTOM_FLIP", "BOTTOM_R_FACEOUTW": "RIGHT_BOTTOM",
    "BOTTOM_L_CENTER": "MIDLEFT_BOTTOM", "BOTTOM_R_CENTER": "MIDRIGHT_BOTTOM_FLIP",
    "BOTTOM_LC_FACEOUTW": "MIDLEFT_BOTTOM_FLIP", "BOTTOM_RC_FACEOUTW": "MIDRIGHT_BOTTOM",
    "BOTTOM_C_FACER": "CENTERLEFT_CENTER", "BOTTOM_C_FACEL": "CENTERRIGHT_CENTER_FLIP",
    "TOP_L_FACEINW": "LEFT_MIDTOP", "TOP_R_FACEINW": "RIGHT_MIDTOP_FLIP",
    "TOP_L_FACEOUTW": "LEFT_MIDTOP_FLIP", "TOP_R_FACEOUTW": "RIGHT_MIDTOP",
    "TOP_L_CENTER": "MIDLEFT_TOP", "TOP_R_CENTER": "MIDRIGHT_TOP_FLIP",
    "TOP_LC_FACEOUTW": "MIDLEFT_TOP_FLIP", "TOP_RC_FACEOUTW": "MIDRIGHT_TOP",
    "TOP_RC_FACER": "MIDRIGHT_TOP",
    "TOP_C_FACER": "CENTERLEFT_TOP", "TOP_C_FACEL": "CENTERRIGHT_TOP_FLIP",
}

FACES = {   # EoS FACE_* -> EMOTION_*
    "NORMAL": "NORMAL", "HAPPY": "HAPPY", "PAIN": "PAINED", "ANGRY": "ANGRY", "WORRIED": "WORRIED",
    "SAD": "SAD", "CRYING": "CRYING", "SHOUTING": "SHOUTING", "TEARY_EYED": "TEARY_EYE",
    "DETERMINED": "DETERMINED", "JOYOUS": "JOYOUS", "INSPIRED": "INSPIRED", "SURPRISED": "SUPRISED",
    "DIZZY": "DIZZY", "SIGH": "SIGH", "STUNNED": "STUNNED",
}

DIRS = {   # EoS DIR_* / SSA direction -> DIRECTION_*
    "DIR_DOWN": "SOUTH", "DIR_DOWNRIGHT": "SOUTHEAST", "DIR_RIGHT": "EAST", "DIR_UPRIGHT": "NORTHEAST",
    "DIR_UP": "NORTH", "DIR_UPLEFT": "NORTHWEST", "DIR_LEFT": "WEST", "DIR_DOWNLEFT": "SOUTHWEST",
    "Down": "SOUTH", "DownRight": "SOUTHEAST", "Right": "EAST", "UpRight": "NORTHEAST",
    "Up": "NORTH", "UpLeft": "NORTHWEST", "Left": "WEST", "DownLeft": "SOUTHWEST",
}
TURN = {0: "NONE", 1: "SPINRIGHT1", 2: "SPINLEFT1", 3: "SPINRIGHT2", 4: "SPINLEFT2", 5: "FLIP", 10: "DIR_TRANS_10", 11: "DIR_TRANS_11"}


def turn_full(n):
    t = TURN.get(n)
    return str(n) if t is None else (t if t.startswith("DIR_TRANS_") else "DIR_TRANS_" + t)

EFFECTS = {   # EoS EFFECT_* -> (EMOTION_EFFECT_*, the common script that shows it and waits)
    "NONE": ("NONE", None),
    "EXCLAMATION_MARK": ("NOTICE", "NOTICE_FUNC"), "QUESTION_MARK": ("QUESTION", "QUESTION_FUNC"),
    "SHOCKED": ("SHOCK", "SHOCK_FUNC"), "SHOCKED_MIRRORED": ("SHOCK", "SHOCK_FUNC"),
    "SWEAT_DROP": ("SWEAT", "SWEAT_FUNC"), "SWEAT_DROP_SLOW": ("SWEAT", "SWEAT_FUNC"),
    "SWEAT_DROPS_FROM_BOTH_SIDES_MEDIUM": ("SWEAT", "SWEAT_FUNC"),
    "ANGRY": ("ANGRY", None), "ANGRY_MIRRORED": ("ANGRY", None),
    "JOYOUS": ("SMILE", None), "LAUGHING": ("SMILE", None),
    # no GBA picture: the closest emote (marked `# TODO emotion`), or none
    "TWO_ARROWS_AT_SIDE_LEFT": ("NOTICE", None), "TWO_ARROWS_AT_SIDE_RIGHT": ("NOTICE", None),
}
# EoS SetAnimation ids whose value (SETANIMATION_TABLE) is at another index of Red's
# table (gUnknown_8117F64): SkyChapter2.md, Animation ids. 0-13 and 17-29 are the same.
EOS_RED_ANIM = {15: 2, 16: 2, 30: 46, 31: 47, 32: 48, 34: 50, 42: 30, 43: 31, 44: 32, 45: 33, 46: 34, 47: 35,
                48: 36, 49: 37, 53: 49, 55: 51, 56: 52, 63: 23, 64: 32, 65: 33, 66: 26, 67: 27, 68: 28,
                69: 37, 70: 46, 71: 47, 72: 48, 74: 50, 75: 51, 76: 52}
# objects: EoS SetAnimation -> Red SELECT_ANIMATION (SkyChapter2.md, Sprites: Objects)
OBJECT_ANIMS = {9: 1, 17: 4, 18: 4}
OBJECT_ANIM_NOTES = {9: "closed (direction 0, held)", 17: "opens once and stays open (0x1001)",
                     18: "opens once and stays open (0x1001)"}
EFFECTS_NO_PICTURE = {"TWO_ARROWS_AT_SIDE_LEFT", "TWO_ARROWS_AT_SIDE_RIGHT"}
EFFECTS_NONE = {"EATING", "EATING_SLOW", "APPLE_ON_HEAD"}

# EoS common coroutines (ExecuteCommon / CallCommon) -> Red common script, or a
# list of commands (EoS's own definition in SCRIPT/COMMON/unionall.ssb)
COROS = {
    "JUMP_HAPPY_FUNC": "JUMP_HAPPY_FUNC", "JUMP_SURPRISE_FUNC": "JUMP_SURPRISE_FUNC",
    "JUMP_ANGRY_FUNC": "JUMP_ANGRY_FUNC", "LOOK_AROUND_FUNC": "LOOK_AROUND_FUNC",
    "LOOK_AROUND_DOWN_FUNC": "LOOK_AROUND_DOWN_FUNC", "LOOK_AROUND_RIGHT_FUNC": "LOOK_AROUND_RIGHT_FUNC",
    "LOOK_AROUND_LEFT_FUNC": "LOOK_AROUND_LEFT_FUNC", "WAKEUP_FUNC": "WAKEUP_FUNC",
    "INIT_SLEEP_FUNC": "INIT_SLEEP_FUNC",
    "HEAD_SHAKE_FUNC": ["ROTATE_RELATIVE 2 1 DIR_TRANS_SPINRIGHT1", "WAIT 2", "ROTATE_RELATIVE 2 2 DIR_TRANS_SPINLEFT2",
                        "WAIT 2", "ROTATE_RELATIVE 2 1 DIR_TRANS_SPINRIGHT2", "WAIT 2", "ROTATE_RELATIVE 2 2 DIR_TRANS_SPINLEFT1"],
    "EXPLANATION_FUNC": ["SELECT_ANIMATION 5", "WAIT 45", "SELECT_ANIMATION 2", "WAIT 30"],
    "LOOK_AROUND_FAST_FUNC": ["ROTATE_RELATIVE 1 1 DIR_TRANS_SPINRIGHT2", "WAIT 5", "ROTATE_RELATIVE 1 2 DIR_TRANS_FLIP",
                              "WAIT 15", "ROTATE_RELATIVE 1 1 DIR_TRANS_FLIP", "WAIT 5", "ROTATE_RELATIVE 1 2 DIR_TRANS_SPINLEFT2"],
}

# EoS script variables -> Red's (include/constants/event_flag.h) or the sky
# build's (include/sky_story.h)
VARS = {"CARRY_GOLD": "GOLD", "BANK_GOLD": "BANK_GOLD", "SCENARIO_MAIN_BIT_FLAG": "SKY_SCENARIO_MAIN_BIT_FLAG"}
# EoS variables with nothing to do on the GBA: setting them does nothing
VARS_DROPPED = {"PERFORMANCE_PROGRESS_LIST": "unlocks EoS menus", "COMPULSORY_SAVE_POINT": "EoS's bed save point"}
# EoS variables the GBA can't ask: a switch on one takes this case
VARS_FIXED = {"CONFIG_COLOR_KIND": (0, "the quiz's colour, which Red's quiz does not ask")}
# EoS-only items -> the closest Red item (EoS item name pattern, Red item, its name)
ITEM_SUBST = [(r" Bow$", "ITEM_FRIEND_BOW", "Friend Bow")]
RED_VARS = set(re.findall(r"^\s*/\* 0x[0-9a-f]+ \*/ ([A-Z][A-Z0-9_]+)",
                          (ROOT / "include" / "constants" / "event_flag.h").read_text(), re.M))

ME = {1: 200, 2: 201, 3: 202, 4: 203, 5: 204, 6: 205, 7: 207, 8: 210, 9: 212, 10: 214, 11: 217, 12: 215, 13: 219}

# EoS se ids chapter 1 maps to a different Red id than the first one listed
SE_PREFER = {0x230B: 457}

TEXT_TAGS = {"K": "{WAIT_PRESS}", "CN": "{CENTER_ALIGN}", "hero": "{NAME_0}", "partner": "{NAME_1}",
             "player": "{NAME_0}", "team:": "{TEAM_NAME}", "CR": "",
             "MP": ",", "M:S0": " Poké", "W:30": ""}   # [MP] the thousands mark, [M:S0] the Poké sign

# The hero's and partner's EoS ground animations past Red's table (62-76: lying in
# bed, waking, eating...): (the Red id that holds EoS's value, as SkyChapter2.md
# "Animation ids" lists; the nearest pose the starters have now). The hero and
# partner sprites have no ground groups yet (branch ch2-heroanims), so each
# plays the nearest pose there is and is marked `# TODO anim` with the id to
# put back.
HERO_ANIMS = {62: (30, 6), 63: (23, 2), 64: (32, 2), 65: (33, 2), 66: (26, 2), 67: (27, 2), 68: (28, 2),
              69: (37, 2), 70: (46, 2), 71: (47, 2), 72: (48, 2), 74: (50, 2), 75: (51, 2), 76: (52, 6)}


def ival(e):
    return e[1] if e and e[0] == "num" else None


def speed256(v) -> int:
    return int(round(float(v) * 256))


# ---------------------------------------------------------------- sound tables

def _se_tables():
    sys.path.insert(0, str(ROOT / "tools" / "eos_music"))
    try:
        import sky_red_se_map as m
        inv = {}
        for red, (eos, _) in sorted(m.SE_MAP.items()):
            inv.setdefault(eos, red)
        inv.update(SE_PREFER)
    except Exception:  # pragma: no cover
        inv = {}
    names = {}
    for line in (ROOT / "include" / "sky_story.h").read_text().splitlines():
        mm = re.match(r"#define (SE_SKY_[A-Z0-9_]+)\s+(\d+)", line)
        if mm:
            names[int(mm.group(2))] = mm.group(1)
    return inv, names


SE_TO_RED, SE_SKY_NAMES = _se_tables()


# ---------------------------------------------------------------- loading

def find_script(rom, name: str) -> str:
    """'m02a0101' or 'SCRIPT/G01P01B/m02a0101' -> the .ssb path in the ROM."""
    if "/" in name:
        return name if name.endswith(".ssb") else name + ".ssb"
    hits = []

    def walk(folder, prefix):
        for f in folder.files:
            yield prefix + f
        for n, sub in folder.folders:
            yield from walk(sub, prefix + n + "/")
    for p in walk(rom.filenames, ""):
        if p.startswith("SCRIPT/") and p.split("/")[-1] == name + ".ssb":
            hits.append(p)
    if not hits:
        raise SystemExit(f"{name}: no SCRIPT/*/{name}.ssb in the ROM")
    if len(hits) > 1:
        raise SystemExit(f"{name}: several scripts ({', '.join(hits)}); give the full path")
    return hits[0]


class Rom:
    """The EoS ROM through skytemple-files (only read)."""

    def __init__(self, path):
        import ndspy.rom
        from skytemple_files.common.util import get_ppmdu_config_for_rom
        self.rom = ndspy.rom.NintendoDSRom.fromFile(str(path))
        self.cfg = get_ppmdu_config_for_rom(self.rom)
        self._se = None

    def load(self, name: str):
        from skytemple_files.common.types.file_types import FileType
        from skytemple_files.script.ssb.handler import SsbHandler
        path = find_script(self.rom, name)
        ssb = SsbHandler.deserialize(self.rom.getFileByName(path), self.cfg)
        text, _ = ssb.to_explorerscript()
        ssa = FileType.SSA.deserialize(self.rom.getFileByName(path[:-4] + ".ssa"), self.cfg.script_data)
        return text, ssa_json(ssa, path)

    def se_name(self, se: int):
        if self._se is None:
            try:
                import sedl
                self._se = {k: v.name for k, v in sedl.load_all(self.rom).items()}
            except Exception:
                self._se = {}
        return self._se.get(se)


def _pos(p):
    return dict(x=p.x_relative, y=p.y_relative, xo=p.x_offset, yo=p.y_offset)


def ssa_json(ssa, path: str) -> dict:
    """The parts of an .ssa the translator reads, as JSON."""
    layers = []
    for layer in ssa.layer_list:
        layers.append(dict(
            actors=[dict(name=a.actor.name, dir=a.pos.direction.name if a.pos.direction else None,
                         script=a.script_id, **_pos(a.pos)) for a in layer.actors],
            objects=[dict(name=o.object.unique_name.upper(), kind=o.object.name, w=o.hitbox_w, h=o.hitbox_h,
                          dir=o.pos.direction.name if o.pos.direction else None, script=o.script_id, **_pos(o.pos))
                     for o in layer.objects],
            performers=[dict(type=p.type, w=p.hitbox_w, h=p.hitbox_h, **_pos(p.pos)) for p in layer.performers],
        ))
    parts = path.split("/")
    return dict(level=parts[1], script=parts[-1][:-4], layers=layers)


# ---------------------------------------------------------------- the scene model

def tiles(v: int, off: int) -> str:
    return f"{v}.5" if off >= 2 else str(v)


class Entity:
    """An actor or object of one SSA layer: one GBA lives / object and its script."""

    def __init__(self, tr, layer, idx, d, is_object):
        self.tr, self.layer, self.d, self.is_object = tr, layer, d, is_object
        self.eos = d["name"]
        if is_object:
            base = d.get("kind", d["name"].lower().rsplit("_", 1)[0])
            self.kind = OBJECTS.get(base, f"SKY_OBJ_{base.upper()}")
            self.npc = None
            self.sname = f"g{tr.group}_s{layer}_obj{idx}_{base}"
        else:
            npc, self.kind = ACTORS.get(self.eos, (re.sub(r"^NPC_", "", self.eos), f"SKY_LIVES_{re.sub(r'^NPC_', '', self.eos)}"))
            self.npc = tr.npc_slot(npc)
            self.sname = f"g{tr.group}_s{layer}_{npc.lower()}"
        # walks are worked out from the SSA tile without its half-tile offset (as chapter 1 did)
        self.px, self.py = d["x"] * 8, d["y"] * 8
        self.facing = DIRS.get(d.get("dir") or "", "SOUTH")
        self.cmd_cue = self.done_cue = None
        self.batches = []          # [Batch]
        self.own = []              # rows of its own coroutine (def N for actor X)
        self.table = False         # dispatch-table mode (commands from inside branches)
        self.idle = False          # known to be waiting for its next command
        self.spawned = self.destroyed = False
        self.has_own = False       # runs its own coroutine (def N for actor X)

    def cues(self):
        if self.cmd_cue is None:
            self.cmd_cue, self.done_cue = self.tr.new_cue(), self.tr.new_cue()


class Batch:
    def __init__(self, ent, k):
        self.ent, self.k = ent, k
        self.rows = []
        self.open = True
        self.waited = False
        self.alert = False         # the station may ALERT (the entity is known to be waiting)


class Dispatch:
    """The station's row that starts a batch (decided once the scene is read)."""

    def __init__(self, batch):
        self.batch = batch

    def render(self):
        b, e = self.batch, self.batch.ent
        who = e.npc or e.eos
        if e.table:
            return f"AWAIT_CUE_COND {e.cmd_cue} {b.k}   # -> {who}: batch {b.k}"
        if b.alert:
            return f"ALERT_CUE {e.cmd_cue}   # -> {who}"
        return f"AWAIT_CUE_COND {e.cmd_cue} 0   # -> {who} (waits until it is ready)"


class Script:
    def __init__(self, name):
        self.name = name
        self.rows = []
        self.labels = 1000

    def label(self):
        self.labels += 1
        return self.labels


class Translator:
    def __init__(self, text, ssa, group=0, rom=None, notes=None):
        self.mod = X.parse(text)
        self.ssa = ssa
        self.group = group
        self.rom = rom
        self.level = ssa.get("level", "")
        self.name = ssa.get("script", "")
        self.notes = notes if notes is not None else []
        self.slots = {}            # NPC define -> slot (shared by the file: see SceneFile)
        self.cue = 63
        self.station = Script(f"g{group}_s0_station")
        self.ents = []             # every Entity
        self.layers = []           # [ [Entity] ]
        for li, layer in enumerate(ssa["layers"]):
            row = []
            for i, a in enumerate(layer["actors"]):
                row.append(Entity(self, li, i, a, False))
            for i, o in enumerate(layer["objects"]):
                row.append(Entity(self, li, i, o, True))
            self.layers.append(row)
            self.ents += row
        self.perf_layers = [layer.get("performers", []) for layer in ssa["layers"]]
        # state of the main routine
        self.speaker = None        # NPC define or None
        self.placed = {}           # NPC define -> last placement
        self.camera = None         # ("perf", (x, y)) / ("ent", Entity)
        self.perf_pos = {}         # performer index -> (x, y) pixels
        self.perf_move = None      # (index, the frame its move ends)
        self.now = 0               # frames since the start, as far as the station knows (messages count 0)
        self.screen = "black"      # black / white / shown
        self.faded_in = False
        self.cg_open = None        # (name, rows index) a second-screen picture waiting for its frames
        self.items = {}            # item_Set slots
        self.todo = 0
        self.translated = 0
        self.depth = 0             # inside a branch / loop of the main routine
        self.after_label = False
        self.lock_users = set()    # Lock numbers some coroutine waits on
        self.used = set()          # names that may not exist yet (type, name)
        self.chapter2 = self.name.startswith(("m02", "c00"))
        self.main_cg = None        # [CG, frames, rows, index]: a main-screen level shown as a CG
        self.banner = False        # back_SetBanner2's fade in / wait / fade out follow

    # -- small helpers
    def new_cue(self):
        self.cue += 1
        if self.cue > 127:
            raise SystemExit(f"{self.name}: out of cues")
        return self.cue

    def npc_slot(self, npc):
        if npc not in self.slots:
            self.slots[npc] = len(self.slots)
        return npc

    def use(self, kind, name):
        self.used.add((kind, name))
        return name

    def ent(self, name, kind="actor"):
        """The entity a script name refers to (the one on the map now, else the first)."""
        nm = re.sub(r"^(ACTOR_|OBJECT_)", "", str(name))
        cands = [e for e in self.ents if e.eos == nm and e.is_object == (kind == "object")]
        live = [e for e in cands if e.spawned and not e.destroyed]
        return (live or cands or [None])[-1]

    def todo_row(self, s, rows, why=""):
        self.todo += 1
        rows.append(f"# TODO eos: {s.src}" + (f"   ({why})" if why else ""))

    def lives_kind(self, name):
        nm = re.sub(r"^ACTOR_", "", str(name))
        if nm == "PLAYER":
            return "LIVES_KIND_PLAYER"
        if nm == "ATTENDANT1":
            return "LIVES_KIND_PARTNER"
        return ACTORS.get(nm, (None, f"SKY_LIVES_{re.sub(r'^NPC_', '', nm)}"))[1]

    def who(self, name):
        nm = re.sub(r"^ACTOR_", "", str(name))
        if nm in ("TALK_MAIN", "TALK_SUB"):
            return None
        npc = ACTORS.get(nm, (re.sub(r"^NPC_", "", nm), None))[0]
        return self.npc_slot(npc)

    # -- text
    def text(self, e, rows=None):
        if e is None:
            return ""
        if e[0] == "text":
            s = e[1].get("english", "")
        elif e[0] == "str":
            s = e[1]
        else:
            return ""
        return self.convert_text(s, rows)

    def convert_text(self, s, rows=None):
        unknown = []

        def tag(m):
            t = m.group(1)
            if t in TEXT_TAGS:
                if t in ("hero", "player"):
                    self.need_name("PLAYER")
                if t == "partner":
                    self.need_name("PARTNER")
                return TEXT_TAGS[t]
            if re.fullmatch(r"CS:.", t):
                return ""        # colours: chapter 1 leaves them out
            mm = re.fullmatch(r"c_(kind|name):(.+)", t)
            if mm:
                who = self.who(mm.group(2))
                if who is None:
                    unknown.append(t)
                    return ""
                self.need_name(who)
                return "{" + ("POKEMON_" if mm.group(1) == "kind" else "NAME_") + f"@{who}@" + "}"
            mm = re.fullmatch(r"s_item:(\d+)", t)
            if mm:
                item = self.items.get(int(mm.group(1)))
                return f"{{ITEM:{item}}}"   # replaced below with the item's name
            unknown.append(t)
            return ""
        out = re.sub(r"\[([^\]]*)\]", tag, s)
        for nm in getattr(self, "item_names", {}).values():   # EoS-only items: the Red item's name
            for pat, _, red_name in ITEM_SUBST:
                if nm and re.search(pat, nm) and nm in out:
                    out = out.replace(nm, red_name)
        out = re.sub(r"\{ITEM:(\w+)\}", lambda m: self.item_name(m.group(1)), out)
        out = out.replace("\\", "\\\\").replace('"', '\\"').replace("\n", "\\n")
        if unknown and rows is not None:
            self.todo += 1
            rows.append(f"# TODO eos: text tags left out: {', '.join('[' + u + ']' for u in unknown)}")
        return out

    def item_name(self, item):
        names = getattr(self, "item_names", {})
        try:
            return names.get(int(item), f"item {item}")
        except ValueError:
            return f"item {item}"

    def need_name(self, npc):
        """A text names an actor: the station binds the name if the actor is not on the map."""
        self.named = getattr(self, "named", set())
        self.named.add(npc)

    # -- sounds, music, places
    def se(self, n, rows):
        red = SE_TO_RED.get(n)
        if red is not None:
            return SE_SKY_NAMES.get(red, str(red)), f"EoS se_Play({n})"
        nm = self.rom.se_name(n) if self.rom else None
        name = "SE_SKY_" + (re.sub(r"^SE_NUM_", "", nm) if nm else f"EOS_{n:04X}")
        self.use("se", name)
        return name, f"EoS se_Play({n}) = {nm or hex(n)}: not converted yet"

    def music(self, e):
        n = e[1] if e[0] == "name" else str(ival(e))
        if n in MUSIC:
            return MUSIC[n]
        mus = "SKY_" + re.sub(r"^BGM_", "", n)
        self.use("music", "MUS_" + mus)
        return mus

    def map_of(self, level):
        lv = re.sub(r"^LEVEL_", "", level)
        if self.chapter2 and lv in LEVELS_CH2:
            return LEVELS_CH2[lv]
        if lv in LEVELS:
            m = LEVELS[lv]
            if not lv.startswith(("V01", "D01", "G01P01B2")):
                self.use("map", "MAP_" + m)
            return m
        self.use("map", "MAP_SKY_" + lv)
        return "SKY_" + lv

    def cg_of(self, level):
        lv = re.sub(r"^LEVEL_", "", level)
        if lv in CGS:
            return CGS[lv]
        self.use("cg", "SKY_CUTAWAY_" + lv)
        return (lv, None)

    # ------------------------------------------------------------ routing

    def batch_rows(self, ent):
        """The rows a command for `ent` goes to: its open batch (started here if none)."""
        if ent.batches and ent.batches[-1].open:
            return ent.batches[-1].rows
        ent.cues()
        b = Batch(ent, len(ent.batches) + 1)
        if (self.depth or self.after_label) and not ent.has_own:
            ent.table = True
        b.alert = ent.idle or ent.has_own   # its own coroutine runs: never block on it
        b.t0 = self.now
        ent.idle = False
        ent.batches.append(b)
        self.station.rows.append(Dispatch(b))
        return b.rows

    def close_batches(self):
        """The station is about to wait: what it sent its actors so far starts now."""
        for e in self.ents:
            if e.batches and e.batches[-1].open:
                e.batches[-1].open = False

    def freeze(self):
        """A branch or a label: what was sent before it is not waited for inside it (the other
        path would leave the actor waiting to report)."""
        self.close_batches()
        for e in self.ents:
            if e.batches:
                e.batches[-1].frozen = True

    def wait_for(self, ent, rows):
        if not ent.batches or ent.batches[-1].waited:
            rows.append(f"# eos: WaitExecuteLives({ent.eos}): nothing to wait for")
            return
        if ent.has_own:
            rows.append(f"# eos: WaitExecuteLives({ent.eos}): it runs its own coroutine, not waited for")
            return
        if getattr(ent.batches[-1], "frozen", False):
            rows.append(f"# eos: WaitExecuteLives({ent.eos}): sent before a branch, not waited for here")
            return
        b = ent.batches[-1]
        b.open = False
        b.waited = True
        ent.idle = not ent.table
        self.now = max(self.now, b.t0 + sum(est_frames(r) for r in b.rows))
        rows.append(f"AWAIT_CUE {ent.done_cue}   # <- {ent.npc or ent.eos} done")

    # ------------------------------------------------------------ the routines

    def run(self):
        main = self.mod.routine("0")
        if main is None:
            raise SystemExit(f"{self.name}: no def 0")
        for r in self.mod.routines:
            for s in walk(r.body):
                if s.kind == "call" and s.name == "Lock" and r.id != "0":
                    self.lock_users.add(ival(s.args[0]))
            if r.id != "0" and r.target and r.target[0] in ("actor", "object"):
                for e in self.ents:
                    if e.eos == re.sub(r"^(ACTOR_|OBJECT_)", "", str(r.target[1])):
                        e.has_own = True
        st = self.station.rows
        st += ["SET_PLACE_MODE 1", "FADE_OUT wait=TRUE frames=0"]
        self.block(main.body, None, st)
        self.close_batches()
        self.flush_cg(st)
        if not st or not isinstance(st[-1], str) or not st[-1].startswith(("RET", "HALT", "JUMP_LABEL")):
            st.append("RET")
        # the actors' own coroutines
        for r in self.mod.routines:
            if r.id == "0" or r.kind != "def":
                continue
            if r.target and r.target[0] in ("actor", "object"):
                e = self.ent(r.target[1], r.target[0])
                if e is None:
                    self.notes.append(f"{self.name}: def {r.id} for {r.target[0]} {r.target[1]}: not on the map")
                    continue
                rows = []
                self.block(r.body, e, rows, own=True)
                e.own = rows
            else:
                self.notes.append(f"{self.name}: def {r.id} {r.target}: not translated")
                self.todo += 1

    def block(self, stmts, me, rows, own=False):
        """Translate statements. me: None (the station), or the entity whose own coroutine this is."""
        i = 0
        while i < len(stmts):
            s = stmts[i]
            nxt = stmts[i + 1:]
            try:
                self.stmt(s, me, rows, nxt)
            except Exception as ex:  # a translator bug must not lose the line
                self.todo_row(s, rows, f"translator error: {ex}")
            i += 1

    def stmt(self, s, me, rows, nxt):
        k = s.kind
        if self.banner and me is None:
            if k == "call" and s.name in ("screen_FadeIn", "screen_FadeOut", "Wait"):
                rows.append(f"# eos: {s.src} (the chapter card's)")
                return
            self.banner = False
        if k == "label":
            n = int(re.sub(r"\D", "", s.name) or 0)
            if me is None:
                self.freeze()
                self.after_label = True
            rows.append(("LABEL", n))
            return
        if k == "jump":
            n = int(re.sub(r"\D", "", s.name) or 0)
            if me is None:
                self.freeze()
            rows.append(f"JUMP_LABEL {n}")
            return
        if k == "ctrl":
            if s.name in ("end", "return") and me is None:
                self.close_batches()
                self.flush_cg(rows)
                rows.append("RET")
            elif s.name in ("end", "return"):
                rows.append("END_DELETE" if s.name == "end" else "RET")
            elif s.name == "hold":
                rows.append("HALT")
            elif s.name in ("break", "continue"):
                pass   # the switch / forever translation jumps on its own
            elif s.name == "break_loop" and getattr(self, "loops", None):
                rows.append(f"JUMP_LABEL {self.loops[-1]}")
            else:
                self.todo_row(s, rows)
            return
        if k == "forever":
            top = self.label_for(me)
            out = self.label_for(me)
            self.loops = getattr(self, "loops", []) + [out]
            rows.append(("LABEL", top))
            self.depth += 1
            if me is None:
                self.freeze()
            self.block(s.body, me, rows)
            if me is None:
                self.freeze()
            self.depth -= 1
            rows.append("WAIT 1   # (a forever loop)")
            rows.append(f"JUMP_LABEL {top}")
            rows.append(("LABEL", out))
            self.loops.pop()
            return
        if k == "with":
            ent = self.ent(s.target[1], s.target[0])
            for b in s.body:
                if b.kind == "call":
                    b.target = s.target
                    self.stmt(b, me, rows, [])
                elif b.kind == "ctrl" and b.name == "hold" and ent is not None:
                    self.emit(ent, me, rows, "HALT")
                else:
                    self.todo_row(b, rows)
            return
        if k == "if":
            return self.if_stmt(s, me, rows)
        if k == "switch":
            return self.switch(s, me, rows, nxt)
        if k == "textswitch":
            return self.message(s, me, rows, nxt)
        if k == "assign":
            return self.assign(s, rows)
        if k == "call":
            return self.call(s, me, rows, nxt)
        self.todo_row(s, rows)

    def label_for(self, me):
        if me is None:
            return self.station.label()
        me.labels = getattr(me, "labels", 2000) + 1
        return me.labels

    # -- conditions
    def cond_jumps(self, c, label):
        """Rows that jump to label when c holds, or None if c can't be translated."""
        if c[0] == "bin" and c[1] == "||":
            a, b = self.cond_jumps(c[2], label), self.cond_jumps(c[3], label)
            return None if a is None or b is None else a + b
        if c[0] == "bin" and c[2][0] == "scn" and c[3][0] == "list":
            var = c[2][1][1].lstrip("$")
            a, b = (ival(x) for x in c[3][1])
            op = {"==": "JUMPIF_SCENE_EQ", "<": "JUMPIF_SCENE_LT", ">": "JUMPIF_SCENE_GT"}.get(c[1])
            if op:
                return [f"{op} {var} {a} {b} {label}   # EoS scenario numbers"]
        if c == ("name", "variation"):
            return []        # EoS's "variation" run (the demo version): never in the story
        if c[0] == "bin" and c[1] == "==" and c[2][0] == "var" and ival(c[3]) is not None:
            return [f"JUMPIF_EQUAL {self.var(c[2][1])} {ival(c[3])} {label}"]
        if c[0] == "index" and c[1][0] == "var" and ival(c[2]) is not None:
            return [f"JUMPIF_ARRAY {self.var(c[1][1])} {ival(c[2])} {label}"]
        return None

    def var(self, v):
        n = v.lstrip("$")
        if n in VARS:
            if VARS[n].startswith("SKY_"):
                self.use("var", VARS[n])
            return VARS[n]
        if n not in RED_VARS:
            self.use("var", n)
        return n

    def if_stmt(self, s, me, rows):
        end = self.label_for(me)
        branches = [(s.cond, s.body)] + list(s.elifs)
        labels = [self.label_for(me) for _ in branches]
        if me is None:
            self.freeze()
        for (c, _), lab in zip(branches, labels):
            j = self.cond_jumps(c, lab)
            if j == []:
                rows.append(f"# eos: if ( {X.fmt(c)} ): never in the story (EoS's variation run)")
            if j is None:
                self.todo += 1
                rows.append(f"# TODO eos: if ( {X.fmt(c)} ): taken as true")
                rows.append(f"JUMP_LABEL {lab}")
                break
            rows += j
        else:
            if s.orelse is not None:
                self.depth += 1
                self.block(s.orelse, me, rows)
                self.depth -= 1
            rows.append(f"JUMP_LABEL {end}")
        for (c, body), lab in zip(branches, labels):
            rows.append(("LABEL", lab))
            self.depth += 1
            self.block(body, me, rows)
            if me is None:
                self.freeze()
            self.depth -= 1
            rows.append(f"JUMP_LABEL {end}")
        rows.append(("LABEL", end))

    def switch(self, s, me, rows, nxt):
        c = s.cond
        if c[0] == "call" and c[1] == "message_Menu":
            return self.menu(s, c, me, rows)
        if c[0] == "call" and c[1] == "message_SwitchMenu":
            return self.ask(s, me, rows)
        if c[0] == "call" and c[1] == "ProcessSpecial":
            return self.special(s, c, me, rows)
        if c[0] == "var" and c[1].lstrip("$") in VARS_FIXED:
            val, why = VARS_FIXED[c[1].lstrip("$")]
            pick = next((i for i, (v, b) in enumerate(s.cases) if ("num", val) in v), 0)
            self.translated += 1
            return self.chosen_case(s, me, rows, pick, f"# eos: {s.src}: case {val} ({why})")
        if c[0] == "index" and c[1][0] == "scn" and ival(c[2]) in (0, 1):
            if me is None:
                self.freeze()
            end = self.label_for(me)
            labs = [self.label_for(me) for _ in s.cases]
            rows.append(f"CJUMP_SCENARIO_{ival(c[2])} {c[1][1][1].lstrip('$')}   # EoS {s.src.rstrip(' {')}")
            dflt = end
            for (values, body), lab in zip(s.cases, labs):
                for v in values:
                    if v == "default":
                        dflt = lab
                    elif ival(v) is not None:
                        rows.append(f"COND_EQUAL {ival(v)} {lab}")
            rows.append(f"JUMP_LABEL {dflt}")
            self.translated += 1
            return self.cases_code(s.cases, labs, end, me, rows)
        # a switch on a value: the first case (the variant EoS plays by default) if it can't be decided
        if c[0] == "call" and c[1] == "sector":
            vals = None
        else:
            vals = c
        if me is None:
            self.freeze()
        end = self.label_for(me)
        labs = []
        for values, body in s.cases:
            labs.append(self.label_for(me))
        dflt = None
        jumps = []
        for (values, body), lab in zip(s.cases, labs):
            for v in values:
                if v == "default":
                    dflt = lab
                elif vals is not None and vals[0] == "var" and ival(v) is not None:
                    jumps.append(f"JUMPIF_EQUAL {self.var(vals[1])} {ival(v)} {lab}")
                elif vals is not None and vals[0] == "scn" and v[0] == "list":
                    a, b = (ival(x) for x in v[1])
                    jumps.append(f"JUMPIF_SCENE_EQ {vals[1][1].lstrip('$')} {a} {b} {lab}   # EoS scenario numbers")
                else:
                    jumps = None
                    break
            if jumps is None:
                break
        if jumps is None:
            self.todo += 1
            rows.append(f"# TODO eos: {s.src} (the first case is taken)")
            rows.append(f"JUMP_LABEL {labs[0]}")
        else:
            rows += jumps
            rows.append(f"JUMP_LABEL {dflt if dflt is not None else end}")
        self.cases_code(s.cases, labs, end, me, rows)

    def cases_code(self, cases, labs, end, me, rows):
        """Every case's code under its label (the decompiler's jumps go from one case into another)."""
        for (values, body), lab in zip(cases, labs):
            rows.append(("LABEL", lab))
            self.depth += 1
            self.block(body, me, rows)
            if me is None:
                self.freeze()
            self.depth -= 1
            if not ends(body):
                rows.append(f"JUMP_LABEL {end}")
        rows.append(("LABEL", end))

    def chosen_case(self, s, me, rows, pick, note):
        """A switch on something the GBA can't ask: go to case `pick` (index), keep the others' code."""
        if me is None:
            self.freeze()
        end = self.label_for(me)
        labs = [self.label_for(me) for _ in s.cases]
        rows.append(note)
        rows.append(f"JUMP_LABEL {labs[pick] if s.cases else end}")
        self.cases_code(s.cases, labs, end, me, rows)

    def ask(self, s, me, rows):
        """message_SwitchMenu after a question -> ASK2 + CHOICE; the answers' code under their labels."""
        q = None
        for j in range(len(rows) - 1, -1, -1):
            r = rows[j]
            if isinstance(r, str) and r.startswith(("MSG_NPC ", "MSG_QUIET ")):
                q = j
                break
            if isinstance(r, str) and (r.startswith("#") or r.startswith("PORTRAIT")):
                continue
            break
        if q is None:
            self.todo += 1
            rows.append("# TODO eos: a menu without a question before it")
            who, text = "-1", ""
        else:
            m = re.match(r'MSG_\w+ who=(\S+) text="(.*)"', rows[q])
            who, text = m.group(1), m.group(2)
            del rows[q]
        if me is None:
            self.freeze()
        end = self.label_for(me)
        labs = [self.label_for(me) for _ in s.cases]
        rows.append(f'ASK2 flag=FALSE default=-1 who={who} text="{text}"')
        dflt = None
        for (values, body), lab in zip(s.cases, labs):
            for v in values:
                if v == "default":
                    dflt = lab
                elif v[0] == "menu":
                    rows.append(f'CHOICE label={lab} text="{self.convert_text(v[1].get("english", ""), rows)}"')
        rows.append(f"JUMP_LABEL {dflt if dflt is not None else labs[-1]}   # (B / no choice)")
        for (values, body), lab in zip(s.cases, labs):
            rows.append(("LABEL", lab))
            rows.append("TEXTBOX_CLEAR")
            self.depth += 1
            self.block(body, me, rows)
            if me is None:
                self.freeze()
            self.depth -= 1
            if not ends(body):
                rows.append(f"JUMP_LABEL {end}")
        rows.append(("LABEL", end))

    def menu(self, s, c, me, rows):
        m = c[2][0][1] if c[2] else ""
        if m == "MENU_TEAM_NAME":
            rows.append("RENAME_TEAM   # EoS message_Menu(MENU_TEAM_NAME)")
            self.translated += 1
        elif m == "MENU_PLAYER_NAME":
            rows += ["CLEAR_HERO_NAME   # EoS message_Menu(MENU_PLAYER_NAME)", "RENAME_ALLY 1"]
            self.translated += 1
        elif m == "MENU_SAVE_MENU":
            rows.append("SKY_SAVE_GAME   # EoS message_Menu(MENU_SAVE_MENU)")
            self.translated += 1
        elif m in ("MENU_DUNGEON_INITIALIZE_TEAM", "MENU_DUNGEON_TEAM_RETURNS_FROM_MAP"):
            rows.append(f"# eos: {s.src.rstrip(' {}')} (EoS's team set-up before a dungeon: Red's own runs)")
            self.translated += 1
        elif m == "MENU_GIVE_ITEM":
            item = self.items.get(0)
            if item is None:
                self.todo_row(s, rows, "no item_Set before it")
            else:
                rows.append(f"SKY_GIVE_ITEM item={self.item_const(item)}   # EoS item_Set(0, {item}); message_Menu(MENU_GIVE_ITEM)")
                self.translated += 1
        else:
            self.todo_row(s, rows)
        for values, body in s.cases:
            self.block(body, me, rows)

    def item_const(self, item):
        name = getattr(self, "item_consts", {}).get(int(item))
        nm = getattr(self, "item_names", {}).get(int(item))
        for pat, red, _ in ITEM_SUBST:
            if name is None and nm and re.search(pat, nm):
                return red
        if name is None:     # an EoS-only item: named after it (the items piece adds it)
            name = "ITEM_" + (re.sub(r"[^A-Z0-9]+", "_", nm.upper()).strip("_") if nm else f"SKY_EOS_{item}")
            self.use("item", name)
        return name

    def special(self, s, c, me, rows):
        kind = c[2][0]
        kn = kind[1] if kind[0] == "name" else ival(kind)
        if kn == "PROCESS_SPECIAL_GET_HERO_KIND":
            # 0: the story's hero (the other kinds are the special episodes' heroes)
            pick = next((i for i, (v, b) in enumerate(s.cases) if ("num", 0) in v or "default" in v), 0)
            self.chosen_case(s, me, rows, pick, f"# eos: {s.src} (the story's hero: case 0)")
            self.translated += 1
            return
        if kn == 53:      # only in EoS's variation run (the demo version): never in the story
            rows.append(f"# eos: {s.src.rstrip(' {}')} (EoS's demo version only)")
            self.translated += 1
            if s.cases:
                self.cases_code(s.cases, [self.label_for(me) for _ in s.cases], self.label_for(me), me, rows)
            return
        if kn == "PROCESS_SPECIAL_JUMP_TO_TITLE_SCREEN":
            rows.append("SKY_DEMO_TO_TITLE   # EoS ProcessSpecial(PROCESS_SPECIAL_JUMP_TO_TITLE_SCREEN)")
            self.translated += 1
            return
        self.todo_row(s, rows, "ProcessSpecial: see SkyChapter2.md, engine gaps")
        if s.cases:
            self.chosen_case(s, me, rows, 0, "# (its first case is taken)")

    def assign(self, s, rows):
        lhs0 = s.args[0] if s.args else None
        nm = (lhs0[1] if lhs0 and lhs0[0] == "var" else lhs0[1][1] if lhs0 and lhs0[0] == "index"
              and lhs0[1][0] == "var" else "").lstrip("$")
        if nm in VARS_DROPPED:
            rows.append(f"# eos: {s.src} ({VARS_DROPPED[nm]}: nothing on the GBA)")
            self.translated += 1
            return
        m = re.match(r"dungeon_mode\((\d+)\) = DMODE_OPEN", s.src)
        if m and int(m.group(1)) in DUNGEON_OPEN:
            rows.append(f"CMD_UNK_AF {DUNGEON_OPEN[int(m.group(1))]} TRUE   # EoS {s.src}")
            self.translated += 1
            return
        if s.name == "=" and s.args and s.args[0] == ("var", "$SCENARIO_MAIN") and s.args[1][0] == "scnval":
            a, b = (ival(x) for x in s.args[1][1][1])
            rows.append(f"SCENARIO_CALC SCENARIO_MAIN {a} {b}   # EoS scenario numbers")
            self.translated += 1
            return
        op = {"=": "CALC_SET", "+=": "CALC_ADD", "-=": "CALC_SUB"}.get(s.name)
        if op and len(s.args) == 2 and ival(s.args[1]) is not None:
            lhs, val = s.args[0], ival(s.args[1])
            if lhs[0] == "var":
                rows.append(f"UPDATE_VARINT {op} {self.var(lhs[1])} {val}   # EoS {s.src}")
                self.translated += 1
                return
            if lhs[0] == "index" and lhs[1][0] == "var" and ival(lhs[2]) is not None and op == "CALC_SET":
                rows.append(f"SET_ARRAYVAL {self.var(lhs[1][1])} {ival(lhs[2])} {val}   # EoS {s.src}")
                self.translated += 1
                return
        self.todo_row(s, rows, "script variable")

    # ------------------------------------------------------------ calls

    def emit(self, ent, me, rows, line):
        """A command for ent: in its batch (from the station) or here (its own coroutine)."""
        if ent is None:
            rows.append(f"# eos: no such entity: {line}")
            return
        if me is ent:
            rows.append(line)
        elif me is None:
            if not ent.spawned or ent.destroyed:
                rows.append(f"# eos: {ent.eos} is not on the map here: {line}")
                return
            self.batch_rows(ent).append(line)
        else:
            rows.append(f"# TODO eos: {ent.eos} from {me.eos}'s coroutine: {line}")
            self.todo += 1

    def target(self, s, me):
        if s.target is None:
            return me
        kind, name = s.target
        if kind == "performer":
            return ("performer", int(name))
        return self.ent(name, kind)

    def call(self, s, me, rows, nxt):
        n = s.name
        a = s.args
        h = getattr(self, "c_" + n, None)
        if h is None:
            return self.todo_row(s, rows)
        before = self.todo
        r = h(s, a, me, rows, nxt)
        if r is False:
            self.todo_row(s, rows)
        elif self.todo == before:
            self.translated += 1

    # ---- timing
    def c_Wait(self, s, a, me, rows, nxt):
        if me is None and self.main_cg:
            self.main_cg[1] += ival(a[0]) or 0
            rows.append(f"# eos: {s.src} (the CG is up)")
            return
        if me is None:
            self.close_batches()
            self.clock(ival(a[0]))
            if self.cg_open:
                self.cg_open[3] += ival(a[0]) or 0
                rows.append(f"# eos: {s.src} (the CG is up)")
                return
        rows.append(f"WAIT {ival(a[0])}")

    def c_WaitRandom(self, s, a, me, rows, nxt):
        if me is None:
            self.close_batches()
        rows.append(f"WAIT_RANDOM {ival(a[0])} {ival(a[1])}")

    def clock(self, n):
        self.now += n or 0

    def c_WaitExecuteLives(self, s, a, me, rows, nxt):
        e = self.ent(a[0][1])
        if e is None:
            return False
        if me is not None:
            rows.append(f"# eos: {s.src} (in a coroutine: no wait)")
            return
        self.close_batches()
        self.wait_for(e, rows)

    def c_WaitExecuteObject(self, s, a, me, rows, nxt):
        e = self.ent(a[0][1], "object")
        if e is None or me is not None:
            return False
        self.close_batches()
        self.wait_for(e, rows)

    def c_WaitExecutePerformer(self, s, a, me, rows, nxt):
        if me is None:
            self.close_batches()
        if self.main_cg and self.perf_move:
            self.main_cg[1] += max(0, self.perf_move[1] - self.now)
            rows.append(f"# eos: {s.src} (the CG is up)")
            self.perf_move = None
            return
        if self.perf_move and self.perf_move[1] > self.now:
            left = self.perf_move[1] - self.now
            rows.append(f"WAIT {left}   # EoS WaitExecutePerformer({ival(a[0])}): the rest of the camera's move")
            self.now += left
            self.perf_move = None
        else:
            rows.append(f"# eos: {s.src} (the camera has arrived)")

    def c_WaitLockLives(self, s, a, me, rows, nxt):
        rows.append(f"# eos: {s.src} (Unlock below waits for it)")

    def c_Lock(self, s, a, me, rows, nxt):
        if me is None:
            self.close_batches()
        rows.append(f"AWAIT_CUE {ival(a[0])}   # EoS Lock({ival(a[0])})")

    def c_Unlock(self, s, a, me, rows, nxt):
        n = ival(a[0])
        if n in self.lock_users:
            rows.append(f"AWAIT_CUE_COND {n} 0   # EoS Unlock({n}): once it is waiting")
        else:
            rows.append(f"ALERT_CUE {n}   # EoS Unlock({n})")

    def c_WaitEffect(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if isinstance(e, Entity):
            # SetEffect + WaitEffect -> the common script that shows it and waits (chapter 1)
            rr = rows if me is e else (e.batches[-1].rows if e.batches and e.batches[-1].open else None)
            if rr is not None and rr and re.match(r"EMOTION_EFFECT (\w+)", rr[-1] or ""):
                eff = re.match(r"EMOTION_EFFECT (\w+)", rr[-1]).group(1)
                func = {v[0]: v[1] for v in EFFECTS.values() if v[1]}.get(eff)
                if func:
                    rr[-1] = f"CALL_SCRIPT {func}"
                    return
            self.emit(e, me, rows, "WAIT_EFFECT")
            return
        return False

    def c_WaitAnimation(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        rr = rows if me is e else (e.batches[-1].rows if e.batches and e.batches[-1].open else [])
        if rr and isinstance(rr[-1], str) and "TODO anim" in rr[-1]:
            # the stand-in pose loops: STOP_ANIMATION_ON_CURRENT_FRAME would wait for ever
            self.emit(e, me, rows, "WAIT 30   # TODO anim: EoS WaitAnimation (STOP_ANIMATION_ON_CURRENT_FRAME "
                                   "once the animation is there)")
            return
        self.emit(e, me, rows, "STOP_ANIMATION_ON_CURRENT_FRAME   # EoS WaitAnimation")

    def c_WaitScreenFade(self, s, a, me, rows, nxt):
        rows.append("WAIT_FADE")

    # ---- actors
    def c_SetAnimation(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        n = ival(a[0])
        if e.is_object and n in OBJECT_ANIMS:     # an object's states are the directions of its group
            self.emit(e, me, rows, f"SELECT_ANIMATION {OBJECT_ANIMS[n]}   # EoS SetAnimation({n}): {OBJECT_ANIM_NOTES[n]}")
            return
        if n == 62:          # EoS's lying asleep (INIT_SLEEP_FUNC): Red's sleep pose
            self.emit(e, me, rows, "SELECT_ANIMATION 6   # EoS SetAnimation(62): asleep")
            return
        if e.npc in ("PLAYER", "PARTNER") and n in HERO_ANIMS and n != 62:
            red, now = HERO_ANIMS[n]
            self.emit(e, me, rows, f"SELECT_ANIMATION {now}   # TODO anim: EoS SetAnimation({n}) is "
                                   f"SELECT_ANIMATION {red} once the hero and partner have EoS ground groups (ch2-heroanims)")
            return
        if n in EOS_RED_ANIM and not e.is_object:   # the Red id that holds EoS's value
            red = EOS_RED_ANIM[n]
            self.emit(e, me, rows, f"SELECT_ANIMATION {red}   # EoS SetAnimation({n})")
            return
        if 51 < n < 0x100:   # past Red's ground animation table (gUnknown_8117F64)
            self.todo += 1
            self.emit(e, me, rows, f"# TODO eos: {s.src} (no such Red animation id)")
            return
        name = {22: "TWITCH", 24: "BEATEN"}.get(n, str(n))
        note = f"   # EoS animation {n}: check the sprite has it" if 24 < n < 0x100 else ""
        self.emit(e, me, rows, f"SELECT_ANIMATION {name}{note}")

    def c_SetDirection(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        d = DIRS.get(a[0][1])
        if d is None:
            return False
        e.facing = d
        self.emit(e, me, rows, f"SET_DIR_WAIT DIRECTION_{d} 0")

    def c_Turn2Direction(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        d = DIRS.get(a[2][1]) if len(a) > 2 and a[2][0] == "name" else None
        if not isinstance(e, Entity) or d is None:
            return False
        e.facing = d
        self.emit(e, me, rows, f"ROTATE_TO speed={ival(a[0])} turn={TURN.get(ival(a[1]), ival(a[1]))} direction={d}")

    def c_Turn2DirectionTurn(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        self.emit(e, me, rows, f"ROTATE_RELATIVE {ival(a[0])} {ival(a[1])} {turn_full(ival(a[2]))}")

    def c_Turn2DirectionLives(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        t = ival(a[1])
        turn = "DIR_TRANS_11" if t == 10 else TURN.get(t, t)   # chapter 1: 10 -> DIR_TRANS_11
        self.emit(e, me, rows, f"ROTATE_TO_LIVES speed={ival(a[0])} turn={turn} kind={self.lives_kind(a[2][1])}")

    def move(self, s, a, me, rows, slide, mode):
        e = self.target(s, me)
        spd = speed256(a[0][1])
        if isinstance(e, tuple):       # a performer: the camera
            return self.perf_move_to(s, a, rows, mode, e[1])
        if not isinstance(e, Entity):
            return False
        if mode == "offset":
            dx, dy = ival(a[1]), ival(a[2])
            if dx is None or dy is None:
                return False
        elif mode == "mark":
            p = a[1]
            dx, dy = int(round(p[2] * 8 - e.px)), int(round(p[3] * 8 - e.py))
        elif mode == "lives":
            o = self.ent(a[1][1])
            if o is None:
                return False
            dx, dy = o.px - e.px, o.py - e.py
        e.px += dx
        e.py += dy
        op = "MOVE_RELATIVE" if slide else "WALK_RELATIVE"
        note = f"   # EoS {s.src.split('<')[0]} to {X.fmt(a[1])}" if mode == "mark" else ""
        self.emit(e, me, rows, f"{op} speed={spd} dx={dx} dy={dy}{note}")

    def c_MovePositionOffset(self, s, a, me, rows, nxt):
        return self.move(s, a, me, rows, False, "offset")

    def c_Move2PositionOffset(self, s, a, me, rows, nxt):
        return self.move(s, a, me, rows, False, "offset")

    def c_SlidePositionOffset(self, s, a, me, rows, nxt):
        return self.move(s, a, me, rows, True, "offset")

    def c_Slide2PositionOffset(self, s, a, me, rows, nxt):
        return self.move(s, a, me, rows, True, "offset")

    def c_MovePositionMark(self, s, a, me, rows, nxt):
        return self.move(s, a, me, rows, False, "mark")

    def c_Move2PositionMark(self, s, a, me, rows, nxt):
        return self.move(s, a, me, rows, False, "mark")

    def c_SlidePositionMark(self, s, a, me, rows, nxt):
        return self.move(s, a, me, rows, True, "mark")

    def c_MovePositionLives(self, s, a, me, rows, nxt):
        return self.move(s, a, me, rows, False, "lives")

    def c_SetPositionMark(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        p = a[0]
        dx, dy = int(round(p[2] * 8 - e.px)), int(round(p[3] * 8 - e.py))
        e.px += dx
        e.py += dy
        self.emit(e, me, rows, f"MOVE_RELATIVE_POS 0 {dx} {dy}   # EoS SetPositionMark")

    def c_SetPositionOffset(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        dx, dy = ival(a[0]), ival(a[1])
        e.px += dx
        e.py += dy
        self.emit(e, me, rows, f"MOVE_RELATIVE_POS 0 {dx} {dy}")

    def c_SetPositionInitial(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        x0, y0 = e.d["x"] * 8, e.d["y"] * 8
        dx, dy = x0 - e.px, y0 - e.py
        e.px, e.py = x0, y0
        if dx or dy:
            self.emit(e, me, rows, f"MOVE_RELATIVE_POS 0 {dx} {dy}   # EoS SetPositionInitial")
        else:
            rows.append(f"# eos: {s.src} (already there)")

    def c_MoveHeight(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        self.emit(e, me, rows, f"HEIGHT_TO {speed256(a[0][1])} {ival(a[1])}")

    def c_SetHeight(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        self.emit(e, me, rows, f"SET_HEIGHT {ival(a[0])}")

    def c_SetOutputAttribute(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        self.emit(e, me, rows, f"SET_OBJ_FLAGS 0x80000   # EoS SetOutputAttribute({ival(a[0])}): drawn over the map's front layer")

    def c_SetEffect(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        nm = re.sub(r"^EFFECT_", "", a[0][1]) if a and a[0][0] == "name" else None
        if isinstance(e, Entity) and nm in EFFECTS_NONE:
            self.emit(e, me, rows, f"# TODO emotion: EoS {s.src} (no GBA picture: none shown)")
            return
        if not isinstance(e, Entity) or nm not in EFFECTS:
            return False
        note = f"   # TODO emotion: EoS EFFECT_{nm} has no GBA picture: the closest" if nm in EFFECTS_NO_PICTURE else ""
        self.emit(e, me, rows, f"EMOTION_EFFECT {EFFECTS[nm][0]}{note}")

    def c_Destroy(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        self.emit(e, me, rows, "END_DELETE")
        if me is None:
            e.destroyed = True
            if e.batches:
                e.batches[-1].open = False

    def c_ExecuteCommon(self, s, a, me, rows, nxt):
        e = self.target(s, me)
        if not isinstance(e, Entity):
            return False
        coro = re.sub(r"^CORO_|_SERIES$", "", a[0][1])
        f = COROS.get(coro)
        if f is None:
            return False
        if isinstance(f, list):
            for ln in f:
                self.emit(e, me, rows, ln)
            rows_note = f"# (EoS {a[0][1]})"
            self.emit(e, me, rows, rows_note)
        else:
            self.emit(e, me, rows, f"CALL_SCRIPT {f}   # EoS {a[0][1]}")

    def c_CallCommon(self, s, a, me, rows, nxt):
        coro = a[0][1]
        if coro == "CORO_MESSAGE_CLOSE_WAIT_FUNC":
            return self.close(s, me, rows, nxt)
        if coro == "CORO_HANYOU_SAVE_FUNC":
            return self.save_prompt(me, rows)
        if coro == "CORO_EVENT_END_MAPIN":
            return self.flow(s, a, me, rows, nxt)
        if coro == "CORO_FADE_OUT_ALL_AFTER":
            rows.append("# eos: CallCommon(CORO_FADE_OUT_ALL_AFTER) (the scene's end)")
            return
        if me is not None:
            return self.c_ExecuteCommon(s, a, me, rows, nxt)
        return False

    def save_prompt(self, me, rows):
        """EoS CORO_HANYOU_SAVE_FUNC: "Would you like to save your adventure?" (as the demo's end asks)."""
        save, skip, fail = self.label_for(me), self.label_for(me), self.label_for(me)
        if me is None:
            self.close_batches()
        rows += ['ASK2 flag=FALSE default=-1 who=-1 text="{CENTER_ALIGN}Would you like to save your adventure?"',
                 f'CHOICE label={save} text="Save"', f'CHOICE label={skip} text="Don\'t save"',
                 ("LABEL", save), "TEXTBOX_CLEAR", "SKY_SAVE_GAME   # EoS CORO_HANYOU_SAVE_FUNC",
                 f"COND_EQUAL 0 {fail}", 'MSG_INSTANT text="{CENTER_ALIGN}Your adventure has been saved."',
                 f"JUMP_LABEL {skip}", ("LABEL", fail),
                 'MSG_INSTANT text="{CENTER_ALIGN}The data could not be saved."', ("LABEL", skip), "TEXTBOX_CLEAR"]

    def c_JumpCommon(self, s, a, me, rows, nxt):
        if a[0][1] == "CORO_END_TALK":
            rows.append("TEXTBOX_CLEAR")
            rows.append("RET   # EoS JumpCommon(CORO_END_TALK)")
            return
        return False

    # ---- messages
    def portrait(self, who, face, pos, rows):
        place = FACE_POS.get(re.sub(r"^FACE_POS_", "", pos), None)
        emo = FACES.get(re.sub(r"^FACE_", "", face).replace("-", "_"))
        if place is None or emo is None:
            return False
        if self.placed.get(who) == (place, emo):
            return       # the same face again: chapter 1 leaves it out
        p = "KEEP" if (self.placed.get(who) or (None,))[0] == place else place
        self.placed[who] = (place, emo)
        rows.append(f"PORTRAIT place={p} who={who if who else -1} emotion={emo}")
        if getattr(self, "offset_who", None) == who and p != "KEEP":
            rows.append(f"PORTRAIT_POS NPC_{who} 0 0   # (EoS's offset ends with a new place)")
            self.offset_who = None

    def c_message_SetFace(self, s, a, me, rows, nxt):
        who = self.who(a[0][1])
        self.speaker = who
        if who:
            self.need_name(who)
        return self.portrait(who, a[1][1], a[2][1], rows)

    def c_message_FacePositionOffset(self, s, a, me, rows, nxt):
        who = self.speaker if self.speaker is not None else -1
        dx, dy = ival(a[0]), ival(a[1])
        if dx is None or dy is None:
            return False
        rows.append(f"PORTRAIT_POS {who if who == -1 else 'NPC_' + who} {dx * 8} {dy * 8}   # EoS {s.src} (tiles)")
        self.offset_who = who

    def c_message_SetFaceOnly(self, s, a, me, rows, nxt):
        return self.c_message_SetFace(s, a, me, rows, nxt)

    def c_message_SetFaceEmpty(self, s, a, me, rows, nxt):
        self.speaker = self.who(a[0][1])
        rows.append(f"# eos: {s.src} (no portrait)")

    def c_message_SetActor(self, s, a, me, rows, nxt):
        self.speaker = self.who(a[0][1])
        if self.speaker:
            self.need_name(self.speaker)
        rows.append(f"# eos: {s.src}")

    def c_message_ResetActor(self, s, a, me, rows, nxt):
        self.speaker = None
        rows.append(f"# eos: {s.src} (no speaker)")

    def c_message_EmptyActor(self, s, a, me, rows, nxt):
        return self.c_message_ResetActor(s, a, me, rows, nxt)

    def message(self, s, me, rows, nxt):
        """message_Talk / Monologue / SwitchTalk...: one line of text (the default variant)."""
        n = s.name
        if s.kind == "textswitch":
            # chapter 1 plays the default variant ($PARTNER_TALK_KIND / $HERO_TALK_KIND)
            body = next((b for v, b in s.cases if "default" in v), s.cases[-1][1])
            text = self.text(body, rows)
            n = "message_Monologue" if n == "message_SwitchMonologue" else "message_Talk"
        else:
            text = self.text(s.args[-1] if s.args else None, rows)
        if me is None:
            self.close_batches()
        self.flush_cg(rows)
        who = self.speaker if self.speaker is not None else "-1"
        if n == "message_Talk":
            rows.append(f'MSG_NPC who={who} text="{text}"')
        elif n == "message_Monologue":
            rows.append(f'MSG_QUIET who={who} text="{text}"')
        elif n in ("message_Mail", "message_Notice"):
            rows.append(f'MSG_INSTANT text="{text}"   # EoS {n}')
        elif n == "message_Explanation":
            rows.append(f'MSG_NPC who=-1 text="{text}"   # EoS message_Explanation')
        elif n == "message_ImitationSound":
            rows.append(f'MSG_OVERHEARD text="{text}"   # EoS message_ImitationSound')
        elif n == "message_Narration":
            frames = ival(s.args[0]) if len(s.args) > 1 else 30
            rows.append(f'MSG_ON_BG_AUTO frames={frames} text="{text}"')
        else:
            return False
        self.translated += 1

    def c_message_Talk(self, s, a, me, rows, nxt):
        self.message(s, me, rows, nxt)
        self.translated -= 1

    c_message_Monologue = c_message_Mail = c_message_Notice = c_message_Explanation = c_message_Talk
    c_message_ImitationSound = c_message_Narration = c_message_Talk

    def close(self, s, me, rows, nxt):
        """Close the text box, unless another line follows straight away (chapter 1 runs them on)."""
        for t in nxt:
            if t.kind == "textswitch" or (t.kind == "call" and t.name in (
                    "message_Talk", "message_Monologue", "message_Explanation")):
                rows.append(f"# eos: {s.src} (the next line follows)")
                return
            if t.kind == "call" and t.name in ("message_SetFace", "message_SetFaceOnly", "message_SetActor",
                                                 "message_ResetActor", "message_EmptyActor", "message_SetFaceEmpty"):
                continue
            break
        rows.append("TEXTBOX_CLEAR")

    def c_message_Close(self, s, a, me, rows, nxt):
        return self.close(s, me, rows, nxt)

    def c_message_CloseEnforce(self, s, a, me, rows, nxt):
        rows.append("TEXTBOX_CLEAR")

    def c_message_KeyWait(self, s, a, me, rows, nxt):
        rows.append(f"# eos: {s.src} (the line above waits for a button)")

    def c_message_SetWaitMode(self, s, a, me, rows, nxt):
        rows.append(f"TEXTBOX_AUTO_PRESS {ival(a[0])} {ival(a[1])}   # EoS message_SetWaitMode")

    # ---- sound
    def c_sound_Stop(self, s, a, me, rows, nxt):
        rows.append("BGM_STOP")

    def c_bgm_Stop(self, s, a, me, rows, nxt):
        rows.append("BGM_STOP")

    def c_bgm_PlayFadeIn(self, s, a, me, rows, nxt):
        song, fr = self.music(a[0]), ival(a[1])
        rows.append(f"BGM_FADEIN frames={fr} song={song}" if fr else f"BGM_SWITCH {song}")

    def c_bgm_Play(self, s, a, me, rows, nxt):
        rows.append(f"BGM_SWITCH {self.music(a[0])}")

    def c_bgm_FadeOut(self, s, a, me, rows, nxt):
        rows.append(f"BGM_FADEOUT {ival(a[0])}")

    def c_WaitBgm(self, s, a, me, rows, nxt):
        if me is None:
            self.close_batches()
        rows.append(f"WAIT_BGM MUS_{self.music(a[0])}")

    def c_bgm2_PlayFadeIn(self, s, a, me, rows, nxt):
        rows.append(f"SKY_AMBIENCE song={self.music(a[0])} frames={ival(a[1])}")

    def c_bgm2_Play(self, s, a, me, rows, nxt):
        rows.append(f"SKY_AMBIENCE song={self.music(a[0])} frames=0")

    def c_bgm2_Stop(self, s, a, me, rows, nxt):
        rows.append("SKY_AMBIENCE_FADEOUT 0")

    def c_bgm2_FadeOut(self, s, a, me, rows, nxt):
        rows.append(f"SKY_AMBIENCE_FADEOUT {ival(a[0])}")

    def c_se_Play(self, s, a, me, rows, nxt):
        name, note = self.se(ival(a[0]), rows)
        rows.append(f"FANFARE_PLAY2 {name}   # {note}")

    def c_WaitSe(self, s, a, me, rows, nxt):
        if me is None:
            self.close_batches()
        name, _ = self.se(ival(a[0]), rows)
        rows.append(f"WAIT_FANFARE2 {name}")

    def c_se_Stop(self, s, a, me, rows, nxt):
        name, _ = self.se(ival(a[0]), rows)
        rows.append(f"FANFARE_STOP2 {name}")

    def c_se_FadeOut(self, s, a, me, rows, nxt):
        name, _ = self.se(ival(a[0]), rows)
        rows.append(f"FANFARE_FADEOUT2 {ival(a[1])} {name}")

    def c_me_Play(self, s, a, me, rows, nxt):
        n = ival(a[0])
        if n not in ME:
            return False
        rows.append(f"FANFARE_PLAY {ME[n]}   # EoS me_Play({n})")

    def c_WaitMe(self, s, a, me, rows, nxt):
        n = ival(a[0])
        if n not in ME:
            return False
        if me is None:
            self.close_batches()
        rows.append(f"WAIT_FANFARE1 {ME[n]}")

    # ---- screen
    def c_screen_FadeIn(self, s, a, me, rows, nxt):
        if self.main_cg and me is None:
            rows.append(f"# eos: {s.src} (the CG fades in itself)")
            return
        w, f = ival(a[0]), ival(a[1])
        if me is None and w:
            self.close_batches()
        self.flush_cg(rows)
        if self.screen.startswith("white"):
            kind = "PALUTIL_KIND_01" if self.screen == "white_all" else "PALUTIL_KIND_05"
            rows.append(f"FLASH_FROM wait={'TRUE' if w else 'FALSE'} kind={kind} frames={f} color=RGB_U32(0xFF, 0xFF, 0xFF)")
        else:
            pan = getattr(self, "pending_pan", None)
            if pan:
                rows.append("WAIT 1   # the actors take their poses; the pan draws them")
                rows.append(f"SKY_CUTAWAY cg={pan} frames=90   # EoS: the top screen's picture over the map: pan down to it")
                rows.append("FADE_IN wait=TRUE frames=0   # the pan ends on this exact view")
                self.pending_pan = None
            else:
                rows.append(f"FADE_IN wait={'TRUE' if w else 'FALSE'} frames={f}")
        self.screen = "shown"
        if not self.faded_in:
            self.faded_in = True
            rows.append("SET_PLACE_MODE 4")

    def c_screen_FadeChange(self, s, a, me, rows, nxt):
        # screen_FadeChange(wait, frames, from, to): a fade between two brightness levels (EoS's
        # nights: 0 -> 192). The GBA fades in to full brightness: the night maps are dark already.
        w, f = ival(a[0]), ival(a[1])
        if ival(a[2]) == 0:
            self.c_screen_FadeIn(s, [("num", w), ("num", f)], me, rows, nxt)
            rows[-2 if rows[-1] == "SET_PLACE_MODE 4" else -1] += f"   # EoS {s.src} (to full brightness)"
            return
        return False

    def c_screen_FadeInAll(self, s, a, me, rows, nxt):
        self.c_screen_FadeIn(s, a, me, rows, nxt)
        rows.append("FADE2_IN wait=TRUE frames=0")

    def c_screen_FadeOut(self, s, a, me, rows, nxt):
        if self.main_cg and me is None:
            cg, frames, rr, idx = self.main_cg
            rr[idx] = f"SKY_CUTAWAY cg={cg} frames={max(60, frames)}   # EoS: the main screen's picture (and its waits)"
            rows.append(f"# eos: {s.src} (the CG fades out itself)")
            self.main_cg = None
            return
        self.flush_cg(rows)
        w, f = ival(a[0]), ival(a[1])
        if me is None and w:
            self.close_batches()
        rows.append(f"FADE_OUT wait={'TRUE' if w else 'FALSE'} frames={f}")
        self.screen = "black"

    def c_screen_FadeOutAll(self, s, a, me, rows, nxt):
        self.c_screen_FadeOut(s, a, me, rows, nxt)
        rows.append("FADE2_OUT wait=TRUE frames=0")

    def white(self, s, a, me, rows, kind):
        w, f = ival(a[0]), ival(a[1])
        if me is None and w:
            self.close_batches()
        rows.append(f"FLASH_TO wait={'TRUE' if w else 'FALSE'} kind={kind} frames={f} color=RGB_U32(0xFF, 0xFF, 0xFF)")

    def c_screen_WhiteOut(self, s, a, me, rows, nxt):
        self.white(s, a, me, rows, "PALUTIL_KIND_05")
        self.screen = "white"

    def c_screen_WhiteOutAll(self, s, a, me, rows, nxt):
        self.white(s, a, me, rows, "PALUTIL_KIND_01")
        self.screen = "white_all"

    def c_screen_FlushOut(self, s, a, me, rows, nxt):
        # screen_FlushOut(wait, ?, frames, r, g, b)
        w, f = ival(a[0]), ival(a[2])
        col = ", ".join(f"0x{ival(x):02X}" for x in a[3:6])
        rows.append(f"FLASH_TO wait={'TRUE' if w else 'FALSE'} kind=PALUTIL_KIND_05 frames={f} color=RGB_U32({col})")

    def c_screen_FlushIn(self, s, a, me, rows, nxt):
        w, f = ival(a[0]), ival(a[2])
        col = ", ".join(f"0x{ival(x):02X}" for x in a[3:6])
        rows.append(f"FLASH_FROM wait={'TRUE' if w else 'FALSE'} kind=PALUTIL_KIND_05 frames={f} color=RGB_U32({col})")

    def c_screen2_FadeIn(self, s, a, me, rows, nxt):
        rows.append(f"# eos: {s.src} (the top screen)")

    c_screen2_FadeOut = c_screen2_FlushOut = c_screen2_FlushIn = c_back2_SetMode = c_screen2_FadeIn

    def c_camera2_SetPositionMark(self, s, a, me, rows, nxt):
        rows.append(f"# eos: {s.src} (the top screen's view)")

    def c_back2_SetGround(self, s, a, me, rows, nxt):
        """A picture on EoS's top screen. Before the scene shows: a pan from it (if there is one) or
        the picture; in the middle of a scene: the scene fades out, the CG shows, the scene fades in."""
        still, pan = self.cg_of(a[0][1])
        if not self.faded_in or (self.screen == "black" and not self.cg_open):   # a scene starts
            self.base_cg = still
            if pan:
                self.pending_pan = pan
            else:
                # a still picture over the whole scene: chapter 1 leaves these out (m01a0301, m01a0702)
                rows.append(f"# eos: {s.src} (the top screen's picture: {still}; left out as in chapter 1)")
            return
        self.flush_cg(rows)
        if still == getattr(self, "base_cg", None):
            rows.append(f"# eos: {s.src} (the top screen's picture again)")
            return
        rows.append("FADE_OUT wait=TRUE frames=20   # fade the scene out and back in around the CG")
        rows.append(None)          # the SKY_CUTAWAY, once its frames are known
        self.cg_open = [still, len(rows) - 1, rows, 0]

    def flush_cg(self, rows):
        if not self.cg_open:
            return
        still, idx, rr, frames = self.cg_open
        rr[idx] = f"SKY_CUTAWAY cg={still} frames={max(60, frames + 60)}   # EoS: the top screen's picture"
        rr.insert(idx + 1, "FADE_IN wait=TRUE frames=20")
        self.cg_open = None

    def c_back_SetGround(self, s, a, me, rows, nxt):
        lv = re.sub(r"^LEVEL_", "", a[0][1])
        if lv in MAIN_CGS:
            rows.append(None)      # the SKY_CUTAWAY, once its frames are known (screen_FadeOut)
            self.main_cg = [MAIN_CGS[lv], 0, rows, len(rows) - 1]
            return
        if lv == "S04P01A":     # EoS's black level (voices in the dark): chapter 1's storm map, hidden
            rows += ["SELECT_MAP SKY_STORM_SEA   # EoS LEVEL_S04P01A: a black screen", "SKY_SHOW_MAP FALSE"]
            self.hidden_map = True
            return
        if getattr(self, "hidden_map", False):
            rows.append("SKY_SHOW_MAP TRUE")
            self.hidden_map = False
        if me is None:
            # SELECT_MAP deletes every actor and object: what is on the map is gone
            # (supervision_RemoveActing after it has nothing to remove)
            self.close_batches()
            for e in self.ents:
                if e.spawned and not e.destroyed:
                    e.destroyed = True
        rows.append(f"SELECT_MAP {self.map_of(lv)}")

    def c_back_ChangeGround(self, s, a, me, rows, nxt):
        return self.c_back_SetGround(s, a, me, rows, nxt)

    def c_back_SetBanner2(self, s, a, me, rows, nxt):
        title = self.text(a[-1]).replace("\\n", " ")
        if self.chapter2 and "New Guild" in title:
            # chapter 2's card (src/chapter_titles.c): EVENT_DIVIDE queues it as the scenario goes
            # from (3, 0) to (3, 1) and it shows at the next SELECT_MAP, as chapter 1's does
            rows.append(f"# eos: chapter card \"{title}\" ({s.src.split('{')[0].strip()}): shown at the next "
                        "SELECT_MAP (src/chapter_titles.c, queued by EVENT_DIVIDE)")
            self.banner = True
            return
        rows.append(f"# TODO eos: chapter card \"{title}\" ({s.src.split('{')[0].strip()}): "
                    "sky_chapter_card / chapter_titles.h")
        self.todo += 1

    def c_supervision_Acting(self, s, a, me, rows, nxt):
        n = ival(a[0])
        if n is None or n >= len(self.layers):
            return False
        layer = self.layers[n]
        acts = [e for e in layer if not e.is_object]
        objs = [e for e in layer if e.is_object]
        for e in layer:
            e.spawned, e.destroyed = True, False
            e.px, e.py = e.d["x"] * 8, e.d["y"] * 8
            e.facing = DIRS.get(e.d.get("dir") or "", "SOUTH")
        self.acting = getattr(self, "acting", []) + [n]
        if self.perf_layers[n]:
            self.perf_pos = {i: (p["x"] * 8 + (4 if p["xo"] >= 2 else 0), p["y"] * 8 + (4 if p["yo"] >= 2 else 0))
                             for i, p in enumerate(self.perf_layers[n])}
        if (acts and objs) or (n == 0 and acts):    # sector 0: SELECT_ENTITIES, as chapter 1
            rows.append(f"SELECT_ENTITIES group=-1 sector={n}   # EoS supervision_Acting({n})")
        elif acts:
            rows.append(f"SELECT_LIVES group=-1 sector={n}   # EoS supervision_Acting({n})")
        elif objs:
            rows.append(f"SELECT_OBJECTS group=-1 sector={n}   # EoS supervision_Acting({n})")
        else:
            rows.append(f"# eos: {s.src} (only the camera's performer)")

    def c_supervision_RemoveActing(self, s, a, me, rows, nxt):
        n = ival(a[0])
        if n is None or n >= len(self.layers):
            return False
        for e in self.layers[n]:
            if e.spawned and not e.destroyed:
                self.emit(e, me, rows, f"END_DELETE   # EoS supervision_RemoveActing({n})")
                e.destroyed = True
                if e.batches:
                    e.batches[-1].open = False
        rows.append(f"# eos: {s.src}")

    def c_supervision_SpecialActing(self, s, a, me, rows, nxt):
        k = tuple(ival(x) for x in a)
        mode = {(4, -4, 8): "KRABBY_SAND", (5, -2, 4): "KRABBY_SUNSET"}.get(k)   # chapter 1
        if mode is None:
            return False
        rows.append(f"SKY_BUBBLES {mode}   # EoS {s.src}")

    def c_supervision2_SpecialActing(self, s, a, me, rows, nxt):
        rows.append(f"# eos: {s.src} (the top screen)")

    def c_supervision_StationCommon(self, s, a, me, rows, nxt):
        rows.append(f"# eos: {s.src} (the map's own NPCs: none in a scene)")

    def c_supervision_Station(self, s, a, me, rows, nxt):
        return self.c_supervision_StationCommon(s, a, me, rows, nxt)

    def c_debug_Print(self, s, a, me, rows, nxt):
        rows.append(f"# eos: {s.src}")

    # ---- camera
    def c_camera_SetMyself(self, s, a, me, rows, nxt):
        t = self.target(s, me)
        self.end_pan(me, rows)
        if isinstance(t, tuple):
            pos = self.perf_pos.get(t[1])
            if pos is None:
                return False
            self.camera = ("perf", t[1])
            if self.main_cg:
                rows.append(f"# eos: {s.src} (the CG's view, as cropped)")
                return
            rows.append(f"SKY_CAMERA_SET x={pos[0] + 4 - 120} y={pos[1] + 4 - 80}   # EoS camera_SetMyself<performer {t[1]}>")
            return
        if isinstance(t, Entity):
            self.camera = ("ent", t)
            self.emit(t, me, rows, "CAMERA_INIT_PAN   # the camera follows")
            return
        return False

    def end_pan(self, me, rows):
        if self.camera and self.camera[0] == "ent":
            self.emit(self.camera[1], me, rows, "CAMERA_END_PAN")
        self.camera = None

    def c_camera_SetMyPosition(self, s, a, me, rows, nxt):
        t = self.target(s, me)
        if not isinstance(t, Entity):
            return False
        self.end_pan(me, rows)
        rows.append(f"SKY_CAMERA_SET x={t.px + 4 - 120} y={t.py + 4 - 80}   # EoS {s.src}")

    def c_camera_SetPositionMark(self, s, a, me, rows, nxt):
        p = a[0]
        self.end_pan(me, rows)
        rows.append(f"SKY_CAMERA_SET x={int(p[2] * 8) + 4 - 120} y={int(p[3] * 8) + 4 - 80}   # EoS {s.src}")

    def perf_move_to(self, s, a, rows, mode, idx):
        spd = float(a[0][1])
        pos = self.perf_pos.get(idx)
        if pos is None:
            return False
        if mode == "offset":
            dx, dy = ival(a[1]), ival(a[2])
        elif mode == "lives":
            o = self.ent(a[1][1])
            if o is None:
                return False
            dx, dy = o.px + 4 - pos[0], o.py + 4 - pos[1]
        else:
            p = a[1]
            dx, dy = int(p[2] * 8 + 4) - pos[0], int(p[3] * 8 + 4) - pos[1]
        self.perf_pos[idx] = (pos[0] + dx, pos[1] + dy)
        if self.main_cg:
            frames = int(math.ceil(math.hypot(dx, dy) / spd)) if spd else 0
            self.perf_move = (idx, self.now + frames)
            rows.append(f"# eos: {s.src} (the CG's view, as cropped)")
            return
        if self.camera != ("perf", idx):
            rows.append(f"# eos: {s.src} (the camera's performer, not followed now)")
            return
        frames = int(math.ceil(math.hypot(dx, dy) / spd)) if spd else 0
        self.perf_move = (idx, self.now + frames)
        if dy:
            rows.append(f"SKY_CAMERA_MOVE dy={dy} speed={speed256(spd)}   # EoS {s.src}")
        if dx:
            rows.append(f"SKY_CAMERA_MOVE_X dx={dx} speed={speed256(spd)}" + ("" if dy else f"   # EoS {s.src}"))

    def c_camera_SetEffect(self, s, a, me, rows, nxt):
        mode, amp, per = ival(a[0]), ival(a[1]), a[2][1]
        if mode == 0:
            rows.append("CAMERA_SHAKE mode=OFF amp=0 period=0")
        else:
            rows.append(f"CAMERA_SHAKE mode=CUSTOM amp={amp} period={int(per)}   # EoS {s.src}")

    # ---- items, flow
    def c_item_Set(self, s, a, me, rows, nxt):
        self.items[ival(a[0])] = ival(a[1])
        rows.append(f"# eos: {s.src} (item slot {ival(a[0])}: {self.item_name(ival(a[1]))})")

    def flow(self, s, a, me, rows, nxt):
        rows.append(f"# eos: {s.src.rstrip(';')}: the GBA's event scripts chain the scenes "
                    "(src/data/ground/sky/sky_ch2_events.h)")

    c_supervision_ExecuteStationCommon = c_supervision_LoadStation = c_supervision_ExecuteActing = flow
    c_main_SetGround = c_back_SetDungeonBanner = flow

    def c_main_EnterDungeon(self, s, a, me, rows, nxt):
        d = ival(a[0])
        if d not in DUNGEONS:
            return False
        name = DUNGEONS[d]
        if name.startswith("SKY_"):
            self.use("dungeon", "SCRIPT_DUNGEON_" + name)
        rows.append(f"NEXT_DUNGEON frames={ival(a[1]) or 30} dungeon={name}   # EoS main_EnterDungeon({d})")


def est_frames(line) -> int:
    """About how long an actor's command takes (for the station's sense of time)."""
    if not isinstance(line, str):
        return 0
    m = re.match(r"(WALK_RELATIVE|MOVE_RELATIVE) speed=(\d+) dx=(-?\d+) dy=(-?\d+)", line)
    if m:
        spd = int(m.group(2)) or 256
        return int(math.ceil(math.hypot(int(m.group(3)), int(m.group(4))) * 256 / spd))
    m = re.match(r"WAIT (\d+)", line)
    if m:
        return int(m.group(1))
    m = re.match(r"ROTATE_\w+ (?:speed=)?(\d+)", line)
    if m:
        return 2 * int(m.group(1))
    if line.startswith("CALL_SCRIPT"):
        return 45 if "LOOK_AROUND" in line or "WAKEUP" in line else (6 if "JUMP" in line else 30)
    if line.startswith("STOP_ANIMATION"):
        return 20
    return 0


def walk(stmts):
    for s in stmts:
        yield s
        yield from walk(s.body)
        for _, b in s.cases:
            if isinstance(b, list):
                yield from walk(b)
        for _, b in s.elifs:
            yield from walk(b)
        if s.orelse:
            yield from walk(s.orelse)


def ends(body) -> bool:
    if not body or not isinstance(body, list):
        return False
    last = body[-1]
    return last.kind == "jump" or (last.kind == "ctrl" and last.name in ("end", "return", "hold"))


# ---------------------------------------------------------------- writing the scene file

def render_rows(rows, labels_seen=None) -> list:
    out = []
    for r in rows:
        if r is None:
            continue
        if isinstance(r, Dispatch):
            out.append("    " + r.render())
        elif isinstance(r, tuple) and r[0] == "LABEL":
            out.append(f"  LABEL {r[1]}")
        elif r.startswith("#"):
            out.append("    " + r)
        else:
            out.append("    " + r)
    return out


def entity_script(e: Entity) -> list:
    """An actor's or object's script: init, its own coroutine, then the station's commands."""
    out = [f"script {e.sname}   # EoS {'object' if e.is_object else 'actor'} {e.eos}, layer {e.layer}", "    DEBUGINFO"]
    if not e.is_object:
        out += ["    SELECT_ANIMATION 2", f"    UPDATE_NAME kind=ACTOR_SELF who={e.npc} id=0x0"]
    out.append("    CLEAR_OBJ_FLAGS INTERACT_MASK   # scripted: no collision")
    if e.own:
        out.append(f"    # EoS: its own coroutine (def ... for {'object' if e.is_object else 'actor'} {e.eos})")
        out += render_rows(e.own)
        if e.batches:
            out.append("    # TODO eos: the station also sends this one commands (below), which its own coroutine never reaches")
    if not e.batches:
        if not e.own:
            out.append("    HALT")
        out.append("end")
        return out
    if not e.table:
        for b in e.batches:
            out.append(f"    AWAIT_CUE {e.cmd_cue}")
            out += render_rows(b.rows)
            if b.rows and b.rows[-1].startswith("END_DELETE"):
                break
            if b.waited:
                out.append(f"    AWAIT_CUE_COND {e.done_cue} 0   # done: the station waits for this")
        else:
            out.append("    HALT")
        out.append("end")
        return out
    top = 3000
    out.append(f"  LABEL {top}")
    out.append(f"    AWAIT_CUE {e.cmd_cue}")
    for b in e.batches:
        out.append(f"    COND_EQUAL {b.k} {top + b.k}")
    out.append(f"    JUMP_LABEL {top}")
    for b in e.batches:
        out.append(f"  LABEL {top + b.k}")
        out += render_rows(b.rows)
        if b.rows and b.rows[-1].startswith("END_DELETE"):
            continue
        if b.waited:
            out.append(f"    AWAIT_CUE_COND {e.done_cue} 0   # done: the station waits for this")
        out.append(f"    JUMP_LABEL {top}")
    out.append("end")
    return out


# the label argument of each command that jumps (a label is the argByte: under 256)
LABEL_ARGS = {"LABEL": "label", "JUMP_LABEL": "label", "CHOICE": "label", "COND": "t", "COND_EQUAL": "t",
              "COND_VAR": "t", "CJUMP_DIR_TO_LINK": "l"}


def renumber_labels(model) -> dict:
    """Each script's labels as 0, 1, 2... in the order they appear: the translator's (EoS's
    label numbers, its own from 1000) do not fit the byte a label is."""
    known = scenes.cmds.all_commands()
    for b in model["blocks"]:
        if b["type"] != "script":
            continue
        rows = [r for r in b["rows"] if r.get("type") == "cmd"]
        new = {}

        def arg(r):
            op = r["op"]
            name = LABEL_ARGS.get(op) or ("l" if op.startswith("JUMPIF") else None)
            names = [a["name"] for a in known[op]["args"]]
            return names.index(name) if name in names else None
        for r in rows:
            if r["op"] == "LABEL" and r["args"][0] not in new:
                new[r["args"][0]] = str(len(new))
        for r in rows:
            j = arg(r)
            if j is not None and re.fullmatch(r"\d+", r["args"][j]):
                if r["args"][j] not in new:
                    new[r["args"][j]] = str(len(new))
                r["args"][j] = new[r["args"][j]]
    return model


class SceneFile:
    """The scripts of one map: one group each."""

    def __init__(self, level, rom=None, prefix=None, debug_file=None, first_group=0):
        self.level = level
        self.rom = rom
        self.prefix, self.debug_file, self.first_group = prefix, debug_file, first_group
        self.groups = []      # (Translator, eos script name)
        self.slots = {"PLAYER": 0, "PARTNER": 1}
        self.notes = []
        self.item_names, self.item_consts = {}, {}

    def add(self, text, ssa):
        tr = Translator(text, ssa, group=self.first_group + len(self.groups), rom=self.rom, notes=self.notes)
        tr.slots = self.slots
        tr.item_names, tr.item_consts = self.item_names, self.item_consts
        for e in tr.ents:
            if e.npc:
                tr.npc_slot(e.npc)
        tr.run()
        self.groups.append(tr)
        return tr

    def text(self, header=()) -> str:
        lvl = self.level.lower()
        out = [f"prefix {self.prefix or f's_sky_{lvl}_'}",
               f"debug_file {self.debug_file or f'src/data/ground/sky/sky_{lvl}_scenes.h'}", ""]
        out += [f"# {h}" if h else "#" for h in header]
        out.append("#")
        for tr in self.groups:
            out.append(f"#   group {tr.group}  {tr.name}  (EoS SCRIPT/{tr.level}/{tr.name}.ssb)")
        out += ["", "```c", '#include "sky_story.h"', "```", ""]
        defines_at = len(out)
        out += ["", "# ROTATE_TO_LIVES takes a lives kind, not an NPC slot.", "```c",
                "#define LIVES_KIND_PLAYER 0", "#define LIVES_KIND_PARTNER 34", "```"]
        refs = []             # per group: the NPC names its text, portraits and speakers use
        stations, sectors = [], []
        for g in range(self.first_group):    # groups made by hand (gs180's free roam): a placeholder
            out += ["", f"script g{g}_s0_station control=ENTER_CONTROL type=SCRIPT_TYPE_01   # placeholder (made by hand)",
                    "    DEBUGINFO", "    SELECT_MAP SKY_GUILD_B2F", "    JUMP_SCRIPT COMMON_ENTER", "end"]
            stations.append(f"g{g}_s0_station")
            sectors.append((g, [f"    sector station={g}"]))
        for tr in self.groups:
            out += ["", "# " + "-" * 72, f"# group {tr.group}: EoS {tr.name} ({tr.level})", "# " + "-" * 72, ""]
            st = tr.station
            named = [n for n in sorted(getattr(tr, "named", set())) if not any(
                e.npc == n for e in tr.ents)]
            rows = list(st.rows)
            # names the text uses for actors not on the map (chapter 1's g3 station)
            for n in named:
                if n in ("PLAYER", "PARTNER"):
                    rows.insert(2, f"UPDATE_NAME kind=ACTOR_TYPE who={n} id={'0x21' if n == 'PLAYER' else '0x22'}")
                else:
                    kind = next((k for _, (npc, k) in ACTORS.items() if npc == n), f"SKY_LIVES_{n}")
                    rows.insert(2, f"UPDATE_NAME kind=ACTOR_TYPE who={n} id={kind}   # the text names it")
            gl = [f"script {st.name} control=EVENT_CONTROL type=SCRIPT_TYPE_07", "    DEBUGINFO"]
            gl += render_rows(rows)
            gl.append("end")
            stations.append(st.name)
            ents = []
            for e in tr.ents:
                ents.append(entity_script(e))
            used = set()
            for ln in gl + [x for el in ents for x in el]:
                if ln.lstrip().startswith("UPDATE_NAME kind=ACTOR_SELF"):
                    continue
                used.update(re.findall(r"\bwho=([A-Z]\w*)", ln))
                used.update(re.findall(r"@([A-Z]\w*)@", ln))
                used.update(re.findall(r"^\s*PORTRAIT_POS NPC_([A-Z]\w*)", ln))
            refs.append(used)
            for el in ents:        # an actor nobody names or shows needs no name slot (there are 10)
                npc = re.search(r"UPDATE_NAME kind=ACTOR_SELF who=(\w+)", "\n".join(el))
                if npc and npc.group(1) not in used:
                    el[:] = [x for x in el if not x.lstrip().startswith("UPDATE_NAME kind=ACTOR_SELF")]
                gl += [""] + el
            out += gl
            secs = []
            for li, layer in enumerate(tr.layers):
                acts = [e for e in layer if not e.is_object]
                objs = [e for e in layer if e.is_object]
                if acts:
                    out += ["", f"actors g{tr.group}_s{li}_lives"]
                    for e in acts:
                        d = e.d
                        out.append(f"    actor kind={e.kind} facing={DIRS.get(d.get('dir') or '', 'SOUTH')} "
                                   f"x={tiles(d['x'], d['xo'])} y={tiles(d['y'], d['yo'])} script={e.sname}   # EoS {e.eos}")
                    out.append("end")
                if objs:
                    out += ["", f"objects g{tr.group}_s{li}_objs"]
                    for e in objs:
                        d = e.d
                        out.append(f"    object kind={e.kind} w={d['w']} h={d['h']} "
                                   f"x={tiles(d['x'], d['xo'])} y={tiles(d['y'], d['yo'])} script={e.sname}   # EoS {e.eos}")
                    out.append("end")
                sec = "    sector"
                if acts:
                    sec += f" actors=g{tr.group}_s{li}_lives"
                if objs:
                    sec += f" objects=g{tr.group}_s{li}_objs"
                if li == 0:
                    sec += f" station={tr.group}"
                secs.append(sec)
            if not secs:
                secs.append(f"    sector station={tr.group}")
            sectors.append((tr.group, secs))
        # name slots: the hero 0, the partner 1, the others 2..9 so that no two names one
        # group uses share a slot (the GBA has 10: gFormatBuffer_Names, MAX_TEXTBOX_PORTRAITS)
        slot = {"PLAYER": 0, "PARTNER": 1}
        names = sorted({n for u in refs for n in u} | set(self.slots), key=lambda n: (
            -sum(n in u for u in refs), n))
        for n in names:
            if n in slot:
                continue
            taken = {slot[m] for u in refs if n in u for m in u if m in slot}
            free = [k for k in range(2, 10) if k not in taken]
            if not free:
                raise SystemExit(f"{n}: no name slot left (a group names more than 10 actors)")
            slot[n] = free[0]
        out[defines_at:defines_at] = ["```c"] + [f"#define NPC_{n} {k}" for n, k in sorted(
            slot.items(), key=lambda x: (x[1], x[0]))] + ["```"]
        out = [re.sub(r"@([A-Z]\w*)@", lambda m: str(slot.get(m.group(1), 0)), ln) for ln in out]
        out += ["", "stations"] + [f"    {s}" for s in stations] + ["end"]
        for g, secs in sectors:
            out += ["", f"sectors g{g}"] + secs + ["end"]
        out += ["", "groups"] + [f"    g{g}" for g, _ in sectors] + ["end"]
        text = "\n".join(out) + "\n"
        # the canonical layout (and a check that it reads back)
        return scenes.serialize(renumber_labels(scenes.parse(text)))

    def unknown(self) -> dict:
        """Identifiers the file uses that do not exist yet, by kind."""
        out = {}
        for tr in self.groups:
            for k, n in tr.used:
                out.setdefault(k, set()).add(n)
        return out

    def stats(self) -> dict:
        return dict(translated=sum(t.translated for t in self.groups), todo=sum(t.todo for t in self.groups))


# ---------------------------------------------------------------- items (EoS ids -> names / Red ids)

def load_items(rom, sf: SceneFile):
    """EoS item names (for [s_item:N] and SKY_GIVE_ITEM), and Red's ITEM_* where the name is Red's too."""
    if rom is None:
        return
    try:
        from skytemple_files.data.str.handler import StrHandler
        cfg = rom.cfg
        st = StrHandler.deserialize(rom.rom.getFileByName("MESSAGE/text_e.str"), string_encoding=cfg.string_encoding)
        block = cfg.string_index_data.string_blocks["Item Names"]
        names = st.strings[block.begin:block.end]
    except Exception:
        return
    red = {}
    for line in (ROOT / "include" / "constants" / "item.h").read_text().splitlines():
        m = re.match(r"\s*(?:#define\s+)?(ITEM_[A-Z0-9_]+)\s*(=|,|\s+\d)", line)
        if m:
            red[m.group(1)] = True
    for i, nm in enumerate(names):
        clean = re.sub(r"\[[^\]]*\]", "", nm)
        sf.item_names[i] = clean
        const = "ITEM_" + re.sub(r"[^A-Z0-9]+", "_", clean.upper().replace("É", "E")).strip("_")
        if const in red:
            sf.item_consts[i] = const


# ---------------------------------------------------------------- comparing with a hand-made scene

def group_scripts(model, group: str) -> list:
    """The scripts of group `gN` of a scene model: its station(s), then its actors' and objects'."""
    blocks = {b.get("name"): b for b in model["blocks"] if b["type"] in ("script", "actors", "objects")}
    stations = [r["name"] for b in model["blocks"] if b["type"] == "stations" for r in b["rows"] if r["type"] == "station"]
    sec = next((b for b in model["blocks"] if b["type"] == "sectors" and b["name"] == group), None)
    if sec is None:
        raise SystemExit(f"no sectors {group}")
    out = []
    for r in sec["rows"]:
        if r.get("type") != "sector":
            continue
        if r.get("station") is not None:
            out.append(blocks[stations[int(r["station"])]])
        for k in ("actors", "objects"):
            if r.get(k):
                for row in blocks[r[k]]["rows"]:
                    for j in ("script", "script1", "script2", "script3"):
                        if row.get(j) and blocks[row[j]] not in out:
                            out.append(blocks[row[j]])
    return out


def cue_problems(model) -> list:
    """Cues that would leave a script waiting for ever, group by group: a station's
    ALERT_CUE / AWAIT_CUE_COND nobody waits for, an AWAIT_CUE nobody meets, and (in a station
    without labels) a different number of "done" meetings on the two sides."""
    out = []
    for b in model["blocks"]:
        if b["type"] != "sectors":
            continue
        scripts = group_scripts(model, b["name"])
        st, ents = scripts[0], scripts[1:]

        def cmds_of(blk, op):
            return [int(r["args"][0]) for r in blk["rows"] if r.get("type") == "cmd" and r["op"] == op
                    and re.fullmatch(r"\d+", r["args"][0])]
        labels = any(r.get("op") == "LABEL" for r in st["rows"])
        ent_await = [c for e in ents for c in cmds_of(e, "AWAIT_CUE")]
        ent_cond = [c for e in ents for c in cmds_of(e, "AWAIT_CUE_COND")]
        for c in set(cmds_of(st, "ALERT_CUE") + cmds_of(st, "AWAIT_CUE_COND")):
            if c >= 64 and c not in ent_await:
                out.append(f"{b['name']}: the station sends cue {c}, no script waits for it")
        for c in set(cmds_of(st, "AWAIT_CUE")):
            if c >= 64 and c not in ent_cond:
                out.append(f"{b['name']}: the station waits for cue {c}, no script sends it")
            if c >= 64 and not labels and cmds_of(st, "AWAIT_CUE").count(c) != ent_cond.count(c):
                out.append(f"{b['name']}: cue {c}: the station waits {cmds_of(st, 'AWAIT_CUE').count(c)} times, "
                           f"it is met {ent_cond.count(c)} times")
    return out


EMOTE_FUNCS = {"NOTICE_FUNC": "NOTICE", "QUESTION_FUNC": "QUESTION", "SWEAT_FUNC": "SWEAT", "SHOCK_FUNC": "SHOCK",
               "ANGRY_START_FUNC": "ANGRY", "SMILE_START_FUNC": "SMILE", "ANGRY_END_FUNC": "NONE", "SMILE_END_FUNC": "NONE"}
CATEGORIES = ("text", "portrait", "wait", "sound", "move", "turn", "emote/anim", "screen/camera/scene")


def features(scripts) -> dict:
    """What a group does, by category, for comparing two versions of a scene
    (cue plumbing, labels and per-actor setup left out)."""
    out = {c: [] for c in CATEGORIES}
    place = {}
    for b in scripts:
        for r in b["rows"]:
            if r.get("type") != "cmd":
                continue
            op, a = r["op"], [re.sub(r"^(EMOTION_|PLACEMENT_|DIRECTION_|DIR_TRANS_|MUS_|EMOTION_EFFECT_)", "", str(x)) for x in r["args"]]
            if op in ("MSG_NPC", "MSG_QUIET", "MSG_INSTANT", "MSG_OVERHEARD", "MSG_ON_BG_AUTO", "ASK2", "CHOICE"):
                t = re.sub(r"\s+", " ", a[-1].replace("\\n", " ")).strip()
                out["text"].append(t)
            elif op == "PORTRAIT":
                p = place.get(a[1]) if a[0] == "KEEP" else a[0]
                place[a[1]] = p
                out["portrait"].append(f"{a[1]} {a[2]} {p}")
            elif op in ("WAIT", "WAIT_RANDOM"):
                out["wait"].append(" ".join(a))
            elif op in ("FANFARE_PLAY2", "FANFARE_PLAY", "BGM_SWITCH", "BGM_FADEIN", "BGM_FADEOUT", "BGM_STOP",
                        "SKY_AMBIENCE", "SKY_AMBIENCE_FADEOUT", "WAIT_FANFARE2", "WAIT_FANFARE1"):
                out["sound"].append(f"{op} {' '.join(a)}")
            elif op in ("WALK_RELATIVE", "MOVE_RELATIVE", "MOVE_RELATIVE_POS", "HEIGHT_TO"):
                out["move"].append(f"{op} {' '.join(a)}")
            elif op.startswith("ROTATE_") or op == "SET_DIR_WAIT":
                out["turn"].append(f"{op} {' '.join(a)}")
            elif op == "EMOTION_EFFECT":
                out["emote/anim"].append(f"emote {a[0]}")
            elif op == "CALL_SCRIPT" and a[0] in EMOTE_FUNCS:
                out["emote/anim"].append(f"emote {EMOTE_FUNCS[a[0]]}")
            elif op == "CALL_SCRIPT" or op in ("SELECT_ANIMATION", "STOP_ANIMATION_ON_CURRENT_FRAME"):
                if not (op == "SELECT_ANIMATION" and a[0] == "2"):
                    out["emote/anim"].append(f"{op} {' '.join(a)}")
            elif op in ("FADE_IN", "FADE_OUT", "FADE2_IN", "FADE2_OUT", "FLASH_TO", "FLASH_FROM", "SELECT_MAP",
                        "SELECT_ENTITIES", "SELECT_LIVES", "SELECT_OBJECTS", "SKY_CUTAWAY", "SKY_CAMERA_SET",
                        "SKY_CAMERA_MOVE", "SKY_CAMERA_MOVE_X", "CAMERA_INIT_PAN", "CAMERA_END_PAN", "CAMERA_SHAKE",
                        "SKY_BUBBLES", "NEXT_DUNGEON", "SKY_SHOW_MAP", "RENAME_ALLY", "CLEAR_HERO_NAME", "SKY_CUTAWAY"):
                out["screen/camera/scene"].append(f"{op} {' '.join(a)}")
    return out


def compare(hand, made) -> dict:
    """{category: (in the hand-made group, in the translation, matched)}: multiset matches."""
    from collections import Counter
    fa, fb = features(hand), features(made)
    res = {}
    for c in CATEGORIES:
        ca, cb = Counter(fa[c]), Counter(fb[c])
        res[c] = (sum(ca.values()), sum(cb.values()), sum((ca & cb).values()))
    import difflib
    res["text order"] = difflib.SequenceMatcher(None, fa["text"], fb["text"], autojunk=False).ratio()
    res["_missing"] = {c: sorted((Counter(fa[c]) - Counter(fb[c])).elements()) for c in CATEGORIES}
    res["_extra"] = {c: sorted((Counter(fb[c]) - Counter(fa[c])).elements()) for c in CATEGORIES}
    return res


def compare_report(name, res, detail=False) -> str:
    out = [f"{name}:"]
    tot = [0, 0]
    for c in CATEGORIES:
        a, b, m = res[c]
        tot[0] += a
        tot[1] += m
        out.append(f"  {c:20} hand {a:4}  translated {b:4}  same {m:4}" + (f"  ({100 * m // a}%)" if a else ""))
    out.append(f"  {'all':20} hand {tot[0]:4}  same {tot[1]:4}  ({100 * tot[1] // max(1, tot[0])}%);"
               f" text in the same order: {res['text order']:.0%}")
    if detail:
        for c in CATEGORIES:
            if res["_missing"][c] or res["_extra"][c]:
                out.append(f"  [{c}] only hand-made: {res['_missing'][c][:12]}")
                out.append(f"  [{c}] only translated: {res['_extra'][c][:12]}")
    return "\n".join(out)


# ---------------------------------------------------------------- command line

# Chapter 2's scripts (documentation/Features/SkyChapter2.md), one scene file a map
CHAPTER2 = {
    "G01P01B": ["m02a0101", "m02a0105", "m02d0112"],
    "V02P03A": ["m02a0104"],
    "G01P02A": ["m02a0106"],
    "G01P03A": ["m02a0108", "m02a0302", "m02a0501", "m02a1001"],
    "G01P04A": ["m02a0109", "m02a0202", "m02a0301", "c00a0101", "c00a0501"],
    "G01P04C": ["m02a0602"],
    "G01P05A": ["m02a0110"],
    "G01P05C": ["m02a0603"],
    "G01P06B": ["c00a0601"],
    "G01P07A": ["m02a0111", "m02a0201", "c00a0201"],
    "G01P07C": ["m02a0113", "m02a0601", "m02a1003", "c00a0301"],
    "D02P11A": ["m02a0401", "m02a0701"],
    "D02P31A": ["m02a0801", "m02a0901"],
}

# Chapter 2 in play order (SkyChapter2.md, What plays): one group each on chapter 2's
# station gs180 (group 0 is its free roam on B2F, which no EoS acting script is).
# Not here: m02d0112 (the sentry's re-check when coming back from town) and m02a0901
# ("It's impossible to go any farther", at the bluff's end after the story): neither
# is on the story's path in the demo.
CHAPTER2_STATION = [
    ("G01P01B", "m02a0101"), ("V02P03A", "m02a0104"), ("G01P01B", "m02a0105"), ("G01P02A", "m02a0106"),
    ("G01P03A", "m02a0108"), ("G01P04A", "m02a0109"), ("G01P05A", "m02a0110"), ("G01P07A", "m02a0111"),
    ("G01P07C", "m02a0113"), ("G01P07A", "m02a0201"), ("G01P04A", "m02a0202"),
    ("G01P04A", "m02a0301"), ("G01P03A", "m02a0302"), ("D02P11A", "m02a0401"),
    ("D02P31A", "m02a0801"), ("G01P03A", "m02a1001"), ("G01P04A", "c00a0501"), ("G01P06B", "c00a0601"),
    ("G01P07C", "m02a1003"),
    ("G01P03A", "m02a0501"), ("G01P07C", "m02a0601"), ("G01P04C", "m02a0602"), ("G01P05C", "m02a0603"),
    ("G01P07C", "c00a0301"), ("G01P07A", "c00a0201"), ("G01P04A", "c00a0101"), ("D02P11A", "m02a0701"),
]


def chapter2_station(rom, out: Path) -> int:
    """All of chapter 2 as one draft of gs180's scene file (groups 1.., in play order)."""
    if rom is None:
        raise SystemExit("--chapter2-station needs the EoS ROM")
    sf = SceneFile("D02P01", rom, prefix="s_gs180_", debug_file="src/data/ground/sky/ground_data_d02p01_station.h",
                   first_group=1)
    load_items(rom, sf)
    for level, name in CHAPTER2_STATION:
        sf.add(*rom.load(f"SCRIPT/{level}/{name}"))
    out.write_text(sf.text(["Explorers of Sky chapter 2 on its station gs180 (SkyChapter2.md), in play order.",
                            "Draft: translated by tools/event_editor/eos_import.py --chapter2-station; group 0",
                            "(free roam) is hand-made. Hand-tune it; `TODO eos` marks what was not translated."]))
    st = sf.stats()
    print(f"{out}: {len(sf.groups)} groups, {st['translated']} commands translated, {st['todo']} TODO")
    for n in sf.notes:
        print(f"note: {n}", file=sys.stderr)
    return 0


NEEDS_KINDS = {"map": "Ground maps (MAP_*)", "lives": "Actors (SKY_LIVES_*)", "object": "Objects (SKY_OBJ_*)",
               "music": "Music (MUS_SKY_*)", "cg": "Story CGs (SKY_CUTAWAY_*)",
               "se": "Sound effects (SE_SKY_*: convert_eos_se.py)", "item": "Items (ITEM_*)",
               "dungeon": "Dungeons (SCRIPT_DUNGEON_*)", "var": "Script variables",
               "name": "Other names no header defines yet"}


def chapter2(rom, out: Path) -> int:
    """DIR/sky_<level>_scenes.scene, a file a map, and DIR/needs.txt: the names they use that do not exist yet."""
    if rom is None:
        raise SystemExit("--chapter2 needs the EoS ROM")
    out.mkdir(parents=True, exist_ok=True)
    needs, totals, notes, lines = {}, [0, 0], [], []
    for level, names in CHAPTER2.items():
        sf = SceneFile(level, rom)
        load_items(rom, sf)
        for n in names:
            sf.add(*rom.load(f"SCRIPT/{level}/{n}"))
        path = out / f"sky_{level.lower()}_scenes.scene"
        path.write_text(sf.text([f"Explorers of Sky chapter 2 ({', '.join(names)}), on {level}.",
                                 "Draft: translated by tools/event_editor/eos_import.py --chapter2; not built yet.",
                                 "Hand-tune it; lines marked `TODO eos` are what the translator could not do."]))
        st = sf.stats()
        totals[0] += st["translated"]
        totals[1] += st["todo"]
        lines.append(f"{path.name}: {', '.join(names)}: {st['translated']} commands translated, {st['todo']} TODO")
        defined = scenes.known_names() | set(scenes.cg_extra_names().get("cg", []))
        for k, v in sf.unknown().items():
            needs.setdefault(k, set()).update(n for n in v if n not in defined)
        model = scenes.parse(path.read_text(), str(path))
        for _, w in scenes.unknown_names(model, scenes.cg_extra_names()):
            needs.setdefault("name", set()).add(w)
        notes += sf.notes
    for e in sorted(needs.get("name", set())):
        k = next((k for pre, k in (("SKY_LIVES_", "lives"), ("SKY_OBJ_", "object"), ("MAP_", "map"),
                                   ("MUS_", "music"), ("SKY_CUTAWAY_", "cg"), ("SE_SKY_", "se"), ("ITEM_", "item"),
                                   ("SCRIPT_DUNGEON_", "dungeon")) if e.startswith(pre)), None)
        known = set().union(*(v for kk, v in needs.items() if kk != "name"))
        if k or e in known:
            needs["name"].discard(e)
            if k:
                needs.setdefault(k, set()).add(e)
    txt = ["# The names chapter 2's draft scenes use that do not exist in this branch yet.",
           "# Written by tools/event_editor/eos_import.py --chapter2. Check the drafts with",
           "#   python3 tools/event_editor/scenes.py check --allow-unknown events/sky/draft/ch2/*.scene", ""]
    for k, title in NEEDS_KINDS.items():
        if needs.get(k):
            txt.append(f"[{title}]")
            txt += [f"    {n}" for n in sorted(needs[k])]
            txt.append("")
    txt.append("[Files]")
    txt += [f"    {ln}" for ln in lines]
    txt.append(f"    total: {totals[0]} commands translated, {totals[1]} TODO")
    (out / "needs.txt").write_text("\n".join(txt) + "\n")
    print("\n".join(lines))
    print(f"total: {totals[0]} translated, {totals[1]} TODO")
    for n in notes:
        print(f"note: {n}", file=sys.stderr)
    return 0


def main(argv=None) -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0], formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("rom", nargs="?", help="the EoS ROM (only read)")
    ap.add_argument("scripts", nargs="*", help="SCRIPT/<LEVEL>/<name> or <name> (one group each)")
    ap.add_argument("--exps", action="append", default=[], help="an ExplorerScript file instead of the ROM")
    ap.add_argument("--ssa", action="append", default=[], help="its SSA as JSON (--dump writes one)")
    ap.add_argument("-o", "--out", help="the .scene file to write (default: print it)")
    ap.add_argument("--dump", help="write each script's .exps and .ssa.json to this folder")
    ap.add_argument("--level", help="the map's level (default: the first script's)")
    ap.add_argument("--title", default="", help="a line for the file's header comment")
    ap.add_argument("--compare", metavar="SCENE:gN[,gM]", help="compare the translation with hand-made groups")
    ap.add_argument("--detail", action="store_true", help="with --compare: list what differs")
    ap.add_argument("--chapter2", metavar="DIR", help="translate all of chapter 2's scripts (CHAPTER2) into DIR")
    ap.add_argument("--chapter2-station", metavar="FILE",
                    help="all of chapter 2 in play order as one draft of gs180's scene file (CHAPTER2_STATION)")
    args = ap.parse_args(argv)
    rom = Rom(args.rom) if args.rom else None
    if args.chapter2:
        return chapter2(rom, Path(args.chapter2))
    if args.chapter2_station:
        return chapter2_station(rom, Path(args.chapter2_station))
    inputs = []
    for name in args.scripts:
        text, ssa = rom.load(name)
        inputs.append((text, ssa))
        if args.dump:
            d = Path(args.dump)
            d.mkdir(parents=True, exist_ok=True)
            (d / f"{ssa['script']}__{ssa['level']}.exps").write_text(text)
            (d / f"{ssa['script']}__{ssa['level']}.ssa.json").write_text(json.dumps(ssa, indent=1))
    for e, s in zip(args.exps, args.ssa):
        inputs.append((Path(e).read_text(), json.loads(Path(s).read_text())))
    if args.dump and not args.out:
        return 0
    if not inputs:
        ap.error("no scripts")
    sf = SceneFile(args.level or inputs[0][1]["level"], rom)
    load_items(rom, sf)
    for text, ssa in inputs:
        sf.add(text, ssa)
    header = ["Draft: translated from Explorers of Sky by tools/event_editor/eos_import.py.",
              "Hand-tune it; lines marked `TODO eos` are what the translator could not do."]
    if args.title:
        header.insert(0, args.title)
    text = sf.text(header)
    if args.compare:
        path, groups = args.compare.rsplit(":", 1)
        hand_model = scenes.parse(Path(path).read_text(), path)
        hand = [b for g in groups.split(",") for b in group_scripts(hand_model, g)]
        made_model = scenes.parse(text)
        made = [b for g in range(len(sf.groups)) for b in group_scripts(made_model, f"g{g}")]
        print(compare_report(f"{', '.join(t.name for t in sf.groups)} vs {args.compare}", compare(hand, made), args.detail))
        if not args.out:
            return 0
    if args.out:
        Path(args.out).write_text(text)
    else:
        sys.stdout.write(text)
    st = sf.stats()
    unk = sf.unknown()
    print(f"{args.out or '-'}: {st['translated']} commands translated, {st['todo']} TODO", file=sys.stderr)
    for k, v in sorted(unk.items()):
        print(f"  needs {k}: {', '.join(sorted(v))}", file=sys.stderr)
    for n in sf.notes:
        print(f"  note: {n}", file=sys.stderr)
    return 0


if __name__ == "__main__":
    sys.exit(main())
