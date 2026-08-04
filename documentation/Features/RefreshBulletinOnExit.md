# Refresh Bulletin On Exit

---

## Index

- [Introduction](#introduction)
- [Flow](#flow)
- [Code Locations](#code-locations)

---

## Introduction

Vanilla Red Rescue Team regenerates Pelipper bulletin jobs on day advance / dungeon return (`sub_8098C58` → `GeneratePelipperJobs`). This option also **rerolls the board whenever you close the bulletin board UI**, so you can get a fresh set without running a dungeon.

Toggle: `gRuntimeConfig.refresh_bulletin_on_exit` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for vanilla refresh timing only.

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | Closing the board regenerates all unused bulletin slots |
| `FALSE` | Board only refreshes on dungeon/day paths as vanilla |

Accepted jobs in the Job List are untouched; only `pelipperBoardJobs` are regenerated.

---

## Flow

1. Open Pelipper Post Office → Bulletin Board.
2. Browse / accept jobs as usual (accept removes that slot from the board).
3. Exit the board UI (`sub_802E918`).
4. If the toggle is on, `GeneratePelipperJobs` clears and fills the board again.
5. Reopen the board to see the new listings.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Exit hook | [`src/pelipper_board.c`](../../src/pelipper_board.c) (`sub_802E918`) |
| Generation | [`src/code_80958E8.c`](../../src/code_80958E8.c) (`GeneratePelipperJobs`) |
