#include "global.h"
#include "custom_portraits.h"
#include "runtime.h"

bool8 HasCustomPortrait(s16 speciesId)
{
    s32 i;
    s32 id = speciesId;

    for (i = 0; i < gCustomPortraitCount; i++) {
        if (gCustomPortraitSpecies[i] == id)
            return TRUE;
    }
    return FALSE;
}

CustomPortraitMask GetCustomPortraitMask(s16 speciesId)
{
    s32 i;
    s32 id = speciesId;

    for (i = 0; i < gCustomPortraitCount; i++) {
        if (gCustomPortraitSpecies[i] == id)
            return gCustomPortraitMasks[i];
    }
    return 0;
}
