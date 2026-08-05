# Rank Rewards: Bag Pages & Storage by Rank

---

## Index

- [Introduction](#introduction)
- [Plan](#plan)
- [Code Locations](#code-locations)
- [TODO](#todo)
- [Limitations & Bugs](#limitations--bugs)

---

## Introduction

Vanilla Rescue Team grows the Toolbox only via story beats (fixed 20 slots mid/late game) and gives Kangaskhan Storage a flat **999 per item id** with no total cap.

This feature ports the Explorers-style **rank unlock loop**: higher rescue ranks unlock a bigger bag and more Kangaskhan Storage space, and the game **tells you** when those unlocks happen.

Toggle: `gRuntimeConfig.rank_rewards` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Renamed from `rank_bag_pages`.

When `FALSE`: vanilla bag (20 slots / 10 per page) and no total storage cap (per-id caps from compact storage still apply).

---

## Plan

### Toolbox (bag)

Same math as the old rank-bag-pages mode:

| Rank | Pages (8/page) | Capacity |
|------|---------------:|---------:|
| Normal | 2 | 16 |
| Bronze | 3 | 24 |
| Silver | 4 | 32 |
| Gold | 5 | 40 |
| Platinum+ | 6 (cap) | 48 |

### Kangaskhan Storage (total items)

Capacity counts **non-thrown quantities** plus **one per thrown item id** that has any stock (Gravelerock / sticks / etc. are one stack even at 99). Per-id caps remain separate (`GetMaxStorageQuantity`, usually 99 with Compact Kangaskhan Storage). The physical array is `u8 teamStorage[STORAGE_SIZE]` with **`STORAGE_SIZE` = 480** item-id slots.

| Rank | Storage capacity |
|------|-----------------:|
| Normal | 64 |
| Bronze | 96 |
| Silver | 200 |
| Gold | 320 |
| Platinum / Diamond / Lucario | 480 |

Deposit paths refuse adds that would exceed either the per-id max or the total capacity (`CanAddQuantityToStorage`, `GetStorageDepositCapacityCost`, `MoveToStorage`, Kangaskhan / held-item / script / link hooks). Adding more rocks to an existing Gravelerock stack does not consume another capacity slot.

### Kangaskhan UI (used / max)

When `rank_rewards` is on:

- **Take** list header shows `Storage 12/64` (`sub_801CCD8`).
- **Store** shows a side window with used/max (`DrawStorageCapacityWindow`), same idea as the bag `Items n/m` panel.

### Rank-up dialogue

After the existing “went up in rank” line (or after an achievement unlock that grants rank points):

1. If bag capacity increased → `Toolbox storage increased from N -> M`.
2. If storage capacity increased → `Kangaskhan storage increased from N -> M`.

Wired for:

- Job rewards (`mission_reward.c`)
- Story force-rank script op (`ground_script.c` `0x2E`)
- Achievement rank-point rewards (`achievements.c` popup queue: `ACH_POPUP_RANK_BAG` / `ACH_POPUP_RANK_STORAGE`)

---

## Code Locations

| Feature | Location | Description |
|--------|----------|-------------|
| Toggle | `configs/runtime.c` / `include/runtime.h` | `rank_rewards` |
| Caps | `include/constants/item.h` | `STORAGE_CAPACITY_*` (Gold = 320), bag page defines |
| Bag helpers | `GetBagCapacity` / `GetBagCapacityForRank` in `src/items.c` | Rank → toolbox size |
| Storage helpers | `GetStorageCapacity` / `GetStorageUsedCount` / `GetStorageDepositCapacityCost` / `CanAddQuantityToStorage` in `src/items.c` | Rank → total storage; thrown = 1 stack |
| Deposit clamp | `MoveToStorage` in `src/items.c` | Respects remaining capacity |
| Take header used/max | `sub_801CCD8` in `src/code_801C8C4.c` | `Storage %d/%d` |
| Store side used/max | `DrawStorageCapacityWindow` in `src/kecleon_bros4.c` | Side panel on deposit |
| Store-menu full | `sub_801CF50` in `src/code_801C8C4.c` | Used ≥ capacity |
| Multi-select deposit | `sub_801ADA0` in `src/kecleon_bros4.c` | Per-id + total + selection |
| Job rank-up UI | `MR_STATE_NEW_TEAM_RANK` (+ bag/storage states) in `src/mission_reward.c` | Sequenced upgrade lines |
| Story rank-up | `ground_script.c` case `0x2E` | Combined EXTRA_MSG pages |
| Achievement rank-up | `QueueRankRewardPopups` / `ProcessAchievementUnlockQueue` in `src/achievements.c` | Ground textbox after unlock |

---

## TODO

---

## Limitations & Bugs

- Rank **total** cap tops out at 480; thrown item ids count as **1** each toward that total (not stack size). That is separate from `STORAGE_SIZE` (**480 item-id slots** in `teamStorage[]`).
- Live catalog is still `NUMBER_OF_ITEM_IDS` (240). `Item.id` is `u8`, so ids ≥ 256 need a type widen before use.
- Disabling `rank_rewards` removes the total cap but does not restore vanilla `u16`/999 stacks (see Compact Kangaskhan Storage).
- Please file issues if any deposit path still ignores `CanAddQuantityToStorage`.
