# Thought Bubbles

Port of the [ygodm8 thought-bubble system](https://github.com/JesterWizard/ygodm8/blob/master/documentation/thought-bubbles.md) to PMD ground maps.

---

## Index

- [Introduction](#introduction)
- [Access](#access)
- [Art Guidelines](#art-guidelines)
- [Plan](#plan)
- [Code Locations](#code-locations)
- [TODO](#todo)
- [Limitations](#limitations)

---

## Introduction

On the overworld (ground mode), **L** toggles a 128×64 thought-bubble sprite above the player. Art is chosen from the most recent `SCENARIO_MAIN` progress key; unmatched keys use the `DEFAULT` bubble.

Template art is the ygodm8 `event_01` bubble under [`graphics/custom/thought_bubbles/default/`](../../graphics/custom/thought_bubbles/default/).

The workflow stays short:

1. add a folder with `thought.png`
2. register it in one table
3. assign one or more `SCENARIO_MAIN` keys in the same table
4. run `make`

---

## Access

| Requirement | Detail |
|-------------|--------|
| Runtime toggle | `gRuntimeConfig.thought_bubbles` in [`configs/runtime.c`](../../configs/runtime.c) (default **on**) |
| Debug menu | **Thoughts** |
| Show | Press **L** on the ground map while the bubble is hidden (textbox closed) |
| Hide | Press **L** again while the bubble is visible |

While visible, free-roam input is blocked (modal overlay), matching ygodm8.

---

## Art Guidelines

New `thought.png` canvases are **128×64** indexed PNGs. When painting text into the bubble:

| Spec | Value |
|------|--------|
| Text origin | **(12, 9)** — top-left of the first glyph |
| Text color | **`#393939`** |
| Font | **Glasstown NBP** |
| Font size | **16px** |

Keep the bubble chrome and palette consistent with [`default/thought.png`](../../graphics/custom/thought_bubbles/default/thought.png).

---

## Plan

### Asset workflow

Each bubble lives under `graphics/custom/thought_bubbles/<name>/thought.png` (128×64 indexed PNG).

Build (`graphics.mk`):

- PNG → temporary linear 4bpp (`gbagfx`)
- `tools/repack_thought_bubble_1d.py` → left then right 64×64 halves for `DISPCNT_OBJ_1D_MAP`
- PNG → `thought.gbapal`

### Registration

Registration:

- [`src/thought_bubble.c`](../../src/thought_bubble.c) — `INCBIN` lines for each bubble (needed for `scaninc`)
- [`src/data/thought_bubble_table.inc`](../../src/data/thought_bubble_table.inc) — symbolic ids + scenario keys

```c
#define THOUGHT_BUBBLE_ASSET_LIST(_) \
  _(DEFAULT)

#define THOUGHT_BUBBLE_FLAG_LIST(_) \
  _(0x1100, SOME_EVENT)  /* SCENARIO_MAIN main=0x11, sub=0 */
```

Keys are packed as `(main << 8) | (sub & 0xFF)` via `THOUGHT_BUBBLE_SCENARIO_KEY`.

### Runtime

- `ScenarioCalc(SCENARIO_MAIN, …)` → `ThoughtBubble_NotifyScenarioMain`
- `ThoroughlyResetScriptVars` → `ThoughtBubble_Reset`
- L in `sub_809CDC8` shows/hides
- `ThoughtBubble_Draw` in the ground main loop (before `CopySpritesToOam`)

---

## Code Locations

| Feature | Location |
|---------|----------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Registration table | [`src/data/thought_bubble_table.inc`](../../src/data/thought_bubble_table.inc) (+ `INCBIN` in [`src/thought_bubble.c`](../../src/thought_bubble.c)) |
| Runtime | [`src/thought_bubble.c`](../../src/thought_bubble.c), [`include/thought_bubble.h`](../../include/thought_bubble.h) |
| L input | [`src/ground_lives_helper.c`](../../src/ground_lives_helper.c) (`sub_809CDC8`) |
| Draw hook | [`src/ground_main.c`](../../src/ground_main.c) |
| Scenario tracking | [`src/event_flag.c`](../../src/event_flag.c) (`ScenarioCalc`) |
| Build rules | [`graphics.mk`](../../graphics.mk), [`tools/repack_thought_bubble_1d.py`](../../tools/repack_thought_bubble_1d.py) |
| Template art | [`graphics/custom/thought_bubbles/default/thought.png`](../../graphics/custom/thought_bubbles/default/thought.png) |

| Resource | Value |
|----------|--------|
| OBJ VRAM tile base | `0x300` (128 tiles → `0x37F`) |
| OBJ palette | bank **15** |
| Sprite size | two 64×64 (`shape=0`, `size=3`) |

---

## TODO

- Add story-specific bubbles once desired `SCENARIO_MAIN` stages are chosen.
- Optionally key off bit-array event vars (`EVENT_*`) in addition to scenario progress.
- Cache VRAM uploads when the bubble id is unchanged and no AX traffic stomps tile `0x300`.

---

## Limitations

- Selection uses the **most recent** `SCENARIO_MAIN` update, not the “most important” active story beat.
- Unrelated `ScenarioCalc(SCENARIO_MAIN, …)` calls after a story beat change which bubble is shown.
- Bubbles must be 128×64 indexed PNGs suitable for 4bpp OBJ.
- Growing `RuntimeConfig` bumped `RUNTIME_CONFIG_SAVE_SIZE` to `0x44` (still within `unk448` headroom; old saves soft-fail restore and reload ROM defaults for the config chunk).
