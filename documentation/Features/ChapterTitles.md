# Chapter Titles

---

## Index

- [Introduction](#introduction)
- [Chapters](#chapters)
- [Behavior](#behavior)
- [Changing Titles or Art](#changing-titles-or-art)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Divides the main story into ten chapters and opens each one PMD2-style: the screen fades in on a background picture, then **Chapter N** and the chapter title fade in over it, hold for a few seconds, and everything fades out into the chapter's first scene.

Toggle: `gRuntimeConfig.chapter_titles` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). It can also be switched from the in-game debug menu (**Chapters**, applies from the next chapter start) and in RescueTemple (**Chapter Titles**, Graphics / UI).

---

## Chapters

The chapters follow the game's own story episodes. Its main-story event scripts are numbered `EVENT_M01E01A` … `EVENT_M01E10A`; some episodes have a second half (`…B`) that continues the same chapter.

| Chapter | Title | Episode | `SCENARIO_MAIN` | Main dungeons | Background |
|---|---|---|---|---|---|
| 1 | A Pokémon Awakens | E01A | 2 | Tiny Woods | Overgrown Forest |
| 2 | The Rescue Team Begins | E02A, E02B | 3–4 | Thunderwave Cave, Mt. Steel | Mt. Cleft |
| 3 | Into Sinister Woods | E03A | 5 | Sinister Woods | Secretive Forest |
| 4 | Thunder on the Mountain | E04A, E04B | 6–7 | Silent Chasm, Mt. Thunder | Thunder Meadow |
| 5 | The Hill of the Ancients | E05A, E05B | 8–9 | Great Canyon | Rainbow Peak |
| 6 | The Ninetales Legend | E06A | 10 | — | Mt. Moonview |
| 7 | On the Run | E07A, E07B | 11–12 | Lapis Cave, Mt. Blaze | Scorched Plains |
| 8 | The Frozen North | E08A, E08B | 13–14 | Frosty Forest, Mt. Freeze | Ice Floe Beach |
| 9 | Heart of the Volcano | E09A | 15 | Magma Cavern | Crater |
| 10 | Toward the Sky | E10A | 16 | Sky Tower | Stratos Lookout |

Chapter 1 appears after the personality test, just before the "Where am I…?" wake-up scene. The ending (`EVENT_M01END`) and the postgame have no card.

---

## Behavior

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | Card at the start of each chapter |
| `FALSE` | Vanilla: no card |

How it works:

1. Each morning `EVENT_DIVIDE_FIRST` / `EVENT_DIVIDE_SECOND` pick the next story event from `SCENARIO_MAIN`. The first morning of a story major `N` finds it at `(N, 0)`, sets `(N, 1)` and jumps into that episode's opening event.
2. `ScenarioCalc` reports every `SCENARIO_MAIN` change to `ChapterTitles_NotifyScenarioMain`. A `(N, 0) → (N, 1)` step where `N` opens a chapter queues that chapter.
3. The card is shown at the start of the next `GroundMap_Select`, before the episode's first map loads, while the previous scene is faded out.
4. Card timing: the art fades in over ~0.7 s to a dimmed brightness (20/32) so the text reads on any picture. The text then alpha-blends in over the art (BG0 over BG3). It holds for 3 s, and A/B can skip it after 1 s. Text and art then fade out together. The blend registers and the scene's BG layer state are restored afterwards.

Loading a save mid-chapter, re-entering maps, or replaying a day does not show the card again. It only fires on the morning the chapter begins.

---

## Changing Titles or Art

Edit `sChapterTitles` in [`src/chapter_titles.c`](../../src/chapter_titles.c). Each entry holds the `SCENARIO_MAIN` major that opens the chapter, a `FRIEND_AREA_*` id whose intro picture is the background, and the two text lines.

The backgrounds reuse the Friend Area intro art (`gFriendAreaIntroAssets`), so the cards add no image data to the ROM. To use a new picture, add it the same way the Friend Area art is converted (8bpp AT4PN + 240-colour palette, see [`convert_friend_area_backgrounds.py`](../../convert_friend_area_backgrounds.py)) and point the entry at it.

---

## Code Locations

| What | Where |
|------|-------|
| Chapter table, trigger, card | [`src/chapter_titles.c`](../../src/chapter_titles.c), [`include/chapter_titles.h`](../../include/chapter_titles.h) |
| Shared full-screen art load / fade / teardown | [`src/fullscreen_art.c`](../../src/fullscreen_art.c) (also used by Friend Area intros) |
| Trigger hook | `ScenarioCalc` in [`src/event_flag.c`](../../src/event_flag.c) |
| Display hook | `GroundMap_Select` in [`src/ground_map.c`](../../src/ground_map.c) |
| Runtime field | `chapter_titles` in [`include/runtime.h`](../../include/runtime.h) |
| ROM default | [`configs/runtime.c`](../../configs/runtime.c) |
| Debug menu entry | [`src/data/custom_debug_menu.h`](../../src/data/custom_debug_menu.h) |
| RescueTemple metadata | [`RescueEditor/src/RescueEditor.Core/RuntimeConfigSchema.cs`](../../RescueEditor/src/RescueEditor.Core/RuntimeConfigSchema.cs) |

---

## Limitations

- **Standard font size.** "Chapter N" and the title use the normal dialogue font; there is no large title font.
- **Story arcs only.** Chapters are fixed to the main-story episodes; side stories (`SCENARIO_SUB*`) have no cards.
- **Existing saves keep the ROM default.** The runtime-override record is now version 2. Version 1 records (saved before this toggle existed) keep their other overrides and take `chapter_titles` from the ROM default.
