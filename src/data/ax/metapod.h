/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainMetapod;
const SiroArchive gAxMetapod = {"SIRO", &sAxMainMetapod};

static const ax_pose sMetapodPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose2[] = {
	AX_POSE(1, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose4[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose5[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose6[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose8[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose9[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose10[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose11[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose12[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose13[] = {
	AX_POSE(12, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose15[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose16[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose17[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose18[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose20[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose21[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose22[] = {
	AX_POSE(3, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose23[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose24[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose28[] = {
	AX_POSE(15, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose29[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose33[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose34[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose38[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose39[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose43[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose44[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose48[] = {
	AX_POSE(23, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(24, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose49[] = {
	AX_POSE(24, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose53[] = {
	AX_POSE(21, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose54[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose58[] = {
	AX_POSE(19, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose59[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose63[] = {
	AX_POSE(17, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose64[] = {
	AX_POSE(18, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose106[] = {
	AX_POSE(1, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose108[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose112[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose116[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose120[] = {
	AX_POSE(28, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose124[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose128[] = {
	AX_POSE(28, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose132[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose136[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose169[] = {
	AX_POSE(30, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose170[] = {
	AX_POSE(31, OAM1(241, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose171[] = {
	AX_POSE(32, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose172[] = {
	AX_POSE(33, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose173[] = {
	AX_POSE(34, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose174[] = {
	AX_POSE(35, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose175[] = {
	AX_POSE(36, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose176[] = {
	AX_POSE(35, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose177[] = {
	AX_POSE(34, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose178[] = {
	AX_POSE(33, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose179[] = {
	AX_POSE(0, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose181[] = {
	AX_POSE(2, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose182[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose183[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose184[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose185[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose186[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose187[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose188[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose189[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose190[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose191[] = {
	AX_POSE(12, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose192[] = {
	AX_POSE(13, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose193[] = {
	AX_POSE(14, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose194[] = {
	AX_POSE(9, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose195[] = {
	AX_POSE(10, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose196[] = {
	AX_POSE(11, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose197[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose198[] = {
	AX_POSE(7, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose199[] = {
	AX_POSE(8, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose200[] = {
	AX_POSE(3, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose201[] = {
	AX_POSE(4, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose202[] = {
	AX_POSE(5, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose204[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose206[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose208[] = {
	AX_POSE(22, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose210[] = {
	AX_POSE(18, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose211[] = {
	AX_POSE(25, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose212[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose213[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose214[] = {
	AX_POSE(28, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose216[] = {
	AX_POSE(28, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose217[] = {
	AX_POSE(27, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose218[] = {
	AX_POSE(26, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose243[] = {
	AX_POSE(25, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose245[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose246[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose247[] = {
	AX_POSE(29, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose248[] = {
	AX_POSE(28, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sMetapodPose249[] = {
	AX_POSE(27, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sMetapodAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_1_1.lz");
static const u8 sMetapodAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_1_2.lz");
static const u8 sMetapodAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_1_3.lz");
static const u8 sMetapodAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_1_4.lz");
static const u8 sMetapodAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_1_5.lz");
static const u8 sMetapodAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_1_6.lz");
static const u8 sMetapodAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_1_7.lz");
static const u8 sMetapodAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_1_8.lz");
static const u8 sMetapodAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_2_1.lz");
static const u8 sMetapodAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_2_2.lz");
static const u8 sMetapodAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_2_3.lz");
static const u8 sMetapodAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_2_4.lz");
static const u8 sMetapodAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_2_5.lz");
static const u8 sMetapodAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_2_6.lz");
static const u8 sMetapodAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_2_7.lz");
static const u8 sMetapodAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_2_8.lz");
static const u8 sMetapodAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_3_1.lz");
static const u8 sMetapodAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_3_2.lz");
static const u8 sMetapodAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_3_3.lz");
static const u8 sMetapodAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_3_4.lz");
static const u8 sMetapodAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_3_5.lz");
static const u8 sMetapodAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_3_6.lz");
static const u8 sMetapodAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_3_7.lz");
static const u8 sMetapodAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_3_8.lz");
static const u8 sMetapodAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_4_1.lz");
static const u8 sMetapodAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_4_2.lz");
static const u8 sMetapodAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_4_3.lz");
static const u8 sMetapodAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_4_4.lz");
static const u8 sMetapodAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_4_5.lz");
static const u8 sMetapodAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_4_6.lz");
static const u8 sMetapodAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_4_7.lz");
static const u8 sMetapodAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_4_8.lz");
static const u8 sMetapodAnims_5_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_5_1.lz");
static const u8 sMetapodAnims_5_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_5_2.lz");
static const u8 sMetapodAnims_5_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_5_3.lz");
static const u8 sMetapodAnims_5_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_5_4.lz");
static const u8 sMetapodAnims_5_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_5_5.lz");
static const u8 sMetapodAnims_5_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_5_6.lz");
static const u8 sMetapodAnims_5_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_5_7.lz");
static const u8 sMetapodAnims_5_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_5_8.lz");
static const u8 sMetapodAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_8_1.lz");
static const u8 sMetapodAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_8_2.lz");
static const u8 sMetapodAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_8_3.lz");
static const u8 sMetapodAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_8_4.lz");
static const u8 sMetapodAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_8_5.lz");
static const u8 sMetapodAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_8_6.lz");
static const u8 sMetapodAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_8_7.lz");
static const u8 sMetapodAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_8_8.lz");
static const u8 sMetapodAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_9_1.lz");
static const u8 sMetapodAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_9_2.lz");
static const u8 sMetapodAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_9_3.lz");
static const u8 sMetapodAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_9_4.lz");
static const u8 sMetapodAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_9_5.lz");
static const u8 sMetapodAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_9_6.lz");
static const u8 sMetapodAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_9_7.lz");
static const u8 sMetapodAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_9_8.lz");
static const u8 sMetapodAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_11_1.lz");
static const u8 sMetapodAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_11_2.lz");
static const u8 sMetapodAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_11_3.lz");
static const u8 sMetapodAnims_11_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_11_4.lz");
static const u8 sMetapodAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_11_5.lz");
static const u8 sMetapodAnims_11_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_11_6.lz");
static const u8 sMetapodAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_11_7.lz");
static const u8 sMetapodAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/metapod/sMetapodAnims_11_8.lz");

static const u8 sMetapodGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_1.4bpp.lz");
static const ax_sprite sMetapodSprites1[] = {
	{sMetapodGfx1, ARRAY_COUNT(sMetapodGfx1)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_2.4bpp.lz");
static const ax_sprite sMetapodSprites2[] = {
	{sMetapodGfx2, ARRAY_COUNT(sMetapodGfx2)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_3.4bpp.lz");
static const ax_sprite sMetapodSprites3[] = {
	{sMetapodGfx3, ARRAY_COUNT(sMetapodGfx3)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_4.4bpp.lz");
static const ax_sprite sMetapodSprites4[] = {
	{sMetapodGfx4, ARRAY_COUNT(sMetapodGfx4)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_5.4bpp.lz");
static const ax_sprite sMetapodSprites5[] = {
	{sMetapodGfx5, ARRAY_COUNT(sMetapodGfx5)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_6.4bpp.lz");
static const ax_sprite sMetapodSprites6[] = {
	{sMetapodGfx6, ARRAY_COUNT(sMetapodGfx6)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_7.4bpp.lz");
static const ax_sprite sMetapodSprites7[] = {
	{sMetapodGfx7, ARRAY_COUNT(sMetapodGfx7)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_8.4bpp.lz");
static const ax_sprite sMetapodSprites8[] = {
	{sMetapodGfx8, ARRAY_COUNT(sMetapodGfx8)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_9.4bpp.lz");
static const ax_sprite sMetapodSprites9[] = {
	{sMetapodGfx9, ARRAY_COUNT(sMetapodGfx9)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_10.4bpp.lz");
static const ax_sprite sMetapodSprites10[] = {
	{sMetapodGfx10, ARRAY_COUNT(sMetapodGfx10)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_11.4bpp.lz");
static const ax_sprite sMetapodSprites11[] = {
	{sMetapodGfx11, ARRAY_COUNT(sMetapodGfx11)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_12.4bpp.lz");
static const ax_sprite sMetapodSprites12[] = {
	{sMetapodGfx12, ARRAY_COUNT(sMetapodGfx12)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_13.4bpp.lz");
static const ax_sprite sMetapodSprites13[] = {
	{sMetapodGfx13, ARRAY_COUNT(sMetapodGfx13)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_14.4bpp.lz");
static const ax_sprite sMetapodSprites14[] = {
	{sMetapodGfx14, ARRAY_COUNT(sMetapodGfx14)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_15.4bpp.lz");
static const ax_sprite sMetapodSprites15[] = {
	{sMetapodGfx15, ARRAY_COUNT(sMetapodGfx15)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_16.4bpp.lz");
static const u8 sMetapodGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_16_1.4bpp.lz");
static const u8 sMetapodGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_16_2.4bpp.lz");
static const u8 sMetapodGfx16_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_16_3.4bpp.lz");
static const ax_sprite sMetapodSprites16[] = {
	{NULL, 32}, 
	{sMetapodGfx16, ARRAY_COUNT(sMetapodGfx16)}, 
	{NULL, 64}, 
	{sMetapodGfx16_1, ARRAY_COUNT(sMetapodGfx16_1)}, 
	{NULL, 32}, 
	{sMetapodGfx16_2, ARRAY_COUNT(sMetapodGfx16_2)}, 
	{NULL, 32}, 
	{sMetapodGfx16_3, ARRAY_COUNT(sMetapodGfx16_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMetapodGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_17.4bpp.lz");
static const u8 sMetapodGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_17_1.4bpp.lz");
static const u8 sMetapodGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_17_2.4bpp.lz");
static const u8 sMetapodGfx17_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_17_3.4bpp.lz");
static const ax_sprite sMetapodSprites17[] = {
	{NULL, 32}, 
	{sMetapodGfx17, ARRAY_COUNT(sMetapodGfx17)}, 
	{NULL, 64}, 
	{sMetapodGfx17_1, ARRAY_COUNT(sMetapodGfx17_1)}, 
	{NULL, 32}, 
	{sMetapodGfx17_2, ARRAY_COUNT(sMetapodGfx17_2)}, 
	{NULL, 64}, 
	{sMetapodGfx17_3, ARRAY_COUNT(sMetapodGfx17_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMetapodGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_18.4bpp.lz");
static const u8 sMetapodGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_18_1.4bpp.lz");
static const u8 sMetapodGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_18_2.4bpp.lz");
static const u8 sMetapodGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_18_3.4bpp.lz");
static const ax_sprite sMetapodSprites18[] = {
	{sMetapodGfx18, ARRAY_COUNT(sMetapodGfx18)}, 
	{NULL, 64}, 
	{sMetapodGfx18_1, ARRAY_COUNT(sMetapodGfx18_1)}, 
	{NULL, 32}, 
	{sMetapodGfx18_2, ARRAY_COUNT(sMetapodGfx18_2)}, 
	{NULL, 32}, 
	{sMetapodGfx18_3, ARRAY_COUNT(sMetapodGfx18_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMetapodGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_19.4bpp.lz");
static const u8 sMetapodGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_19_1.4bpp.lz");
static const u8 sMetapodGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_19_2.4bpp.lz");
static const ax_sprite sMetapodSprites19[] = {
	{NULL, 64}, 
	{sMetapodGfx19, ARRAY_COUNT(sMetapodGfx19)}, 
	{NULL, 32}, 
	{sMetapodGfx19_1, ARRAY_COUNT(sMetapodGfx19_1)}, 
	{NULL, 32}, 
	{sMetapodGfx19_2, ARRAY_COUNT(sMetapodGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMetapodGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_20.4bpp.lz");
static const u8 sMetapodGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_20_1.4bpp.lz");
static const u8 sMetapodGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_20_2.4bpp.lz");
static const u8 sMetapodGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_20_3.4bpp.lz");
static const ax_sprite sMetapodSprites20[] = {
	{NULL, 32}, 
	{sMetapodGfx20, ARRAY_COUNT(sMetapodGfx20)}, 
	{NULL, 32}, 
	{sMetapodGfx20_1, ARRAY_COUNT(sMetapodGfx20_1)}, 
	{NULL, 32}, 
	{sMetapodGfx20_2, ARRAY_COUNT(sMetapodGfx20_2)}, 
	{NULL, 64}, 
	{sMetapodGfx20_3, ARRAY_COUNT(sMetapodGfx20_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMetapodGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_21.4bpp.lz");
static const ax_sprite sMetapodSprites21[] = {
	{NULL, 128}, 
	{sMetapodGfx21, ARRAY_COUNT(sMetapodGfx21)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMetapodGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_22.4bpp.lz");
static const u8 sMetapodGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_22_1.4bpp.lz");
static const u8 sMetapodGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_22_2.4bpp.lz");
static const ax_sprite sMetapodSprites22[] = {
	{sMetapodGfx22, ARRAY_COUNT(sMetapodGfx22)}, 
	{NULL, 32}, 
	{sMetapodGfx22_1, ARRAY_COUNT(sMetapodGfx22_1)}, 
	{NULL, 32}, 
	{sMetapodGfx22_2, ARRAY_COUNT(sMetapodGfx22_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sMetapodGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_23.4bpp.lz");
static const u8 sMetapodGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_23_1.4bpp.lz");
static const u8 sMetapodGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_23_2.4bpp.lz");
static const ax_sprite sMetapodSprites23[] = {
	{sMetapodGfx23, ARRAY_COUNT(sMetapodGfx23)}, 
	{NULL, 64}, 
	{sMetapodGfx23_1, ARRAY_COUNT(sMetapodGfx23_1)}, 
	{NULL, 32}, 
	{sMetapodGfx23_2, ARRAY_COUNT(sMetapodGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMetapodGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_24.4bpp.lz");
static const u8 sMetapodGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_24_1.4bpp.lz");
static const u8 sMetapodGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_24_2.4bpp.lz");
static const u8 sMetapodGfx24_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_24_3.4bpp.lz");
static const ax_sprite sMetapodSprites24[] = {
	{sMetapodGfx24, ARRAY_COUNT(sMetapodGfx24)}, 
	{NULL, 32}, 
	{sMetapodGfx24_1, ARRAY_COUNT(sMetapodGfx24_1)}, 
	{NULL, 32}, 
	{sMetapodGfx24_2, ARRAY_COUNT(sMetapodGfx24_2)}, 
	{NULL, 32}, 
	{sMetapodGfx24_3, ARRAY_COUNT(sMetapodGfx24_3)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMetapodGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_25.4bpp.lz");
static const u8 sMetapodGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_25_1.4bpp.lz");
static const u8 sMetapodGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_25_2.4bpp.lz");
static const ax_sprite sMetapodSprites25[] = {
	{sMetapodGfx25, ARRAY_COUNT(sMetapodGfx25)}, 
	{NULL, 32}, 
	{sMetapodGfx25_1, ARRAY_COUNT(sMetapodGfx25_1)}, 
	{NULL, 32}, 
	{sMetapodGfx25_2, ARRAY_COUNT(sMetapodGfx25_2)}, 
	{NULL, 192}, 
	{NULL, 0}
};
static const u8 sMetapodGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_26.4bpp.lz");
static const u8 sMetapodGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_26_1.4bpp.lz");
static const u8 sMetapodGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_26_2.4bpp.lz");
static const ax_sprite sMetapodSprites26[] = {
	{sMetapodGfx26, ARRAY_COUNT(sMetapodGfx26)}, 
	{NULL, 32}, 
	{sMetapodGfx26_1, ARRAY_COUNT(sMetapodGfx26_1)}, 
	{NULL, 32}, 
	{sMetapodGfx26_2, ARRAY_COUNT(sMetapodGfx26_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMetapodGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_27.4bpp.lz");
static const u8 sMetapodGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_27_1.4bpp.lz");
static const u8 sMetapodGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_27_2.4bpp.lz");
static const ax_sprite sMetapodSprites27[] = {
	{sMetapodGfx27, ARRAY_COUNT(sMetapodGfx27)}, 
	{NULL, 32}, 
	{sMetapodGfx27_1, ARRAY_COUNT(sMetapodGfx27_1)}, 
	{NULL, 32}, 
	{sMetapodGfx27_2, ARRAY_COUNT(sMetapodGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sMetapodGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_28.4bpp.lz");
static const u8 sMetapodGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_28_1.4bpp.lz");
static const u8 sMetapodGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_28_2.4bpp.lz");
static const ax_sprite sMetapodSprites28[] = {
	{NULL, 32}, 
	{sMetapodGfx28, ARRAY_COUNT(sMetapodGfx28)}, 
	{NULL, 64}, 
	{sMetapodGfx28_1, ARRAY_COUNT(sMetapodGfx28_1)}, 
	{NULL, 64}, 
	{sMetapodGfx28_2, ARRAY_COUNT(sMetapodGfx28_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sMetapodGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_29.4bpp.lz");
static const u8 sMetapodGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_29_1.4bpp.lz");
static const u8 sMetapodGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_29_2.4bpp.lz");
static const u8 sMetapodGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_29_3.4bpp.lz");
static const ax_sprite sMetapodSprites29[] = {
	{sMetapodGfx29, ARRAY_COUNT(sMetapodGfx29)}, 
	{NULL, 32}, 
	{sMetapodGfx29_1, ARRAY_COUNT(sMetapodGfx29_1)}, 
	{NULL, 32}, 
	{sMetapodGfx29_2, ARRAY_COUNT(sMetapodGfx29_2)}, 
	{NULL, 64}, 
	{sMetapodGfx29_3, ARRAY_COUNT(sMetapodGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sMetapodGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_30.4bpp.lz");
static const u8 sMetapodGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_30_1.4bpp.lz");
static const u8 sMetapodGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_30_2.4bpp.lz");
static const u8 sMetapodGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_30_3.4bpp.lz");
static const ax_sprite sMetapodSprites30[] = {
	{NULL, 32}, 
	{sMetapodGfx30, ARRAY_COUNT(sMetapodGfx30)}, 
	{NULL, 64}, 
	{sMetapodGfx30_1, ARRAY_COUNT(sMetapodGfx30_1)}, 
	{NULL, 32}, 
	{sMetapodGfx30_2, ARRAY_COUNT(sMetapodGfx30_2)}, 
	{NULL, 64}, 
	{sMetapodGfx30_3, ARRAY_COUNT(sMetapodGfx30_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sMetapodGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_31.4bpp.lz");
static const ax_sprite sMetapodSprites31[] = {
	{sMetapodGfx31, ARRAY_COUNT(sMetapodGfx31)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_32.4bpp.lz");
static const ax_sprite sMetapodSprites32[] = {
	{sMetapodGfx32, ARRAY_COUNT(sMetapodGfx32)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_33.4bpp.lz");
static const ax_sprite sMetapodSprites33[] = {
	{sMetapodGfx33, ARRAY_COUNT(sMetapodGfx33)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_34.4bpp.lz");
static const ax_sprite sMetapodSprites34[] = {
	{sMetapodGfx34, ARRAY_COUNT(sMetapodGfx34)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_35.4bpp.lz");
static const ax_sprite sMetapodSprites35[] = {
	{sMetapodGfx35, ARRAY_COUNT(sMetapodGfx35)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_36.4bpp.lz");
static const ax_sprite sMetapodSprites36[] = {
	{sMetapodGfx36, ARRAY_COUNT(sMetapodGfx36)}, 
	{NULL, 0}
};
static const u8 sMetapodGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/metapod/sprite_37.4bpp.lz");
static const ax_sprite sMetapodSprites37[] = {
	{sMetapodGfx37, ARRAY_COUNT(sMetapodGfx37)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesMetapod[] = {
	sMetapodPose1,
	sMetapodPose2,
	sMetapodPose3,
	sMetapodPose4,
	sMetapodPose5,
	sMetapodPose6,
	sMetapodPose7,
	sMetapodPose8,
	sMetapodPose9,
	sMetapodPose10,
	sMetapodPose11,
	sMetapodPose12,
	sMetapodPose13,
	sMetapodPose14,
	sMetapodPose15,
	sMetapodPose16,
	sMetapodPose17,
	sMetapodPose18,
	sMetapodPose19,
	sMetapodPose20,
	sMetapodPose21,
	sMetapodPose22,
	sMetapodPose23,
	sMetapodPose24,
	sMetapodPose1,
	sMetapodPose2,
	sMetapodPose3,
	sMetapodPose28,
	sMetapodPose29,
	sMetapodPose4,
	sMetapodPose5,
	sMetapodPose6,
	sMetapodPose33,
	sMetapodPose34,
	sMetapodPose7,
	sMetapodPose8,
	sMetapodPose9,
	sMetapodPose38,
	sMetapodPose39,
	sMetapodPose10,
	sMetapodPose11,
	sMetapodPose12,
	sMetapodPose43,
	sMetapodPose44,
	sMetapodPose13,
	sMetapodPose14,
	sMetapodPose15,
	sMetapodPose48,
	sMetapodPose49,
	sMetapodPose16,
	sMetapodPose17,
	sMetapodPose18,
	sMetapodPose53,
	sMetapodPose54,
	sMetapodPose19,
	sMetapodPose20,
	sMetapodPose21,
	sMetapodPose58,
	sMetapodPose59,
	sMetapodPose22,
	sMetapodPose23,
	sMetapodPose24,
	sMetapodPose63,
	sMetapodPose64,
	sMetapodPose1,
	sMetapodPose2,
	sMetapodPose3,
	sMetapodPose28,
	sMetapodPose29,
	sMetapodPose4,
	sMetapodPose5,
	sMetapodPose6,
	sMetapodPose33,
	sMetapodPose34,
	sMetapodPose7,
	sMetapodPose8,
	sMetapodPose9,
	sMetapodPose38,
	sMetapodPose39,
	sMetapodPose10,
	sMetapodPose11,
	sMetapodPose12,
	sMetapodPose43,
	sMetapodPose44,
	sMetapodPose13,
	sMetapodPose14,
	sMetapodPose15,
	sMetapodPose48,
	sMetapodPose49,
	sMetapodPose16,
	sMetapodPose17,
	sMetapodPose18,
	sMetapodPose53,
	sMetapodPose54,
	sMetapodPose19,
	sMetapodPose20,
	sMetapodPose21,
	sMetapodPose58,
	sMetapodPose59,
	sMetapodPose22,
	sMetapodPose23,
	sMetapodPose24,
	sMetapodPose63,
	sMetapodPose64,
	sMetapodPose1,
	sMetapodPose106,
	sMetapodPose3,
	sMetapodPose108,
	sMetapodPose4,
	sMetapodPose5,
	sMetapodPose6,
	sMetapodPose112,
	sMetapodPose7,
	sMetapodPose8,
	sMetapodPose9,
	sMetapodPose116,
	sMetapodPose10,
	sMetapodPose11,
	sMetapodPose12,
	sMetapodPose120,
	sMetapodPose13,
	sMetapodPose14,
	sMetapodPose15,
	sMetapodPose124,
	sMetapodPose16,
	sMetapodPose17,
	sMetapodPose18,
	sMetapodPose128,
	sMetapodPose19,
	sMetapodPose20,
	sMetapodPose21,
	sMetapodPose132,
	sMetapodPose22,
	sMetapodPose23,
	sMetapodPose24,
	sMetapodPose136,
	sMetapodPose1,
	sMetapodPose106,
	sMetapodPose3,
	sMetapodPose108,
	sMetapodPose4,
	sMetapodPose5,
	sMetapodPose6,
	sMetapodPose112,
	sMetapodPose7,
	sMetapodPose8,
	sMetapodPose9,
	sMetapodPose116,
	sMetapodPose10,
	sMetapodPose11,
	sMetapodPose12,
	sMetapodPose120,
	sMetapodPose13,
	sMetapodPose14,
	sMetapodPose15,
	sMetapodPose124,
	sMetapodPose16,
	sMetapodPose17,
	sMetapodPose18,
	sMetapodPose128,
	sMetapodPose19,
	sMetapodPose20,
	sMetapodPose21,
	sMetapodPose132,
	sMetapodPose22,
	sMetapodPose23,
	sMetapodPose24,
	sMetapodPose136,
	sMetapodPose169,
	sMetapodPose170,
	sMetapodPose171,
	sMetapodPose172,
	sMetapodPose173,
	sMetapodPose174,
	sMetapodPose175,
	sMetapodPose176,
	sMetapodPose177,
	sMetapodPose178,
	sMetapodPose179,
	sMetapodPose106,
	sMetapodPose181,
	sMetapodPose182,
	sMetapodPose183,
	sMetapodPose184,
	sMetapodPose185,
	sMetapodPose186,
	sMetapodPose187,
	sMetapodPose188,
	sMetapodPose189,
	sMetapodPose190,
	sMetapodPose191,
	sMetapodPose192,
	sMetapodPose193,
	sMetapodPose194,
	sMetapodPose195,
	sMetapodPose196,
	sMetapodPose197,
	sMetapodPose198,
	sMetapodPose199,
	sMetapodPose200,
	sMetapodPose201,
	sMetapodPose202,
	sMetapodPose29,
	sMetapodPose204,
	sMetapodPose59,
	sMetapodPose206,
	sMetapodPose49,
	sMetapodPose208,
	sMetapodPose39,
	sMetapodPose210,
	sMetapodPose211,
	sMetapodPose212,
	sMetapodPose213,
	sMetapodPose214,
	sMetapodPose124,
	sMetapodPose216,
	sMetapodPose217,
	sMetapodPose218,
	sMetapodPose1,
	sMetapodPose2,
	sMetapodPose3,
	sMetapodPose4,
	sMetapodPose5,
	sMetapodPose6,
	sMetapodPose7,
	sMetapodPose8,
	sMetapodPose9,
	sMetapodPose10,
	sMetapodPose11,
	sMetapodPose12,
	sMetapodPose13,
	sMetapodPose14,
	sMetapodPose15,
	sMetapodPose16,
	sMetapodPose17,
	sMetapodPose18,
	sMetapodPose19,
	sMetapodPose20,
	sMetapodPose21,
	sMetapodPose22,
	sMetapodPose23,
	sMetapodPose24,
	sMetapodPose243,
	sMetapodPose218,
	sMetapodPose245,
	sMetapodPose246,
	sMetapodPose247,
	sMetapodPose248,
	sMetapodPose249,
	sMetapodPose212,
	sMetapodPose179,
	sMetapodPose200,
	sMetapodPose197,
	sMetapodPose194,
	sMetapodPose191,
	sMetapodPose188,
	sMetapodPose185,
	sMetapodPose182,
};

static const struct PositionSets sAxPositionsMetapod[] = {
	[0] = { .set = { {-1, -4}, {-7, -7}, {5, -7}, {-1, -7} } },
	[1] = { .set = { {-1, 2}, {-7, 0}, {5, 0}, {-1, -2} } },
	[2] = { .set = { {-1, -6}, {-7, -9}, {5, -9}, {-1, -9} } },
	[3] = { .set = { {7, -4}, {9, -9}, {-3, -7}, {3, -7} } },
	[4] = { .set = { {7, -1}, {10, -5}, {-2, -6}, {3, -4} } },
	[5] = { .set = { {5, -5}, {8, -9}, {-4, -8}, {1, -7} } },
	[6] = { .set = { {8, -5}, {-1, -11}, {0, -6}, {2, -6} } },
	[7] = { .set = { {9, -3}, {1, -10}, {2, -6}, {0, -5} } },
	[8] = { .set = { {8, -7}, {-2, -11}, {-1, -8}, {0, -6} } },
	[9] = { .set = { {4, -10}, {-4, -11}, {7, -7}, {1, -6} } },
	[10] = { .set = { {5, -8}, {-3, -10}, {7, -5}, {0, -5} } },
	[11] = { .set = { {2, -12}, {-5, -12}, {6, -8}, {0, -7} } },
	[12] = { .set = { {-1, -13}, {6, -10}, {-8, -10}, {-1, -9} } },
	[13] = { .set = { {-1, -12}, {6, -11}, {-8, -11}, {-1, -9} } },
	[14] = { .set = { {-1, -10}, {6, -11}, {-8, -11}, {-1, -8} } },
	[15] = { .set = { {-5, -10}, {3, -11}, {-8, -7}, {-2, -6} } },
	[16] = { .set = { {-6, -8}, {2, -10}, {-8, -5}, {-1, -5} } },
	[17] = { .set = { {-3, -12}, {4, -12}, {-7, -8}, {-1, -7} } },
	[18] = { .set = { {-9, -5}, {0, -11}, {-1, -6}, {-3, -6} } },
	[19] = { .set = { {-10, -3}, {-2, -10}, {-3, -6}, {-1, -5} } },
	[20] = { .set = { {-9, -7}, {1, -11}, {0, -8}, {-1, -6} } },
	[21] = { .set = { {-8, -4}, {-10, -9}, {2, -7}, {-4, -7} } },
	[22] = { .set = { {-8, -1}, {-11, -5}, {1, -6}, {-4, -4} } },
	[23] = { .set = { {-6, -5}, {-9, -9}, {3, -8}, {-2, -7} } },
	[24] = { .set = { {-1, -4}, {-7, -7}, {5, -7}, {-1, -7} } },
	[25] = { .set = { {-1, 2}, {-7, 0}, {5, 0}, {-1, -2} } },
	[26] = { .set = { {-1, -6}, {-7, -9}, {5, -9}, {-1, -9} } },
	[27] = { .set = { {-1, 0}, {-8, -2}, {6, -2}, {-1, -4} } },
	[28] = { .set = { {-1, 0}, {-8, -2}, {6, -2}, {-1, -4} } },
	[29] = { .set = { {7, -4}, {9, -9}, {-3, -7}, {3, -7} } },
	[30] = { .set = { {7, -1}, {10, -5}, {-2, -6}, {3, -4} } },
	[31] = { .set = { {5, -5}, {8, -9}, {-4, -8}, {1, -7} } },
	[32] = { .set = { {1, -2}, {8, -8}, {-5, -5}, {0, -5} } },
	[33] = { .set = { {1, -2}, {8, -8}, {-5, -5}, {0, -5} } },
	[34] = { .set = { {8, -5}, {-1, -11}, {0, -6}, {2, -6} } },
	[35] = { .set = { {9, -3}, {1, -10}, {2, -6}, {0, -5} } },
	[36] = { .set = { {8, -7}, {-2, -11}, {-1, -8}, {0, -6} } },
	[37] = { .set = { {6, -1}, {3, -11}, {1, -5}, {-1, -4} } },
	[38] = { .set = { {6, -1}, {3, -11}, {1, -5}, {-1, -4} } },
	[39] = { .set = { {4, -10}, {-4, -11}, {7, -7}, {1, -6} } },
	[40] = { .set = { {5, -8}, {-3, -10}, {7, -5}, {0, -5} } },
	[41] = { .set = { {2, -12}, {-5, -12}, {6, -8}, {0, -7} } },
	[42] = { .set = { {4, -7}, {-3, -12}, {8, -7}, {1, -7} } },
	[43] = { .set = { {4, -7}, {-3, -12}, {8, -7}, {1, -7} } },
	[44] = { .set = { {-1, -13}, {6, -10}, {-8, -10}, {-1, -9} } },
	[45] = { .set = { {-1, -12}, {6, -11}, {-8, -11}, {-1, -9} } },
	[46] = { .set = { {-1, -10}, {6, -11}, {-8, -11}, {-1, -8} } },
	[47] = { .set = { {-1, -9}, {6, -9}, {-8, -9}, {-1, -7} } },
	[48] = { .set = { {-1, -9}, {6, -9}, {-8, -9}, {-1, -7} } },
	[49] = { .set = { {-5, -10}, {3, -11}, {-8, -7}, {-2, -6} } },
	[50] = { .set = { {-6, -8}, {2, -10}, {-8, -5}, {-1, -5} } },
	[51] = { .set = { {-3, -12}, {4, -12}, {-7, -8}, {-1, -7} } },
	[52] = { .set = { {-5, -7}, {2, -12}, {-9, -7}, {-2, -7} } },
	[53] = { .set = { {-5, -7}, {2, -12}, {-9, -7}, {-2, -7} } },
	[54] = { .set = { {-9, -5}, {0, -11}, {-1, -6}, {-3, -6} } },
	[55] = { .set = { {-10, -3}, {-2, -10}, {-3, -6}, {-1, -5} } },
	[56] = { .set = { {-9, -7}, {1, -11}, {0, -8}, {-1, -6} } },
	[57] = { .set = { {-7, -1}, {-4, -11}, {-2, -5}, {0, -4} } },
	[58] = { .set = { {-7, -1}, {-4, -11}, {-2, -5}, {0, -4} } },
	[59] = { .set = { {-8, -4}, {-10, -9}, {2, -7}, {-4, -7} } },
	[60] = { .set = { {-8, -1}, {-11, -5}, {1, -6}, {-4, -4} } },
	[61] = { .set = { {-6, -5}, {-9, -9}, {3, -8}, {-2, -7} } },
	[62] = { .set = { {-2, -2}, {-9, -8}, {4, -5}, {-1, -5} } },
	[63] = { .set = { {-2, -2}, {-9, -8}, {4, -5}, {-1, -5} } },
	[64] = { .set = { {-1, -4}, {-7, -7}, {5, -7}, {-1, -7} } },
	[65] = { .set = { {-1, 2}, {-7, 0}, {5, 0}, {-1, -2} } },
	[66] = { .set = { {-1, -6}, {-7, -9}, {5, -9}, {-1, -9} } },
	[67] = { .set = { {-1, 0}, {-8, -2}, {6, -2}, {-1, -4} } },
	[68] = { .set = { {-1, 0}, {-8, -2}, {6, -2}, {-1, -4} } },
	[69] = { .set = { {7, -4}, {9, -9}, {-3, -7}, {3, -7} } },
	[70] = { .set = { {7, -1}, {10, -5}, {-2, -6}, {3, -4} } },
	[71] = { .set = { {5, -5}, {8, -9}, {-4, -8}, {1, -7} } },
	[72] = { .set = { {1, -2}, {8, -8}, {-5, -5}, {0, -5} } },
	[73] = { .set = { {1, -2}, {8, -8}, {-5, -5}, {0, -5} } },
	[74] = { .set = { {8, -5}, {-1, -11}, {0, -6}, {2, -6} } },
	[75] = { .set = { {9, -3}, {1, -10}, {2, -6}, {0, -5} } },
	[76] = { .set = { {8, -7}, {-2, -11}, {-1, -8}, {0, -6} } },
	[77] = { .set = { {6, -1}, {3, -11}, {1, -5}, {-1, -4} } },
	[78] = { .set = { {6, -1}, {3, -11}, {1, -5}, {-1, -4} } },
	[79] = { .set = { {4, -10}, {-4, -11}, {7, -7}, {1, -6} } },
	[80] = { .set = { {5, -8}, {-3, -10}, {7, -5}, {0, -5} } },
	[81] = { .set = { {2, -12}, {-5, -12}, {6, -8}, {0, -7} } },
	[82] = { .set = { {4, -7}, {-3, -12}, {8, -7}, {1, -7} } },
	[83] = { .set = { {4, -7}, {-3, -12}, {8, -7}, {1, -7} } },
	[84] = { .set = { {-1, -13}, {6, -10}, {-8, -10}, {-1, -9} } },
	[85] = { .set = { {-1, -12}, {6, -11}, {-8, -11}, {-1, -9} } },
	[86] = { .set = { {-1, -10}, {6, -11}, {-8, -11}, {-1, -8} } },
	[87] = { .set = { {-1, -9}, {6, -9}, {-8, -9}, {-1, -7} } },
	[88] = { .set = { {-1, -9}, {6, -9}, {-8, -9}, {-1, -7} } },
	[89] = { .set = { {-5, -10}, {3, -11}, {-8, -7}, {-2, -6} } },
	[90] = { .set = { {-6, -8}, {2, -10}, {-8, -5}, {-1, -5} } },
	[91] = { .set = { {-3, -12}, {4, -12}, {-7, -8}, {-1, -7} } },
	[92] = { .set = { {-5, -7}, {2, -12}, {-9, -7}, {-2, -7} } },
	[93] = { .set = { {-5, -7}, {2, -12}, {-9, -7}, {-2, -7} } },
	[94] = { .set = { {-9, -5}, {0, -11}, {-1, -6}, {-3, -6} } },
	[95] = { .set = { {-10, -3}, {-2, -10}, {-3, -6}, {-1, -5} } },
	[96] = { .set = { {-9, -7}, {1, -11}, {0, -8}, {-1, -6} } },
	[97] = { .set = { {-7, -1}, {-4, -11}, {-2, -5}, {0, -4} } },
	[98] = { .set = { {-7, -1}, {-4, -11}, {-2, -5}, {0, -4} } },
	[99] = { .set = { {-8, -4}, {-10, -9}, {2, -7}, {-4, -7} } },
	[100] = { .set = { {-8, -1}, {-11, -5}, {1, -6}, {-4, -4} } },
	[101] = { .set = { {-6, -5}, {-9, -9}, {3, -8}, {-2, -7} } },
	[102] = { .set = { {-2, -2}, {-9, -8}, {4, -5}, {-1, -5} } },
	[103] = { .set = { {-2, -2}, {-9, -8}, {4, -5}, {-1, -5} } },
	[104] = { .set = { {-1, -4}, {-7, -7}, {5, -7}, {-1, -7} } },
	[105] = { .set = { {-1, 0}, {-7, -2}, {5, -2}, {-1, -4} } },
	[106] = { .set = { {-1, -6}, {-7, -9}, {5, -9}, {-1, -9} } },
	[107] = { .set = { {-1, -8}, {-8, -12}, {6, -12}, {-1, -10} } },
	[108] = { .set = { {7, -4}, {9, -9}, {-3, -7}, {3, -7} } },
	[109] = { .set = { {7, -1}, {10, -5}, {-2, -6}, {3, -4} } },
	[110] = { .set = { {5, -5}, {8, -9}, {-4, -8}, {1, -7} } },
	[111] = { .set = { {3, -6}, {3, -12}, {-6, -9}, {-1, -6} } },
	[112] = { .set = { {8, -5}, {-1, -11}, {0, -6}, {2, -6} } },
	[113] = { .set = { {9, -3}, {1, -10}, {2, -6}, {0, -5} } },
	[114] = { .set = { {8, -7}, {-2, -11}, {-1, -8}, {0, -6} } },
	[115] = { .set = { {4, -12}, {-5, -9}, {-3, -8}, {-1, -6} } },
	[116] = { .set = { {4, -10}, {-4, -11}, {7, -7}, {1, -6} } },
	[117] = { .set = { {5, -8}, {-3, -10}, {7, -5}, {0, -5} } },
	[118] = { .set = { {2, -12}, {-5, -12}, {6, -8}, {0, -7} } },
	[119] = { .set = { {1, -11}, {-6, -9}, {5, -8}, {-1, -6} } },
	[120] = { .set = { {-1, -13}, {6, -10}, {-8, -10}, {-1, -9} } },
	[121] = { .set = { {-1, -12}, {6, -11}, {-8, -11}, {-1, -9} } },
	[122] = { .set = { {-1, -10}, {6, -11}, {-8, -11}, {-1, -8} } },
	[123] = { .set = { {-1, -10}, {6, -9}, {-8, -9}, {-1, -6} } },
	[124] = { .set = { {-5, -10}, {3, -11}, {-8, -7}, {-2, -6} } },
	[125] = { .set = { {-6, -8}, {2, -10}, {-8, -5}, {-1, -5} } },
	[126] = { .set = { {-3, -12}, {4, -12}, {-7, -8}, {-1, -7} } },
	[127] = { .set = { {-2, -11}, {5, -9}, {-6, -8}, {0, -6} } },
	[128] = { .set = { {-9, -5}, {0, -11}, {-1, -6}, {-3, -6} } },
	[129] = { .set = { {-10, -3}, {-2, -10}, {-3, -6}, {-1, -5} } },
	[130] = { .set = { {-9, -7}, {1, -11}, {0, -8}, {-1, -6} } },
	[131] = { .set = { {-5, -12}, {4, -9}, {2, -8}, {0, -6} } },
	[132] = { .set = { {-8, -4}, {-10, -9}, {2, -7}, {-4, -7} } },
	[133] = { .set = { {-8, -1}, {-11, -5}, {1, -6}, {-4, -4} } },
	[134] = { .set = { {-6, -5}, {-9, -9}, {3, -8}, {-2, -7} } },
	[135] = { .set = { {-4, -6}, {-4, -12}, {5, -9}, {0, -6} } },
	[136] = { .set = { {-1, -4}, {-7, -7}, {5, -7}, {-1, -7} } },
	[137] = { .set = { {-1, 0}, {-7, -2}, {5, -2}, {-1, -4} } },
	[138] = { .set = { {-1, -6}, {-7, -9}, {5, -9}, {-1, -9} } },
	[139] = { .set = { {-1, -8}, {-8, -12}, {6, -12}, {-1, -10} } },
	[140] = { .set = { {7, -4}, {9, -9}, {-3, -7}, {3, -7} } },
	[141] = { .set = { {7, -1}, {10, -5}, {-2, -6}, {3, -4} } },
	[142] = { .set = { {5, -5}, {8, -9}, {-4, -8}, {1, -7} } },
	[143] = { .set = { {3, -6}, {3, -12}, {-6, -9}, {-1, -6} } },
	[144] = { .set = { {8, -5}, {-1, -11}, {0, -6}, {2, -6} } },
	[145] = { .set = { {9, -3}, {1, -10}, {2, -6}, {0, -5} } },
	[146] = { .set = { {8, -7}, {-2, -11}, {-1, -8}, {0, -6} } },
	[147] = { .set = { {4, -12}, {-5, -9}, {-3, -8}, {-1, -6} } },
	[148] = { .set = { {4, -10}, {-4, -11}, {7, -7}, {1, -6} } },
	[149] = { .set = { {5, -8}, {-3, -10}, {7, -5}, {0, -5} } },
	[150] = { .set = { {2, -12}, {-5, -12}, {6, -8}, {0, -7} } },
	[151] = { .set = { {1, -11}, {-6, -9}, {5, -8}, {-1, -6} } },
	[152] = { .set = { {-1, -13}, {6, -10}, {-8, -10}, {-1, -9} } },
	[153] = { .set = { {-1, -12}, {6, -11}, {-8, -11}, {-1, -9} } },
	[154] = { .set = { {-1, -10}, {6, -11}, {-8, -11}, {-1, -8} } },
	[155] = { .set = { {-1, -10}, {6, -9}, {-8, -9}, {-1, -6} } },
	[156] = { .set = { {-5, -10}, {3, -11}, {-8, -7}, {-2, -6} } },
	[157] = { .set = { {-6, -8}, {2, -10}, {-8, -5}, {-1, -5} } },
	[158] = { .set = { {-3, -12}, {4, -12}, {-7, -8}, {-1, -7} } },
	[159] = { .set = { {-2, -11}, {5, -9}, {-6, -8}, {0, -6} } },
	[160] = { .set = { {-9, -5}, {0, -11}, {-1, -6}, {-3, -6} } },
	[161] = { .set = { {-10, -3}, {-2, -10}, {-3, -6}, {-1, -5} } },
	[162] = { .set = { {-9, -7}, {1, -11}, {0, -8}, {-1, -6} } },
	[163] = { .set = { {-5, -12}, {4, -9}, {2, -8}, {0, -6} } },
	[164] = { .set = { {-8, -4}, {-10, -9}, {2, -7}, {-4, -7} } },
	[165] = { .set = { {-8, -1}, {-11, -5}, {1, -6}, {-4, -4} } },
	[166] = { .set = { {-6, -5}, {-9, -9}, {3, -8}, {-2, -7} } },
	[167] = { .set = { {-4, -6}, {-4, -12}, {5, -9}, {0, -6} } },
	[168] = { .set = { {-8, 0}, {-9, -8}, {1, -6}, {-2, -2} } },
	[169] = { .set = { {-8, 1}, {-9, -7}, {1, -5}, {-2, -1} } },
	[170] = { .set = { {0, -11}, {-9, -14}, {9, -14}, {0, -12} } },
	[171] = { .set = { {4, -12}, {2, -17}, {-9, -13}, {1, -13} } },
	[172] = { .set = { {3, -16}, {-9, -13}, {-7, -12}, {2, -11} } },
	[173] = { .set = { {2, -19}, {-9, -14}, {2, -12}, {0, -14} } },
	[174] = { .set = { {-1, -17}, {7, -14}, {-9, -14}, {-1, -12} } },
	[175] = { .set = { {-3, -19}, {8, -14}, {-3, -12}, {-1, -14} } },
	[176] = { .set = { {-4, -16}, {8, -13}, {6, -12}, {-3, -11} } },
	[177] = { .set = { {-5, -12}, {-3, -17}, {8, -13}, {-2, -13} } },
	[178] = { .set = { {-1, -2}, {-7, -5}, {5, -5}, {-1, -5} } },
	[179] = { .set = { {-1, 0}, {-7, -2}, {5, -2}, {-1, -4} } },
	[180] = { .set = { {-1, -4}, {-7, -7}, {5, -7}, {-1, -7} } },
	[181] = { .set = { {8, -3}, {10, -8}, {-2, -6}, {4, -6} } },
	[182] = { .set = { {8, 0}, {11, -4}, {-1, -5}, {4, -3} } },
	[183] = { .set = { {6, -4}, {9, -8}, {-3, -7}, {2, -6} } },
	[184] = { .set = { {10, -5}, {1, -11}, {2, -6}, {4, -6} } },
	[185] = { .set = { {11, -3}, {3, -10}, {4, -6}, {2, -5} } },
	[186] = { .set = { {10, -7}, {0, -11}, {1, -8}, {2, -6} } },
	[187] = { .set = { {5, -10}, {-3, -11}, {8, -7}, {2, -6} } },
	[188] = { .set = { {6, -8}, {-2, -10}, {8, -5}, {1, -5} } },
	[189] = { .set = { {3, -12}, {-4, -12}, {7, -8}, {1, -7} } },
	[190] = { .set = { {-1, -14}, {6, -11}, {-8, -11}, {-1, -10} } },
	[191] = { .set = { {-1, -14}, {6, -13}, {-8, -13}, {-1, -11} } },
	[192] = { .set = { {-1, -11}, {6, -12}, {-8, -12}, {-1, -9} } },
	[193] = { .set = { {-6, -10}, {2, -11}, {-9, -7}, {-3, -6} } },
	[194] = { .set = { {-7, -8}, {1, -10}, {-9, -5}, {-2, -5} } },
	[195] = { .set = { {-4, -12}, {3, -12}, {-8, -8}, {-2, -7} } },
	[196] = { .set = { {-11, -5}, {-2, -11}, {-3, -6}, {-5, -6} } },
	[197] = { .set = { {-12, -3}, {-4, -10}, {-5, -6}, {-3, -5} } },
	[198] = { .set = { {-11, -7}, {-1, -11}, {-2, -8}, {-3, -6} } },
	[199] = { .set = { {-9, -3}, {-11, -8}, {1, -6}, {-5, -6} } },
	[200] = { .set = { {-9, 0}, {-12, -4}, {0, -5}, {-5, -3} } },
	[201] = { .set = { {-7, -4}, {-10, -8}, {2, -7}, {-3, -6} } },
	[202] = { .set = { {-1, 0}, {-8, -2}, {6, -2}, {-1, -4} } },
	[203] = { .set = { {-2, -1}, {-9, -7}, {4, -4}, {-1, -4} } },
	[204] = { .set = { {-7, -1}, {-4, -11}, {-2, -5}, {0, -4} } },
	[205] = { .set = { {-4, -6}, {3, -11}, {-8, -6}, {-1, -6} } },
	[206] = { .set = { {-1, -9}, {6, -9}, {-8, -9}, {-1, -7} } },
	[207] = { .set = { {3, -6}, {-4, -11}, {7, -6}, {0, -6} } },
	[208] = { .set = { {6, -1}, {3, -11}, {1, -5}, {-1, -4} } },
	[209] = { .set = { {1, -1}, {8, -7}, {-5, -4}, {0, -4} } },
	[210] = { .set = { {-1, -6}, {-8, -10}, {6, -10}, {-1, -8} } },
	[211] = { .set = { {4, -6}, {4, -12}, {-5, -9}, {0, -6} } },
	[212] = { .set = { {6, -12}, {-3, -9}, {-1, -8}, {1, -6} } },
	[213] = { .set = { {2, -11}, {-5, -9}, {6, -8}, {0, -6} } },
	[214] = { .set = { {-1, -10}, {6, -9}, {-8, -9}, {-1, -6} } },
	[215] = { .set = { {-4, -11}, {3, -9}, {-8, -8}, {-2, -6} } },
	[216] = { .set = { {-8, -12}, {1, -9}, {-1, -8}, {-3, -6} } },
	[217] = { .set = { {-5, -6}, {-5, -12}, {4, -9}, {-1, -6} } },
	[218] = { .set = { {-1, -4}, {-7, -7}, {5, -7}, {-1, -7} } },
	[219] = { .set = { {-1, 2}, {-7, 0}, {5, 0}, {-1, -2} } },
	[220] = { .set = { {-1, -6}, {-7, -9}, {5, -9}, {-1, -9} } },
	[221] = { .set = { {7, -4}, {9, -9}, {-3, -7}, {3, -7} } },
	[222] = { .set = { {7, -1}, {10, -5}, {-2, -6}, {3, -4} } },
	[223] = { .set = { {5, -5}, {8, -9}, {-4, -8}, {1, -7} } },
	[224] = { .set = { {8, -5}, {-1, -11}, {0, -6}, {2, -6} } },
	[225] = { .set = { {9, -3}, {1, -10}, {2, -6}, {0, -5} } },
	[226] = { .set = { {8, -7}, {-2, -11}, {-1, -8}, {0, -6} } },
	[227] = { .set = { {4, -10}, {-4, -11}, {7, -7}, {1, -6} } },
	[228] = { .set = { {5, -8}, {-3, -10}, {7, -5}, {0, -5} } },
	[229] = { .set = { {2, -12}, {-5, -12}, {6, -8}, {0, -7} } },
	[230] = { .set = { {-1, -13}, {6, -10}, {-8, -10}, {-1, -9} } },
	[231] = { .set = { {-1, -12}, {6, -11}, {-8, -11}, {-1, -9} } },
	[232] = { .set = { {-1, -10}, {6, -11}, {-8, -11}, {-1, -8} } },
	[233] = { .set = { {-5, -10}, {3, -11}, {-8, -7}, {-2, -6} } },
	[234] = { .set = { {-6, -8}, {2, -10}, {-8, -5}, {-1, -5} } },
	[235] = { .set = { {-3, -12}, {4, -12}, {-7, -8}, {-1, -7} } },
	[236] = { .set = { {-9, -5}, {0, -11}, {-1, -6}, {-3, -6} } },
	[237] = { .set = { {-10, -3}, {-2, -10}, {-3, -6}, {-1, -5} } },
	[238] = { .set = { {-9, -7}, {1, -11}, {0, -8}, {-1, -6} } },
	[239] = { .set = { {-8, -4}, {-10, -9}, {2, -7}, {-4, -7} } },
	[240] = { .set = { {-8, -1}, {-11, -5}, {1, -6}, {-4, -4} } },
	[241] = { .set = { {-6, -5}, {-9, -9}, {3, -8}, {-2, -7} } },
	[242] = { .set = { {-1, -7}, {-8, -11}, {6, -11}, {-1, -9} } },
	[243] = { .set = { {-5, -6}, {-5, -12}, {4, -9}, {-1, -6} } },
	[244] = { .set = { {-7, -13}, {2, -10}, {0, -9}, {-2, -7} } },
	[245] = { .set = { {-4, -13}, {3, -11}, {-8, -10}, {-2, -8} } },
	[246] = { .set = { {-1, -14}, {6, -13}, {-8, -13}, {-1, -10} } },
	[247] = { .set = { {3, -13}, {-4, -11}, {7, -10}, {1, -8} } },
	[248] = { .set = { {6, -13}, {-3, -10}, {-1, -9}, {1, -7} } },
	[249] = { .set = { {4, -6}, {4, -12}, {-5, -9}, {0, -6} } },
	[250] = { .set = { {-1, -2}, {-7, -5}, {5, -5}, {-1, -5} } },
	[251] = { .set = { {-9, -3}, {-11, -8}, {1, -6}, {-5, -6} } },
	[252] = { .set = { {-11, -5}, {-2, -11}, {-3, -6}, {-5, -6} } },
	[253] = { .set = { {-6, -10}, {2, -11}, {-9, -7}, {-3, -6} } },
	[254] = { .set = { {-1, -14}, {6, -11}, {-8, -11}, {-1, -10} } },
	[255] = { .set = { {5, -10}, {-3, -11}, {8, -7}, {2, -6} } },
	[256] = { .set = { {10, -5}, {1, -11}, {2, -6}, {4, -6} } },
	[257] = { .set = { {8, -3}, {10, -8}, {-2, -6}, {4, -6} } },
};

static const ax_anim *const sMetapodAnimTable1[] = {
	AX_ANIM_PTR(sMetapodAnims_1_1),
	AX_ANIM_PTR(sMetapodAnims_1_2),
	AX_ANIM_PTR(sMetapodAnims_1_3),
	AX_ANIM_PTR(sMetapodAnims_1_4),
	AX_ANIM_PTR(sMetapodAnims_1_5),
	AX_ANIM_PTR(sMetapodAnims_1_6),
	AX_ANIM_PTR(sMetapodAnims_1_7),
	AX_ANIM_PTR(sMetapodAnims_1_8),
};

static const ax_anim *const sMetapodAnimTable2[] = {
	AX_ANIM_PTR(sMetapodAnims_2_1),
	AX_ANIM_PTR(sMetapodAnims_2_2),
	AX_ANIM_PTR(sMetapodAnims_2_3),
	AX_ANIM_PTR(sMetapodAnims_2_4),
	AX_ANIM_PTR(sMetapodAnims_2_5),
	AX_ANIM_PTR(sMetapodAnims_2_6),
	AX_ANIM_PTR(sMetapodAnims_2_7),
	AX_ANIM_PTR(sMetapodAnims_2_8),
};

static const ax_anim *const sMetapodAnimTable3[] = {
	AX_ANIM_PTR(sMetapodAnims_3_1),
	AX_ANIM_PTR(sMetapodAnims_3_2),
	AX_ANIM_PTR(sMetapodAnims_3_3),
	AX_ANIM_PTR(sMetapodAnims_3_4),
	AX_ANIM_PTR(sMetapodAnims_3_5),
	AX_ANIM_PTR(sMetapodAnims_3_6),
	AX_ANIM_PTR(sMetapodAnims_3_7),
	AX_ANIM_PTR(sMetapodAnims_3_8),
};

static const ax_anim *const sMetapodAnimTable4[] = {
	AX_ANIM_PTR(sMetapodAnims_4_1),
	AX_ANIM_PTR(sMetapodAnims_4_2),
	AX_ANIM_PTR(sMetapodAnims_4_3),
	AX_ANIM_PTR(sMetapodAnims_4_4),
	AX_ANIM_PTR(sMetapodAnims_4_5),
	AX_ANIM_PTR(sMetapodAnims_4_6),
	AX_ANIM_PTR(sMetapodAnims_4_7),
	AX_ANIM_PTR(sMetapodAnims_4_8),
};

static const ax_anim *const sMetapodAnimTable5[] = {
	AX_ANIM_PTR(sMetapodAnims_5_1),
	AX_ANIM_PTR(sMetapodAnims_5_2),
	AX_ANIM_PTR(sMetapodAnims_5_3),
	AX_ANIM_PTR(sMetapodAnims_5_4),
	AX_ANIM_PTR(sMetapodAnims_5_5),
	AX_ANIM_PTR(sMetapodAnims_5_6),
	AX_ANIM_PTR(sMetapodAnims_5_7),
	AX_ANIM_PTR(sMetapodAnims_5_8),
};

static const ax_anim *const sMetapodAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
	AX_ANIM_PTR(gAxSharedAnim_02373),
};

static const ax_anim *const sMetapodAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00789),
	AX_ANIM_PTR(gAxSharedAnim_00807),
	AX_ANIM_PTR(gAxSharedAnim_00818),
	AX_ANIM_PTR(gAxSharedAnim_00832),
	AX_ANIM_PTR(gAxSharedAnim_00853),
	AX_ANIM_PTR(gAxSharedAnim_00866),
	AX_ANIM_PTR(gAxSharedAnim_00883),
	AX_ANIM_PTR(gAxSharedAnim_00894),
};

static const ax_anim *const sMetapodAnimTable8[] = {
	AX_ANIM_PTR(sMetapodAnims_8_1),
	AX_ANIM_PTR(sMetapodAnims_8_2),
	AX_ANIM_PTR(sMetapodAnims_8_3),
	AX_ANIM_PTR(sMetapodAnims_8_4),
	AX_ANIM_PTR(sMetapodAnims_8_5),
	AX_ANIM_PTR(sMetapodAnims_8_6),
	AX_ANIM_PTR(sMetapodAnims_8_7),
	AX_ANIM_PTR(sMetapodAnims_8_8),
};

static const ax_anim *const sMetapodAnimTable9[] = {
	AX_ANIM_PTR(sMetapodAnims_9_1),
	AX_ANIM_PTR(sMetapodAnims_9_2),
	AX_ANIM_PTR(sMetapodAnims_9_3),
	AX_ANIM_PTR(sMetapodAnims_9_4),
	AX_ANIM_PTR(sMetapodAnims_9_5),
	AX_ANIM_PTR(sMetapodAnims_9_6),
	AX_ANIM_PTR(sMetapodAnims_9_7),
	AX_ANIM_PTR(sMetapodAnims_9_8),
};

static const ax_anim *const sMetapodAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_01333),
	AX_ANIM_PTR(gAxSharedAnim_01347),
	AX_ANIM_PTR(gAxSharedAnim_01357),
	AX_ANIM_PTR(gAxSharedAnim_01365),
	AX_ANIM_PTR(gAxSharedAnim_01373),
	AX_ANIM_PTR(gAxSharedAnim_01384),
	AX_ANIM_PTR(gAxSharedAnim_01395),
	AX_ANIM_PTR(gAxSharedAnim_01410),
};

static const ax_anim *const sMetapodAnimTable11[] = {
	AX_ANIM_PTR(sMetapodAnims_11_1),
	AX_ANIM_PTR(sMetapodAnims_11_2),
	AX_ANIM_PTR(sMetapodAnims_11_3),
	AX_ANIM_PTR(sMetapodAnims_11_4),
	AX_ANIM_PTR(sMetapodAnims_11_5),
	AX_ANIM_PTR(sMetapodAnims_11_6),
	AX_ANIM_PTR(sMetapodAnims_11_7),
	AX_ANIM_PTR(sMetapodAnims_11_8),
};

static const ax_anim *const sMetapodAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01587),
	AX_ANIM_PTR(gAxSharedAnim_01628),
	AX_ANIM_PTR(gAxSharedAnim_01617),
	AX_ANIM_PTR(gAxSharedAnim_01610),
	AX_ANIM_PTR(gAxSharedAnim_01609),
	AX_ANIM_PTR(gAxSharedAnim_01603),
	AX_ANIM_PTR(gAxSharedAnim_01595),
	AX_ANIM_PTR(gAxSharedAnim_01588),
};

static const ax_anim *const sMetapodAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01637),
	AX_ANIM_PTR(gAxSharedAnim_01670),
	AX_ANIM_PTR(gAxSharedAnim_01667),
	AX_ANIM_PTR(gAxSharedAnim_01663),
	AX_ANIM_PTR(gAxSharedAnim_01658),
	AX_ANIM_PTR(gAxSharedAnim_01653),
	AX_ANIM_PTR(gAxSharedAnim_01649),
	AX_ANIM_PTR(gAxSharedAnim_01644),
};

static const ax_anim *const *const sAxAnimationsMetapod[] = {
	sMetapodAnimTable1,
	sMetapodAnimTable2,
	sMetapodAnimTable3,
	sMetapodAnimTable4,
	sMetapodAnimTable5,
	sMetapodAnimTable6,
	sMetapodAnimTable7,
	sMetapodAnimTable8,
	sMetapodAnimTable9,
	sMetapodAnimTable10,
	sMetapodAnimTable11,
	sMetapodAnimTable12,
	sMetapodAnimTable13,
};

static const ax_sprite *const sAxSpritesMetapod[] = {
	sMetapodSprites1,
	sMetapodSprites2,
	sMetapodSprites3,
	sMetapodSprites4,
	sMetapodSprites5,
	sMetapodSprites6,
	sMetapodSprites7,
	sMetapodSprites8,
	sMetapodSprites9,
	sMetapodSprites10,
	sMetapodSprites11,
	sMetapodSprites12,
	sMetapodSprites13,
	sMetapodSprites14,
	sMetapodSprites15,
	sMetapodSprites16,
	sMetapodSprites17,
	sMetapodSprites18,
	sMetapodSprites19,
	sMetapodSprites20,
	sMetapodSprites21,
	sMetapodSprites22,
	sMetapodSprites23,
	sMetapodSprites24,
	sMetapodSprites25,
	sMetapodSprites26,
	sMetapodSprites27,
	sMetapodSprites28,
	sMetapodSprites29,
	sMetapodSprites30,
	sMetapodSprites31,
	sMetapodSprites32,
	sMetapodSprites33,
	sMetapodSprites34,
	sMetapodSprites35,
	sMetapodSprites36,
	sMetapodSprites37,
};

static const axmain sAxMainMetapod = {
	.poses = sAxPosesMetapod,
	.animations = sAxAnimationsMetapod,
	.animCount = ARRAY_COUNT(sAxAnimationsMetapod),
	.spriteData = sAxSpritesMetapod,
	.positions = sAxPositionsMetapod,
};
