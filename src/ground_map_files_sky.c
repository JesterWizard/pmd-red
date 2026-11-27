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
/* EoS d02p11a: Drenched Bluff entrance (streamed) */
const u8 gFileED0211A[] ALIGNED(4) = INCBIN_U8("data/map_bg/ED0211A.bpl");
const u8 gFileED0211Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/ED0211Ac.bpc");
const u8 gFileED0211Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/ED0211Am.bma.lz");
/* EoS d02p31a: Drenched Bluff's end (streamed; its BPA's frame 0 baked) */
const u8 gFileED0231A[] ALIGNED(4) = INCBIN_U8("data/map_bg/ED0231A.bpl");
const u8 gFileED0231Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/ED0231Ac.bpc");
const u8 gFileED0231Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/ED0231Am.bma.lz");
/* EoS g01p01b: Wigglytuff's Guild, gate open. g01p01b2 (gate closed, at
 * dusk) is EoS's second BMA over the same BPC, BPL and BPA: EG0101B2m */
const u8 gFileEG0101B[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0101B.bpl");
const u8 gFileEG0101Bc[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0101Bc.bpc");
const u8 gFileEG0101Bm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0101Bm.bma.lz");
const u8 gFileEG0101B2m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0101B2m.bma.lz");
/* torches (BPA tile animation) */
const u8 gFileEG0101B1[] ALIGNED(4) = INCBIN_U8("data/map_bg_anim/EG0101B1.bpa");
/* EoS g01p02a: the guild's 1F */
const u8 gFileEG0102A[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0102A.bpl");
const u8 gFileEG0102Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0102Ac.bpc");
const u8 gFileEG0102Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0102Am.bma.lz");
/* EoS g01p03a: the guild's B1F, the bulletin boards (streamed) */
const u8 gFileEG0103A[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0103A.bpl");
const u8 gFileEG0103Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0103Ac.bpc");
const u8 gFileEG0103Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0103Am.bma.lz");
/* EoS g01p04a: the guild's B2F (streamed). g01p04a2 is EoS's second BMA
 * over the same BPC and BPL: EG0104A2m */
const u8 gFileEG0104A[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0104A.bpl");
const u8 gFileEG0104Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0104Ac.bpc");
const u8 gFileEG0104Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0104Am.bma.lz");
const u8 gFileEG0104A2m[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0104A2m.bma.lz");
/* EoS g01p04c: the guild's B2F at night (streamed) */
const u8 gFileEG0104C[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0104C.bpl");
const u8 gFileEG0104Cc[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0104Cc.bpc");
const u8 gFileEG0104Cm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0104Cm.bma.lz");
/* EoS g01p05a: Wigglytuff's room */
const u8 gFileEG0105A[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0105A.bpl");
const u8 gFileEG0105Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0105Ac.bpc");
const u8 gFileEG0105Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0105Am.bma.lz");
/* BPA tile animation */
const u8 gFileEG0105A1[] ALIGNED(4) = INCBIN_U8("data/map_bg_anim/EG0105A1.bpa");
/* EoS g01p05c: Wigglytuff's room at night */
const u8 gFileEG0105C[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0105C.bpl");
const u8 gFileEG0105Cc[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0105Cc.bpc");
const u8 gFileEG0105Cm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0105Cm.bma.lz");
/* BPA tile animation */
const u8 gFileEG0105C1[] ALIGNED(4) = INCBIN_U8("data/map_bg_anim/EG0105C1.bpa");
/* EoS g01p06b: the mess hall (streamed; its BPA's frame 0 baked) */
const u8 gFileEG0106B[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0106B.bpl");
const u8 gFileEG0106Bc[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0106Bc.bpc");
const u8 gFileEG0106Bm[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0106Bm.bma.lz");
/* EoS g01p07a: the crew room. g01p07c (night) has EoS's same BPC and BMA
 * and its own BPL (palette animation): EG0107C */
const u8 gFileEG0107A[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0107A.bpl");
const u8 gFileEG0107Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0107Ac.bpc");
const u8 gFileEG0107Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EG0107Am.bma.lz");
const u8 gFileEG0107C[] ALIGNED(4) = INCBIN_U8("data/map_bg/EG0107C.bpl");
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
/* v02p03a: the sentry post under the grate (m02a0104), streamed */
const u8 gFileEV0203A[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0203A.bpl");
const u8 gFileEV0203Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0203Ac.bpc");
const u8 gFileEV0203Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EV0203Am.bma.lz");
/* v02p08a: the Exploration Team Kit, opened (m02a0110) */
const u8 gFileEV0208A[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0208A.bpl");
const u8 gFileEV0208Ac[] ALIGNED(4) = INCBIN_U8("data/map_bg/EV0208Ac.bpc");
const u8 gFileEV0208Am[] ALIGNED(4) = INCBIN_U8("data/map_bg_lz/EV0208Am.bma.lz");
#endif
