"""Small settings files: `[section]` headers, `key = value` lines, `#` comments.

    # a comment
    [pan SKY_DAY_SCROLL]
    direction = down      # a comment after a value

Editing a value (Cfg.set) rewrites only that line and keeps its comment, so a
file edited in the event editor still reads like the one written by hand.
"""
from __future__ import annotations

import re
from pathlib import Path

_SECTION = re.compile(r"^\[\s*([^\]]+?)\s*\]\s*(#.*)?$")
_KEY = re.compile(r"^([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(.*)$")


class CfgError(Exception):
    def __init__(self, path, line, msg):
        super().__init__(f"{path}:{line}: {msg}")
        self.line, self.msg = line, msg


def _split(rest: str):
    """value, comment: a comment starts at ` #`."""
    m = re.search(r"\s#", rest)
    if m:
        return rest[:m.start()].strip(), rest[m.start():]
    return rest.strip(), ""


class Cfg:
    def __init__(self, text: str, path: str = ""):
        self.path = path
        self.lines = text.split("\n")
        if self.lines and self.lines[-1] == "":
            self.lines.pop()
        self.parse()

    @classmethod
    def load(cls, path: Path):
        return cls(Path(path).read_text(), str(path))

    def parse(self):
        self.sections = []   # [(name, {key: (value, line index)}, header line index)]
        cur = None
        for i, raw in enumerate(self.lines):
            s = raw.strip()
            if not s or s.startswith("#"):
                continue
            m = _SECTION.match(s)
            if m:
                cur = (m.group(1), {}, i)
                if any(n == cur[0] for n, _, _ in self.sections):
                    raise CfgError(self.path, i + 1, f"[{cur[0]}] twice")
                self.sections.append(cur)
                continue
            m = _KEY.match(s)
            if not m or cur is None:
                raise CfgError(self.path, i + 1, "expected [section] or key = value")
            v, _ = _split(m.group(2))
            if m.group(1) in cur[1]:
                raise CfgError(self.path, i + 1, f"{m.group(1)} twice in [{cur[0]}]")
            cur[1][m.group(1)] = (v, i)

    def names(self, kind=None):
        """Section names; with kind, the second word of `[kind NAME]` sections."""
        if kind is None:
            return [n for n, _, _ in self.sections]
        return [n.split(None, 1)[1] for n, _, _ in self.sections if n.split(None, 1)[0] == kind and " " in n]

    def section(self, name) -> dict:
        for n, keys, _ in self.sections:
            if n == name:
                return {k: v for k, (v, _) in keys.items()}
        return None

    def line_of(self, name, key=None) -> int:
        for n, keys, h in self.sections:
            if n == name:
                return (keys[key][1] if key else h) + 1
        return 0

    def get(self, name, key, default=None):
        s = self.section(name)
        return default if s is None else s.get(key, default)

    def set(self, name, key, value: str):
        value = str(value)
        for n, keys, h in self.sections:
            if n != name:
                continue
            if key in keys:
                i = keys[key][1]
                raw = self.lines[i]
                m = _KEY.match(raw.strip())
                _, comment = _split(m.group(2))
                indent = raw[:len(raw) - len(raw.lstrip())]
                head = indent + f"{key} = {value}"
                if comment:
                    # the comment stays in its column while the value fits
                    col = len(raw.rstrip()) - len(comment.lstrip())
                    head += " " * max(1, col - len(head)) + comment.lstrip()
                self.lines[i] = head
            else:
                last = max([h] + [ln for _, ln in keys.values()])
                self.lines.insert(last + 1, f"{key} = {value}")
            self.parse()
            return
        self.lines += ["", f"[{name}]", f"{key} = {value}"]
        self.parse()

    def remove_section(self, name):
        for k, (n, keys, h) in enumerate(self.sections):
            if n == name:
                end = self.sections[k + 1][2] if k + 1 < len(self.sections) else len(self.lines)
                # keep the comment lines that introduce the next section
                while end - 1 > h and (not self.lines[end - 1].strip() or self.lines[end - 1].lstrip().startswith("#")):
                    end -= 1
                del self.lines[h:end]
                while h < len(self.lines) and h > 0 and not self.lines[h].strip() and not self.lines[h - 1].strip():
                    del self.lines[h]
                self.parse()
                return

    def text(self) -> str:
        return "\n".join(self.lines) + "\n"
