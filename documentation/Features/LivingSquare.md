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

**Living Square** runs two coordinated visitor loops on Pokémon Square: one to the Kecleon Shop, and one (1 second later, opposite entrance) to Felicity Bank.

Toggle: `gRuntimeConfig.living_square` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Scripts read it via SPECIAL `LIVING_SQUARE`.

Primary map: `MAP_POKEMON_SQUARE` / [`ground_data_t01p01_station.h`](../../src/data/ground/custom/ground_data_t01p01_station.h) (gs1). Keep `vanilla/` and `custom/` packs in sync.

---

## Plan

| Phase | Goal | Status |
|------|------|--------|
| **0 — Stub** | Toggle + SPECIAL `LIVING_SQUARE` | done |
| **1 — Kecleon shop visitors** | One at a time; random species; entrance → shop → exit | done |
| **1b — Felicity Bank pair** | Second visitor, +1s, opposite gate → bank | done |
| **2 — More destinations** | Pond / other shops / banter | TODO |
| **3 — Day variety / recruits** | Broader cast, recruit cameos | TODO |

### Behavior (group **g53**)

1. Free-roam stations call `SELECT_ENTITIES(53, 0)` when `LIVING_SQUARE` is on (two off-screen dispatcher lives).
2. **Kecleon dispatcher**:
   - Wait randomly (90–240 frames)
   - Pick entrance (`EVENT_LOCAL` 0=north / 1=south) + random species
   - Spawn Kecleon visitor; `ALERT_CUE(66)` to wake the bank dispatcher
   - `AWAIT_CUE(65)` until the pair finishes
3. **Bank dispatcher** (independent loop):
   - `AWAIT_CUE(66)` → `WAIT(60)` (1 second behind)
   - Spawn Felicity Bank visitor (same cast, unique kinds)
   - `AWAIT_CUE(65)`
4. Routes (cardinal `WALK_GRID` segments):
   - Kecleon: gate → plaza → west → shop → reverse; linger; `ALERT_CUE(64)`
   - Bank: **opposite** gate → plaza → east → Felicity Bank → reverse; `AWAIT_CUE(64)` then `ALERT_CUE(65)`

| Kind | Role |
|------|------|
| 146–178 | Kecleon visitors (sectors 1–33) |
| 179 | Kecleon dispatcher |
| 180–212 | Bank visitors (sectors 34–66) |
| 213 | Bank dispatcher |

Visitor cast (×2 destinations): Marill, Azurill, Nincada, Tauros, Torkoal, Aron, Pidgey, Sunflora, Bagon, Dragonair, Furret, Gloom, Scizor, Breloom, Taillow, Seviper, Spheal, Snorunt, Horsea, Mightyena, Shuppet, Grimer, Doduo, Volbeat, Spoink, Magmar, Electabuzz, Chansey, Tangela, Electrike, Hitmonchan, Mawile, Hoppip.

### Free-roam stations that select g53

`g1`, `g7`, `g8`, `g11`, `g13`–`g16`, `g18`, `g22`, `g24`, `g25`, `g27`, `g29`, `g30`, `g34`–`g36`, `g38`.

---

## Behavior

| Mode | Player-facing |
|------|----------------|
| `FALSE` | No visitors |
| `TRUE` (default) | Paired Kecleon + Felicity Bank visitors on opposite gates |

---

## Code Locations

| Feature | Location | Description |
|--------|----------|-------------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) | `living_square` |
| Script SPECIAL | [`include/constants/event_flag.h`](../../include/constants/event_flag.h), [`src/event_flag.c`](../../src/event_flag.c) | `LIVING_SQUARE` |
| Lives kinds 146–213 | [`data/data_8115F5C_3_.s`](../../data/data_8115F5C_3_.s) | Visitors + two dispatcher kinds |
| Dispatchers + routes | `g53` in [`ground_data_t01p01_station.h`](../../src/data/ground/custom/ground_data_t01p01_station.h) (+ vanilla) | Dual dispatchers + shop/bank routes |
| Waypoints | `s_gs1_links` 146–154 | Gates, plazas, Kecleon, Felicity Bank |

---

## TODO

- [x] Runtime toggle + SPECIAL
- [x] Lives kinds for visitor species
- [x] Kecleon visit from north/south
- [x] Felicity Bank pair on opposite entrance (+1s)
- [ ] More destinations (pond, Pelipper, etc.)
- [ ] Banter / recruit cameos

---

## Limitations

- Instant `WARP_WAYPOINT` at the gate (no walk-on from off-screen).
- `WALK_GRID` walks straight and **ends on collision**; spawns/waypoints must stay on walkable half-tiles.
- Entrance choice uses temporary `EVENT_LOCAL` (0/1) for the pair.
- Free-roam stations only; cutscene groups are not hooked.
- Both ground packs must stay in sync when editing routes.
