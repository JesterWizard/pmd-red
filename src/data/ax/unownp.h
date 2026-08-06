/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownP;
const SiroArchive gAxUnownP = {"SIRO", &sAxMainUnownP};

static const ax_pose sUnownPPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose42[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose43[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose44[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose45[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose46[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose47[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose48[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownPPose49[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownPGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_1.4bpp.lz");
static const ax_sprite sUnownPSprites1[] = {
	{sUnownPGfx1, ARRAY_COUNT(sUnownPGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_2.4bpp.lz");
static const ax_sprite sUnownPSprites2[] = {
	{sUnownPGfx2, ARRAY_COUNT(sUnownPGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_3.4bpp.lz");
static const ax_sprite sUnownPSprites3[] = {
	{sUnownPGfx3, ARRAY_COUNT(sUnownPGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_4.4bpp.lz");
static const ax_sprite sUnownPSprites4[] = {
	{sUnownPGfx4, ARRAY_COUNT(sUnownPGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_5.4bpp.lz");
static const ax_sprite sUnownPSprites5[] = {
	{sUnownPGfx5, ARRAY_COUNT(sUnownPGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_6.4bpp.lz");
static const ax_sprite sUnownPSprites6[] = {
	{sUnownPGfx6, ARRAY_COUNT(sUnownPGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_7.4bpp.lz");
static const ax_sprite sUnownPSprites7[] = {
	{sUnownPGfx7, ARRAY_COUNT(sUnownPGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_8.4bpp.lz");
static const ax_sprite sUnownPSprites8[] = {
	{sUnownPGfx8, ARRAY_COUNT(sUnownPGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_9.4bpp.lz");
static const ax_sprite sUnownPSprites9[] = {
	{sUnownPGfx9, ARRAY_COUNT(sUnownPGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_10.4bpp.lz");
static const ax_sprite sUnownPSprites10[] = {
	{sUnownPGfx10, ARRAY_COUNT(sUnownPGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_11.4bpp.lz");
static const ax_sprite sUnownPSprites11[] = {
	{sUnownPGfx11, ARRAY_COUNT(sUnownPGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_12.4bpp.lz");
static const ax_sprite sUnownPSprites12[] = {
	{sUnownPGfx12, ARRAY_COUNT(sUnownPGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_13.4bpp.lz");
static const ax_sprite sUnownPSprites13[] = {
	{sUnownPGfx13, ARRAY_COUNT(sUnownPGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_14.4bpp.lz");
static const ax_sprite sUnownPSprites14[] = {
	{sUnownPGfx14, ARRAY_COUNT(sUnownPGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_15.4bpp.lz");
static const ax_sprite sUnownPSprites15[] = {
	{sUnownPGfx15, ARRAY_COUNT(sUnownPGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_16.4bpp.lz");
static const ax_sprite sUnownPSprites16[] = {
	{sUnownPGfx16, ARRAY_COUNT(sUnownPGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownPGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownp/sprite_17.4bpp.lz");
static const ax_sprite sUnownPSprites17[] = {
	{sUnownPGfx17, ARRAY_COUNT(sUnownPGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownP[] = {
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
	sUnownPPose41,
	sUnownPPose42,
	sUnownPPose43,
	sUnownPPose44,
	sUnownPPose45,
	sUnownPPose46,
	sUnownPPose47,
	sUnownPPose48,
	sUnownPPose49,
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
	sUnownPPose1,
	sUnownPPose2,
	sUnownPPose3,
	sUnownPPose4,
	sUnownPPose5,
	sUnownPPose6,
	sUnownPPose7,
	sUnownPPose8,
};

static const struct PositionSets sAxPositionsUnownP[] = {
	[0] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[1] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[2] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[3] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[4] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[5] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[6] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[7] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
	[8] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[9] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[10] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[11] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[12] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[13] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[14] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[15] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
	[16] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[17] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[18] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[19] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[20] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[21] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[22] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[23] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
	[24] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[25] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[26] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[27] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[28] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[29] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[30] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[31] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
	[32] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[33] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[34] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[35] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[36] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[37] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[38] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[39] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
	[40] = { .set = { {0, -14}, {-5, -18}, {-3, -6}, {1, -13} } },
	[41] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[42] = { .set = { {-1, -14}, {-7, -17}, {0, -5}, {-2, -12} } },
	[43] = { .set = { {0, -15}, {-5, -16}, {0, -5}, {-1, -11} } },
	[44] = { .set = { {0, -15}, {2, -17}, {0, -6}, {-2, -12} } },
	[45] = { .set = { {-1, -15}, {4, -17}, {2, -7}, {0, -13} } },
	[46] = { .set = { {-1, -15}, {3, -19}, {0, -7}, {1, -13} } },
	[47] = { .set = { {-2, -15}, {1, -19}, {-2, -7}, {0, -13} } },
	[48] = { .set = { {-1, -14}, {-3, -18}, {-4, -7}, {-1, -12} } },
	[49] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[50] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[51] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[52] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[53] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[54] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[55] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[56] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
	[57] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[58] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[59] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[60] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[61] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[62] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[63] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[64] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
	[65] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[66] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[67] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[68] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[69] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[70] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[71] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[72] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
	[73] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[74] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[75] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[76] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[77] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[78] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[79] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[80] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
	[81] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[82] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[83] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[84] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[85] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[86] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[87] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[88] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
	[89] = { .set = { {-1, -14}, {-6, -18}, {-4, -6}, {-1, -13} } },
	[90] = { .set = { {0, -14}, {-5, -17}, {-3, -5}, {-1, -13} } },
	[91] = { .set = { {1, -14}, {-4, -16}, {-1, -5}, {-1, -13} } },
	[92] = { .set = { {0, -15}, {3, -17}, {0, -5}, {0, -13} } },
	[93] = { .set = { {-1, -16}, {4, -18}, {2, -6}, {0, -13} } },
	[94] = { .set = { {-1, -15}, {2, -19}, {1, -7}, {0, -13} } },
	[95] = { .set = { {-3, -14}, {-1, -19}, {-1, -7}, {-1, -12} } },
	[96] = { .set = { {-2, -14}, {-4, -19}, {-3, -7}, {-2, -12} } },
};

static const ax_anim *const sUnownPAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownPAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownPAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownPAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownPAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownPAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownPAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownPAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownPAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownPAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownPAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownPAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownPAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownP[] = {
	sUnownPAnimTable1,
	sUnownPAnimTable2,
	sUnownPAnimTable3,
	sUnownPAnimTable4,
	sUnownPAnimTable5,
	sUnownPAnimTable6,
	sUnownPAnimTable7,
	sUnownPAnimTable8,
	sUnownPAnimTable9,
	sUnownPAnimTable10,
	sUnownPAnimTable11,
	sUnownPAnimTable12,
	sUnownPAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownP[] = {
	sUnownPSprites1,
	sUnownPSprites2,
	sUnownPSprites3,
	sUnownPSprites4,
	sUnownPSprites5,
	sUnownPSprites6,
	sUnownPSprites7,
	sUnownPSprites8,
	sUnownPSprites9,
	sUnownPSprites10,
	sUnownPSprites11,
	sUnownPSprites12,
	sUnownPSprites13,
	sUnownPSprites14,
	sUnownPSprites15,
	sUnownPSprites16,
	sUnownPSprites17,
};

static const axmain sAxMainUnownP = {
	.poses = sAxPosesUnownP,
	.animations = sAxAnimationsUnownP,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownP),
	.spriteData = sAxSpritesUnownP,
	.positions = sAxPositionsUnownP,
};
