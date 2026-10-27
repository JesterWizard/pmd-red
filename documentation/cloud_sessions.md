# Cloud sessions: build, boot-test and screenshot the ROM

This page covers the headless workflow for Claude Code cloud sessions (and for
any fresh Ubuntu 24.04 or WSL machine): preparing the toolchain, building
`pmd_red.gba`, checking that it boots, and taking screenshots.

## Quick start

```bash
make -j$(nproc)                  # build pmd_red.gba (first build takes several minutes)
scripts/cloud/smoke_test.sh      # headless boot check: prints SMOKE TEST PASSED
scripts/cloud/screenshot.sh      # PNGs of frames 300..1800 in build/screenshots/
```

In a cloud session the toolchain and `baserom.gba` are set up for you at session
start (see [Cloud bootstrap](#cloud-bootstrap)). Locally, run
`scripts/cloud/setup.sh` once first.

## Cloud bootstrap

`.claude/settings.json` registers `.claude/hooks/session-start.sh` as a
`SessionStart` hook. The hook checks `CLAUDE_CODE_REMOTE`:

- **Cloud session (`CLAUDE_CODE_REMOTE=true`)**: runs `scripts/cloud/setup.sh`
  synchronously at session start and on resume. It has been seen firing on a
  real cloud session resume.
- **Local session**: does nothing.

`scripts/cloud/setup.sh` is idempotent. When everything is already in place it
takes about 1 to 10 seconds. Each step checks whether its work is done and skips
it if so:

| Step | What it does |
| --- | --- |
| apt | Installs missing packages: `gcc-arm-none-eabi binutils-arm-none-eabi libnewlib-arm-none-eabi xdelta3 libpng-dev libmgba-dev python3-pip` |
| pip | Installs missing modules: `skytemple-files tilequant pillow numpy` |
| baserom | Regenerates `baserom.gba` from the tracked `baserom.xdelta` if it is missing or its sha1 is wrong. The patch applies to 32 MiB of zeros and must give sha1 `9f4cfc5b5f4859d17169a485462e977c7aac2b89`. The modern build also needs `baserom.gba`, because `tools/check_palette_owners.py` reads it. |
| tools | `make tools` (host tools under `tools/`) |
| shots | `make -C scripts/cloud`, which builds `build/tools/mgba_shot` |

Optional flags:

- `--build` (or `PMD_SETUP_BUILD=1`) also runs `make -j$(nproc)` at the end.
- `--agbcc` (or `PMD_SETUP_AGBCC=1`) clones `pret/agbcc` into `.cache/agbcc`
  and installs it into `tools/agbcc`. Only `make MODERN=0 compare` needs this.

Logs for the long steps go to `build/setup-logs/` (`tools.log`, `agbcc.log`,
`make.log`).

The hook does **not** build the ROM. A clean build takes several minutes because
34,888 sprite PNGs are converted. An incremental build takes about 10 seconds.
Run `make -j$(nproc)` yourself.

To run setup by hand on a non-cloud Ubuntu 24.04 or WSL machine:

```bash
scripts/cloud/setup.sh            # add --agbcc for MODERN=0 compare, --build for the ROM
```

It uses `sudo` for apt when not running as root.

## Build

- `make -j$(nproc)` builds `pmd_red.gba`, the modern hack build. This is the
  default (`MODERN=1`).
- `make MODERN=0 compare` is the retail-matching gate. It needs agbcc, so run
  `scripts/cloud/setup.sh --agbcc` first. It must print `pmd_red.gba: OK` to pass.
  Whether it currently passes has not been checked yet.

A `MODERN=1` build will not match the retail sha1. That is expected for hack
changes.

## Smoke test

```bash
scripts/cloud/smoke_test.sh [--build] [--rom PATH] [--out DIR]
```

- `--build` runs `make -j$(nproc)` first (log: `build/smoke/make.log`).
- `--rom PATH` tests a different ROM (default `pmd_red.gba`).
- `--out DIR` sets the capture directory (default `build/smoke`).

The test boots the ROM headless for 1800 frames with this button script:
`--press 600:START --press 900:A --press 1200:A --press 1500:A`. It takes a
capture every 300 frames, written to `build/smoke/boot_fNNNNN.png`. Then it checks:

1. There are exactly 6 captures.
2. The final capture has at least 64 colors (the title menu is drawn).
3. There are at least 4 distinct frame hashes (the screen is not frozen).
4. Some capture before the last has at least 16 colors (intro graphics appear).

There are no golden hashes, so ROM-hack changes do not break the test. It prints
`SMOKE TEST PASSED` or `SMOKE TEST FAILED (n checks)`, and then the path of the
final PNG.

## Screenshots

```bash
scripts/cloud/screenshot.sh [OUT_DIR] [-- mgba_shot args]
```

`OUT_DIR` is relative to the repo root and defaults to `build/screenshots`. With
no extra arguments, the default run takes captures at these frames:

| Frame | Screen |
| --- | --- |
| 300 | Health and safety warning |
| 600 | Health and safety warning (still) |
| 900 | Chunsoft logo |
| 1200, 1500 | Intro |
| 1800 | Title menu: "New Game / Adventure Log" |

To change the presses or frames, pass `mgba_shot` arguments after `--`:

```bash
scripts/cloud/screenshot.sh build/shots -- --frames 2400 --shot 2400 \
  --press 600:START --press 900:A --press 1200:A --press 1500:A --press 2000:A
```

→ frame 2400 is the New Game "Welcome!" screen (start of the personality quiz).

Each capture prints a line like this one:
`shot frame=<F> file=<path> colors=<N> hash=<16 hex digits>`.

## mgba_shot

Source: `scripts/cloud/mgba_shot.c`. Built to `build/tools/mgba_shot` by
`make -C scripts/cloud`.

```bash
build/tools/mgba_shot ROM OUT_PREFIX [--frames N] [--shot F]... [--every K] [--press F:KEYS[:DUR]]...
```

- `--frames N`: total frames to emulate (default 600).
- `--shot F`: capture after frame F (1-based). Repeatable.
- `--every K`: also capture after every K-th frame.
- `--press F:KEYS[:DUR]`: hold KEYS for DUR frames (default 6) starting at frame F.
  Repeatable. Overlapping holds are ORed together.
- KEYS is `+`-joined from `A,B,L,R,START,SELECT,UP,DOWN,LEFT,RIGHT`, case-insensitive,
  for example `900:A+B:10`.
- With neither `--shot` nor `--every`, it takes one capture after the last frame.
- Each capture writes `OUT_PREFIX_fNNNNN.png` (240x160, 8-bit RGB).
- Exit status: 0 success, 1 runtime failure, 2 bad arguments.

Every run starts from a clean state: no save file is loaded and the HLE BIOS
is used. Runs are deterministic, so the same arguments give the same hashes.

To reach a later screen, add more presses and a later frame:

```bash
mkdir -p build/shots
build/tools/mgba_shot pmd_red.gba build/shots/menu --frames 2400 --shot 2400 \
  --press 600:START --press 900:A --press 1200:A --press 1500:A --press 2000:A
```

→ frame 2400 is the New Game "Welcome!" screen (start of the personality quiz).

The tool lives in `scripts/cloud/`, not `tools/`, on purpose. The root Makefile
builds every `tools/*/` directory that has a Makefile, and not every contributor
has libmgba installed. Build it with `make -C scripts/cloud`, which needs
`libmgba-dev` and `libpng-dev`.

## Viewing screenshots

- **In an agent session**: open a PNG with the Read tool, which renders images.
- **For a person**: send the file to the user, or copy it somewhere they can open it.

## Troubleshooting

**Setup fails.** The script prints the reason and exits non-zero. When a `make`
or agbcc step fails, the last 40 lines of its log are printed too. The full log
is in `build/setup-logs/` (`tools.log`, `agbcc.log` or `make.log`). Setup is
idempotent, so fix the cause and run `scripts/cloud/setup.sh` again. If the
baserom step reports a sha1 mismatch after regenerating, the problem is the
tracked `baserom.xdelta` or `xdelta3`, not the ROM. Check the checkout and
report it. Never edit `baserom.*` by hand.

**`pmd_red.gba not found`.** Run `make -j$(nproc)`, or pass `--build` to
`smoke_test.sh`. `screenshot.sh` does not build the ROM for you.

**`build/tools/mgba_shot` is missing or fails to build.** Run `make -C scripts/cloud`.
If it still fails, check that `libmgba-dev` and `libpng-dev` are installed. Running
`scripts/cloud/setup.sh` installs them.

**Smoke test fails.** Read the `PASS:` and `FAIL:` lines to see which check failed.
Then open the final PNG named on the `final PNG:` line with the Read tool. A black
or blank frame at the end usually means the button script did not reach the title
menu. Check the `--press` frames against the screens above.

**Local (non-cloud) use.** The SessionStart hook does nothing outside cloud
sessions. Run `scripts/cloud/setup.sh` by hand, then the Quick start commands.
