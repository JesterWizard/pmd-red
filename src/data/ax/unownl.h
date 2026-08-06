/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownL;
const SiroArchive gAxUnownL = {"SIRO", &sAxMainUnownL};

static const ax_pose sUnownLPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose42[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose43[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose44[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose45[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose46[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose47[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose48[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownLPose49[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownLGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_1.4bpp.lz");
static const ax_sprite sUnownLSprites1[] = {
	{sUnownLGfx1, ARRAY_COUNT(sUnownLGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_2.4bpp.lz");
static const ax_sprite sUnownLSprites2[] = {
	{sUnownLGfx2, ARRAY_COUNT(sUnownLGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_3.4bpp.lz");
static const ax_sprite sUnownLSprites3[] = {
	{sUnownLGfx3, ARRAY_COUNT(sUnownLGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_4.4bpp.lz");
static const ax_sprite sUnownLSprites4[] = {
	{sUnownLGfx4, ARRAY_COUNT(sUnownLGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_5.4bpp.lz");
static const ax_sprite sUnownLSprites5[] = {
	{sUnownLGfx5, ARRAY_COUNT(sUnownLGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_6.4bpp.lz");
static const ax_sprite sUnownLSprites6[] = {
	{sUnownLGfx6, ARRAY_COUNT(sUnownLGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_7.4bpp.lz");
static const ax_sprite sUnownLSprites7[] = {
	{sUnownLGfx7, ARRAY_COUNT(sUnownLGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_8.4bpp.lz");
static const ax_sprite sUnownLSprites8[] = {
	{sUnownLGfx8, ARRAY_COUNT(sUnownLGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_9.4bpp.lz");
static const ax_sprite sUnownLSprites9[] = {
	{sUnownLGfx9, ARRAY_COUNT(sUnownLGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_10.4bpp.lz");
static const ax_sprite sUnownLSprites10[] = {
	{sUnownLGfx10, ARRAY_COUNT(sUnownLGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_11.4bpp.lz");
static const ax_sprite sUnownLSprites11[] = {
	{sUnownLGfx11, ARRAY_COUNT(sUnownLGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_12.4bpp.lz");
static const ax_sprite sUnownLSprites12[] = {
	{sUnownLGfx12, ARRAY_COUNT(sUnownLGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_13.4bpp.lz");
static const ax_sprite sUnownLSprites13[] = {
	{sUnownLGfx13, ARRAY_COUNT(sUnownLGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_14.4bpp.lz");
static const ax_sprite sUnownLSprites14[] = {
	{sUnownLGfx14, ARRAY_COUNT(sUnownLGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_15.4bpp.lz");
static const ax_sprite sUnownLSprites15[] = {
	{sUnownLGfx15, ARRAY_COUNT(sUnownLGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_16.4bpp.lz");
static const ax_sprite sUnownLSprites16[] = {
	{sUnownLGfx16, ARRAY_COUNT(sUnownLGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownLGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownl/sprite_17.4bpp.lz");
static const ax_sprite sUnownLSprites17[] = {
	{sUnownLGfx17, ARRAY_COUNT(sUnownLGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownL[] = {
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
	sUnownLPose41,
	sUnownLPose42,
	sUnownLPose43,
	sUnownLPose44,
	sUnownLPose45,
	sUnownLPose46,
	sUnownLPose47,
	sUnownLPose48,
	sUnownLPose49,
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
	sUnownLPose1,
	sUnownLPose2,
	sUnownLPose3,
	sUnownLPose4,
	sUnownLPose5,
	sUnownLPose6,
	sUnownLPose7,
	sUnownLPose8,
};

static const struct PositionSets sAxPositionsUnownL[] = {
	[0] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[1] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[2] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[3] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[4] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[5] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[6] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[7] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
	[8] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[9] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[10] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[11] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[12] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[13] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[14] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[15] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
	[16] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[17] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[18] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[19] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[20] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[21] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[22] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[23] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
	[24] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[25] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[26] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[27] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[28] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[29] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[30] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[31] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
	[32] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[33] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[34] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[35] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[36] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[37] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[38] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[39] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
	[40] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[41] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[42] = { .set = { {-1, -15}, {-6, -17}, {3, -7}, {-2, -10} } },
	[43] = { .set = { {0, -15}, {-5, -16}, {2, -8}, {-1, -10} } },
	[44] = { .set = { {-1, -15}, {2, -17}, {-3, -7}, {-1, -9} } },
	[45] = { .set = { {-1, -14}, {4, -17}, {-5, -6}, {-1, -10} } },
	[46] = { .set = { {-1, -15}, {3, -19}, {-6, -4}, {-1, -10} } },
	[47] = { .set = { {-2, -15}, {0, -19}, {0, -3}, {-1, -10} } },
	[48] = { .set = { {-1, -15}, {-3, -19}, {2, -4}, {0, -10} } },
	[49] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[50] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[51] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[52] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[53] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[54] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[55] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[56] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
	[57] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[58] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[59] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[60] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[61] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[62] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[63] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[64] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
	[65] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[66] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[67] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[68] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[69] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[70] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[71] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[72] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
	[73] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[74] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[75] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[76] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[77] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[78] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[79] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[80] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
	[81] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[82] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[83] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[84] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[85] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[86] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[87] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[88] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
	[89] = { .set = { {-1, -14}, {-6, -18}, {3, -5}, {-1, -11} } },
	[90] = { .set = { {0, -14}, {-5, -17}, {3, -7}, {-1, -10} } },
	[91] = { .set = { {1, -14}, {-4, -16}, {1, -7}, {-1, -9} } },
	[92] = { .set = { {1, -15}, {3, -17}, {-4, -7}, {-1, -10} } },
	[93] = { .set = { {-1, -15}, {4, -18}, {-5, -5}, {-1, -10} } },
	[94] = { .set = { {-2, -15}, {2, -19}, {-5, -4}, {-1, -9} } },
	[95] = { .set = { {-3, -14}, {-1, -19}, {1, -3}, {-1, -9} } },
	[96] = { .set = { {-2, -14}, {-4, -19}, {3, -4}, {-1, -10} } },
};

static const ax_anim *const sUnownLAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02475),
	AX_ANIM_PTR(gAxSharedAnim_02478),
	AX_ANIM_PTR(gAxSharedAnim_02528),
	AX_ANIM_PTR(gAxSharedAnim_02540),
	AX_ANIM_PTR(gAxSharedAnim_02543),
	AX_ANIM_PTR(gAxSharedAnim_02544),
	AX_ANIM_PTR(gAxSharedAnim_02549),
	AX_ANIM_PTR(gAxSharedAnim_02552),
};

static const ax_anim *const sUnownLAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_02144),
	AX_ANIM_PTR(gAxSharedAnim_02232),
	AX_ANIM_PTR(gAxSharedAnim_00150),
	AX_ANIM_PTR(gAxSharedAnim_00226),
	AX_ANIM_PTR(gAxSharedAnim_00317),
	AX_ANIM_PTR(gAxSharedAnim_00394),
	AX_ANIM_PTR(gAxSharedAnim_00486),
	AX_ANIM_PTR(gAxSharedAnim_00569),
};

static const ax_anim *const sUnownLAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_00666),
	AX_ANIM_PTR(gAxSharedAnim_00787),
	AX_ANIM_PTR(gAxSharedAnim_00922),
	AX_ANIM_PTR(gAxSharedAnim_01066),
	AX_ANIM_PTR(gAxSharedAnim_01207),
	AX_ANIM_PTR(gAxSharedAnim_01330),
	AX_ANIM_PTR(gAxSharedAnim_01431),
	AX_ANIM_PTR(gAxSharedAnim_01492),
};

static const ax_anim *const sUnownLAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_01573),
	AX_ANIM_PTR(gAxSharedAnim_01633),
	AX_ANIM_PTR(gAxSharedAnim_01684),
	AX_ANIM_PTR(gAxSharedAnim_01726),
	AX_ANIM_PTR(gAxSharedAnim_01763),
	AX_ANIM_PTR(gAxSharedAnim_01794),
	AX_ANIM_PTR(gAxSharedAnim_01821),
	AX_ANIM_PTR(gAxSharedAnim_01824),
};

static const ax_anim *const sUnownLAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_01840),
	AX_ANIM_PTR(gAxSharedAnim_01855),
	AX_ANIM_PTR(gAxSharedAnim_01869),
	AX_ANIM_PTR(gAxSharedAnim_01880),
	AX_ANIM_PTR(gAxSharedAnim_01886),
	AX_ANIM_PTR(gAxSharedAnim_01895),
	AX_ANIM_PTR(gAxSharedAnim_01900),
	AX_ANIM_PTR(gAxSharedAnim_01903),
};

static const ax_anim *const sUnownLAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
};

static const ax_anim *const sUnownLAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_01921),
	AX_ANIM_PTR(gAxSharedAnim_01924),
	AX_ANIM_PTR(gAxSharedAnim_01935),
	AX_ANIM_PTR(gAxSharedAnim_01937),
	AX_ANIM_PTR(gAxSharedAnim_01947),
	AX_ANIM_PTR(gAxSharedAnim_01957),
	AX_ANIM_PTR(gAxSharedAnim_01960),
	AX_ANIM_PTR(gAxSharedAnim_01975),
};

static const ax_anim *const sUnownLAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02320),
	AX_ANIM_PTR(gAxSharedAnim_02321),
	AX_ANIM_PTR(gAxSharedAnim_02322),
	AX_ANIM_PTR(gAxSharedAnim_02323),
	AX_ANIM_PTR(gAxSharedAnim_02324),
	AX_ANIM_PTR(gAxSharedAnim_02325),
	AX_ANIM_PTR(gAxSharedAnim_02326),
	AX_ANIM_PTR(gAxSharedAnim_02327),
};

static const ax_anim *const sUnownLAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_02011),
	AX_ANIM_PTR(gAxSharedAnim_02016),
	AX_ANIM_PTR(gAxSharedAnim_02019),
	AX_ANIM_PTR(gAxSharedAnim_02025),
	AX_ANIM_PTR(gAxSharedAnim_02032),
	AX_ANIM_PTR(gAxSharedAnim_02037),
	AX_ANIM_PTR(gAxSharedAnim_02040),
	AX_ANIM_PTR(gAxSharedAnim_02051),
};

static const ax_anim *const sUnownLAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_02055),
	AX_ANIM_PTR(gAxSharedAnim_02059),
	AX_ANIM_PTR(gAxSharedAnim_02066),
	AX_ANIM_PTR(gAxSharedAnim_02072),
	AX_ANIM_PTR(gAxSharedAnim_02073),
	AX_ANIM_PTR(gAxSharedAnim_02078),
	AX_ANIM_PTR(gAxSharedAnim_02082),
	AX_ANIM_PTR(gAxSharedAnim_02085),
};

static const ax_anim *const sUnownLAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_02098),
	AX_ANIM_PTR(gAxSharedAnim_02104),
	AX_ANIM_PTR(gAxSharedAnim_02108),
	AX_ANIM_PTR(gAxSharedAnim_02118),
	AX_ANIM_PTR(gAxSharedAnim_02125),
	AX_ANIM_PTR(gAxSharedAnim_02131),
	AX_ANIM_PTR(gAxSharedAnim_02139),
	AX_ANIM_PTR(gAxSharedAnim_02145),
};

static const ax_anim *const sUnownLAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_02158),
	AX_ANIM_PTR(gAxSharedAnim_02167),
	AX_ANIM_PTR(gAxSharedAnim_02169),
	AX_ANIM_PTR(gAxSharedAnim_02174),
	AX_ANIM_PTR(gAxSharedAnim_02196),
	AX_ANIM_PTR(gAxSharedAnim_02202),
	AX_ANIM_PTR(gAxSharedAnim_02205),
	AX_ANIM_PTR(gAxSharedAnim_02214),
};

static const ax_anim *const sUnownLAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_02230),
	AX_ANIM_PTR(gAxSharedAnim_02240),
	AX_ANIM_PTR(gAxSharedAnim_02247),
	AX_ANIM_PTR(gAxSharedAnim_02259),
	AX_ANIM_PTR(gAxSharedAnim_02269),
	AX_ANIM_PTR(gAxSharedAnim_02276),
	AX_ANIM_PTR(gAxSharedAnim_02286),
	AX_ANIM_PTR(gAxSharedAnim_02291),
};

static const ax_anim *const *const sAxAnimationsUnownL[] = {
	sUnownLAnimTable1,
	sUnownLAnimTable2,
	sUnownLAnimTable3,
	sUnownLAnimTable4,
	sUnownLAnimTable5,
	sUnownLAnimTable6,
	sUnownLAnimTable7,
	sUnownLAnimTable8,
	sUnownLAnimTable9,
	sUnownLAnimTable10,
	sUnownLAnimTable11,
	sUnownLAnimTable12,
	sUnownLAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownL[] = {
	sUnownLSprites1,
	sUnownLSprites2,
	sUnownLSprites3,
	sUnownLSprites4,
	sUnownLSprites5,
	sUnownLSprites6,
	sUnownLSprites7,
	sUnownLSprites8,
	sUnownLSprites9,
	sUnownLSprites10,
	sUnownLSprites11,
	sUnownLSprites12,
	sUnownLSprites13,
	sUnownLSprites14,
	sUnownLSprites15,
	sUnownLSprites16,
	sUnownLSprites17,
};

static const axmain sAxMainUnownL = {
	.poses = sAxPosesUnownL,
	.animations = sAxAnimationsUnownL,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownL),
	.spriteData = sAxSpritesUnownL,
	.positions = sAxPositionsUnownL,
};
