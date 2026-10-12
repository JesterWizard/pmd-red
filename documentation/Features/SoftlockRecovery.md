# Softlock Recovery

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

If the game gets stuck in a loop that never reaches its per-frame wait (a hard hang: frozen screen, no input), a watchdog in the VBlank interrupt notices after **300 frames (~5 seconds)** and soft resets to the title screen. Save data is untouched, so you continue from your last save instead of power-cycling.

Toggle: `gRuntimeConfig.softlock_recovery` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). It can also be switched at runtime from the in-game debug menu (**Softlock**, takes effect immediately) and in RescueTemple (**Softlock Recovery**, QoL / Cheats).

---

## Behavior

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | Soft reset (`SoftReset(RESET_ALL)`) once the main loop has missed its frame update for 300 VBlanks |
| `FALSE` | Vanilla: a hang stays hung |

How it works:

1. `VBlankIntr` already increments a VBlank counter (`gUnknown_203B0A0`) every frame.
2. The main loop's frame update (`xxx_update_bg_sound_input`) copies that counter into `gUnknown_203B0A4` every time it runs.
3. On each VBlank the watchdog checks `gUnknown_203B0A0 - gUnknown_203B0A4 >= 300`. That is one load, one subtract and one compare per frame, so the CPU cost is negligible.
4. On a trip it disables interrupts, stops DMA 0–3 (sound FIFO), and calls the BIOS soft reset.

Flash writes (`WriteFlashData`) and chip erase (`ClearFlashData`) pause the watchdog with `SetSoftlockWatchdogPaused`, so a slow save can never be interrupted mid-write. Unpausing restarts the count.

---

## Code Locations

| What | Where |
|------|-------|
| Runtime field | `softlock_recovery` in [`include/runtime.h`](../../include/runtime.h) |
| ROM default | [`configs/runtime.c`](../../configs/runtime.c) |
| Watchdog check + reset | `VBlankIntr`, `RecoverFromSoftlock`, `SetSoftlockWatchdogPaused` in [`src/reg_control.c`](../../src/reg_control.c) |
| Flash write pause | `WriteFlashData`, `ClearFlashData` in [`src/flash.c`](../../src/flash.c) |
| Debug menu entry | [`src/data/custom_debug_menu.h`](../../src/data/custom_debug_menu.h) |
| RescueTemple metadata | [`RescueEditor/src/RescueEditor.Core/RuntimeConfigSchema.cs`](../../RescueEditor/src/RescueEditor.Core/RuntimeConfigSchema.cs) |

---

## Limitations

- **Only hard hangs are caught.** A "soft" softlock where frames keep running but a script waits forever (e.g. a cutscene waiting on a cue that never fires) still reaches the frame wait each frame, so the watchdog does not trip.
- **Hangs with interrupts disabled** (`REG_IME = 0`) cannot be caught; the VBlank handler never runs.
- **Recovery is a reset, not a resume.** Progress since the last save is lost.
- **Existing saves:** the runtime-override record in older saves has this byte zeroed, so loading one restores the feature as **off**. Turn it back on from the debug menu (it is then saved with the other overrides). New games use the ROM default.
