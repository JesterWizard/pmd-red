/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainCrawdaunt;
const SiroArchive gAxCrawdaunt = {"SIRO", &sAxMainCrawdaunt};

static const ax_pose sCrawdauntPose1[] = {
	AX_POSE(0, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose2[] = {
	AX_POSE(1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose3[] = {
	AX_POSE(2, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose4[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose5[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose7[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose10[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose12[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose13[] = {
	AX_POSE(12, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose14[] = {
	AX_POSE(13, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose15[] = {
	AX_POSE(14, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose16[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose18[] = {
	AX_POSE(11, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose19[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose22[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose23[] = {
	AX_POSE(4, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose28[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose29[] = {
	AX_POSE(16, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose33[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose34[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose38[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose39[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose43[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose44[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose48[] = {
	AX_POSE(23, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose49[] = {
	AX_POSE(24, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose53[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose54[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose58[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose59[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose63[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose64[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose66[] = {
	AX_POSE(25, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose68[] = {
	AX_POSE(26, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose70[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose72[] = {
	AX_POSE(28, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose74[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose76[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose78[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose80[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose84[] = {
	AX_POSE(33, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose86[] = {
	AX_POSE(31, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose88[] = {
	AX_POSE(32, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose90[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose92[] = {
	AX_POSE(30, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose94[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose96[] = {
	AX_POSE(28, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose98[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose99[] = {
	AX_POSE(34, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose102[] = {
	AX_POSE(35, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose105[] = {
	AX_POSE(36, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(37, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(249, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(38, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(39, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(17, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose108[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose111[] = {
	AX_POSE(41, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose114[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose117[] = {
	AX_POSE(36, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(37, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(8, 3, 5)),
	AX_POSE(38, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(8, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(39, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose120[] = {
	AX_POSE(35, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose122[] = {
	AX_POSE(42, OAM1(250, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(43, OAM1(234, ST_OAM_H_RECTANGLE, 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(44, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(45, OAM1(2, ST_OAM_SQUARE     , 2), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE(46, OAM1(250, ST_OAM_H_RECTANGLE, 1), OAM2(255, ST_OAM_SIZE_0, FLIP(0, 0), 0, 0), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose124[] = {
	AX_POSE(47, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(48, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(1, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(49, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(50, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(241, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose126[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose128[] = {
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose130[] = {
	AX_POSE(53, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(49, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(15, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(16, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose132[] = {
	AX_POSE(52, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose134[] = {
	AX_POSE(51, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose136[] = {
	AX_POSE(47, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(0, ST_OAM_SIZE_1, FLIP(0, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(48, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(49, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(12, 3, 5)),
	AX_POSE(50, OAM1(236, ST_OAM_H_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(13, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose137[] = {
	AX_POSE(54, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose138[] = {
	AX_POSE(55, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose139[] = {
	AX_POSE(56, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose140[] = {
	AX_POSE(57, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose141[] = {
	AX_POSE(58, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose142[] = {
	AX_POSE(59, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose143[] = {
	AX_POSE(60, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose144[] = {
	AX_POSE(59, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose145[] = {
	AX_POSE(58, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose146[] = {
	AX_POSE(57, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose172[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose173[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose174[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose175[] = {
	AX_POSE(24, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose176[] = {
	AX_POSE(22, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose177[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose178[] = {
	AX_POSE(18, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose179[] = {
	AX_POSE(15, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose181[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose182[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose183[] = {
	AX_POSE(23, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose184[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose185[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose186[] = {
	AX_POSE(17, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose189[] = {
	AX_POSE(34, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose192[] = {
	AX_POSE(35, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose195[] = {
	AX_POSE(36, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 5)),
	AX_POSE(37, OAM1(234, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(8, 3, 5)),
	AX_POSE(38, OAM1(242, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(12, 3, 5)),
	AX_POSE(39, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(1, 0), 0, 1), OAM3(14, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose198[] = {
	AX_POSE(40, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose201[] = {
	AX_POSE(41, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose202[] = {
	AX_POSE(9, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose203[] = {
	AX_POSE(21, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose205[] = {
	AX_POSE(6, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose206[] = {
	AX_POSE(19, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose208[] = {
	AX_POSE(3, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose213[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sCrawdauntPose217[] = {
	AX_POSE(29, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const u8 sCrawdauntAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_2_1.lz");
static const u8 sCrawdauntAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_2_2.lz");
static const u8 sCrawdauntAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_2_3.lz");
static const u8 sCrawdauntAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_2_4.lz");
static const u8 sCrawdauntAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_2_5.lz");
static const u8 sCrawdauntAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_2_6.lz");
static const u8 sCrawdauntAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_2_7.lz");
static const u8 sCrawdauntAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_2_8.lz");
static const u8 sCrawdauntAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_8_1.lz");
static const u8 sCrawdauntAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_8_2.lz");
static const u8 sCrawdauntAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_8_3.lz");
static const u8 sCrawdauntAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_8_4.lz");
static const u8 sCrawdauntAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_8_5.lz");
static const u8 sCrawdauntAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_8_6.lz");
static const u8 sCrawdauntAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_8_7.lz");
static const u8 sCrawdauntAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_8_8.lz");
static const u8 sCrawdauntAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_9_1.lz");
static const u8 sCrawdauntAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_9_2.lz");
static const u8 sCrawdauntAnims_9_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_9_3.lz");
static const u8 sCrawdauntAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_9_4.lz");
static const u8 sCrawdauntAnims_9_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_9_5.lz");
static const u8 sCrawdauntAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_9_6.lz");
static const u8 sCrawdauntAnims_9_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_9_7.lz");
static const u8 sCrawdauntAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_9_8.lz");
static const u8 sCrawdauntAnims_11_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_11_1.lz");
static const u8 sCrawdauntAnims_11_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_11_2.lz");
static const u8 sCrawdauntAnims_11_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_11_3.lz");
static const u8 sCrawdauntAnims_11_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_11_5.lz");
static const u8 sCrawdauntAnims_11_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_11_7.lz");
static const u8 sCrawdauntAnims_11_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/crawdaunt/sCrawdauntAnims_11_8.lz");

static const u8 sCrawdauntGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites1[] = {
	{sCrawdauntGfx1, ARRAY_COUNT(sCrawdauntGfx1)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_2.4bpp.lz");
static const ax_sprite sCrawdauntSprites2[] = {
	{sCrawdauntGfx2, ARRAY_COUNT(sCrawdauntGfx2)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_3.4bpp.lz");
static const ax_sprite sCrawdauntSprites3[] = {
	{sCrawdauntGfx3, ARRAY_COUNT(sCrawdauntGfx3)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_4.4bpp.lz");
static const ax_sprite sCrawdauntSprites4[] = {
	{sCrawdauntGfx4, ARRAY_COUNT(sCrawdauntGfx4)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_5.4bpp.lz");
static const ax_sprite sCrawdauntSprites5[] = {
	{sCrawdauntGfx5, ARRAY_COUNT(sCrawdauntGfx5)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_6.4bpp.lz");
static const ax_sprite sCrawdauntSprites6[] = {
	{sCrawdauntGfx6, ARRAY_COUNT(sCrawdauntGfx6)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_7.4bpp.lz");
static const ax_sprite sCrawdauntSprites7[] = {
	{sCrawdauntGfx7, ARRAY_COUNT(sCrawdauntGfx7)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_8.4bpp.lz");
static const ax_sprite sCrawdauntSprites8[] = {
	{sCrawdauntGfx8, ARRAY_COUNT(sCrawdauntGfx8)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_9.4bpp.lz");
static const ax_sprite sCrawdauntSprites9[] = {
	{sCrawdauntGfx9, ARRAY_COUNT(sCrawdauntGfx9)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_10.4bpp.lz");
static const ax_sprite sCrawdauntSprites10[] = {
	{sCrawdauntGfx10, ARRAY_COUNT(sCrawdauntGfx10)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_11.4bpp.lz");
static const ax_sprite sCrawdauntSprites11[] = {
	{sCrawdauntGfx11, ARRAY_COUNT(sCrawdauntGfx11)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_12.4bpp.lz");
static const ax_sprite sCrawdauntSprites12[] = {
	{sCrawdauntGfx12, ARRAY_COUNT(sCrawdauntGfx12)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_13.4bpp.lz");
static const ax_sprite sCrawdauntSprites13[] = {
	{sCrawdauntGfx13, ARRAY_COUNT(sCrawdauntGfx13)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_14.4bpp.lz");
static const ax_sprite sCrawdauntSprites14[] = {
	{sCrawdauntGfx14, ARRAY_COUNT(sCrawdauntGfx14)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_15.4bpp.lz");
static const ax_sprite sCrawdauntSprites15[] = {
	{sCrawdauntGfx15, ARRAY_COUNT(sCrawdauntGfx15)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_16.4bpp.lz");
static const ax_sprite sCrawdauntSprites16[] = {
	{sCrawdauntGfx16, ARRAY_COUNT(sCrawdauntGfx16)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_17.4bpp.lz");
static const ax_sprite sCrawdauntSprites17[] = {
	{sCrawdauntGfx17, ARRAY_COUNT(sCrawdauntGfx17)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_18.4bpp.lz");
static const u8 sCrawdauntGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_18_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites18[] = {
	{sCrawdauntGfx18, ARRAY_COUNT(sCrawdauntGfx18)}, 
	{NULL, 32}, 
	{sCrawdauntGfx18_1, ARRAY_COUNT(sCrawdauntGfx18_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_19.4bpp.lz");
static const u8 sCrawdauntGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_19_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites19[] = {
	{sCrawdauntGfx19, ARRAY_COUNT(sCrawdauntGfx19)}, 
	{NULL, 32}, 
	{sCrawdauntGfx19_1, ARRAY_COUNT(sCrawdauntGfx19_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_20.4bpp.lz");
static const u8 sCrawdauntGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_20_1.4bpp.lz");
static const u8 sCrawdauntGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_20_2.4bpp.lz");
static const u8 sCrawdauntGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_20_3.4bpp.lz");
static const ax_sprite sCrawdauntSprites20[] = {
	{NULL, 32}, 
	{sCrawdauntGfx20, ARRAY_COUNT(sCrawdauntGfx20)}, 
	{NULL, 64}, 
	{sCrawdauntGfx20_1, ARRAY_COUNT(sCrawdauntGfx20_1)}, 
	{NULL, 64}, 
	{sCrawdauntGfx20_2, ARRAY_COUNT(sCrawdauntGfx20_2)}, 
	{NULL, 64}, 
	{sCrawdauntGfx20_3, ARRAY_COUNT(sCrawdauntGfx20_3)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_21.4bpp.lz");
static const u8 sCrawdauntGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_21_1.4bpp.lz");
static const u8 sCrawdauntGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_21_2.4bpp.lz");
static const ax_sprite sCrawdauntSprites21[] = {
	{sCrawdauntGfx21, ARRAY_COUNT(sCrawdauntGfx21)}, 
	{NULL, 64}, 
	{sCrawdauntGfx21_1, ARRAY_COUNT(sCrawdauntGfx21_1)}, 
	{NULL, 32}, 
	{sCrawdauntGfx21_2, ARRAY_COUNT(sCrawdauntGfx21_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_22.4bpp.lz");
static const u8 sCrawdauntGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_22_1.4bpp.lz");
static const u8 sCrawdauntGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_22_2.4bpp.lz");
static const ax_sprite sCrawdauntSprites22[] = {
	{NULL, 32}, 
	{sCrawdauntGfx22, ARRAY_COUNT(sCrawdauntGfx22)}, 
	{NULL, 32}, 
	{sCrawdauntGfx22_1, ARRAY_COUNT(sCrawdauntGfx22_1)}, 
	{NULL, 32}, 
	{sCrawdauntGfx22_2, ARRAY_COUNT(sCrawdauntGfx22_2)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_23.4bpp.lz");
static const u8 sCrawdauntGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_23_1.4bpp.lz");
static const u8 sCrawdauntGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_23_2.4bpp.lz");
static const ax_sprite sCrawdauntSprites23[] = {
	{sCrawdauntGfx23, ARRAY_COUNT(sCrawdauntGfx23)}, 
	{NULL, 32}, 
	{sCrawdauntGfx23_1, ARRAY_COUNT(sCrawdauntGfx23_1)}, 
	{NULL, 32}, 
	{sCrawdauntGfx23_2, ARRAY_COUNT(sCrawdauntGfx23_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_24.4bpp.lz");
static const ax_sprite sCrawdauntSprites24[] = {
	{sCrawdauntGfx24, ARRAY_COUNT(sCrawdauntGfx24)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_25.4bpp.lz");
static const ax_sprite sCrawdauntSprites25[] = {
	{sCrawdauntGfx25, ARRAY_COUNT(sCrawdauntGfx25)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_26.4bpp.lz");
static const ax_sprite sCrawdauntSprites26[] = {
	{sCrawdauntGfx26, ARRAY_COUNT(sCrawdauntGfx26)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_27.4bpp.lz");
static const u8 sCrawdauntGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_27_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites27[] = {
	{NULL, 32}, 
	{sCrawdauntGfx27, ARRAY_COUNT(sCrawdauntGfx27)}, 
	{NULL, 32}, 
	{sCrawdauntGfx27_1, ARRAY_COUNT(sCrawdauntGfx27_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_28.4bpp.lz");
static const u8 sCrawdauntGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_28_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites28[] = {
	{sCrawdauntGfx28, ARRAY_COUNT(sCrawdauntGfx28)}, 
	{NULL, 32}, 
	{sCrawdauntGfx28_1, ARRAY_COUNT(sCrawdauntGfx28_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_29.4bpp.lz");
static const u8 sCrawdauntGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_29_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites29[] = {
	{sCrawdauntGfx29, ARRAY_COUNT(sCrawdauntGfx29)}, 
	{NULL, 32}, 
	{sCrawdauntGfx29_1, ARRAY_COUNT(sCrawdauntGfx29_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_30.4bpp.lz");
static const u8 sCrawdauntGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_30_1.4bpp.lz");
static const u8 sCrawdauntGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_30_2.4bpp.lz");
static const u8 sCrawdauntGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_30_3.4bpp.lz");
static const ax_sprite sCrawdauntSprites30[] = {
	{sCrawdauntGfx30, ARRAY_COUNT(sCrawdauntGfx30)}, 
	{NULL, 32}, 
	{sCrawdauntGfx30_1, ARRAY_COUNT(sCrawdauntGfx30_1)}, 
	{NULL, 64}, 
	{sCrawdauntGfx30_2, ARRAY_COUNT(sCrawdauntGfx30_2)}, 
	{NULL, 64}, 
	{sCrawdauntGfx30_3, ARRAY_COUNT(sCrawdauntGfx30_3)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_31.4bpp.lz");
static const u8 sCrawdauntGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_31_1.4bpp.lz");
static const u8 sCrawdauntGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_31_2.4bpp.lz");
static const ax_sprite sCrawdauntSprites31[] = {
	{sCrawdauntGfx31, ARRAY_COUNT(sCrawdauntGfx31)}, 
	{NULL, 64}, 
	{sCrawdauntGfx31_1, ARRAY_COUNT(sCrawdauntGfx31_1)}, 
	{NULL, 32}, 
	{sCrawdauntGfx31_2, ARRAY_COUNT(sCrawdauntGfx31_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_32.4bpp.lz");
static const u8 sCrawdauntGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_32_1.4bpp.lz");
static const u8 sCrawdauntGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_32_2.4bpp.lz");
static const ax_sprite sCrawdauntSprites32[] = {
	{sCrawdauntGfx32, ARRAY_COUNT(sCrawdauntGfx32)}, 
	{NULL, 32}, 
	{sCrawdauntGfx32_1, ARRAY_COUNT(sCrawdauntGfx32_1)}, 
	{NULL, 32}, 
	{sCrawdauntGfx32_2, ARRAY_COUNT(sCrawdauntGfx32_2)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_33.4bpp.lz");
static const u8 sCrawdauntGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_33_1.4bpp.lz");
static const u8 sCrawdauntGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_33_2.4bpp.lz");
static const ax_sprite sCrawdauntSprites33[] = {
	{sCrawdauntGfx33, ARRAY_COUNT(sCrawdauntGfx33)}, 
	{NULL, 32}, 
	{sCrawdauntGfx33_1, ARRAY_COUNT(sCrawdauntGfx33_1)}, 
	{NULL, 32}, 
	{sCrawdauntGfx33_2, ARRAY_COUNT(sCrawdauntGfx33_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_34.4bpp.lz");
static const ax_sprite sCrawdauntSprites34[] = {
	{sCrawdauntGfx34, ARRAY_COUNT(sCrawdauntGfx34)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_35.4bpp.lz");
static const u8 sCrawdauntGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_35_1.4bpp.lz");
static const u8 sCrawdauntGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_35_2.4bpp.lz");
static const ax_sprite sCrawdauntSprites35[] = {
	{NULL, 32}, 
	{sCrawdauntGfx35, ARRAY_COUNT(sCrawdauntGfx35)}, 
	{NULL, 32}, 
	{sCrawdauntGfx35_1, ARRAY_COUNT(sCrawdauntGfx35_1)}, 
	{NULL, 32}, 
	{sCrawdauntGfx35_2, ARRAY_COUNT(sCrawdauntGfx35_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_36.4bpp.lz");
static const u8 sCrawdauntGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_36_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites36[] = {
	{NULL, 32}, 
	{sCrawdauntGfx36, ARRAY_COUNT(sCrawdauntGfx36)}, 
	{NULL, 64}, 
	{sCrawdauntGfx36_1, ARRAY_COUNT(sCrawdauntGfx36_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_37.4bpp.lz");
static const ax_sprite sCrawdauntSprites37[] = {
	{sCrawdauntGfx37, ARRAY_COUNT(sCrawdauntGfx37)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_38.4bpp.lz");
static const ax_sprite sCrawdauntSprites38[] = {
	{NULL, 32}, 
	{sCrawdauntGfx38, ARRAY_COUNT(sCrawdauntGfx38)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_39.4bpp.lz");
static const ax_sprite sCrawdauntSprites39[] = {
	{sCrawdauntGfx39, ARRAY_COUNT(sCrawdauntGfx39)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_40.4bpp.lz");
static const ax_sprite sCrawdauntSprites40[] = {
	{sCrawdauntGfx40, ARRAY_COUNT(sCrawdauntGfx40)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_41.4bpp.lz");
static const u8 sCrawdauntGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_41_1.4bpp.lz");
static const u8 sCrawdauntGfx41_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_41_2.4bpp.lz");
static const ax_sprite sCrawdauntSprites41[] = {
	{sCrawdauntGfx41, ARRAY_COUNT(sCrawdauntGfx41)}, 
	{NULL, 32}, 
	{sCrawdauntGfx41_1, ARRAY_COUNT(sCrawdauntGfx41_1)}, 
	{NULL, 32}, 
	{sCrawdauntGfx41_2, ARRAY_COUNT(sCrawdauntGfx41_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_42.4bpp.lz");
static const ax_sprite sCrawdauntSprites42[] = {
	{sCrawdauntGfx42, ARRAY_COUNT(sCrawdauntGfx42)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_43.4bpp.lz");
static const u8 sCrawdauntGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_43_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites43[] = {
	{sCrawdauntGfx43, ARRAY_COUNT(sCrawdauntGfx43)}, 
	{NULL, 32}, 
	{sCrawdauntGfx43_1, ARRAY_COUNT(sCrawdauntGfx43_1)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_44.4bpp.lz");
static const u8 sCrawdauntGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_44_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites44[] = {
	{NULL, 32}, 
	{sCrawdauntGfx44, ARRAY_COUNT(sCrawdauntGfx44)}, 
	{NULL, 32}, 
	{sCrawdauntGfx44_1, ARRAY_COUNT(sCrawdauntGfx44_1)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_45.4bpp.lz");
static const ax_sprite sCrawdauntSprites45[] = {
	{sCrawdauntGfx45, ARRAY_COUNT(sCrawdauntGfx45)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_46.4bpp.lz");
static const ax_sprite sCrawdauntSprites46[] = {
	{sCrawdauntGfx46, ARRAY_COUNT(sCrawdauntGfx46)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_47.4bpp.lz");
static const ax_sprite sCrawdauntSprites47[] = {
	{sCrawdauntGfx47, ARRAY_COUNT(sCrawdauntGfx47)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_48.4bpp.lz");
static const ax_sprite sCrawdauntSprites48[] = {
	{sCrawdauntGfx48, ARRAY_COUNT(sCrawdauntGfx48)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_49.4bpp.lz");
static const ax_sprite sCrawdauntSprites49[] = {
	{NULL, 32}, 
	{sCrawdauntGfx49, ARRAY_COUNT(sCrawdauntGfx49)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_50.4bpp.lz");
static const ax_sprite sCrawdauntSprites50[] = {
	{sCrawdauntGfx50, ARRAY_COUNT(sCrawdauntGfx50)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_51.4bpp.lz");
static const ax_sprite sCrawdauntSprites51[] = {
	{sCrawdauntGfx51, ARRAY_COUNT(sCrawdauntGfx51)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_52.4bpp.lz");
static const u8 sCrawdauntGfx52_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_52_1.4bpp.lz");
static const u8 sCrawdauntGfx52_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_52_2.4bpp.lz");
static const ax_sprite sCrawdauntSprites52[] = {
	{sCrawdauntGfx52, ARRAY_COUNT(sCrawdauntGfx52)}, 
	{NULL, 64}, 
	{sCrawdauntGfx52_1, ARRAY_COUNT(sCrawdauntGfx52_1)}, 
	{NULL, 32}, 
	{sCrawdauntGfx52_2, ARRAY_COUNT(sCrawdauntGfx52_2)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx53[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_53.4bpp.lz");
static const u8 sCrawdauntGfx53_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_53_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites53[] = {
	{NULL, 32}, 
	{sCrawdauntGfx53, ARRAY_COUNT(sCrawdauntGfx53)}, 
	{NULL, 32}, 
	{sCrawdauntGfx53_1, ARRAY_COUNT(sCrawdauntGfx53_1)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx54[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_54.4bpp.lz");
static const u8 sCrawdauntGfx54_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_54_1.4bpp.lz");
static const ax_sprite sCrawdauntSprites54[] = {
	{NULL, 32}, 
	{sCrawdauntGfx54, ARRAY_COUNT(sCrawdauntGfx54)}, 
	{NULL, 32}, 
	{sCrawdauntGfx54_1, ARRAY_COUNT(sCrawdauntGfx54_1)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx55[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_55.4bpp.lz");
static const ax_sprite sCrawdauntSprites55[] = {
	{sCrawdauntGfx55, ARRAY_COUNT(sCrawdauntGfx55)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx56[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_56.4bpp.lz");
static const ax_sprite sCrawdauntSprites56[] = {
	{sCrawdauntGfx56, ARRAY_COUNT(sCrawdauntGfx56)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx57[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_57.4bpp.lz");
static const ax_sprite sCrawdauntSprites57[] = {
	{sCrawdauntGfx57, ARRAY_COUNT(sCrawdauntGfx57)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx58[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_58.4bpp.lz");
static const ax_sprite sCrawdauntSprites58[] = {
	{sCrawdauntGfx58, ARRAY_COUNT(sCrawdauntGfx58)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx59[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_59.4bpp.lz");
static const ax_sprite sCrawdauntSprites59[] = {
	{sCrawdauntGfx59, ARRAY_COUNT(sCrawdauntGfx59)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx60[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_60.4bpp.lz");
static const ax_sprite sCrawdauntSprites60[] = {
	{sCrawdauntGfx60, ARRAY_COUNT(sCrawdauntGfx60)}, 
	{NULL, 0}
};
static const u8 sCrawdauntGfx61[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/crawdaunt/sprite_61.4bpp.lz");
static const ax_sprite sCrawdauntSprites61[] = {
	{sCrawdauntGfx61, ARRAY_COUNT(sCrawdauntGfx61)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesCrawdaunt[] = {
	sCrawdauntPose1,
	sCrawdauntPose2,
	sCrawdauntPose3,
	sCrawdauntPose4,
	sCrawdauntPose5,
	sCrawdauntPose6,
	sCrawdauntPose7,
	sCrawdauntPose8,
	sCrawdauntPose9,
	sCrawdauntPose10,
	sCrawdauntPose11,
	sCrawdauntPose12,
	sCrawdauntPose13,
	sCrawdauntPose14,
	sCrawdauntPose15,
	sCrawdauntPose16,
	sCrawdauntPose17,
	sCrawdauntPose18,
	sCrawdauntPose19,
	sCrawdauntPose20,
	sCrawdauntPose21,
	sCrawdauntPose22,
	sCrawdauntPose23,
	sCrawdauntPose24,
	sCrawdauntPose1,
	sCrawdauntPose2,
	sCrawdauntPose3,
	sCrawdauntPose28,
	sCrawdauntPose29,
	sCrawdauntPose4,
	sCrawdauntPose5,
	sCrawdauntPose6,
	sCrawdauntPose33,
	sCrawdauntPose34,
	sCrawdauntPose7,
	sCrawdauntPose8,
	sCrawdauntPose9,
	sCrawdauntPose38,
	sCrawdauntPose39,
	sCrawdauntPose10,
	sCrawdauntPose11,
	sCrawdauntPose12,
	sCrawdauntPose43,
	sCrawdauntPose44,
	sCrawdauntPose13,
	sCrawdauntPose14,
	sCrawdauntPose15,
	sCrawdauntPose48,
	sCrawdauntPose49,
	sCrawdauntPose16,
	sCrawdauntPose17,
	sCrawdauntPose18,
	sCrawdauntPose53,
	sCrawdauntPose54,
	sCrawdauntPose19,
	sCrawdauntPose20,
	sCrawdauntPose21,
	sCrawdauntPose58,
	sCrawdauntPose59,
	sCrawdauntPose22,
	sCrawdauntPose23,
	sCrawdauntPose24,
	sCrawdauntPose63,
	sCrawdauntPose64,
	sCrawdauntPose1,
	sCrawdauntPose66,
	sCrawdauntPose29,
	sCrawdauntPose68,
	sCrawdauntPose4,
	sCrawdauntPose70,
	sCrawdauntPose34,
	sCrawdauntPose72,
	sCrawdauntPose7,
	sCrawdauntPose74,
	sCrawdauntPose39,
	sCrawdauntPose76,
	sCrawdauntPose10,
	sCrawdauntPose78,
	sCrawdauntPose44,
	sCrawdauntPose80,
	sCrawdauntPose13,
	sCrawdauntPose48,
	sCrawdauntPose49,
	sCrawdauntPose84,
	sCrawdauntPose16,
	sCrawdauntPose86,
	sCrawdauntPose54,
	sCrawdauntPose88,
	sCrawdauntPose19,
	sCrawdauntPose90,
	sCrawdauntPose59,
	sCrawdauntPose92,
	sCrawdauntPose22,
	sCrawdauntPose94,
	sCrawdauntPose64,
	sCrawdauntPose96,
	sCrawdauntPose1,
	sCrawdauntPose98,
	sCrawdauntPose99,
	sCrawdauntPose4,
	sCrawdauntPose33,
	sCrawdauntPose102,
	sCrawdauntPose7,
	sCrawdauntPose38,
	sCrawdauntPose105,
	sCrawdauntPose10,
	sCrawdauntPose43,
	sCrawdauntPose108,
	sCrawdauntPose13,
	sCrawdauntPose48,
	sCrawdauntPose111,
	sCrawdauntPose16,
	sCrawdauntPose53,
	sCrawdauntPose114,
	sCrawdauntPose19,
	sCrawdauntPose58,
	sCrawdauntPose117,
	sCrawdauntPose22,
	sCrawdauntPose63,
	sCrawdauntPose120,
	sCrawdauntPose1,
	sCrawdauntPose122,
	sCrawdauntPose4,
	sCrawdauntPose124,
	sCrawdauntPose7,
	sCrawdauntPose126,
	sCrawdauntPose10,
	sCrawdauntPose128,
	sCrawdauntPose13,
	sCrawdauntPose130,
	sCrawdauntPose16,
	sCrawdauntPose132,
	sCrawdauntPose19,
	sCrawdauntPose134,
	sCrawdauntPose22,
	sCrawdauntPose136,
	sCrawdauntPose137,
	sCrawdauntPose138,
	sCrawdauntPose139,
	sCrawdauntPose140,
	sCrawdauntPose141,
	sCrawdauntPose142,
	sCrawdauntPose143,
	sCrawdauntPose144,
	sCrawdauntPose145,
	sCrawdauntPose146,
	sCrawdauntPose1,
	sCrawdauntPose2,
	sCrawdauntPose3,
	sCrawdauntPose4,
	sCrawdauntPose5,
	sCrawdauntPose6,
	sCrawdauntPose7,
	sCrawdauntPose8,
	sCrawdauntPose9,
	sCrawdauntPose10,
	sCrawdauntPose11,
	sCrawdauntPose12,
	sCrawdauntPose13,
	sCrawdauntPose14,
	sCrawdauntPose15,
	sCrawdauntPose16,
	sCrawdauntPose17,
	sCrawdauntPose18,
	sCrawdauntPose19,
	sCrawdauntPose20,
	sCrawdauntPose21,
	sCrawdauntPose22,
	sCrawdauntPose23,
	sCrawdauntPose24,
	sCrawdauntPose29,
	sCrawdauntPose172,
	sCrawdauntPose173,
	sCrawdauntPose174,
	sCrawdauntPose175,
	sCrawdauntPose176,
	sCrawdauntPose177,
	sCrawdauntPose178,
	sCrawdauntPose179,
	sCrawdauntPose33,
	sCrawdauntPose181,
	sCrawdauntPose182,
	sCrawdauntPose183,
	sCrawdauntPose184,
	sCrawdauntPose185,
	sCrawdauntPose186,
	sCrawdauntPose1,
	sCrawdauntPose179,
	sCrawdauntPose189,
	sCrawdauntPose4,
	sCrawdauntPose33,
	sCrawdauntPose192,
	sCrawdauntPose7,
	sCrawdauntPose38,
	sCrawdauntPose195,
	sCrawdauntPose10,
	sCrawdauntPose43,
	sCrawdauntPose198,
	sCrawdauntPose13,
	sCrawdauntPose48,
	sCrawdauntPose201,
	sCrawdauntPose202,
	sCrawdauntPose203,
	sCrawdauntPose114,
	sCrawdauntPose205,
	sCrawdauntPose206,
	sCrawdauntPose117,
	sCrawdauntPose208,
	sCrawdauntPose186,
	sCrawdauntPose120,
	sCrawdauntPose66,
	sCrawdauntPose94,
	sCrawdauntPose213,
	sCrawdauntPose86,
	sCrawdauntPose48,
	sCrawdauntPose78,
	sCrawdauntPose217,
	sCrawdauntPose70,
	sCrawdauntPose1,
	sCrawdauntPose22,
	sCrawdauntPose19,
	sCrawdauntPose16,
	sCrawdauntPose13,
	sCrawdauntPose10,
	sCrawdauntPose7,
	sCrawdauntPose4,
};

static const struct PositionSets sAxPositionsCrawdaunt[] = {
	[0] = { .set = { {0, -7}, {-10, -6}, {11, -6}, {0, -5} } },
	[1] = { .set = { {-2, -6}, {-9, -3}, {11, -6}, {0, -4} } },
	[2] = { .set = { {3, -6}, {-10, -6}, {10, -3}, {0, -3} } },
	[3] = { .set = { {5, -7}, {9, -9}, {-5, -3}, {0, -5} } },
	[4] = { .set = { {5, -6}, {9, -6}, {-3, -3}, {0, -4} } },
	[5] = { .set = { {4, -5}, {11, -8}, {-7, -1}, {1, -3} } },
	[6] = { .set = { {7, -9}, {6, -10}, {6, -4}, {0, -6} } },
	[7] = { .set = { {6, -7}, {2, -8}, {7, -4}, {-1, -6} } },
	[8] = { .set = { {7, -7}, {9, -11}, {4, -2}, {-2, -5} } },
	[9] = { .set = { {2, -11}, {-4, -13}, {11, -7}, {0, -8} } },
	[10] = { .set = { {1, -10}, {-5, -11}, {10, -9}, {0, -7} } },
	[11] = { .set = { {2, -10}, {-3, -15}, {10, -4}, {0, -6} } },
	[12] = { .set = { {-1, -12}, {9, -10}, {-11, -10}, {-1, -9} } },
	[13] = { .set = { {0, -10}, {9, -8}, {-11, -12}, {-1, -7} } },
	[14] = { .set = { {-2, -10}, {10, -12}, {-11, -7}, {-1, -6} } },
	[15] = { .set = { {-2, -11}, {4, -13}, {-11, -7}, {0, -8} } },
	[16] = { .set = { {-1, -10}, {5, -11}, {-10, -9}, {0, -7} } },
	[17] = { .set = { {-2, -10}, {3, -15}, {-10, -4}, {0, -6} } },
	[18] = { .set = { {-7, -9}, {-6, -10}, {-6, -4}, {0, -6} } },
	[19] = { .set = { {-6, -7}, {-2, -8}, {-7, -4}, {1, -6} } },
	[20] = { .set = { {-7, -7}, {-9, -11}, {-4, -2}, {2, -5} } },
	[21] = { .set = { {-5, -7}, {-9, -9}, {5, -3}, {0, -5} } },
	[22] = { .set = { {-5, -6}, {-9, -6}, {3, -3}, {0, -4} } },
	[23] = { .set = { {-4, -5}, {-11, -8}, {7, -1}, {-1, -3} } },
	[24] = { .set = { {0, -7}, {-10, -6}, {11, -6}, {0, -5} } },
	[25] = { .set = { {-2, -6}, {-9, -3}, {11, -6}, {0, -4} } },
	[26] = { .set = { {3, -6}, {-10, -6}, {10, -3}, {0, -3} } },
	[27] = { .set = { {0, -9}, {-8, -12}, {9, -12}, {0, -6} } },
	[28] = { .set = { {0, -3}, {-10, -6}, {10, -6}, {0, -4} } },
	[29] = { .set = { {5, -7}, {9, -9}, {-5, -3}, {0, -5} } },
	[30] = { .set = { {5, -6}, {9, -6}, {-3, -3}, {0, -4} } },
	[31] = { .set = { {4, -5}, {11, -8}, {-7, -1}, {1, -3} } },
	[32] = { .set = { {3, -8}, {7, -14}, {-7, -6}, {0, -7} } },
	[33] = { .set = { {6, -4}, {11, -6}, {-2, -1}, {2, -5} } },
	[34] = { .set = { {7, -9}, {6, -10}, {6, -4}, {0, -6} } },
	[35] = { .set = { {6, -7}, {2, -8}, {7, -4}, {-1, -6} } },
	[36] = { .set = { {7, -7}, {9, -11}, {4, -2}, {-2, -5} } },
	[37] = { .set = { {3, -11}, {3, -16}, {3, -10}, {-1, -8} } },
	[38] = { .set = { {7, -7}, {10, -11}, {6, -3}, {2, -6} } },
	[39] = { .set = { {2, -11}, {-4, -13}, {11, -7}, {0, -8} } },
	[40] = { .set = { {1, -10}, {-5, -11}, {10, -9}, {0, -7} } },
	[41] = { .set = { {2, -10}, {-3, -15}, {10, -4}, {0, -6} } },
	[42] = { .set = { {0, -12}, {-4, -16}, {7, -11}, {-1, -9} } },
	[43] = { .set = { {2, -10}, {-1, -13}, {10, -5}, {0, -7} } },
	[44] = { .set = { {-1, -12}, {9, -10}, {-11, -10}, {-1, -9} } },
	[45] = { .set = { {0, -10}, {9, -8}, {-11, -12}, {-1, -7} } },
	[46] = { .set = { {-2, -10}, {10, -12}, {-11, -7}, {-1, -6} } },
	[47] = { .set = { {-1, -12}, {9, -14}, {-11, -15}, {-1, -7} } },
	[48] = { .set = { {-1, -12}, {8, -11}, {-10, -11}, {-1, -8} } },
	[49] = { .set = { {-2, -11}, {4, -13}, {-11, -7}, {0, -8} } },
	[50] = { .set = { {-1, -10}, {5, -11}, {-10, -9}, {0, -7} } },
	[51] = { .set = { {-2, -10}, {3, -15}, {-10, -4}, {0, -6} } },
	[52] = { .set = { {0, -12}, {4, -16}, {-7, -11}, {1, -9} } },
	[53] = { .set = { {-2, -10}, {1, -13}, {-10, -5}, {0, -7} } },
	[54] = { .set = { {-7, -9}, {-6, -10}, {-6, -4}, {0, -6} } },
	[55] = { .set = { {-6, -7}, {-2, -8}, {-7, -4}, {1, -6} } },
	[56] = { .set = { {-7, -7}, {-9, -11}, {-4, -2}, {2, -5} } },
	[57] = { .set = { {-3, -11}, {-3, -16}, {-3, -10}, {1, -8} } },
	[58] = { .set = { {-7, -7}, {-10, -11}, {-6, -3}, {-2, -6} } },
	[59] = { .set = { {-5, -7}, {-9, -9}, {5, -3}, {0, -5} } },
	[60] = { .set = { {-5, -6}, {-9, -6}, {3, -3}, {0, -4} } },
	[61] = { .set = { {-4, -5}, {-11, -8}, {7, -1}, {-1, -3} } },
	[62] = { .set = { {-3, -8}, {-7, -14}, {7, -6}, {0, -7} } },
	[63] = { .set = { {-6, -4}, {-11, -6}, {2, -1}, {-2, -5} } },
	[64] = { .set = { {0, -7}, {-10, -6}, {11, -6}, {0, -5} } },
	[65] = { .set = { {0, -9}, {-8, -12}, {9, -12}, {0, -7} } },
	[66] = { .set = { {0, -3}, {-10, -6}, {10, -6}, {0, -4} } },
	[67] = { .set = { {0, -3}, {-10, -4}, {10, -4}, {0, -4} } },
	[68] = { .set = { {5, -7}, {9, -9}, {-5, -3}, {0, -5} } },
	[69] = { .set = { {4, -8}, {7, -12}, {-6, -6}, {0, -6} } },
	[70] = { .set = { {6, -4}, {11, -6}, {-2, -1}, {2, -5} } },
	[71] = { .set = { {6, -4}, {12, -4}, {-2, 0}, {0, -4} } },
	[72] = { .set = { {7, -9}, {6, -10}, {6, -4}, {0, -6} } },
	[73] = { .set = { {2, -10}, {5, -13}, {4, -10}, {-2, -7} } },
	[74] = { .set = { {7, -7}, {10, -11}, {6, -3}, {2, -6} } },
	[75] = { .set = { {9, -7}, {9, -9}, {8, -2}, {2, -5} } },
	[76] = { .set = { {2, -11}, {-4, -13}, {11, -7}, {0, -8} } },
	[77] = { .set = { {1, -12}, {-5, -16}, {8, -10}, {-1, -9} } },
	[78] = { .set = { {2, -10}, {-1, -13}, {10, -5}, {0, -7} } },
	[79] = { .set = { {3, -9}, {-2, -11}, {11, -6}, {-1, -7} } },
	[80] = { .set = { {-1, -12}, {9, -10}, {-11, -10}, {-1, -9} } },
	[81] = { .set = { {-1, -12}, {9, -14}, {-11, -15}, {-1, -7} } },
	[82] = { .set = { {-1, -12}, {8, -11}, {-10, -11}, {-1, -8} } },
	[83] = { .set = { {-1, -11}, {8, -10}, {-9, -11}, {-1, -8} } },
	[84] = { .set = { {-2, -11}, {4, -13}, {-11, -7}, {0, -8} } },
	[85] = { .set = { {-1, -12}, {5, -16}, {-8, -10}, {1, -9} } },
	[86] = { .set = { {-2, -10}, {1, -13}, {-10, -5}, {0, -7} } },
	[87] = { .set = { {-3, -9}, {2, -11}, {-11, -6}, {1, -7} } },
	[88] = { .set = { {-7, -9}, {-6, -10}, {-6, -4}, {0, -6} } },
	[89] = { .set = { {-2, -10}, {-5, -13}, {-4, -10}, {2, -7} } },
	[90] = { .set = { {-7, -7}, {-10, -11}, {-6, -3}, {-2, -6} } },
	[91] = { .set = { {-9, -7}, {-9, -9}, {-8, -2}, {-2, -5} } },
	[92] = { .set = { {-5, -7}, {-9, -9}, {5, -3}, {0, -5} } },
	[93] = { .set = { {-4, -8}, {-7, -12}, {6, -6}, {0, -6} } },
	[94] = { .set = { {-6, -4}, {-11, -6}, {2, -1}, {-2, -5} } },
	[95] = { .set = { {-6, -4}, {-12, -4}, {2, 0}, {0, -4} } },
	[96] = { .set = { {0, -7}, {-10, -6}, {11, -6}, {0, -5} } },
	[97] = { .set = { {0, -11}, {-8, -14}, {9, -14}, {0, -8} } },
	[98] = { .set = { {0, -3}, {-8, -2}, {8, -1}, {0, -4} } },
	[99] = { .set = { {5, -7}, {9, -9}, {-5, -3}, {0, -5} } },
	[100] = { .set = { {3, -8}, {7, -14}, {-7, -6}, {0, -7} } },
	[101] = { .set = { {7, -4}, {12, -5}, {-1, 0}, {1, -5} } },
	[102] = { .set = { {7, -9}, {6, -10}, {6, -4}, {0, -6} } },
	[103] = { .set = { {3, -11}, {3, -16}, {3, -10}, {-1, -8} } },
	[104] = { .set = { {8, -7}, {12, -9}, {10, -2}, {1, -6} } },
	[105] = { .set = { {2, -11}, {-4, -13}, {11, -7}, {0, -8} } },
	[106] = { .set = { {0, -12}, {-4, -16}, {7, -11}, {-1, -9} } },
	[107] = { .set = { {5, -9}, {1, -15}, {14, -8}, {2, -8} } },
	[108] = { .set = { {-1, -12}, {9, -10}, {-11, -10}, {-1, -9} } },
	[109] = { .set = { {-1, -12}, {9, -14}, {-11, -15}, {-1, -7} } },
	[110] = { .set = { {-1, -12}, {7, -14}, {-9, -14}, {-1, -9} } },
	[111] = { .set = { {-2, -11}, {4, -13}, {-11, -7}, {0, -8} } },
	[112] = { .set = { {0, -12}, {4, -16}, {-7, -11}, {1, -9} } },
	[113] = { .set = { {-5, -9}, {-1, -15}, {-14, -8}, {-2, -8} } },
	[114] = { .set = { {-7, -9}, {-6, -10}, {-6, -4}, {0, -6} } },
	[115] = { .set = { {-3, -11}, {-3, -16}, {-3, -10}, {1, -8} } },
	[116] = { .set = { {-8, -7}, {-12, -9}, {-10, -2}, {-1, -6} } },
	[117] = { .set = { {-5, -7}, {-9, -9}, {5, -3}, {0, -5} } },
	[118] = { .set = { {-3, -8}, {-7, -14}, {7, -6}, {0, -7} } },
	[119] = { .set = { {-7, -4}, {-12, -5}, {1, 0}, {-1, -5} } },
	[120] = { .set = { {0, -7}, {-10, -6}, {11, -6}, {0, -5} } },
	[121] = { .set = { {0, -9}, {-11, -7}, {12, -6}, {0, -5} } },
	[122] = { .set = { {5, -7}, {9, -9}, {-5, -3}, {0, -5} } },
	[123] = { .set = { {5, -8}, {10, -11}, {-7, -3}, {1, -6} } },
	[124] = { .set = { {7, -9}, {6, -10}, {6, -4}, {0, -6} } },
	[125] = { .set = { {8, -11}, {7, -13}, {8, -4}, {0, -8} } },
	[126] = { .set = { {2, -11}, {-4, -13}, {11, -7}, {0, -8} } },
	[127] = { .set = { {2, -14}, {-4, -17}, {12, -10}, {0, -10} } },
	[128] = { .set = { {-1, -12}, {9, -10}, {-11, -10}, {-1, -9} } },
	[129] = { .set = { {-1, -16}, {11, -13}, {-13, -13}, {-1, -11} } },
	[130] = { .set = { {-2, -11}, {4, -13}, {-11, -7}, {0, -8} } },
	[131] = { .set = { {-2, -14}, {4, -17}, {-12, -10}, {0, -10} } },
	[132] = { .set = { {-7, -9}, {-6, -10}, {-6, -4}, {0, -6} } },
	[133] = { .set = { {-8, -11}, {-7, -13}, {-8, -4}, {0, -8} } },
	[134] = { .set = { {-5, -7}, {-9, -9}, {5, -3}, {0, -5} } },
	[135] = { .set = { {-5, -8}, {-10, -11}, {7, -3}, {-1, -6} } },
	[136] = { .set = { {-4, -5}, {-10, -3}, {5, 0}, {-1, -5} } },
	[137] = { .set = { {-5, -4}, {-11, -2}, {5, 1}, {-1, -4} } },
	[138] = { .set = { {-1, -10}, {-12, -17}, {10, -15}, {-1, -7} } },
	[139] = { .set = { {3, -12}, {5, -20}, {-9, -12}, {0, -9} } },
	[140] = { .set = { {4, -11}, {4, -18}, {-7, -11}, {0, -9} } },
	[141] = { .set = { {0, -14}, {-7, -17}, {4, -11}, {-2, -9} } },
	[142] = { .set = { {-1, -12}, {9, -15}, {-11, -15}, {-1, -7} } },
	[143] = { .set = { {-1, -14}, {6, -17}, {-5, -11}, {1, -9} } },
	[144] = { .set = { {-5, -11}, {-5, -18}, {6, -11}, {-1, -9} } },
	[145] = { .set = { {-4, -12}, {-6, -20}, {8, -12}, {-1, -9} } },
	[146] = { .set = { {0, -7}, {-10, -6}, {11, -6}, {0, -5} } },
	[147] = { .set = { {-2, -6}, {-9, -3}, {11, -6}, {0, -4} } },
	[148] = { .set = { {3, -6}, {-10, -6}, {10, -3}, {0, -3} } },
	[149] = { .set = { {5, -7}, {9, -9}, {-5, -3}, {0, -5} } },
	[150] = { .set = { {5, -6}, {9, -6}, {-3, -3}, {0, -4} } },
	[151] = { .set = { {4, -5}, {11, -8}, {-7, -1}, {1, -3} } },
	[152] = { .set = { {7, -9}, {6, -10}, {6, -4}, {0, -6} } },
	[153] = { .set = { {6, -7}, {2, -8}, {7, -4}, {-1, -6} } },
	[154] = { .set = { {7, -7}, {9, -11}, {4, -2}, {-2, -5} } },
	[155] = { .set = { {2, -11}, {-4, -13}, {11, -7}, {0, -8} } },
	[156] = { .set = { {1, -10}, {-5, -11}, {10, -9}, {0, -7} } },
	[157] = { .set = { {2, -10}, {-3, -15}, {10, -4}, {0, -6} } },
	[158] = { .set = { {-1, -12}, {9, -10}, {-11, -10}, {-1, -9} } },
	[159] = { .set = { {0, -10}, {9, -8}, {-11, -12}, {-1, -7} } },
	[160] = { .set = { {-2, -10}, {10, -12}, {-11, -7}, {-1, -6} } },
	[161] = { .set = { {-2, -11}, {4, -13}, {-11, -7}, {0, -8} } },
	[162] = { .set = { {-1, -10}, {5, -11}, {-10, -9}, {0, -7} } },
	[163] = { .set = { {-2, -10}, {3, -15}, {-10, -4}, {0, -6} } },
	[164] = { .set = { {-7, -9}, {-6, -10}, {-6, -4}, {0, -6} } },
	[165] = { .set = { {-6, -7}, {-2, -8}, {-7, -4}, {1, -6} } },
	[166] = { .set = { {-7, -7}, {-9, -11}, {-4, -2}, {2, -5} } },
	[167] = { .set = { {-5, -7}, {-9, -9}, {5, -3}, {0, -5} } },
	[168] = { .set = { {-5, -6}, {-9, -6}, {3, -3}, {0, -4} } },
	[169] = { .set = { {-4, -5}, {-11, -8}, {7, -1}, {-1, -3} } },
	[170] = { .set = { {0, -3}, {-10, -6}, {10, -6}, {0, -4} } },
	[171] = { .set = { {-5, -4}, {-10, -6}, {3, -1}, {-1, -5} } },
	[172] = { .set = { {-6, -7}, {-9, -11}, {-5, -3}, {-1, -6} } },
	[173] = { .set = { {-1, -10}, {2, -13}, {-9, -5}, {1, -7} } },
	[174] = { .set = { {-1, -11}, {8, -10}, {-10, -10}, {-1, -7} } },
	[175] = { .set = { {0, -10}, {-3, -13}, {8, -5}, {-2, -7} } },
	[176] = { .set = { {5, -7}, {8, -11}, {4, -3}, {0, -6} } },
	[177] = { .set = { {4, -4}, {9, -6}, {-4, -1}, {0, -5} } },
	[178] = { .set = { {0, -8}, {-8, -11}, {9, -11}, {0, -5} } },
	[179] = { .set = { {3, -8}, {7, -14}, {-7, -6}, {0, -7} } },
	[180] = { .set = { {4, -11}, {4, -16}, {4, -10}, {0, -8} } },
	[181] = { .set = { {0, -13}, {-4, -17}, {7, -12}, {-1, -10} } },
	[182] = { .set = { {-1, -13}, {9, -15}, {-11, -16}, {-1, -8} } },
	[183] = { .set = { {-1, -13}, {3, -17}, {-8, -12}, {0, -10} } },
	[184] = { .set = { {-5, -11}, {-5, -16}, {-5, -10}, {-1, -8} } },
	[185] = { .set = { {-4, -8}, {-8, -14}, {6, -6}, {-1, -7} } },
	[186] = { .set = { {0, -7}, {-10, -6}, {11, -6}, {0, -5} } },
	[187] = { .set = { {0, -8}, {-8, -11}, {9, -11}, {0, -5} } },
	[188] = { .set = { {0, -5}, {-8, -4}, {8, -3}, {0, -6} } },
	[189] = { .set = { {5, -7}, {9, -9}, {-5, -3}, {0, -5} } },
	[190] = { .set = { {3, -8}, {7, -14}, {-7, -6}, {0, -7} } },
	[191] = { .set = { {6, -4}, {11, -5}, {-2, 0}, {0, -5} } },
	[192] = { .set = { {7, -9}, {6, -10}, {6, -4}, {0, -6} } },
	[193] = { .set = { {3, -11}, {3, -16}, {3, -10}, {-1, -8} } },
	[194] = { .set = { {7, -7}, {11, -9}, {9, -2}, {0, -6} } },
	[195] = { .set = { {2, -11}, {-4, -13}, {11, -7}, {0, -8} } },
	[196] = { .set = { {0, -12}, {-4, -16}, {7, -11}, {-1, -9} } },
	[197] = { .set = { {4, -9}, {0, -15}, {13, -8}, {1, -8} } },
	[198] = { .set = { {-1, -12}, {9, -10}, {-11, -10}, {-1, -9} } },
	[199] = { .set = { {-1, -12}, {9, -14}, {-11, -15}, {-1, -7} } },
	[200] = { .set = { {-1, -11}, {7, -13}, {-9, -13}, {-1, -8} } },
	[201] = { .set = { {-3, -11}, {3, -13}, {-12, -7}, {-1, -8} } },
	[202] = { .set = { {-1, -12}, {3, -16}, {-8, -11}, {0, -9} } },
	[203] = { .set = { {-5, -9}, {-1, -15}, {-14, -8}, {-2, -8} } },
	[204] = { .set = { {-8, -9}, {-7, -10}, {-7, -4}, {-1, -6} } },
	[205] = { .set = { {-4, -11}, {-4, -16}, {-4, -10}, {0, -8} } },
	[206] = { .set = { {-8, -7}, {-12, -9}, {-10, -2}, {-1, -6} } },
	[207] = { .set = { {-6, -7}, {-10, -9}, {4, -3}, {-1, -5} } },
	[208] = { .set = { {-4, -8}, {-8, -14}, {6, -6}, {-1, -7} } },
	[209] = { .set = { {-7, -4}, {-12, -5}, {1, 0}, {-1, -5} } },
	[210] = { .set = { {0, -9}, {-8, -12}, {9, -12}, {0, -7} } },
	[211] = { .set = { {-4, -8}, {-7, -12}, {6, -6}, {0, -6} } },
	[212] = { .set = { {-3, -10}, {-6, -13}, {-5, -10}, {1, -7} } },
	[213] = { .set = { {-1, -12}, {5, -16}, {-8, -10}, {1, -9} } },
	[214] = { .set = { {-1, -12}, {9, -14}, {-11, -15}, {-1, -7} } },
	[215] = { .set = { {1, -12}, {-5, -16}, {8, -10}, {-1, -9} } },
	[216] = { .set = { {3, -10}, {6, -13}, {5, -10}, {-1, -7} } },
	[217] = { .set = { {4, -8}, {7, -12}, {-6, -6}, {0, -6} } },
	[218] = { .set = { {0, -7}, {-10, -6}, {11, -6}, {0, -5} } },
	[219] = { .set = { {-5, -7}, {-9, -9}, {5, -3}, {0, -5} } },
	[220] = { .set = { {-7, -9}, {-6, -10}, {-6, -4}, {0, -6} } },
	[221] = { .set = { {-2, -11}, {4, -13}, {-11, -7}, {0, -8} } },
	[222] = { .set = { {-1, -12}, {9, -10}, {-11, -10}, {-1, -9} } },
	[223] = { .set = { {2, -11}, {-4, -13}, {11, -7}, {0, -8} } },
	[224] = { .set = { {7, -9}, {6, -10}, {6, -4}, {0, -6} } },
	[225] = { .set = { {5, -7}, {9, -9}, {-5, -3}, {0, -5} } },
};

static const ax_anim *const sCrawdauntAnimTable1[] = {
	AX_ANIM_PTR(gAxSharedAnim_02602),
	AX_ANIM_PTR(gAxSharedAnim_02678),
	AX_ANIM_PTR(gAxSharedAnim_02687),
	AX_ANIM_PTR(gAxSharedAnim_02696),
	AX_ANIM_PTR(gAxSharedAnim_02614),
	AX_ANIM_PTR(gAxSharedAnim_02636),
	AX_ANIM_PTR(gAxSharedAnim_02649),
	AX_ANIM_PTR(gAxSharedAnim_02658),
};

static const ax_anim *const sCrawdauntAnimTable2[] = {
	AX_ANIM_PTR(sCrawdauntAnims_2_1),
	AX_ANIM_PTR(sCrawdauntAnims_2_2),
	AX_ANIM_PTR(sCrawdauntAnims_2_3),
	AX_ANIM_PTR(sCrawdauntAnims_2_4),
	AX_ANIM_PTR(sCrawdauntAnims_2_5),
	AX_ANIM_PTR(sCrawdauntAnims_2_6),
	AX_ANIM_PTR(sCrawdauntAnims_2_7),
	AX_ANIM_PTR(sCrawdauntAnims_2_8),
};

static const ax_anim *const sCrawdauntAnimTable3[] = {
	AX_ANIM_PTR(gAxSharedAnim_02049),
	AX_ANIM_PTR(gAxSharedAnim_02069),
	AX_ANIM_PTR(gAxSharedAnim_02083),
	AX_ANIM_PTR(gAxSharedAnim_02116),
	AX_ANIM_PTR(gAxSharedAnim_02148),
	AX_ANIM_PTR(gAxSharedAnim_02187),
	AX_ANIM_PTR(gAxSharedAnim_02220),
	AX_ANIM_PTR(gAxSharedAnim_02261),
};

static const ax_anim *const sCrawdauntAnimTable4[] = {
	AX_ANIM_PTR(gAxSharedAnim_02299),
	AX_ANIM_PTR(gAxSharedAnim_00151),
	AX_ANIM_PTR(gAxSharedAnim_00168),
	AX_ANIM_PTR(gAxSharedAnim_00191),
	AX_ANIM_PTR(gAxSharedAnim_00223),
	AX_ANIM_PTR(gAxSharedAnim_00253),
	AX_ANIM_PTR(gAxSharedAnim_00279),
	AX_ANIM_PTR(gAxSharedAnim_00305),
};

static const ax_anim *const sCrawdauntAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_02341),
	AX_ANIM_PTR(gAxSharedAnim_02343),
	AX_ANIM_PTR(gAxSharedAnim_02345),
	AX_ANIM_PTR(gAxSharedAnim_02346),
	AX_ANIM_PTR(gAxSharedAnim_02348),
	AX_ANIM_PTR(gAxSharedAnim_02350),
	AX_ANIM_PTR(gAxSharedAnim_02351),
	AX_ANIM_PTR(gAxSharedAnim_02353),
};

static const ax_anim *const sCrawdauntAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
};

static const ax_anim *const sCrawdauntAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00467),
	AX_ANIM_PTR(gAxSharedAnim_00480),
	AX_ANIM_PTR(gAxSharedAnim_00488),
	AX_ANIM_PTR(gAxSharedAnim_00497),
	AX_ANIM_PTR(gAxSharedAnim_00509),
	AX_ANIM_PTR(gAxSharedAnim_00518),
	AX_ANIM_PTR(gAxSharedAnim_00524),
	AX_ANIM_PTR(gAxSharedAnim_00530),
};

static const ax_anim *const sCrawdauntAnimTable8[] = {
	AX_ANIM_PTR(sCrawdauntAnims_8_1),
	AX_ANIM_PTR(sCrawdauntAnims_8_2),
	AX_ANIM_PTR(sCrawdauntAnims_8_3),
	AX_ANIM_PTR(sCrawdauntAnims_8_4),
	AX_ANIM_PTR(sCrawdauntAnims_8_5),
	AX_ANIM_PTR(sCrawdauntAnims_8_6),
	AX_ANIM_PTR(sCrawdauntAnims_8_7),
	AX_ANIM_PTR(sCrawdauntAnims_8_8),
};

static const ax_anim *const sCrawdauntAnimTable9[] = {
	AX_ANIM_PTR(sCrawdauntAnims_9_1),
	AX_ANIM_PTR(sCrawdauntAnims_9_2),
	AX_ANIM_PTR(sCrawdauntAnims_9_3),
	AX_ANIM_PTR(sCrawdauntAnims_9_4),
	AX_ANIM_PTR(sCrawdauntAnims_9_5),
	AX_ANIM_PTR(sCrawdauntAnims_9_6),
	AX_ANIM_PTR(sCrawdauntAnims_9_7),
	AX_ANIM_PTR(sCrawdauntAnims_9_8),
};

static const ax_anim *const sCrawdauntAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00918),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00942),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00965),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00993),
};

static const ax_anim *const sCrawdauntAnimTable11[] = {
	AX_ANIM_PTR(sCrawdauntAnims_11_1),
	AX_ANIM_PTR(sCrawdauntAnims_11_2),
	AX_ANIM_PTR(sCrawdauntAnims_11_3),
	AX_ANIM_PTR(gAxSharedAnim_01151),
	AX_ANIM_PTR(sCrawdauntAnims_11_5),
	AX_ANIM_PTR(gAxSharedAnim_01224),
	AX_ANIM_PTR(sCrawdauntAnims_11_7),
	AX_ANIM_PTR(sCrawdauntAnims_11_8),
};

static const ax_anim *const sCrawdauntAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01414),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01380),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01368),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01338),
};

static const ax_anim *const sCrawdauntAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsCrawdaunt[] = {
	sCrawdauntAnimTable1,
	sCrawdauntAnimTable2,
	sCrawdauntAnimTable3,
	sCrawdauntAnimTable4,
	sCrawdauntAnimTable5,
	sCrawdauntAnimTable6,
	sCrawdauntAnimTable7,
	sCrawdauntAnimTable8,
	sCrawdauntAnimTable9,
	sCrawdauntAnimTable10,
	sCrawdauntAnimTable11,
	sCrawdauntAnimTable12,
	sCrawdauntAnimTable13,
};

static const ax_sprite *const sAxSpritesCrawdaunt[] = {
	sCrawdauntSprites1,
	sCrawdauntSprites2,
	sCrawdauntSprites3,
	sCrawdauntSprites4,
	sCrawdauntSprites5,
	sCrawdauntSprites6,
	sCrawdauntSprites7,
	sCrawdauntSprites8,
	sCrawdauntSprites9,
	sCrawdauntSprites10,
	sCrawdauntSprites11,
	sCrawdauntSprites12,
	sCrawdauntSprites13,
	sCrawdauntSprites14,
	sCrawdauntSprites15,
	sCrawdauntSprites16,
	sCrawdauntSprites17,
	sCrawdauntSprites18,
	sCrawdauntSprites19,
	sCrawdauntSprites20,
	sCrawdauntSprites21,
	sCrawdauntSprites22,
	sCrawdauntSprites23,
	sCrawdauntSprites24,
	sCrawdauntSprites25,
	sCrawdauntSprites26,
	sCrawdauntSprites27,
	sCrawdauntSprites28,
	sCrawdauntSprites29,
	sCrawdauntSprites30,
	sCrawdauntSprites31,
	sCrawdauntSprites32,
	sCrawdauntSprites33,
	sCrawdauntSprites34,
	sCrawdauntSprites35,
	sCrawdauntSprites36,
	sCrawdauntSprites37,
	sCrawdauntSprites38,
	sCrawdauntSprites39,
	sCrawdauntSprites40,
	sCrawdauntSprites41,
	sCrawdauntSprites42,
	sCrawdauntSprites43,
	sCrawdauntSprites44,
	sCrawdauntSprites45,
	sCrawdauntSprites46,
	sCrawdauntSprites47,
	sCrawdauntSprites48,
	sCrawdauntSprites49,
	sCrawdauntSprites50,
	sCrawdauntSprites51,
	sCrawdauntSprites52,
	sCrawdauntSprites53,
	sCrawdauntSprites54,
	sCrawdauntSprites55,
	sCrawdauntSprites56,
	sCrawdauntSprites57,
	sCrawdauntSprites58,
	sCrawdauntSprites59,
	sCrawdauntSprites60,
	sCrawdauntSprites61,
};

static const axmain sAxMainCrawdaunt = {
	.poses = sAxPosesCrawdaunt,
	.animations = sAxAnimationsCrawdaunt,
	.animCount = ARRAY_COUNT(sAxAnimationsCrawdaunt),
	.spriteData = sAxSpritesCrawdaunt,
	.positions = sAxPositionsCrawdaunt,
};
