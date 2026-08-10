# Expanded Job Slots

---

## Index

- [Introduction](#introduction)
- [Flow](#flow)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Vanilla Red Rescue Team lets you hold **8** accepted jobs (Job List / bulletin Accept). This option raises the accept cap to **16**.

Toggle: `gRuntimeConfig.expanded_job_slots` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for the vanilla 8-job accept limit.

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | Accept up to 16 jobs from the bulletin / mailbox |
| `FALSE` | Accept limit stays at 8 (slots 8–15 stay empty) |

The Pelipper **bulletin board** still lists up to **8** jobs at a time. Storage and save always allocate 16 Job List slots.

**Save incompatibility:** growing the mail chunk (`MAIL_INFO_SAVE_SIZE` `0x221` → `0x280`) breaks older saves. Start a New Game or load a save written with this layout.

---

## Flow

1. Open Bulletin Board or Mailbox and Accept a job.
2. `GetNumAcceptedJobs()` is compared to `GetMaxAcceptedJobs()` (16 or 8 from the toggle).
3. The Job List UI paginates through filled slots (up to 16 when expanded).
4. Board generation / listing still uses `MAX_PELIPPER_BOARD_JOBS` (8).

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Constants / save size | [`include/constants/mailbox.h`](../../include/constants/mailbox.h) (`MAX_ACCEPTED_JOBS`, `MAIL_INFO_SAVE_SIZE`) |
| Cap helper + storage | [`src/code_80958E8.c`](../../src/code_80958E8.c) (`GetMaxAcceptedJobs`) |
| Accept / UI count | [`src/pelipper_board.c`](../../src/pelipper_board.c), [`src/mailbox.c`](../../src/mailbox.c), [`src/wonder_mail_802D098.c`](../../src/wonder_mail_802D098.c) |
| Save advances | [`src/save.c`](../../src/save.c) |

---

## Limitations

- Bulletin listings remain 8 slots; only the accepted Job List grows.
- Turning the toggle off while holding more than 8 jobs keeps those jobs but blocks new accepts until the count is under 8.
