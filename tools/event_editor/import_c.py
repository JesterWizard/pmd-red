#!/usr/bin/env python3
"""Turn a hand-written ground-script C file into a .scene file.

    tools/event_editor/import_c.py SRC.h OUT.scene [--prefix s_gs178_] [--first N] [--last N]

Used once per file to move a scene file to the text format (the chapter-1
scenes were moved with it). It reads the layout the sky scene files use:
comments, #define/#include lines, ScriptCommand arrays with their
ScriptRef, GroundLivesData / GroundObjectData arrays, sStationScripts, the
sector and group tables. --first/--last take only those lines of SRC
(1-based; the rest stays in the C file). Each DEBUGINFO_O keeps its line
in SRC (the modern build records __LINE__ and __FILE__), so the compiled
header gives the same bytes.
"""
from __future__ import annotations

import argparse
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import commands as cmds  # noqa: E402
import scenes  # noqa: E402

FACINGS = scenes.FACINGS


def split_args(s: str) -> list:
    out, cur, depth, q, i = [], "", 0, False, 0
    while i < len(s):
        c = s[i]
        if q:
            cur += c
            if c == "\\":
                cur += s[i + 1]
                i += 1
            elif c == '"':
                q = False
        elif c == '"':
            q = True
            cur += c
        elif c == "/" and s[i:i + 2] == "/*":
            j = s.index("*/", i)
            i = j + 2
            continue
        elif c in "([{":
            depth += 1
            cur += c
        elif c in ")]}":
            depth -= 1
            cur += c
        elif c == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
        else:
            cur += c
        i += 1
    if cur.strip():
        out.append(cur.strip())
    return out


def comment_lines(block: list) -> list:
    """Lines of a /* ... */ comment -> its text lines."""
    text = "\n".join(block).strip()
    assert text.startswith("/*") and text.endswith("*/"), text
    body = text[2:-2]
    lines = body.split("\n")
    out = []
    for k, ln in enumerate(lines):
        if k > 0:
            ln = re.sub(r"^\s*\* ?", "", ln, count=1) if re.match(r"^\s*\*", ln) else ln.strip()
        else:
            ln = ln[1:] if ln.startswith(" ") else ln
        out.append(ln.rstrip())
    if out and out[0] == "":
        out = out[1:]
    if out and out[-1].strip() == "":
        out = out[:-1]
    return out or [""]


def take_comment(lines, i):
    """(comment text lines, next index) for a comment starting at lines[i]."""
    block = [lines[i][1]]
    while "*/" not in lines[i][1]:
        i += 1
        block.append(lines[i][1])
    return comment_lines(block), i + 1


_CMD = re.compile(r"^(\s*)([A-Z][A-Z0-9_]*)\s*(\((.*)\))?\s*,\s*(/\*(.*)\*/)?\s*$")
_DECL = re.compile(r"^static const (struct )?(\w+) (?:\* const \()?(\w+)(\[\])?\)? = \{\s*(/\*(.*)\*/)?\s*$")
_REF = re.compile(r"^static const ScriptRef (\w+) = \{ (\w+), (\w+), NULL, (\w+) \};$")
_LIVES = re.compile(r"^\s*/\*\s*\d+ \*/ \{\s*(\w+),\s*(\w+),\s*(\w+),\s*(\w+), \{\s*(-?\w+),\s*(-?\w+), ([\w|]+), ([\w|]+) \}, \{\s*(.*?)\s*(\} \},)?\s*(/\*(.*)\*/)?$")


def import_c(path: Path, prefix: str, first: int, last: int, debug_file: str) -> dict:
    known = cmds.all_commands()
    raw = path.read_text().split("\n")
    lines = [(n, raw[n - 1]) for n in range(first, min(last, len(raw)) + 1)]
    blocks = []
    model = dict(prefix=prefix, debug_file=debug_file, blocks=blocks)
    npcs = []
    i = 0

    def strip_p(name):
        assert name.startswith(prefix), name
        return name[len(prefix):]

    while i < len(lines):
        n, s = lines[i]
        st = s.strip()
        if not st:
            blocks.append(dict(type="blank"))
            i += 1
            continue
        if st.startswith("/*"):
            text, i = take_comment(lines, i)
            blocks += [dict(type="comment", text=t) for t in text]
            continue
        if st.startswith("#"):
            body = []
            while i < len(lines) and lines[i][1].startswith("#"):
                body.append(lines[i][1])
                m = re.match(r"#define (NPC_\w+)", lines[i][1])
                if m:
                    npcs.append(m.group(1))
                i += 1
            blocks.append(dict(type="c", lines=body))
            continue
        m = _REF.match(st)
        if m:
            name, control, stype, script = m.groups()
            k = len(blocks) - 1
            while blocks[k]["type"] == "blank":
                k -= 1
            b = blocks[k]
            assert b["type"] == "script" and prefix + b["name"] == script and name + "_script" == script, st
            assert name.endswith("_sref"), name
            b["name"] = strip_p(name)[:-len("_sref")]
            b["control"], b["stype"] = control, stype
            del blocks[k + 1:]
            i += 1
            continue
        m = _DECL.match(st)
        if not m:
            raise SystemExit(f"{path}:{n}: not understood: {s}")
        ctype, cname, ccomment = m.group(2), m.group(3), m.group(6)
        body = []
        i += 1
        while lines[i][1].strip() != "};":
            body.append(lines[i])
            i += 1
        i += 1
        blk = dict()
        if ccomment is not None:
            blk["comment"] = ccomment.strip()
        rows = []
        if ctype == "ScriptCommand":
            blk.update(type="script", name=strip_p(cname), rows=rows)
            j = 0
            while j < len(body):
                bn, bs = body[j]
                bst = bs.strip()
                if not bst:
                    rows.append(dict(type="blank"))
                    j += 1
                    continue
                if bst.startswith("/*"):
                    text, j = take_comment(body, j)
                    rows += [dict(type="comment", text=t) for t in text]
                    continue
                if "/*" in bs and "*/" not in bs:   # a trailing comment over two lines
                    while "*/" not in bs:
                        j += 1
                        bs += " " + body[j][1].strip().lstrip("*").strip()
                mm = _CMD.match(bs)
                if not mm:
                    raise SystemExit(f"{path}:{bn}: not understood: {bs}")
                indent, op, _, argstr, _, com = mm.groups()
                row = dict(type="cmd")
                if com is not None:
                    row["comment"] = com.strip()
                if op == "DEBUGINFO_O":
                    row.update(op="DEBUGINFO", args=[str(bn)])
                else:
                    spec = known.get(op)
                    if spec is None:
                        raise SystemExit(f"{path}:{bn}: unknown command {op}")
                    args = split_args(argstr) if argstr is not None else []
                    if len(args) != len(spec["args"]):
                        raise SystemExit(f"{path}:{bn}: {op} takes {len(spec['args'])} arguments")
                    vals = []
                    for a, v in zip(spec["args"], args):
                        if a["type"] == "text" and v != "NULL":
                            mt = re.fullmatch(r'_\("(.*)"\)', v, re.S)
                            if not mt:
                                raise SystemExit(f"{path}:{bn}: text argument is not _(\"...\"): {v}")
                            v = mt.group(1)
                        else:
                            v = cmds.short(a["type"], v, dict(npc=npcs))
                        vals.append(v)
                    row.update(op=op, args=vals)
                    if indent == "  ":
                        row["outdent"] = True
                rows.append(row)
                j += 1
        elif ctype in ("GroundLivesData", "GroundObjectData"):
            kind = "actor" if ctype == "GroundLivesData" else "object"
            blk.update(type=kind + "s", name=strip_p(cname), rows=rows)
            j = 0
            while j < len(body):
                bn, bs = body[j]
                mm = _LIVES.match(bs)
                if not mm:
                    if not bs.strip():
                        rows.append(dict(type="blank"))
                        j += 1
                        continue
                    raise SystemExit(f"{path}:{bn}: not understood: {bs}")
                k, facing, w, h, x, y, xf, yf, rest, closed, _, com = mm.groups()
                scripts = {}
                text = rest or ""
                while not closed:
                    j += 1
                    t = body[j][1].strip()
                    if t == "} },":
                        closed = True
                    else:
                        text += " " + t
                for sm in re.finditer(r"\[(\d)\] = (\w+),", text):
                    scripts[int(sm.group(1))] = sm.group(2)
                leftover = re.sub(r"\[(\d)\] = (\w+),", "", text).strip()
                assert leftover in ("", "}"), (bn, leftover)
                row = dict(type=kind, kind=k)
                if facing != "0":
                    row["facing"] = FACINGS[int(facing)]
                if w != "0":
                    row["w"] = w
                if h != "0":
                    row["h"] = h
                for axis, v, fl in (("x", x, xf), ("y", y, yf)):
                    if fl == "0":
                        row[axis] = v
                    elif fl == "CPOS_HALFTILE":
                        row[axis] = v + ".5"
                    else:
                        row[axis] = v
                        row[axis + "flags"] = fl
                for slot, sname in sorted(scripts.items()):
                    sname = strip_p(sname)
                    row["script" + ("" if slot == 0 else str(slot))] = sname
                if com is not None:
                    row["comment"] = com.strip()
                rows.append(row)
                j += 1
        elif ctype == "ScriptRef":
            assert cname == "sStationScripts", cname
            blk.update(type="stations", rows=rows)
            for bn, bs in body:
                mm = re.fullmatch(r"\s*&(\w+)_sref,", bs)
                assert mm, bs
                rows.append(dict(type="station", name=strip_p(mm.group(1))))
        elif ctype == "GroundScriptSector":
            assert cname.endswith("_sectors"), cname
            blk.update(type="sectors", name=strip_p(cname[:-len("_sectors")]), rows=rows)
            for bn, bs in body:
                parts = [p.strip() for p in re.sub(r"LPARRAY\((\w+)\)", r"@\1", bs.strip()[1:].rstrip(",").rstrip()[:-1]).split(",") if p.strip()]
                vals, k = [], 0
                while k < len(parts):
                    if parts[k].startswith("@"):
                        vals.append(parts[k][1:])
                        k += 1
                    else:
                        assert parts[k] in ("0", "1"), bs
                        vals.append(None if parts[k] == "0" else parts[k + 1])
                        k += 2
                assert len(vals) == 5, bs
                row = dict(type="sector")
                for key, v in zip(("actors", "objects", "effects", "events"), vals[:4]):
                    if v is not None:
                        row[key] = strip_p(v)
                if vals[4] is not None:
                    mm = re.fullmatch(r"&sStationScripts\[(\d+)\]", vals[4])
                    assert mm, bs
                    row["station"] = mm.group(1)
                rows.append(row)
        elif ctype == "GroundScriptGroup":
            blk.update(type="groups", rows=rows)
            assert cname == prefix + "groups", cname
            for bn, bs in body:
                mm = re.fullmatch(r"\s*\{ LPARRAY\((\w+)_sectors\) \},", bs)
                assert mm, bs
                rows.append(dict(type="group", name=strip_p(mm.group(1))))
        else:
            raise SystemExit(f"{path}:{n}: {ctype} is not handled")
        blocks.append(blk)
    while blocks and blocks[-1]["type"] == "blank":
        blocks.pop()
    return model


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src", type=Path)
    ap.add_argument("out", type=Path)
    ap.add_argument("--prefix", required=True)
    ap.add_argument("--first", type=int, default=1)
    ap.add_argument("--last", type=int, default=10 ** 9)
    ap.add_argument("--debug-file", help="the file name the debug markers record (default: SRC)")
    a = ap.parse_args()
    model = import_c(a.src, a.prefix, a.first, a.last, a.debug_file or a.src.as_posix())
    text = scenes.serialize(model)
    again = scenes.parse(text, str(a.out))
    assert scenes.serialize(again) == text, "the scene file does not read back the same"
    a.out.parent.mkdir(parents=True, exist_ok=True)
    a.out.write_text(text)
    print(f"{a.out}: {sum(1 for b in model['blocks'] if b['type'] == 'script')} scripts")
    return 0


if __name__ == "__main__":
    sys.exit(main())
