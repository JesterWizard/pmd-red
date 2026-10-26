#ifndef GUARD_FULLSCREEN_ART_H
#define GUARD_FULLSCREEN_ART_H

#include "structs/rgb.h"

/*
 * Full-screen 8bpp AT4PN art on BG3 (same VRAM layout as the custom title
 * backgrounds). Used by Friend Area intros and chapter title cards.
 *
 * Load clears the window layout and hides OBJ/BGs until the art is ready;
 * the palette starts black, so fade it in with SetFullscreenArtBrightness.
 * Unload leaves BG2/BG3 hidden until the next ground SELECT_MAP rebuilds them.
 */
void LoadFullscreenArt(const u8 *at4pn);
void UnloadFullscreenArt(void);

/* Writes BG palette 0–239 from pal (240 RGBX) at brightness 0–32. */
void SetFullscreenArtBrightness(const RGB_Struct *pal, s32 brightness);

/* One frame of the minimal loop used while art is on screen (sound, input,
 * palette / VRAM / OAM transfers). */
void RunFullscreenArtFrame(void);

#endif /* GUARD_FULLSCREEN_ART_H */
