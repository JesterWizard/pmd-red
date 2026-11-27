#!/usr/bin/env python3
"""The event editor: a local web page for the chapter-1 scenes, the story CGs
and the opening movie.

    python3 tools/event_editor/serve.py [--port 8765] [--no-browser]

Opens http://127.0.0.1:8765/ in the browser. Only Python's standard library
is needed (pictures added as new CGs are converted by the build, which uses
Pillow like the rest of it). The page edits the text files under events/sky/;
those files are the source of truth, so editing them by hand works the same.
See documentation/EventEditor.md.
"""
from __future__ import annotations

import argparse
import json
import re
import subprocess
import sys
import tempfile
import threading
import webbrowser
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from urllib.parse import parse_qs, urlparse

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
import commands as cmds  # noqa: E402
import cutaways  # noqa: E402
import opening  # noqa: E402
import scenes  # noqa: E402
from cfgfile import Cfg, CfgError  # noqa: E402

ROOT = HERE.parents[1]
SCENE_DIR = ROOT / "events" / "sky" / "scenes"
CG_DIR = ROOT / "graphics" / "custom" / "sky_cutaways"
LOCK = threading.Lock()


class UserError(Exception):
    pass


def scene_path(name: str) -> Path:
    if not re.fullmatch(r"[A-Za-z0-9_\-]+\.scene", name or ""):
        raise UserError(f"not a scene file: {name}")
    p = SCENE_DIR / name
    if not p.exists():
        raise UserError(f"{name} does not exist")
    return p


def check_scene_text(text: str, rel: str) -> dict:
    """Parse and compile (to nothing): SceneError if it would not build."""
    model = scenes.parse(text, rel)
    scenes.compile_c(model, rel, scenes.cg_extra_names())
    return model


def meta() -> dict:
    allc = cmds.all_commands()
    types = {}
    extra = scenes.cg_extra_names()
    for t in cmds.TYPES:
        types[t] = [cmds.short(t, n, extra) for n in cmds.names(t, extra)]
    npcs = set()
    for f in SCENE_DIR.glob("*.scene"):
        try:
            npcs.update(scenes.npc_names(scenes.parse(f.read_text(), f.name)))
        except scenes.SceneError:
            pass
    types["npc"] = ["-1"] + sorted(n[4:] for n in npcs)
    cats = []
    for c in allc.values():
        if c["cat"] not in cats:
            cats.append(c["cat"])
    return dict(commands=allc, types=types, cats=cats, facings=scenes.FACINGS,
                positional=sorted(scenes.POSITIONAL))


def cg_uses() -> dict:
    """{cg name: [{file, script, line, frames}]}: where the scenes show each CG."""
    out = {}
    for f in sorted(SCENE_DIR.glob("*.scene")):
        try:
            m = scenes.parse(f.read_text(), f.name)
        except scenes.SceneError:
            continue
        for b in m["blocks"]:
            if b["type"] != "script":
                continue
            for k, r in enumerate(b["rows"]):
                if r["type"] == "cmd" and r["op"] == "SKY_CUTAWAY":
                    out.setdefault(r["args"][0], []).append(dict(file=f.name, script=b["name"], row=k,
                                                                 line=r["line"], frames=r["args"][1]))
    return out


def cutaways_state() -> dict:
    cfg = cutaways.load()
    sec = lambda n: cfg.section(n) or {}
    cgs = []
    for n in cfg.names("cg"):
        s = sec(f"cg {n}")
        cgs.append(dict(name=n, id=s.get("id"), title=s.get("title", ""), picture=s.get("picture", ""),
                        builtin=n in cutaways.BUILTIN, required=n in cutaways.REQUIRED))
    pans = [dict(name=n, **sec(f"pan {n}")) for n in cfg.names("pan")]
    seqs = [dict(name=n, **sec(f"sequence {n}")) for n in cfg.names("sequence")]
    fixed = [dict(name=n, **sec(f"fixed {n}")) for n in cfg.names("fixed")]
    error = None
    try:
        cutaways.cgs(cfg)
    except CfgError as e:
        error = str(e)
    return dict(stills=sec("stills"), cgs=cgs, pans=pans, sequences=seqs, fixed=fixed, uses=cg_uses(),
                next_id=cutaways.next_id(cfg), error=error, text=cfg.text())


def opening_state() -> dict:
    cfg, doc = Cfg.load(opening.CFG), opening.load_baked()
    sh = cfg.section("shaymin") or {}
    shaymin = [dict(key=k, value=sh.get(k, str(d)), help=h) for k, _, d, h in opening.SHAYMIN]
    out = []
    for b in doc["scenes"]:
        s = cfg.section(f"scene {b['name']}") or {}
        out.append(dict(name=b["name"], title=s.get("title", ""), play=s.get("play", "yes"),
                        first=s.get("first", str(b["frames"][0])), last=s.get("last", str(b["frames"][1])),
                        view=s.get("view", opening.fmt_view(b["view"])),
                        ease=s.get("ease", "smooth" if b["ease"] else "linear"),
                        rec_first=b["frames"][0], rec_last=b["frames"][1], eos_first=b["eos_first"],
                        baked_view=opening.fmt_view(b["view"]), baked_ease="smooth" if b["ease"] else "linear"))
    try:
        notes = opening.needs_rom(cfg, doc)
    except CfgError as e:
        notes = [str(e)]
    return dict(shaymin=shaymin, scenes=out, notes=notes, text=cfg.text())


def apply_cfg(path: Path, changes, check) -> None:
    """changes: [[section, key, value]] (value None: remove the section)."""
    cfg = Cfg.load(path)
    for sec, key, value in changes:
        if not re.fullmatch(r"[A-Za-z0-9_ ]+", sec or "") or (key and not re.fullmatch(r"[a-z_]+", key)):
            raise UserError(f"bad setting {sec} {key}")
        if value is None:
            cfg.remove_section(sec)
            continue
        value = str(value).strip()
        if "\n" in value or " #" in value:
            raise UserError(f"{key}: one line, without ' #'")
        cfg.set(sec, key, value)
    text = cfg.text()
    new = Cfg(text, str(path))
    with tempfile.TemporaryDirectory() as tmp:
        check(new, Path(tmp))
    path.write_text(text)


def run_build() -> dict:
    p = subprocess.run(["make", f"-j{max(1, __import__('os').cpu_count() or 1)}"], cwd=ROOT,
                       stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    log = p.stdout.splitlines()
    return dict(ok=p.returncode == 0, log="\n".join(log[-60:]))


class Handler(BaseHTTPRequestHandler):
    server_version = "EventEditor/1"

    def log_message(self, fmt, *args):  # quiet
        pass

    def send(self, code, body: bytes, ctype="application/json; charset=utf-8"):
        self.send_response(code)
        self.send_header("Content-Type", ctype)
        self.send_header("Content-Length", str(len(body)))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        self.wfile.write(body)

    def json(self, obj, code=200):
        self.send(code, json.dumps(obj, ensure_ascii=False).encode())

    def body(self):
        n = int(self.headers.get("Content-Length", 0))
        return self.rfile.read(n)

    def do_GET(self):
        u = urlparse(self.path)
        q = {k: v[0] for k, v in parse_qs(u.query).items()}
        try:
            if u.path in ("/", "/index.html"):
                return self.send(200, (HERE / "editor.html").read_bytes(), "text/html; charset=utf-8")
            if u.path == "/api/meta":
                return self.json(meta())
            if u.path == "/api/scenes":
                return self.json([f.name for f in sorted(SCENE_DIR.glob("*.scene"))])
            if u.path == "/api/scene":
                p = scene_path(q.get("file"))
                text = p.read_text()
                try:
                    model, error = scenes.parse(text, p.name), None
                except scenes.SceneError as e:
                    model, error = None, str(e)
                return self.json(dict(file=p.name, text=text, model=model, error=error))
            if u.path == "/api/cutaways":
                return self.json(cutaways_state())
            if u.path == "/api/opening":
                return self.json(opening_state())
            if u.path == "/file":
                rel = q.get("path", "")
                p = (ROOT / rel).resolve()
                ok = p.suffix.lower() == ".png" and p.is_file() and p.is_relative_to(ROOT) and \
                    (p.is_relative_to(ROOT / "graphics") or p.is_relative_to(ROOT / "documentation"))
                if not ok:
                    return self.send(404, b"not found", "text/plain")
                return self.send(200, p.read_bytes(), "image/png")
            return self.send(404, b"not found", "text/plain")
        except UserError as e:
            return self.json(dict(error=str(e)), 400)

    def do_POST(self):
        u = urlparse(self.path)
        q = {k: v[0] for k, v in parse_qs(u.query).items()}
        try:
            with LOCK:
                if u.path == "/api/upload":
                    name = q.get("name", "")
                    stem = re.sub(r"[^a-z0-9_]+", "_", Path(name).stem.lower()).strip("_") or "picture"
                    data = self.body()
                    if not data.startswith(b"\x89PNG"):
                        raise UserError("only PNG pictures")
                    dst = CG_DIR / f"{stem}.png"
                    k = 2
                    while dst.exists() or dst.with_suffix(".at4px").exists():
                        dst = CG_DIR / f"{stem}_{k}.png"
                        k += 1
                    dst.write_bytes(data)
                    return self.json(dict(path=dst.relative_to(ROOT).as_posix()))
                req = json.loads(self.body() or b"{}")
                if u.path == "/api/scene/save":
                    p = scene_path(req.get("file"))
                    text = req["text"] if "text" in req else scenes.serialize(req["model"])
                    try:
                        check_scene_text(text, p.name)
                    except scenes.SceneError as e:
                        return self.json(dict(ok=False, error=str(e), line=e.line))
                    p.write_text(text)
                    return self.json(dict(ok=True, model=scenes.parse(text, p.name), text=text))
                if u.path == "/api/scene/setarg":
                    # one argument of one command (the CG tab's durations)
                    p = scene_path(req.get("file"))
                    model = scenes.parse(p.read_text(), p.name)
                    b = next((b for b in model["blocks"] if b["type"] == "script" and b["name"] == req["script"]), None)
                    if b is None:
                        raise UserError(f"no script {req['script']}")
                    row = b["rows"][int(req["row"])]
                    if row.get("type") != "cmd" or row["op"] != req.get("op"):
                        raise UserError("the scene file changed: reload")
                    row["args"][int(req["arg"])] = str(req["value"]).strip()
                    text = scenes.serialize(model)
                    try:
                        check_scene_text(text, p.name)
                    except scenes.SceneError as e:
                        return self.json(dict(ok=False, error=str(e), line=e.line))
                    p.write_text(text)
                    return self.json(dict(ok=True))
                if u.path == "/api/scene/check":
                    text = req["text"] if "text" in req else scenes.serialize(req["model"])
                    try:
                        check_scene_text(text, req.get("file", "scene"))
                    except scenes.SceneError as e:
                        return self.json(dict(ok=False, error=str(e), line=e.line))
                    return self.json(dict(ok=True, text=text))
                if u.path == "/api/cutaways/set":
                    if "text" in req:
                        cfg = Cfg(req["text"], str(cutaways.CFG))
                        with tempfile.TemporaryDirectory() as tmp:
                            cutaways.header(cfg, Path(tmp))
                        cutaways.CFG.write_text(cfg.text())
                    else:
                        apply_cfg(cutaways.CFG, req["changes"], lambda c, tmp: cutaways.header(c, tmp))
                    return self.json(dict(ok=True, state=cutaways_state()))
                if u.path == "/api/cutaways/rebuild_pans":
                    p = subprocess.run([sys.executable, str(ROOT / "tools" / "make_sky_cutaway_scrolls.py")], cwd=ROOT,
                                       stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
                    return self.json(dict(ok=p.returncode == 0, log=p.stdout[-3000:]))
                if u.path == "/api/opening/set":
                    doc = opening.load_baked()
                    if "text" in req:
                        cfg = Cfg(req["text"], str(opening.CFG))
                        with tempfile.TemporaryDirectory() as tmp:
                            opening.headers(cfg, doc, Path(tmp))
                        opening.CFG.write_text(cfg.text())
                    else:
                        apply_cfg(opening.CFG, req["changes"], lambda c, tmp: opening.headers(c, doc, tmp))
                    return self.json(dict(ok=True, state=opening_state()))
                if u.path == "/api/build":
                    return self.json(run_build())
            return self.send(404, b"not found", "text/plain")
        except (UserError, CfgError) as e:
            return self.json(dict(ok=False, error=str(e)))
        except (KeyError, ValueError, json.JSONDecodeError) as e:
            return self.json(dict(ok=False, error=f"bad request: {e}"), 400)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--port", type=int, default=8765)
    ap.add_argument("--no-browser", action="store_true", help="do not open the page")
    a = ap.parse_args()
    srv = ThreadingHTTPServer(("127.0.0.1", a.port), Handler)
    url = f"http://127.0.0.1:{a.port}/"
    print(f"Event editor: {url}  (Ctrl+C stops it)")
    if not a.no_browser:
        threading.Timer(0.5, lambda: webbrowser.open(url)).start()
    try:
        srv.serve_forever()
    except KeyboardInterrupt:
        pass
    return 0


if __name__ == "__main__":
    sys.exit(main())
