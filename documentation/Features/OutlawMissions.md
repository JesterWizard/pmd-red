# Outlaw Hunt Missions

---

## Index

- [Introduction](#introduction)
- [Flow](#flow)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Vanilla Red Rescue Team bulletin jobs are rescue / escort / find / deliver. This feature adds **Explorers-style outlaw hunt** jobs mixed into the same Pelipper bulletin board: defeat a single hostile outlaw on the destination floor.

Toggle: `gRuntimeConfig.outlaw_missions` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` to restore vanilla job-type weights only.

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | ~1/8 of generated bulletin jobs can be outlaw hunts |
| `FALSE` | Outlaw rolls fall back to rescue-client jobs |

---

## Flow

1. `GeneratePelipperJobs` / `GenerateMailJobInfo` may assign `WONDER_MAIL_MISSION_TYPE_OUTLAW_HUNT` (5).
2. Board UI shows **Wanted:** titles and defeat objectives (same Accept / Take Job path as other jobs).
3. On the destination floor, `sub_80842F0` sets `unk44` (species) and `outlawHunt`.
4. `SpawnWildMonsOnFloor` spawns that species as `BEHAVIOR_OUTLAW` in the **leader's room** when possible (falls back to any spawn tile).
5. After the destination-floor banner, the outlaw speaks **one of five** random taunt lines (with portrait).
6. Defeating (or successfully recruiting) the outlaw marks the job complete and offers to leave the dungeon.
7. On successful exit, `MAIL_TYPE_UNK8` → `UNK9`. At Pelipper Post, `sub_8096AF8` / `TYM_Create` run the thank-you scene, then `MR_Create` pays the usual mission reward.

Difficulty uses the same +2 bump as escort missions (`sub_803C1B4`).

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Mission type | [`include/constants/wonder_mail.h`](../../include/constants/wonder_mail.h) |
| Behavior / floor flag | [`include/structs/dungeon_entity.h`](../../include/structs/dungeon_entity.h), [`include/structs/str_dungeon.h`](../../include/structs/str_dungeon.h) (`outlawHunt`) |
| Generation | [`src/code_80958E8.c`](../../src/code_80958E8.c) |
| Difficulty | [`src/code_803C1B4.c`](../../src/code_803C1B4.c) |
| Board text | [`src/code_803B344.c`](../../src/code_803B344.c), [`src/pokemon_mail.c`](../../src/pokemon_mail.c), [`src/data/pokemon_mail_pre.h`](../../src/data/pokemon_mail_pre.h) |
| Objectives HUD | [`src/post_office_guide2.c`](../../src/post_office_guide2.c) |
| Dungeon setup / complete | [`src/dungeon_jobs.c`](../../src/dungeon_jobs.c) |
| Same-room spawn | [`src/dungeon_mon_spawn.c`](../../src/dungeon_mon_spawn.c) |
| Encounter dialogue | [`src/dungeon_message.c`](../../src/dungeon_message.c), [`src/dungeon_strings.c`](../../src/dungeon_strings.c) (`gOutlawEncounterDialogue`) |
| Spawn / AI / faint | [`src/dungeon_ai.c`](../../src/dungeon_ai.c), [`src/dungeon_misc.c`](../../src/dungeon_misc.c), [`src/dungeon_damage.c`](../../src/dungeon_damage.c), [`src/dungeon_cutscene.c`](../../src/dungeon_cutscene.c) |
| Town thank-you / reward | [`src/code_80958E8.c`](../../src/code_80958E8.c) (`sub_8096AF8`), [`src/thank_you_messages.c`](../../src/thank_you_messages.c), [`src/mission_reward.c`](../../src/mission_reward.c) |

---

## Limitations

- Hunt only — no Arrest/Escort outlaw, Outlaw Monster House, or fleeing AI.
- Outlaw uses floor-normal level (no Explorers-style heavy stat inflate).
- External Wonder Mail passwords cannot encode type 5 (`ValidateWonderMail` still rejects `missionType > DELIVER`).
- Mixed into the existing bulletin slots; there is no separate Wanted Poster board.
- Same-room spawn prefers the leader's room; if that room has no free monster spawn tiles, any floor tile is used.
