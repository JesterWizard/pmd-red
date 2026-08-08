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

**Living Square** runs three coordinated visitor loops on Pokémon Square: Kecleon Shop, then Felicity Bank (+1s), then Gulpin Link Shop (+1s again). Each picks a unique entrance from the four Square gates (N/S/W/E).

Toggle: `gRuntimeConfig.living_square` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Scripts read it via SPECIAL `LIVING_SQUARE`.

Primary map: `MAP_POKEMON_SQUARE` / [`ground_data_t01p01_station.h`](../../src/data/ground/custom/ground_data_t01p01_station.h) (gs1). Keep `vanilla/` and `custom/` packs in sync.

---

## Plan

| Phase | Goal | Status |
|------|------|--------|
| **0 — Stub** | Toggle + SPECIAL `LIVING_SQUARE` | done |
| **1 — Kecleon shop visitors** | One at a time; random species; entrance → shop → exit | done |
| **1b — Felicity Bank pair** | Second visitor, +1s, exclusive gate → bank | done |
| **1c — Gulpin Link Shop trio** | Third visitor, +1s after bank; N/S/W/E exclusive gates | done |
| **2 — More destinations** | Pond / other shops / banter | TODO |
| **3 — Day variety / recruits** | Broader cast, recruit cameos | TODO |

### Behavior (group **g53**)

1. Free-roam stations call `SELECT_ENTITIES(53, 0)` when `LIVING_SQUARE` is on (three off-screen dispatcher lives).
2. **Kecleon dispatcher**:
   - Wait randomly (90–240 frames)
   - Pick 3 exclusive entrances from `{N,S,W,E}` and pack into `EVENT_LOCAL` as `e0 + 4*e1 + 16*e2`
   - Spawn Kecleon visitor; `ALERT_CUE(66)` to wake the bank dispatcher
   - `WAIT(900)` (~15s) for the trio to finish, then loop
3. **Bank dispatcher**:
   - `AWAIT_CUE(66)` → `WAIT(60)` (1 second behind)
   - Spawn Felicity Bank visitor; `ALERT_CUE(67)` to wake Gulpin
   - `WAIT(900)` then loop
4. **Gulpin dispatcher**:
   - `AWAIT_CUE(67)` → `WAIT(60)` (1 second behind bank)
   - Spawn Gulpin Link Shop visitor
   - `WAIT(900)` then loop
5. Routes (cardinal `WALK_GRID` segments; each decodes its own entrance digit):
   - Kecleon / Bank / Gulpin: gate → destination → reverse → gate → `WALK_RELATIVE` off-map → `END_DELETE`

| Kind | Role |
|------|------|
| 146–178 | Kecleon visitors (sectors 1–33) |
| 179 | Kecleon dispatcher |
| 180–212 | Bank visitors (sectors 34–66) |
| 213 | Bank dispatcher |
| 214–246 | Gulpin visitors (sectors 67–99) |
| 247 | Gulpin dispatcher |

Visitor cast (×3 destinations): Marill, Azurill, Nincada, Tauros, Torkoal, Aron, Pidgey, Sunflora, Bagon, Dragonair, Furret, Gloom, Scizor, Breloom, Taillow, Seviper, Spheal, Snorunt, Horsea, Mightyena, Shuppet, Grimer, Doduo, Volbeat, Spoink, Magmar, Electabuzz, Chansey, Tangela, Electrike, Hitmonchan, Mawile, Hoppip.

### Free-roam stations that select g53

`g1`, `g7`, `g8`, `g11`, `g13`–`g16`, `g18`, `g22`, `g24`, `g25`, `g27`, `g29`, `g30`, `g34`–`g36`, `g38`.

---

## Behavior

| Mode | Player-facing |
|------|----------------|
| `FALSE` | No visitors |
| `TRUE` (default) | Trio of Kecleon + Felicity Bank + Gulpin visitors on exclusive gates |

---

## Code Locations

| Piece | Location | Description |
|--------|----------|-------------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) | `living_square` |
| Script SPECIAL | [`include/constants/event_flag.h`](../../include/constants/event_flag.h), [`src/event_flag.c`](../../src/event_flag.c) | `LIVING_SQUARE` |
| Lives kinds 146–247 | [`data/data_8115F5C_3_.s`](../../data/data_8115F5C_3_.s) | Visitors + three dispatcher kinds |
| Dispatchers + routes | `g53` in [`ground_data_t01p01_station.h`](../../src/data/ground/custom/ground_data_t01p01_station.h) (+ vanilla) | Triple dispatchers + shop/bank/gulpin routes |
| Waypoints | `s_gs1_links` 146–159 | Gates (N/S/W/E), plazas, Kecleon, Felicity, Gulpin junction/gap/counter |
| Off-map exit | all four gates use `WALK_RELATIVE` past the pad | Walk off map edge, then `END_DELETE` |

---

## TODO

- [x] Runtime toggle + SPECIAL
- [x] Lives kinds for visitor species
- [x] Kecleon visit from all four gates
- [x] Felicity Bank on exclusive entrance (+1s)
- [x] Gulpin Link Shop on exclusive entrance (+1s after bank)
- [ ] More destinations (pond, Pelipper, etc.)
- [ ] Banter / recruit cameos

---

## Limitations

- Instant `WARP_WAYPOINT` at the gate (no walk-on from off-screen).
- `WALK_GRID` walks straight and **ends on collision**; spawns/waypoints must stay on walkable half-tiles.
- Entrance trio is packed in temporary `EVENT_LOCAL` (`e0 + 4*e1 + 16*e2`); one gate of four is unused each cycle.
- Free-roam stations only; cutscene groups are not hooked.
- Both ground packs must stay in sync when editing routes.
