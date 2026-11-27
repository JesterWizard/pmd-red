"""The EoS ground maps' files (tools/convert_eos_ground_map.py): every
MAP_SKY_* map is registered, its files are linked, it fits the tile budget,
and it renders exactly as it did when it was checked against EoS."""

import hashlib
import re
import struct
import sys
from pathlib import Path

from harness import check, expect

# sha1 of tools/convert_eos_ground_map.py's render_rt_image (both layers, BPA
# frame 0) of each map. Each was pixel-identical to skytemple's render of the
# EoS level when it was converted (`convert_eos_ground_map.py EOS.nds LEVEL
# STEM --compare`, which needs the ROM); a changed file or converter changes
# the hash. EV0107B is built by tools/make_sky_storm_waves_map.py.
RENDER_SHA1 = {
    "MAP_SKY_STORM_SEA": "e6f064b6fb0fe0372e1ac4edf3eb09d3c4c444a2",
    "MAP_SKY_GUILD_DUSK": "2d5c10489ba52caabd8874121938e5944009b356",
    "MAP_SKY_BEACH_DUSK": "4d9006dbbf6bbeda9d33d2b28791f9ba22b83609",
    "MAP_SKY_KRABBY_BUBBLES": "c49f4b9eb2267b37cb57b1a2ef5b2aa71aa50116",
    "MAP_SKY_KRABBY_SUNSET": "e04c17a38a6f0feec9fdf0900b96d8356bb721c0",
    "MAP_SKY_BEACH_CAVE_PIT": "2bbd99456894fa93b1e55bee693fa65485559a83",
    "MAP_SKY_BEACH_DAY": "53315bf6d8248b1c1a8f9c384056ce18cc620e84",
    "MAP_SKY_STORM_WAVES": "b63c5957382643a90f5ec6fb5d40ccaec80b28f3",
    "MAP_SKY_GUILD_ENTRANCE": "1b00d96b3ee21c83806269c43fbf5b2486df2e60",
    "MAP_SKY_GUILD_1F": "66e52c2a23991c538c74ccf56d30331e638ec187",
    "MAP_SKY_GUILD_B1F": "1ad9c2bad3bf2edd2c14d505526de3c3c05f4329",
    "MAP_SKY_GUILD_B2F": "eda0a70be4c3b31d4ac155d8cb7729725c0979eb",
    "MAP_SKY_GUILD_B2F_DOOR": "ff0d8cad866c31f6a0615c55d12331b651eefd1d",
    "MAP_SKY_GUILD_B2F_NIGHT": "2c835a0418c72fe00ef0decf37a2ae6c1469df5f",
    "MAP_SKY_GUILD_WIGGLYTUFF": "a2439888ee8aa22c87a13ccfeb85f15aed0362d6",
    "MAP_SKY_GUILD_WIGGLYTUFF_NIGHT": "6ae92b58e774b3692ef14bf56dd84f0e8e565c1a",
    "MAP_SKY_GUILD_MESS_HALL": "bd7711459e728d24f57c4c8f52a7b2d0bba46733",
    "MAP_SKY_GUILD_CREW_ROOM": "fc916132cd6ae20d776da4882b1184c4d45155d0",
    "MAP_SKY_GUILD_CREW_ROOM_NIGHT": "76e98d5357a793f5c84c9cc145c16c5ed71f6d12",
    "MAP_SKY_DRENCHED_BLUFF_ENTRANCE": "2ff6668319ac58c612295d2d1045d7e23d6c86e6",
    "MAP_SKY_DRENCHED_BLUFF_END": "b63620ed6e777696e6ab571d20ae28172498cec4",
    # chapter 3 (documentation/Features/SkyChapter3.md). EP1501A and EV0309A
    # are cropped (--crop-chunks 0 0 19 12, 1 2 11 8); their render is the
    # same crop of EoS's.
    "MAP_SKY_TREASURE_TOWN_SQUARE": "fa5d27ae13a7c5874652021403e0fe7b63997839",
    "MAP_SKY_TREASURE_TOWN_WEST": "81af7d918c8e50932d55ec39108b37d91c6d2bc8",
    "MAP_SKY_CROSSROADS": "da304da2ab7aa2612d5dd7cbc57ab576a87dec26",
    "MAP_SKY_BEACH_PATH": "a78257510d9289d85d4977e403d2c5bc48520c57",
    "MAP_SKY_GUILD_ENTRANCE_DAY": "a151dc60957ebd7ba9e657310acd78b296880141",
    "MAP_SKY_MT_BRISTLE_ENTRANCE": "6724c81329e7bb9b542356dbc5c1c207ccb2ab10",
    "MAP_SKY_MT_BRISTLE_PEAK": "097954be6f699df81c779ca7831cce3c448250ea",
    "MAP_SKY_BIDOOF_HOME": "2463c8aef2520143e94fa134ba92237388491985",
    "MAP_SKY_DUGTRIO_TUNNEL": "69a8ed3c9f104fc6f6e2f067a4ba2bb3684b9e41",
    "MAP_SKY_STORM_CLOUDS": "4677a64b721a000aa19b9eaeb18304901f3b6eff",
    "MAP_SKY_TIME_GEAR_FOREST": "3d64c5ffaf2c41973f23fc8c1c0d6033c5302584",
    "MAP_SKY_TIME_GEAR_LAKE": "6bf2f338c22708e2ff1c9ab0d599e98167ceee7c",
    "MAP_SKY_TIME_GEAR_VOLCANO": "1790ae8a780602bcb894aafae350d4d65b17affb",
    "MAP_SKY_TIME_FLOW": "603a05db6248ae0e445aae2a297440421dfe85bc",
    "MAP_SKY_GROVYLE_RUN": "68230ea12d2fac24c676f6f16a570f0a3ef8f15b",
    "MAP_SKY_GROVYLE_CLOSEUP": "47d2d5fd95bbe941ffbb3a22b1e26cbedee874bc",
}

STREAM_MAX_TILES = 4096  # GROUND_STREAM_MAX_SOURCE_TILES (sky build), 12-bit ids


def sky_maps(root):
    """{MAP_SKY_X: (unk0, bpl, bpc, bma, [bpa...]) } from the map tables."""
    # the #ifdef SKY_STORY blocks at the tables' ends (Red has MAP_SKY_TOWER)
    files = (root / "src" / "map_files_table.c").read_text()
    files = files[files.rindex("#ifdef SKY_STORY"):]
    conv = (root / "src" / "ground_map_conversion_table.c").read_text()
    conv = conv[conv.rindex("#ifdef SKY_STORY"):]
    entries = {}
    for m in re.finditer(r"\[MAP_FILE_ID_(SKY_\w+)\] = \{(.*?)\n    \},", files, re.S):
        body = m.group(2)
        get = lambda k: re.search(rf'\.{k}FileName = "(\w+)"', body).group(1)
        bpas = re.findall(r'"(\w+)"', re.search(r"\.bpaFileNames = \{([^}]*)\}", body).group(1))
        entries[m.group(1)] = (get("bpl"), get("bpc"), get("bma"), bpas)
    out = {}
    for m in re.finditer(r"\[MAP_(SKY_\w+)\] = \{(.*?)\n    \},", conv, re.S):
        unk0 = int(re.search(r"\.unk0 = (\d+)", m.group(2)).group(1))
        fid = re.search(r"\.mapFileTableId = MAP_FILE_ID_(SKY_\w+)", m.group(2)).group(1)
        out["MAP_" + m.group(1)] = (unk0,) + entries[fid]
    return out


def window_max(root, bpc, bma, n_tiles):
    """The most distinct tiles a 32x24-tile window (both layers) shows: what
    one stream remap must fit into the VRAM slots."""
    from skytemple_files.common.types.file_types import FileType
    data = (root / "data" / "map_bg" / f"{bpc}.bpc").read_bytes()
    n_chunks = struct.unpack_from("<8h", data, 0)[7]
    off = 16 + (n_tiles - 1) * 32
    chunks = [[0] * 9] + [list(struct.unpack_from("<9H", data, off + i * 18)) for i in range(n_chunks - 1)]
    m = FileType.BMA.deserialize((root / "data" / "map_bg" / f"{bma}.bma").read_bytes())
    W, H = m.map_width_chunks * 3, m.map_height_chunks * 3
    grids = []
    for layer in [m.layer0, m.layer1][:m.number_of_layers]:
        g = [[0] * W for _ in range(H)]
        for ci, c in enumerate(layer):
            cx, cy = ci % m.map_width_chunks, ci // m.map_width_chunks
            for k, e in enumerate(chunks[c]):
                g[cy * 3 + k // 3][cx * 3 + k % 3] = e & 0xFFF
        grids.append(g)
    best = 0
    for ty in range(max(1, m.map_height_camera - 19)):
        for tx in range(max(1, m.map_width_camera - 29)):
            s = set()
            for g in grids:
                for row in g[ty:ty + 24]:
                    s.update(row[tx:tx + 32])
            s.discard(0)
            best = max(best, len(s))
    return best


@check("tools", "Every MAP_SKY_* map: registered (station script), files linked, within the tile "
       "budget (streamed: one view fits the VRAM slots), renders as checked against EoS")
def sky_map_files(t):
    root = Path(t.env["root"])
    sys.path.insert(0, str(root / "tools"))
    import convert_eos_ground_map as conv
    maps = sky_maps(root)
    linked = set(re.findall(r'const u8 gFile(\w+)\[\]', (root / "src" / "ground_map_files_sky.c").read_text()))
    table = (root / "src" / "ground_files_table.c").read_text()
    in_table = set(re.findall(r'\{ "(E\w+)", &gFile\1, \}', table))
    scripts = (root / "src" / "map_script_table.c").read_text()
    problems, notes = [], []
    for name, (unk0, bpl, bpc, bma, bpas) in maps.items():
        before = len(problems)
        if not re.search(rf"\[{name}\] = &gGroundScript_gs\d+,", scripts):
            problems.append(f"{name}: no gMapScriptTable entry")
        for f in [bpl, bpc, bma] + bpas:
            if f not in linked or f not in in_table:
                problems.append(f"{name}: {f} not linked (ground_map_files_sky.c) or not in gGroundFiles")
        if len(problems) > before:
            continue
        hdr = struct.unpack_from("<8h", (root / "data" / "map_bg" / f"{bpc}.bpc").read_bytes(), 0)
        n_tiles, anim = hdr[2], sum(hdr[3:7])
        layers = 2 if unk0 == 6 else 1
        slots = 1024 if layers == 2 else 0x380
        if n_tiles > slots:
            view = window_max(root, bpc, bma, n_tiles)
            if n_tiles > STREAM_MAX_TILES or view > slots - 1 or anim:
                problems.append(f"{name}: streamed, {n_tiles} tiles, {view} in one view, {anim} animated")
            kind = f"{n_tiles} streamed ({view} in a view)"
        else:
            if n_tiles + anim > slots:
                problems.append(f"{name}: {n_tiles} + {anim} animated tiles > {slots}")
            kind = f"{n_tiles}" + (f"+{anim}" if anim else "")
        img = conv.render_rt_image(bpl, bpc[:-1], bma[:-1], tuple(bpas))
        sha = hashlib.sha1(img.tobytes()).hexdigest()
        want = RENDER_SHA1.get(name)
        if want != sha:
            problems.append(f"{name}: render sha1 {sha[:12]}, expected {want[:12] if want else 'none recorded'}")
        notes.append(f"{name[8:]} {kind}")
    expect(not problems, "\n      ".join(problems))
    return f"{len(maps)} maps: " + ", ".join(notes)
