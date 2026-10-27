# CLAUDE.md

## What this is

- Decompilation of Pokémon Mystery Dungeon: Red Rescue Team (GBA), plus a ROM hack.
- Default build (`MODERN=1`) is the **modern hack build** → `pmd_red.gba`.
- `MODERN=0` is the **retail-matching** build (agbcc, pinned layout). Its gate is
  `make MODERN=0 compare`.
- `RescueEditor/` is a separate C# tool with its own tests.

## Commands

```bash
make -j$(nproc)                 # build pmd_red.gba (modern hack build)
make MODERN=0 compare           # retail-matching gate (needs agbcc, see below)
scripts/cloud/setup.sh          # toolchain, baserom.gba, mgba_shot (--agbcc, --build)
scripts/cloud/smoke_test.sh     # headless boot check (prints SMOKE TEST PASSED)
scripts/cloud/screenshot.sh     # screenshots into build/screenshots/
```

- In cloud sessions `setup.sh` runs automatically from a SessionStart hook.
  The hook does not build the ROM.
- `make MODERN=0 compare` needs `scripts/cloud/setup.sh --agbcc` first.
- Screenshot details, key presses and troubleshooting:
  `documentation/cloud_sessions.md`.

## Rules

- Never edit `baserom.*` (`baserom.gba` is generated from `baserom.xdelta`).
- Never edit the expected sha1 in `red.sha1` to make a build pass.
- Retail-matching changes must not change bytes. Keep `NONMATCHING` if C does not match.

## Agent workflow

- `.claude/skills/orchestrate`: Opus orchestrates, Haiku workers do scoped tasks.
- `.claude/agents/haiku-worker.md`: the worker brief and CHECK-IN format.
- `.claude/skills/rom-screenshot`: boot the ROM and look at it in-game.
- Save-layout changes follow `.cursor/skills/save-sram-layout/SKILL.md`.
