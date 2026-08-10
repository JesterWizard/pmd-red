# Refresh Bulletin On Exit

---

## Index

- [Introduction](#introduction)
- [Flow](#flow)
- [Code Locations](#code-locations)

---

## Introduction

Vanilla Red Rescue Team regenerates Pelipper bulletin jobs on day advance / dungeon return (`sub_8098C58` → `GeneratePelipperJobs`). This option also **rerolls the board whenever you open the bulletin board UI**, so you can get a fresh set without running a dungeon.

Toggle: `gRuntimeConfig.refresh_bulletin_on_exit` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for vanilla refresh timing only.

The config field keeps the `_on_exit` name for save compatibility; regeneration runs on **open** (`sub_802E864`) rather than destroy (`sub_802E918`). Generating during teardown blocked the frame before overworld sprites rebuilt and left the menu cursor stuck in OAM (top-left).

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | Opening the board regenerates all unused bulletin slots |
| `FALSE` | Board only refreshes on dungeon/day paths as vanilla |

Accepted jobs in the Job List are untouched; only `pelipperBoardJobs` are regenerated.

---

## Flow

1. Open Pelipper Post Office → Bulletin Board (`sub_802E864`).
2. If the toggle is on, `GeneratePelipperJobs` clears and fills the board before the menu is built.
3. Browse / accept jobs as usual (accept removes that slot from the board).
4. Exit is instant (no regen in `sub_802E918`).
5. Reopen the board to see another fresh set.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Open hook | [`src/pelipper_board.c`](../../src/pelipper_board.c) (`sub_802E864`) |
| Generation | [`src/code_80958E8.c`](../../src/code_80958E8.c) (`GeneratePelipperJobs`) |
