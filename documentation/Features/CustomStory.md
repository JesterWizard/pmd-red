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

**Rebuild required** after changing the flag. The Makefile compiles only one ground-script pack (`vanilla/` or `custom/`) into the ROM; patching the runtime-config byte alone will not swap scripts.

---

## Behavior

When enabled (and rebuilt):

1. Personality portal runs a fixed 8-question quiz (SSLP answers only — one choice each), then gender (“What does it matter?”).
2. Result is forced to **the sassy type**; hero is **Treecko**; partner is **Squirtle** (partner picker skipped).
3. Partner is named **Floyd** automatically (nickname prompt skipped); hero rename still runs in Tiny Woods with **Trielo** prefilled (editable).
4. Tiny Woods wake-up through the Caterpie-rescue decision uses faithful SSLP Section 1 dialogue (including meta / fourth-wall lines).

When disabled (and rebuilt): full vanilla flow.

---

## Section 1

Coverage: black-screen narration → partner wake-up → species / amnesia → name → Butterfree plea → decide to enter Tiny Woods (“Bugger.”).

Later SSLP sections are not implemented yet; edit the matching maps under [`src/data/ground/custom/`](../../src/data/ground/custom/).

---

## Code Locations

| Piece | Path |
|-------|------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Pack select (Makefile) | [`Makefile`](../../Makefile) — `GROUND_STORY_DIR` from `.custom_story` |
| Vanilla ground scripts | [`src/data/ground/vanilla/`](../../src/data/ground/vanilla/) |
| Custom ground scripts | [`src/data/ground/custom/`](../../src/data/ground/custom/) |
| Shared event functions | [`src/data/ground/ground_event_data.h`](../../src/data/ground/ground_event_data.h) |
| `CUSTOM_STORY` SPECIAL var | [`include/constants/event_flag.h`](../../include/constants/event_flag.h), [`src/script_vars_info.c`](../../src/script_vars_info.c), [`src/event_flag.c`](../../src/event_flag.c) (C / leftover probes; packs no longer JUMPIF on it) |
| Forced SSLP quiz + Treecko / Squirtle / Floyd | [`src/personality_test1.c`](../../src/personality_test1.c), [`src/data/personality_test1.h`](../../src/data/personality_test1.h), [`src/data/locale/personality_test1_usa.h`](../../src/data/locale/personality_test1_usa.h) |
| Tiny Woods Section 1 dialogue | [`src/data/ground/custom/ground_data_d01p01_station.h`](../../src/data/ground/custom/ground_data_d01p01_station.h) |

---

## Limitations

- Hero nickname defaults to Trielo but can still be changed on the naming screen.
- Partner animation cues still follow the vanilla timeline; some vanilla reaction anims may play during custom dialogue beats.
- Save layout unchanged (`CUSTOM_STORY` is SPECIAL / not packed into `gScriptVarBuffer`).
- Only one script pack is linked per build; flipping `.custom_story` without rebuilding leaves the old pack in the ROM.
