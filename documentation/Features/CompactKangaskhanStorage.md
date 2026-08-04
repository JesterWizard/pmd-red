# Compact Kangaskhan Storage: Smaller Stacks, Smaller Counts

---

## Index

- [Introduction](#introduction)
- [Plan](#plan)
- [Code Locations](#code-locations)
- [TODO](#todo)
- [Limitations & Bugs](#limitations--bugs)

---

## Introduction

Vanilla Rescue Team stores Kangaskhan Storage as `u16 teamStorage[itemId]` with a **999** per-id cap. That is 480 bytes of EWRAM for 240 item ids, and 10 bits per id in the team-inventory save blob.

This feature switches counts to **`u8`** and caps stacks at **99** when enabled. The storage array is sized for **480 item ids** (`STORAGE_SIZE`), matching the compact-u8 RAM budget of vanilla’s `u16[240]`.

Total how many items you may store at once (sum of quantities) is controlled separately by [`RankRewards.md`](RankRewards.md) (`rank_rewards`: 64 → 480 by rescue rank).

Toggle: `gRuntimeConfig.compact_kangaskhan_storage` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`).

| Mode | Max per item id | Count type |
|------|----------------:|------------|
| `TRUE` (default) | 99 | `u8` |
| `FALSE` | 255 (`u8` max) | `u8` |

`FALSE` is **not** vanilla 999 — the layout is always `u8` in this fork.

---

## Plan

### Memory & save model

| Piece | Vanilla | This feature |
|-------|--------:|-------------:|
| `teamStorage[]` element | `u16` | `u8` |
| Array length | 240 (`NUMBER_OF_ITEM_IDS`) | **480** (`STORAGE_SIZE`) |
| EWRAM for storage | 480 B | 480 B |
| Save bits per id | 10 | 8 (`STORAGE_QUANTITY_BITS`) |
| Save for storage counts | 300 B | 480 B |
| Team-inventory save chunk | `0x230` | `TEAM_INVENTORY_SAVE_SIZE` (`0x290`) |

Live item catalog is still `NUMBER_OF_ITEM_IDS` (240). Extra storage slots are headroom for new item ids.

### Runtime behavior

- `GetMaxStorageQuantity()` returns `MAX_STORAGE_QUANTITY_COMPACT` (99) or `MAX_STORAGE_QUANTITY_U8` (255).
- Deposit / take / held-item-to-storage / script gifts / link rewards all clamp through that max **and** (when `rank_rewards` is on) the ranked total capacity via `CanAddQuantityToStorage` / `MoveToStorage`.
- `MoveToStorage` adds in a wider temp, then writes the clamped `u8` (avoids wrap before clamp).
- Save/load uses 8-bit fields; load clamps any value above the active per-id max.

### Player-facing impact

- Kangaskhan will refuse deposits once an id is at the per-id cap, or once total used items hit the ranked capacity (see Rank Rewards).
- Withdraw UI that special-cases stacks above 99 still works when the per-id cap is 255; with the default 99 cap that path is unused for full stacks.

---

## Code Locations

| Feature | Location | Description |
|--------|----------|-------------|
| Toggle | `configs/runtime.c` / `include/runtime.h` | `compact_kangaskhan_storage` |
| Caps / bit width | `include/constants/item.h` | `MAX_STORAGE_QUANTITY_*`, `STORAGE_QUANTITY_BITS` |
| Storage array | `TeamInventory` in `include/structs/str_items.h` | `u8 teamStorage[STORAGE_SIZE]` |
| Max helper | `GetMaxStorageQuantity` in `src/items.c` | 99 vs 255 from config |
| Deposit clamp | `MoveToStorage` in `src/items.c` | Add + clamp to max |
| Save / load | `SaveTeamInventory` / `RestoreTeamInventory` in `src/items.c` | 8-bit pack; clamp on read |
| Full-storage checks | `sub_801CF50` in `src/code_801C8C4.c` | Total capacity full, or every id at per-id max |
| Sell / held → storage | `src/kecleon_bros4.c`, `src/friend_area_action_menu.c`, `src/party_list_menu.c` | Pre-deposit capacity checks |
| Script / event gifts | `src/ground_script.c`, `src/code_801B60C.c`, `src/other_menus1.c` | Direct storage adds |

---

## TODO

- Grow `NUMBER_OF_ITEM_IDS` / item parameter tables when adding new items (storage slots 240…479 are already reserved).
- Widen `Item.id` / `BulkItem.id` beyond `u8` before using ids ≥ 256.
- Optional: migrate old 10-bit / 240-slot saves if cross-version load matters.

---

## Limitations & Bugs

- **Layout is always `u8` counts.** Disabling the toggle raises the per-id cap to 255 only; it does not restore vanilla `u16` / 999.
- **`Item.id` is still `u8`.** Storage has 480 slots, but bag/held/script item ids only address 0…255 until the id field is widened.
- **Save format change.** Storage is 8-bit × 480 (`TEAM_INVENTORY_SAVE_SIZE` `0x290`); old `0x230` / 10-bit saves will not load this chunk correctly.
- Existing stacks above 99 are clamped down on load when the toggle is on.
- Please file issues for any deposit path that still hard-codes 999/998.
