#ifndef GUARD_PALETTE_OWNERS_H
#define GUARD_PALETTE_OWNERS_H

/*
 * BG palette ownership — single source of truth.
 * Enforced by tools/check_palette_owners.py (runs at link) + #error checks here.
 *
 * Dungeon hardware banks:
 *   0–9    tileset
 *   10–11  animated (water / lava)
 *   12–13  stairs / traps (trappat → gUnknown_202ECA4)
 *   14     minimap (zmappat; blue player dots)
 *   15     font + dungeon HUD (levfont / hp5font)
 *
 * Font bank 15 — never overwrite for coin:
 *   levfont: 4,5,6,12,15 | hp5font: 8,10,15 | chrome: 12–15 | pink: 11
 *
 * Dungeon coin: full 4 golds in bank 12 slots 8–11 only.
 *   Normal stairs (objs 22/23) use indices 1–7,15 — left untouched.
 *   Shared white rim uses stock trappat slot 7 (near-white).
 *   Town: whole bank 12 for coin (stairs not loaded).
 */

/* ---- banks ---- */
#define POKE_COIN_PAL_BANK_TOWN 12
#define POKE_COIN_PAL_BANK_DUNGEON 12

#define POKE_COIN_DUNGEON_TRAPPAT_BANK 12
#define POKE_COIN_DUNGEON_GOLD_SLOT0 8 /* pale */
#define POKE_COIN_DUNGEON_GOLD_SLOT1 9 /* yellow */
#define POKE_COIN_DUNGEON_GOLD_SLOT2 10 /* mid */
#define POKE_COIN_DUNGEON_GOLD_SLOT3 11 /* dark */
#define POKE_COIN_NUM_GOLD_TONES 4

/* Town tile indices (= town bank 12 palette indices). */
#define POKE_COIN_SLOT_TRANSPARENT 0
#define POKE_COIN_SLOT_WHITE 7
#define POKE_COIN_SLOT_PALE 9
#define POKE_COIN_SLOT_YELLOW 10
#define POKE_COIN_SLOT_MID 11
#define POKE_COIN_SLOT_DARK_TOWN 12

/* Dungeon remaps town tile indices → bank12 slots 8–11; white stays 7. */
#define POKE_COIN_SLOT_PALE_DUNGEON POKE_COIN_DUNGEON_GOLD_SLOT0
#define POKE_COIN_SLOT_YELLOW_DUNGEON POKE_COIN_DUNGEON_GOLD_SLOT1
#define POKE_COIN_SLOT_MID_DUNGEON POKE_COIN_DUNGEON_GOLD_SLOT2
#define POKE_COIN_SLOT_DARK_DUNGEON POKE_COIN_DUNGEON_GOLD_SLOT3

/* Font / HUD / pink — coin must never SetBGPalette these. */
#define FONT_SLOT_HP_GREEN 4
#define FONT_SLOT_CYAN 5
#define FONT_SLOT_YELLOW_TEXT 6
#define FONT_SLOT_WHITE 7
#define FONT_SLOT_SHADOW 8
#define FONT_SLOT_HP5_GOLDISH 10
#define ITEM_PINK_SLOT 11
#define FONT_SLOT_HUD_LABEL 12
#define FONT_SLOT_HUD_13 13
#define FONT_SLOT_HUD_14 14
#define FONT_SLOT_HUD_15 15
#define FONT_BANK 15

#define POKE_COIN_DUNGEON_FORBIDDEN_SLOT_MIN 12
#define POKE_COIN_DUNGEON_FORBIDDEN_SLOT_MAX 15

/* Expected RGB (8-bit) for guard vs baserom fontpal / source. */
#define FONT_HUD_LABEL_R 255
#define FONT_HUD_LABEL_G 135
#define FONT_HUD_LABEL_B 95
#define FONT_HP_GREEN_R 95
#define FONT_HP_GREEN_G 255
#define FONT_HP_GREEN_B 95
#define ITEM_PINK_R 255
#define ITEM_PINK_G 119
#define ITEM_PINK_B 199

#if POKE_COIN_NUM_GOLD_TONES != 4
#error "Poké coin must keep all 4 gold tones (town and dungeon)"
#endif

#if POKE_COIN_DUNGEON_GOLD_SLOT0 < 8 || POKE_COIN_DUNGEON_GOLD_SLOT3 > 11
#error "Dungeon coin gold must stay in trappat bank slots 8–11 (stairs use 1–7,15)"
#endif

#if POKE_COIN_PAL_BANK_DUNGEON == FONT_BANK
#error "Dungeon coin must not use font bank 15 (HUD / pink)"
#endif

#endif /* GUARD_PALETTE_OWNERS_H */
