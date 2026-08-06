/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownO;
const SiroArchive gAxUnownO = {"SIRO", &sAxMainUnownO};

static const ax_pose sUnownOPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose2[] = {
	AX_POSE(1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose4[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose6[] = {
	AX_POSE(3, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose7[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose8[] = {
	AX_POSE(1, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose41[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose42[] = {
	AX_POSE(6, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose43[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose44[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose45[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose46[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose47[] = {
	AX_POSE(9, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose48[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownOPose49[] = {
	AX_POSE(7, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownOGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_1.4bpp.lz");
static const ax_sprite sUnownOSprites1[] = {
	{sUnownOGfx1, ARRAY_COUNT(sUnownOGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownOGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_2.4bpp.lz");
static const ax_sprite sUnownOSprites2[] = {
	{sUnownOGfx2, ARRAY_COUNT(sUnownOGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownOGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_3.4bpp.lz");
static const ax_sprite sUnownOSprites3[] = {
	{sUnownOGfx3, ARRAY_COUNT(sUnownOGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownOGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_4.4bpp.lz");
static const ax_sprite sUnownOSprites4[] = {
	{sUnownOGfx4, ARRAY_COUNT(sUnownOGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownOGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_5.4bpp.lz");
static const ax_sprite sUnownOSprites5[] = {
	{sUnownOGfx5, ARRAY_COUNT(sUnownOGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownOGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_6.4bpp.lz");
static const ax_sprite sUnownOSprites6[] = {
	{sUnownOGfx6, ARRAY_COUNT(sUnownOGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownOGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_7.4bpp.lz");
static const ax_sprite sUnownOSprites7[] = {
	{sUnownOGfx7, ARRAY_COUNT(sUnownOGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownOGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_8.4bpp.lz");
static const ax_sprite sUnownOSprites8[] = {
	{sUnownOGfx8, ARRAY_COUNT(sUnownOGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownOGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_9.4bpp.lz");
static const ax_sprite sUnownOSprites9[] = {
	{sUnownOGfx9, ARRAY_COUNT(sUnownOGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownOGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_10.4bpp.lz");
static const ax_sprite sUnownOSprites10[] = {
	{sUnownOGfx10, ARRAY_COUNT(sUnownOGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownOGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unowno/sprite_11.4bpp.lz");
static const ax_sprite sUnownOSprites11[] = {
	{sUnownOGfx11, ARRAY_COUNT(sUnownOGfx11)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownO[] = {
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
	sUnownOPose41,
	sUnownOPose42,
	sUnownOPose43,
	sUnownOPose44,
	sUnownOPose45,
	sUnownOPose46,
	sUnownOPose47,
	sUnownOPose48,
	sUnownOPose49,
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
	sUnownOPose1,
	sUnownOPose2,
	sUnownOPose3,
	sUnownOPose4,
	sUnownOPose5,
	sUnownOPose6,
	sUnownOPose7,
	sUnownOPose8,
};

static const struct PositionSets sAxPositionsUnownO[] = {
	[0] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[1] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[2] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[3] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[4] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[5] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[6] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[7] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
	[8] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[9] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[10] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[11] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[12] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[13] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[14] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[15] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
	[16] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[17] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[18] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[19] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[20] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[21] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[22] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[23] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
	[24] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[25] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[26] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[27] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[28] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[29] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[30] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[31] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
	[32] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[33] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[34] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[35] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[36] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[37] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[38] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[39] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
	[40] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[41] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[42] = { .set = { {0, -13}, {4, -14}, {-6, -10}, {-1, -11} } },
	[43] = { .set = { {0, -13}, {1, -14}, {-5, -11}, {-2, -11} } },
	[44] = { .set = { {0, -13}, {-6, -11}, {4, -13}, {-1, -11} } },
	[45] = { .set = { {-1, -13}, {6, -12}, {-8, -11}, {-1, -11} } },
	[46] = { .set = { {-2, -13}, {4, -11}, {-6, -13}, {-1, -11} } },
	[47] = { .set = { {-2, -13}, {-3, -14}, {3, -11}, {0, -11} } },
	[48] = { .set = { {-2, -13}, {-6, -14}, {4, -10}, {-1, -11} } },
	[49] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[50] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[51] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[52] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[53] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[54] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[55] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[56] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
	[57] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[58] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[59] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[60] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[61] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[62] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[63] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[64] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
	[65] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[66] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[67] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[68] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[69] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[70] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[71] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[72] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
	[73] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[74] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[75] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[76] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[77] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[78] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[79] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[80] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
	[81] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[82] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[83] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[84] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[85] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[86] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[87] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[88] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
	[89] = { .set = { {-1, -12}, {-8, -12}, {6, -12}, {-1, -11} } },
	[90] = { .set = { {0, -12}, {4, -14}, {-6, -11}, {-1, -12} } },
	[91] = { .set = { {1, -12}, {2, -14}, {-5, -10}, {-1, -11} } },
	[92] = { .set = { {0, -13}, {-6, -13}, {4, -10}, {-1, -11} } },
	[93] = { .set = { {-1, -13}, {6, -12}, {-8, -12}, {-1, -11} } },
	[94] = { .set = { {-2, -13}, {4, -13}, {-6, -10}, {-1, -11} } },
	[95] = { .set = { {-3, -12}, {-4, -14}, {3, -10}, {-1, -11} } },
	[96] = { .set = { {-2, -12}, {-6, -14}, {4, -11}, {-1, -12} } },
};

static const ax_anim *const sUnownOAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownOAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownOAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownOAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownOAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownOAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownOAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownOAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownOAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownOAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownOAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownOAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownOAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownO[] = {
	sUnownOAnimTable1,
	sUnownOAnimTable2,
	sUnownOAnimTable3,
	sUnownOAnimTable4,
	sUnownOAnimTable5,
	sUnownOAnimTable6,
	sUnownOAnimTable7,
	sUnownOAnimTable8,
	sUnownOAnimTable9,
	sUnownOAnimTable10,
	sUnownOAnimTable11,
	sUnownOAnimTable12,
	sUnownOAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownO[] = {
	sUnownOSprites1,
	sUnownOSprites2,
	sUnownOSprites3,
	sUnownOSprites4,
	sUnownOSprites5,
	sUnownOSprites6,
	sUnownOSprites7,
	sUnownOSprites8,
	sUnownOSprites9,
	sUnownOSprites10,
	sUnownOSprites11,
};

static const axmain sAxMainUnownO = {
	.poses = sAxPosesUnownO,
	.animations = sAxAnimationsUnownO,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownO),
	.spriteData = sAxSpritesUnownO,
	.positions = sAxPositionsUnownO,
};
