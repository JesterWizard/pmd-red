/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownG;
const SiroArchive gAxUnownG = {"SIRO", &sAxMainUnownG};

static const ax_pose sUnownGPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose42[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose43[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose44[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose45[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose46[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose47[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose48[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownGPose49[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownGGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_1.4bpp.lz");
static const ax_sprite sUnownGSprites1[] = {
	{sUnownGGfx1, ARRAY_COUNT(sUnownGGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_2.4bpp.lz");
static const ax_sprite sUnownGSprites2[] = {
	{sUnownGGfx2, ARRAY_COUNT(sUnownGGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_3.4bpp.lz");
static const ax_sprite sUnownGSprites3[] = {
	{sUnownGGfx3, ARRAY_COUNT(sUnownGGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_4.4bpp.lz");
static const ax_sprite sUnownGSprites4[] = {
	{sUnownGGfx4, ARRAY_COUNT(sUnownGGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_5.4bpp.lz");
static const ax_sprite sUnownGSprites5[] = {
	{sUnownGGfx5, ARRAY_COUNT(sUnownGGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_6.4bpp.lz");
static const ax_sprite sUnownGSprites6[] = {
	{sUnownGGfx6, ARRAY_COUNT(sUnownGGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_7.4bpp.lz");
static const ax_sprite sUnownGSprites7[] = {
	{sUnownGGfx7, ARRAY_COUNT(sUnownGGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_8.4bpp.lz");
static const ax_sprite sUnownGSprites8[] = {
	{sUnownGGfx8, ARRAY_COUNT(sUnownGGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_9.4bpp.lz");
static const ax_sprite sUnownGSprites9[] = {
	{sUnownGGfx9, ARRAY_COUNT(sUnownGGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_10.4bpp.lz");
static const ax_sprite sUnownGSprites10[] = {
	{sUnownGGfx10, ARRAY_COUNT(sUnownGGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_11.4bpp.lz");
static const ax_sprite sUnownGSprites11[] = {
	{sUnownGGfx11, ARRAY_COUNT(sUnownGGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_12.4bpp.lz");
static const ax_sprite sUnownGSprites12[] = {
	{sUnownGGfx12, ARRAY_COUNT(sUnownGGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_13.4bpp.lz");
static const ax_sprite sUnownGSprites13[] = {
	{sUnownGGfx13, ARRAY_COUNT(sUnownGGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_14.4bpp.lz");
static const ax_sprite sUnownGSprites14[] = {
	{sUnownGGfx14, ARRAY_COUNT(sUnownGGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_15.4bpp.lz");
static const ax_sprite sUnownGSprites15[] = {
	{sUnownGGfx15, ARRAY_COUNT(sUnownGGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_16.4bpp.lz");
static const ax_sprite sUnownGSprites16[] = {
	{sUnownGGfx16, ARRAY_COUNT(sUnownGGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownGGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowng/sprite_17.4bpp.lz");
static const ax_sprite sUnownGSprites17[] = {
	{sUnownGGfx17, ARRAY_COUNT(sUnownGGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownG[] = {
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
	sUnownGPose41,
	sUnownGPose42,
	sUnownGPose43,
	sUnownGPose44,
	sUnownGPose45,
	sUnownGPose46,
	sUnownGPose47,
	sUnownGPose48,
	sUnownGPose49,
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
	sUnownGPose1,
	sUnownGPose2,
	sUnownGPose3,
	sUnownGPose4,
	sUnownGPose5,
	sUnownGPose6,
	sUnownGPose7,
	sUnownGPose8,
};

static const struct PositionSets sAxPositionsUnownG[] = {
	[0] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[1] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[2] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[3] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[4] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[5] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[6] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[7] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
	[8] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[9] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[10] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[11] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[12] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[13] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[14] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[15] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
	[16] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[17] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[18] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[19] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[20] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[21] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[22] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[23] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
	[24] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[25] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[26] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[27] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[28] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[29] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[30] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[31] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
	[32] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[33] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[34] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[35] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[36] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[37] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[38] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[39] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
	[40] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -10} } },
	[41] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[42] = { .set = { {1, -14}, {-2, -7}, {2, -5}, {-1, -10} } },
	[43] = { .set = { {1, -14}, {0, -6}, {1, -4}, {0, -11} } },
	[44] = { .set = { {0, -14}, {1, -7}, {-2, -5}, {-1, -10} } },
	[45] = { .set = { {-1, -12}, {2, -6}, {-3, -4}, {-1, -10} } },
	[46] = { .set = { {-2, -14}, {0, -7}, {-2, -4}, {0, -10} } },
	[47] = { .set = { {-4, -14}, {-4, -7}, {-2, -4}, {-3, -10} } },
	[48] = { .set = { {-3, -14}, {-3, -7}, {-1, -4}, {-1, -10} } },
	[49] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[50] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[51] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[52] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[53] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[54] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[55] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[56] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
	[57] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[58] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[59] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[60] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[61] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[62] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[63] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[64] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
	[65] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[66] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[67] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[68] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[69] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[70] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[71] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[72] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
	[73] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[74] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[75] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[76] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[77] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[78] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[79] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[80] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
	[81] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[82] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[83] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[84] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[85] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[86] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[87] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[88] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
	[89] = { .set = { {-1, -13}, {-4, -7}, {1, -5}, {-1, -11} } },
	[90] = { .set = { {1, -13}, {-3, -7}, {1, -5}, {0, -10} } },
	[91] = { .set = { {1, -13}, {-1, -6}, {0, -4}, {0, -11} } },
	[92] = { .set = { {0, -14}, {1, -7}, {-3, -5}, {-1, -10} } },
	[93] = { .set = { {-1, -13}, {2, -7}, {-3, -5}, {-1, -11} } },
	[94] = { .set = { {-2, -14}, {1, -7}, {-2, -4}, {-1, -10} } },
	[95] = { .set = { {-4, -13}, {-3, -8}, {-1, -4}, {-3, -10} } },
	[96] = { .set = { {-3, -13}, {-3, -7}, {0, -4}, {-2, -10} } },
};

static const ax_anim *const sUnownGAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownGAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownGAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownGAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownGAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownGAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownGAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownGAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownGAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownGAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownGAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownGAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownGAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownG[] = {
	sUnownGAnimTable1,
	sUnownGAnimTable2,
	sUnownGAnimTable3,
	sUnownGAnimTable4,
	sUnownGAnimTable5,
	sUnownGAnimTable6,
	sUnownGAnimTable7,
	sUnownGAnimTable8,
	sUnownGAnimTable9,
	sUnownGAnimTable10,
	sUnownGAnimTable11,
	sUnownGAnimTable12,
	sUnownGAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownG[] = {
	sUnownGSprites1,
	sUnownGSprites2,
	sUnownGSprites3,
	sUnownGSprites4,
	sUnownGSprites5,
	sUnownGSprites6,
	sUnownGSprites7,
	sUnownGSprites8,
	sUnownGSprites9,
	sUnownGSprites10,
	sUnownGSprites11,
	sUnownGSprites12,
	sUnownGSprites13,
	sUnownGSprites14,
	sUnownGSprites15,
	sUnownGSprites16,
	sUnownGSprites17,
};

static const axmain sAxMainUnownG = {
	.poses = sAxPosesUnownG,
	.animations = sAxAnimationsUnownG,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownG),
	.spriteData = sAxSpritesUnownG,
	.positions = sAxPositionsUnownG,
};
