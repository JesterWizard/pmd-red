# Custom Story (Weird Autumn SSLP)

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Section 1](#section-1)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Optional custom early-game story adapted from [Weird Autumn's Pokémon Mystery Dungeon: Blue Rescue Team (SSLP)](https://nuzlockeforums.com/forum/threads/weird-autumns-pokemon-mystery-dungeon-blue-rescue-team-sslp.19036/#post-787420).

Toggle: `gRuntimeConfig.custom_story` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for vanilla personality quiz, starter/partner choice, and Tiny Woods dialogue.

Scripts read the toggle via the SPECIAL script var `CUSTOM_STORY` (not stored in save).

---

## Behavior

When enabled:

1. Personality portal still opens, but the quiz / starter / partner pickers are skipped.
2. Hero is forced to **Treecko**; partner is forced to **Squirtle**.
3. Partner nickname prompt still runs; hero rename still happens in the Tiny Woods cutscene.
4. Tiny Woods wake-up through the Caterpie-rescue decision uses faithful SSLP Section 1 dialogue (including meta / fourth-wall lines).

When disabled: full vanilla flow.

---

## Section 1

Coverage: black-screen narration → partner wake-up → species / amnesia → name → Butterfree plea → decide to enter Tiny Woods (“Bugger.”).

Later SSLP sections are not implemented yet; they should extend the same `custom_story` flag.

---

## Code Locations

| Piece | Path |
|-------|------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| `CUSTOM_STORY` SPECIAL var | [`include/constants/event_flag.h`](../../include/constants/event_flag.h), [`src/script_vars_info.c`](../../src/script_vars_info.c), [`src/event_flag.c`](../../src/event_flag.c) |
| Forced Treecko / Squirtle | [`src/personality_test1.c`](../../src/personality_test1.c) |
| Tiny Woods Section 1 dialogue | [`src/data/ground/ground_data_d01p01_station.h`](../../src/data/ground/ground_data_d01p01_station.h) |

---

## Limitations

- Does not rewrite personality-portal BG lines or quiz question text.
- Does not force nicknames (Trielo / Floyd); player still chooses names.
- Partner animation cues still follow the vanilla timeline; some vanilla reaction anims may play during custom dialogue beats.
- Save layout unchanged (`CUSTOM_STORY` is SPECIAL / not packed into `gScriptVarBuffer`).
