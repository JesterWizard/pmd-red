---
name: rom-screenshot
description: Use when asked to run, boot, screenshot or visually check the pmd_red ROM or a change in-game. Builds the ROM, boots it headless with scripted key presses, and shows the PNG.
---

# ROM screenshot: boot the ROM and look at it

Full reference: `documentation/cloud_sessions.md`.

## Steps

1. **Setup.** In a cloud session the SessionStart hook already ran
   `scripts/cloud/setup.sh`. Locally, run it once. It is idempotent (1 to 10 s
   when done). If `build/tools/mgba_shot` is missing, run `make -C scripts/cloud`.
2. **Build.** Run `make -j$(nproc)` from the repo root. The first build takes
   several minutes. Incremental builds take about 10 s. The hook never builds.
3. **Boot check (optional, for "does it still boot").**
   `scripts/cloud/smoke_test.sh`. Expect `SMOKE TEST PASSED`. On failure, read
   the `PASS:` / `FAIL:` lines and the `final PNG:` path.
4. **Screenshot.** Choose one:
   - Default run: `scripts/cloud/screenshot.sh`. It writes frames 300, 600,
     900, 1200, 1500 and 1800 to `build/screenshots/`. Frame 1800 is the title menu.
   - Custom run, to reach a later screen:
     ```bash
     mkdir -p build/shots
     build/tools/mgba_shot pmd_red.gba build/shots/<name> --frames 2400 --shot 2400 \
       --press 600:START --press 900:A --press 1200:A --press 1500:A --press 2000:A
     ```
     → frame 2400 is the New Game "Welcome!" screen (start of the personality quiz).
5. **Look.** Open the PNG with the Read tool. It renders images. Describe what
   you see and say whether it matches what was asked.
6. **Show the user.** Send the PNG file to the user (for example with the
   SendUserFile tool), or copy it to a location they can open.

## Key-press tips

- Frames are 1-based. `--shot F` captures after frame F.
- `--press F:KEYS[:DUR]` holds KEYS for DUR frames (default 6) starting at frame F.
- KEYS is `+`-joined from `A,B,L,R,START,SELECT,UP,DOWN,LEFT,RIGHT`,
  case-insensitive. Example: `900:A+B:10`.
- Overlapping presses are ORed together.
- Each run starts from a clean state (no save file). Same arguments give the same
  hashes, so re-runs are comparable.
- To reach a later screen, add presses and raise `--frames` and `--shot` together.
- Each capture line is `shot frame=<F> file=<path> colors=<N> hash=<16 hex>`.
  Use `colors` as a rough check: a count near 2 is a blank or text-only screen
  (the health-and-safety warning also shows 2).
- `mgba_shot --help` lists all options.
