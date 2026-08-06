/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainUnownU;
const SiroArchive gAxUnownU = {"SIRO", &sAxMainUnownU};

static const ax_pose sUnownUPose1[] = {
	AX_POSE(0, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose2[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose3[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose4[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose5[] = {
	AX_POSE(4, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose6[] = {
	AX_POSE(3, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose7[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose8[] = {
	AX_POSE(1, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose41[] = {
	AX_POSE(5, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose42[] = {
	AX_POSE(6, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose43[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose44[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose45[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose46[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose47[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose48[] = {
	AX_POSE(8, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sUnownUPose49[] = {
	AX_POSE(7, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};

static const u8 sUnownUGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_1.4bpp.lz");
static const ax_sprite sUnownUSprites1[] = {
	{sUnownUGfx1, ARRAY_COUNT(sUnownUGfx1)}, 
	{NULL, 0}
};
static const u8 sUnownUGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_2.4bpp.lz");
static const ax_sprite sUnownUSprites2[] = {
	{sUnownUGfx2, ARRAY_COUNT(sUnownUGfx2)}, 
	{NULL, 0}
};
static const u8 sUnownUGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_3.4bpp.lz");
static const ax_sprite sUnownUSprites3[] = {
	{sUnownUGfx3, ARRAY_COUNT(sUnownUGfx3)}, 
	{NULL, 0}
};
static const u8 sUnownUGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_4.4bpp.lz");
static const ax_sprite sUnownUSprites4[] = {
	{sUnownUGfx4, ARRAY_COUNT(sUnownUGfx4)}, 
	{NULL, 0}
};
static const u8 sUnownUGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_5.4bpp.lz");
static const ax_sprite sUnownUSprites5[] = {
	{sUnownUGfx5, ARRAY_COUNT(sUnownUGfx5)}, 
	{NULL, 0}
};
static const u8 sUnownUGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_6.4bpp.lz");
static const ax_sprite sUnownUSprites6[] = {
	{sUnownUGfx6, ARRAY_COUNT(sUnownUGfx6)}, 
	{NULL, 0}
};
static const u8 sUnownUGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_7.4bpp.lz");
static const ax_sprite sUnownUSprites7[] = {
	{sUnownUGfx7, ARRAY_COUNT(sUnownUGfx7)}, 
	{NULL, 0}
};
static const u8 sUnownUGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_8.4bpp.lz");
static const ax_sprite sUnownUSprites8[] = {
	{sUnownUGfx8, ARRAY_COUNT(sUnownUGfx8)}, 
	{NULL, 0}
};
static const u8 sUnownUGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_9.4bpp.lz");
static const ax_sprite sUnownUSprites9[] = {
	{sUnownUGfx9, ARRAY_COUNT(sUnownUGfx9)}, 
	{NULL, 0}
};
static const u8 sUnownUGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_10.4bpp.lz");
static const ax_sprite sUnownUSprites10[] = {
	{sUnownUGfx10, ARRAY_COUNT(sUnownUGfx10)}, 
	{NULL, 0}
};
static const u8 sUnownUGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/unownu/sprite_11.4bpp.lz");
static const ax_sprite sUnownUSprites11[] = {
	{sUnownUGfx11, ARRAY_COUNT(sUnownUGfx11)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesUnownU[] = {
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
	sUnownUPose41,
	sUnownUPose42,
	sUnownUPose43,
	sUnownUPose44,
	sUnownUPose45,
	sUnownUPose46,
	sUnownUPose47,
	sUnownUPose48,
	sUnownUPose49,
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
	sUnownUPose1,
	sUnownUPose2,
	sUnownUPose3,
	sUnownUPose4,
	sUnownUPose5,
	sUnownUPose6,
	sUnownUPose7,
	sUnownUPose8,
};

static const struct PositionSets sAxPositionsUnownU[] = {
	[0] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[1] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[2] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[3] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[4] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[5] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[6] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[7] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
	[8] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[9] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[10] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[11] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[12] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[13] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[14] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[15] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
	[16] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[17] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[18] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[19] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[20] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[21] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[22] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[23] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
	[24] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[25] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[26] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[27] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[28] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[29] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[30] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[31] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
	[32] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[33] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[34] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[35] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[36] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[37] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[38] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[39] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
	[40] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[41] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[42] = { .set = { {0, -14}, {3, -14}, {-6, -12}, {-1, -10} } },
	[43] = { .set = { {1, -14}, {2, -15}, {-4, -11}, {0, -10} } },
	[44] = { .set = { {0, -14}, {-6, -14}, {4, -12}, {0, -10} } },
	[45] = { .set = { {-1, -13}, {6, -13}, {-8, -13}, {-1, -10} } },
	[46] = { .set = { {-2, -14}, {4, -14}, {-6, -12}, {-2, -10} } },
	[47] = { .set = { {-3, -14}, {-4, -15}, {2, -11}, {-2, -10} } },
	[48] = { .set = { {-2, -14}, {-5, -14}, {4, -12}, {-1, -10} } },
	[49] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[50] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[51] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[52] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[53] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[54] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[55] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[56] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
	[57] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[58] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[59] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[60] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[61] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[62] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[63] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[64] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
	[65] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[66] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[67] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[68] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[69] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[70] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[71] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[72] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
	[73] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[74] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[75] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[76] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[77] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[78] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[79] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[80] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
	[81] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[82] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[83] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[84] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[85] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[86] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[87] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[88] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
	[89] = { .set = { {-1, -13}, {-8, -13}, {6, -13}, {-1, -11} } },
	[90] = { .set = { {0, -13}, {4, -14}, {-6, -13}, {-1, -10} } },
	[91] = { .set = { {1, -13}, {3, -15}, {-4, -12}, {-1, -9} } },
	[92] = { .set = { {0, -14}, {-6, -14}, {4, -13}, {-1, -9} } },
	[93] = { .set = { {-1, -13}, {6, -14}, {-8, -14}, {-1, -10} } },
	[94] = { .set = { {-2, -14}, {4, -14}, {-6, -13}, {-1, -9} } },
	[95] = { .set = { {-3, -13}, {-5, -15}, {2, -12}, {-1, -9} } },
	[96] = { .set = { {-2, -13}, {-6, -14}, {4, -13}, {-1, -10} } },
};

static const ax_anim *const sUnownUAnimTable1[] = {
	gAxSharedAnim_02475,
	gAxSharedAnim_02478,
	gAxSharedAnim_02528,
	gAxSharedAnim_02540,
	gAxSharedAnim_02543,
	gAxSharedAnim_02544,
	gAxSharedAnim_02549,
	gAxSharedAnim_02552,
};

static const ax_anim *const sUnownUAnimTable2[] = {
	gAxSharedAnim_02144,
	gAxSharedAnim_02232,
	gAxSharedAnim_00150,
	gAxSharedAnim_00226,
	gAxSharedAnim_00317,
	gAxSharedAnim_00394,
	gAxSharedAnim_00486,
	gAxSharedAnim_00569,
};

static const ax_anim *const sUnownUAnimTable3[] = {
	gAxSharedAnim_00666,
	gAxSharedAnim_00787,
	gAxSharedAnim_00922,
	gAxSharedAnim_01066,
	gAxSharedAnim_01207,
	gAxSharedAnim_01330,
	gAxSharedAnim_01431,
	gAxSharedAnim_01492,
};

static const ax_anim *const sUnownUAnimTable4[] = {
	gAxSharedAnim_01573,
	gAxSharedAnim_01633,
	gAxSharedAnim_01684,
	gAxSharedAnim_01726,
	gAxSharedAnim_01763,
	gAxSharedAnim_01794,
	gAxSharedAnim_01821,
	gAxSharedAnim_01824,
};

static const ax_anim *const sUnownUAnimTable5[] = {
	gAxSharedAnim_01840,
	gAxSharedAnim_01855,
	gAxSharedAnim_01869,
	gAxSharedAnim_01880,
	gAxSharedAnim_01886,
	gAxSharedAnim_01895,
	gAxSharedAnim_01900,
	gAxSharedAnim_01903,
};

static const ax_anim *const sUnownUAnimTable6[] = {
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
	gAxSharedAnim_02402,
};

static const ax_anim *const sUnownUAnimTable7[] = {
	gAxSharedAnim_01921,
	gAxSharedAnim_01924,
	gAxSharedAnim_01935,
	gAxSharedAnim_01937,
	gAxSharedAnim_01947,
	gAxSharedAnim_01957,
	gAxSharedAnim_01960,
	gAxSharedAnim_01975,
};

static const ax_anim *const sUnownUAnimTable8[] = {
	gAxSharedAnim_02320,
	gAxSharedAnim_02321,
	gAxSharedAnim_02322,
	gAxSharedAnim_02323,
	gAxSharedAnim_02324,
	gAxSharedAnim_02325,
	gAxSharedAnim_02326,
	gAxSharedAnim_02327,
};

static const ax_anim *const sUnownUAnimTable9[] = {
	gAxSharedAnim_02011,
	gAxSharedAnim_02016,
	gAxSharedAnim_02019,
	gAxSharedAnim_02025,
	gAxSharedAnim_02032,
	gAxSharedAnim_02037,
	gAxSharedAnim_02040,
	gAxSharedAnim_02051,
};

static const ax_anim *const sUnownUAnimTable10[] = {
	gAxSharedAnim_02055,
	gAxSharedAnim_02059,
	gAxSharedAnim_02066,
	gAxSharedAnim_02072,
	gAxSharedAnim_02073,
	gAxSharedAnim_02078,
	gAxSharedAnim_02082,
	gAxSharedAnim_02085,
};

static const ax_anim *const sUnownUAnimTable11[] = {
	gAxSharedAnim_02098,
	gAxSharedAnim_02104,
	gAxSharedAnim_02108,
	gAxSharedAnim_02118,
	gAxSharedAnim_02125,
	gAxSharedAnim_02131,
	gAxSharedAnim_02139,
	gAxSharedAnim_02145,
};

static const ax_anim *const sUnownUAnimTable12[] = {
	gAxSharedAnim_02158,
	gAxSharedAnim_02167,
	gAxSharedAnim_02169,
	gAxSharedAnim_02174,
	gAxSharedAnim_02196,
	gAxSharedAnim_02202,
	gAxSharedAnim_02205,
	gAxSharedAnim_02214,
};

static const ax_anim *const sUnownUAnimTable13[] = {
	gAxSharedAnim_02230,
	gAxSharedAnim_02240,
	gAxSharedAnim_02247,
	gAxSharedAnim_02259,
	gAxSharedAnim_02269,
	gAxSharedAnim_02276,
	gAxSharedAnim_02286,
	gAxSharedAnim_02291,
};

static const ax_anim *const *const sAxAnimationsUnownU[] = {
	sUnownUAnimTable1,
	sUnownUAnimTable2,
	sUnownUAnimTable3,
	sUnownUAnimTable4,
	sUnownUAnimTable5,
	sUnownUAnimTable6,
	sUnownUAnimTable7,
	sUnownUAnimTable8,
	sUnownUAnimTable9,
	sUnownUAnimTable10,
	sUnownUAnimTable11,
	sUnownUAnimTable12,
	sUnownUAnimTable13,
};

static const ax_sprite *const sAxSpritesUnownU[] = {
	sUnownUSprites1,
	sUnownUSprites2,
	sUnownUSprites3,
	sUnownUSprites4,
	sUnownUSprites5,
	sUnownUSprites6,
	sUnownUSprites7,
	sUnownUSprites8,
	sUnownUSprites9,
	sUnownUSprites10,
	sUnownUSprites11,
};

static const axmain sAxMainUnownU = {
	.poses = sAxPosesUnownU,
	.animations = sAxAnimationsUnownU,
	.animCount = ARRAY_COUNT(sAxAnimationsUnownU),
	.spriteData = sAxSpritesUnownU,
	.positions = sAxPositionsUnownU,
};
