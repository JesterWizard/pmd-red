# Unrestricted Bulletin Jobs

---

## Index

- [Introduction](#introduction)
- [Flow](#flow)
- [Code Locations](#code-locations)

---

## Introduction

Vanilla Red Rescue Team refuses to place a new bulletin (or mailbox) job on a dungeon floor that already appears in your accepted Job List. Escort jobs also reserve the whole dungeon. With several accepted jobs, generation often runs out of free floors and the board fills with fewer listings — or none.

This option **skips the accepted-job floor collision check** so new requests keep generating even when you already hold jobs.

Toggle: `gRuntimeConfig.unrestricted_bulletin_jobs` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for vanilla unique-floor behavior.

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | New jobs may reuse dungeon/floors already on the Job List |
| `FALSE` | Vanilla: accepted jobs block those dungeon/floors from new generation |

Board vs board and mailbox vs mailbox uniqueness is unchanged. You can still end up with two accepted jobs for the same floor if you take overlapping listings.

`RUNTIME_CONFIG_SAVE_SIZE` stays `0x44` (one extra `u8` fits existing padding).

---

## Flow

1. `GeneratePelipperJobs` / mailbox fill calls `GenerateMailJobInfo` → `GenerateMailJobDungeonInfo`.
2. For each candidate dungeon/floor, vanilla rejects floors already used by mailbox, board, or **accepted** slots.
3. If the toggle is on, the accepted-slot loop is skipped; only mailbox/board collisions (and story restrictions) still apply.
4. Generation continues until the usual 4–8 board range (or mailbox slot) is filled.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Floor pick | [`src/code_80958E8.c`](../../src/code_80958E8.c) (`GenerateMailJobDungeonInfo`) |
| Board fill | [`src/code_80958E8.c`](../../src/code_80958E8.c) (`GeneratePelipperJobs`) |
| Debug menu | [`src/data/custom_debug_menu.h`](../../src/data/custom_debug_menu.h) (`Free board`) |
