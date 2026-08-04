#ifndef GUARD_PMD2_FONT_H
#define GUARD_PMD2_FONT_H

#include "structs/str_text.h"

/* Returns a PMD2 Latin glyph when pmd2_font is on, else NULL (fall back to vanilla). */
const unkChar *GetPmd2FontChar(s32 chr);

#endif /* GUARD_PMD2_FONT_H */
