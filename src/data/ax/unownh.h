/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownH;
const SiroArchive gAxUnownH = {"SIRO", &sAxMainUnownH};

static const ax_pose sUnownHPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose42[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose43[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose44[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose45[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose46[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose47[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose48[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownHPose49[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownHGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_1.4bpp.lz");
static const ax_sprite sUnownHSprites1[] = {
	{sUnownHGfx1, ARRAY_COUNT(sUnownHGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_2.4bpp.lz");
static const ax_sprite sUnownHSprites2[] = {
	{sUnownHGfx2, ARRAY_COUNT(sUnownHGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_3.4bpp.lz");
static const ax_sprite sUnownHSprites3[] = {
	{sUnownHGfx3, ARRAY_COUNT(sUnownHGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_4.4bpp.lz");
static const ax_sprite sUnownHSprites4[] = {
	{sUnownHGfx4, ARRAY_COUNT(sUnownHGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_5.4bpp.lz");
static const ax_sprite sUnownHSprites5[] = {
	{sUnownHGfx5, ARRAY_COUNT(sUnownHGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_6.4bpp.lz");
static const ax_sprite sUnownHSprites6[] = {
	{sUnownHGfx6, ARRAY_COUNT(sUnownHGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_7.4bpp.lz");
static const ax_sprite sUnownHSprites7[] = {
	{sUnownHGfx7, ARRAY_COUNT(sUnownHGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_8.4bpp.lz");
static const ax_sprite sUnownHSprites8[] = {
	{sUnownHGfx8, ARRAY_COUNT(sUnownHGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_9.4bpp.lz");
static const ax_sprite sUnownHSprites9[] = {
	{sUnownHGfx9, ARRAY_COUNT(sUnownHGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_10.4bpp.lz");
static const ax_sprite sUnownHSprites10[] = {
	{sUnownHGfx10, ARRAY_COUNT(sUnownHGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_11.4bpp.lz");
static const ax_sprite sUnownHSprites11[] = {
	{sUnownHGfx11, ARRAY_COUNT(sUnownHGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_12.4bpp.lz");
static const ax_sprite sUnownHSprites12[] = {
	{sUnownHGfx12, ARRAY_COUNT(sUnownHGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_13.4bpp.lz");
static const ax_sprite sUnownHSprites13[] = {
	{sUnownHGfx13, ARRAY_COUNT(sUnownHGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_14.4bpp.lz");
static const ax_sprite sUnownHSprites14[] = {
	{sUnownHGfx14, ARRAY_COUNT(sUnownHGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_15.4bpp.lz");
static const ax_sprite sUnownHSprites15[] = {
	{sUnownHGfx15, ARRAY_COUNT(sUnownHGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_16.4bpp.lz");
static const ax_sprite sUnownHSprites16[] = {
	{sUnownHGfx16, ARRAY_COUNT(sUnownHGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownHGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownh/sprite_17.4bpp.lz");
static const ax_sprite sUnownHSprites17[] = {
	{sUnownHGfx17, ARRAY_COUNT(sUnownHGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownH[] = {
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
	sUnownHPose41,
	sUnownHPose42,
	sUnownHPose43,
	sUnownHPose44,
	sUnownHPose45,
	sUnownHPose46,
	sUnownHPose47,
	sUnownHPose48,
	sUnownHPose49,
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
	sUnownHPose1,
	sUnownHPose2,
	sUnownHPose3,
	sUnownHPose4,
	sUnownHPose5,
	sUnownHPose6,
	sUnownHPose7,
	sUnownHPose8,
};

static const struct PositionSets sAxPositionsUnownH[] = {
	[0] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[1] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[2] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[3] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[4] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[5] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[6] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[7] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
	[8] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[9] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[10] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[11] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[12] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[13] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[14] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[15] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
	[16] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[17] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[18] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[19] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[20] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[21] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[22] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[23] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
	[24] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[25] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[26] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[27] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[28] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[29] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[30] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[31] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
	[32] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[33] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[34] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[35] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[36] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[37] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[38] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[39] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
	[40] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[41] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[42] = { .set = { {0, -13}, {-7, -11}, {3, -12}, {-2, -11} } },
	[43] = { .set = { {1, -13}, {-4, -11}, {1, -12}, {-1, -11} } },
	[44] = { .set = { {0, -14}, {4, -10}, {-6, -13}, {-2, -11} } },
	[45] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -11} } },
	[46] = { .set = { {-2, -14}, {3, -13}, {-7, -10}, {-1, -11} } },
	[47] = { .set = { {-4, -13}, {-2, -13}, {1, -10}, {-1, -11} } },
	[48] = { .set = { {-3, -13}, {-6, -13}, {4, -11}, {-1, -11} } },
	[49] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[50] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[51] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[52] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[53] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[54] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[55] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[56] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
	[57] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[58] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[59] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[60] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[61] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[62] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[63] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[64] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
	[65] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[66] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[67] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[68] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[69] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[70] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[71] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[72] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
	[73] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[74] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[75] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[76] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[77] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[78] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[79] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[80] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
	[81] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[82] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[83] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[84] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[85] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[86] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[87] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[88] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
	[89] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[90] = { .set = { {0, -12}, {-7, -11}, {3, -12}, {-2, -11} } },
	[91] = { .set = { {1, -12}, {-4, -11}, {1, -13}, {-2, -10} } },
	[92] = { .set = { {0, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[93] = { .set = { {-2, -13}, {5, -12}, {-9, -12}, {-2, -12} } },
	[94] = { .set = { {-3, -13}, {3, -12}, {-7, -10}, {-2, -11} } },
	[95] = { .set = { {-4, -12}, {-3, -12}, {1, -9}, {-1, -11} } },
	[96] = { .set = { {-3, -12}, {-6, -13}, {4, -11}, {-1, -11} } },
};

static const ax_anim *const sUnownHAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownHAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownHAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownHAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownHAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownHAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownHAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownHAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownHAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownHAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownHAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownHAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownHAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownH[] = {
	sUnownHAnimTable1,
	sUnownHAnimTable2,
	sUnownHAnimTable3,
	sUnownHAnimTable4,
	sUnownHAnimTable5,
	sUnownHAnimTable6,
	sUnownHAnimTable7,
	sUnownHAnimTable8,
	sUnownHAnimTable9,
	sUnownHAnimTable10,
	sUnownHAnimTable11,
	sUnownHAnimTable12,
	sUnownHAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownH[] = {
	sUnownHSprites1,
	sUnownHSprites2,
	sUnownHSprites3,
	sUnownHSprites4,
	sUnownHSprites5,
	sUnownHSprites6,
	sUnownHSprites7,
	sUnownHSprites8,
	sUnownHSprites9,
	sUnownHSprites10,
	sUnownHSprites11,
	sUnownHSprites12,
	sUnownHSprites13,
	sUnownHSprites14,
	sUnownHSprites15,
	sUnownHSprites16,
	sUnownHSprites17,
};

static const axmain sAxMainUnownH = {
	.poses = sAxPosesUnownH,
	.animations = sAxAnimationsUnownH,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownH),
	.spriteData = sAxSpritesUnownH,
	.positions = sAxPositionsUnownH,
};
