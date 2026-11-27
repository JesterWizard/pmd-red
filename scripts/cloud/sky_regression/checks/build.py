"""Build-level checks: the vanilla ROM, the boot smoke test and the event editor's tests."""

import hashlib
import os
import subprocess
import sys

from harness import check, expect, fail

VANILLA_SHA1 = "27b588f57f1d435b11c806d6120c03fcf18e7b65"


def make(root, log, *args):
    with open(log, "w") as fh:
        rc = subprocess.run(["make", f"-j{os.cpu_count() or 4}", *args], cwd=root,
                            stdout=fh, stderr=subprocess.STDOUT).returncode
    if rc:
        tail = open(log).read().splitlines()[-15:]
        fail(f"make {' '.join(args)} failed (log {log}):\n      " + "\n      ".join(tail))


@check("vanilla", "STORY=vanilla stays byte-identical (sha1 27b588f5...), then the sky build is restored",
       stage="first")
def vanilla_sha1(t):
    root, logs = t.env["root"], t.env["logs"]
    for p in ("pmd_red.elf", "pmd_red.gba"):
        if os.path.exists(os.path.join(root, p)):
            os.remove(os.path.join(root, p))
    make(root, os.path.join(logs, "make_vanilla.log"), "STORY=vanilla")
    sha = hashlib.sha1(open(os.path.join(root, "pmd_red.gba"), "rb").read()).hexdigest()
    make(root, os.path.join(logs, "make_sky_restore.log"))
    expect(sha == VANILLA_SHA1, f"STORY=vanilla sha1 {sha}, expected {VANILLA_SHA1}")
    return f"STORY=vanilla sha1 {sha}"


@check("sky", "The sky ROM boots to the title menu (scripts/cloud/smoke_test.sh)")
def smoke_boot(t):
    root = t.env["root"]
    out = os.path.join(t.env["out"], "smoke")
    p = subprocess.run(["scripts/cloud/smoke_test.sh", "--rom", t.env["roms"]["sky"], "--out", out],
                       cwd=root, capture_output=True, text=True)
    fails = [ln for ln in p.stdout.splitlines() if ln.startswith("FAIL")]
    expect(p.returncode == 0, "; ".join(fails) or p.stdout[-500:] + p.stderr[-500:])
    return "SMOKE TEST PASSED"


@check("tools", "The event editor's formats round-trip and compile as shipped (tools/event_editor/test_event_editor.py)")
def event_editor_tests(t):
    p = subprocess.run([sys.executable, "-m", "unittest", "tools/event_editor/test_event_editor.py"],
                       cwd=t.env["root"], capture_output=True, text=True)
    last = (p.stderr.strip().splitlines() or ["?"])
    expect(p.returncode == 0, "\n      ".join(p.stderr.strip().splitlines()[-25:]))
    ran = next((ln for ln in last if ln.startswith("Ran ")), "")
    return f"{ran}: OK"
