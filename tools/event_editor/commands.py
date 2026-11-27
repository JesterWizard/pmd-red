"""The scene commands the event editor knows, and the names it offers.

Every ground-script macro in include/data_script.h can be used in a .scene
file (see documentation/EventEditor.md). The ones listed in COMMANDS get
friendly argument names, a short help text and typed fields in the editor;
any other macro is written with its arguments in C order.

Argument types (TYPES) say which list of names a field offers and which C
prefix the scene file may leave out: `PORTRAIT who=PARTNER emotion=HAPPY`
compiles to `PORTRAIT(..., NPC_PARTNER, EMOTION_HAPPY)`.
"""
from __future__ import annotations

import re
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]

# type -> (C prefix the scene file may leave out, headers whose names it offers)
TYPES = {
    "frames":    ("", []),
    "int":       ("", []),
    "bool":      ("", []),
    "text":      ("", []),
    "expr":      ("", []),
    "npc":       ("NPC_", []),                      # the scene file's own #defines
    "emotion":   ("EMOTION_", ["include/constants/emotions.h"]),
    "placement": ("PLACEMENT_", ["include/portrait_placement.h"]),
    "direction": ("DIRECTION_", ["include/constants/direction.h"]),
    "turn":      ("DIR_TRANS_", ["include/constants/direction.h"]),
    "map":       ("MAP_", ["include/constants/ground_map.h"]),
    "music":     ("MUS_", ["include/constants/bg_music.h", "include/sky_story.h"]),
    "sound":     ("", ["include/sky_story.h"]),       # SE_SKY_* or a song number
    "cg":        ("SKY_CUTAWAY_", ["include/sky_story.h"]),
    "bubbles":   ("SKY_BUBBLES_", ["include/sky_story.h"]),
    "func":      ("", ["include/constants/script_id.h"]),
    "anim":      ("GROUND_ANIM_", ["include/constants/ground_script_params.h"]),
    "nameKind":  ("UPDATE_NAME_", ["include/constants/ground_script_params.h"]),
    "objFlags":  ("OBJ_FLAG_", ["include/constants/ground_script_params.h"]),
    "effect":    ("EMOTION_EFFECT_", ["include/constants/ground_script_params.h"]),
    "shake":     ("CAMERA_SHAKE_", ["include/constants/ground_script_params.h"]),
    "flashKind": ("PALUTIL_KIND_", ["include/constants/palette_util.h"]),
    "dungeon":   ("SCRIPT_DUNGEON_", ["include/constants/script_dungeon_id.h"]),
    "item":      ("ITEM_", ["include/constants/item.h"]),
}
# names a type offers: the C names that start with this (prefix of the type
# when it has one)
TYPE_NAME_PREFIX = {
    "sound": "SE_SKY_", "func": "", "music": "MUS_",
}

# (name, [(argument, type)], category, help)
_C = [
    # Timing
    ("WAIT", [("frames", "frames")], "Timing", "Wait this many frames (60 frames = 1 second)."),
    ("WAIT_FADE", [], "Timing", "Wait until the screen has finished fading."),
    ("WAIT_FANFARE2", [("sound", "sound")], "Timing", "Wait until this sound effect has finished."),
    ("AWAIT_CUE", [("cue", "int")], "Cues", "Wait until another script sends this cue (ALERT_CUE)."),
    ("ALERT_CUE", [("cue", "int")], "Cues", "Send a cue: scripts waiting for it (AWAIT_CUE) go on."),
    # Text
    ("MSG_NPC", [("who", "npc"), ("text", "text")], "Text",
     "A line of dialogue with the speaker's name. who=-1: no name. {WAIT_PRESS} waits for a button, \\n starts a new line."),
    ("MSG_QUIET", [("who", "npc"), ("text", "text")], "Text", "A line of text without a speaker name (thoughts)."),
    ("MSG_ON_BG_AUTO", [("frames", "frames"), ("text", "text")], "Text", "Text over a black screen that goes on by itself."),
    ("MSG_INSTANT", [("text", "text")], "Text", "A whole message at once, without a speaker (EoS message_Mail: item received...)."),
    ("MSG_OVERHEARD", [("text", "text")], "Text", "Text heard from the background (EoS message_ImitationSound)."),
    ("TEXTBOX_CLEAR", [], "Text", "Close the text box."),
    ("PORTRAIT", [("place", "placement"), ("who", "npc"), ("emotion", "emotion")], "Text",
     "Show the speaker's portrait. place=KEEP keeps it where it is and only changes the face."),
    ("ASK2", [("flag", "bool"), ("default", "int"), ("who", "npc"), ("text", "text")], "Text",
     "Ask a question; the CHOICE lines after it are the answers."),
    ("CHOICE", [("label", "int"), ("text", "text")], "Text", "An answer to the question above: picking it jumps to LABEL label."),
    ("UPDATE_NAME", [("kind", "nameKind"), ("who", "npc"), ("id", "expr")], "Text", "Set the name the text boxes use for an actor."),
    ("RENAME_ALLY", [("id", "int")], "Text", "Open the naming screen for the partner."),
    ("CLEAR_HERO_NAME", [], "Text", "Clear the hero's name."),
    # Flow
    ("LABEL", [("label", "int")], "Flow", "A place to jump to (JUMP_LABEL, CHOICE)."),
    ("JUMP_LABEL", [("label", "int")], "Flow", "Jump to LABEL label."),
    ("CALL_SCRIPT", [("script", "func")], "Flow", "Run a common script (e.g. SHOCK_FUNC: the actor jumps in surprise)."),
    ("JUMP_SCRIPT", [("script", "func")], "Flow", "Go on with a common script and do not come back."),
    ("RET", [], "Flow", "End the script (station scripts)."),
    ("HALT", [], "Flow", "Stop here and stay (the actor stays on the map)."),
    ("END_DELETE", [], "Flow", "End the script and remove the actor from the map."),
    # Actors
    ("WALK_RELATIVE", [("speed", "int"), ("dx", "int"), ("dy", "int")], "Actors",
     "Walk dx, dy pixels from where the actor is (8 pixels = 1 tile); speed 256 = 1 pixel a frame."),
    ("MOVE_RELATIVE", [("speed", "int"), ("dx", "int"), ("dy", "int")], "Actors",
     "Slide dx, dy pixels without the walking animation (speed 256 = 1 pixel a frame)."),
    ("ROTATE_TO", [("speed", "int"), ("turn", "turn"), ("direction", "direction")], "Actors",
     "Turn to face a direction; speed is frames per step."),
    ("ROTATE_TO_LIVES", [("speed", "int"), ("turn", "turn"), ("kind", "int")], "Actors",
     "Turn to face another actor (by lives kind: 0 = hero, 34 = partner)."),
    ("SELECT_ANIMATION", [("anim", "anim")], "Actors", "Change the actor's animation (2 = standing still)."),
    ("STOP_ANIMATION_ON_CURRENT_FRAME", [], "Actors", "Wait until the actor's animation has played once."),
    ("SET_OBJ_FLAGS", [("flags", "objFlags")], "Actors", "Set actor flags."),
    ("CLEAR_OBJ_FLAGS", [("flags", "objFlags")], "Actors", "Clear actor flags (INTERACT_MASK: no collision)."),
    ("EMOTION_EFFECT", [("effect", "effect")], "Actors", "Show an emotion mark over the actor (!, ?, sweat...)."),
    ("SELECT_ENTITIES", [("group", "int"), ("sector", "int")], "Scene",
     "Put a sector's actors and objects on the map (group -1: this scene's group)."),
    ("SELECT_LIVES", [("group", "int"), ("sector", "int")], "Scene", "Put a sector's actors on the map."),
    ("SELECT_OBJECTS", [("group", "int"), ("sector", "int")], "Scene", "Put a sector's objects on the map (the Relic Fragment...)."),
    # Scene
    ("SELECT_MAP", [("map", "map")], "Scene", "Load a map."),
    ("SET_PLACE_MODE", [("mode", "int")], "Scene", "1 before a scene is set up, 4 when it starts."),
    ("NEXT_DUNGEON", [("frames", "frames"), ("dungeon", "dungeon")], "Scene", "Go to a dungeon."),
    # Screen
    ("FADE_IN", [("wait", "bool"), ("frames", "frames")], "Screen", "Fade the scene in from black over frames (0: at once)."),
    ("FADE_OUT", [("wait", "bool"), ("frames", "frames")], "Screen", "Fade the scene out to black over frames."),
    ("FADE2_IN", [("wait", "bool"), ("frames", "frames")], "Screen", "Fade the text layer in."),
    ("FADE2_OUT", [("wait", "bool"), ("frames", "frames")], "Screen", "Fade the text layer out."),
    ("FLASH_TO", [("wait", "bool"), ("kind", "flashKind"), ("frames", "frames"), ("color", "expr")], "Screen",
     "Flash the screen to a colour over frames."),
    ("FLASH_FROM", [("wait", "bool"), ("kind", "flashKind"), ("frames", "frames"), ("color", "expr")], "Screen",
     "Come back from a flash over frames."),
    ("CAMERA_SHAKE", [("mode", "shake"), ("amp", "int"), ("period", "int")], "Screen", "Shake the screen (mode OFF stops it)."),
    ("CAMERA_INIT_PAN", [], "Screen", "The camera follows this actor."),
    ("CAMERA_END_PAN", [], "Screen", "The camera stops following."),
    # Music and sound
    ("BGM_STOP", [], "Sound", "Stop the music."),
    ("BGM_SWITCH", [("song", "music")], "Sound", "Play a song."),
    ("BGM_FADEIN", [("frames", "frames"), ("song", "music")], "Sound", "Play a song, fading it in over frames."),
    ("BGM_FADEOUT", [("frames", "frames")], "Sound", "Fade the music out over frames."),
    ("FANFARE_PLAY2", [("sound", "sound")], "Sound", "Play a sound effect (a number, or an SE_SKY_ name)."),
    # Explorers of Sky demake
    ("SKY_CUTAWAY", [("cg", "cg"), ("frames", "frames")], "Story CGs",
     "Show a story CG. Still pictures: shown for frames (A/B skips after a while). Pans: the picture is held for frames, then the pan."),
    ("SKY_CAMERA_SET", [("x", "int"), ("y", "int")], "Screen", "Put the camera's top-left corner at map pixel x, y."),
    ("SKY_CAMERA_MOVE", [("dy", "int"), ("speed", "int")], "Screen", "Move the camera dy pixels down (speed 256 = 1 pixel a frame)."),
    ("SKY_CAMERA_MOVE_X", [("dx", "int"), ("speed", "int")], "Screen", "Move the camera dx pixels right (speed 256 = 1 pixel a frame)."),
    ("SKY_SHOW_MAP", [("on", "bool")], "Screen", "Hide (FALSE) or show (TRUE) the map and its actors; text boxes stay."),
    ("SKY_BUBBLES", [("mode", "bubbles")], "Screen", "Krabby bubbles or rain over the scene (OFF stops them)."),
    ("SKY_AMBIENCE", [("song", "music"), ("frames", "frames")], "Sound", "An ambience under the music (the waves), faded in over frames."),
    ("SKY_AMBIENCE_FADEOUT", [("frames", "frames")], "Sound", "Fade the ambience out (0: stop at once)."),
    ("SKY_STORM_BOLT", [], "Screen", "The stormy sea's lightning, once."),
    ("SKY_MAP_PAL_RESTART", [], "Screen", "Restart the map's palette animations."),
    ("SKY_SAVE_GAME", [], "Scene", "Ask to save (the demo's end)."),
    ("SKY_GIVE_ITEM", [("item", "item")], "Scene", "Give an item: into the bag, or the storage when the bag is full."),
    ("SKY_DEMO_TO_TITLE", [], "Scene", "Back to the title screen."),
    ("DEBUGINFO", [("line", "int")], "Flow",
     "The first line of every script (a debug marker). line: kept from the original C file; leave it out in new scripts."),
]

COMMANDS = {n: dict(name=n, args=[dict(name=a, type=t) for a, t in args], cat=cat, help=h) for n, args, cat, h in _C}

_DEFINE = re.compile(r"^#define\s+([A-Z][A-Z0-9_]*)(\(([^)]*)\))?\s+(\{\s*CMD_BYTE|SPECIAL_PROCESS)")


def c_macros() -> dict:
    """Every script command macro in include/data_script.h: name -> [C argument names]."""
    out = {}
    for line in (ROOT / "include" / "data_script.h").read_text().splitlines():
        m = _DEFINE.match(line)
        if m and m.group(1) not in ("SPECIAL_PROCESS", "SPECIAL_PROCESS_EX", "DEBUGINFO"):
            params = [p.strip() for p in (m.group(3) or "").split(",") if p.strip()]
            out[m.group(1)] = params
    return out


def all_commands() -> dict:
    """COMMANDS, plus every other macro of data_script.h with its C argument names."""
    out = dict(COMMANDS)
    for name, params in c_macros().items():
        if name not in out:
            out[name] = dict(name=name, args=[dict(name=p, type="expr") for p in params], cat="Other",
                             help="(no help yet: arguments in C order)")
    return out


_NAME = re.compile(r"^\s*(?:#define\s+)?([A-Z][A-Z0-9_]*)\s*(?:=|,|\s+-?\(?[0-9A-Z]|$)")


def _names_in(path: Path, prefix: str) -> list:
    seen = []
    if not path.exists():
        return seen
    for line in path.read_text(errors="replace").splitlines():
        m = _NAME.match(line)
        if m and m.group(1).startswith(prefix) and m.group(1) not in seen:
            seen.append(m.group(1))
    return seen


_cache: dict = {}


def names(type_: str, extra: dict | None = None) -> list:
    """The C names an argument of this type can take (for dropdowns and for
    putting the left-out prefix back)."""
    if type_ in _cache:
        out = list(_cache[type_])
    else:
        prefix, headers = TYPES.get(type_, ("", []))
        want = TYPE_NAME_PREFIX.get(type_, prefix)
        out = []
        for h in headers:
            for n in _names_in(ROOT / h, want):
                if n not in out and not n.startswith(("MAX_", "GUARD_")) and not n.endswith(("_COUNT", "_H")):
                    out.append(n)
        if type_ == "direction":
            out = [n for n in out if not n.startswith("DIRECTION_MASK")]
        if type_ == "func":
            out = [n for n in out if n.endswith("_FUNC") or n.startswith("COMMON_")]
        _cache[type_] = list(out)
    for n in (extra or {}).get(type_, []):
        if n not in out:
            out.append(n)
    return out


def short(type_: str, value: str, extra: dict | None = None) -> str:
    """The value as the scene file writes it (prefix left out where that is safe)."""
    prefix = TYPES.get(type_, ("", []))[0]
    if prefix and value.startswith(prefix):
        rest = value[len(prefix):]
        if re.fullmatch(r"[A-Za-z][A-Za-z0-9_]*", rest) and value in names(type_, extra):
            return rest
    return value


def full(type_: str, value: str, extra: dict | None = None) -> str:
    """The C value of a scene-file value (the left-out prefix put back)."""
    prefix = TYPES.get(type_, ("", []))[0]
    if prefix and re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", value) and not value.startswith(prefix):
        if prefix + value in names(type_, extra):
            return prefix + value
    return value
