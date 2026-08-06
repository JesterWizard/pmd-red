/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownS;
const SiroArchive gAxUnownS = {"SIRO", &sAxMainUnownS};

static const ax_pose sUnownSPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose6[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose7[] = {
	AX_POSE(6, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose8[] = {
	AX_POSE(7, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose41[] = {
	AX_POSE(8, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose42[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose43[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose44[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose45[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose46[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose47[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose48[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownSPose49[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownSGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_1.4bpp.lz");
static const ax_sprite sUnownSSprites1[] = {
	{sUnownSGfx1, ARRAY_COUNT(sUnownSGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_2.4bpp.lz");
static const ax_sprite sUnownSSprites2[] = {
	{sUnownSGfx2, ARRAY_COUNT(sUnownSGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_3.4bpp.lz");
static const ax_sprite sUnownSSprites3[] = {
	{sUnownSGfx3, ARRAY_COUNT(sUnownSGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_4.4bpp.lz");
static const ax_sprite sUnownSSprites4[] = {
	{sUnownSGfx4, ARRAY_COUNT(sUnownSGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_5.4bpp.lz");
static const ax_sprite sUnownSSprites5[] = {
	{sUnownSGfx5, ARRAY_COUNT(sUnownSGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_6.4bpp.lz");
static const ax_sprite sUnownSSprites6[] = {
	{sUnownSGfx6, ARRAY_COUNT(sUnownSGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_7.4bpp.lz");
static const ax_sprite sUnownSSprites7[] = {
	{sUnownSGfx7, ARRAY_COUNT(sUnownSGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_8.4bpp.lz");
static const ax_sprite sUnownSSprites8[] = {
	{sUnownSGfx8, ARRAY_COUNT(sUnownSGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_9.4bpp.lz");
static const ax_sprite sUnownSSprites9[] = {
	{sUnownSGfx9, ARRAY_COUNT(sUnownSGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_10.4bpp.lz");
static const ax_sprite sUnownSSprites10[] = {
	{sUnownSGfx10, ARRAY_COUNT(sUnownSGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_11.4bpp.lz");
static const ax_sprite sUnownSSprites11[] = {
	{sUnownSGfx11, ARRAY_COUNT(sUnownSGfx11)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_12.4bpp.lz");
static const ax_sprite sUnownSSprites12[] = {
	{sUnownSGfx12, ARRAY_COUNT(sUnownSGfx12)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_13.4bpp.lz");
static const ax_sprite sUnownSSprites13[] = {
	{sUnownSGfx13, ARRAY_COUNT(sUnownSGfx13)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_14.4bpp.lz");
static const ax_sprite sUnownSSprites14[] = {
	{sUnownSGfx14, ARRAY_COUNT(sUnownSGfx14)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_15.4bpp.lz");
static const ax_sprite sUnownSSprites15[] = {
	{sUnownSGfx15, ARRAY_COUNT(sUnownSGfx15)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_16.4bpp.lz");
static const ax_sprite sUnownSSprites16[] = {
	{sUnownSGfx16, ARRAY_COUNT(sUnownSGfx16)}, 
	{NULL, 0}
};
static const u8 sUnownSGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowns/sprite_17.4bpp.lz");
static const ax_sprite sUnownSSprites17[] = {
	{sUnownSGfx17, ARRAY_COUNT(sUnownSGfx17)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownS[] = {
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
	sUnownSPose41,
	sUnownSPose42,
	sUnownSPose43,
	sUnownSPose44,
	sUnownSPose45,
	sUnownSPose46,
	sUnownSPose47,
	sUnownSPose48,
	sUnownSPose49,
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
	sUnownSPose1,
	sUnownSPose2,
	sUnownSPose3,
	sUnownSPose4,
	sUnownSPose5,
	sUnownSPose6,
	sUnownSPose7,
	sUnownSPose8,
};

static const struct PositionSets sAxPositionsUnownS[] = {
	[0] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[1] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[2] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[3] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[4] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[5] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[6] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[7] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
	[8] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[9] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[10] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[11] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[12] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[13] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[14] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[15] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
	[16] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[17] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[18] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[19] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[20] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[21] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[22] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[23] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
	[24] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[25] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[26] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[27] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[28] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[29] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[30] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[31] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
	[32] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[33] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[34] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[35] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[36] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[37] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[38] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[39] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
	[40] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[41] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[42] = { .set = { {0, -12}, {-1, -19}, {0, -5}, {-1, -11} } },
	[43] = { .set = { {1, -13}, {-2, -19}, {0, -5}, {-1, -11} } },
	[44] = { .set = { {0, -13}, {-2, -19}, {1, -5}, {-1, -12} } },
	[45] = { .set = { {-1, -13}, {-1, -18}, {-1, -6}, {-1, -11} } },
	[46] = { .set = { {-2, -13}, {-1, -19}, {-1, -5}, {-1, -12} } },
	[47] = { .set = { {-3, -13}, {0, -19}, {-2, -5}, {-1, -11} } },
	[48] = { .set = { {-2, -13}, {1, -19}, {-3, -5}, {0, -10} } },
	[49] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[50] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[51] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[52] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[53] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[54] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[55] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[56] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
	[57] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[58] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[59] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[60] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[61] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[62] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[63] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[64] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
	[65] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[66] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[67] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[68] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[69] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[70] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[71] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[72] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
	[73] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[74] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[75] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[76] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[77] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[78] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[79] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[80] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
	[81] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[82] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[83] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[84] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[85] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[86] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[87] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[88] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
	[89] = { .set = { {-1, -12}, {-2, -19}, {0, -5}, {-1, -11} } },
	[90] = { .set = { {0, -12}, {0, -19}, {-2, -5}, {-1, -11} } },
	[91] = { .set = { {1, -12}, {-2, -19}, {-1, -5}, {-1, -11} } },
	[92] = { .set = { {0, -13}, {-2, -19}, {0, -5}, {-1, -12} } },
	[93] = { .set = { {-1, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[94] = { .set = { {-2, -14}, {-2, -19}, {0, -5}, {-1, -12} } },
	[95] = { .set = { {-3, -12}, {-1, -19}, {-1, -5}, {-1, -11} } },
	[96] = { .set = { {-2, -12}, {-1, -19}, {-2, -5}, {0, -11} } },
};

static const ax_anim *const sUnownSAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownSAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownSAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownSAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownSAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownSAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownSAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownSAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownSAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownSAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownSAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownSAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownSAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownS[] = {
	sUnownSAnimTable1,
	sUnownSAnimTable2,
	sUnownSAnimTable3,
	sUnownSAnimTable4,
	sUnownSAnimTable5,
	sUnownSAnimTable6,
	sUnownSAnimTable7,
	sUnownSAnimTable8,
	sUnownSAnimTable9,
	sUnownSAnimTable10,
	sUnownSAnimTable11,
	sUnownSAnimTable12,
	sUnownSAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownS[] = {
	sUnownSSprites1,
	sUnownSSprites2,
	sUnownSSprites3,
	sUnownSSprites4,
	sUnownSSprites5,
	sUnownSSprites6,
	sUnownSSprites7,
	sUnownSSprites8,
	sUnownSSprites9,
	sUnownSSprites10,
	sUnownSSprites11,
	sUnownSSprites12,
	sUnownSSprites13,
	sUnownSSprites14,
	sUnownSSprites15,
	sUnownSSprites16,
	sUnownSSprites17,
};

static const axmain sAxMainUnownS = {
	.poses = sAxPosesUnownS,
	.animations = sAxAnimationsUnownS,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownS),
	.spriteData = sAxSpritesUnownS,
	.positions = sAxPositionsUnownS,
};
