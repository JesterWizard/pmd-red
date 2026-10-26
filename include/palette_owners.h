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
 * Font bank 15 — never overwrite for coin golds:
 *   levfont: 4,5,6,12,15 | hp5font: 8,10,15 | chrome: 12–15 | pink: 11
 *
 * Dungeon coin: custom poke_coin.4bpp as OBJ (not floor itempat art).
 *   Tiles upload to a spare OBJ VRAM slot; colors are the exact town golds in
 *   OBJ bank 13 slots 8–12 (HP bars own slots 0–7). The floor ITEM_POKE pal
 *   only has 3 golds, which merged the "P" into the coin face. No BG writes.
 *
 * Town coin: full palette on BG bank 14 (map tiles stop at bank 12 on
 * T01P03; rank badge is 13 when shown). While a dialogue portrait owns
 * bank 14, coin uses bank 13 with the same full golds (not font-fallback).
 */

/* Font / HUD / pink — coin must never SetBGPalette these for golds. */
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

/* ---- banks ---- */
#define POKE_COIN_PAL_BANK_TOWN 14
#define POKE_COIN_PAL_BANK_DUNGEON 12
/* Portrait owns town bank 14 — full golds on 13 (rank badge not on-screen). */
#define POKE_COIN_PAL_BANK_TOWN_PORTRAIT 13
#define POKE_COIN_PAL_BANK_TOWN_FONT_FALLBACK POKE_COIN_PAL_BANK_TOWN_PORTRAIT

#define POKE_COIN_DUNGEON_TRAPPAT_BANK 12
#define POKE_COIN_DUNGEON_GOLD_SLOT0 8 /* ← floor bright */
#define POKE_COIN_DUNGEON_GOLD_SLOT1 9 /* ← floor mid */
#define POKE_COIN_DUNGEON_GOLD_SLOT2 10 /* ← floor mid (art mid tone) */
#define POKE_COIN_DUNGEON_GOLD_SLOT3 11 /* ← floor dark */
#define POKE_COIN_NUM_GOLD_TONES 4

/* Dungeon OBJ bank 13: HP bars use slots 0–7 (dungeon_hp_bars.c). */
#define DUNGEON_HP_BAR_OBJ_PAL_BANK 13
#define DUNGEON_HP_BAR_OBJ_PAL_SLOTS 8

/* Dungeon coin OBJ pal: town golds keep their .4bpp indices (9–12); white
 * moves 7 → 8 because 7 is an HP-bar slot. */
#define POKE_COIN_OBJ_PAL_BANK DUNGEON_HP_BAR_OBJ_PAL_BANK
#define POKE_COIN_SLOT_WHITE_OBJ 8

/* Town .4bpp tile indices (from convert_poke_coin.py / poke_coin.png). */
#define POKE_COIN_SLOT_TRANSPARENT 0
#define POKE_COIN_SLOT_WHITE 7
#define POKE_COIN_SLOT_PALE 9
#define POKE_COIN_SLOT_YELLOW 10
#define POKE_COIN_SLOT_MID 11
#define POKE_COIN_SLOT_DARK_TOWN 12

/* Font-fallback remap when portrait owns town bank 14. */
#define POKE_COIN_SLOT_PALE_TOWN_FONT FONT_SLOT_YELLOW_TEXT
#define POKE_COIN_SLOT_YELLOW_TOWN_FONT FONT_SLOT_YELLOW_TEXT
#define POKE_COIN_SLOT_MID_TOWN_FONT FONT_SLOT_HUD_LABEL
#define POKE_COIN_SLOT_DARK_TOWN_FONT FONT_SLOT_SHADOW

/* Dungeon remaps town tile indices → bank12 slots 8–11; white stays 7. */
#define POKE_COIN_SLOT_PALE_DUNGEON POKE_COIN_DUNGEON_GOLD_SLOT0
#define POKE_COIN_SLOT_YELLOW_DUNGEON POKE_COIN_DUNGEON_GOLD_SLOT1
#define POKE_COIN_SLOT_MID_DUNGEON POKE_COIN_DUNGEON_GOLD_SLOT2
#define POKE_COIN_SLOT_DARK_DUNGEON POKE_COIN_DUNGEON_GOLD_SLOT3

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

#if POKE_COIN_SLOT_WHITE_OBJ < DUNGEON_HP_BAR_OBJ_PAL_SLOTS \
    || POKE_COIN_SLOT_PALE < DUNGEON_HP_BAR_OBJ_PAL_SLOTS \
    || POKE_COIN_SLOT_DARK_TOWN > 15
#error "Dungeon coin OBJ slots must stay in OBJ bank 13 slots 8–15 (HP bars own 0–7)"
#endif

#if POKE_COIN_PAL_BANK_DUNGEON == FONT_BANK
#error "Dungeon coin must not use font bank 15 (HUD / pink)"
#endif

#if POKE_COIN_PAL_BANK_TOWN == 12
#error "Town coin must not use BG bank 12 (T01P03 map flowers/grass)"
#endif

#if POKE_COIN_PAL_BANK_TOWN == FONT_BANK
#error "Town coin primary bank must not be font 15 (use 14; portrait → 13)"
#endif

#if POKE_COIN_PAL_BANK_TOWN_PORTRAIT == POKE_COIN_PAL_BANK_TOWN
#error "Town coin portrait alternate must differ from primary bank 14"
#endif

#if POKE_COIN_PAL_BANK_TOWN_PORTRAIT == 12
#error "Town coin portrait alternate must not use BG bank 12 (map flowers)"
#endif

#if POKE_COIN_PAL_BANK_TOWN_PORTRAIT == FONT_BANK
#error "Town coin portrait alternate must not be font bank 15"
#endif

#endif /* GUARD_PALETTE_OWNERS_H */
