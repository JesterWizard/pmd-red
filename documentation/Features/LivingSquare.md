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

**Living Square** runs a single coordinator that staggers three visitors onto Pokémon Square: Kecleon Shop, then Felicity Bank (+1s), then Gulpin Link Shop (+1s again), so all three can be walking at once. Each wave picks three exclusive entrances from the four Square gates (N/S/W/E).

Toggle: `gRuntimeConfig.living_square` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Scripts read it via SPECIAL `LIVING_SQUARE`.

Primary map: `MAP_POKEMON_SQUARE` / [`ground_data_t01p01_station.h`](../../src/data/ground/custom/ground_data_t01p01_station.h) (gs1). Keep `vanilla/` and `custom/` packs in sync.

---

## Plan

| Phase | Goal | Status |
|------|------|--------|
| **0 — Stub** | Toggle + SPECIAL `LIVING_SQUARE` | done |
| **1 — Kecleon shop visitors** | One at a time; random species; entrance → shop → exit | done |
| **1b — Felicity Bank** | Bank visit after Kecleon (+1s); exclusive gate | done |
| **1c — Gulpin Link Shop** | Gulpin visit after Bank (+1s); exclusive gate | done |
| **1d — Softlock fix** | Concurrent trio; latched `MAP_LOCAL` barrier (no lost `ALERT_CUE`) | done |
| **2 — More destinations** | Pond / other shops / banter | TODO |
| **3 — Day variety / recruits** | Broader cast, recruit cameos | TODO |

### Behavior (group **g53**)

1. Free-roam stations call `SELECT_ENTITIES(53, 0)` when `LIVING_SQUARE` is on (one off-screen coordinator life, kind 179).
2. **Coordinator** (concurrent trio, one wave at a time):
   - Wait randomly (90–240 frames)
   - Cancel leftover visitor sectors, clear `MAP_LOCAL`, then pick 3 exclusive entrances from `{N,S,W,E}` packed as `e0 + 4*e1 + 16*e2`
   - Spawn Kecleon, `WAIT(60)`, spawn Bank, `WAIT(60)`, spawn Gulpin
   - Poll until `MAP_LOCAL == 7` (bits 0/1/2 set by each visitor) or ~60s timeout
   - Loop (next wave does not start while the previous trio is still out)
3. Routes (cardinal `WALK_GRID` segments; each decodes its own entrance digit):
   - Gate → destination → reverse to **starting gate** → `WALK_RELATIVE` off-map → set `MAP_LOCAL` bit → `END_DELETE`
   - Visitors clear collision flags on setup (and use type preset without lives-collision) so they do not block the player or stall mid-walk.

| Kind | Role |
|------|------|
| 146–178 | Kecleon visitors (sectors 1–33) |
| 179 | Coordinator (off-map) |
| 180–212 | Bank visitors (sectors 34–66) |
| 213 | Reserved (unused; formerly bank dispatcher) |
| 214–246 | Gulpin visitors (sectors 67–99) |
| 247 | Reserved (unused; formerly gulpin dispatcher) |

Visitor cast (×3 destinations): Marill, Azurill, Nincada, Tauros, Torkoal, Aron, Pidgey, Sunflora, Bagon, Dragonair, Furret, Gloom, Scizor, Breloom, Taillow, Seviper, Spheal, Snorunt, Horsea, Mightyena, Shuppet, Grimer, Doduo, Volbeat, Spoink, Magmar, Electabuzz, Chansey, Tangela, Electrike, Hitmonchan, Mawile, Hoppip.

### Free-roam stations that select g53

`g1`, `g7`, `g8`, `g11`, `g13`–`g16`, `g18`, `g22`, `g24`, `g25`, `g27`, `g29`, `g30`, `g34`–`g36`, `g38`.

---

## Behavior

| Mode | Player-facing |
|------|----------------|
| `FALSE` | No visitors |
| `TRUE` (default) | Trio of Kecleon + Felicity Bank + Gulpin visitors (staggered +1s, exclusive gates) |

---

## Code Locations

| Piece | Location | Description |
|--------|----------|-------------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) | `living_square` |
| Script SPECIAL | [`include/constants/event_flag.h`](../../include/constants/event_flag.h), [`src/event_flag.c`](../../src/event_flag.c) | `LIVING_SQUARE` |
| Lives kinds 146–247 | [`data/data_8115F5C_3_.s`](../../data/data_8115F5C_3_.s) | Visitors + coordinator (+ reserved) |
| Coordinator + routes | `g53` in [`ground_data_t01p01_station.h`](../../src/data/ground/custom/ground_data_t01p01_station.h) (+ vanilla) | Concurrent trio + shop/bank/gulpin routes |
| Waypoints | `s_gs1_links` 146–159 | Gates (N/S/W/E), plazas, Kecleon, Felicity, Gulpin junction/gap/counter |
| Off-map exit | all four gates use `WALK_RELATIVE` past the pad | Walk off map edge, then `END_DELETE` |

---

## TODO

- [x] Runtime toggle + SPECIAL
- [x] Lives kinds for visitor species
- [x] Kecleon visit from all four gates
- [x] Felicity Bank on exclusive entrance (+1s)
- [x] Gulpin Link Shop on exclusive entrance (+1s after bank)
- [x] Softlock: concurrent trio with latched `MAP_LOCAL` (no lost `ALERT_CUE`)
- [ ] More destinations (pond, Pelipper, etc.)
- [ ] Banter / recruit cameos

---

## Limitations

- Instant `WARP_WAYPOINT` at the gate (no walk-on from off-screen).
- `WALK_GRID` walks straight and **ends on collision** for map/object hits; visitors clear lives-collision so player/NPC overlap does not stall routes.
- Three visitors are active together during a wave; the next wave waits until all three have finished (or a ~60s timeout).
- Entrance trio is packed in temporary `EVENT_LOCAL` (`e0 + 4*e1 + 16*e2`); one gate of four is unused each cycle.
- Completion flags use `MAP_LOCAL` bits 0–2 (cleared on map change).
- Free-roam stations only; cutscene groups are not hooked.
- Both ground packs must stay in sync when editing routes.
- Busy free-roam stations can fill the 24-slot lives array; Living Square uses **1 coordinator + 3 visitors**.
