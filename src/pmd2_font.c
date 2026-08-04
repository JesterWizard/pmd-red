#include "global.h"
#include "pmd2_font.h"
#include "runtime.h"
#include "pmd2_font_data.h"

const unkChar *GetPmd2FontChar(s32 chr)
{
    s32 lo;
    s32 hi;

    if (!gRuntimeConfig.pmd2_font)
        return NULL;

    lo = 0;
    hi = PMD2_FONT_GLYPH_COUNT - 1;
    while (lo <= hi) {
        s32 mid = (lo + hi) / 2;
        u16 id = sPmd2FontChars[mid].unk4;

        if (id == chr)
            return &sPmd2FontChars[mid];
        if (id < chr)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return NULL;
}
