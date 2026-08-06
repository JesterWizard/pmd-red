#ifndef GUARD_CUSTOM_GRAPHICS_H
#define GUARD_CUSTOM_GRAPHICS_H

#include "structs/str_text.h"

/* Returns a replacement glyph for {POKE} when custom_graphics is on, else NULL. */
const unkChar *GetCustomPokeCoinChar(s32 chr);

/* Patch fontpal slot 12 to Poké-coin mid-gold and refresh BG text palette. */
void ApplyCustomPokeCoinPalette(void);

#endif /* GUARD_CUSTOM_GRAPHICS_H */
