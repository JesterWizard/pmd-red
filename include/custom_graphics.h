#ifndef GUARD_CUSTOM_GRAPHICS_H
#define GUARD_CUSTOM_GRAPHICS_H

#include "structs/str_text.h"
#include "palette_owners.h"

#define POKE_COIN_CHR_LEFT 0x83BF
#define POKE_COIN_CHR_RIGHT 0x83C4
#define POKE_COIN_SIZE 16
/* Opaque art width after convert_poke_coin.py left-align (10×10 in 16×16). */
#define POKE_COIN_ART_WIDTH 12

/* Horizontal: keep ox at 0 — blitX is ceiled so the 16×16 never overlaps
 * digits; left-aligned art means the coin sits at the left of that block.
 * Large ox clips the coin (art is ~10px; ox+10 must be ≤ 16).
 * Vertical: tune town vs dungeon separately (money y: town 18, dungeon 12). */
#define POKE_COIN_OX_TOWN 0
#define POKE_COIN_OY_TOWN (-2)
#define POKE_COIN_OX_DUNGEON 0
#define POKE_COIN_OY_DUNGEON 0

/* Half {STAR_BULLET} for move Power rows (full stars use vanilla STAR_BULLET). */
#define POWER_STAR_HALF_CHR 0x8754
#define MOVE_POWER_STAR_MAX 60 /* PMD2 Giga Impact base power */

/* Returns a replacement glyph for {POKE} when custom_graphics is on, else NULL. */
const unkChar *GetCustomPokeCoinChar(s32 chr);

/* Half-star glyph matching IQ STAR_BULLET palette (not gated on custom_graphics). */
const unkChar *GetPowerStarChar(s32 chr);

/*
 * Build 16×16 coin blit. baseTiles (32 words) is existing window GFX to merge
 * into; NULL starts from transparent (index 0). Coin stamped at (ox, oy).
 * Town remaps onto font bank 15; dungeon onto bank-12 slots 8–11.
 */
const u32 *BuildPokeCoinBlit(const u32 *baseTiles, s32 ox, s32 oy);

/* Remap button/icon glyphs off shared gray slots; NULL if not applicable. */
const unkChar *GetRemappedIconChar(s32 chr, const unkChar *src);

/* Dungeon coin gold (bank 12 slots 8–11) + optional item pink @ font 11. */
void ApplyCustomPokeCoinPalette(void);

/* Ensure coin colors before a {POKE} glyph blit (town: bank 14 full gold). */
void ApplyPokeCoinPaletteForDraw(void);

/* Portrait owns BG bank 14 (coin font-fallbacks). Clearing restores coin golds. */
void SetPokeCoinTownPortraitBankInUse(bool8 inUse);

/* Active coin palette bank for WriteGFXToBG0Window. */
u32 GetPokeCoinPalBank(void);

/* True when chr is one half of the custom Poké icon. */
bool8 IsCustomPokeCoinChar(s32 chr);

#endif /* GUARD_CUSTOM_GRAPHICS_H */
