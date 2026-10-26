# Session history — pmd-red size / shiftability work

Running log of ROM-hack changes in this workspace so they can be understood and
reversed later. Newest entries at the bottom.

---

## 2026-08-04 — Build defaults

### What changed
- Default `make` builds **`pmd_red.gba`** with the modern toolchain +
  `ld_script_modern.ld` (no 32 MiB pad unless `PAD_ROM=1`).
- `MODERN=0` still uses agbcc + retail-pinned `ld_script.ld` (objects under
  `build/pmd_red_matching/`).
- Removed the separate `pmd_red_modern.gba` output name; both modes emit
  `pmd_red.gba`.

### Reverse
- Set `MODERN ?= 0` in `Makefile` (or `make MODERN=0`).
- Restore `BUILD_NAME` / `pmd_red_modern` naming if you need the old dual-ROM
  workflow (see git history before this session).

---

## 2026-08-04 — Ground map BPC/BMA LZ77 compression

### What changed
- Editable assets remain in `data/map_bg/`.
- Shipped compressed copies: `data/map_bg_lz/*.bpc.lz` and `*.bma.lz`.
- Container format: **`GMLZ` + standard BIOS LZ77** (`0x10…`), produced by
  `compress_ground_assets.py` (default `--only bpc-bma`).
- **BPL/BPA stay uncompressed** — they stay memory-mapped for palette/tile
  animations; full-file heap decompress hung boot (`STARTMODE_14` / intro).
- Runtime: `src/ground_assets.c`, `include/ground_assets.h`.
  - Large BPC decompresses into existing `GroundBg.unk544` scratch (no heap spike).
  - BMA uses the small heap-backed open path.
  - Bare `0x10` detection is intentionally avoided (many BPA headers start with
    `numFrames == 16`).
- Map load order in `src/ground_bg.c`: BPC first → copy/free → then BPL/BMA.
- `src/ground_map_files_*.c` INCBINs `.lz` for BPC/BMA only.

### Why boot hung earlier
1. Heap OOM when BPL+BPC+BMA(+BPA) were all decompressed onto the main heap.
2. False LZ decode on raw BPA files whose first byte is `0x10`.

### Size (approx.)
- BPC+BMA: `4,016,884 → 2,585,864` bytes (saved ~1.43 MiB in those assets).
- Full ROM after this + unpadded modern link: ~29.85 MiB vs 32.00 MiB baserom.

### Reverse
1. Point all `ground_map_files_*.c` INCBINs back at `data/map_bg/…` (no `_lz`).
2. Optionally stop calling `OpenGroundFile*` and restore
   `OpenFileAndGetFileDataPtr` / `CloseFile` in `src/ground_bg.c`.
3. `data/map_bg_lz/` can remain on disk unused.

### Verify
- Headless libmgba boot proof scripts/screenshots under `docs/boot_proof/`
  (`comp_*.png` after compression re-enabled).

---

## 2026-08-04 — Strip unused opaque ROM blobs (this step)

### What changed
Default (**modern**) build **no longer links** these asm objects:

| Asm stub | Binary | Size |
| --- | --- | ---: |
| `data/unk_96BD7AC.s` | `data/unknown_unused/unk_96BD7AC.bin` | 534,612 |
| `data/unk_98589A4.s` | `data/unknown_unused/unk_98589A4.bin` | 226,908 |
| `data/unk_9D02950.s` | `data/unknown_unused/unk_9D02950.bin` | 1,431,216 |
| `data/unk_9E7EB08.s` | `data/unknown_unused/unk_9E7EB08.bin` | 5,368 |
| `data/unk_9fbd5d0.s` | `data/unknown_unused/unk_9fbd5d0.bin` | 272,944 |
| **Total** | | **2,470,048 (~2.36 MiB)** |

Mechanism: `Makefile` filters `UNUSED_UNK_ASM` out of `ASM_SOURCES` when
`MODERN=1`. Files stay in the tree. Matching `ld_script.ld` still lists the
sections for `MODERN=0`.

### Evidence they are unused
- No `.global` consumers in `src/` / `asm/` / `include/` (only
  `gUnknown_98589A4` is labeled, and nothing references it).
- Blobs are unlabeled `.incbin` padding for retail address layout.
- Docs already flagged `unk_9D02950` as unused (`docs/rom_asset_sizes.md`).

### Reverse
1. In `Makefile`, remove the `UNUSED_UNK_ASM` / `filter-out` block (or set the
   filter to empty) so `data/unk_*.s` are assembled again under `MODERN=1`.
2. Rebuild: `make -j$(nproc)`.
3. Do **not** delete `data/unknown_unused/*.bin` unless you also drop the
   matching linker entries and accept a non-baserom `MODERN=0` layout.

### Size after this step
- `pmd_red.gba`: **27.49 MiB** (baserom 32.00 MiB → **~4.51 MiB** smaller overall).
- Boot re-checked with libmgba: **PASS** (colorful in-game frames).

---

## 2026-08-04 — Monster AX tile LZ77 compression

### What changed
AX sprite **tiles** (raw `.4bpp`, not AT4PX — portraits were the only AT4PX in
`monster_sbin`) are now shipped as `graphics/ax/mon/**/*.4bpp.lz` (`GMLZ` +
BIOS LZ77).

- Tool: `compress_ax_tiles.py` / `make ax-compress`
- Headers: all 423 `src/data/ax/*.h` INCBINs point at `.4bpp.lz` (`ALIGNED(4)`)
- Runtime: `src/sprite.c` `RegisterSpriteParts_80052BC` / `sub_8005304`
  - Reads uncompressed size from the LZ header (so VRAM packing stays correct)
  - `LZ77UnCompVram` straight into OBJ VRAM (no heap; tiles ≤ 2 KiB each)
- Pose/anim tables stay uncompressed in ROM (~9.8 MiB of the old AX blob)

### Size
- Tiles: `8,044,576 → 5,179,292` bytes (saved **~2.73 MiB**, ~35.6%)
- `pmd_red.gba`: **24.76 MiB** (baserom 32.00 → **~7.24 MiB** smaller overall)
- Boot check `docs/boot_proof/ax_*.png`: **PASS** (intro Pelipper / maps OK)

### Reverse
1. Rewrite `src/data/ax/*.h` INCBINs back to `….4bpp` (drop `.lz` / optional
   `ALIGNED(4)`).
2. Restore `sub_8005304` / `RegisterSpriteParts_80052BC` to plain `CpuCopy`.
3. Remove `ax-compress` Makefile hook; delete `compress_ax_tiles.py` if desired.
4. `.4bpp.lz` under `graphics/ax/mon/` can be deleted (`make tidy` regenerates
   only if hooks remain).

---

## 2026-08-04 — Runtime config (build-time settings)

### What changed
- `include/runtime.h` — `RuntimeConfig` struct + `gRuntimeConfig` alias.
- `configs/runtime.c` — editable defaults in `.runtime_config` ROM section
  (same pattern as [sigma_star_saga](https://github.com/JesterWizard/sigma_star_saga/blob/master/configs/runtime.c)).
- Modern Makefile links `configs/runtime.o`; `ld_script_modern.ld` keeps the
  section (would otherwise hit `/DISCARD/`).
- Matching (`MODERN=0`) does not link the config object.

### Hooked toggles
| Field | Hook site(s) |
| --- | --- |
| `always_run` | `DungeonHandlePlayerInput` / `sub_805EC4C` (`dungeon_main.c`); `sub_809CDC8` (`ground_lives_helper.c`) |
| `infinite_belly` | `DoEndOfTurnEffects_Async`; wall −5 / ally ribbons (`dungeon_misc.c`); Pass Scarf drain (`dungeon_move.c`) |
| `exp_multiplier` | `AddExpPoints` (`dungeon_leveling.c`) |
| `recruit_rate_boost` | `TryRecruitMonster` (+ Friend Bow amount) |
| `all_friend_areas` | `LoadFriendAreas` / `InitializeFriendAreas` / `GetFriendAreaStatus` / `HasAllFriendAreas` |
| `debug_menu` | `SetMainMenuItems` appends **Debug** → existing `MENU_DEBUG` path |
| `disable_something_approaches` | `HandleWind` (`dungeon_wind.c`) |
| `l_to_use_move` | `DungeonHandlePlayerInput` (`dungeon_main.c`): L alone uses set move |

### Reverse
1. Drop `configs/`, `include/runtime.h`, Makefile `CONFIG_*` bits, and the
  `.runtime_config` block in `ld_script_modern.ld`.
2. Revert the `gRuntimeConfig` checks in the files listed above.

---

## 2026-08-04 — Faster incremental makes (AX tiles)

### What changed
- `ax-compress` no longer forces every `monster_gfx*.o` rebuild (it was
  `.PHONY` → full cpp/cc1/as of all 43 units each `make`).
- Lazy stamp `build/pmd_red/ax_tiles.stamp`: compressor always re-checks, but
  stamp mtime only moves when a `.lz` is rewritten. `monster_gfx` depends
  **order-only** on the stamp; per-tile rebuilds come from scaninc `.d` →
  `.4bpp.lz`.
- `compress_ax_tiles.py`: cache hits use `stat` only (no full-file reads);
  `--stamp` / `--quiet` for make; verify only newly built tiles.
- ELF now depends on `libagbsyscall/libagbsyscall.a` (real file) instead of
  phony `libagbsyscall`, so no-op makes no longer re-link the whole ROM.

### Reverse
Restore `$(MONSTER_GFX_OBJECTS): ax-compress`, ELF ← `libagbsyscall`, and the
old script loop.

---

## 2026-08-04 — Custom title-screen backgrounds

Docs: [`documentation/Features/CustomTitleBackgrounds.md`](documentation/Features/CustomTitleBackgrounds.md).

### What changed
- Source art: `graphics/title_screen_backgrounds/title_01.png` … `title_06.png`
  (240×160).
- Build converter: `convert_title_backgrounds.py` → sibling `.at4pn` (AT4PN
  tilemaps+8bpp) + `.pal` (240 RGBX).
- Archive: `src/custom_title_backgrounds.c` / `include/custom_title_backgrounds.h`
  (`ctitle0`…`ctitle5` + `*p` palettes).
- Runtime toggle: `gRuntimeConfig.custom_title_backgrounds` (default `TRUE`)
  in `configs/runtime.c` / `include/runtime.h`.
- Hook: `LoadTitleScreen` in `src/main_loops.c` picks a random custom BG when
  enabled; otherwise vanilla `titlen0`–`titlen2`.
- Makefile: `title-bg-convert` / `build/pmd_red/title_bg.stamp` (order-only
  dep for `custom_title_backgrounds.o`).

### Reverse
1. Set `.custom_title_backgrounds = FALSE` (or drop the field + hook).
2. Remove `src/custom_title_backgrounds.c`, converter, Makefile stamp, and
   generated `.at4pn`/`.pal` if desired.

---

## 2026-08-04 — Custom title BGs → 8bpp

Docs: [`documentation/Features/CustomTitleBackgrounds.md`](documentation/Features/CustomTitleBackgrounds.md).

### What changed
- Converter emits **8bpp** tiles + up to **239** art colors (index 0 reserved).
  Continue `clmkpat` icons use the **OBJ palette** (sprites) when title 8bpp
  is on, so they no longer steal BG colors 176–239.
- Title-only BG3: `BGCNT_256COLOR | CHARBASE(1) | SCREENBASE(31)` via
  `gTitleBg8bpp`; BG0–2 maps at screenbases **6–8** (`0x3000–0x47FF`) so
  Continue window tiles (~`0x2D00`) do not smash maps; BG3 map at **31**
  (`0xF800`) after the tile blob.
- 8bpp tiles load at **`VRAM+0x6000`** (tile index base **128**, max **600**)
  through `0xF5FF`.
- Left text gutter (column 0) cleared while title 8bpp so art is full-bleed.
- `LoadTitleScreen` clears flag on title exit.
- Vanilla `titlen*` path unchanged (4bpp @ CHARBASE 2).

### Reverse
Restore 4bpp converter + always-vanilla BG3CNT / screenbases 12–15.

---

## 2026-08-04 — Fix Continue glitch with custom title BGs

Continue’s load-screen windows overwrote title-mode tilemaps when maps lived
at `0x2000+`. Maps relocated above window GFX / after the tile blob; tile cap
**600**, art colors **200**.

---

## 2026-08-06 — AX pose/anim table dedupe

### What changed
Pose/anim **tables** (not tiles) were full of duplicate arrays. Tool:
`dedupe_ax_tables.py` / `make ax-dedupe`.

1. **Within each** `src/data/ax/*.h`: identical `ax_pose` / `ax_anim` arrays
   keep one definition; pose/anim table slots alias it.
2. **Across species**: anim bodies used by 2+ mons move to
   `src/data/ax_shared_anims.c` + `include/ax_shared_anims.h`.

No runtime/loader changes — still ROM-mapped SIRO pointers.

### Size
| | Before | After |
| --- | ---: | ---: |
| `pmd_red.gba` | 25.30 MiB | **21.92 MiB** |
| AX tables (excl. tiles) | ~9.77 MiB | **~6.39 MiB** |
| **Saved** | | **~3.38 MiB** |

Breakdown: poses 2.06→0.81 MiB, anims 5.03→2.89 MiB (local+shared),
positions unchanged (1.43 MiB).

### Reverse
1. `git checkout -- src/data/ax/ include/ax_shared_anims.h`
2. Delete `src/data/ax_shared_anims.c` (and optional Makefile `ax-dedupe` bits).
3. Rebuild.

Re-running `make ax-dedupe` on an already-deduped tree is a no-op.

---

## 2026-08-06 — Fix axdata growth softlock (anim LZ)

Embedding `animCache[256]` in `axdata` broke `UnkGroundSpriteStruct`
(documented size **0x80**, first field `axdata` at 0x3C) embedded in
`GroundLives` → black-screen softlock at boot.

**Fix:** keep `axdata` at **0x3C**. GMLZ anims decompress into a **24-slot
EWRAM BSS pool** (`ClaimAxAnimCache` in `sprite.c`). A mid-intro 16 KiB
`MemoryAlloc` was also unsafe (ground already fills the heap; failed alloc
returned GMLZ bytes as `ax_anim*` → black screen after logos).


### What changed
Anim frame arrays (after dedupe, ~2.89 MiB) are mostly ≤256 bytes. Those that
shrink under LZ ship as `GMLZ` + BIOS LZ77 under `graphics/ax/anim_lz/`.

- Tool: `compress_ax_anims.py` / `make ax-anim-compress`
- Rewrites `src/data/ax/*.h` + `ax_shared_anims.c` defs to `INCBIN` of `.lz`
- Anim tables use `AX_ANIM_PTR()` (blobs are `const u8[]`)
- Runtime: `ResolveAxAnimData` in `src/sprite.c` — on `AxResInit` /
  `AxResInitUnoriented`, if pointer is GMLZ and decomp size ≤256, decompress
  into new `axdata.animCache[256]`; else keep ROM pointer
- ~166 oversized anims stay uncompressed C arrays

Why not full table LZ-on-open: `Dungeon` (~116 KiB) already fills most of the
144 KiB main heap; many species stay open on a floor.

### Size
| | Before | After |
| --- | ---: | ---: |
| `pmd_red.gba` | 21.92 MiB | **20.71 MiB** |
| Anim frame data | ~2.89 MiB | **~1.69 MiB** |
| **Saved** | | **~1.20 MiB** |

### Reverse
1. Restore anim defs from git (`src/data/ax/`, `ax_shared_anims.*`).
2. Drop `animCache` / `ResolveAxAnimData` / `AX_ANIM_PTR`.
3. Remove `compress_ax_anims.py` / `ax-anim-compress` Makefile bits;
   `graphics/ax/anim_lz/` optional delete.

---

## 2026-10-26 — Poké coin palette + vertical alignment

### What changed
- **Dungeon palette:** the {POKE} OBJ no longer borrows the floor
  `GetItemPalette(ITEM_POKE)` bank (only 3 golds, so the coin's yellow and mid
  tones merged and the "P" vanished into the face). It now writes the exact
  town golds into **OBJ bank 13 slots 8–12** each frame it is shown
  (brightness-aware, no color ramp). HP bars keep slots 0–7 and no longer
  write 8–15 (`DUNGEON_HP_BAR_OBJ_PAL_*` in `palette_owners.h`).
- **Town menu height:** `POKE_COIN_OY_MENU` −3 → −4 so the 10px coin is
  centered on the 8px caps (art rows y−1 … y+8), matching the dungeon field
  menu. When `y` is tile-aligned the coin sits 1px lower rather than clipping
  its top row.
- `tools/check_palette_owners.py` checks the new OBJ slots.

### Reverse
Restore `GetItemPalette(ITEM_POKE)` + the floor slot remap in
`EmitPokeCoinObjSprites`, set `POKE_COIN_OY_MENU` back to `(-3)`, and the HP bar
palette loop back to 16.

---

## 2026-10-26 — Dungeon Poké coin follows its text (pickups / logs / dialogue)

### What changed
The dungeon {POKE} is an OBJ, so it does not move or clear with window text.
It used to store screen positions and was wiped by `sub_80073B8` (every text
pass on any window), which caused:
- typewriter dialogue (money tutorial, Kecleon prompts) losing its coin after
  the first frame;
- earlier pickup lines in the message popup losing their coin when the next
  line printed;
- Others → Message log placing every coin one line low (window gfx row
  offset `unk24` ignored), a stray coin below the box, and coins left behind
  when scrolling.

Coins are now stored per window in gfx coordinates (`custom_graphics.c`) and
placed at Emit: skipped unless fully inside the window's visible rows,
cleared per window (`PrepareTextbox`), per rect (`sub_80087EC`) or all
(`ShowWindows`), and shifted with the popup scroll (`dungeon_message.c`) and
the log viewer scroll (`dungeon_message_log.c`).

### Reverse
Restore `ClearPokeCoinObjSprites()` in `sub_80073B8` / `PrepareTextbox`, the
screen-space `RegisterPokeCoinObjSprite(screenX, screenY)`, and drop the
scroll / rect / ShowWindows hooks.

---

## 2026-10-26 — Chapter title cards

Docs: [`documentation/Features/ChapterTitles.md`](documentation/Features/ChapterTitles.md).

### What changed
- Main story split into 10 chapters following the game's own episodes
  (`EVENT_M01E01A` … `EVENT_M01E10A`). A PMD2-style card (Friend Area art fade-in
  + "Chapter N" / title, alpha-blended text) plays on each chapter's first
  morning, queued from `ScenarioCalc` on `SCENARIO_MAIN (N,0)→(N,1)` and shown
  at the next `GroundMap_Select`.
- Runtime toggle `chapter_titles` (default on): `runtime.h`, `configs/runtime.c`,
  debug menu (**Chapters**), RescueTemple schema + header snapshot.
- Runtime-override save record → version 2; v1 records keep their overrides
  and take `chapter_titles` from the ROM default.
- Friend Area intro art load / fade / teardown moved to `src/fullscreen_art.c`
  (shared with the cards; intro behavior unchanged).
- `.gitattributes`: raw RGBX palettes in `graphics/custom/backgrounds`,
  `graphics/portraits` and `graphics/title_screen_backgrounds` are now
  `binary`. The global `*.pal text eol=crlf` rule (meant for JASC-PAL text)
  inserted 0x0D before every 0x0A byte on checkout, scrambling 9 Friend Area
  intros (serene_sea, shallow_beach, mt_moonview, scorched_plains,
  healing_forest, secretive_forest, darkness_ridge, ice_floe_beach,
  volcanic_pit) and making builds rewrite the elekid / spinarak / sunkern /
  swinub portrait palettes. The committed blobs were already correct.

### Reverse
Set `.chapter_titles = FALSE`, or drop `src/chapter_titles.c` and the hooks in
`ScenarioCalc` / `GroundMap_Select`.

---

## 2026-10-26 — Spinda's Café: Recycle Shop, tickets, Spinda's dance, team tables

Docs: [`documentation/Features/SpindaCafe.md`](documentation/Features/SpindaCafe.md).

### What changed
- New items 240–244: Prize / Silver / Gold / Prism Ticket and Wonder Gummi
  (`NUMBER_OF_ITEM_IDS` 245). Wonder Gummi picks the best gummi type for the
  eater (`GetBestGummiIndexForTypes`). The new IDs are in `gInvalidItemIDs`
  and skipped by mail jobs (`ITEM_FIRST_CUSTOM`). `tools/dungeonjson` knows them,
  and `dungeon_item.mk` now rebuilds spawn sets when the tool changes. The
  spawn-set decoders clamp at the end of the array.
- Recycle Shop rewritten Sky-style: Trade (18 unlockable offers), Get Ticket
  (4/6/8/10 items, rank-gated), Lottery (three cards, loss/win/big-win pools),
  1-in-32 bonus draw. Old saves' abstract ticket converts to an item.
- Juice Bar split into `SPECIAL_TEXT_SPINDA_JUICE_BAR` +
  `SPECIAL_TEXT_SPINDA_JUICE_SERVE`. Between them the café script cues Spinda's
  dance (hop, spin, tail whip).
- Team members other than leader / partner sit at the café tables (lives kinds
  10–13) with random café talk. `GetTeamSlotMembers` ignores
  `QUEST_CAN_DEPOSIT_PARTNER` on `MAP_SPINDA_CAFE`.
- Café wide UI: a dialogue that will open a menu reserves the menu's window
  tiles (`gGroundMap8bppUiReserveTiles`), so large menus no longer blank the
  dialogue and portrait when they appear.
- Achievements `itemsEverGot` grown from 30 to 32 bytes so IDs 240-255 have
  their own bits (they were landing in `runFlags`). Struct size unchanged;
  old saves read the two new bytes as 0.

### Reverse
Revert the branch. Removing the items requires dropping IDs 240–244 from
`item.h`, `item_data.json`, names / descriptions, `effect_data.c`, the
`dungeonjson` map and the RescueEditor arrays together.

---

## 2026-10-26 — Postgame boss recruit toggle

Docs: [`documentation/Features/BossRecruit.md`](documentation/Features/BossRecruit.md).

### What changed
- Runtime toggle `boss_recruit` (default off): after `QUEST_CAN_CHANGE_LEADER`,
  a defeated boss (`bossFlag` or a boss `monsterBehavior`) always offers to
  join. For those bosses any teammate's KO counts, distance / sight checks are
  skipped, and a full team gets the Send Home choice even with
  `pmd2_send_home` off. Recruit rate −999, Latias / Latios and the
  legendary-once rule are unchanged.
- Runtime-override save record → version 3 (v1/v2 take `boss_recruit` from the
  ROM default). The struct now fills the 0x48-byte record; a static assert
  guards the size.
- Debug menu **Boss Join**, RescueTemple schema, header snapshot and test.

### Reverse
Set `.boss_recruit = FALSE`, or drop `IsGuaranteedBossRecruit` and its three
call sites.

---

## 2026-10-26 — UI styles: Explorers of Sky windows

Docs: [`documentation/Features/UiStyles.md`](documentation/Features/UiStyles.md).

### What changed
- Runtime field `ui_style` (`UI_STYLE_RED` default, `UI_STYLE_SKY`): Sky
  windows have an opaque dark grey fill and a beveled EoS frame tinted by
  Options > Windows (Blue / Red → pink / Green). Palette work stays in font
  bank 15 (slot 1 fill, 13–15 frame); 18 frame tiles from
  `graphics/custom/ui_style/sky_chrome.png` (converted by
  `tools/convert_ui_style_chrome.py`) are copied over the chrome sheet.
  Dialogue corners use unused slots 0x2E4 / 0x2E5; its top / bottom edge rows
  and the header separator follow the style.
- Sky windows are opaque: `ToggleWindowBgBuffer` forces BG1 alpha 16/0 in
  vanilla's translucent-window blend mode.
- Runtime-override save record → 0x4C bytes, version 4. v1–v3 records (0x48,
  checksum at 0x44) still load; new fields take the ROM default.
- Debug menu **UI: Red / Sky** (applies immediately), RescueTemple schema,
  header snapshot and test.
- Fix (both styles): the dialogue bottom-edge copy hardcoded 0xD00 bytes (26
  tiles wide); the café's 25-wide box drew its bottom edge 4 tiles off.
- Sky follow-up (side-by-side with EoS): four frame tones (slot 9 joins
  13–15) with EoS's top-left lighting; separate right edge / right corners
  (slots 0x2FC–0x2FF, 0x2E6) remapped in `AddWindow`; titled windows become
  one box with a full-width separator instead of tabs; yellow EoS menu cursor
  (OBJ tile 0x3F4); name colour slot 14 kept light; pink / blue re-sampled.

### Reverse
Set `.ui_style = UI_STYLE_RED`, or drop `src/ui_style.c` and its hooks.

---

## 2026-10-26 — Custom portraits: special NPC slots (Lombre fix)

Docs: [`documentation/Features/CustomPortraits.md`](documentation/Features/CustomPortraits.md#special-npc-slots).

### What changed
- Cutscene portraits for the purple Kecleon (lives 0x47), Lombre (0x4D) and
  Absol (0x53) went blank with custom portraits on. `ScriptSetPortraitInfo`
  swapped them to extra kao slots (purple palette, pre-drawn mirrored faces)
  after opening the Normal-only custom pack, which has nothing in those slots.
- `GetSpecialPortraitFaceId` now picks the slot before the open: a missing
  swapped slot loads vanilla `kao`; a custom face without its mirror slot is
  flipped in hardware. `CustomPortraitHasEmotion` is now public.

### Reverse
Restore the post-open `switch (portraitPtr->unk0)` in `ScriptSetPortraitInfo`.

---

## Quick status snapshot

| Item | State |
| --- | --- |
| Default ROM name | `pmd_red.gba` |
| Padding | Off (`PAD_ROM=1` to restore) |
| Ground BPC/BMA LZ | On (`GMLZ`) |
| Ground BPL/BPA LZ | Off |
| Monster AX tile LZ | On (`GMLZ` → `LZ77UnCompVram`) |
| AX pose/anim dedupe | On (`make ax-dedupe`) |
| AX anim sequence LZ | On (`make ax-anim-compress` → heap cache pool) |
| Unused unk blobs in modern ROM | Stripped |
| Runtime config | On (modern; edit `configs/runtime.c`) |
| Custom title backgrounds | On (8bpp ≤600 tiles @ +128; maps SB 6–8/31; `custom_title_backgrounds`) |
| Chapter title cards | On (`chapter_titles`; 10 chapters from `EVENT_M01ExxA`) |
| Spinda's Café | On (`spinda_cafe`; Recycle Shop + tickets, dance, team tables) |
| Postgame boss recruit | Off (`boss_recruit`) |
| UI style | Red (`ui_style`; Sky = Explorers of Sky windows) |
| Matching `make compare` | Not expected to match once assets diverge |
