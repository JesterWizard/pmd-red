/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownQ;
const SiroArchive gAxUnownQ = {"SIRO", &sAxMainUnownQ};

static const ax_pose sUnownQPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose42[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose43[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose44[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose45[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose46[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose47[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose48[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownQPose49[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownQGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_1.4bpp.lz");
static const ax_sprite sUnownQSprites1[] = {
	{sUnownQGfx1, ARRAY_COUNT(sUnownQGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_2.4bpp.lz");
static const ax_sprite sUnownQSprites2[] = {
	{sUnownQGfx2, ARRAY_COUNT(sUnownQGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_3.4bpp.lz");
static const ax_sprite sUnownQSprites3[] = {
	{sUnownQGfx3, ARRAY_COUNT(sUnownQGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_4.4bpp.lz");
static const ax_sprite sUnownQSprites4[] = {
	{sUnownQGfx4, ARRAY_COUNT(sUnownQGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_5.4bpp.lz");
static const ax_sprite sUnownQSprites5[] = {
	{sUnownQGfx5, ARRAY_COUNT(sUnownQGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_6.4bpp.lz");
static const ax_sprite sUnownQSprites6[] = {
	{sUnownQGfx6, ARRAY_COUNT(sUnownQGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_7.4bpp.lz");
static const ax_sprite sUnownQSprites7[] = {
	{sUnownQGfx7, ARRAY_COUNT(sUnownQGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_8.4bpp.lz");
static const ax_sprite sUnownQSprites8[] = {
	{sUnownQGfx8, ARRAY_COUNT(sUnownQGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_9.4bpp.lz");
static const ax_sprite sUnownQSprites9[] = {
	{sUnownQGfx9, ARRAY_COUNT(sUnownQGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_10.4bpp.lz");
static const ax_sprite sUnownQSprites10[] = {
	{sUnownQGfx10, ARRAY_COUNT(sUnownQGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_11.4bpp.lz");
static const ax_sprite sUnownQSprites11[] = {
	{sUnownQGfx11, ARRAY_COUNT(sUnownQGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_12.4bpp.lz");
static const ax_sprite sUnownQSprites12[] = {
	{sUnownQGfx12, ARRAY_COUNT(sUnownQGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_13.4bpp.lz");
static const ax_sprite sUnownQSprites13[] = {
	{sUnownQGfx13, ARRAY_COUNT(sUnownQGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_14.4bpp.lz");
static const ax_sprite sUnownQSprites14[] = {
	{sUnownQGfx14, ARRAY_COUNT(sUnownQGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_15.4bpp.lz");
static const ax_sprite sUnownQSprites15[] = {
	{sUnownQGfx15, ARRAY_COUNT(sUnownQGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_16.4bpp.lz");
static const ax_sprite sUnownQSprites16[] = {
	{sUnownQGfx16, ARRAY_COUNT(sUnownQGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownQGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownq/sprite_17.4bpp.lz");
static const ax_sprite sUnownQSprites17[] = {
	{sUnownQGfx17, ARRAY_COUNT(sUnownQGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownQ[] = {
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
	sUnownQPose41,
	sUnownQPose42,
	sUnownQPose43,
	sUnownQPose44,
	sUnownQPose45,
	sUnownQPose46,
	sUnownQPose47,
	sUnownQPose48,
	sUnownQPose49,
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
	sUnownQPose1,
	sUnownQPose2,
	sUnownQPose3,
	sUnownQPose4,
	sUnownQPose5,
	sUnownQPose6,
	sUnownQPose7,
	sUnownQPose8,
};

static const struct PositionSets sAxPositionsUnownQ[] = {
	[0] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[1] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[2] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[3] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[4] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[5] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[6] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[7] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
	[8] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[9] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[10] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[11] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[12] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[13] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[14] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[15] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
	[16] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[17] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[18] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[19] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[20] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[21] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[22] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[23] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
	[24] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[25] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[26] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[27] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[28] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[29] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[30] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[31] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
	[32] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[33] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[34] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[35] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[36] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[37] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[38] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[39] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
	[40] = { .set = { {-2, -13}, {-5, -13}, {4, -8}, {-1, -11} } },
	[41] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[42] = { .set = { {0, -14}, {-2, -12}, {3, -7}, {1, -10} } },
	[43] = { .set = { {1, -14}, {-2, -12}, {1, -7}, {0, -10} } },
	[44] = { .set = { {1, -14}, {1, -12}, {-2, -7}, {-1, -10} } },
	[45] = { .set = { {-1, -14}, {2, -12}, {-6, -6}, {-2, -11} } },
	[46] = { .set = { {-1, -14}, {1, -12}, {-5, -6}, {-1, -11} } },
	[47] = { .set = { {-3, -14}, {-1, -13}, {0, -6}, {-1, -11} } },
	[48] = { .set = { {-2, -14}, {-3, -15}, {2, -6}, {0, -10} } },
	[49] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[50] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[51] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[52] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[53] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[54] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[55] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[56] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
	[57] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[58] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[59] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[60] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[61] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[62] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[63] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[64] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
	[65] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[66] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[67] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[68] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[69] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[70] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[71] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[72] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
	[73] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[74] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[75] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[76] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[77] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[78] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[79] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[80] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
	[81] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[82] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[83] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[84] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[85] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[86] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[87] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[88] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
	[89] = { .set = { {-1, -13}, {-4, -13}, {5, -8}, {0, -11} } },
	[90] = { .set = { {0, -13}, {-3, -13}, {2, -7}, {0, -10} } },
	[91] = { .set = { {1, -13}, {-3, -12}, {0, -7}, {-1, -10} } },
	[92] = { .set = { {0, -14}, {1, -12}, {-3, -7}, {-1, -10} } },
	[93] = { .set = { {-1, -13}, {2, -11}, {-6, -7}, {-3, -11} } },
	[94] = { .set = { {-2, -14}, {1, -13}, {-5, -6}, {-1, -10} } },
	[95] = { .set = { {-3, -13}, {-2, -13}, {1, -6}, {0, -10} } },
	[96] = { .set = { {-2, -13}, {-3, -14}, {2, -6}, {-1, -11} } },
};

static const ax_anim *const sUnownQAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02475),
	AX_ANIM_PTR(gAxSharedAnim_02478),
	AX_ANIM_PTR(gAxSharedAnim_02528),
	AX_ANIM_PTR(gAxSharedAnim_02540),
	AX_ANIM_PTR(gAxSharedAnim_02543),
	AX_ANIM_PTR(gAxSharedAnim_02544),
	AX_ANIM_PTR(gAxSharedAnim_02549),
	AX_ANIM_PTR(gAxSharedAnim_02552),
};

static const ax_anim *const sUnownQAnimTable2[] = {
	AX_ANIM_PTR(gAxSharedAnim_02144),
	AX_ANIM_PTR(gAxSharedAnim_02232),
	AX_ANIM_PTR(gAxSharedAnim_00150),
	AX_ANIM_PTR(gAxSharedAnim_00226),
	AX_ANIM_PTR(gAxSharedAnim_00317),
	AX_ANIM_PTR(gAxSharedAnim_00394),
	AX_ANIM_PTR(gAxSharedAnim_00486),
	AX_ANIM_PTR(gAxSharedAnim_00569),
};

static const ax_anim *const sUnownQAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_00666),
	AX_ANIM_PTR(gAxSharedAnim_00787),
	AX_ANIM_PTR(gAxSharedAnim_00922),
	AX_ANIM_PTR(gAxSharedAnim_01066),
	AX_ANIM_PTR(gAxSharedAnim_01207),
	AX_ANIM_PTR(gAxSharedAnim_01330),
	AX_ANIM_PTR(gAxSharedAnim_01431),
	AX_ANIM_PTR(gAxSharedAnim_01492),
};

static const ax_anim *const sUnownQAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_01573),
	AX_ANIM_PTR(gAxSharedAnim_01633),
	AX_ANIM_PTR(gAxSharedAnim_01684),
	AX_ANIM_PTR(gAxSharedAnim_01726),
	AX_ANIM_PTR(gAxSharedAnim_01763),
	AX_ANIM_PTR(gAxSharedAnim_01794),
	AX_ANIM_PTR(gAxSharedAnim_01821),
	AX_ANIM_PTR(gAxSharedAnim_01824),
};

static const ax_anim *const sUnownQAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_01840),
	AX_ANIM_PTR(gAxSharedAnim_01855),
	AX_ANIM_PTR(gAxSharedAnim_01869),
	AX_ANIM_PTR(gAxSharedAnim_01880),
	AX_ANIM_PTR(gAxSharedAnim_01886),
	AX_ANIM_PTR(gAxSharedAnim_01895),
	AX_ANIM_PTR(gAxSharedAnim_01900),
	AX_ANIM_PTR(gAxSharedAnim_01903),
};

static const ax_anim *const sUnownQAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
	AX_ANIM_PTR(gAxSharedAnim_02402),
};

static const ax_anim *const sUnownQAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_01921),
	AX_ANIM_PTR(gAxSharedAnim_01924),
	AX_ANIM_PTR(gAxSharedAnim_01935),
	AX_ANIM_PTR(gAxSharedAnim_01937),
	AX_ANIM_PTR(gAxSharedAnim_01947),
	AX_ANIM_PTR(gAxSharedAnim_01957),
	AX_ANIM_PTR(gAxSharedAnim_01960),
	AX_ANIM_PTR(gAxSharedAnim_01975),
};

static const ax_anim *const sUnownQAnimTable8[] = {
	AX_ANIM_PTR(gAxSharedAnim_02320),
	AX_ANIM_PTR(gAxSharedAnim_02321),
	AX_ANIM_PTR(gAxSharedAnim_02322),
	AX_ANIM_PTR(gAxSharedAnim_02323),
	AX_ANIM_PTR(gAxSharedAnim_02324),
	AX_ANIM_PTR(gAxSharedAnim_02325),
	AX_ANIM_PTR(gAxSharedAnim_02326),
	AX_ANIM_PTR(gAxSharedAnim_02327),
};

static const ax_anim *const sUnownQAnimTable9[] = {
	AX_ANIM_PTR(gAxSharedAnim_02011),
	AX_ANIM_PTR(gAxSharedAnim_02016),
	AX_ANIM_PTR(gAxSharedAnim_02019),
	AX_ANIM_PTR(gAxSharedAnim_02025),
	AX_ANIM_PTR(gAxSharedAnim_02032),
	AX_ANIM_PTR(gAxSharedAnim_02037),
	AX_ANIM_PTR(gAxSharedAnim_02040),
	AX_ANIM_PTR(gAxSharedAnim_02051),
};

static const ax_anim *const sUnownQAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_02055),
	AX_ANIM_PTR(gAxSharedAnim_02059),
	AX_ANIM_PTR(gAxSharedAnim_02066),
	AX_ANIM_PTR(gAxSharedAnim_02072),
	AX_ANIM_PTR(gAxSharedAnim_02073),
	AX_ANIM_PTR(gAxSharedAnim_02078),
	AX_ANIM_PTR(gAxSharedAnim_02082),
	AX_ANIM_PTR(gAxSharedAnim_02085),
};

static const ax_anim *const sUnownQAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_02098),
	AX_ANIM_PTR(gAxSharedAnim_02104),
	AX_ANIM_PTR(gAxSharedAnim_02108),
	AX_ANIM_PTR(gAxSharedAnim_02118),
	AX_ANIM_PTR(gAxSharedAnim_02125),
	AX_ANIM_PTR(gAxSharedAnim_02131),
	AX_ANIM_PTR(gAxSharedAnim_02139),
	AX_ANIM_PTR(gAxSharedAnim_02145),
};

static const ax_anim *const sUnownQAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_02158),
	AX_ANIM_PTR(gAxSharedAnim_02167),
	AX_ANIM_PTR(gAxSharedAnim_02169),
	AX_ANIM_PTR(gAxSharedAnim_02174),
	AX_ANIM_PTR(gAxSharedAnim_02196),
	AX_ANIM_PTR(gAxSharedAnim_02202),
	AX_ANIM_PTR(gAxSharedAnim_02205),
	AX_ANIM_PTR(gAxSharedAnim_02214),
};

static const ax_anim *const sUnownQAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_02230),
	AX_ANIM_PTR(gAxSharedAnim_02240),
	AX_ANIM_PTR(gAxSharedAnim_02247),
	AX_ANIM_PTR(gAxSharedAnim_02259),
	AX_ANIM_PTR(gAxSharedAnim_02269),
	AX_ANIM_PTR(gAxSharedAnim_02276),
	AX_ANIM_PTR(gAxSharedAnim_02286),
	AX_ANIM_PTR(gAxSharedAnim_02291),
};

static const ax_anim *const *const sAxAnimationsUnownQ[] = {
	sUnownQAnimTable1,
	sUnownQAnimTable2,
	sUnownQAnimTable3,
	sUnownQAnimTable4,
	sUnownQAnimTable5,
	sUnownQAnimTable6,
	sUnownQAnimTable7,
	sUnownQAnimTable8,
	sUnownQAnimTable9,
	sUnownQAnimTable10,
	sUnownQAnimTable11,
	sUnownQAnimTable12,
	sUnownQAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownQ[] = {
	sUnownQSprites1,
	sUnownQSprites2,
	sUnownQSprites3,
	sUnownQSprites4,
	sUnownQSprites5,
	sUnownQSprites6,
	sUnownQSprites7,
	sUnownQSprites8,
	sUnownQSprites9,
	sUnownQSprites10,
	sUnownQSprites11,
	sUnownQSprites12,
	sUnownQSprites13,
	sUnownQSprites14,
	sUnownQSprites15,
	sUnownQSprites16,
	sUnownQSprites17,
};

static const axmain sAxMainUnownQ = {
	.poses = sAxPosesUnownQ,
	.animations = sAxAnimationsUnownQ,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownQ),
	.spriteData = sAxSpritesUnownQ,
	.positions = sAxPositionsUnownQ,
};
