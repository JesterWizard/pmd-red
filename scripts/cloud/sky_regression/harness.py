"""Check registry and the frame loop.

A check is a small function registered with @check. Two kinds:

* Frame checks (generator functions) watch one emulator run of a test ROM.
  The runner sends them every frame; they `yield` to get the next one:

      @check("divide", "The guild's totem poles are placed")
      def guild_totem_poles(t):
          f = yield from t.wait(lambda f: t.game.map_name(f) == "MAP_SKY_GUILD_DUSK",
                                "the guild scene")
          kinds = t.game.ground_object_kinds(f)
          expect(70 in kinds and 71 in kinds, f"object kinds {kinds}")
          return "both totem poles are ground objects"

  `return "message"` passes, `fail("reason")` / `expect(cond, "reason")`
  fail. When the run ends the runner sends None once: a check that collects
  over the whole run (`f = yield`, then `if f is None: ...`) decides then;
  t.wait() turns None into a failure that names what it was waiting for.

* Task checks (plain functions) get the Ctx only, for things that are not a
  frame loop (the vanilla sha1, the smoke test, data tables).

xfail="why" marks a check for a known bug: its failure is reported as XFAIL
and does not fail the suite; when it starts passing it is reported as XPASS
(green, with a note to drop the mark).
"""

import inspect
import os
import traceback
from dataclasses import dataclass, field

from PIL import Image

from emu import Emu, Frame
from game import GameInfo, load_symbols

PASS, FAIL, XFAIL, XPASS, ERROR, SKIP = "PASS", "FAIL", "XFAIL", "XPASS", "ERROR", "SKIP"


class CheckFailed(Exception):
    pass


def fail(msg):
    raise CheckFailed(msg)


def expect(cond, msg):
    if not cond:
        raise CheckFailed(msg)


@dataclass
class Check:
    name: str
    rom: str
    desc: str
    fn: object
    xfail: str = None
    stage: str = "run"  # "first": before the test ROMs are built (vanilla)

    @property
    def is_frame_check(self):
        return inspect.isgeneratorfunction(self.fn)


@dataclass
class Result:
    check: Check
    status: str
    msg: str
    frame: int = None
    artifacts: list = field(default_factory=list)


REGISTRY = []


def check(rom, desc, xfail=None, name=None, stage="run"):
    def deco(fn):
        REGISTRY.append(Check(name or fn.__name__, rom, desc, fn, xfail, stage))
        return fn
    return deco


class Ctx:
    """What a check sees: the game decoders, events the driver posts, output."""

    def __init__(self, check, out_dir, run=None):
        self.check = check
        self.out_dir = out_dir
        self.run = run
        self.waiting = None
        self.artifacts = []
        self.data = {}

    @property
    def game(self):
        return self.run.game

    @property
    def syms(self):
        return self.run.syms

    @property
    def events(self):
        """{name: frame} posted by the ROM's driver (drivers.py)."""
        return self.run.events

    def wait(self, cond, what):
        """Frames until cond(f) holds; returns that frame."""
        self.waiting = what
        while True:
            f = yield
            if f is None:
                fail(f"the run ended (frame {self.run.frame}) before {what}")
            if cond(f):
                self.waiting = None
                return f

    def next(self, what="more frames"):
        """The next frame (fails if the run ends first)."""
        f = yield
        if f is None:
            fail(f"the run ended (frame {self.run.frame}) while waiting for {what}")
        return f

    def wait_event(self, name):
        return (yield from self.wait(lambda f: self.events.get(name) == f.n,
                                     f"the driver's '{name}' step"))

    def snap(self, f, label):
        """Save frame f as a PNG next to the report; returns the path."""
        os.makedirs(self.out_dir, exist_ok=True)
        path = os.path.join(self.out_dir, f"{self.check.name}_{label}_f{f.n}.png")
        Image.fromarray(f.fb).save(path)
        self.artifacts.append(path)
        return path


def finish(check, ctx, status, msg, frame=None):
    if check.xfail:
        if status == PASS:
            status, msg = XPASS, msg + f"  [marked xfail ({check.xfail}): it passes now, drop the mark]"
        elif status == FAIL:
            status, msg = XFAIL, f"{msg}  [known: {check.xfail}]"
    return Result(check, status, msg, frame, list(ctx.artifacts) if ctx else [])


def run_task(check, out_dir, env):
    ctx = Ctx(check, out_dir)
    ctx.env = env
    try:
        msg = check.fn(ctx)
        return finish(check, ctx, PASS, msg or "ok")
    except CheckFailed as e:
        return finish(check, ctx, FAIL, str(e))
    except Exception:
        return finish(check, ctx, ERROR, traceback.format_exc(limit=4).strip())


class Run:
    """One emulator run of a test ROM, shared by every check on that ROM."""

    def __init__(self, name, rom, elf, driver, max_frames, checks, out_dir, tool):
        self.name, self.rom, self.elf = name, rom, elf
        self.driver_fn, self.max_frames = driver, max_frames
        self.checks, self.out_dir, self.tool = checks, out_dir, tool
        self.events = {}
        self.data = {}
        self.frame = 0
        self.profile = False  # a driver sets this to measure CPU load (Frame.busy; slower)

    def execute(self):
        results = []
        self.emu = Emu(self.tool, self.rom)
        try:
            self.syms = load_symbols(self.elf)
            self.game = GameInfo(self.emu, self.syms)
            active = []
            for c in self.checks:
                ctx = Ctx(c, self.out_dir, self)
                gen = c.fn(ctx)
                try:
                    next(gen)
                    active.append((c, ctx, gen))
                except StopIteration as e:
                    results.append(finish(c, ctx, PASS, e.value or "ok"))
                except CheckFailed as e:
                    results.append(finish(c, ctx, FAIL, str(e)))
            driver = self.driver_fn(self)
            keys = next(driver)
            last = None
            while active and self.frame < self.max_frames:
                busy = None
                if self.profile:
                    busy = self.emu.prof(1, keys)
                    self.frame = self.emu.frame
                else:
                    self.frame = self.emu.run(1, keys)
                f = Frame(self.emu, self.syms, self.game, self.frame)
                f.busy = busy
                last = f
                try:
                    keys = driver.send(f)
                except StopIteration:
                    break
                active = self._feed(active, f, results)
            for c, ctx, gen in active:  # the run is over: tell the rest
                try:
                    gen.send(None)
                    results.append(finish(c, ctx, FAIL,
                                          f"the run ended (frame {self.frame}) while "
                                          f"waiting for {ctx.waiting or 'more frames'}"))
                except StopIteration as e:
                    results.append(finish(c, ctx, PASS, e.value or "ok"))
                except CheckFailed as e:
                    if last is not None:
                        ctx.snap(last, "end")
                    results.append(finish(c, ctx, FAIL, str(e)))
                except Exception:
                    results.append(finish(c, ctx, ERROR, traceback.format_exc(limit=4).strip()))
        finally:
            self.emu.close()
        return results

    def _feed(self, active, f, results):
        still = []
        for c, ctx, gen in active:
            try:
                gen.send(f)
                still.append((c, ctx, gen))
            except StopIteration as e:
                results.append(finish(c, ctx, PASS, e.value or "ok", f.n))
            except CheckFailed as e:
                ctx.snap(f, "fail")
                results.append(finish(c, ctx, FAIL, f"frame {f.n}: {e}", f.n))
            except Exception:
                results.append(finish(c, ctx, ERROR, traceback.format_exc(limit=4).strip(), f.n))
        return still
