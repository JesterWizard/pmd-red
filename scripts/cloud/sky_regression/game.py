"""Decoders for the game state the checks read (symbols from the test ROM's ELF).

Every address comes from `arm-none-eabi-nm` on the ELF built with the ROM, so
the checks keep working when code moves. Struct offsets are the ones in the
headers named next to each decoder.
"""

import re
import struct
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]


def load_symbols(elf):
    syms = {}
    out = subprocess.run(["arm-none-eabi-nm", str(elf)], check=True,
                         capture_output=True, text=True).stdout
    for line in out.splitlines():
        parts = line.split()
        if len(parts) == 3:
            addr, _, name = parts
            syms.setdefault(name, int(addr, 16))
    return syms


def load_enum(header, prefix):
    """NAME -> value for a C enum whose members start with prefix (in order)."""
    text = (ROOT / header).read_text()
    out, val = {}, -1
    for m in re.finditer(r"^\s*(" + prefix + r"\w*)\s*(?:=\s*([^,/\n]+))?,", text, re.M):
        name, expr = m.group(1), m.group(2)
        val = int(expr.strip(), 0) if expr and re.fullmatch(r"\s*(0x)?[0-9a-fA-F]+\s*", expr) \
            else (out[expr.strip()] if expr and expr.strip() in out else val + 1)
        out[name] = val
    return out


def load_enum_block(header, enum_name):
    """NAME -> value for the members of `enum enum_name { ... }` (plain
    members counted from 0, `= value` honoured; #if lines are ignored)."""
    text = (ROOT / header).read_text()
    body = text[text.index("enum " + enum_name):]
    body = body[body.index("{") + 1:body.index("};")]
    body = re.sub(r"/\*.*?\*/|//[^\n]*", "", body, flags=re.S)
    out, val = {}, -1
    for line in body.splitlines():
        line = line.strip().rstrip(",")
        if not line or line.startswith("#"):
            continue
        name, _, expr = (p.strip() for p in line.partition("="))
        val = int(expr, 0) if expr else val + 1
        out[name] = val
    return out


def load_defines(header, prefix):
    text = (ROOT / header).read_text()
    return {m.group(1): int(m.group(2), 0) for m in
            re.finditer(r"^#define\s+(" + prefix + r"\w*)\s+(0x[0-9a-fA-F]+|\d+)", text, re.M)}


# Music players to watch: (label, symbol). The sky build's second BGM player
# (EoS's bgm2, the beach waves) is sSkyAmbienceInfo in src/music.c.
PLAYERS = [
    ("bgm", "gMPlayInfo_BGM"),
    ("fanfare", "gMPlayInfo_Fanfare"),
    ("se1", "gMPlayInfo_SE1"), ("se2", "gMPlayInfo_SE2"), ("se3", "gMPlayInfo_SE3"),
    ("se4", "gMPlayInfo_SE4"), ("se5", "gMPlayInfo_SE5"), ("se6", "gMPlayInfo_SE6"),
    ("ambience", "sSkyAmbienceInfo"),
]
MUSICPLAYER_STATUS_TRACK = 0x0000FFFF
MUSICPLAYER_STATUS_PAUSE = 0x80000000

# Dialogue print states (enum in src/string_format.c).
PRINT_FINISHED = 0
PRINT_WAITING = (7, 8, 9)  # STATE_WAIT_FOR_BUTTON_{MID,NEW}_TEXTBOX, ..._END_MSG


class GameInfo:
    def __init__(self, emu, syms):
        self.syms = syms
        self.map_ids = load_enum("include/constants/ground_map.h", "MAP_")
        self.map_names = {v: k for k, v in self.map_ids.items()}
        self.song_names = {}
        for k, v in load_defines("include/sky_story.h", "(?:MUS|SE)_SKY_").items():
            self.song_names.setdefault(v, k)
        # gSongTable: { SongHeader *header; u16 ms; u16 me; } per song id. The
        # sky build points many ids at one header (Red ids at EoS songs), so
        # songs are compared by header.
        table = syms["gSongTable"]
        n = 1100
        raw = emu.read(table, 8 * n)
        self.song_headers = [struct.unpack_from("<I", raw, 8 * i)[0] for i in range(n)]
        self.ids_by_header = {}
        for i, hdr in enumerate(self.song_headers):
            if 0x08000000 <= hdr < 0x0A000000:
                self.ids_by_header.setdefault(hdr, []).append(i)
        self.players = [(label, syms[s]) for label, s in PLAYERS if s in syms]

    # Dialogue (src/string_format.c) -------------------------------------------
    def print_state(self, f):
        return f.s32(self.syms["sPrintStringState"])

    def textbox_text(self, f):
        """The formatted text of the current dialogue box ('' when none is up)."""
        if self.print_state(f) == PRINT_FINISHED:
            return ""
        raw = f.read(self.syms["sDialogueTextBuffer"], 1000)
        raw = raw.split(b"\0", 1)[0]
        return decode_text(raw)

    def speaker_name(self, f):
        raw = f.read(self.syms["gSpeakerNameBuffer"], 80).split(b"\0", 1)[0]
        return decode_text(raw)

    def portrait_window(self, f):
        """(x, y, width) in tiles of the portrait window (sDialogueBoxWinTemplates
        id[1]; WindowTemplate is 0x18 bytes, pos at 0x08, width at 0x0C)."""
        base = self.syms["sDialogueBoxWinTemplates"] + 0x18
        return (f.s16(base + 0x08), f.s16(base + 0x0A), f.s16(base + 0x0C))

    @property
    def jukebox_tracks(self):
        return jukebox_tracks()

    # Map ---------------------------------------------------------------------
    def map_id(self, f):
        """The ground map id (gGroundMapAction->groundMapId), or None."""
        ptr = f.u32(self.syms["gGroundMapAction"])
        if not 0x02000000 <= ptr < 0x03008000:
            return None
        return f.s16(ptr + 0xE4)

    def map_name(self, f):
        mid = self.map_id(f)
        return self.map_names.get(mid, str(mid))

    # Sound -------------------------------------------------------------------
    def songs(self, f):
        """{player label: song header address} for every player that is playing."""
        out = {}
        for label, addr in self.players:
            hdr, status = struct.unpack("<II", f.read(addr, 8))
            if status & MUSICPLAYER_STATUS_TRACK and not status & MUSICPLAYER_STATUS_PAUSE:
                out[label] = hdr
        return out

    def playing(self, f, player, song):
        """True when `player` ('bgm', 'se4', 'ambience', ...) plays song id `song`."""
        return f.songs.get(player) == self.song_headers[song]

    def any_se_playing(self, f, song):
        hdr = self.song_headers[song]
        return any(v == hdr for k, v in f.songs.items() if k.startswith("se"))

    def header_name(self, hdr):
        """A readable name for a song header: MUS_SKY_* / SE_SKY_* or the ids."""
        ids = self.ids_by_header.get(hdr, [])
        for i in ids:
            if i in self.song_names:
                return self.song_names[i]
        return "song " + "/".join(map(str, ids)) if ids else hex(hdr)

    def song_name(self, song):
        return self.song_names.get(song, "song %d" % song)

    def songs_desc(self, f):
        return ", ".join(f"{k}={self.header_name(v)}" for k, v in sorted(f.songs.items())) or "silence"

    # Ground objects and actors (src/ground_object.c, src/ground_lives.c) -------
    def _table(self, f, sym, count, id_off, kind_off, strides):
        """Entries of a ground table as raw bytes. The struct size differs
        between builds, so the stride is the one where every used entry's
        id is its index (unused entries have kind -1)."""
        base = f.u32(self.syms[sym])
        if not 0x02000000 <= base < 0x03008000:
            return []
        raw = f.read(base, max(strides) * count)
        for stride in strides:
            ok, used = True, 0
            for i in range(count):
                kind = struct.unpack_from("<h", raw, i * stride + kind_off)[0]
                if kind == -1:
                    continue
                used += 1
                if struct.unpack_from("<h", raw, i * stride + id_off)[0] != i or not 0 <= kind < 1200:
                    ok = False
                    break
            if ok and used:
                return [raw[i * stride:(i + 1) * stride] for i in range(count)
                        if struct.unpack_from("<h", raw, i * stride + kind_off)[0] != -1]
        return []

    def ground_object_kinds(self, f):
        """Kinds of the ground objects in use (GroundObject: id at 4, kind at 6)."""
        return [struct.unpack_from("<h", e, 6)[0] for e in
                self._table(f, "gGroundObjects", 16, 4, 6, range(0x1C0, 0x1E0, 4))]

    def ground_lives(self, f):
        """{species: raw struct} of the ground actors (GroundLive: id at 0,
        species at 8)."""
        out = {}
        for e in self._table(f, "gGroundLives", 24, 0, 8, range(0x1E8, 0x210, 4)):
            out.setdefault(struct.unpack_from("<h", e, 8)[0], e)
        return out

    def camera_view(self, f):
        """The ground camera's view, top-left in map pixels. The camera
        (sUnknown_20399E8.unk14, src/code_809D148.c) holds the view centre in
        24.8 fixed point; SkyCamera_SetView(x, y) stores (x * 256 + 31104,
        y * 256 + 23424)."""
        cx, cy = struct.unpack("<ii", f.read(self.syms["sUnknown_20399E8"] + 0x14, 8))
        return ((cx - 31104) // 256, (cy - 23424) // 256)

    # Dungeon -------------------------------------------------------------------
    def in_dungeon(self, f):
        ptr = f.u32(self.syms["gDungeon"])
        return 0x02000000 <= ptr < 0x02040000 and self.map_id(f) is None

    def dungeon_log_names(self, f):
        """Names in the dungeon message log written in the team colour
        ({COLOR} 0x0E): raw strings found in gDungeon."""
        ptr = f.u32(self.syms["gDungeon"])
        raw = f.read(ptr, 0x20000)
        return [m.group(1).decode("latin-1") for m in re.finditer(rb"#c\x0e([^#\x00]*)#r", raw)]

    def loops(self, f):
        """gUnknown_203B0B8 (src/code_800C9CC.c): main-loop iterations. Over a
        window, frames minus its increase = dropped frames (a loop iteration
        that did not finish before the next VBlank)."""
        return f.u32(self.syms["gUnknown_203B0B8"])

    def _dungeon_offsets(self, f):
        """(teamPokemon, tilePointers) offsets in Dungeon. The struct differs
        between builds, so they are found by shape: four pointers to
        consecutive Entity structs (0x74 bytes), and a row of pointers to
        consecutive Tile structs (0x18 bytes)."""
        if getattr(self, "_dng_off", None) is None:
            base = f.u32(self.syms["gDungeon"])
            raw = f.read(base, 0x14000)
            words = struct.unpack("<%dI" % (len(raw) // 4), raw)
            team = tiles = None
            for i in range(len(words) - 60):
                w = words[i]
                if not base < w < base + 0x20000:
                    continue
                if tiles is None and all(words[i + k + 1] - words[i + k] == 0x18 for k in range(55)):
                    tiles = 4 * i
                if team is None and i >= 0x13000 // 4 and words[i + 1] - w == 0x74 \
                        and words[i + 2] - words[i + 1] == 0x74:
                    team = 4 * i
                if team is not None and tiles is not None:
                    break
            self._dng_off = (team, tiles)
        return self._dng_off

    def leader_pos(self, f):
        """The leader's tile (Entity.pos of gDungeon->teamPokemon[0])."""
        base = f.u32(self.syms["gDungeon"])
        ent = f.u32(base + self._dungeon_offsets(f)[0])
        return struct.unpack("<hh", f.read(ent + 4, 4))

    def dungeon_map(self, f):
        """The floor as 32 strings of 56: '#' wall, '.' room, ',' corridor,
        '~' water, 'S' stairs, 'o' item or trap, 'L' leader, 'P' partner,
        'm' another Pokémon (Tile: terrainFlags at 0, room at 9, monster at
        0x10, object at 0x14; include/structs/map.h)."""
        base = f.u32(self.syms["gDungeon"])
        team, tiles = self._dungeon_offsets(f)
        raw = f.read(base, 0x14000)
        ptrs = struct.unpack_from("<%dI" % (32 * 56), raw, tiles)
        lead, part = struct.unpack_from("<II", raw, team)
        rows = []
        for y in range(32):
            row = []
            for x in range(56):
                t = ptrs[y * 56 + x] - base
                terr, = struct.unpack_from("<H", raw, t)
                mon, obj = struct.unpack_from("<II", raw, t + 0x10)
                kind = terr & 3
                c = "#" if kind == 0 else "~" if kind == 2 else "." if raw[t + 9] != 0xFF else ","
                if terr & 0x200:
                    c = "S"
                elif obj and c in ".,":
                    c = "o"
                if mon == lead:
                    c = "L"
                elif mon == part:
                    c = "P"
                elif mon:
                    c = "m"
                row.append(c)
            rows.append("".join(row))
        return rows

    def dungeon_location(self, f):
        """(dungeon id, floor) of gDungeon->unk644.dungeonLocation (Dungeon
        offset 0x644; include/structs/str_dungeon.h)."""
        base = f.u32(self.syms["gDungeon"])
        return f.u8(base + 0x644), f.u8(base + 0x645)

    # EntityInfo.moves in this build (the header's offset comments are
    # Red's, 0x118): 4 moves of 8 bytes, flags at +0 (bit 0: the slot is
    # used), id at +2, PP at +4.
    INFO_MOVES = 0x120

    def pokemon(self, f, wild=True):
        """The wild (or team) Pokémon on the floor, as dicts: species, level,
        hp, max_hp, moves [(id, PP)], pos. gDungeon->wildPokemon[16] follows
        teamPokemon[4]; Entity: type at 0 (1 = monster), pos at 4,
        EntityInfo * at 0x70; EntityInfo: species at 2, level at 9, HP and
        max HP at 0xE (include/structs/dungeon_entity.h)."""
        base = f.u32(self.syms["gDungeon"])
        team = self._dungeon_offsets(f)[0]
        first, count = (team + 16, 16) if wild else (team, 4)
        out = []
        for k in range(count):
            ent = f.u32(base + first + 4 * k)
            if not 0x02000000 <= ent < 0x02040000 or f.u32(ent) != 1:
                continue
            info = f.u32(ent + 0x70)
            if not 0x02000000 <= info < 0x02040000:
                continue
            raw = f.read(info, self.INFO_MOVES + 32)
            hp, mhp = struct.unpack_from("<hh", raw, 0xE)
            moves = []
            for i in range(4):
                o = self.INFO_MOVES + 8 * i
                if raw[o] & 1:  # MOVE_FLAG_EXISTS
                    moves.append((struct.unpack_from("<H", raw, o + 2)[0], raw[o + 4]))
            out.append(dict(species=struct.unpack_from("<h", raw, 2)[0], level=raw[9], hp=hp,
                            max_hp=mhp, moves=moves, pos=struct.unpack("<hh", f.read(ent + 4, 4))))
        return out

    def floor_items(self, f):
        """Item ids lying on the floor: the objects on the tiles (Tile.object
        at 0x14) that are items (Entity.type 3), Item * at Entity 0x70
        (Item: flags, quantity, id)."""
        base = f.u32(self.syms["gDungeon"])
        tiles = self._dungeon_offsets(f)[1]
        raw = f.read(base, 0x14000)
        ptrs = struct.unpack_from("<%dI" % (32 * 56), raw, tiles)
        out = []
        for p in ptrs:
            obj, = struct.unpack_from("<I", raw, p - base + 0x14)
            if 0x02000000 <= obj < 0x02040000 and f.u32(obj) == 3:
                item = f.u32(obj + 0x70)
                if 0x02000000 <= item < 0x02040000:
                    out.append(f.u8(item + 2))
        return out

    def script_var(self, f, name):
        """A script variable (enum ScriptVarId in include/constants/event_flag.h)
        as GetScriptVarValue reads it: gScriptVarInfo[id] (type, bufOffset)
        into gScriptVarBuffer. Bit, u8, s8, u16, s16 and s32 types."""
        if getattr(self, "_var_ids", None) is None:
            self._var_ids = load_enum_block("include/constants/event_flag.h", "ScriptVarId")
        vid = self._var_ids[name]
        typ, _, off, bit = struct.unpack("<hhhh", f.read(self.syms["gScriptVarInfo"] + 16 * vid, 8))
        buf = self.syms["gScriptVarBuffer"] + off
        fmt = {2: "<B", 3: "<b", 4: "<H", 5: "<h", 6: "<i", 7: "<B"}
        if typ == 1:
            return (f.u8(buf) >> bit) & 1
        if typ in fmt:
            return struct.unpack(fmt[typ], f.read(buf, struct.calcsize(fmt[typ])))[0]
        return None

    def input_waits(self, f):
        """sArrowsFrames (src/dungeon_main.c): counts frames while the dungeon
        waits for the leader's input."""
        return f.u32(self.syms["sArrowsFrames"])


def jukebox_tracks():
    """[(name, song id)] of the Sky Jukebox, from src/data/sky_jukebox_data.h."""
    text = (ROOT / "src/data/sky_jukebox_data.h").read_text()
    return [(n, int(s)) for n, s in re.findall(r'\{ _\("(.*?)"\), (\d+) \}', text)]


def decode_text(raw):
    """Game text bytes -> str. Printable ASCII is kept; other bytes as {XX}."""
    out = []
    for b in raw:
        if 0x20 <= b < 0x7F:
            out.append(chr(b))
        elif b == 0x0A:
            out.append("\n")
        else:
            out.append("{%02X}" % b)
    return "".join(out)
