#ifndef GUARD_CUSTOM_GRAPHICS_H
#define GUARD_CUSTOM_GRAPHICS_H

#include "structs/str_text.h"

/* Bank 12 — bank 14 is the dungeon minimap; bank 15 is shared fontpal. */
#define POKE_COIN_PAL_BANK 12
#define POKE_COIN_CHR_LEFT 0x83BF
#define POKE_COIN_CHR_RIGHT 0x83C4
#define POKE_COIN_SIZE 16

/* Returns a replacement glyph for {POKE} when custom_graphics is on, else NULL. */
const unkChar *GetCustomPokeCoinChar(s32 chr);

/*
 * Build 16×16 coin blit. baseTiles (32 words) is existing window GFX to merge
 * into; NULL starts from transparent (index 0). Coin stamped at (ox, oy).
 */
const u32 *BuildPokeCoinBlit(const u32 *baseTiles, s32 ox, s32 oy);

/* Remap button/icon glyphs off shared gray slots; NULL if not applicable. */
const unkChar *GetRemappedIconChar(s32 chr, const unkChar *src);

/* Load dedicated coin BG palette (bank 12) + optional PMD2 item pink on font bank. */
void ApplyCustomPokeCoinPalette(void);

/* True when chr is one half of the custom Poké icon. */
bool8 IsCustomPokeCoinChar(s32 chr);

#endif /* GUARD_CUSTOM_GRAPHICS_H */
