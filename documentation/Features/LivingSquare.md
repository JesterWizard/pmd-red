# Living Square (Pokémon Actually Doing Things)

---

## Index

- [Introduction](#introduction)
- [Plan](#plan)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [TODO](#todo)
- [Limitations](#limitations)

---

## Introduction

Vanilla Pokémon Square NPCs stand on fixed tiles forever. Shops feel staffed, but the plaza itself reads as a museum of statues.

**Living Square** spawns a single random visitor who walks in from a map entrance, browses the Kecleon Shop, then leaves the way they came — during main-story free-roam and postgame.

Toggle: `gRuntimeConfig.living_square` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Scripts read it via SPECIAL `LIVING_SQUARE`.

Primary map: `MAP_POKEMON_SQUARE` / [`ground_data_t01p01_station.h`](../../src/data/ground/custom/ground_data_t01p01_station.h) (gs1). Keep `vanilla/` and `custom/` packs in sync.

---

## Plan

| Phase | Goal | Status |
|------|------|--------|
| **0 — Stub** | Toggle + SPECIAL `LIVING_SQUARE` | done |
| **1 — Kecleon shop visitors** | One at a time; random species; entrance → shop → exit | done |
| **2 — More destinations** | Pond / other shops / banter | TODO |
| **3 — Day variety / recruits** | Broader cast, recruit cameos | TODO |

### Phase 1 behavior (group **g53**)

1. Free-roam stations call `SELECT_ENTITIES(53, 0)` when `LIVING_SQUARE` is on.
2. Sector 0 selects an off-screen **dispatcher life** (not a station — `SELECT_ENTITIES` never starts stations). Its dlg1 loop:
   - Wait randomly (90–240 frames)
   - Pick species at random: Marill / Azurill / Nincada / Tauros
   - `SELECT_ENTITIES(53, 1…4)` for that species
   - `AWAIT_CUE(64)` until the visit finishes
3. The visitor (dlg1 route) follows cardinal road segments (`WALK_GRID` aborts on collision):
   - Warp to g0 enter pads: **north** (64,9) or **south** (66,83)
   - Plaza on same column (149 / 151) → west turn (150 @ y=40) → Kecleon (148)
   - Idle **3 seconds**, reverse out, `ALERT_CUE(64)` + `END_DELETE`

Only one visitor exists at a time (dispatcher waits for the cue before the next spawn).

| Kind | Species | Sector |
|------|---------|--------|
| 146 | Marill | 1 |
| 147 | Azurill | 2 |
| 148 | Nincada | 3 |
| 149 | Tauros | 4 |
| 150 | dispatcher (off-map) | 0 |

Kinds appended on `gGroundLivesTypeData_811E63C`. Dispatcher kind must stay unique — `GroundLives_Add` reuses an existing same-kind slot.

### Free-roam stations that select g53

`g1`, `g7`, `g8`, `g11`, `g13`–`g16`, `g18`, `g22`, `g24`, `g25`, `g27`, `g29`, `g30`, `g34`–`g36`, `g38`.

---

## Behavior

| Mode | Player-facing |
|------|----------------|
| `FALSE` | No visitors |
| `TRUE` (default) | One random visitor loops entrance → Kecleon → exit |

Talking to the visitor mid-trip shows a short shop-flavored line; the route may restart afterward.

---

## Code Locations

| Feature | Location | Description |
|--------|----------|-------------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) | `living_square` |
| Script SPECIAL | [`include/constants/event_flag.h`](../../include/constants/event_flag.h), [`src/event_flag.c`](../../src/event_flag.c) | `LIVING_SQUARE` |
| Lives kinds 146–150 | [`data/data_8115F5C_3_.s`](../../data/data_8115F5C_3_.s) | Visitors + unique dispatcher kind |
| Dispatcher + route | `g53` in [`ground_data_t01p01_station.h`](../../src/data/ground/custom/ground_data_t01p01_station.h) (+ vanilla) | Off-screen dispatcher life + shared `s_gs1_g53_visitor_route` |
| Waypoints | `s_gs1_links` 146–151 | North / south / Kecleon / plaza×2 / west turn |

---

## TODO

- [x] Runtime toggle + SPECIAL
- [x] Lives kinds for visitor species
- [x] One-at-a-time randomized Kecleon visit from north/south
- [ ] More destinations (pond, Pelipper, etc.)
- [ ] Banter / recruit cameos
- [ ] Tune walk paths if visitors snag on collision

---

## Limitations

- Instant `WARP_WAYPOINT` at the gate (no walk-on from off-screen).
- `WALK_GRID` walks straight and **ends on collision**; spawns/waypoints must stay on walkable half-tiles.
- Free-roam stations only; cutscene groups are not hooked.
- Both ground packs must stay in sync when editing routes.
