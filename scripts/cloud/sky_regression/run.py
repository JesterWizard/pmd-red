#!/usr/bin/env python3
"""Sky demake regression suite: build the test ROMs, play them headless, check.

Usage: scripts/cloud/sky_regression.sh [options]   (see --help)

Each test ROM is played once (build/tools/mgba_rpc) and every check on that
ROM watches the same run. Checks live in checks/*.py; see harness.py for how
to write one.
"""

import argparse
import multiprocessing
import os
import shutil
import subprocess
import sys
import time
from concurrent.futures import ProcessPoolExecutor

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)

import drivers  # noqa: E402
import checks  # noqa: E402,F401  (registers the checks)
from harness import (ERROR, FAIL, PASS, REGISTRY, SKIP, XFAIL, XPASS, Result, Run,  # noqa: E402
                     run_task)

ROOT = os.path.abspath(os.path.join(HERE, "..", "..", ".."))
OUT = os.path.join(ROOT, "build", "sky_tests")
TOOL = os.path.join(ROOT, "build", "tools", "mgba_rpc")

# Test ROMs: make variables, the input driver and how many frames to play.
# "sky" (the plain build) is built last so pmd_red.gba is the normal ROM again.
ROMS = {
    "divide": dict(vars=["DEBUG_BOOT_EVENT=EVENT_DIVIDE"], driver=drivers.divide, frames=21000,
                   what="chapter 1 from the storm to Beach Cave B1F"),
    "pit": dict(vars=["DEBUG_BOOT_EVENT=EVENT_DIVIDE", "DEBUG_BOOT_FLOOR=5"], driver=drivers.pit,
                frames=21000, what="chapter 1, then Beach Cave Pit (B5F) and the boss fight"),
    "after": dict(vars=["DEBUG_BOOT_EVENT=EVENT_M01E01A_L003"], driver=drivers.story, frames=9300,
                  what="the scenes after the Pit (m01a0701, m01a0702)"),
    "sky": dict(vars=[], driver=drivers.jukebox, frames=16000,
                what="the normal sky ROM: boot, the Sky Jukebox"),
}

COLOURS = {PASS: "32", XPASS: "32", FAIL: "31", ERROR: "31", XFAIL: "33", SKIP: "90"}


def paint(status, use):
    return f"\033[{COLOURS[status]}m{status:<5}\033[0m" if use else f"{status:<5}"


def build_rom(name, logs, jobs):
    log = os.path.join(logs, f"make_{name}.log")
    t0 = time.time()
    with open(log, "w") as fh:
        rc = subprocess.run(["make", f"-j{jobs}", *ROMS[name]["vars"]], cwd=ROOT,
                            stdout=fh, stderr=subprocess.STDOUT).returncode
    if rc:
        print(f"  make {name}: FAILED (log {log})")
        print("    " + "\n    ".join(open(log).read().splitlines()[-15:]))
        return False
    d = os.path.join(OUT, "roms")
    shutil.copy(os.path.join(ROOT, "pmd_red.gba"), os.path.join(d, f"{name}.gba"))
    shutil.copy(os.path.join(ROOT, "pmd_red.elf"), os.path.join(d, f"{name}.elf"))
    print(f"  {name:<7} {' '.join(ROMS[name]['vars']) or '(plain build)'}  {time.time() - t0:.0f}s")
    return True


def play(name, check_names):
    """Worker: one emulator run of ROM `name` for the named checks."""
    cs = [c for c in REGISTRY if c.name in check_names]
    spec = ROMS[name]
    run = Run(name, os.path.join(OUT, "roms", f"{name}.gba"), os.path.join(OUT, "roms", f"{name}.elf"),
              spec["driver"], spec["frames"], cs, os.path.join(OUT, "shots"), TOOL)
    t0 = time.time()
    res = run.execute()
    return name, [(r.check.name, r.status, r.msg, r.artifacts) for r in res], run.frame, time.time() - t0


def main():
    ap = argparse.ArgumentParser(description="Sky demake regression suite (headless).")
    ap.add_argument("-k", action="append", default=[], metavar="TEXT",
                    help="only checks whose name contains TEXT (repeatable)")
    ap.add_argument("--rom", action="append", default=[], choices=list(ROMS) + ["vanilla"],
                    help="only checks on this test ROM (repeatable)")
    ap.add_argument("--no-build", action="store_true",
                    help="reuse build/sky_tests/roms (skips the vanilla check)")
    ap.add_argument("--no-vanilla", action="store_true",
                    help="skip the STORY=vanilla sha1 check (saves about a minute)")
    ap.add_argument("--list", action="store_true", help="list the checks and exit")
    ap.add_argument("-j", "--jobs", type=int, default=min(4, os.cpu_count() or 1),
                    help="emulator runs in parallel (default: up to 4)")
    args = ap.parse_args()
    colour = sys.stdout.isatty()

    sel = [c for c in REGISTRY
           if (not args.k or any(k in c.name for k in args.k))
           and (not args.rom or c.rom in args.rom)]
    if args.list:
        for c in REGISTRY:
            mark = f"  [xfail: {c.xfail}]" if c.xfail else ""
            print(f"{c.name:<28} {c.rom:<8} {c.desc}{mark}")
        return 0
    if not sel:
        print("no checks selected")
        return 2

    t_start = time.time()
    os.makedirs(os.path.join(OUT, "roms"), exist_ok=True)
    logs = os.path.join(OUT, "logs")
    os.makedirs(logs, exist_ok=True)
    shots = os.path.join(OUT, "shots")
    shutil.rmtree(shots, ignore_errors=True)
    env = dict(root=ROOT, out=OUT, logs=logs,
               roms={n: os.path.join(OUT, "roms", f"{n}.gba") for n in ROMS})
    results = {}

    print("== tools: make -C scripts/cloud")
    if subprocess.run(["make", "-s", "-C", "scripts/cloud"], cwd=ROOT).returncode:
        print("could not build build/tools/mgba_rpc (needs libmgba-dev)")
        return 1

    first = [c for c in sel if c.stage == "first"]
    for c in first:
        if args.no_build or args.no_vanilla:
            results[c.name] = Result(c, SKIP, "skipped (--no-build / --no-vanilla)")
            continue
        print(f"== {c.name}: {c.desc}")
        t0 = time.time()
        results[c.name] = run_task(c, shots, env)
        print(f"  done in {time.time() - t0:.0f}s")

    needed = [n for n in ROMS if any(c.rom == n for c in sel if c.stage != "first")]
    broken = set()
    if not args.no_build and needed:
        print("== building test ROMs (logs in build/sky_tests/logs)")
        jobs = os.cpu_count() or 4
        for n in [n for n in ROMS if n in needed and n != "sky"] + ["sky"]:  # plain build last
            if not build_rom(n, logs, jobs):
                broken.add(n)
    for n in needed:
        if not os.path.exists(env["roms"][n]) and n not in broken:
            print(f"  missing {env['roms'][n]} (run without --no-build)")
            broken.add(n)

    for c in sel:
        if c.stage != "first" and c.rom in broken:
            results[c.name] = Result(c, ERROR, f"test ROM '{c.rom}' could not be built")

    tasks = [c for c in sel if c.stage != "first" and not c.is_frame_check and c.name not in results]
    runs = {}
    for c in sel:
        if c.is_frame_check and c.name not in results:
            runs.setdefault(c.rom, []).append(c.name)

    print(f"== playing {len(runs)} test ROM(s): " + ", ".join(f"{n} ({len(v)} checks)" for n, v in runs.items()))
    ctx = multiprocessing.get_context("fork")
    with ProcessPoolExecutor(max_workers=max(1, args.jobs), mp_context=ctx) as ex:
        futs = [ex.submit(play, n, names) for n, names in runs.items()]
        for c in tasks:
            results[c.name] = run_task(c, shots, env)
        for fut in futs:
            name, res, frames, secs = fut.result()
            print(f"  {name:<7} {frames} frames in {secs:.0f}s  ({ROMS[name]['what']})")
            for cname, status, msg, arts in res:
                c = next(x for x in REGISTRY if x.name == cname)
                results[cname] = Result(c, status, msg, None, arts)

    print("== results")
    counts = {}
    for c in sel:
        r = results.get(c.name) or Result(c, ERROR, "no result")
        counts[r.status] = counts.get(r.status, 0) + 1
        print(f"{paint(r.status, colour)} {c.name:<28} [{c.rom}] {c.desc}")
        print(f"      {r.msg}")
        for a in r.artifacts:
            print(f"      picture: {os.path.relpath(a, ROOT)}")
    took = time.time() - t_start
    order = [PASS, XPASS, XFAIL, FAIL, ERROR, SKIP]
    summary = ", ".join(f"{counts[s]} {s.lower()}" for s in order if s in counts)
    bad = counts.get(FAIL, 0) + counts.get(ERROR, 0)
    print(f"== {'FAILED' if bad else 'PASSED'}: {summary} in {took / 60:.1f} min")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
