#!/usr/bin/env python3
"""Scene files (.scene): the chapter-1 event scripts as text, one command a line.

    tools/event_editor/scenes.py compile IN.scene OUT.h   # what the build runs
    tools/event_editor/scenes.py check IN.scene...        # parse and compile, print errors
    tools/event_editor/scenes.py fmt IN.scene...          # rewrite in the canonical layout
    tools/event_editor/scenes.py check --allow-unknown IN.scene...   # and list the names no header defines yet
    tools/event_editor/scenes.py names IN.scene...        # only those names, one a line

The format (documentation/EventEditor.md has the full description):

    # a comment (kept: it becomes a C comment)
    prefix s_gs178_                 the C names' common start
    debug_file src/data/...h        the file name the debug markers record

    script g5_s0_station control=EVENT_CONTROL type=SCRIPT_TYPE_07   # optional note
        DEBUGINFO line=93
        WAIT 120                    # a comment for this line
        MSG_NPC who=PARTNER text=" Hmm..."
        PORTRAIT place=KEEP who=PARTNER emotion=HAPPY
    end

    actors g5_s0_lives
        actor kind=0 facing=EAST x=36 y=22.5 script=g5_s0_lives0_dlg0
    end
    objects NAME / stations / sectors NAME / groups ... end   (the scene layout)

    ```c
    #define NPC_PLAYER 0            raw C, copied as it is
    ```

A command's arguments are `name=value` (any order) or values in C order.
Values are C: numbers, names (a type's prefix may be left out: emotion=HAPPY
is EMOTION_HAPPY), "text" in double quotes (C escapes: \\n, \\"), and
expressions in brackets.

Compiling keeps every debug marker's line and file (`#line`), so the C is
the same as the hand-written header it replaced, byte for byte.
"""
from __future__ import annotations

import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import commands as cmds  # noqa: E402

ROOT = cmds.ROOT
FACINGS = ["SOUTH", "SOUTHEAST", "EAST", "NORTHEAST", "NORTH", "NORTHWEST", "WEST", "SOUTHWEST"]
BLOCK_KINDS = ("script", "actors", "objects", "stations", "sectors", "groups")


class SceneError(Exception):
    def __init__(self, line, msg):
        super().__init__(f"line {line}: {msg}" if line else msg)
        self.line, self.msg = line, msg


# ---------------------------------------------------------------- tokens

def split_comment(s: str):
    """(code, comment or None): `#` outside quotes and brackets starts a comment."""
    depth, q, i = 0, False, 0
    while i < len(s):
        c = s[i]
        if q:
            if c == "\\":
                i += 1
            elif c == '"':
                q = False
        elif c == '"':
            q = True
        elif c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        elif c == "#" and depth == 0:
            return s[:i].rstrip(), s[i + 1:].strip()
        i += 1
    return s.rstrip(), None


def tokens(s: str, line=0) -> list:
    """Whitespace-separated tokens; quotes and brackets group."""
    out, cur, depth, q, i = [], "", 0, False, 0
    while i < len(s):
        c = s[i]
        if q:
            cur += c
            if c == "\\" and i + 1 < len(s):
                cur += s[i + 1]
                i += 1
            elif c == '"':
                q = False
        elif c == '"':
            q = True
            cur += c
        elif c in "([{":
            depth += 1
            cur += c
        elif c in ")]}":
            depth -= 1
            cur += c
        elif c.isspace() and depth == 0:
            if cur:
                out.append(cur)
            cur = ""
        else:
            cur += c
        i += 1
    if q:
        raise SceneError(line, "a text is missing its closing \"")
    if depth:
        raise SceneError(line, "unbalanced brackets")
    if cur:
        out.append(cur)
    return out


_NAMED = re.compile(r"^([a-z][a-z0-9_]*)=(.*)$", re.S)


def split_named(toks):
    """[(name or None, value)]."""
    out = []
    for t in toks:
        m = _NAMED.match(t)
        out.append((m.group(1), m.group(2)) if m and not t.startswith('"') else (None, t))
    return out


def unquote(v: str, line=0) -> str:
    if len(v) >= 2 and v[0] == '"' and v[-1] == '"':
        return v[1:-1]
    raise SceneError(line, f"text must be in double quotes: {v}")


def quote(v: str) -> str:
    return '"' + v + '"'


# ---------------------------------------------------------------- parse

def comment_text(s: str) -> str:
    """`# text` -> `text` (one space after the # is the separator; more is kept)."""
    s = s[1:]
    return (s[1:] if s.startswith(" ") else s).rstrip()


def parse(text: str, path: str = "") -> dict:
    """Text -> model (a JSON-able dict). Raises SceneError."""
    model = dict(prefix="", debug_file="", blocks=[])
    lines = text.split("\n")
    if lines and lines[-1] == "":
        lines.pop()
    known = cmds.all_commands()
    i = 0
    blocks = model["blocks"]
    while i < len(lines):
        n = i + 1
        raw = lines[i]
        s = raw.strip()
        i += 1
        if not s:
            blocks.append(dict(type="blank"))
            continue
        if s.startswith("```"):
            body = []
            while i < len(lines) and lines[i].strip() != "```":
                body.append(lines[i])
                i += 1
            if i >= len(lines):
                raise SceneError(n, "a ```c block is not closed with ```")
            i += 1
            blocks.append(dict(type="c", lines=body, line=n))
            continue
        if s.startswith("#"):
            blocks.append(dict(type="comment", text=comment_text(s)))
            continue
        code, comment = split_comment(s)
        toks = tokens(code, n)
        kw = toks[0]
        if kw in ("prefix", "debug_file"):
            if len(toks) != 2:
                raise SceneError(n, f"{kw} takes one value")
            model[kw] = toks[1]
            continue
        if kw not in BLOCK_KINDS:
            raise SceneError(n, f"expected script/actors/objects/stations/sectors/groups, a comment or ```c, not {kw!r}")
        body = []
        while i < len(lines) and lines[i].strip() != "end":
            body.append((i + 1, lines[i]))
            i += 1
        if i >= len(lines):
            raise SceneError(n, f"{kw} has no `end`")
        i += 1
        blk = dict(type=kw, line=n)
        if comment is not None:
            blk["comment"] = comment
        named = split_named(toks[1:])
        if kw in ("script", "actors", "objects", "sectors"):
            if not named or named[0][0] is not None:
                raise SceneError(n, f"{kw} needs a name")
            blk["name"] = named[0][1]
            named = named[1:]
        for k, v in named:
            if kw == "script" and k in ("control", "type"):
                blk["stype" if k == "type" else k] = v
            else:
                raise SceneError(n, f"unknown setting {k or v!r} for {kw}")
        if kw == "script" and ("control" in blk) != ("stype" in blk):
            raise SceneError(n, "a station script needs both control= and type=")
        blk["rows"] = [r for r in (parse_row(kw, ln, t, known) for ln, t in body)]
        blocks.append(blk)
    return model


def parse_row(kind, n, raw, known):
    s = raw.strip()
    if not s:
        return dict(type="blank")
    if s.startswith("#"):
        return dict(type="comment", text=comment_text(s))
    code, comment = split_comment(s)
    toks = tokens(code, n)
    row = dict(line=n)
    if comment is not None:
        row["comment"] = comment
    if kind == "script":
        op = toks[0]
        if op not in known:
            raise SceneError(n, f"unknown command {op!r}")
        spec = known[op]
        names = [a["name"] for a in spec["args"]]
        vals: list = [None] * len(names)
        pos = 0
        for k, v in split_named(toks[1:]):
            if k is None:
                if pos >= len(names):
                    raise SceneError(n, f"{op} takes {len(names)} values")
                vals[pos] = v
                pos += 1
            else:
                if k not in names:
                    raise SceneError(n, f"{op} has no {k}= (it takes {', '.join(names) or 'nothing'})")
                vals[names.index(k)] = v
        if op == "DEBUGINFO":
            vals = [v for v in vals if v is not None]
        else:
            missing = [names[j] for j, v in enumerate(vals) if v is None]
            if missing:
                raise SceneError(n, f"{op} needs {', '.join(m + '=' for m in missing)}")
        for j, a in enumerate(spec["args"][:len(vals)]):
            if a["type"] == "text" and vals[j] != "NULL":
                vals[j] = unquote(vals[j], n)
        row.update(type="cmd", op=op, args=vals)
        if raw.startswith("  ") and not raw.startswith("    ") and op == "LABEL":
            row["outdent"] = True
        return row
    if kind in ("actors", "objects"):
        want = "actor" if kind == "actors" else "object"
        if toks[0] != want:
            raise SceneError(n, f"each line of {kind} is `{want} ...`")
        f = {}
        for k, v in split_named(toks[1:]):
            if k is None or k not in ("kind", "facing", "w", "h", "x", "y", "xflags", "yflags",
                                      "script", "script1", "script2", "script3"):
                raise SceneError(n, f"unknown {want} setting {k or v!r}")
            f[k] = v
        for k in ("kind", "x", "y"):
            if k not in f:
                raise SceneError(n, f"{want} needs {k}=")
        row.update(type=want, **f)
        return row
    if kind == "stations":
        if len(toks) != 1:
            raise SceneError(n, "one station script name a line")
        row.update(type="station", name=toks[0])
        return row
    if kind == "sectors":
        if toks[0] != "sector":
            raise SceneError(n, "each line of sectors is `sector ...`")
        f = {}
        for k, v in split_named(toks[1:]):
            if k not in ("actors", "objects", "effects", "events", "station"):
                raise SceneError(n, f"unknown sector setting {k or v!r}")
            f[k] = v
        row.update(type="sector", **f)
        return row
    if kind == "groups":
        if len(toks) != 1:
            raise SceneError(n, "one sectors name a line")
        row.update(type="group", name=toks[0])
        return row
    raise SceneError(n, "?")


# ---------------------------------------------------------------- serialize

# commands written with values only (their meaning is plain from the name)
POSITIONAL = {"WAIT", "AWAIT_CUE", "ALERT_CUE", "SELECT_MAP", "FANFARE_PLAY2", "SET_PLACE_MODE", "BGM_FADEOUT",
              "BGM_SWITCH", "CALL_SCRIPT", "JUMP_SCRIPT", "LABEL", "JUMP_LABEL", "SELECT_ANIMATION", "SKY_BUBBLES",
              "SKY_SHOW_MAP", "SKY_AMBIENCE_FADEOUT", "WAIT_FANFARE2", "CLEAR_OBJ_FLAGS", "SET_OBJ_FLAGS",
              "EMOTION_EFFECT", "RENAME_ALLY"}


def fmt_comment(text: str) -> str:
    return "#" + (" " + text if text else "")


def fmt_row(kind, row, known) -> str:
    t = row["type"]
    if t == "blank":
        return ""
    if t == "comment":
        return "    " + fmt_comment(row["text"])
    if t == "cmd":
        spec = known.get(row["op"], dict(args=[]))
        parts = [row["op"]]
        for j, v in enumerate(row["args"]):
            a = spec["args"][j] if j < len(spec["args"]) else dict(name="?", type="expr")
            if a["type"] == "text" and v != "NULL":
                v = quote(v)
            elif len(tokens(v)) != 1 or "#" in v:
                v = f"({v})"   # an expression with spaces: one value
            if row["op"] in POSITIONAL or a["type"] == "expr" and spec.get("cat") == "Other":
                parts.append(v)
            else:
                parts.append(f"{a['name']}={v}")
        s = ("  " if row.get("outdent") else "    ") + " ".join(parts)
    elif t in ("actor", "object"):
        parts = [t]
        for k in ("kind", "facing", "w", "h", "x", "y", "xflags", "yflags", "script", "script1", "script2", "script3"):
            if k in row and row[k] != "":
                parts.append(f"{k}={row[k]}")
        s = "    " + " ".join(parts)
    elif t == "station":
        s = "    " + row["name"]
    elif t == "sector":
        parts = ["sector"] + [f"{k}={row[k]}" for k in ("actors", "objects", "effects", "events", "station") if k in row]
        s = "    " + " ".join(parts)
    elif t == "group":
        s = "    " + row["name"]
    else:
        raise SceneError(row.get("line"), f"unknown row {t}")
    if row.get("comment") is not None:
        s += "   " + fmt_comment(row["comment"])
    return s


def serialize(model: dict) -> str:
    known = cmds.all_commands()
    out = []
    if model.get("prefix"):
        out.append(f"prefix {model['prefix']}")
    if model.get("debug_file"):
        out.append(f"debug_file {model['debug_file']}")
    if out and model["blocks"] and model["blocks"][0]["type"] != "blank":
        out.append("")
    for b in model["blocks"]:
        t = b["type"]
        if t == "blank":
            out.append("")
        elif t == "comment":
            out.append(fmt_comment(b["text"]))
        elif t == "c":
            out.append("```c")
            out += b["lines"]
            out.append("```")
        else:
            head = [t] + ([b["name"]] if "name" in b else [])
            if t == "script" and "control" in b:
                head += [f"control={b['control']}", f"type={b['stype']}"]
            line = " ".join(head)
            if b.get("comment") is not None:
                line += "   " + fmt_comment(b["comment"])
            out.append(line)
            out += [fmt_row(t, r, known) for r in b["rows"]]
            out.append("end")
    return "\n".join(out) + "\n"


# ---------------------------------------------------------------- compile

def c_comment(text: str) -> str:
    return "/* " + text.replace("*/", "* /") + " */" if text else "/* */"


def npc_names(model) -> list:
    out = []
    for b in model["blocks"]:
        if b["type"] == "c":
            for ln in b["lines"]:
                m = re.match(r"\s*#define\s+(NPC_[A-Z0-9_]+)\b", ln)
                if m:
                    out.append(m.group(1))
    return out


def pos_c(row, axis, n):
    v = row[axis]
    flags = row.get(axis + "flags")
    m = re.fullmatch(r"(-?\d+)(\.5)?", v)
    if flags is not None:
        if not m or m.group(2):
            raise SceneError(n, f"with {axis}flags=, {axis}= must be a whole number")
        return v, flags
    if not m:
        raise SceneError(n, f"{axis}= must be a tile number, like 36 or 22.5")
    return m.group(1), "CPOS_HALFTILE" if m.group(2) else "0"


def facing_c(v, n):
    if v is None or v == "":
        return "0"
    if v.upper() in FACINGS:
        return str(FACINGS.index(v.upper()))
    if re.fullmatch(r"\d+", v):
        return v
    raise SceneError(n, f"facing= is one of {', '.join(FACINGS)} or a number")


def compile_c(model: dict, src: str, extra_names: dict | None = None) -> str:
    """Model -> the C header. `src` is the scene file's path (for #line)."""
    known = cmds.all_commands()
    extra = dict(extra_names or {})
    extra["npc"] = npc_names(model)
    P = model.get("prefix", "")
    dbg = model.get("debug_file") or src
    out = [f"/* Generated from {src} by tools/event_editor/scenes.py: edit that file, not this one. */"]
    scripts = {b["name"] for b in model["blocks"] if b["type"] == "script"}
    stations = []

    def sync(n):
        out.append(f'#line {n} "{src}"')

    def ref(name, n):
        if name not in scripts:
            raise SceneError(n, f"no script named {name}")
        b = next(b for b in model["blocks"] if b["type"] == "script" and b["name"] == name)
        return P + name + ("_sref_script" if "control" in b else "")

    for b in model["blocks"]:
        t = b["type"]
        if t == "blank":
            out.append("")
            continue
        if t == "comment":
            out.append(c_comment(b["text"]))
            continue
        if t == "c":
            sync(b["line"] + 1)
            out += b["lines"]
            continue
        sync(b["line"])
        tail = " " + c_comment(b["comment"]) if b.get("comment") is not None else ""
        if t == "script":
            arr = P + b["name"] + ("_sref_script" if "control" in b else "")
            out.append(f"static const struct ScriptCommand {arr}[] = {{{tail}")
            for r in b["rows"]:
                if r["type"] == "blank":
                    out.append("")
                    continue
                if r["type"] == "comment":
                    out.append("    " + c_comment(r["text"]))
                    continue
                spec = known[r["op"]]
                c = " " + c_comment(r["comment"]) if r.get("comment") is not None else ""
                if r["op"] == "DEBUGINFO":
                    line = r["args"][0] if r["args"] else str(r["line"])
                    if not re.fullmatch(r"\d+", line):
                        raise SceneError(r["line"], "DEBUGINFO line= is a number")
                    out.append(f'#line {line} "{dbg}"')
                    out.append(f"    DEBUGINFO_O({line}),{c}")
                    sync(r["line"] + 1)
                    continue
                vals = []
                for j, v in enumerate(r["args"]):
                    a = spec["args"][j]
                    if a["type"] == "text" and v != "NULL":
                        v = f'_("{v}")'
                    else:
                        v = cmds.full(a["type"], v, extra)
                    vals.append(v)
                ind = "  " if r.get("outdent") else "    "
                out.append(f"{ind}{r['op']}({', '.join(vals)}),{c}" if spec["args"] else f"{ind}{r['op']},{c}")
            out.append("};")
            if "control" in b:
                out.append("")
                out.append(f"static const ScriptRef {P}{b['name']}_sref = {{ {b['control']}, {b['stype']}, NULL, {arr} }};")
        elif t in ("actors", "objects"):
            st = "GroundLivesData" if t == "actors" else "GroundObjectData"
            out.append(f"static const struct {st} {P}{b['name']}[] = {{{tail}")
            for k, r in enumerate(b["rows"]):
                if r["type"] == "blank":
                    out.append("")
                    continue
                if r["type"] == "comment":
                    out.append("    " + c_comment(r["text"]))
                    continue
                n = r["line"]
                x, xf = pos_c(r, "x", n)
                y, yf = pos_c(r, "y", n)
                slots = [(j, r.get("script" + ("" if j == 0 else str(j)))) for j in range(4)]
                sc = " ".join(f"[{j}] = {ref(s, n)}," for j, s in slots if s)
                c = " " + c_comment(r["comment"]) if r.get("comment") is not None else ""
                out.append(f"    /* {k:2} */ {{ {r['kind']}, {facing_c(r.get('facing'), n)}, {r.get('w', '0')}, {r.get('h', '0')}, "
                           f"{{ {x}, {y}, {xf}, {yf} }}, {{ {sc} }} }},{c}")
            out.append("};")
        elif t == "stations":
            out.append(f"static const ScriptRef * const (sStationScripts[]) = {{{tail}")
            for r in b["rows"]:
                if r["type"] != "station":
                    out.append("" if r["type"] == "blank" else "    " + c_comment(r["text"]))
                    continue
                nb = next((x for x in model["blocks"] if x["type"] == "script" and x["name"] == r["name"]), None)
                if nb is None or "control" not in nb:
                    raise SceneError(r["line"], f"{r['name']} is not a station script (control=, type=)")
                stations.append(r["name"])
                out.append(f"    &{P}{r['name']}_sref,")
            out.append("};")
        elif t == "sectors":
            out.append(f"static const struct GroundScriptSector {P}{b['name']}_sectors[] = {{{tail}")
            for r in b["rows"]:
                if r["type"] != "sector":
                    out.append("" if r["type"] == "blank" else "    " + c_comment(r["text"]))
                    continue
                f = []
                for k in ("actors", "objects", "effects", "events"):
                    f.append(f"LPARRAY({P}{r[k]})" if r.get(k) else "0,NULL")
                st = r.get("station")
                if st is not None:
                    if not re.fullmatch(r"\d+", st) or int(st) >= len(stations):
                        raise SceneError(r["line"], f"station={st}: there are {len(stations)} station scripts listed before this")
                    f.append(f"1,&sStationScripts[{st}]")
                else:
                    f.append("0,NULL")
                c = " " + c_comment(r["comment"]) if r.get("comment") is not None else ""
                out.append("    { " + ", ".join(f) + f", }},{c}")
            out.append("};")
        elif t == "groups":
            out.append(f"static const struct GroundScriptGroup {P}groups[] = {{{tail}")
            for r in b["rows"]:
                if r["type"] != "group":
                    out.append("" if r["type"] == "blank" else "    " + c_comment(r["text"]))
                    continue
                out.append(f"    {{ LPARRAY({P}{r['name']}_sectors) }},")
            out.append("};")
    return "\n".join(out) + "\n"


def cg_extra_names() -> dict:
    """The story CGs events/sky/cutaways.cfg adds (SKY_CUTAWAY cg=NAME)."""
    try:
        import cutaways
        return dict(cg=[f"SKY_CUTAWAY_{n}" for n in cutaways.extra_ids()])
    except Exception:  # (no cutaways.cfg: the built-in names only)
        return {}


def compile_file(src: Path, dst: Path) -> None:
    rel = src.resolve().relative_to(ROOT).as_posix() if src.resolve().is_relative_to(ROOT) else str(src)
    model = parse(src.read_text(), rel)
    extra = cg_extra_names()
    text = compile_c(model, rel, extra)
    import cutaways
    from cfgfile import CfgError
    try:
        text = cutaways.number_extra_cgs(text)
    except CfgError as e:   # (the cutaways header's rule reports it)
        print(f"note: {e}", file=sys.stderr)
    dst.parent.mkdir(parents=True, exist_ok=True)
    dst.write_text(text)


# ---------------------------------------------------------------- names (drafts)

_C_WORDS = {"TRUE", "FALSE", "NULL", "RGB_U32", "sizeof"}
_known_names: set | None = None


def known_names() -> set:
    """Every #define and enum member of include/ (what a scene's values can name)."""
    global _known_names
    if _known_names is None:
        out = set()
        for h in (ROOT / "include").rglob("*.h"):
            for line in h.read_text(errors="replace").splitlines():
                m = re.match(r"\s*#\s*define\s+([A-Za-z_]\w*)", line)
                if m:
                    out.add(m.group(1))
                    continue
                m = re.match(r"\s*(?:/\*.*?\*/\s*)?([A-Z][A-Z0-9_]*)\s*(=[^,;]*)?,?\s*(//.*|/\*.*)?$", line)
                if m:
                    out.add(m.group(1))
        _known_names = out
    return _known_names


def unknown_names(model: dict, extra_names: dict | None = None) -> list:
    """[(line, name)]: the C names a scene file uses that no header (or the file's own
    ```c blocks) defines: what a draft needs before it can be built (maps, actors, songs...)."""
    known = cmds.all_commands()
    extra = dict(extra_names or {})
    extra["npc"] = npc_names(model)
    own = set()
    for b in model["blocks"]:
        if b["type"] == "c":
            for ln in b["lines"]:
                m = re.match(r"\s*#\s*define\s+([A-Za-z_]\w*)", ln)
                if m:
                    own.add(m.group(1))
    for v in extra.values():
        own.update(v)
    names = known_names() | own | _C_WORDS
    out = []

    def check(n, value, typ="expr"):
        v = cmds.full(typ, value, extra) if typ != "expr" else value
        prefix = cmds.TYPES.get(typ, ("", []))[0]
        if prefix and re.fullmatch(r"[A-Za-z_]\w*", v) and v not in names and not v.startswith(prefix):
            v = prefix + v       # a name not defined yet: report it as the C name it will have
        for w in re.findall(r"(?<![\w.])[A-Za-z_]\w*", v):
            if w not in names and not re.fullmatch(r"0[xX][0-9a-fA-F]+", w):
                out.append((n, w))
    for b in model["blocks"]:
        for r in b.get("rows", []):
            if r.get("type") == "cmd":
                spec = known[r["op"]]
                for j, v in enumerate(r["args"]):
                    a = spec["args"][j]
                    if a["type"] != "text":
                        check(r["line"], v, a["type"])
            elif r.get("type") in ("actor", "object"):
                check(r["line"], r["kind"])
    return out


def main(argv) -> int:
    if len(argv) >= 2 and argv[0] in ("check", "names") and any(a in ("--allow-unknown", "--names") for a in argv[1:]) \
            or len(argv) >= 2 and argv[0] == "names":
        # check --allow-unknown FILES: parse and compile, list the names nothing defines yet (exit 0)
        # check --names FILES:         the same, but an unknown name is an error
        # names FILES:                 just the unknown names, one a line (for an integration list)
        strict = "--names" in argv
        files = [a for a in argv[1:] if not a.startswith("--")]
        bad = 0
        for p in files:
            try:
                m = parse(Path(p).read_text(), p)
                compile_c(m, p, cg_extra_names())
                unk = unknown_names(m, cg_extra_names())
            except SceneError as e:
                print(f"{p}:{e.line or 0}: error: {e.msg}", file=sys.stderr)
                bad = 1
                continue
            if argv[0] == "names":
                for w in sorted({w for _, w in unk}):
                    print(w)
                continue
            if unk and strict:
                for n, w in unk:
                    print(f"{p}:{n}: error: {w} is not defined", file=sys.stderr)
                bad = 1
            else:
                print(f"{p}: OK" + (f" up to {len({w for _, w in unk})} names not defined yet: "
                                    + ", ".join(sorted({w for _, w in unk})) if unk else ""))
        return bad
    if len(argv) >= 1 and argv[0] == "compile" and len(argv) == 3:
        try:
            compile_file(Path(argv[1]), Path(argv[2]))
        except SceneError as e:
            print(f"{argv[1]}:{e.line or 0}: error: {e.msg}", file=sys.stderr)
            return 1
        return 0
    if len(argv) >= 2 and argv[0] in ("check", "fmt", "json"):
        bad = 0
        for p in argv[1:]:
            try:
                m = parse(Path(p).read_text(), p)
                compile_c(m, p, cg_extra_names())
                if argv[0] == "fmt":
                    Path(p).write_text(serialize(m))
                elif argv[0] == "json":
                    print(json.dumps(m, indent=1, ensure_ascii=False))
                else:
                    print(f"{p}: OK")
            except SceneError as e:
                print(f"{p}:{e.line or 0}: error: {e.msg}", file=sys.stderr)
                bad = 1
        return bad
    print(__doc__)
    return 2


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
