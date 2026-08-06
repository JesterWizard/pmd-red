/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainTauros;
const SiroArchive gAxTauros = {"SIRO", &sAxMainTauros};

static const ax_pose sTaurosPose1[] = {
	AX_POSE(0, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose2[] = {
	AX_POSE(1, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose3[] = {
	AX_POSE(2, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose4[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose5[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose6[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose7[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose8[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose9[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose10[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose11[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose12[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose13[] = {
	AX_POSE(12, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose14[] = {
	AX_POSE(13, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose15[] = {
	AX_POSE(14, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose16[] = {
	AX_POSE(9, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose17[] = {
	AX_POSE(10, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose18[] = {
	AX_POSE(11, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose19[] = {
	AX_POSE(6, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose20[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose21[] = {
	AX_POSE(8, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose22[] = {
	AX_POSE(3, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose23[] = {
	AX_POSE(4, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose24[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose25[] = {
	AX_POSE(15, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose26[] = {
	AX_POSE(16, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose27[] = {
	AX_POSE(17, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose28[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose29[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose30[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose31[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose32[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose33[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose34[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose35[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose36[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose37[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose38[] = {
	AX_POSE(28, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose39[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose40[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose41[] = {
	AX_POSE(25, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose42[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose43[] = {
	AX_POSE(21, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose44[] = {
	AX_POSE(22, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose45[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose46[] = {
	AX_POSE(18, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose47[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose48[] = {
	AX_POSE(20, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose52[] = {
	AX_POSE(30, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose53[] = {
	AX_POSE(31, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose55[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose56[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose57[] = {
	AX_POSE(32, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose58[] = {
	AX_POSE(33, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose60[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose62[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose63[] = {
	AX_POSE(35, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose65[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose67[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose68[] = {
	AX_POSE(37, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose70[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose72[] = {
	AX_POSE(38, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose73[] = {
	AX_POSE(39, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose75[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose77[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose78[] = {
	AX_POSE(37, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose80[] = {
	AX_POSE(7, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose82[] = {
	AX_POSE(34, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose83[] = {
	AX_POSE(35, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose85[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose87[] = {
	AX_POSE(32, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose88[] = {
	AX_POSE(33, OAM1(224, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose89[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose90[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose91[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose93[] = {
	AX_POSE(38, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose94[] = {
	AX_POSE(36, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose95[] = {
	AX_POSE(34, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose96[] = {
	AX_POSE(32, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose105[] = {
	AX_POSE(40, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose106[] = {
	AX_POSE(41, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose107[] = {
	AX_POSE(42, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose108[] = {
	AX_POSE(43, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose109[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose110[] = {
	AX_POSE(45, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose111[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose112[] = {
	AX_POSE(45, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose113[] = {
	AX_POSE(44, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose114[] = {
	AX_POSE(43, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose139[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose140[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose141[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose142[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose143[] = {
	AX_POSE(14, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose144[] = {
	AX_POSE(11, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose145[] = {
	AX_POSE(8, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose146[] = {
	AX_POSE(5, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose147[] = {
	AX_POSE(31, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose148[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose150[] = {
	AX_POSE(37, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose151[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose152[] = {
	AX_POSE(37, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose153[] = {
	AX_POSE(35, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose154[] = {
	AX_POSE(33, OAM1(226, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose160[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const ax_pose sTaurosPose178[] = {
	AX_POSE(5, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 6)),
	AX_POSE_TERMINATOR
};
static const u8 sTaurosAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_1_1.lz");
static const u8 sTaurosAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_1_2.lz");
static const u8 sTaurosAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_1_3.lz");
static const u8 sTaurosAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_1_4.lz");
static const u8 sTaurosAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_1_5.lz");
static const u8 sTaurosAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_1_6.lz");
static const u8 sTaurosAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_1_7.lz");
static const u8 sTaurosAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_1_8.lz");
static const u8 sTaurosAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_2_1.lz");
static const u8 sTaurosAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_2_2.lz");
static const u8 sTaurosAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_2_3.lz");
static const u8 sTaurosAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_2_4.lz");
static const u8 sTaurosAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_2_5.lz");
static const u8 sTaurosAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_2_6.lz");
static const u8 sTaurosAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_2_7.lz");
static const u8 sTaurosAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_2_8.lz");
static const u8 sTaurosAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_3_1.lz");
static const u8 sTaurosAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_3_2.lz");
static const u8 sTaurosAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_3_3.lz");
static const u8 sTaurosAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_3_4.lz");
static const u8 sTaurosAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_3_5.lz");
static const u8 sTaurosAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_3_6.lz");
static const u8 sTaurosAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_3_7.lz");
static const u8 sTaurosAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_3_8.lz");
static const u8 sTaurosAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_8_1.lz");
static const u8 sTaurosAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_8_2.lz");
static const u8 sTaurosAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_8_3.lz");
static const u8 sTaurosAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_8_4.lz");
static const u8 sTaurosAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_8_5.lz");
static const u8 sTaurosAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_8_6.lz");
static const u8 sTaurosAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_8_7.lz");
static const u8 sTaurosAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_8_8.lz");
static const u8 sTaurosAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_9_1.lz");
static const u8 sTaurosAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_9_2.lz");
static const u8 sTaurosAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_9_3.lz");
static const u8 sTaurosAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_9_4.lz");
static const u8 sTaurosAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_9_5.lz");
static const u8 sTaurosAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_9_6.lz");
static const u8 sTaurosAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_9_7.lz");
static const u8 sTaurosAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_9_8.lz");
static const u8 sTaurosAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_11_1.lz");
static const u8 sTaurosAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_11_2.lz");
static const u8 sTaurosAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_11_3.lz");
static const u8 sTaurosAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/tauros/sTaurosAnims_11_5.lz");

static const u8 sTaurosGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_1.4bpp.lz");
static const ax_sprite sTaurosSprites1[] = {
	{sTaurosGfx1, ARRAY_COUNT(sTaurosGfx1)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_2.4bpp.lz");
static const ax_sprite sTaurosSprites2[] = {
	{sTaurosGfx2, ARRAY_COUNT(sTaurosGfx2)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_3.4bpp.lz");
static const ax_sprite sTaurosSprites3[] = {
	{sTaurosGfx3, ARRAY_COUNT(sTaurosGfx3)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_4.4bpp.lz");
static const ax_sprite sTaurosSprites4[] = {
	{sTaurosGfx4, ARRAY_COUNT(sTaurosGfx4)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_5.4bpp.lz");
static const ax_sprite sTaurosSprites5[] = {
	{sTaurosGfx5, ARRAY_COUNT(sTaurosGfx5)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_6.4bpp.lz");
static const ax_sprite sTaurosSprites6[] = {
	{sTaurosGfx6, ARRAY_COUNT(sTaurosGfx6)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_7.4bpp.lz");
static const ax_sprite sTaurosSprites7[] = {
	{sTaurosGfx7, ARRAY_COUNT(sTaurosGfx7)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_8.4bpp.lz");
static const ax_sprite sTaurosSprites8[] = {
	{sTaurosGfx8, ARRAY_COUNT(sTaurosGfx8)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_9.4bpp.lz");
static const ax_sprite sTaurosSprites9[] = {
	{sTaurosGfx9, ARRAY_COUNT(sTaurosGfx9)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_10.4bpp.lz");
static const ax_sprite sTaurosSprites10[] = {
	{sTaurosGfx10, ARRAY_COUNT(sTaurosGfx10)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_11.4bpp.lz");
static const ax_sprite sTaurosSprites11[] = {
	{sTaurosGfx11, ARRAY_COUNT(sTaurosGfx11)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_12.4bpp.lz");
static const ax_sprite sTaurosSprites12[] = {
	{sTaurosGfx12, ARRAY_COUNT(sTaurosGfx12)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_13.4bpp.lz");
static const ax_sprite sTaurosSprites13[] = {
	{sTaurosGfx13, ARRAY_COUNT(sTaurosGfx13)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_14.4bpp.lz");
static const ax_sprite sTaurosSprites14[] = {
	{sTaurosGfx14, ARRAY_COUNT(sTaurosGfx14)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_15.4bpp.lz");
static const ax_sprite sTaurosSprites15[] = {
	{sTaurosGfx15, ARRAY_COUNT(sTaurosGfx15)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_16.4bpp.lz");
static const u8 sTaurosGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_16_1.4bpp.lz");
static const u8 sTaurosGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_16_2.4bpp.lz");
static const ax_sprite sTaurosSprites16[] = {
	{NULL, 32}, 
	{sTaurosGfx16, ARRAY_COUNT(sTaurosGfx16)}, 
	{NULL, 32}, 
	{sTaurosGfx16_1, ARRAY_COUNT(sTaurosGfx16_1)}, 
	{NULL, 32}, 
	{sTaurosGfx16_2, ARRAY_COUNT(sTaurosGfx16_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTaurosGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_17.4bpp.lz");
static const u8 sTaurosGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_17_1.4bpp.lz");
static const u8 sTaurosGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_17_2.4bpp.lz");
static const ax_sprite sTaurosSprites17[] = {
	{NULL, 32}, 
	{sTaurosGfx17, ARRAY_COUNT(sTaurosGfx17)}, 
	{NULL, 32}, 
	{sTaurosGfx17_1, ARRAY_COUNT(sTaurosGfx17_1)}, 
	{NULL, 32}, 
	{sTaurosGfx17_2, ARRAY_COUNT(sTaurosGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sTaurosGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_18.4bpp.lz");
static const u8 sTaurosGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_18_1.4bpp.lz");
static const u8 sTaurosGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_18_2.4bpp.lz");
static const ax_sprite sTaurosSprites18[] = {
	{NULL, 32}, 
	{sTaurosGfx18, ARRAY_COUNT(sTaurosGfx18)}, 
	{NULL, 64}, 
	{sTaurosGfx18_1, ARRAY_COUNT(sTaurosGfx18_1)}, 
	{NULL, 32}, 
	{sTaurosGfx18_2, ARRAY_COUNT(sTaurosGfx18_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTaurosGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_19.4bpp.lz");
static const ax_sprite sTaurosSprites19[] = {
	{NULL, 32}, 
	{sTaurosGfx19, ARRAY_COUNT(sTaurosGfx19)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_20.4bpp.lz");
static const u8 sTaurosGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_20_1.4bpp.lz");
static const ax_sprite sTaurosSprites20[] = {
	{sTaurosGfx20, ARRAY_COUNT(sTaurosGfx20)}, 
	{NULL, 64}, 
	{sTaurosGfx20_1, ARRAY_COUNT(sTaurosGfx20_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTaurosGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_21.4bpp.lz");
static const ax_sprite sTaurosSprites21[] = {
	{NULL, 64}, 
	{sTaurosGfx21, ARRAY_COUNT(sTaurosGfx21)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTaurosGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_22.4bpp.lz");
static const ax_sprite sTaurosSprites22[] = {
	{NULL, 32}, 
	{sTaurosGfx22, ARRAY_COUNT(sTaurosGfx22)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_23.4bpp.lz");
static const u8 sTaurosGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_23_1.4bpp.lz");
static const ax_sprite sTaurosSprites23[] = {
	{sTaurosGfx23, ARRAY_COUNT(sTaurosGfx23)}, 
	{NULL, 32}, 
	{sTaurosGfx23_1, ARRAY_COUNT(sTaurosGfx23_1)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_24.4bpp.lz");
static const ax_sprite sTaurosSprites24[] = {
	{NULL, 32}, 
	{sTaurosGfx24, ARRAY_COUNT(sTaurosGfx24)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTaurosGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_25.4bpp.lz");
static const u8 sTaurosGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_25_1.4bpp.lz");
static const u8 sTaurosGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_25_2.4bpp.lz");
static const ax_sprite sTaurosSprites25[] = {
	{sTaurosGfx25, ARRAY_COUNT(sTaurosGfx25)}, 
	{NULL, 32}, 
	{sTaurosGfx25_1, ARRAY_COUNT(sTaurosGfx25_1)}, 
	{NULL, 32}, 
	{sTaurosGfx25_2, ARRAY_COUNT(sTaurosGfx25_2)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_26.4bpp.lz");
static const u8 sTaurosGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_26_1.4bpp.lz");
static const u8 sTaurosGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_26_2.4bpp.lz");
static const ax_sprite sTaurosSprites26[] = {
	{sTaurosGfx26, ARRAY_COUNT(sTaurosGfx26)}, 
	{NULL, 32}, 
	{sTaurosGfx26_1, ARRAY_COUNT(sTaurosGfx26_1)}, 
	{NULL, 64}, 
	{sTaurosGfx26_2, ARRAY_COUNT(sTaurosGfx26_2)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_27.4bpp.lz");
static const u8 sTaurosGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_27_1.4bpp.lz");
static const ax_sprite sTaurosSprites27[] = {
	{sTaurosGfx27, ARRAY_COUNT(sTaurosGfx27)}, 
	{NULL, 64}, 
	{sTaurosGfx27_1, ARRAY_COUNT(sTaurosGfx27_1)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_28.4bpp.lz");
static const u8 sTaurosGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_28_1.4bpp.lz");
static const u8 sTaurosGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_28_2.4bpp.lz");
static const u8 sTaurosGfx28_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_28_3.4bpp.lz");
static const ax_sprite sTaurosSprites28[] = {
	{NULL, 32}, 
	{sTaurosGfx28, ARRAY_COUNT(sTaurosGfx28)}, 
	{NULL, 32}, 
	{sTaurosGfx28_1, ARRAY_COUNT(sTaurosGfx28_1)}, 
	{NULL, 64}, 
	{sTaurosGfx28_2, ARRAY_COUNT(sTaurosGfx28_2)}, 
	{NULL, 64}, 
	{sTaurosGfx28_3, ARRAY_COUNT(sTaurosGfx28_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTaurosGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_29.4bpp.lz");
static const u8 sTaurosGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_29_1.4bpp.lz");
static const u8 sTaurosGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_29_2.4bpp.lz");
static const u8 sTaurosGfx29_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_29_3.4bpp.lz");
static const ax_sprite sTaurosSprites29[] = {
	{NULL, 32}, 
	{sTaurosGfx29, ARRAY_COUNT(sTaurosGfx29)}, 
	{NULL, 32}, 
	{sTaurosGfx29_1, ARRAY_COUNT(sTaurosGfx29_1)}, 
	{NULL, 32}, 
	{sTaurosGfx29_2, ARRAY_COUNT(sTaurosGfx29_2)}, 
	{NULL, 64}, 
	{sTaurosGfx29_3, ARRAY_COUNT(sTaurosGfx29_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTaurosGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_30.4bpp.lz");
static const u8 sTaurosGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_30_1.4bpp.lz");
static const u8 sTaurosGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_30_2.4bpp.lz");
static const ax_sprite sTaurosSprites30[] = {
	{NULL, 32}, 
	{sTaurosGfx30, ARRAY_COUNT(sTaurosGfx30)}, 
	{NULL, 32}, 
	{sTaurosGfx30_1, ARRAY_COUNT(sTaurosGfx30_1)}, 
	{NULL, 32}, 
	{sTaurosGfx30_2, ARRAY_COUNT(sTaurosGfx30_2)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sTaurosGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_31.4bpp.lz");
static const u8 sTaurosGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_31_1.4bpp.lz");
static const ax_sprite sTaurosSprites31[] = {
	{sTaurosGfx31, ARRAY_COUNT(sTaurosGfx31)}, 
	{NULL, 32}, 
	{sTaurosGfx31_1, ARRAY_COUNT(sTaurosGfx31_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTaurosGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_32.4bpp.lz");
static const u8 sTaurosGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_32_1.4bpp.lz");
static const ax_sprite sTaurosSprites32[] = {
	{NULL, 32}, 
	{sTaurosGfx32, ARRAY_COUNT(sTaurosGfx32)}, 
	{NULL, 32}, 
	{sTaurosGfx32_1, ARRAY_COUNT(sTaurosGfx32_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTaurosGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_33.4bpp.lz");
static const u8 sTaurosGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_33_1.4bpp.lz");
static const u8 sTaurosGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_33_2.4bpp.lz");
static const ax_sprite sTaurosSprites33[] = {
	{sTaurosGfx33, ARRAY_COUNT(sTaurosGfx33)}, 
	{NULL, 32}, 
	{sTaurosGfx33_1, ARRAY_COUNT(sTaurosGfx33_1)}, 
	{NULL, 32}, 
	{sTaurosGfx33_2, ARRAY_COUNT(sTaurosGfx33_2)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_34.4bpp.lz");
static const u8 sTaurosGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_34_1.4bpp.lz");
static const u8 sTaurosGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_34_2.4bpp.lz");
static const ax_sprite sTaurosSprites34[] = {
	{sTaurosGfx34, ARRAY_COUNT(sTaurosGfx34)}, 
	{NULL, 32}, 
	{sTaurosGfx34_1, ARRAY_COUNT(sTaurosGfx34_1)}, 
	{NULL, 32}, 
	{sTaurosGfx34_2, ARRAY_COUNT(sTaurosGfx34_2)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_35.4bpp.lz");
static const u8 sTaurosGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_35_1.4bpp.lz");
static const u8 sTaurosGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_35_2.4bpp.lz");
static const ax_sprite sTaurosSprites35[] = {
	{sTaurosGfx35, ARRAY_COUNT(sTaurosGfx35)}, 
	{NULL, 32}, 
	{sTaurosGfx35_1, ARRAY_COUNT(sTaurosGfx35_1)}, 
	{NULL, 32}, 
	{sTaurosGfx35_2, ARRAY_COUNT(sTaurosGfx35_2)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_36.4bpp.lz");
static const u8 sTaurosGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_36_1.4bpp.lz");
static const ax_sprite sTaurosSprites36[] = {
	{sTaurosGfx36, ARRAY_COUNT(sTaurosGfx36)}, 
	{NULL, 32}, 
	{sTaurosGfx36_1, ARRAY_COUNT(sTaurosGfx36_1)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_37.4bpp.lz");
static const u8 sTaurosGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_37_1.4bpp.lz");
static const u8 sTaurosGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_37_2.4bpp.lz");
static const u8 sTaurosGfx37_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_37_3.4bpp.lz");
static const ax_sprite sTaurosSprites37[] = {
	{sTaurosGfx37, ARRAY_COUNT(sTaurosGfx37)}, 
	{NULL, 32}, 
	{sTaurosGfx37_1, ARRAY_COUNT(sTaurosGfx37_1)}, 
	{NULL, 32}, 
	{sTaurosGfx37_2, ARRAY_COUNT(sTaurosGfx37_2)}, 
	{NULL, 32}, 
	{sTaurosGfx37_3, ARRAY_COUNT(sTaurosGfx37_3)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_38.4bpp.lz");
static const u8 sTaurosGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_38_1.4bpp.lz");
static const u8 sTaurosGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_38_2.4bpp.lz");
static const u8 sTaurosGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_38_3.4bpp.lz");
static const ax_sprite sTaurosSprites38[] = {
	{sTaurosGfx38, ARRAY_COUNT(sTaurosGfx38)}, 
	{NULL, 32}, 
	{sTaurosGfx38_1, ARRAY_COUNT(sTaurosGfx38_1)}, 
	{NULL, 32}, 
	{sTaurosGfx38_2, ARRAY_COUNT(sTaurosGfx38_2)}, 
	{NULL, 32}, 
	{sTaurosGfx38_3, ARRAY_COUNT(sTaurosGfx38_3)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_39.4bpp.lz");
static const u8 sTaurosGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_39_1.4bpp.lz");
static const u8 sTaurosGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_39_2.4bpp.lz");
static const ax_sprite sTaurosSprites39[] = {
	{NULL, 32}, 
	{sTaurosGfx39, ARRAY_COUNT(sTaurosGfx39)}, 
	{NULL, 32}, 
	{sTaurosGfx39_1, ARRAY_COUNT(sTaurosGfx39_1)}, 
	{NULL, 32}, 
	{sTaurosGfx39_2, ARRAY_COUNT(sTaurosGfx39_2)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_40.4bpp.lz");
static const u8 sTaurosGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_40_1.4bpp.lz");
static const ax_sprite sTaurosSprites40[] = {
	{sTaurosGfx40, ARRAY_COUNT(sTaurosGfx40)}, 
	{NULL, 64}, 
	{sTaurosGfx40_1, ARRAY_COUNT(sTaurosGfx40_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sTaurosGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_41.4bpp.lz");
static const ax_sprite sTaurosSprites41[] = {
	{sTaurosGfx41, ARRAY_COUNT(sTaurosGfx41)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_42.4bpp.lz");
static const ax_sprite sTaurosSprites42[] = {
	{sTaurosGfx42, ARRAY_COUNT(sTaurosGfx42)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_43.4bpp.lz");
static const ax_sprite sTaurosSprites43[] = {
	{sTaurosGfx43, ARRAY_COUNT(sTaurosGfx43)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_44.4bpp.lz");
static const ax_sprite sTaurosSprites44[] = {
	{sTaurosGfx44, ARRAY_COUNT(sTaurosGfx44)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_45.4bpp.lz");
static const ax_sprite sTaurosSprites45[] = {
	{sTaurosGfx45, ARRAY_COUNT(sTaurosGfx45)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_46.4bpp.lz");
static const ax_sprite sTaurosSprites46[] = {
	{sTaurosGfx46, ARRAY_COUNT(sTaurosGfx46)}, 
	{NULL, 0}
};
static const u8 sTaurosGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/tauros/sprite_47.4bpp.lz");
static const ax_sprite sTaurosSprites47[] = {
	{sTaurosGfx47, ARRAY_COUNT(sTaurosGfx47)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesTauros[] = {
	sTaurosPose1,
	sTaurosPose2,
	sTaurosPose3,
	sTaurosPose4,
	sTaurosPose5,
	sTaurosPose6,
	sTaurosPose7,
	sTaurosPose8,
	sTaurosPose9,
	sTaurosPose10,
	sTaurosPose11,
	sTaurosPose12,
	sTaurosPose13,
	sTaurosPose14,
	sTaurosPose15,
	sTaurosPose16,
	sTaurosPose17,
	sTaurosPose18,
	sTaurosPose19,
	sTaurosPose20,
	sTaurosPose21,
	sTaurosPose22,
	sTaurosPose23,
	sTaurosPose24,
	sTaurosPose25,
	sTaurosPose26,
	sTaurosPose27,
	sTaurosPose28,
	sTaurosPose29,
	sTaurosPose30,
	sTaurosPose31,
	sTaurosPose32,
	sTaurosPose33,
	sTaurosPose34,
	sTaurosPose35,
	sTaurosPose36,
	sTaurosPose37,
	sTaurosPose38,
	sTaurosPose39,
	sTaurosPose40,
	sTaurosPose41,
	sTaurosPose42,
	sTaurosPose43,
	sTaurosPose44,
	sTaurosPose45,
	sTaurosPose46,
	sTaurosPose47,
	sTaurosPose48,
	sTaurosPose1,
	sTaurosPose2,
	sTaurosPose3,
	sTaurosPose52,
	sTaurosPose53,
	sTaurosPose4,
	sTaurosPose55,
	sTaurosPose56,
	sTaurosPose57,
	sTaurosPose58,
	sTaurosPose7,
	sTaurosPose60,
	sTaurosPose9,
	sTaurosPose62,
	sTaurosPose63,
	sTaurosPose10,
	sTaurosPose65,
	sTaurosPose12,
	sTaurosPose67,
	sTaurosPose68,
	sTaurosPose13,
	sTaurosPose70,
	sTaurosPose15,
	sTaurosPose72,
	sTaurosPose73,
	sTaurosPose16,
	sTaurosPose75,
	sTaurosPose18,
	sTaurosPose77,
	sTaurosPose78,
	sTaurosPose19,
	sTaurosPose80,
	sTaurosPose21,
	sTaurosPose82,
	sTaurosPose83,
	sTaurosPose22,
	sTaurosPose85,
	sTaurosPose24,
	sTaurosPose87,
	sTaurosPose88,
	sTaurosPose89,
	sTaurosPose90,
	sTaurosPose91,
	sTaurosPose77,
	sTaurosPose93,
	sTaurosPose94,
	sTaurosPose95,
	sTaurosPose96,
	sTaurosPose1,
	sTaurosPose22,
	sTaurosPose19,
	sTaurosPose16,
	sTaurosPose13,
	sTaurosPose10,
	sTaurosPose7,
	sTaurosPose4,
	sTaurosPose105,
	sTaurosPose106,
	sTaurosPose107,
	sTaurosPose108,
	sTaurosPose109,
	sTaurosPose110,
	sTaurosPose111,
	sTaurosPose112,
	sTaurosPose113,
	sTaurosPose114,
	sTaurosPose1,
	sTaurosPose2,
	sTaurosPose3,
	sTaurosPose4,
	sTaurosPose5,
	sTaurosPose6,
	sTaurosPose7,
	sTaurosPose8,
	sTaurosPose9,
	sTaurosPose10,
	sTaurosPose11,
	sTaurosPose12,
	sTaurosPose13,
	sTaurosPose14,
	sTaurosPose15,
	sTaurosPose16,
	sTaurosPose17,
	sTaurosPose18,
	sTaurosPose19,
	sTaurosPose20,
	sTaurosPose21,
	sTaurosPose22,
	sTaurosPose23,
	sTaurosPose24,
	sTaurosPose139,
	sTaurosPose140,
	sTaurosPose141,
	sTaurosPose142,
	sTaurosPose143,
	sTaurosPose144,
	sTaurosPose145,
	sTaurosPose146,
	sTaurosPose147,
	sTaurosPose148,
	sTaurosPose63,
	sTaurosPose150,
	sTaurosPose151,
	sTaurosPose152,
	sTaurosPose153,
	sTaurosPose154,
	sTaurosPose1,
	sTaurosPose2,
	sTaurosPose3,
	sTaurosPose4,
	sTaurosPose5,
	sTaurosPose160,
	sTaurosPose7,
	sTaurosPose8,
	sTaurosPose9,
	sTaurosPose10,
	sTaurosPose11,
	sTaurosPose12,
	sTaurosPose13,
	sTaurosPose14,
	sTaurosPose15,
	sTaurosPose16,
	sTaurosPose17,
	sTaurosPose18,
	sTaurosPose19,
	sTaurosPose20,
	sTaurosPose21,
	sTaurosPose22,
	sTaurosPose23,
	sTaurosPose178,
	sTaurosPose89,
	sTaurosPose90,
	sTaurosPose91,
	sTaurosPose77,
	sTaurosPose93,
	sTaurosPose94,
	sTaurosPose95,
	sTaurosPose96,
	sTaurosPose1,
	sTaurosPose22,
	sTaurosPose19,
	sTaurosPose16,
	sTaurosPose13,
	sTaurosPose10,
	sTaurosPose7,
	sTaurosPose4,
};

static const struct PositionSets sAxPositionsTauros[] = {
	[0] = { .set = { {-1, -2}, {-6, 2}, {4, 2}, {-1, -11} } },
	[1] = { .set = { {-1, -7}, {-6, -3}, {4, -3}, {-1, -15} } },
	[2] = { .set = { {-1, 1}, {-7, 4}, {5, 4}, {-1, -11} } },
	[3] = { .set = { {5, -2}, {7, -1}, {0, 2}, {-3, -12} } },
	[4] = { .set = { {7, -5}, {5, -4}, {-3, -2}, {-2, -13} } },
	[5] = { .set = { {6, 0}, {14, -3}, {3, 2}, {-2, -12} } },
	[6] = { .set = { {8, -4}, {6, -3}, {2, 1}, {-3, -11} } },
	[7] = { .set = { {9, -6}, {7, -5}, {2, -2}, {0, -12} } },
	[8] = { .set = { {9, -2}, {12, -5}, {6, 1}, {-1, -12} } },
	[9] = { .set = { {5, -11}, {-4, -10}, {4, -3}, {-1, -14} } },
	[10] = { .set = { {7, -15}, {-3, -13}, {6, -7}, {-2, -13} } },
	[11] = { .set = { {8, -11}, {1, -13}, {10, -6}, {-1, -14} } },
	[12] = { .set = { {-1, -13}, {5, -7}, {-7, -7}, {-1, -14} } },
	[13] = { .set = { {-1, -18}, {6, -9}, {-8, -9}, {-1, -15} } },
	[14] = { .set = { {-1, -14}, {7, -8}, {-10, -9}, {-1, -16} } },
	[15] = { .set = { {-7, -11}, {2, -10}, {-6, -3}, {-1, -14} } },
	[16] = { .set = { {-9, -15}, {1, -13}, {-8, -7}, {0, -13} } },
	[17] = { .set = { {-10, -11}, {-3, -13}, {-12, -6}, {-1, -14} } },
	[18] = { .set = { {-10, -4}, {-8, -3}, {-4, 1}, {1, -11} } },
	[19] = { .set = { {-11, -6}, {-9, -5}, {-4, -2}, {-2, -12} } },
	[20] = { .set = { {-11, -2}, {-14, -5}, {-8, 1}, {-1, -12} } },
	[21] = { .set = { {-7, -2}, {-9, -1}, {-2, 2}, {1, -12} } },
	[22] = { .set = { {-9, -5}, {-7, -4}, {1, -2}, {0, -13} } },
	[23] = { .set = { {-7, 0}, {-15, -3}, {-4, 2}, {1, -12} } },
	[24] = { .set = { {-1, -2}, {-6, 1}, {4, 1}, {-1, -14} } },
	[25] = { .set = { {-1, -6}, {-6, -4}, {4, -4}, {-1, -15} } },
	[26] = { .set = { {-1, 2}, {-7, 4}, {5, 4}, {-1, -11} } },
	[27] = { .set = { {3, -1}, {8, -1}, {1, 2}, {-1, -13} } },
	[28] = { .set = { {5, -4}, {3, -6}, {-2, -2}, {0, -16} } },
	[29] = { .set = { {5, 0}, {15, -4}, {4, 2}, {-1, -13} } },
	[30] = { .set = { {5, -3}, {4, -5}, {2, 1}, {-2, -12} } },
	[31] = { .set = { {6, -5}, {3, -6}, {1, -2}, {-1, -14} } },
	[32] = { .set = { {5, -2}, {11, -5}, {5, 1}, {0, -12} } },
	[33] = { .set = { {5, -9}, {-6, -8}, {4, -3}, {-1, -14} } },
	[34] = { .set = { {7, -14}, {-3, -11}, {5, -7}, {-1, -14} } },
	[35] = { .set = { {8, -11}, {1, -8}, {10, -5}, {-1, -14} } },
	[36] = { .set = { {-1, -11}, {5, -7}, {-7, -7}, {-1, -14} } },
	[37] = { .set = { {-1, -17}, {6, -8}, {-8, -8}, {-1, -15} } },
	[38] = { .set = { {-1, -14}, {8, -9}, {-10, -9}, {-1, -15} } },
	[39] = { .set = { {-7, -9}, {4, -8}, {-6, -3}, {-1, -14} } },
	[40] = { .set = { {-9, -14}, {1, -11}, {-7, -7}, {-1, -14} } },
	[41] = { .set = { {-10, -11}, {-3, -8}, {-12, -5}, {-1, -14} } },
	[42] = { .set = { {-7, -3}, {-6, -5}, {-4, 1}, {0, -12} } },
	[43] = { .set = { {-8, -5}, {-5, -6}, {-3, -2}, {-1, -14} } },
	[44] = { .set = { {-7, -2}, {-13, -5}, {-7, 1}, {-2, -12} } },
	[45] = { .set = { {-5, -1}, {-10, -1}, {-3, 2}, {-1, -13} } },
	[46] = { .set = { {-7, -4}, {-5, -6}, {0, -2}, {-2, -16} } },
	[47] = { .set = { {-5, 0}, {-15, -4}, {-4, 2}, {1, -13} } },
	[48] = { .set = { {-1, -2}, {-6, 2}, {4, 2}, {-1, -11} } },
	[49] = { .set = { {-1, -7}, {-6, -3}, {4, -3}, {-1, -15} } },
	[50] = { .set = { {-1, 1}, {-7, 4}, {5, 4}, {-1, -11} } },
	[51] = { .set = { {-3, -24}, {-9, -12}, {11, -15}, {0, -15} } },
	[52] = { .set = { {-1, -23}, {-10, -13}, {10, -12}, {0, -17} } },
	[53] = { .set = { {5, -2}, {7, -1}, {0, 2}, {-3, -12} } },
	[54] = { .set = { {9, -3}, {7, -2}, {-1, 0}, {0, -11} } },
	[55] = { .set = { {5, 0}, {13, -3}, {2, 2}, {-3, -12} } },
	[56] = { .set = { {4, -24}, {8, -11}, {-1, -12}, {-2, -17} } },
	[57] = { .set = { {4, -23}, {10, -13}, {-3, -8}, {-2, -16} } },
	[58] = { .set = { {8, -4}, {6, -3}, {2, 1}, {-3, -11} } },
	[59] = { .set = { {12, -6}, {10, -5}, {5, -2}, {3, -12} } },
	[60] = { .set = { {9, -2}, {12, -5}, {6, 1}, {-1, -12} } },
	[61] = { .set = { {6, -23}, {4, -9}, {10, -11}, {-3, -14} } },
	[62] = { .set = { {5, -21}, {10, -10}, {9, -5}, {-2, -12} } },
	[63] = { .set = { {5, -11}, {-4, -10}, {4, -3}, {-1, -14} } },
	[64] = { .set = { {9, -17}, {-1, -15}, {8, -9}, {0, -15} } },
	[65] = { .set = { {8, -11}, {1, -13}, {10, -6}, {-1, -14} } },
	[66] = { .set = { {3, -25}, {-1, -14}, {9, -12}, {-4, -14} } },
	[67] = { .set = { {4, -22}, {-3, -13}, {7, -8}, {-4, -14} } },
	[68] = { .set = { {-1, -13}, {5, -7}, {-7, -7}, {-1, -14} } },
	[69] = { .set = { {-1, -19}, {6, -10}, {-8, -10}, {-1, -16} } },
	[70] = { .set = { {-1, -14}, {7, -8}, {-10, -9}, {-1, -16} } },
	[71] = { .set = { {0, -22}, {9, -12}, {-9, -14}, {0, -11} } },
	[72] = { .set = { {0, -21}, {9, -14}, {-9, -10}, {0, -10} } },
	[73] = { .set = { {-7, -11}, {2, -10}, {-6, -3}, {-1, -14} } },
	[74] = { .set = { {-11, -17}, {-1, -15}, {-10, -9}, {-2, -15} } },
	[75] = { .set = { {-10, -11}, {-3, -13}, {-12, -6}, {-1, -14} } },
	[76] = { .set = { {-5, -25}, {-1, -14}, {-11, -12}, {2, -14} } },
	[77] = { .set = { {-6, -22}, {1, -13}, {-9, -8}, {2, -14} } },
	[78] = { .set = { {-10, -4}, {-8, -3}, {-4, 1}, {1, -11} } },
	[79] = { .set = { {-14, -6}, {-12, -5}, {-7, -2}, {-5, -12} } },
	[80] = { .set = { {-11, -2}, {-14, -5}, {-8, 1}, {-1, -12} } },
	[81] = { .set = { {-8, -23}, {-6, -9}, {-12, -11}, {1, -14} } },
	[82] = { .set = { {-7, -21}, {-12, -10}, {-11, -5}, {0, -12} } },
	[83] = { .set = { {-7, -2}, {-9, -1}, {-2, 2}, {1, -12} } },
	[84] = { .set = { {-11, -3}, {-9, -2}, {-1, 0}, {-2, -11} } },
	[85] = { .set = { {-7, 0}, {-15, -3}, {-4, 2}, {1, -12} } },
	[86] = { .set = { {-6, -24}, {-10, -11}, {-1, -12}, {0, -17} } },
	[87] = { .set = { {-6, -23}, {-12, -13}, {1, -8}, {0, -16} } },
	[88] = { .set = { {-3, -22}, {-9, -10}, {11, -13}, {0, -13} } },
	[89] = { .set = { {-6, -22}, {-10, -9}, {-1, -10}, {0, -15} } },
	[90] = { .set = { {-7, -22}, {-5, -8}, {-11, -10}, {2, -13} } },
	[91] = { .set = { {-5, -25}, {-1, -14}, {-11, -12}, {2, -14} } },
	[92] = { .set = { {0, -23}, {9, -13}, {-9, -15}, {0, -12} } },
	[93] = { .set = { {4, -25}, {0, -14}, {10, -12}, {-3, -14} } },
	[94] = { .set = { {7, -22}, {5, -8}, {11, -10}, {-2, -13} } },
	[95] = { .set = { {5, -22}, {9, -9}, {0, -10}, {-1, -15} } },
	[96] = { .set = { {-1, -2}, {-6, 2}, {4, 2}, {-1, -11} } },
	[97] = { .set = { {-7, -2}, {-9, -1}, {-2, 2}, {1, -12} } },
	[98] = { .set = { {-10, -4}, {-8, -3}, {-4, 1}, {1, -11} } },
	[99] = { .set = { {-7, -11}, {2, -10}, {-6, -3}, {-1, -14} } },
	[100] = { .set = { {-1, -13}, {5, -7}, {-7, -7}, {-1, -14} } },
	[101] = { .set = { {5, -11}, {-4, -10}, {4, -3}, {-1, -14} } },
	[102] = { .set = { {8, -4}, {6, -3}, {2, 1}, {-3, -11} } },
	[103] = { .set = { {5, -2}, {7, -1}, {0, 2}, {-3, -12} } },
	[104] = { .set = { {-9, 0}, {-11, -1}, {-8, 2}, {-1, -7} } },
	[105] = { .set = { {-9, 0}, {-11, -1}, {-8, 2}, {0, -7} } },
	[106] = { .set = { {-1, -22}, {-6, -12}, {5, -10}, {-1, -13} } },
	[107] = { .set = { {8, -21}, {13, -14}, {5, -9}, {-1, -15} } },
	[108] = { .set = { {8, -19}, {11, -11}, {6, -6}, {-1, -14} } },
	[109] = { .set = { {6, -22}, {-2, -15}, {7, -11}, {-2, -14} } },
	[110] = { .set = { {0, -24}, {5, -14}, {-8, -13}, {0, -13} } },
	[111] = { .set = { {-7, -22}, {1, -15}, {-8, -11}, {1, -14} } },
	[112] = { .set = { {-9, -19}, {-12, -11}, {-7, -6}, {0, -14} } },
	[113] = { .set = { {-9, -20}, {-14, -13}, {-6, -8}, {0, -14} } },
	[114] = { .set = { {-1, -2}, {-6, 2}, {4, 2}, {-1, -11} } },
	[115] = { .set = { {-1, -7}, {-6, -3}, {4, -3}, {-1, -15} } },
	[116] = { .set = { {-1, 1}, {-7, 4}, {5, 4}, {-1, -11} } },
	[117] = { .set = { {5, -2}, {7, -1}, {0, 2}, {-3, -12} } },
	[118] = { .set = { {7, -5}, {5, -4}, {-3, -2}, {-2, -13} } },
	[119] = { .set = { {6, 0}, {14, -3}, {3, 2}, {-2, -12} } },
	[120] = { .set = { {8, -4}, {6, -3}, {2, 1}, {-3, -11} } },
	[121] = { .set = { {9, -6}, {7, -5}, {2, -2}, {0, -12} } },
	[122] = { .set = { {9, -2}, {12, -5}, {6, 1}, {-1, -12} } },
	[123] = { .set = { {5, -11}, {-4, -10}, {4, -3}, {-1, -14} } },
	[124] = { .set = { {7, -15}, {-3, -13}, {6, -7}, {-2, -13} } },
	[125] = { .set = { {8, -11}, {1, -13}, {10, -6}, {-1, -14} } },
	[126] = { .set = { {-1, -13}, {5, -7}, {-7, -7}, {-1, -14} } },
	[127] = { .set = { {-1, -18}, {6, -9}, {-8, -9}, {-1, -15} } },
	[128] = { .set = { {-1, -14}, {7, -8}, {-10, -9}, {-1, -16} } },
	[129] = { .set = { {-7, -11}, {2, -10}, {-6, -3}, {-1, -14} } },
	[130] = { .set = { {-9, -15}, {1, -13}, {-8, -7}, {0, -13} } },
	[131] = { .set = { {-10, -11}, {-3, -13}, {-12, -6}, {-1, -14} } },
	[132] = { .set = { {-10, -4}, {-8, -3}, {-4, 1}, {1, -11} } },
	[133] = { .set = { {-11, -6}, {-9, -5}, {-4, -2}, {-2, -12} } },
	[134] = { .set = { {-11, -2}, {-14, -5}, {-8, 1}, {-1, -12} } },
	[135] = { .set = { {-7, -2}, {-9, -1}, {-2, 2}, {1, -12} } },
	[136] = { .set = { {-9, -5}, {-7, -4}, {1, -2}, {0, -13} } },
	[137] = { .set = { {-7, 0}, {-15, -3}, {-4, 2}, {1, -12} } },
	[138] = { .set = { {-1, 2}, {-7, 5}, {5, 5}, {-1, -10} } },
	[139] = { .set = { {-7, 1}, {-15, -2}, {-4, 3}, {1, -11} } },
	[140] = { .set = { {-11, -1}, {-14, -4}, {-8, 2}, {-1, -11} } },
	[141] = { .set = { {-10, -10}, {-3, -12}, {-12, -5}, {-1, -13} } },
	[142] = { .set = { {-1, -11}, {7, -5}, {-10, -6}, {-1, -13} } },
	[143] = { .set = { {9, -10}, {2, -12}, {11, -5}, {0, -13} } },
	[144] = { .set = { {10, -1}, {13, -4}, {7, 2}, {0, -11} } },
	[145] = { .set = { {6, 1}, {14, -2}, {3, 3}, {-2, -11} } },
	[146] = { .set = { {-1, -21}, {-10, -11}, {10, -10}, {0, -15} } },
	[147] = { .set = { {5, -21}, {11, -11}, {-2, -6}, {-1, -14} } },
	[148] = { .set = { {5, -21}, {10, -10}, {9, -5}, {-2, -12} } },
	[149] = { .set = { {5, -22}, {-2, -13}, {8, -8}, {-3, -14} } },
	[150] = { .set = { {0, -23}, {9, -16}, {-9, -12}, {0, -12} } },
	[151] = { .set = { {-7, -22}, {0, -13}, {-10, -8}, {1, -14} } },
	[152] = { .set = { {-6, -21}, {-11, -10}, {-10, -5}, {1, -12} } },
	[153] = { .set = { {-6, -21}, {-12, -11}, {1, -6}, {0, -14} } },
	[154] = { .set = { {-1, -2}, {-6, 2}, {4, 2}, {-1, -11} } },
	[155] = { .set = { {-1, -7}, {-6, -3}, {4, -3}, {-1, -15} } },
	[156] = { .set = { {-1, 1}, {-7, 4}, {5, 4}, {-1, -11} } },
	[157] = { .set = { {5, -2}, {7, -1}, {0, 2}, {-3, -12} } },
	[158] = { .set = { {7, -5}, {5, -4}, {-3, -2}, {-2, -13} } },
	[159] = { .set = { {7, 0}, {15, -3}, {4, 2}, {-1, -12} } },
	[160] = { .set = { {8, -4}, {6, -3}, {2, 1}, {-3, -11} } },
	[161] = { .set = { {9, -6}, {7, -5}, {2, -2}, {0, -12} } },
	[162] = { .set = { {9, -2}, {12, -5}, {6, 1}, {-1, -12} } },
	[163] = { .set = { {5, -11}, {-4, -10}, {4, -3}, {-1, -14} } },
	[164] = { .set = { {7, -15}, {-3, -13}, {6, -7}, {-2, -13} } },
	[165] = { .set = { {8, -11}, {1, -13}, {10, -6}, {-1, -14} } },
	[166] = { .set = { {-1, -13}, {5, -7}, {-7, -7}, {-1, -14} } },
	[167] = { .set = { {-1, -18}, {6, -9}, {-8, -9}, {-1, -15} } },
	[168] = { .set = { {-1, -14}, {7, -8}, {-10, -9}, {-1, -16} } },
	[169] = { .set = { {-7, -11}, {2, -10}, {-6, -3}, {-1, -14} } },
	[170] = { .set = { {-9, -15}, {1, -13}, {-8, -7}, {0, -13} } },
	[171] = { .set = { {-10, -11}, {-3, -13}, {-12, -6}, {-1, -14} } },
	[172] = { .set = { {-10, -4}, {-8, -3}, {-4, 1}, {1, -11} } },
	[173] = { .set = { {-11, -6}, {-9, -5}, {-4, -2}, {-2, -12} } },
	[174] = { .set = { {-11, -2}, {-14, -5}, {-8, 1}, {-1, -12} } },
	[175] = { .set = { {-7, -2}, {-9, -1}, {-2, 2}, {1, -12} } },
	[176] = { .set = { {-9, -5}, {-7, -4}, {1, -2}, {0, -13} } },
	[177] = { .set = { {-8, 0}, {-16, -3}, {-5, 2}, {0, -12} } },
	[178] = { .set = { {-3, -22}, {-9, -10}, {11, -13}, {0, -13} } },
	[179] = { .set = { {-6, -22}, {-10, -9}, {-1, -10}, {0, -15} } },
	[180] = { .set = { {-7, -22}, {-5, -8}, {-11, -10}, {2, -13} } },
	[181] = { .set = { {-5, -25}, {-1, -14}, {-11, -12}, {2, -14} } },
	[182] = { .set = { {0, -23}, {9, -13}, {-9, -15}, {0, -12} } },
	[183] = { .set = { {4, -25}, {0, -14}, {10, -12}, {-3, -14} } },
	[184] = { .set = { {7, -22}, {5, -8}, {11, -10}, {-2, -13} } },
	[185] = { .set = { {5, -22}, {9, -9}, {0, -10}, {-1, -15} } },
	[186] = { .set = { {-1, -2}, {-6, 2}, {4, 2}, {-1, -11} } },
	[187] = { .set = { {-7, -2}, {-9, -1}, {-2, 2}, {1, -12} } },
	[188] = { .set = { {-10, -4}, {-8, -3}, {-4, 1}, {1, -11} } },
	[189] = { .set = { {-7, -11}, {2, -10}, {-6, -3}, {-1, -14} } },
	[190] = { .set = { {-1, -13}, {5, -7}, {-7, -7}, {-1, -14} } },
	[191] = { .set = { {5, -11}, {-4, -10}, {4, -3}, {-1, -14} } },
	[192] = { .set = { {8, -4}, {6, -3}, {2, 1}, {-3, -11} } },
	[193] = { .set = { {5, -2}, {7, -1}, {0, 2}, {-3, -12} } },
};

static const ax_anim *const sTaurosAnimTable1[] = {
	AX_ANIM_PTR(sTaurosAnims_1_1),
	AX_ANIM_PTR(sTaurosAnims_1_2),
	AX_ANIM_PTR(sTaurosAnims_1_3),
	AX_ANIM_PTR(sTaurosAnims_1_4),
	AX_ANIM_PTR(sTaurosAnims_1_5),
	AX_ANIM_PTR(sTaurosAnims_1_6),
	AX_ANIM_PTR(sTaurosAnims_1_7),
	AX_ANIM_PTR(sTaurosAnims_1_8),
};

static const ax_anim *const sTaurosAnimTable2[] = {
	AX_ANIM_PTR(sTaurosAnims_2_1),
	AX_ANIM_PTR(sTaurosAnims_2_2),
	AX_ANIM_PTR(sTaurosAnims_2_3),
	AX_ANIM_PTR(sTaurosAnims_2_4),
	AX_ANIM_PTR(sTaurosAnims_2_5),
	AX_ANIM_PTR(sTaurosAnims_2_6),
	AX_ANIM_PTR(sTaurosAnims_2_7),
	AX_ANIM_PTR(sTaurosAnims_2_8),
};

static const ax_anim *const sTaurosAnimTable3[] = {
	AX_ANIM_PTR(sTaurosAnims_3_1),
	AX_ANIM_PTR(sTaurosAnims_3_2),
	AX_ANIM_PTR(sTaurosAnims_3_3),
	AX_ANIM_PTR(sTaurosAnims_3_4),
	AX_ANIM_PTR(sTaurosAnims_3_5),
	AX_ANIM_PTR(sTaurosAnims_3_6),
	AX_ANIM_PTR(sTaurosAnims_3_7),
	AX_ANIM_PTR(sTaurosAnims_3_8),
};

static const ax_anim *const sTaurosAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02219),
	AX_ANIM_PTR(gAxSharedAnim_02287),
	AX_ANIM_PTR(gAxSharedAnim_02272),
	AX_ANIM_PTR(gAxSharedAnim_02262),
	AX_ANIM_PTR(gAxSharedAnim_02260),
	AX_ANIM_PTR(gAxSharedAnim_02249),
	AX_ANIM_PTR(gAxSharedAnim_02234),
	AX_ANIM_PTR(gAxSharedAnim_02224),
};

static const ax_anim *const sTaurosAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_02292),
	AX_ANIM_PTR(gAxSharedAnim_00169),
	AX_ANIM_PTR(gAxSharedAnim_00162),
	AX_ANIM_PTR(gAxSharedAnim_00159),
	AX_ANIM_PTR(gAxSharedAnim_00154),
	AX_ANIM_PTR(gAxSharedAnim_02316),
	AX_ANIM_PTR(gAxSharedAnim_02311),
	AX_ANIM_PTR(gAxSharedAnim_02300),
};

static const ax_anim *const sTaurosAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
	AX_ANIM_PTR(gAxSharedAnim_02360),
};

static const ax_anim *const sTaurosAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00194),
	AX_ANIM_PTR(gAxSharedAnim_00202),
	AX_ANIM_PTR(gAxSharedAnim_00211),
	AX_ANIM_PTR(gAxSharedAnim_00219),
	AX_ANIM_PTR(gAxSharedAnim_00233),
	AX_ANIM_PTR(gAxSharedAnim_00245),
	AX_ANIM_PTR(gAxSharedAnim_00254),
	AX_ANIM_PTR(gAxSharedAnim_00260),
};

static const ax_anim *const sTaurosAnimTable8[] = {
	AX_ANIM_PTR(sTaurosAnims_8_1),
	AX_ANIM_PTR(sTaurosAnims_8_2),
	AX_ANIM_PTR(sTaurosAnims_8_3),
	AX_ANIM_PTR(sTaurosAnims_8_4),
	AX_ANIM_PTR(sTaurosAnims_8_5),
	AX_ANIM_PTR(sTaurosAnims_8_6),
	AX_ANIM_PTR(sTaurosAnims_8_7),
	AX_ANIM_PTR(sTaurosAnims_8_8),
};

static const ax_anim *const sTaurosAnimTable9[] = {
	AX_ANIM_PTR(sTaurosAnims_9_1),
	AX_ANIM_PTR(sTaurosAnims_9_2),
	AX_ANIM_PTR(sTaurosAnims_9_3),
	AX_ANIM_PTR(sTaurosAnims_9_4),
	AX_ANIM_PTR(sTaurosAnims_9_5),
	AX_ANIM_PTR(sTaurosAnims_9_6),
	AX_ANIM_PTR(sTaurosAnims_9_7),
	AX_ANIM_PTR(sTaurosAnims_9_8),
};

static const ax_anim *const sTaurosAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00540),
	AX_ANIM_PTR(gAxSharedAnim_00547),
	AX_ANIM_PTR(gAxSharedAnim_00555),
	AX_ANIM_PTR(gAxSharedAnim_00564),
	AX_ANIM_PTR(gAxSharedAnim_00574),
	AX_ANIM_PTR(gAxSharedAnim_00584),
	AX_ANIM_PTR(gAxSharedAnim_00593),
	AX_ANIM_PTR(gAxSharedAnim_00600),
};

static const ax_anim *const sTaurosAnimTable11[] = {
	AX_ANIM_PTR(sTaurosAnims_11_1),
	AX_ANIM_PTR(sTaurosAnims_11_2),
	AX_ANIM_PTR(sTaurosAnims_11_3),
	AX_ANIM_PTR(gAxSharedAnim_00712),
	AX_ANIM_PTR(sTaurosAnims_11_5),
	AX_ANIM_PTR(gAxSharedAnim_00778),
	AX_ANIM_PTR(gAxSharedAnim_00826),
	AX_ANIM_PTR(gAxSharedAnim_00859),
};

static const ax_anim *const sTaurosAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_00907),
	AX_ANIM_PTR(gAxSharedAnim_00996),
	AX_ANIM_PTR(gAxSharedAnim_00971),
	AX_ANIM_PTR(gAxSharedAnim_00960),
	AX_ANIM_PTR(gAxSharedAnim_00959),
	AX_ANIM_PTR(gAxSharedAnim_00945),
	AX_ANIM_PTR(gAxSharedAnim_00925),
	AX_ANIM_PTR(gAxSharedAnim_00908),
};

static const ax_anim *const sTaurosAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01017),
	AX_ANIM_PTR(gAxSharedAnim_01123),
	AX_ANIM_PTR(gAxSharedAnim_01112),
	AX_ANIM_PTR(gAxSharedAnim_01093),
	AX_ANIM_PTR(gAxSharedAnim_01079),
	AX_ANIM_PTR(gAxSharedAnim_01063),
	AX_ANIM_PTR(gAxSharedAnim_01048),
	AX_ANIM_PTR(gAxSharedAnim_01028),
};

static const ax_anim *const *const sAxAnimationsTauros[] = {
	sTaurosAnimTable1,
	sTaurosAnimTable2,
	sTaurosAnimTable3,
	sTaurosAnimTable4,
	sTaurosAnimTable5,
	sTaurosAnimTable6,
	sTaurosAnimTable7,
	sTaurosAnimTable8,
	sTaurosAnimTable9,
	sTaurosAnimTable10,
	sTaurosAnimTable11,
	sTaurosAnimTable12,
	sTaurosAnimTable13,
};

static const ax_sprite *const sAxSpritesTauros[] = {
	sTaurosSprites1,
	sTaurosSprites2,
	sTaurosSprites3,
	sTaurosSprites4,
	sTaurosSprites5,
	sTaurosSprites6,
	sTaurosSprites7,
	sTaurosSprites8,
	sTaurosSprites9,
	sTaurosSprites10,
	sTaurosSprites11,
	sTaurosSprites12,
	sTaurosSprites13,
	sTaurosSprites14,
	sTaurosSprites15,
	sTaurosSprites16,
	sTaurosSprites17,
	sTaurosSprites18,
	sTaurosSprites19,
	sTaurosSprites20,
	sTaurosSprites21,
	sTaurosSprites22,
	sTaurosSprites23,
	sTaurosSprites24,
	sTaurosSprites25,
	sTaurosSprites26,
	sTaurosSprites27,
	sTaurosSprites28,
	sTaurosSprites29,
	sTaurosSprites30,
	sTaurosSprites31,
	sTaurosSprites32,
	sTaurosSprites33,
	sTaurosSprites34,
	sTaurosSprites35,
	sTaurosSprites36,
	sTaurosSprites37,
	sTaurosSprites38,
	sTaurosSprites39,
	sTaurosSprites40,
	sTaurosSprites41,
	sTaurosSprites42,
	sTaurosSprites43,
	sTaurosSprites44,
	sTaurosSprites45,
	sTaurosSprites46,
	sTaurosSprites47,
};

static const axmain sAxMainTauros = {
	.poses = sAxPosesTauros,
	.animations = sAxAnimationsTauros,
	.animCount = ARRAY_COUNT(sAxAnimationsTauros),
	.spriteData = sAxSpritesTauros,
	.positions = sAxPositionsTauros,
};
