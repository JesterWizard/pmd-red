"""A reader for the ExplorerScript (.exps) that SkyTemple decompiles Explorers of
Sky scene scripts (SCRIPT/<LEVEL>/*.ssb) into.

    import exps
    module = exps.parse(text)
    for routine in module.routines:        # def 0 { ... }, def 1 for actor X { ... }
        for stmt in routine.body: ...

Only the reading side, for tools/event_editor/eos_import.py: the decompiler's
output (one statement a line, `def`/`coro` blocks, switch / if / forever, the
`message_SwitchTalk (...) { case: { english=... } }` text blocks), not the
whole language. Statements keep their source lines (`src`), so a translator
can quote what it could not translate.

Expressions are tuples:
    ("num", 3) ("num", 0.7969) ("name", "DIR_UP") ("var", "$SCENARIO_MAIN")
    ("str", "text") ("text", {"english": "..."}) ("pos", "m1", 32.0, 25.0)
    ("call", name, [args]) ("list", [items]) ("index", expr, expr)
    ("bin", op, a, b) ("not", a) ("scn", var)  ("menu", text-dict)
"""
from __future__ import annotations

import itertools
import re
from dataclasses import dataclass, field


class ExpsError(Exception):
    pass


# ---------------------------------------------------------------- strings

def multiline_string(body: str) -> str:
    """The value of a \"\"\"...\"\"\" literal (explorerscript's own rule)."""
    all_lines = body.splitlines()
    lines: list = []
    last_line = ""
    if not all_lines:
        first_line = ""
    elif len(all_lines) == 1:
        first_line = all_lines[0]
    elif len(all_lines) == 2:
        first_line, last_line = all_lines
    else:
        first_line, *lines, last_line = all_lines
    if last_line.lstrip(" "):
        lines.append(last_line)
    counts = [sum(1 for _ in itertools.takewhile(lambda c: c == " ", ln)) for ln in lines]
    m = min(counts, default=0)
    lines = [ln[m:] for ln in lines]
    nl = "\n" if first_line != "" and lines else ""
    return first_line + nl + "\n".join(lines)


def single_string(body: str) -> str:
    return body.replace('\\"', '"').replace("\\'", "'").replace("\\n", "\n")


# ---------------------------------------------------------------- tokens

@dataclass
class Tok:
    kind: str      # name var num str op
    value: object
    line: int


_TOKEN = re.compile(r'''
    (?P<ws>[ \t\r]+|//[^\n]*|/\*.*?\*/)
  | (?P<nl>\n)
  | (?P<mstr>"""(?:.|\n)*?""")
  | (?P<dstr>"(?:\\.|[^"\\\n])*")
  | (?P<sstr>'(?:\\.|[^'\\\n])*')
  | (?P<num>\d+\.\d+|\d+)
  | (?P<var>\$[A-Za-z_][A-Za-z0-9_]*)
  | (?P<label>@[A-Za-z_][A-Za-z0-9_]*)
  | (?P<name>[A-Za-z_][A-Za-z0-9_]*)
  | (?P<op>==|!=|<=|>=|\|\||&&|\+=|-=|\*=|/=|[-+*/<>=(){}\[\],;:.~!&|^%])
''', re.X)


def tokenize(text: str) -> list:
    out, pos, line = [], 0, 1
    while pos < len(text):
        m = _TOKEN.match(text, pos)
        if not m:
            raise ExpsError(f"line {line}: cannot read {text[pos:pos + 20]!r}")
        k = m.lastgroup
        s = m.group(k)
        if k == "nl":
            line += 1
        elif k == "ws":
            line += s.count("\n")
        elif k == "mstr":
            out.append(Tok("str", multiline_string(s[3:-3]), line))
            line += s.count("\n")
        elif k in ("dstr", "sstr"):
            out.append(Tok("str", single_string(s[1:-1]), line))
        elif k == "num":
            out.append(Tok("num", float(s) if "." in s else int(s), line))
        else:
            out.append(Tok(k, s, line))
        pos = m.end()
    out.append(Tok("eof", None, line))
    return out


# ---------------------------------------------------------------- statements

@dataclass
class Stmt:
    kind: str              # call label jump ctrl switch if forever with assign textswitch
    line: int
    end_line: int = 0
    name: str = ""         # call: function; label/jump: label name; ctrl: end/hold/return/break/continue
    target: tuple | None = None   # ("actor", "ACTOR_X") ("object", "...") ("performer", 0)
    args: list = field(default_factory=list)
    body: list = field(default_factory=list)       # forever / with / if-then
    cases: list = field(default_factory=list)      # switch: [(values, body)]; textswitch: [(values, text-dict)]
    elifs: list = field(default_factory=list)      # if: [(cond, body)]
    orelse: list | None = None
    cond: object = None    # if / switch expression
    src: str = ""          # the source, on one line


@dataclass
class Routine:
    kind: str          # def / coro / macro
    id: str            # "0", "1", or a coro's name
    target: tuple | None
    body: list
    line: int


@dataclass
class Module:
    routines: list
    lines: list        # the source lines

    def routine(self, rid: str):
        return next((r for r in self.routines if r.id == str(rid)), None)


class Parser:
    def __init__(self, text: str):
        self.text = text
        self.lines = text.split("\n")
        self.t = tokenize(text)
        self.i = 0

    # -- helpers
    def peek(self, o=0) -> Tok:
        return self.t[min(self.i + o, len(self.t) - 1)]

    def next(self) -> Tok:
        tok = self.t[self.i]
        self.i += 1
        return tok

    def at(self, value, o=0) -> bool:
        tok = self.peek(o)
        return tok.kind in ("op", "name") and tok.value == value

    def expect(self, value) -> Tok:
        tok = self.next()
        if tok.value != value:
            raise ExpsError(f"line {tok.line}: expected {value!r}, found {tok.value!r}")
        return tok

    def src(self, a: int, b: int) -> str:
        s = " ".join(ln.strip() for ln in self.lines[a - 1:b])
        return re.sub(r"\s+", " ", s).strip()

    # -- top level
    def module(self) -> Module:
        out = []
        while self.peek().kind != "eof":
            tok = self.next()
            if tok.value in ("def", "coro", "macro"):
                rid = self.next().value
                target = None
                if tok.value == "macro":
                    self.skip_parens()
                if self.at("for"):
                    self.next()
                    kind = self.next().value
                    target = (kind, self.next().value)
                body = self.block()
                out.append(Routine(tok.value, str(rid), target, body, tok.line))
            elif tok.value == "import":
                while not self.at(";"):
                    self.next()
                self.next()
            else:
                raise ExpsError(f"line {tok.line}: expected def/coro, found {tok.value!r}")
        return Module(out, self.lines)

    def skip_parens(self):
        self.expect("(")
        depth = 1
        while depth:
            v = self.next().value
            depth += {"(": 1, ")": -1}.get(v, 0) if isinstance(v, str) else 0

    def block(self) -> list:
        self.expect("{")
        out = []
        while not self.at("}"):
            if self.peek().kind == "eof":
                raise ExpsError("unexpected end of file in a block")
            s = self.stmt()
            if s is not None:
                out.append(s)
        self.next()
        return out

    def stmt(self):
        tok = self.peek()
        line = tok.line
        if tok.kind == "label":
            self.next()
            self.expect(";")
            return Stmt("label", line, line, name=tok.value[1:], src=tok.value + ";")
        v = tok.value
        if tok.kind == "name" and v in ("end", "hold", "return", "break", "continue", "break_loop"):
            self.next()
            self.expect(";")
            return Stmt("ctrl", line, line, name=v, src=v + ";")
        if tok.kind == "name" and v == "jump":
            self.next()
            lab = self.next()
            self.expect(";")
            return Stmt("jump", line, line, name=str(lab.value).lstrip("@"), src=f"jump {lab.value};")
        if tok.kind == "name" and v == "forever":
            self.next()
            body = self.block()
            return Stmt("forever", line, self.peek(-1).line, body=body, src="forever {")
        if tok.kind == "name" and v == "while":
            self.next()
            cond = self.paren_expr()
            body = self.block()
            return Stmt("while", line, self.peek(-1).line, cond=cond, body=body, src=self.src(line, line))
        if tok.kind == "name" and v == "with":
            self.next()
            self.expect("(")
            kind = self.next().value
            name = self.next().value
            self.expect(")")
            body = self.block()
            return Stmt("with", line, self.peek(-1).line, target=(kind, name), body=body, src=self.src(line, line))
        if tok.kind == "name" and v == "if":
            return self.if_stmt()
        if tok.kind == "name" and v == "switch":
            self.next()
            cond = self.paren_expr()
            cases = self.cases()
            return Stmt("switch", line, self.peek(-1).line, cond=cond, cases=cases, src=self.src(line, line))
        if tok.kind == "name" and v in ("reset", "clear", "init", "alias"):
            self.next()
            parts = []
            while not self.at(";"):
                parts.append(str(self.next().value))
            self.next()
            return Stmt("assign", line, line, name=v, args=parts, src=self.src(line, line))
        if tok.kind == "var" or (tok.kind == "name" and self.is_assign()):
            lhs = self.expr()
            op = self.next().value
            rhs = self.expr()
            self.expect(";")
            return Stmt("assign", line, self.peek(-1).line, name=op, args=[lhs, rhs], src=self.src(line, self.peek(-1).line))
        if tok.kind == "op" and v == "~":
            self.next()
        if tok.kind in ("name",) or (tok.kind == "op" and v == "~"):
            name = self.next().value
            target = None
            if self.at("<") and self.peek(1).value in ("actor", "object", "performer"):
                self.next()
                kind = self.next().value
                tv = self.next().value
                self.expect(">")
                target = (kind, tv)
            args = self.args()
            if self.at("{"):
                # message_SwitchTalk (...) { case 1: { english=... } ... }
                cases = self.cases()
                return Stmt("textswitch", line, self.peek(-1).line, name=name, target=target, args=args,
                            cases=cases, src=self.src(line, line))
            self.expect(";")
            return Stmt("call", line, self.peek(-1).line, name=name, target=target, args=args,
                        src=self.src(line, self.peek(-1).line))
        raise ExpsError(f"line {line}: cannot read a statement at {v!r}")

    def is_assign(self) -> bool:
        """name(...) = x;  (dungeon_mode(3) = DMODE_OPEN)"""
        j = self.i + 1
        if self.t[j].value != "(":
            return self.t[j].value in ("=", "+=", "-=")
        depth = 0
        while True:
            v = self.t[j].value
            if v == "(":
                depth += 1
            elif v == ")":
                depth -= 1
                if depth == 0:
                    break
            j += 1
        return self.t[j + 1].value == "="

    def if_stmt(self) -> Stmt:
        line = self.next().line
        neg = False
        if self.at("not"):
            self.next()
            neg = True
        cond = self.paren_expr()
        if neg:
            cond = ("not", cond)
        body = self.block()
        elifs, orelse = [], None
        while self.at("elseif") or (self.at("else") and self.at("if", 1)):
            if self.at("else"):
                self.next()
            self.next()
            neg = False
            if self.at("not"):
                self.next()
                neg = True
            c = self.paren_expr()
            elifs.append((("not", c) if neg else c, self.block()))
        if self.at("else"):
            self.next()
            orelse = self.block()
        return Stmt("if", line, self.peek(-1).line, cond=cond, body=body, elifs=elifs, orelse=orelse, src=self.src(line, line))

    def cases(self) -> list:
        """switch body: [(values, body)]; a value is an expr, "default", or ("menu", text)."""
        self.expect("{")
        out = []
        while not self.at("}"):
            vals = []
            while self.at("case") or self.at("default"):
                if self.next().value == "default":
                    vals.append("default")
                else:
                    if self.peek().value in ("==", "!=", "<", ">", "<=", ">="):
                        op = self.next().value
                        vals.append(("cmp", op, self.expr()))
                    else:
                        vals.append(self.expr())
                self.expect(":")
            if not vals:
                raise ExpsError(f"line {self.peek().line}: expected case/default, found {self.peek().value!r}")
            body = []
            if self.at("{") and self.peek(1).kind == "name" and self.peek(2).value == "=":
                body = self.text_dict()
            else:
                while not (self.at("case") or self.at("default") or self.at("}")):
                    s = self.stmt()
                    if s is not None:
                        body.append(s)
            out.append((vals, body))
        self.next()
        return out

    # -- expressions
    def args(self) -> list:
        self.expect("(")
        out = []
        while not self.at(")"):
            out.append(self.expr())
            if self.at(","):
                self.next()
        self.next()
        return out

    def paren_expr(self):
        self.expect("(")
        e = self.expr()
        self.expect(")")
        return e

    PREC = {"||": 1, "&&": 2, "==": 3, "!=": 3, "<": 4, ">": 4, "<=": 4, ">=": 4,
            "|": 5, "^": 5, "&": 6, "+": 7, "-": 7, "*": 8, "/": 8, "%": 8}

    def expr(self, prec=0):
        left = self.unary()
        while True:
            tok = self.peek()
            if tok.kind != "op" or tok.value not in self.PREC or self.PREC[tok.value] <= prec:
                return left
            self.next()
            right = self.expr(self.PREC[tok.value])
            left = ("bin", tok.value, left, right)

    def unary(self):
        tok = self.peek()
        if tok.value == "-" and tok.kind == "op":
            self.next()
            e = self.unary()
            return ("num", -e[1]) if e[0] == "num" else ("neg", e)
        if tok.value in ("not", "!"):
            self.next()
            return ("not", self.unary())
        e = self.primary()
        while self.at("["):
            self.next()
            idx = self.expr()
            self.expect("]")
            e = ("index", e, idx)
        return e

    def text_dict(self) -> tuple:
        self.expect("{")
        d = {}
        while not self.at("}"):
            k = self.next().value
            self.expect("=")
            d[k] = self.next().value
            if self.at(","):
                self.next()
        self.next()
        return ("text", d)

    def primary(self):
        tok = self.next()
        if tok.kind == "num":
            return ("num", tok.value)
        if tok.kind == "str":
            return ("str", tok.value)
        if tok.kind == "var":
            return ("var", tok.value)
        if tok.kind == "op" and tok.value == "(":
            e = self.expr()
            self.expect(")")
            return e
        if tok.kind == "op" and tok.value == "[":
            items = []
            while not self.at("]"):
                items.append(self.expr())
                if self.at(","):
                    self.next()
            self.next()
            return ("list", items)
        if tok.kind == "op" and tok.value == "{":
            self.i -= 1
            return self.text_dict()
        if tok.kind == "name":
            if tok.value == "Position" and self.at("<"):
                self.next()
                name = self.next().value
                self.expect(",")
                x = self.unary()
                self.expect(",")
                y = self.unary()
                self.expect(">")
                return ("pos", name, float(x[1]), float(y[1]))
            if tok.value == "scn" and self.at("["):
                return ("scnval", self.primary())
            if self.at("("):
                args = self.args()
                if tok.value == "menu" and args and args[0][0] == "text":
                    return ("menu", args[0][1])
                if tok.value == "scn" and args:
                    return ("scn", args[0])
                return ("call", tok.value, args)
            return ("name", tok.value)
        raise ExpsError(f"line {tok.line}: unexpected {tok.value!r} in an expression")


def parse(text: str) -> Module:
    return Parser(text).module()


def fmt(e) -> str:
    """An expression back as (roughly) ExplorerScript."""
    if e is None:
        return ""
    if isinstance(e, str):
        return e
    k = e[0]
    if k == "num":
        return str(e[1])
    if k in ("name", "var"):
        return e[1]
    if k == "str":
        return repr(e[1])
    if k == "text":
        return "{" + ", ".join(f"{a}={b!r}" for a, b in e[1].items()) + "}"
    if k == "pos":
        return f"Position<'{e[1]}', {e[2]:g}, {e[3]:g}>"
    if k == "call":
        return f"{e[1]}({', '.join(fmt(a) for a in e[2])})"
    if k == "list":
        return "[" + ", ".join(fmt(a) for a in e[1]) + "]"
    if k == "index":
        return f"{fmt(e[1])}[{fmt(e[2])}]"
    if k == "bin":
        return f"{fmt(e[2])} {e[1]} {fmt(e[3])}"
    if k == "not":
        return f"not {fmt(e[1])}"
    if k == "neg":
        return f"-{fmt(e[1])}"
    if k == "scn":
        return f"scn({fmt(e[1])})"
    if k == "scnval":
        return f"scn{fmt(e[1])}"
    if k == "menu":
        return f"menu({e[1].get('english', '')!r})"
    if k == "cmp":
        return f"{e[1]} {fmt(e[2])}"
    return str(e)
