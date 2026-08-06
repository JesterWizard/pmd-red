/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainElectrode;
const SiroArchive gAxElectrode = {"SIRO", &sAxMainElectrode};

static const ax_pose sElectrodePose1[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose2[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose3[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose4[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose5[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose6[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose10[] = {
	AX_POSE(9, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose11[] = {
	AX_POSE(10, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose12[] = {
	AX_POSE(11, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose14[] = {
	AX_POSE(13, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose16[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose17[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose18[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose19[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose20[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose21[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose22[] = {
	AX_POSE(21, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose23[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose24[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose113[] = {
	AX_POSE(24, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose114[] = {
	AX_POSE(25, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose115[] = {
	AX_POSE(26, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose116[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose117[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose118[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose119[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose120[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose121[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sElectrodePose122[] = {
	AX_POSE(27, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sElectrodeAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_1_1.lz");
static const u8 sElectrodeAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_1_2.lz");
static const u8 sElectrodeAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_1_3.lz");
static const u8 sElectrodeAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_1_4.lz");
static const u8 sElectrodeAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_1_5.lz");
static const u8 sElectrodeAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_1_6.lz");
static const u8 sElectrodeAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_1_7.lz");
static const u8 sElectrodeAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_1_8.lz");
static const u8 sElectrodeAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_2_1.lz");
static const u8 sElectrodeAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_2_2.lz");
static const u8 sElectrodeAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_2_3.lz");
static const u8 sElectrodeAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_2_4.lz");
static const u8 sElectrodeAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_2_5.lz");
static const u8 sElectrodeAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_2_6.lz");
static const u8 sElectrodeAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_2_7.lz");
static const u8 sElectrodeAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_2_8.lz");
static const u8 sElectrodeAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_3_1.lz");
static const u8 sElectrodeAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_3_2.lz");
static const u8 sElectrodeAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_3_3.lz");
static const u8 sElectrodeAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_3_4.lz");
static const u8 sElectrodeAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_3_5.lz");
static const u8 sElectrodeAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_3_6.lz");
static const u8 sElectrodeAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_3_7.lz");
static const u8 sElectrodeAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_3_8.lz");
static const ax_anim sElectrodeAnims_5_1[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {2, -4}, .shadow = {2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {-2, -5}, .shadow = {-2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-4, -4}, .shadow = {-4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {-5, -3}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {-4, -1}, .shadow = {-4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-2, -1}, .shadow = {-2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -1}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {2, -2}, .shadow = {2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {4, -3}, .shadow = {4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {5, -6}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {4, -8}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {2, -10}, .shadow = {2, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 104, .offset = {0, -10}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -8}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -4}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sElectrodeAnims_5_2[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {2, -4}, .shadow = {2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-2, -5}, .shadow = {-2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {-4, -4}, .shadow = {-4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {-5, -3}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-4, -1}, .shadow = {-4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-2, -1}, .shadow = {-2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -1}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {2, -2}, .shadow = {2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {4, -3}, .shadow = {4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {5, -6}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {4, -8}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {2, -10}, .shadow = {2, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 111, .offset = {0, -10}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -8}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -4}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sElectrodeAnims_5_3[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {2, -4}, .shadow = {2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {-2, -5}, .shadow = {-2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {-4, -4}, .shadow = {-4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-5, -3}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-4, -1}, .shadow = {-4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-2, -1}, .shadow = {-2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, -1}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {2, -2}, .shadow = {2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {4, -3}, .shadow = {4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {5, -6}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {4, -8}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {2, -10}, .shadow = {2, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 110, .offset = {0, -10}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -8}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -4}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sElectrodeAnims_5_4[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {2, -4}, .shadow = {2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {-2, -5}, .shadow = {-2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-4, -4}, .shadow = {-4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-5, -3}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-4, -1}, .shadow = {-4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-2, -1}, .shadow = {-2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -1}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {2, -2}, .shadow = {2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {4, -3}, .shadow = {4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {5, -6}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {4, -8}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {2, -10}, .shadow = {2, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 109, .offset = {0, -10}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -8}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -4}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sElectrodeAnims_5_5[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {2, -4}, .shadow = {2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {-2, -5}, .shadow = {-2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-4, -4}, .shadow = {-4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-5, -3}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-4, -1}, .shadow = {-4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {-2, -1}, .shadow = {-2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -1}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {2, -2}, .shadow = {2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {4, -3}, .shadow = {4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {5, -6}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {4, -8}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {2, -10}, .shadow = {2, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 108, .offset = {0, -10}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, -8}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, -4}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sElectrodeAnims_5_6[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {2, -4}, .shadow = {2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {-2, -5}, .shadow = {-2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-4, -4}, .shadow = {-4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-5, -3}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {-4, -1}, .shadow = {-4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-2, -1}, .shadow = {-2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -1}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {2, -2}, .shadow = {2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {4, -3}, .shadow = {4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {5, -6}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {4, -8}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {2, -10}, .shadow = {2, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 107, .offset = {0, -10}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -8}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -4}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sElectrodeAnims_5_7[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {2, -4}, .shadow = {2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {-2, -5}, .shadow = {-2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-4, -4}, .shadow = {-4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {-5, -3}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-4, -1}, .shadow = {-4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {-2, -1}, .shadow = {-2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {0, -1}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {2, -2}, .shadow = {2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {4, -3}, .shadow = {4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {5, -6}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {4, -8}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {2, -10}, .shadow = {2, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 106, .offset = {0, -10}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -8}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sElectrodeAnims_5_8[] = {
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {4, -2}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {2, -4}, .shadow = {2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {0, -4}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {-2, -5}, .shadow = {-2, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {-4, -4}, .shadow = {-4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {-5, -3}, .shadow = {-5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {-4, -1}, .shadow = {-4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 104, .offset = {-2, -1}, .shadow = {-2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 111, .offset = {0, -1}, .shadow = {0, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 110, .offset = {2, -2}, .shadow = {2, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 109, .offset = {4, -3}, .shadow = {4, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 108, .offset = {5, -6}, .shadow = {5, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 107, .offset = {4, -8}, .shadow = {4, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 106, .offset = {2, -10}, .shadow = {2, -3} },
	{ .frames = 6, .unkFlags = 2, .poseId = 105, .offset = {0, -10}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -8}, .shadow = {0, -3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -4}, .shadow = {0, -2} },
	{ .frames = 3, .unkFlags = 1, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const u8 sElectrodeAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_8_1.lz");
static const u8 sElectrodeAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_8_2.lz");
static const u8 sElectrodeAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_8_3.lz");
static const u8 sElectrodeAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_8_4.lz");
static const u8 sElectrodeAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_8_5.lz");
static const u8 sElectrodeAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_8_6.lz");
static const u8 sElectrodeAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_8_7.lz");
static const u8 sElectrodeAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_8_8.lz");
static const u8 sElectrodeAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_9_1.lz");
static const u8 sElectrodeAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_9_2.lz");
static const u8 sElectrodeAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_9_3.lz");
static const u8 sElectrodeAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_9_4.lz");
static const u8 sElectrodeAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_9_6.lz");
static const u8 sElectrodeAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_9_7.lz");
static const u8 sElectrodeAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/electrode/sElectrodeAnims_9_8.lz");

static const u8 sElectrodeGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_1.4bpp.lz");
static const ax_sprite sElectrodeSprites1[] = {
	{sElectrodeGfx1, ARRAY_COUNT(sElectrodeGfx1)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_2.4bpp.lz");
static const ax_sprite sElectrodeSprites2[] = {
	{sElectrodeGfx2, ARRAY_COUNT(sElectrodeGfx2)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_3.4bpp.lz");
static const ax_sprite sElectrodeSprites3[] = {
	{sElectrodeGfx3, ARRAY_COUNT(sElectrodeGfx3)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_4.4bpp.lz");
static const ax_sprite sElectrodeSprites4[] = {
	{sElectrodeGfx4, ARRAY_COUNT(sElectrodeGfx4)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_5.4bpp.lz");
static const ax_sprite sElectrodeSprites5[] = {
	{sElectrodeGfx5, ARRAY_COUNT(sElectrodeGfx5)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_6.4bpp.lz");
static const ax_sprite sElectrodeSprites6[] = {
	{sElectrodeGfx6, ARRAY_COUNT(sElectrodeGfx6)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_7.4bpp.lz");
static const ax_sprite sElectrodeSprites7[] = {
	{sElectrodeGfx7, ARRAY_COUNT(sElectrodeGfx7)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_8.4bpp.lz");
static const ax_sprite sElectrodeSprites8[] = {
	{sElectrodeGfx8, ARRAY_COUNT(sElectrodeGfx8)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_9.4bpp.lz");
static const ax_sprite sElectrodeSprites9[] = {
	{sElectrodeGfx9, ARRAY_COUNT(sElectrodeGfx9)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_10.4bpp.lz");
static const ax_sprite sElectrodeSprites10[] = {
	{sElectrodeGfx10, ARRAY_COUNT(sElectrodeGfx10)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_11.4bpp.lz");
static const ax_sprite sElectrodeSprites11[] = {
	{sElectrodeGfx11, ARRAY_COUNT(sElectrodeGfx11)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_12.4bpp.lz");
static const ax_sprite sElectrodeSprites12[] = {
	{sElectrodeGfx12, ARRAY_COUNT(sElectrodeGfx12)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_13.4bpp.lz");
static const ax_sprite sElectrodeSprites13[] = {
	{sElectrodeGfx13, ARRAY_COUNT(sElectrodeGfx13)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_14.4bpp.lz");
static const ax_sprite sElectrodeSprites14[] = {
	{sElectrodeGfx14, ARRAY_COUNT(sElectrodeGfx14)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_15.4bpp.lz");
static const ax_sprite sElectrodeSprites15[] = {
	{sElectrodeGfx15, ARRAY_COUNT(sElectrodeGfx15)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_16.4bpp.lz");
static const ax_sprite sElectrodeSprites16[] = {
	{sElectrodeGfx16, ARRAY_COUNT(sElectrodeGfx16)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_17.4bpp.lz");
static const ax_sprite sElectrodeSprites17[] = {
	{sElectrodeGfx17, ARRAY_COUNT(sElectrodeGfx17)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_18.4bpp.lz");
static const ax_sprite sElectrodeSprites18[] = {
	{sElectrodeGfx18, ARRAY_COUNT(sElectrodeGfx18)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_19.4bpp.lz");
static const ax_sprite sElectrodeSprites19[] = {
	{sElectrodeGfx19, ARRAY_COUNT(sElectrodeGfx19)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_20.4bpp.lz");
static const ax_sprite sElectrodeSprites20[] = {
	{sElectrodeGfx20, ARRAY_COUNT(sElectrodeGfx20)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_21.4bpp.lz");
static const ax_sprite sElectrodeSprites21[] = {
	{sElectrodeGfx21, ARRAY_COUNT(sElectrodeGfx21)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_22.4bpp.lz");
static const ax_sprite sElectrodeSprites22[] = {
	{sElectrodeGfx22, ARRAY_COUNT(sElectrodeGfx22)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_23.4bpp.lz");
static const ax_sprite sElectrodeSprites23[] = {
	{sElectrodeGfx23, ARRAY_COUNT(sElectrodeGfx23)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_24.4bpp.lz");
static const ax_sprite sElectrodeSprites24[] = {
	{sElectrodeGfx24, ARRAY_COUNT(sElectrodeGfx24)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_25.4bpp.lz");
static const ax_sprite sElectrodeSprites25[] = {
	{sElectrodeGfx25, ARRAY_COUNT(sElectrodeGfx25)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_26.4bpp.lz");
static const ax_sprite sElectrodeSprites26[] = {
	{sElectrodeGfx26, ARRAY_COUNT(sElectrodeGfx26)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_27.4bpp.lz");
static const ax_sprite sElectrodeSprites27[] = {
	{sElectrodeGfx27, ARRAY_COUNT(sElectrodeGfx27)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_28.4bpp.lz");
static const ax_sprite sElectrodeSprites28[] = {
	{sElectrodeGfx28, ARRAY_COUNT(sElectrodeGfx28)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_29.4bpp.lz");
static const ax_sprite sElectrodeSprites29[] = {
	{sElectrodeGfx29, ARRAY_COUNT(sElectrodeGfx29)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_30.4bpp.lz");
static const ax_sprite sElectrodeSprites30[] = {
	{sElectrodeGfx30, ARRAY_COUNT(sElectrodeGfx30)}, 
	{NULL, 0}
};
static const u8 sElectrodeGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/electrode/sprite_31.4bpp.lz");
static const ax_sprite sElectrodeSprites31[] = {
	{sElectrodeGfx31, ARRAY_COUNT(sElectrodeGfx31)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesElectrode[] = {
	sElectrodePose1,
	sElectrodePose2,
	sElectrodePose3,
	sElectrodePose4,
	sElectrodePose5,
	sElectrodePose6,
	sElectrodePose7,
	sElectrodePose8,
	sElectrodePose9,
	sElectrodePose10,
	sElectrodePose11,
	sElectrodePose12,
	sElectrodePose13,
	sElectrodePose14,
	sElectrodePose15,
	sElectrodePose16,
	sElectrodePose17,
	sElectrodePose18,
	sElectrodePose19,
	sElectrodePose20,
	sElectrodePose21,
	sElectrodePose22,
	sElectrodePose23,
	sElectrodePose24,
	sElectrodePose1,
	sElectrodePose22,
	sElectrodePose19,
	sElectrodePose16,
	sElectrodePose13,
	sElectrodePose10,
	sElectrodePose7,
	sElectrodePose4,
	sElectrodePose1,
	sElectrodePose2,
	sElectrodePose3,
	sElectrodePose4,
	sElectrodePose5,
	sElectrodePose6,
	sElectrodePose7,
	sElectrodePose8,
	sElectrodePose9,
	sElectrodePose10,
	sElectrodePose11,
	sElectrodePose12,
	sElectrodePose13,
	sElectrodePose14,
	sElectrodePose15,
	sElectrodePose16,
	sElectrodePose17,
	sElectrodePose18,
	sElectrodePose19,
	sElectrodePose20,
	sElectrodePose21,
	sElectrodePose22,
	sElectrodePose23,
	sElectrodePose24,
	sElectrodePose1,
	sElectrodePose22,
	sElectrodePose19,
	sElectrodePose16,
	sElectrodePose13,
	sElectrodePose10,
	sElectrodePose7,
	sElectrodePose4,
	sElectrodePose1,
	sElectrodePose2,
	sElectrodePose3,
	sElectrodePose4,
	sElectrodePose5,
	sElectrodePose6,
	sElectrodePose7,
	sElectrodePose8,
	sElectrodePose9,
	sElectrodePose10,
	sElectrodePose11,
	sElectrodePose12,
	sElectrodePose13,
	sElectrodePose14,
	sElectrodePose15,
	sElectrodePose16,
	sElectrodePose17,
	sElectrodePose18,
	sElectrodePose19,
	sElectrodePose20,
	sElectrodePose21,
	sElectrodePose22,
	sElectrodePose23,
	sElectrodePose24,
	sElectrodePose1,
	sElectrodePose22,
	sElectrodePose19,
	sElectrodePose16,
	sElectrodePose13,
	sElectrodePose10,
	sElectrodePose7,
	sElectrodePose4,
	sElectrodePose2,
	sElectrodePose23,
	sElectrodePose20,
	sElectrodePose17,
	sElectrodePose14,
	sElectrodePose11,
	sElectrodePose8,
	sElectrodePose5,
	sElectrodePose1,
	sElectrodePose22,
	sElectrodePose19,
	sElectrodePose16,
	sElectrodePose13,
	sElectrodePose10,
	sElectrodePose7,
	sElectrodePose4,
	sElectrodePose113,
	sElectrodePose114,
	sElectrodePose115,
	sElectrodePose116,
	sElectrodePose117,
	sElectrodePose118,
	sElectrodePose119,
	sElectrodePose120,
	sElectrodePose121,
	sElectrodePose122,
	sElectrodePose1,
	sElectrodePose2,
	sElectrodePose3,
	sElectrodePose4,
	sElectrodePose5,
	sElectrodePose6,
	sElectrodePose7,
	sElectrodePose8,
	sElectrodePose9,
	sElectrodePose10,
	sElectrodePose11,
	sElectrodePose12,
	sElectrodePose13,
	sElectrodePose14,
	sElectrodePose15,
	sElectrodePose16,
	sElectrodePose17,
	sElectrodePose18,
	sElectrodePose19,
	sElectrodePose20,
	sElectrodePose21,
	sElectrodePose22,
	sElectrodePose23,
	sElectrodePose24,
	sElectrodePose1,
	sElectrodePose22,
	sElectrodePose19,
	sElectrodePose16,
	sElectrodePose13,
	sElectrodePose10,
	sElectrodePose7,
	sElectrodePose4,
	sElectrodePose2,
	sElectrodePose23,
	sElectrodePose20,
	sElectrodePose17,
	sElectrodePose14,
	sElectrodePose11,
	sElectrodePose8,
	sElectrodePose5,
	sElectrodePose2,
	sElectrodePose5,
	sElectrodePose8,
	sElectrodePose11,
	sElectrodePose14,
	sElectrodePose17,
	sElectrodePose20,
	sElectrodePose23,
	sElectrodePose1,
	sElectrodePose3,
	sElectrodePose2,
	sElectrodePose4,
	sElectrodePose6,
	sElectrodePose5,
	sElectrodePose7,
	sElectrodePose9,
	sElectrodePose8,
	sElectrodePose10,
	sElectrodePose12,
	sElectrodePose11,
	sElectrodePose13,
	sElectrodePose15,
	sElectrodePose14,
	sElectrodePose16,
	sElectrodePose18,
	sElectrodePose17,
	sElectrodePose19,
	sElectrodePose21,
	sElectrodePose20,
	sElectrodePose22,
	sElectrodePose24,
	sElectrodePose23,
	sElectrodePose2,
	sElectrodePose23,
	sElectrodePose20,
	sElectrodePose17,
	sElectrodePose14,
	sElectrodePose11,
	sElectrodePose8,
	sElectrodePose5,
	sElectrodePose1,
	sElectrodePose22,
	sElectrodePose19,
	sElectrodePose16,
	sElectrodePose13,
	sElectrodePose10,
	sElectrodePose7,
	sElectrodePose4,
};

static const struct PositionSets sAxPositionsElectrode[] = {
	[0] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[1] = { .set = { {0, 0}, {-8, -7}, {8, -7}, {0, -9} } },
	[2] = { .set = { {0, -3}, {-8, -9}, {8, -9}, {0, -10} } },
	[3] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
	[4] = { .set = { {3, -1}, {-3, -6}, {6, -12}, {0, -8} } },
	[5] = { .set = { {5, -4}, {-4, -5}, {3, -12}, {0, -7} } },
	[6] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[7] = { .set = { {4, -1}, {1, -5}, {1, -14}, {0, -8} } },
	[8] = { .set = { {6, -4}, {-1, -4}, {-2, -13}, {0, -8} } },
	[9] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[10] = { .set = { {7, -9}, {4, -6}, {-1, -15}, {0, -8} } },
	[11] = { .set = { {7, -11}, {4, -4}, {-2, -13}, {0, -8} } },
	[12] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[13] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[14] = { .set = { {0, -16}, {8, -8}, {-8, -8}, {0, -9} } },
	[15] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[16] = { .set = { {-7, -8}, {0, -14}, {-6, -6}, {0, -8} } },
	[17] = { .set = { {-7, -12}, {4, -13}, {-5, -8}, {0, -9} } },
	[18] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[19] = { .set = { {-5, -2}, {-7, -10}, {-1, -2}, {0, -9} } },
	[20] = { .set = { {-7, -5}, {-4, -13}, {-2, -3}, {1, -8} } },
	[21] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[22] = { .set = { {-4, -1}, {-8, -9}, {3, -3}, {0, -9} } },
	[23] = { .set = { {-4, -4}, {-6, -12}, {2, -5}, {0, -9} } },
	[24] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[25] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[26] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[27] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[28] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[29] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[30] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[31] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
	[32] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[33] = { .set = { {0, 0}, {-8, -7}, {8, -7}, {0, -9} } },
	[34] = { .set = { {0, -3}, {-8, -9}, {8, -9}, {0, -10} } },
	[35] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
	[36] = { .set = { {3, -1}, {-3, -6}, {6, -12}, {0, -8} } },
	[37] = { .set = { {5, -4}, {-4, -5}, {3, -12}, {0, -7} } },
	[38] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[39] = { .set = { {4, -1}, {1, -5}, {1, -14}, {0, -8} } },
	[40] = { .set = { {6, -4}, {-1, -4}, {-2, -13}, {0, -8} } },
	[41] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[42] = { .set = { {7, -9}, {4, -6}, {-1, -15}, {0, -8} } },
	[43] = { .set = { {7, -11}, {4, -4}, {-2, -13}, {0, -8} } },
	[44] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[45] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[46] = { .set = { {0, -16}, {8, -8}, {-8, -8}, {0, -9} } },
	[47] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[48] = { .set = { {-7, -8}, {0, -14}, {-6, -6}, {0, -8} } },
	[49] = { .set = { {-7, -12}, {4, -13}, {-5, -8}, {0, -9} } },
	[50] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[51] = { .set = { {-5, -2}, {-7, -10}, {-1, -2}, {0, -9} } },
	[52] = { .set = { {-7, -5}, {-4, -13}, {-2, -3}, {1, -8} } },
	[53] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[54] = { .set = { {-4, -1}, {-8, -9}, {3, -3}, {0, -9} } },
	[55] = { .set = { {-4, -4}, {-6, -12}, {2, -5}, {0, -9} } },
	[56] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[57] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[58] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[59] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[60] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[61] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[62] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[63] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
	[64] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[65] = { .set = { {0, 0}, {-8, -7}, {8, -7}, {0, -9} } },
	[66] = { .set = { {0, -3}, {-8, -9}, {8, -9}, {0, -10} } },
	[67] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
	[68] = { .set = { {3, -1}, {-3, -6}, {6, -12}, {0, -8} } },
	[69] = { .set = { {5, -4}, {-4, -5}, {3, -12}, {0, -7} } },
	[70] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[71] = { .set = { {4, -1}, {1, -5}, {1, -14}, {0, -8} } },
	[72] = { .set = { {6, -4}, {-1, -4}, {-2, -13}, {0, -8} } },
	[73] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[74] = { .set = { {7, -9}, {4, -6}, {-1, -15}, {0, -8} } },
	[75] = { .set = { {7, -11}, {4, -4}, {-2, -13}, {0, -8} } },
	[76] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[77] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[78] = { .set = { {0, -16}, {8, -8}, {-8, -8}, {0, -9} } },
	[79] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[80] = { .set = { {-7, -8}, {0, -14}, {-6, -6}, {0, -8} } },
	[81] = { .set = { {-7, -12}, {4, -13}, {-5, -8}, {0, -9} } },
	[82] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[83] = { .set = { {-5, -2}, {-7, -10}, {-1, -2}, {0, -9} } },
	[84] = { .set = { {-7, -5}, {-4, -13}, {-2, -3}, {1, -8} } },
	[85] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[86] = { .set = { {-4, -1}, {-8, -9}, {3, -3}, {0, -9} } },
	[87] = { .set = { {-4, -4}, {-6, -12}, {2, -5}, {0, -9} } },
	[88] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[89] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[90] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[91] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[92] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[93] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[94] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[95] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
	[96] = { .set = { {0, 0}, {-8, -7}, {8, -7}, {0, -9} } },
	[97] = { .set = { {-4, -1}, {-8, -9}, {3, -3}, {0, -9} } },
	[98] = { .set = { {-5, -2}, {-7, -10}, {-1, -2}, {0, -9} } },
	[99] = { .set = { {-7, -8}, {0, -14}, {-6, -6}, {0, -8} } },
	[100] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[101] = { .set = { {7, -9}, {4, -6}, {-1, -15}, {0, -8} } },
	[102] = { .set = { {4, -1}, {1, -5}, {1, -14}, {0, -8} } },
	[103] = { .set = { {3, -1}, {-3, -6}, {6, -12}, {0, -8} } },
	[104] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[105] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[106] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[107] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[108] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[109] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[110] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[111] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
	[112] = { .set = { {0, -2}, {-8, -8}, {8, -8}, {0, -6} } },
	[113] = { .set = { {1, -1}, {-8, -8}, {8, -8}, {0, -7} } },
	[114] = { .set = { {0, -10}, {-8, -10}, {8, -10}, {0, -11} } },
	[115] = { .set = { {-1, -11}, {1, -12}, {-8, -6}, {-3, -9} } },
	[116] = { .set = { {1, -9}, {-2, -11}, {-3, -7}, {-4, -7} } },
	[117] = { .set = { {1, -12}, {-9, -11}, {1, -6}, {-4, -5} } },
	[118] = { .set = { {0, -13}, {8, -6}, {-8, -6}, {1, -6} } },
	[119] = { .set = { {-2, -12}, {8, -11}, {-2, -6}, {3, -5} } },
	[120] = { .set = { {-2, -9}, {1, -11}, {2, -7}, {3, -7} } },
	[121] = { .set = { {0, -11}, {-2, -12}, {7, -6}, {2, -9} } },
	[122] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[123] = { .set = { {0, 0}, {-8, -7}, {8, -7}, {0, -9} } },
	[124] = { .set = { {0, -3}, {-8, -9}, {8, -9}, {0, -10} } },
	[125] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
	[126] = { .set = { {3, -1}, {-3, -6}, {6, -12}, {0, -8} } },
	[127] = { .set = { {5, -4}, {-4, -5}, {3, -12}, {0, -7} } },
	[128] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[129] = { .set = { {4, -1}, {1, -5}, {1, -14}, {0, -8} } },
	[130] = { .set = { {6, -4}, {-1, -4}, {-2, -13}, {0, -8} } },
	[131] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[132] = { .set = { {7, -9}, {4, -6}, {-1, -15}, {0, -8} } },
	[133] = { .set = { {7, -11}, {4, -4}, {-2, -13}, {0, -8} } },
	[134] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[135] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[136] = { .set = { {0, -16}, {8, -8}, {-8, -8}, {0, -9} } },
	[137] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[138] = { .set = { {-7, -8}, {0, -14}, {-6, -6}, {0, -8} } },
	[139] = { .set = { {-7, -12}, {4, -13}, {-5, -8}, {0, -9} } },
	[140] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[141] = { .set = { {-5, -2}, {-7, -10}, {-1, -2}, {0, -9} } },
	[142] = { .set = { {-7, -5}, {-4, -13}, {-2, -3}, {1, -8} } },
	[143] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[144] = { .set = { {-4, -1}, {-8, -9}, {3, -3}, {0, -9} } },
	[145] = { .set = { {-4, -4}, {-6, -12}, {2, -5}, {0, -9} } },
	[146] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[147] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[148] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[149] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[150] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[151] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[152] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[153] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
	[154] = { .set = { {0, 0}, {-8, -7}, {8, -7}, {0, -9} } },
	[155] = { .set = { {-4, -1}, {-8, -9}, {3, -3}, {0, -9} } },
	[156] = { .set = { {-5, -2}, {-7, -10}, {-1, -2}, {0, -9} } },
	[157] = { .set = { {-7, -8}, {0, -14}, {-6, -6}, {0, -8} } },
	[158] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[159] = { .set = { {7, -9}, {4, -6}, {-1, -15}, {0, -8} } },
	[160] = { .set = { {4, -1}, {1, -5}, {1, -14}, {0, -8} } },
	[161] = { .set = { {3, -1}, {-3, -6}, {6, -12}, {0, -8} } },
	[162] = { .set = { {0, 0}, {-8, -7}, {8, -7}, {0, -9} } },
	[163] = { .set = { {3, -1}, {-3, -6}, {6, -12}, {0, -8} } },
	[164] = { .set = { {4, -1}, {1, -5}, {1, -14}, {0, -8} } },
	[165] = { .set = { {7, -9}, {4, -6}, {-1, -15}, {0, -8} } },
	[166] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[167] = { .set = { {-7, -8}, {0, -14}, {-6, -6}, {0, -8} } },
	[168] = { .set = { {-5, -2}, {-7, -10}, {-1, -2}, {0, -9} } },
	[169] = { .set = { {-4, -1}, {-8, -9}, {3, -3}, {0, -9} } },
	[170] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[171] = { .set = { {0, -3}, {-8, -9}, {8, -9}, {0, -10} } },
	[172] = { .set = { {0, 0}, {-8, -7}, {8, -7}, {0, -9} } },
	[173] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
	[174] = { .set = { {5, -4}, {-4, -5}, {3, -12}, {0, -7} } },
	[175] = { .set = { {3, -1}, {-3, -6}, {6, -12}, {0, -8} } },
	[176] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[177] = { .set = { {6, -4}, {-1, -4}, {-2, -13}, {0, -8} } },
	[178] = { .set = { {4, -1}, {1, -5}, {1, -14}, {0, -8} } },
	[179] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[180] = { .set = { {7, -11}, {4, -4}, {-2, -13}, {0, -8} } },
	[181] = { .set = { {7, -9}, {4, -6}, {-1, -15}, {0, -8} } },
	[182] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[183] = { .set = { {0, -16}, {8, -8}, {-8, -8}, {0, -9} } },
	[184] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[185] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[186] = { .set = { {-7, -12}, {4, -13}, {-5, -8}, {0, -9} } },
	[187] = { .set = { {-7, -8}, {0, -14}, {-6, -6}, {0, -8} } },
	[188] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[189] = { .set = { {-7, -5}, {-4, -13}, {-2, -3}, {1, -8} } },
	[190] = { .set = { {-5, -2}, {-7, -10}, {-1, -2}, {0, -9} } },
	[191] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[192] = { .set = { {-4, -4}, {-6, -12}, {2, -5}, {0, -9} } },
	[193] = { .set = { {-4, -1}, {-8, -9}, {3, -3}, {0, -9} } },
	[194] = { .set = { {0, 0}, {-8, -7}, {8, -7}, {0, -9} } },
	[195] = { .set = { {-4, -1}, {-8, -9}, {3, -3}, {0, -9} } },
	[196] = { .set = { {-5, -2}, {-7, -10}, {-1, -2}, {0, -9} } },
	[197] = { .set = { {-7, -8}, {0, -14}, {-6, -6}, {0, -8} } },
	[198] = { .set = { {0, -13}, {8, -9}, {-8, -9}, {0, -9} } },
	[199] = { .set = { {7, -9}, {4, -6}, {-1, -15}, {0, -8} } },
	[200] = { .set = { {4, -1}, {1, -5}, {1, -14}, {0, -8} } },
	[201] = { .set = { {3, -1}, {-3, -6}, {6, -12}, {0, -8} } },
	[202] = { .set = { {0, -1}, {-8, -8}, {8, -8}, {0, -8} } },
	[203] = { .set = { {-5, -2}, {-8, -10}, {4, -4}, {0, -8} } },
	[204] = { .set = { {-6, -3}, {-6, -12}, {-2, -3}, {0, -8} } },
	[205] = { .set = { {-7, -10}, {2, -14}, {-6, -6}, {0, -8} } },
	[206] = { .set = { {0, -15}, {8, -8}, {-8, -8}, {0, -9} } },
	[207] = { .set = { {6, -11}, {4, -5}, {-1, -13}, {-1, -9} } },
	[208] = { .set = { {5, -2}, {1, -4}, {1, -13}, {0, -8} } },
	[209] = { .set = { {4, -1}, {-3, -6}, {4, -14}, {0, -7} } },
};

static const ax_anim *const sElectrodeAnimTable1[] = {
	AX_ANIM_PTR(sElectrodeAnims_1_1),
	AX_ANIM_PTR(sElectrodeAnims_1_2),
	AX_ANIM_PTR(sElectrodeAnims_1_3),
	AX_ANIM_PTR(sElectrodeAnims_1_4),
	AX_ANIM_PTR(sElectrodeAnims_1_5),
	AX_ANIM_PTR(sElectrodeAnims_1_6),
	AX_ANIM_PTR(sElectrodeAnims_1_7),
	AX_ANIM_PTR(sElectrodeAnims_1_8),
};

static const ax_anim *const sElectrodeAnimTable2[] = {
	AX_ANIM_PTR(sElectrodeAnims_2_1),
	AX_ANIM_PTR(sElectrodeAnims_2_2),
	AX_ANIM_PTR(sElectrodeAnims_2_3),
	AX_ANIM_PTR(sElectrodeAnims_2_4),
	AX_ANIM_PTR(sElectrodeAnims_2_5),
	AX_ANIM_PTR(sElectrodeAnims_2_6),
	AX_ANIM_PTR(sElectrodeAnims_2_7),
	AX_ANIM_PTR(sElectrodeAnims_2_8),
};

static const ax_anim *const sElectrodeAnimTable3[] = {
	AX_ANIM_PTR(sElectrodeAnims_3_1),
	AX_ANIM_PTR(sElectrodeAnims_3_2),
	AX_ANIM_PTR(sElectrodeAnims_3_3),
	AX_ANIM_PTR(sElectrodeAnims_3_4),
	AX_ANIM_PTR(sElectrodeAnims_3_5),
	AX_ANIM_PTR(sElectrodeAnims_3_6),
	AX_ANIM_PTR(sElectrodeAnims_3_7),
	AX_ANIM_PTR(sElectrodeAnims_3_8),
};

static const ax_anim *const sElectrodeAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02294),
	AX_ANIM_PTR(gAxSharedAnim_00171),
	AX_ANIM_PTR(gAxSharedAnim_00161),
	AX_ANIM_PTR(gAxSharedAnim_00156),
	AX_ANIM_PTR(gAxSharedAnim_00155),
	AX_ANIM_PTR(gAxSharedAnim_02318),
	AX_ANIM_PTR(gAxSharedAnim_02308),
	AX_ANIM_PTR(gAxSharedAnim_02298),
};

static const ax_anim *const sElectrodeAnimTable5[] = {
	AX_ANIM_PTR(sElectrodeAnims_5_1),
	AX_ANIM_PTR(sElectrodeAnims_5_2),
	AX_ANIM_PTR(sElectrodeAnims_5_3),
	AX_ANIM_PTR(sElectrodeAnims_5_4),
	AX_ANIM_PTR(sElectrodeAnims_5_5),
	AX_ANIM_PTR(sElectrodeAnims_5_6),
	AX_ANIM_PTR(sElectrodeAnims_5_7),
	AX_ANIM_PTR(sElectrodeAnims_5_8),
};

static const ax_anim *const sElectrodeAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
	AX_ANIM_PTR(gAxSharedAnim_02361),
};

static const ax_anim *const sElectrodeAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00266),
	AX_ANIM_PTR(gAxSharedAnim_00273),
	AX_ANIM_PTR(gAxSharedAnim_00280),
	AX_ANIM_PTR(gAxSharedAnim_00290),
	AX_ANIM_PTR(gAxSharedAnim_00302),
	AX_ANIM_PTR(gAxSharedAnim_00315),
	AX_ANIM_PTR(gAxSharedAnim_00322),
	AX_ANIM_PTR(gAxSharedAnim_00328),
};

static const ax_anim *const sElectrodeAnimTable8[] = {
	AX_ANIM_PTR(sElectrodeAnims_8_1),
	AX_ANIM_PTR(sElectrodeAnims_8_2),
	AX_ANIM_PTR(sElectrodeAnims_8_3),
	AX_ANIM_PTR(sElectrodeAnims_8_4),
	AX_ANIM_PTR(sElectrodeAnims_8_5),
	AX_ANIM_PTR(sElectrodeAnims_8_6),
	AX_ANIM_PTR(sElectrodeAnims_8_7),
	AX_ANIM_PTR(sElectrodeAnims_8_8),
};

static const ax_anim *const sElectrodeAnimTable9[] = {
	AX_ANIM_PTR(sElectrodeAnims_9_1),
	AX_ANIM_PTR(sElectrodeAnims_9_2),
	AX_ANIM_PTR(sElectrodeAnims_9_3),
	AX_ANIM_PTR(sElectrodeAnims_9_4),
	AX_ANIM_PTR(gAxSharedAnim_00648),
	AX_ANIM_PTR(sElectrodeAnims_9_6),
	AX_ANIM_PTR(sElectrodeAnims_9_7),
	AX_ANIM_PTR(sElectrodeAnims_9_8),
};

static const ax_anim *const sElectrodeAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00705),
	AX_ANIM_PTR(gAxSharedAnim_00714),
	AX_ANIM_PTR(gAxSharedAnim_00725),
	AX_ANIM_PTR(gAxSharedAnim_00737),
	AX_ANIM_PTR(gAxSharedAnim_00750),
	AX_ANIM_PTR(gAxSharedAnim_00760),
	AX_ANIM_PTR(gAxSharedAnim_00772),
	AX_ANIM_PTR(gAxSharedAnim_00781),
};

static const ax_anim *const sElectrodeAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_00792),
	AX_ANIM_PTR(gAxSharedAnim_00835),
	AX_ANIM_PTR(gAxSharedAnim_00872),
	AX_ANIM_PTR(gAxSharedAnim_00912),
	AX_ANIM_PTR(gAxSharedAnim_00950),
	AX_ANIM_PTR(gAxSharedAnim_00987),
	AX_ANIM_PTR(gAxSharedAnim_01042),
	AX_ANIM_PTR(gAxSharedAnim_01086),
};

static const ax_anim *const sElectrodeAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01147),
	AX_ANIM_PTR(gAxSharedAnim_01231),
	AX_ANIM_PTR(gAxSharedAnim_01208),
	AX_ANIM_PTR(gAxSharedAnim_01194),
	AX_ANIM_PTR(gAxSharedAnim_01193),
	AX_ANIM_PTR(gAxSharedAnim_01181),
	AX_ANIM_PTR(gAxSharedAnim_01161),
	AX_ANIM_PTR(gAxSharedAnim_01148),
};

static const ax_anim *const sElectrodeAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01242),
	AX_ANIM_PTR(gAxSharedAnim_01323),
	AX_ANIM_PTR(gAxSharedAnim_01314),
	AX_ANIM_PTR(gAxSharedAnim_01301),
	AX_ANIM_PTR(gAxSharedAnim_01286),
	AX_ANIM_PTR(gAxSharedAnim_01278),
	AX_ANIM_PTR(gAxSharedAnim_01267),
	AX_ANIM_PTR(gAxSharedAnim_01253),
};

static const ax_anim *const *const sAxAnimationsElectrode[] = {
	sElectrodeAnimTable1,
	sElectrodeAnimTable2,
	sElectrodeAnimTable3,
	sElectrodeAnimTable4,
	sElectrodeAnimTable5,
	sElectrodeAnimTable6,
	sElectrodeAnimTable7,
	sElectrodeAnimTable8,
	sElectrodeAnimTable9,
	sElectrodeAnimTable10,
	sElectrodeAnimTable11,
	sElectrodeAnimTable12,
	sElectrodeAnimTable13,
};

static const ax_sprite *const sAxSpritesElectrode[] = {
	sElectrodeSprites1,
	sElectrodeSprites2,
	sElectrodeSprites3,
	sElectrodeSprites4,
	sElectrodeSprites5,
	sElectrodeSprites6,
	sElectrodeSprites7,
	sElectrodeSprites8,
	sElectrodeSprites9,
	sElectrodeSprites10,
	sElectrodeSprites11,
	sElectrodeSprites12,
	sElectrodeSprites13,
	sElectrodeSprites14,
	sElectrodeSprites15,
	sElectrodeSprites16,
	sElectrodeSprites17,
	sElectrodeSprites18,
	sElectrodeSprites19,
	sElectrodeSprites20,
	sElectrodeSprites21,
	sElectrodeSprites22,
	sElectrodeSprites23,
	sElectrodeSprites24,
	sElectrodeSprites25,
	sElectrodeSprites26,
	sElectrodeSprites27,
	sElectrodeSprites28,
	sElectrodeSprites29,
	sElectrodeSprites30,
	sElectrodeSprites31,
};

static const axmain sAxMainElectrode = {
	.poses = sAxPosesElectrode,
	.animations = sAxAnimationsElectrode,
	.animCount = ARRAY_COUNT(sAxAnimationsElectrode),
	.spriteData = sAxSpritesElectrode,
	.positions = sAxPositionsElectrode,
};
