#include "global.h"
#include "friend_area_intros.h"
#include "fullscreen_art.h"
#include "input.h"
#include "runtime.h"
#include "structs/rgb.h"

void ShowFriendAreaIntro_Async(u8 areaId)
{
    const RGB_Struct *pal;
    s32 frames;
    s32 brightness;

    if (!gRuntimeConfig.friend_area_intros)
        return;
    if (areaId == FRIEND_AREA_NONE || areaId >= FRIEND_AREA_COUNT)
        return;
    if (gFriendAreaIntroAssets[areaId].at4pn == NULL || gFriendAreaIntroAssets[areaId].pal == NULL)
        return;

    pal = (const RGB_Struct *)gFriendAreaIntroAssets[areaId].pal;
    LoadFullscreenArt(gFriendAreaIntroAssets[areaId].at4pn);

    /* Quick fade-in; discard residual A from map confirm. */
    brightness = 0;
    while (brightness < 32) {
        brightness++;
        SetFullscreenArtBrightness(pal, brightness);
        RunFullscreenArtFrame();
    }

    frames = 0;
    while (frames < FRIEND_AREA_INTRO_FRAMES) {
        RunFullscreenArtFrame();
        frames++;
        if (gRealInputs.pressed & A_BUTTON)
            break;
    }

    /* Fade out to black before tearing down 8bpp (avoids a white flash). */
    while (brightness > 0) {
        brightness--;
        SetFullscreenArtBrightness(pal, brightness);
        RunFullscreenArtFrame();
    }

    UnloadFullscreenArt();
}
