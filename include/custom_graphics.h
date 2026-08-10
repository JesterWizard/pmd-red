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
 *
 * Vertical: blitY is tile-snapped (y & ~7); oy = (y & 7) + context align.
 * Each UI needs its own align (dialogue bevel vs menu money row vs dungeon). */
#define POKE_COIN_OX_TOWN 0
#define POKE_COIN_OX_DUNGEON 0
#define POKE_COIN_OY_DIALOGUE (-3) /* WINDOW_TYPE_0 speaker boxes */
#define POKE_COIN_OY_MENU (-3)     /* rank / shop money rows */
#define POKE_COIN_OY_DUNGEON_ALIGN (-4) /* field-menu money y=12 */

/* Half {STAR_BULLET} for move Power rows (full stars use vanilla STAR_BULLET). */
#define POWER_STAR_HALF_CHR 0x8754
#define MOVE_POWER_STAR_MAX 60 /* PMD2 Giga Impact base power */

/* Returns a replacement glyph for {POKE} when custom_graphics is on, else NULL. */
const unkChar *GetCustomPokeCoinChar(s32 chr);

/* Half-star glyph matching IQ STAR_BULLET palette (not gated on custom_graphics). */
const unkChar *GetPowerStarChar(s32 chr);

/*
 * Build a 16×16 blit. baseTiles: existing window GFX to merge into; NULL = empty.
 * ox/oy: coin stamp offset (may be negative).
 * preserveTopBevel: keep WINDOW_TYPE_0 outline rows 0–2 (dialogue blitY 0 only).
 * keepBaseText: town dialogue — retain non-zero base pixels so an 11px line-1
 * glyph that straddles into the coin's tile row is not wiped (e.g. "Persian").
 */
const u32 *BuildPokeCoinBlit(const u32 *baseTiles, s32 ox, s32 oy,
                             bool8 preserveTopBevel, bool8 keepBaseText);

/* Remap button/icon glyphs off shared gray slots; NULL if not applicable. */
const unkChar *GetRemappedIconChar(s32 chr, const unkChar *src);

/* Dungeon coin gold (bank 12 slots 8–11) + optional item pink @ font 11. */
void ApplyCustomPokeCoinPalette(void);

/* Ensure coin colors before a {POKE} glyph blit (town: bank 14, or 13 with portrait). */
void ApplyPokeCoinPaletteForDraw(void);

/* Portrait owns BG bank 14; coin draws on bank 13 with full golds while set. */
void SetPokeCoinTownPortraitBankInUse(bool8 inUse);

/* Active coin palette bank for WriteGFXToBG0Window. */
u32 GetPokeCoinPalBank(void);

/* True when chr is one half of the custom Poké icon. */
bool8 IsCustomPokeCoinChar(s32 chr);

#endif /* GUARD_CUSTOM_GRAPHICS_H */
