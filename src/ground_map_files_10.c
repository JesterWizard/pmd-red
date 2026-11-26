#include "global.h"
#include "globaldata.h"

#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT00P01m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T00P01m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P01[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P01.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P011[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P011.bpa");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P01c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P01c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P01m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P01m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P021[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P021.bpa");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P02A[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P02A.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P02Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P02Am.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P02Bm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P02Bm.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P02c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P02c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P03[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P03.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P031[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P031.bpa");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P03c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P03c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P03m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P03m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P04[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P04.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P04c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P04c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P04m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P04m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P05[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P05.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P05c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P05c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P05m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P05m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P06[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P06.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P06c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P06c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P06m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P06m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P07[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P07.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P07W[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P07W.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P07Wc[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P07Wc.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P07Wm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P07Wm.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P07c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P07c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P07m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P07m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P08[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P08.bpl");
#endif
/* Raw (not GMLZ): café BPC is ~63KB / ~1800 tiles; streaming reads tiles from ROM
 * so we never allocate a decompressed copy on the main heap (OOM softlock). */
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P08c[] ALIGNED(4) = INCBIN_U8("data/map_bg/T01P08c.bpc");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileT01P08m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/T01P08m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW01[] ALIGNED(4) = INCBIN_U8("data/map_bg/W01.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW01c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W01c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW01m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W01m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW03P01[] ALIGNED(4) = INCBIN_U8("data/map_bg/W03P01.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW03P011[] ALIGNED(4) = INCBIN_U8("data/map_bg/W03P011.bpa");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW03P01c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W03P01c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW03P01m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W03P01m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW03P021[] ALIGNED(4) = INCBIN_U8("data/map_bg/W03P021.bpa");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW03P031[] ALIGNED(4) = INCBIN_U8("data/map_bg/W03P031.bpa");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW03P03c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W03P03c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW03P03m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W03P03m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW04[] ALIGNED(4) = INCBIN_U8("data/map_bg/W04.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW041[] ALIGNED(4) = INCBIN_U8("data/map_bg/W041.bpa");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW04c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W04c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW04m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W04m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW05[] ALIGNED(4) = INCBIN_U8("data/map_bg/W05.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW05c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W05c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW05m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W05m.bma.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW06[] ALIGNED(4) = INCBIN_U8("data/map_bg/W06.bpl");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW06c[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W06c.bpc.lz");
#endif
#ifndef SKY_STORY /* Red's story: not in the sky build */
const u8 gFileW06m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/W06m.bma.lz");
#endif
