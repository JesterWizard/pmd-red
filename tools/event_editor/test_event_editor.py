#!/usr/bin/env python3
"""Tests for the event editor's file formats and compilers.

    python3 -m unittest tools/event_editor/test_event_editor.py

The sky regression suite runs them (check `event_editor_tests`). The
byte-for-byte check of the compiled scenes is the ROM's own sha1 (see
documentation/EventEditor.md, "Checking a change").
"""
from __future__ import annotations

import json
import re
import struct
import sys
import tempfile
import unittest
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import cutaways  # noqa: E402
import opening  # noqa: E402
import scenes  # noqa: E402
from cfgfile import Cfg, CfgError  # noqa: E402

ROOT = HERE.parents[1]
SCENE_FILES = sorted((ROOT / "events" / "sky" / "scenes").glob("*.scene"))

SAMPLE = """prefix s_test_
debug_file src/data/test.h

# a comment
```c
#define NPC_PARTNER 1
```

script g0_s0_station control=EVENT_CONTROL type=SCRIPT_TYPE_07   # the station
    DEBUGINFO line=12
    WAIT 60   # one second
    MSG_NPC who=PARTNER text=" Hello,{WAIT_PRESS} \\"you\\"!\\nNext line"
    PORTRAIT emotion=HAPPY who=PARTNER place=KEEP
    WAIT (15 + 5)
    # a comment line

    RET
end

script relic_dlg0
    DEBUGINFO
    HALT
end

actors g0_s0_lives
    actor kind=34 facing=WEST x=30 y=25.5 script=relic_dlg0
end

stations
    g0_s0_station
end

sectors g0
    sector actors=g0_s0_lives station=0
end

groups
    g0
end
"""


class SceneFormat(unittest.TestCase):
    def test_committed_scenes_round_trip(self):
        """Every scene file reads back to the same text, also through JSON (the editor's path)."""
        self.assertTrue(SCENE_FILES)
        for f in SCENE_FILES:
            text = f.read_text()
            model = scenes.parse(text, f.name)
            self.assertEqual(scenes.serialize(model), text, f"{f.name} is not in the canonical layout (scenes.py fmt)")
            again = json.loads(json.dumps(model))
            self.assertEqual(scenes.serialize(again), text)
            c1 = scenes.compile_c(model, f.name)
            c2 = scenes.compile_c(scenes.parse(scenes.serialize(again), f.name), f.name)
            self.assertEqual(c1, c2)

    def test_committed_scenes_keep_debug_lines(self):
        """Each script starts with DEBUGINFO line=N, compiled with #line N (the modern build records it)."""
        for f in SCENE_FILES:
            model = scenes.parse(f.read_text(), f.name)
            c = scenes.compile_c(model, f.name)
            for b in model["blocks"]:
                if b["type"] != "script":
                    continue
                first = next(r for r in b["rows"] if r["type"] == "cmd")
                self.assertEqual(first["op"], "DEBUGINFO", b["name"])
                self.assertTrue(first["args"], f"{b['name']}: DEBUGINFO without line=")
                self.assertIn(f'#line {first["args"][0]} "{model["debug_file"]}"\n    DEBUGINFO_O({first["args"][0]}),', c)

    def test_sample_compiles(self):
        m = scenes.parse(SAMPLE, "t.scene")
        self.assertEqual(scenes.serialize(m), scenes.serialize(scenes.parse(scenes.serialize(m))))
        c = scenes.compile_c(m, "t.scene")
        self.assertIn("static const struct ScriptCommand s_test_g0_s0_station_sref_script[] = { /* the station */", c)
        self.assertIn("    WAIT(60), /* one second */", c)
        self.assertIn('    MSG_NPC(NPC_PARTNER, _(" Hello,{WAIT_PRESS} \\"you\\"!\\nNext line")),', c)
        self.assertIn("    PORTRAIT(PLACEMENT_KEEP, NPC_PARTNER, EMOTION_HAPPY),", c)
        self.assertIn("    WAIT((15 + 5)),", c)
        self.assertIn("    /* a comment line */", c)
        self.assertIn("static const ScriptRef s_test_g0_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_test_g0_s0_station_sref_script };", c)
        self.assertIn("{ 34, 6, 0, 0, { 30, 25, 0, CPOS_HALFTILE }, { [0] = s_test_relic_dlg0, } },", c)
        self.assertIn("{ LPARRAY(s_test_g0_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },", c)
        self.assertIn("{ LPARRAY(s_test_g0_sectors) },", c)
        # a DEBUGINFO without line= records its line in the scene file
        self.assertRegex(c, r'#line 21 "src/data/test.h"\n    DEBUGINFO_O\(21\),')

    def test_named_and_positional(self):
        a = scenes.parse("script s\n    WALK_RELATIVE 204 24 0\nend\n")
        b = scenes.parse("script s\n    WALK_RELATIVE dy=0 speed=204 dx=24\nend\n")
        self.assertEqual(a["blocks"][0]["rows"][0]["args"], b["blocks"][0]["rows"][0]["args"])

    def test_errors_name_the_line(self):
        for text, line, words in [
            ("script s\n    WAIT\nend\n", 2, "needs frames="),
            ("script s\n    WAIT 1\n    NOPE 3\nend\n", 3, "unknown command"),
            ("script s\n    PORTRAIT who=PARTNER place=KEEP mood=HAPPY\nend\n", 2, "has no mood="),
            ("script s\n    MSG_NPC who=-1 text=\" open\nend\n", 2, "closing"),
            ("script s\n    WAIT 1\n", 1, "no `end`"),
            ("bogus\n", 1, "expected"),
        ]:
            with self.assertRaises(scenes.SceneError) as e:
                scenes.compile_c(scenes.parse(text), "t")
            self.assertEqual(e.exception.line, line, text)
            self.assertIn(words, e.exception.msg)

    def test_unknown_reference(self):
        with self.assertRaises(scenes.SceneError):
            scenes.compile_c(scenes.parse("actors a\n    actor kind=0 x=1 y=1 script=missing\nend\n"), "t")


class CutawaysFile(unittest.TestCase):
    def header(self, text):
        with tempfile.TemporaryDirectory() as tmp:
            return cutaways.header(Cfg(text, "cutaways.cfg"), Path(tmp))

    def test_shipped(self):
        h = self.header(cutaways.CFG.read_text())
        for line in ("#define SKY_CG_COUNT 20", "#define SKY_CG_PANS_AS_SHIPPED 1", "#define SKY_CG_FADE_FRAMES_PER_STEP 1",
                     "#define SKY_CG_SKIP_AFTER 30", "#define SKY_CG_SEA_FRAMES 8", "#define SKY_CG_PAN_BEACH_NUM 3",
                     "#define SKY_CG_PAN_BEACH_DEN 5", "[SKY_CUTAWAY_GUILD_SKY] = { sGuildSkyGfx, sGuildSkyPal },",
                     "[SKY_CUTAWAY_SUNSET_SEA0 + 7] = { sSunsetSea7Gfx, sSunsetSea7Pal },"):
            self.assertIn(line, h)

    def test_ids_are_stable(self):
        base = cutaways.CFG.read_text()
        with self.assertRaisesRegex(CfgError, "ids never change"):
            self.header(base.replace("[cg GUILD_SKY]\nid = 4", "[cg GUILD_SKY]\nid = 2"))
        with self.assertRaisesRegex(CfgError, "from 15 up"):
            self.header(base + "\n[cg NEW]\nid = 3\npicture = graphics/custom/sky_cutaways/sky_day.png\n")
        with self.assertRaisesRegex(CfgError, "too"):
            self.header(base + "\n[cg NEW]\nid = 15\npicture = graphics/custom/sky_cutaways/sky_day.png\n"
                        "\n[cg NEW2]\nid = 15\npicture = graphics/custom/sky_cutaways/sky_day.png\n")
        # a removed CG leaves a hole; an added one keeps its id
        text = re.sub(r"\[cg SKY_DUSK\]\n(.*\n)*?\n", "", base, count=1)
        h = self.header(text + "\n[cg NEW]\nid = 20\npicture = graphics/custom/sky_cutaways/sky_day.png\n")
        self.assertNotIn("SKY_CUTAWAY_SKY_DUSK]", h)
        self.assertIn("[20] = { sNewGfx, sNewPal },", h)
        self.assertIn("#define SKY_CG_COUNT 21", h)

    def test_pan_settings(self):
        text = cutaways.CFG.read_text().replace("direction = down\nspeed = 100", "direction = up\nspeed = 150", 1)
        h = self.header(text)
        self.assertIn("#define SKY_CG_PANS_AS_SHIPPED 0", h)
        self.assertIn("#define SKY_CG_PAN_BEACH_DIR SKY_CG_PAN_UP", h)
        self.assertIn("#define SKY_CG_PAN_BEACH_NUM 2", h)
        self.assertIn("#define SKY_CG_PAN_BEACH_DEN 5", h)


class OpeningFile(unittest.TestCase):
    def test_shipped_table(self):
        """The shipped settings give the table the blobs were made with."""
        doc = opening.load_baked()
        with tempfile.TemporaryDirectory() as tmp:
            cfg_h, table = opening.headers(Cfg.load(opening.CFG), doc, Path(tmp))
            self.assertFalse(list(Path(tmp).rglob("*.bin")), "no blob is rewritten as shipped")
        self.assertIn("#define SKY_OP_SHAYMIN_PAN_DIV 2", cfg_h)
        self.assertIn(f"#define SKY_OP_SCENE_COUNT {len(doc['scenes'])}", table)
        for b in doc["scenes"]:
            o = b["offs"]
            self.assertIn(f"{{ sOpBlob_{b['name']}, sOpVer_{b['name']}, {b['num_frames']}, {b['tick']}, "
                          f"{{ {b['num_ver'][0]}, {b['num_ver'][1]} }}, 0, {o['frames']}, {o['objs']}, {o['bgsets']}, "
                          f"{o['objsets']}, {o['objtiles']} }}", table)

    def test_trim(self):
        doc = opening.load_baked()
        text = opening.CFG.read_text().replace("[scene bidoof]\ntitle = Bidoof\nplay = yes\nfirst = 0\nlast = 168",
                                               "[scene bidoof]\ntitle = Bidoof\nplay = yes\nfirst = 10\nlast = 100")
        with tempfile.TemporaryDirectory() as tmp:
            _, table = opening.headers(Cfg(text, "opening.cfg"), doc, Path(tmp))
        b = next(b for b in doc["scenes"] if b["name"] == "bidoof")
        tick = opening.song_tick(doc, b["eos_first"] + 10)
        self.assertIn(f"sOpVer_bidoof, 91, {tick}, {{ 1, 1 }}, 0, {b['offs']['frames'] + 200}, ", table)
        with self.assertRaisesRegex(CfgError, "EoS ROM"):
            opening.headers(Cfg(text.replace("last = 100", "last = 400"), "opening.cfg"), doc, Path(tempfile.gettempdir()))

    def test_reaim_same_view_is_the_same(self):
        """Moving the view by nothing rebuilds the frames and sprite lists the blob already has."""
        doc = opening.load_baked()
        for b in doc["scenes"][:3] + [s for s in doc["scenes"] if s["name"] == "logo_field"]:
            s = dict(first=b["frames"][0], last=b["frames"][1], view=[tuple(k) for k in b["view"]], ease=b["ease"], play=True)
            blob, objs_off = opening.reaim(b, s)
            orig = (opening.SCENE_DIR / f"{b['name']}.bin").read_bytes()
            o = b["offs"]
            n_objs = (o["bgsets"] - o["objs"]) // 8
            self.assertEqual(blob[objs_off:], orig[o["objs"]:o["objs"] + 8 * n_objs], b["name"])
            self.assertEqual(blob[o["frames"]:o["objs"]], orig[o["frames"]:o["objs"]], b["name"])

    def test_reaim_moves(self):
        doc = opening.load_baked()
        b = next(b for b in doc["scenes"] if b["name"] == "bidoof")
        s = dict(first=b["frames"][0], last=b["frames"][1], view=[(0, 8, 200)], ease=True, play=True)
        blob, objs_off = opening.reaim(b, s)
        orig = (opening.SCENE_DIR / "bidoof.bin").read_bytes()
        f0 = opening.FRAME.unpack_from(orig, b["offs"]["frames"])
        f1 = opening.FRAME.unpack_from(blob, b["offs"]["frames"])
        self.assertEqual(f1[1], f0[1] - 8)   # the view 8 lines up: the layers 8 lines up
        self.assertEqual(f1[3], f0[3] - 8)


class CfgFile(unittest.TestCase):
    def test_set_keeps_comments(self):
        c = Cfg("# top\n[a]\nx = 1        # one\n")
        c.set("a", "x", "200")
        c.set("a", "y", "2")
        c.set("b", "z", "3")
        self.assertEqual(c.text(), "# top\n[a]\nx = 200      # one\ny = 2\n\n[b]\nz = 3\n")


if __name__ == "__main__":
    unittest.main()
