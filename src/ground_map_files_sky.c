#include "global.h"
#include "globaldata.h"

/*
 * Explorers of Sky demake: ground maps converted from the EoS ROM with
 * tools/convert_eos_ground_map.py. BPCs stay raw so large maps stream tiles
 * from ROM; BMAs are GMLZ like the other ground maps.
 */
#ifdef SKY_STORY
/* EoS d01p11a: beach by day (streamed) */
const u8 gFileED0111A[] ALIGNED(4) = INCBIN_U8("data/map_bg/ED0111A.bpl");
const u8 gFileED0111Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/ED0111Ac.bpc");
const u8 gFileED0111Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/ED0111Am.bma.lz");
/* EoS d01p11b: beach at sunset (streamed) */
const u8 gFileED0111B[] ALIGNED(4) = INCBIN_U8("data/map_bg/ED0111B.bpl");
const u8 gFileED0111Bc[] ALIGNED(4) = INCBIN_U8("data/map_bg/ED0111Bc.bpc");
const u8 gFileED0111Bm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/ED0111Bm.bma.lz");
/* EoS d01p41a: Beach Cave Pit (streamed) */
const u8 gFileED0141A[] ALIGNED(4) = INCBIN_U8("data/map_bg/ED0141A.bpl");
const u8 gFileED0141Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/ED0141Ac.bpc");
const u8 gFileED0141Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/ED0141Am.bma.lz");
/* EoS g01p01b: Wigglytuff's Guild at dusk */
const u8 gFileEG0101B[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0101B.bpl");
const u8 gFileEG0101Bc[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0101Bc.bpc");
const u8 gFileEG0101Bm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0101Bm.bma.lz");
/* torches (BPA tile animation) */
const u8 gFileEG0101B1[] ALIGNED(4) = INCBIN_U8("data/map_bg_anim/EG0101B1.bpa");
/* EoS v01p01a: storm at sea */
const u8 gFileEV0101A[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0101A.bpl");
const u8 gFileEV0101Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0101Ac.bpc");
const u8 gFileEV0101Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EV0101Am.bma.lz");
/* waves (BPA tile animation) */
const u8 gFileEV0101A1[] ALIGNED(4) = INCBIN_U8("data/map_bg_anim/EV0101A1.bpa");
/* EoS v01p04b: Krabby bubbles (streamed) */
const u8 gFileEV0104B[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0104B.bpl");
const u8 gFileEV0104Bc[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0104Bc.bpc");
const u8 gFileEV0104Bm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EV0104Bm.bma.lz");
/* EoS v01p05b: Krabby at sunset (streamed) */
const u8 gFileEV0105B[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0105B.bpl");
const u8 gFileEV0105Bc[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0105Bc.bpc");
const u8 gFileEV0105Bm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EV0105Bm.bma.lz");
/* EoS v01p07b: the stormy sea before the cliff (sky, waves, clouds;
 * tools/make_sky_storm_waves_map.py; waves animation: EV0101A1) */
const u8 gFileEV0107B[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0107B.bpl");
const u8 gFileEV0107Bc[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0107Bc.bpc");
const u8 gFileEV0107Bm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EV0107Bm.bma.lz");
#endif
