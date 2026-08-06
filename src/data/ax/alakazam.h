/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainAlakazam;
const SiroArchive gAxAlakazam = {"SIRO", &sAxMainAlakazam};

static const ax_pose sAlakazamPose1[] = {
	AX_POSE(0, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose2[] = {
	AX_POSE(1, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose3[] = {
	AX_POSE(2, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose4[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose5[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose6[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose7[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose8[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose9[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose10[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose11[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose12[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose13[] = {
	AX_POSE(12, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose14[] = {
	AX_POSE(13, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose15[] = {
	AX_POSE(14, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose16[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose17[] = {
	AX_POSE(10, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose18[] = {
	AX_POSE(11, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose19[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose20[] = {
	AX_POSE(7, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose21[] = {
	AX_POSE(8, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose22[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose23[] = {
	AX_POSE(4, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose24[] = {
	AX_POSE(5, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose74[] = {
	AX_POSE(15, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose75[] = {
	AX_POSE(16, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose76[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose77[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose78[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose79[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose80[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose81[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose83[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose84[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose86[] = {
	AX_POSE(23, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose87[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose88[] = {
	AX_POSE(9, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose89[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose90[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose91[] = {
	AX_POSE(6, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose92[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose93[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose94[] = {
	AX_POSE(3, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose95[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose96[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose121[] = {
	AX_POSE(25, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose122[] = {
	AX_POSE(26, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose123[] = {
	AX_POSE(27, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose124[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose125[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose126[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose127[] = {
	AX_POSE(31, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose128[] = {
	AX_POSE(30, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose129[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose130[] = {
	AX_POSE(28, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose156[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose157[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose158[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose160[] = {
	AX_POSE(21, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose161[] = {
	AX_POSE(19, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose162[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose175[] = {
	AX_POSE(17, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose176[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose178[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose179[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose188[] = {
	AX_POSE(22, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose190[] = {
	AX_POSE(19, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose191[] = {
	AX_POSE(20, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose194[] = {
	AX_POSE(18, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose198[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose199[] = {
	AX_POSE(23, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose200[] = {
	AX_POSE(21, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose236[] = {
	AX_POSE(32, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose237[] = {
	AX_POSE(33, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose238[] = {
	AX_POSE(34, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose239[] = {
	AX_POSE(35, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose240[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose241[] = {
	AX_POSE(37, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 2, 0), OAM3(0, 3, 3)),
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose242[] = {
	AX_POSE(39, OAM1(245, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 2, 0), OAM3(0, 3, 3)),
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose243[] = {
	AX_POSE(40, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 2, 0), OAM3(0, 3, 3)),
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose244[] = {
	AX_POSE(41, OAM1(244, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 2, 0), OAM3(0, 3, 3)),
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(4, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose245[] = {
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose246[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose247[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose249[] = {
	AX_POSE(43, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAlakazamPose250[] = {
	AX_POSE(44, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 4)),
	AX_POSE_TERMINATOR
};
static const ax_anim sAlakazamAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 25, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 28, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 28, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 31, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 34, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 34, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 37, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 40, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 40, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 43, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 46, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 46, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 49, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 20}, .shadow = {0, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {1, 20}, .shadow = {1, 20} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, 6}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 52, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {4, 4}, .shadow = {4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {10, 10}, .shadow = {10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 52, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {20, 20}, .shadow = {20, 20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {21, 19}, .shadow = {21, 19} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {8, 8}, .shadow = {6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {4, 0}, .shadow = {4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {10, 0}, .shadow = {10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 55, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {20, 0}, .shadow = {20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {20, 1}, .shadow = {20, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {6, 0}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 58, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {4, -4}, .shadow = {4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {10, -10}, .shadow = {10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 58, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {18, -18}, .shadow = {18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {19, -17}, .shadow = {19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {6, -6}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 61, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -18}, .shadow = {0, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {1, -18}, .shadow = {1, -18} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, -6}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 64, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-4, -4}, .shadow = {-4, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-10, -10}, .shadow = {-10, -10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 64, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-18, -18}, .shadow = {-18, -18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-19, -17}, .shadow = {-19, -17} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {-6, -6}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 2, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-4, 0}, .shadow = {-4, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-10, 0}, .shadow = {-10, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 67, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, 0}, .shadow = {-20, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-20, 1}, .shadow = {-20, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {-6, 0}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 2, .poseId = 70, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-4, 4}, .shadow = {-4, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-10, 10}, .shadow = {-10, 10} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 70, .offset = {-21, 21}, .shadow = {-21, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-20, 22}, .shadow = {-20, 22} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {-6, 6}, .shadow = {-6, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_4_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 73, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 73, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 73, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -2}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 74, .offset = {1, -2}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -2}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, -2}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, -2}, .shadow = {0, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 74, .offset = {1, -2}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 72, .offset = {0, -2}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_4_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 76, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 76, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 76, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {1, -3}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 77, .offset = {2, -3}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {1, -3}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {2, -3}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 77, .offset = {1, -3}, .shadow = {1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 77, .offset = {2, -3}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 75, .offset = {1, -3}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_4_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 79, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 79, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, -4}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 80, .offset = {2, -4}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, -4}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {2, -4}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 80, .offset = {1, -4}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 80, .offset = {2, -4}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 78, .offset = {1, -4}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_4_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 82, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 82, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, -5}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 83, .offset = {2, -4}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, -5}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {2, -4}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {1, -5}, .shadow = {1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 83, .offset = {2, -4}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 81, .offset = {1, -5}, .shadow = {1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_4_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 85, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 85, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 85, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -6}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 86, .offset = {1, -5}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -5}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {1, -5}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {0, -5}, .shadow = {0, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 86, .offset = {1, -5}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 84, .offset = {0, -5}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_4_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 88, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 88, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 88, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-1, -5}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 89, .offset = {-2, -4}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-1, -5}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-2, -4}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 89, .offset = {-1, -5}, .shadow = {-1, -1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 89, .offset = {-2, -4}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 87, .offset = {-1, -5}, .shadow = {-1, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_4_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 91, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 91, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-1, -4}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 92, .offset = {-2, -4}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-1, -4}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-2, -4}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 92, .offset = {-1, -4}, .shadow = {-1, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 92, .offset = {-2, -4}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 90, .offset = {-1, -4}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_4_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 94, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 94, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-1, -3}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 2, .poseId = 95, .offset = {-2, -3}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-1, -3}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, -3}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-1, -3}, .shadow = {-1, 1} },
	{ .frames = 2, .unkFlags = 1, .poseId = 95, .offset = {-2, -3}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 93, .offset = {-1, -3}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_5_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 97, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 97, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 96, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_5_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 100, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 100, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 100, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 99, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_5_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 103, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 103, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 102, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_5_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 106, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 106, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 105, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_5_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 109, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 109, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 108, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_5_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 112, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 112, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 111, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_5_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 115, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 115, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 114, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_5_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 118, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 118, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, -5}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 117, .offset = {0, -4}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_8_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 131, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_8_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 134, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_8_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 137, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_8_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 140, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_8_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_8_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_8_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_8_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 152, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {6, 4}, .shadow = {6, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {11, 9}, .shadow = {11, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {9, 21}, .shadow = {9, 21} },
	{ .frames = 3, .unkFlags = 0, .poseId = 158, .offset = {1, 26}, .shadow = {1, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-9, 21}, .shadow = {-9, 21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-11, 9}, .shadow = {-11, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {-6, 4}, .shadow = {-6, 4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {23, 11}, .shadow = {23, 11} },
	{ .frames = 3, .unkFlags = 0, .poseId = 157, .offset = {23, 26}, .shadow = {23, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {12, 28}, .shadow = {12, 26} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 17}, .shadow = {0, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {-1, 7}, .shadow = {-1, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 161, .offset = {3, -4}, .shadow = {3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {11, -6}, .shadow = {11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {17, -4}, .shadow = {17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 156, .offset = {22, 2}, .shadow = {22, 2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 157, .offset = {17, 7}, .shadow = {17, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {12, 8}, .shadow = {12, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {1, 5}, .shadow = {1, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 160, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {4, -16}, .shadow = {4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {11, -20}, .shadow = {11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 155, .offset = {20, -20}, .shadow = {20, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 156, .offset = {18, -13}, .shadow = {18, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {16, -6}, .shadow = {16, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {7, -1}, .shadow = {7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 159, .offset = {-8, -4}, .shadow = {-8, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-10, -9}, .shadow = {-10, -9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-9, -15}, .shadow = {-9, -13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 154, .offset = {-1, -21}, .shadow = {-1, -19} },
	{ .frames = 2, .unkFlags = 3, .poseId = 155, .offset = {9, -15}, .shadow = {9, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {10, -9}, .shadow = {10, -9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {8, -4}, .shadow = {8, -4} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {-1, -6}, .shadow = {-1, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {-4, -16}, .shadow = {-4, -16} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-11, -20}, .shadow = {-11, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 161, .offset = {-20, -20}, .shadow = {-20, -20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 160, .offset = {-18, -13}, .shadow = {-19, -13} },
	{ .frames = 2, .unkFlags = 0, .poseId = 159, .offset = {-16, -6}, .shadow = {-16, -6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 158, .offset = {-7, -1}, .shadow = {-7, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {-3, -4}, .shadow = {-3, -4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 154, .offset = {-11, -6}, .shadow = {-11, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-17, -4}, .shadow = {-17, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 160, .offset = {-22, 2}, .shadow = {-22, 2} },
	{ .frames = 2, .unkFlags = 3, .poseId = 159, .offset = {-17, 7}, .shadow = {-17, 4} },
	{ .frames = 2, .unkFlags = 0, .poseId = 158, .offset = {-12, 8}, .shadow = {-12, 6} },
	{ .frames = 1, .unkFlags = 0, .poseId = 157, .offset = {-1, 5}, .shadow = {-1, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 154, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 161, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 160, .offset = {-23, 9}, .shadow = {-23, 9} },
	{ .frames = 3, .unkFlags = 0, .poseId = 159, .offset = {-23, 26}, .shadow = {-23, 23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 158, .offset = {-12, 28}, .shadow = {-12, 26} },
	{ .frames = 2, .unkFlags = 0, .poseId = 157, .offset = {0, 17}, .shadow = {0, 17} },
	{ .frames = 1, .unkFlags = 0, .poseId = 156, .offset = {1, 7}, .shadow = {1, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_14_1[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 210, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 211, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 210, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 212, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_14_2[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 213, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 214, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 213, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 215, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_14_3[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 216, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 217, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 216, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 218, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_14_4[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 219, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 220, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 219, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 221, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_14_5[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 223, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 222, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 224, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_14_6[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 226, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 225, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 227, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_14_7[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 228, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 229, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 228, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 230, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_14_8[] = {
	{ .frames = 8, .unkFlags = 0, .poseId = 231, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 232, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 231, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 233, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_15_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 234, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 235, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 235, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 236, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 12, .unkFlags = 0, .poseId = 237, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 238, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 8, .unkFlags = 0, .poseId = 239, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 244, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 242, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 243, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 240, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 241, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 242, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 243, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 244, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_16_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 245, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 245, .offset = {1, 1}, .shadow = {1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_16_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 246, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 246, .offset = {-1, 1}, .shadow = {-1, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_17_1[] = {
	{ .frames = 10, .unkFlags = 0, .poseId = 247, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 248, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 248, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 248, .offset = {0, -4}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 248, .offset = {0, -3}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 248, .offset = {0, -2}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 248, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAlakazamAnims_18_1[] = {
	{ .frames = 4, .unkFlags = 0, .poseId = 249, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sAlakazamGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_1.4bpp.lz");
static const ax_sprite sAlakazamSprites1[] = {
	{sAlakazamGfx1, ARRAY_COUNT(sAlakazamGfx1)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_2.4bpp.lz");
static const ax_sprite sAlakazamSprites2[] = {
	{sAlakazamGfx2, ARRAY_COUNT(sAlakazamGfx2)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_3.4bpp.lz");
static const ax_sprite sAlakazamSprites3[] = {
	{sAlakazamGfx3, ARRAY_COUNT(sAlakazamGfx3)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_4.4bpp.lz");
static const ax_sprite sAlakazamSprites4[] = {
	{sAlakazamGfx4, ARRAY_COUNT(sAlakazamGfx4)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_5.4bpp.lz");
static const ax_sprite sAlakazamSprites5[] = {
	{sAlakazamGfx5, ARRAY_COUNT(sAlakazamGfx5)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_6.4bpp.lz");
static const ax_sprite sAlakazamSprites6[] = {
	{sAlakazamGfx6, ARRAY_COUNT(sAlakazamGfx6)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_7.4bpp.lz");
static const ax_sprite sAlakazamSprites7[] = {
	{sAlakazamGfx7, ARRAY_COUNT(sAlakazamGfx7)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_8.4bpp.lz");
static const ax_sprite sAlakazamSprites8[] = {
	{sAlakazamGfx8, ARRAY_COUNT(sAlakazamGfx8)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_9.4bpp.lz");
static const ax_sprite sAlakazamSprites9[] = {
	{sAlakazamGfx9, ARRAY_COUNT(sAlakazamGfx9)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_10.4bpp.lz");
static const ax_sprite sAlakazamSprites10[] = {
	{sAlakazamGfx10, ARRAY_COUNT(sAlakazamGfx10)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_11.4bpp.lz");
static const ax_sprite sAlakazamSprites11[] = {
	{sAlakazamGfx11, ARRAY_COUNT(sAlakazamGfx11)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_12.4bpp.lz");
static const ax_sprite sAlakazamSprites12[] = {
	{sAlakazamGfx12, ARRAY_COUNT(sAlakazamGfx12)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_13.4bpp.lz");
static const ax_sprite sAlakazamSprites13[] = {
	{sAlakazamGfx13, ARRAY_COUNT(sAlakazamGfx13)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_14.4bpp.lz");
static const ax_sprite sAlakazamSprites14[] = {
	{sAlakazamGfx14, ARRAY_COUNT(sAlakazamGfx14)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_15.4bpp.lz");
static const ax_sprite sAlakazamSprites15[] = {
	{sAlakazamGfx15, ARRAY_COUNT(sAlakazamGfx15)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_16.4bpp.lz");
static const u8 sAlakazamGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_16_1.4bpp.lz");
static const ax_sprite sAlakazamSprites16[] = {
	{NULL, 32}, 
	{sAlakazamGfx16, ARRAY_COUNT(sAlakazamGfx16)}, 
	{NULL, 32}, 
	{sAlakazamGfx16_1, ARRAY_COUNT(sAlakazamGfx16_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_17.4bpp.lz");
static const u8 sAlakazamGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_17_1.4bpp.lz");
static const u8 sAlakazamGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_17_2.4bpp.lz");
static const ax_sprite sAlakazamSprites17[] = {
	{NULL, 32}, 
	{sAlakazamGfx17, ARRAY_COUNT(sAlakazamGfx17)}, 
	{NULL, 32}, 
	{sAlakazamGfx17_1, ARRAY_COUNT(sAlakazamGfx17_1)}, 
	{NULL, 64}, 
	{sAlakazamGfx17_2, ARRAY_COUNT(sAlakazamGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_18.4bpp.lz");
static const u8 sAlakazamGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_18_1.4bpp.lz");
static const u8 sAlakazamGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_18_2.4bpp.lz");
static const ax_sprite sAlakazamSprites18[] = {
	{NULL, 32}, 
	{sAlakazamGfx18, ARRAY_COUNT(sAlakazamGfx18)}, 
	{NULL, 32}, 
	{sAlakazamGfx18_1, ARRAY_COUNT(sAlakazamGfx18_1)}, 
	{NULL, 32}, 
	{sAlakazamGfx18_2, ARRAY_COUNT(sAlakazamGfx18_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_19.4bpp.lz");
static const u8 sAlakazamGfx19_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_19_1.4bpp.lz");
static const u8 sAlakazamGfx19_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_19_2.4bpp.lz");
static const ax_sprite sAlakazamSprites19[] = {
	{sAlakazamGfx19, ARRAY_COUNT(sAlakazamGfx19)}, 
	{NULL, 32}, 
	{sAlakazamGfx19_1, ARRAY_COUNT(sAlakazamGfx19_1)}, 
	{NULL, 32}, 
	{sAlakazamGfx19_2, ARRAY_COUNT(sAlakazamGfx19_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_20.4bpp.lz");
static const u8 sAlakazamGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_20_1.4bpp.lz");
static const u8 sAlakazamGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_20_2.4bpp.lz");
static const u8 sAlakazamGfx20_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_20_3.4bpp.lz");
static const ax_sprite sAlakazamSprites20[] = {
	{NULL, 32}, 
	{sAlakazamGfx20, ARRAY_COUNT(sAlakazamGfx20)}, 
	{NULL, 32}, 
	{sAlakazamGfx20_1, ARRAY_COUNT(sAlakazamGfx20_1)}, 
	{NULL, 32}, 
	{sAlakazamGfx20_2, ARRAY_COUNT(sAlakazamGfx20_2)}, 
	{NULL, 32}, 
	{sAlakazamGfx20_3, ARRAY_COUNT(sAlakazamGfx20_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_21.4bpp.lz");
static const u8 sAlakazamGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_21_1.4bpp.lz");
static const u8 sAlakazamGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_21_2.4bpp.lz");
static const ax_sprite sAlakazamSprites21[] = {
	{NULL, 32}, 
	{sAlakazamGfx21, ARRAY_COUNT(sAlakazamGfx21)}, 
	{NULL, 32}, 
	{sAlakazamGfx21_1, ARRAY_COUNT(sAlakazamGfx21_1)}, 
	{NULL, 32}, 
	{sAlakazamGfx21_2, ARRAY_COUNT(sAlakazamGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_22.4bpp.lz");
static const u8 sAlakazamGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_22_1.4bpp.lz");
static const ax_sprite sAlakazamSprites22[] = {
	{NULL, 32}, 
	{sAlakazamGfx22, ARRAY_COUNT(sAlakazamGfx22)}, 
	{NULL, 32}, 
	{sAlakazamGfx22_1, ARRAY_COUNT(sAlakazamGfx22_1)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_23.4bpp.lz");
static const u8 sAlakazamGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_23_1.4bpp.lz");
static const u8 sAlakazamGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_23_2.4bpp.lz");
static const ax_sprite sAlakazamSprites23[] = {
	{sAlakazamGfx23, ARRAY_COUNT(sAlakazamGfx23)}, 
	{NULL, 32}, 
	{sAlakazamGfx23_1, ARRAY_COUNT(sAlakazamGfx23_1)}, 
	{NULL, 64}, 
	{sAlakazamGfx23_2, ARRAY_COUNT(sAlakazamGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_24.4bpp.lz");
static const u8 sAlakazamGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_24_1.4bpp.lz");
static const u8 sAlakazamGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_24_2.4bpp.lz");
static const ax_sprite sAlakazamSprites24[] = {
	{NULL, 32}, 
	{sAlakazamGfx24, ARRAY_COUNT(sAlakazamGfx24)}, 
	{NULL, 32}, 
	{sAlakazamGfx24_1, ARRAY_COUNT(sAlakazamGfx24_1)}, 
	{NULL, 32}, 
	{sAlakazamGfx24_2, ARRAY_COUNT(sAlakazamGfx24_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_25.4bpp.lz");
static const u8 sAlakazamGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_25_1.4bpp.lz");
static const u8 sAlakazamGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_25_2.4bpp.lz");
static const ax_sprite sAlakazamSprites25[] = {
	{NULL, 32}, 
	{sAlakazamGfx25, ARRAY_COUNT(sAlakazamGfx25)}, 
	{NULL, 32}, 
	{sAlakazamGfx25_1, ARRAY_COUNT(sAlakazamGfx25_1)}, 
	{NULL, 64}, 
	{sAlakazamGfx25_2, ARRAY_COUNT(sAlakazamGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_26.4bpp.lz");
static const ax_sprite sAlakazamSprites26[] = {
	{sAlakazamGfx26, ARRAY_COUNT(sAlakazamGfx26)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_27.4bpp.lz");
static const ax_sprite sAlakazamSprites27[] = {
	{sAlakazamGfx27, ARRAY_COUNT(sAlakazamGfx27)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_28.4bpp.lz");
static const ax_sprite sAlakazamSprites28[] = {
	{sAlakazamGfx28, ARRAY_COUNT(sAlakazamGfx28)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_29.4bpp.lz");
static const ax_sprite sAlakazamSprites29[] = {
	{sAlakazamGfx29, ARRAY_COUNT(sAlakazamGfx29)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_30.4bpp.lz");
static const ax_sprite sAlakazamSprites30[] = {
	{sAlakazamGfx30, ARRAY_COUNT(sAlakazamGfx30)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_31.4bpp.lz");
static const ax_sprite sAlakazamSprites31[] = {
	{sAlakazamGfx31, ARRAY_COUNT(sAlakazamGfx31)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_32.4bpp.lz");
static const ax_sprite sAlakazamSprites32[] = {
	{sAlakazamGfx32, ARRAY_COUNT(sAlakazamGfx32)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_33.4bpp.lz");
static const u8 sAlakazamGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_33_1.4bpp.lz");
static const u8 sAlakazamGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_33_2.4bpp.lz");
static const ax_sprite sAlakazamSprites33[] = {
	{NULL, 32}, 
	{sAlakazamGfx33, ARRAY_COUNT(sAlakazamGfx33)}, 
	{NULL, 32}, 
	{sAlakazamGfx33_1, ARRAY_COUNT(sAlakazamGfx33_1)}, 
	{NULL, 32}, 
	{sAlakazamGfx33_2, ARRAY_COUNT(sAlakazamGfx33_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_34.4bpp.lz");
static const u8 sAlakazamGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_34_1.4bpp.lz");
static const u8 sAlakazamGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_34_2.4bpp.lz");
static const ax_sprite sAlakazamSprites34[] = {
	{sAlakazamGfx34, ARRAY_COUNT(sAlakazamGfx34)}, 
	{NULL, 64}, 
	{sAlakazamGfx34_1, ARRAY_COUNT(sAlakazamGfx34_1)}, 
	{NULL, 64}, 
	{sAlakazamGfx34_2, ARRAY_COUNT(sAlakazamGfx34_2)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_35.4bpp.lz");
static const u8 sAlakazamGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_35_1.4bpp.lz");
static const u8 sAlakazamGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_35_2.4bpp.lz");
static const ax_sprite sAlakazamSprites35[] = {
	{sAlakazamGfx35, ARRAY_COUNT(sAlakazamGfx35)}, 
	{NULL, 32}, 
	{sAlakazamGfx35_1, ARRAY_COUNT(sAlakazamGfx35_1)}, 
	{NULL, 32}, 
	{sAlakazamGfx35_2, ARRAY_COUNT(sAlakazamGfx35_2)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_36.4bpp.lz");
static const u8 sAlakazamGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_36_1.4bpp.lz");
static const ax_sprite sAlakazamSprites36[] = {
	{sAlakazamGfx36, ARRAY_COUNT(sAlakazamGfx36)}, 
	{NULL, 32}, 
	{sAlakazamGfx36_1, ARRAY_COUNT(sAlakazamGfx36_1)}, 
	{NULL, 128}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_37.4bpp.lz");
static const u8 sAlakazamGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_37_1.4bpp.lz");
static const u8 sAlakazamGfx37_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_37_2.4bpp.lz");
static const ax_sprite sAlakazamSprites37[] = {
	{NULL, 32}, 
	{sAlakazamGfx37, ARRAY_COUNT(sAlakazamGfx37)}, 
	{NULL, 32}, 
	{sAlakazamGfx37_1, ARRAY_COUNT(sAlakazamGfx37_1)}, 
	{NULL, 32}, 
	{sAlakazamGfx37_2, ARRAY_COUNT(sAlakazamGfx37_2)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_38.4bpp.lz");
static const ax_sprite sAlakazamSprites38[] = {
	{sAlakazamGfx38, ARRAY_COUNT(sAlakazamGfx38)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_39.4bpp.lz");
static const u8 sAlakazamGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_39_1.4bpp.lz");
static const u8 sAlakazamGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_39_2.4bpp.lz");
static const u8 sAlakazamGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_39_3.4bpp.lz");
static const ax_sprite sAlakazamSprites39[] = {
	{NULL, 32}, 
	{sAlakazamGfx39, ARRAY_COUNT(sAlakazamGfx39)}, 
	{NULL, 32}, 
	{sAlakazamGfx39_1, ARRAY_COUNT(sAlakazamGfx39_1)}, 
	{NULL, 32}, 
	{sAlakazamGfx39_2, ARRAY_COUNT(sAlakazamGfx39_2)}, 
	{NULL, 32}, 
	{sAlakazamGfx39_3, ARRAY_COUNT(sAlakazamGfx39_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_40.4bpp.lz");
static const ax_sprite sAlakazamSprites40[] = {
	{sAlakazamGfx40, ARRAY_COUNT(sAlakazamGfx40)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_41.4bpp.lz");
static const ax_sprite sAlakazamSprites41[] = {
	{sAlakazamGfx41, ARRAY_COUNT(sAlakazamGfx41)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_42.4bpp.lz");
static const ax_sprite sAlakazamSprites42[] = {
	{sAlakazamGfx42, ARRAY_COUNT(sAlakazamGfx42)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_43.4bpp.lz");
static const ax_sprite sAlakazamSprites43[] = {
	{sAlakazamGfx43, ARRAY_COUNT(sAlakazamGfx43)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_44.4bpp.lz");
static const ax_sprite sAlakazamSprites44[] = {
	{sAlakazamGfx44, ARRAY_COUNT(sAlakazamGfx44)}, 
	{NULL, 0}
};
static const u8 sAlakazamGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/alakazam/sprite_45.4bpp.lz");
static const ax_sprite sAlakazamSprites45[] = {
	{sAlakazamGfx45, ARRAY_COUNT(sAlakazamGfx45)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesAlakazam[] = {
	sAlakazamPose1,
	sAlakazamPose2,
	sAlakazamPose3,
	sAlakazamPose4,
	sAlakazamPose5,
	sAlakazamPose6,
	sAlakazamPose7,
	sAlakazamPose8,
	sAlakazamPose9,
	sAlakazamPose10,
	sAlakazamPose11,
	sAlakazamPose12,
	sAlakazamPose13,
	sAlakazamPose14,
	sAlakazamPose15,
	sAlakazamPose16,
	sAlakazamPose17,
	sAlakazamPose18,
	sAlakazamPose19,
	sAlakazamPose20,
	sAlakazamPose21,
	sAlakazamPose22,
	sAlakazamPose23,
	sAlakazamPose24,
	sAlakazamPose1,
	sAlakazamPose2,
	sAlakazamPose3,
	sAlakazamPose4,
	sAlakazamPose5,
	sAlakazamPose6,
	sAlakazamPose7,
	sAlakazamPose8,
	sAlakazamPose9,
	sAlakazamPose10,
	sAlakazamPose11,
	sAlakazamPose12,
	sAlakazamPose13,
	sAlakazamPose14,
	sAlakazamPose15,
	sAlakazamPose16,
	sAlakazamPose17,
	sAlakazamPose18,
	sAlakazamPose19,
	sAlakazamPose20,
	sAlakazamPose21,
	sAlakazamPose22,
	sAlakazamPose23,
	sAlakazamPose24,
	sAlakazamPose1,
	sAlakazamPose2,
	sAlakazamPose3,
	sAlakazamPose4,
	sAlakazamPose5,
	sAlakazamPose6,
	sAlakazamPose7,
	sAlakazamPose8,
	sAlakazamPose9,
	sAlakazamPose10,
	sAlakazamPose11,
	sAlakazamPose12,
	sAlakazamPose13,
	sAlakazamPose14,
	sAlakazamPose15,
	sAlakazamPose16,
	sAlakazamPose17,
	sAlakazamPose18,
	sAlakazamPose19,
	sAlakazamPose20,
	sAlakazamPose21,
	sAlakazamPose22,
	sAlakazamPose23,
	sAlakazamPose24,
	sAlakazamPose1,
	sAlakazamPose74,
	sAlakazamPose75,
	sAlakazamPose76,
	sAlakazamPose77,
	sAlakazamPose78,
	sAlakazamPose79,
	sAlakazamPose80,
	sAlakazamPose81,
	sAlakazamPose10,
	sAlakazamPose83,
	sAlakazamPose84,
	sAlakazamPose13,
	sAlakazamPose86,
	sAlakazamPose87,
	sAlakazamPose88,
	sAlakazamPose89,
	sAlakazamPose90,
	sAlakazamPose91,
	sAlakazamPose92,
	sAlakazamPose93,
	sAlakazamPose94,
	sAlakazamPose95,
	sAlakazamPose96,
	sAlakazamPose1,
	sAlakazamPose74,
	sAlakazamPose75,
	sAlakazamPose76,
	sAlakazamPose77,
	sAlakazamPose78,
	sAlakazamPose79,
	sAlakazamPose80,
	sAlakazamPose81,
	sAlakazamPose10,
	sAlakazamPose83,
	sAlakazamPose84,
	sAlakazamPose13,
	sAlakazamPose86,
	sAlakazamPose87,
	sAlakazamPose88,
	sAlakazamPose89,
	sAlakazamPose90,
	sAlakazamPose91,
	sAlakazamPose92,
	sAlakazamPose93,
	sAlakazamPose94,
	sAlakazamPose95,
	sAlakazamPose96,
	sAlakazamPose121,
	sAlakazamPose122,
	sAlakazamPose123,
	sAlakazamPose124,
	sAlakazamPose125,
	sAlakazamPose126,
	sAlakazamPose127,
	sAlakazamPose128,
	sAlakazamPose129,
	sAlakazamPose130,
	sAlakazamPose1,
	sAlakazamPose74,
	sAlakazamPose75,
	sAlakazamPose76,
	sAlakazamPose77,
	sAlakazamPose78,
	sAlakazamPose79,
	sAlakazamPose80,
	sAlakazamPose81,
	sAlakazamPose10,
	sAlakazamPose83,
	sAlakazamPose84,
	sAlakazamPose13,
	sAlakazamPose86,
	sAlakazamPose87,
	sAlakazamPose88,
	sAlakazamPose89,
	sAlakazamPose90,
	sAlakazamPose91,
	sAlakazamPose92,
	sAlakazamPose93,
	sAlakazamPose94,
	sAlakazamPose95,
	sAlakazamPose96,
	sAlakazamPose74,
	sAlakazamPose156,
	sAlakazamPose157,
	sAlakazamPose158,
	sAlakazamPose86,
	sAlakazamPose160,
	sAlakazamPose161,
	sAlakazamPose162,
	sAlakazamPose74,
	sAlakazamPose162,
	sAlakazamPose161,
	sAlakazamPose160,
	sAlakazamPose86,
	sAlakazamPose158,
	sAlakazamPose157,
	sAlakazamPose156,
	sAlakazamPose1,
	sAlakazamPose74,
	sAlakazamPose75,
	sAlakazamPose4,
	sAlakazamPose175,
	sAlakazamPose176,
	sAlakazamPose7,
	sAlakazamPose178,
	sAlakazamPose179,
	sAlakazamPose10,
	sAlakazamPose83,
	sAlakazamPose84,
	sAlakazamPose13,
	sAlakazamPose86,
	sAlakazamPose87,
	sAlakazamPose16,
	sAlakazamPose158,
	sAlakazamPose188,
	sAlakazamPose19,
	sAlakazamPose190,
	sAlakazamPose191,
	sAlakazamPose22,
	sAlakazamPose156,
	sAlakazamPose194,
	sAlakazamPose74,
	sAlakazamPose156,
	sAlakazamPose157,
	sAlakazamPose198,
	sAlakazamPose199,
	sAlakazamPose200,
	sAlakazamPose161,
	sAlakazamPose162,
	sAlakazamPose1,
	sAlakazamPose22,
	sAlakazamPose19,
	sAlakazamPose16,
	sAlakazamPose13,
	sAlakazamPose10,
	sAlakazamPose7,
	sAlakazamPose4,
	sAlakazamPose1,
	sAlakazamPose2,
	sAlakazamPose3,
	sAlakazamPose4,
	sAlakazamPose5,
	sAlakazamPose6,
	sAlakazamPose7,
	sAlakazamPose8,
	sAlakazamPose9,
	sAlakazamPose10,
	sAlakazamPose11,
	sAlakazamPose12,
	sAlakazamPose13,
	sAlakazamPose14,
	sAlakazamPose15,
	sAlakazamPose16,
	sAlakazamPose17,
	sAlakazamPose18,
	sAlakazamPose19,
	sAlakazamPose20,
	sAlakazamPose21,
	sAlakazamPose22,
	sAlakazamPose23,
	sAlakazamPose24,
	sAlakazamPose1,
	sAlakazamPose236,
	sAlakazamPose237,
	sAlakazamPose238,
	sAlakazamPose239,
	sAlakazamPose240,
	sAlakazamPose241,
	sAlakazamPose242,
	sAlakazamPose243,
	sAlakazamPose244,
	sAlakazamPose245,
	sAlakazamPose246,
	sAlakazamPose247,
	sAlakazamPose13,
	sAlakazamPose249,
	sAlakazamPose250,
};

static const struct PositionSets sAxPositionsAlakazam[] = {
	[0] = { .set = { {-1, -8}, {-10, -5}, {8, -5}, {-1, -10} } },
	[1] = { .set = { {-1, -7}, {-10, -5}, {8, -3}, {-1, -9} } },
	[2] = { .set = { {-1, -7}, {-10, -3}, {8, -6}, {-1, -9} } },
	[3] = { .set = { {5, -9}, {10, -7}, {-5, -3}, {2, -10} } },
	[4] = { .set = { {5, -8}, {9, -6}, {-2, -3}, {1, -8} } },
	[5] = { .set = { {5, -8}, {10, -7}, {-6, -4}, {1, -9} } },
	[6] = { .set = { {8, -10}, {8, -7}, {-1, -2}, {1, -9} } },
	[7] = { .set = { {8, -9}, {7, -6}, {1, -1}, {1, -8} } },
	[8] = { .set = { {8, -9}, {8, -6}, {-3, -1}, {0, -8} } },
	[9] = { .set = { {2, -13}, {-4, -13}, {7, -6}, {-1, -9} } },
	[10] = { .set = { {3, -12}, {-2, -8}, {9, -6}, {0, -8} } },
	[11] = { .set = { {2, -12}, {0, -12}, {6, -5}, {-1, -8} } },
	[12] = { .set = { {-1, -13}, {8, -8}, {-10, -8}, {-1, -10} } },
	[13] = { .set = { {-1, -12}, {8, -6}, {-10, -9}, {-1, -9} } },
	[14] = { .set = { {-1, -12}, {8, -9}, {-10, -5}, {-1, -9} } },
	[15] = { .set = { {-4, -13}, {2, -13}, {-9, -6}, {-1, -9} } },
	[16] = { .set = { {-5, -12}, {0, -8}, {-11, -6}, {-2, -8} } },
	[17] = { .set = { {-4, -12}, {-2, -12}, {-8, -5}, {-1, -8} } },
	[18] = { .set = { {-8, -10}, {-8, -7}, {1, -2}, {-1, -9} } },
	[19] = { .set = { {-8, -9}, {-7, -6}, {-1, -1}, {-1, -8} } },
	[20] = { .set = { {-8, -9}, {-8, -6}, {3, -1}, {0, -8} } },
	[21] = { .set = { {-5, -9}, {-10, -7}, {5, -3}, {-2, -10} } },
	[22] = { .set = { {-5, -8}, {-9, -6}, {2, -3}, {-1, -8} } },
	[23] = { .set = { {-5, -8}, {-10, -7}, {6, -4}, {-1, -9} } },
	[24] = { .set = { {-1, -8}, {-10, -5}, {8, -5}, {-1, -10} } },
	[25] = { .set = { {-1, -7}, {-10, -5}, {8, -3}, {-1, -9} } },
	[26] = { .set = { {-1, -7}, {-10, -3}, {8, -6}, {-1, -9} } },
	[27] = { .set = { {5, -9}, {10, -7}, {-5, -3}, {2, -10} } },
	[28] = { .set = { {5, -8}, {9, -6}, {-2, -3}, {1, -8} } },
	[29] = { .set = { {5, -8}, {10, -7}, {-6, -4}, {1, -9} } },
	[30] = { .set = { {8, -10}, {8, -7}, {-1, -2}, {1, -9} } },
	[31] = { .set = { {8, -9}, {7, -6}, {1, -1}, {1, -8} } },
	[32] = { .set = { {8, -9}, {8, -6}, {-3, -1}, {0, -8} } },
	[33] = { .set = { {2, -13}, {-4, -13}, {7, -6}, {-1, -9} } },
	[34] = { .set = { {3, -12}, {-2, -8}, {9, -6}, {0, -8} } },
	[35] = { .set = { {2, -12}, {0, -12}, {6, -5}, {-1, -8} } },
	[36] = { .set = { {-1, -13}, {8, -8}, {-10, -8}, {-1, -10} } },
	[37] = { .set = { {-1, -12}, {8, -6}, {-10, -9}, {-1, -9} } },
	[38] = { .set = { {-1, -12}, {8, -9}, {-10, -5}, {-1, -9} } },
	[39] = { .set = { {-4, -13}, {2, -13}, {-9, -6}, {-1, -9} } },
	[40] = { .set = { {-5, -12}, {0, -8}, {-11, -6}, {-2, -8} } },
	[41] = { .set = { {-4, -12}, {-2, -12}, {-8, -5}, {-1, -8} } },
	[42] = { .set = { {-8, -10}, {-8, -7}, {1, -2}, {-1, -9} } },
	[43] = { .set = { {-8, -9}, {-7, -6}, {-1, -1}, {-1, -8} } },
	[44] = { .set = { {-8, -9}, {-8, -6}, {3, -1}, {0, -8} } },
	[45] = { .set = { {-5, -9}, {-10, -7}, {5, -3}, {-2, -10} } },
	[46] = { .set = { {-5, -8}, {-9, -6}, {2, -3}, {-1, -8} } },
	[47] = { .set = { {-5, -8}, {-10, -7}, {6, -4}, {-1, -9} } },
	[48] = { .set = { {-1, -8}, {-10, -5}, {8, -5}, {-1, -10} } },
	[49] = { .set = { {-1, -7}, {-10, -5}, {8, -3}, {-1, -9} } },
	[50] = { .set = { {-1, -7}, {-10, -3}, {8, -6}, {-1, -9} } },
	[51] = { .set = { {5, -9}, {10, -7}, {-5, -3}, {2, -10} } },
	[52] = { .set = { {5, -8}, {9, -6}, {-2, -3}, {1, -8} } },
	[53] = { .set = { {5, -8}, {10, -7}, {-6, -4}, {1, -9} } },
	[54] = { .set = { {8, -10}, {8, -7}, {-1, -2}, {1, -9} } },
	[55] = { .set = { {8, -9}, {7, -6}, {1, -1}, {1, -8} } },
	[56] = { .set = { {8, -9}, {8, -6}, {-3, -1}, {0, -8} } },
	[57] = { .set = { {2, -13}, {-4, -13}, {7, -6}, {-1, -9} } },
	[58] = { .set = { {3, -12}, {-2, -8}, {9, -6}, {0, -8} } },
	[59] = { .set = { {2, -12}, {0, -12}, {6, -5}, {-1, -8} } },
	[60] = { .set = { {-1, -13}, {8, -8}, {-10, -8}, {-1, -10} } },
	[61] = { .set = { {-1, -12}, {8, -6}, {-10, -9}, {-1, -9} } },
	[62] = { .set = { {-1, -12}, {8, -9}, {-10, -5}, {-1, -9} } },
	[63] = { .set = { {-4, -13}, {2, -13}, {-9, -6}, {-1, -9} } },
	[64] = { .set = { {-5, -12}, {0, -8}, {-11, -6}, {-2, -8} } },
	[65] = { .set = { {-4, -12}, {-2, -12}, {-8, -5}, {-1, -8} } },
	[66] = { .set = { {-8, -10}, {-8, -7}, {1, -2}, {-1, -9} } },
	[67] = { .set = { {-8, -9}, {-7, -6}, {-1, -1}, {-1, -8} } },
	[68] = { .set = { {-8, -9}, {-8, -6}, {3, -1}, {0, -8} } },
	[69] = { .set = { {-5, -9}, {-10, -7}, {5, -3}, {-2, -10} } },
	[70] = { .set = { {-5, -8}, {-9, -6}, {2, -3}, {-1, -8} } },
	[71] = { .set = { {-5, -8}, {-10, -7}, {6, -4}, {-1, -9} } },
	[72] = { .set = { {-1, -8}, {-10, -5}, {8, -5}, {-1, -10} } },
	[73] = { .set = { {-1, -8}, {-12, -6}, {10, -6}, {-1, -9} } },
	[74] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -8} } },
	[75] = { .set = { {3, -9}, {8, -7}, {-7, -3}, {0, -10} } },
	[76] = { .set = { {3, -9}, {11, -11}, {-9, -3}, {-1, -9} } },
	[77] = { .set = { {4, -7}, {6, -6}, {4, -5}, {0, -8} } },
	[78] = { .set = { {6, -10}, {6, -7}, {-3, -2}, {-1, -9} } },
	[79] = { .set = { {6, -10}, {0, -5}, {-5, -1}, {-2, -9} } },
	[80] = { .set = { {6, -9}, {10, -8}, {8, -7}, {-1, -9} } },
	[81] = { .set = { {2, -13}, {-4, -13}, {7, -6}, {-1, -9} } },
	[82] = { .set = { {3, -12}, {-10, -11}, {10, -5}, {-1, -11} } },
	[83] = { .set = { {5, -11}, {7, -13}, {10, -12}, {0, -11} } },
	[84] = { .set = { {-1, -13}, {8, -8}, {-10, -8}, {-1, -10} } },
	[85] = { .set = { {-1, -14}, {9, -8}, {-11, -8}, {-1, -11} } },
	[86] = { .set = { {-1, -14}, {3, -15}, {-5, -15}, {-1, -11} } },
	[87] = { .set = { {-3, -13}, {3, -13}, {-8, -6}, {0, -9} } },
	[88] = { .set = { {-4, -12}, {9, -11}, {-11, -5}, {0, -11} } },
	[89] = { .set = { {-6, -11}, {-8, -13}, {-11, -12}, {-1, -11} } },
	[90] = { .set = { {-7, -10}, {-7, -7}, {2, -2}, {0, -9} } },
	[91] = { .set = { {-7, -10}, {-1, -5}, {4, -1}, {1, -9} } },
	[92] = { .set = { {-7, -9}, {-11, -8}, {-9, -7}, {0, -9} } },
	[93] = { .set = { {-4, -9}, {-9, -7}, {6, -3}, {-1, -10} } },
	[94] = { .set = { {-4, -9}, {-12, -11}, {8, -3}, {0, -9} } },
	[95] = { .set = { {-5, -7}, {-7, -6}, {-5, -5}, {-1, -8} } },
	[96] = { .set = { {-1, -8}, {-10, -5}, {8, -5}, {-1, -10} } },
	[97] = { .set = { {-1, -8}, {-12, -6}, {10, -6}, {-1, -9} } },
	[98] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -8} } },
	[99] = { .set = { {3, -9}, {8, -7}, {-7, -3}, {0, -10} } },
	[100] = { .set = { {3, -9}, {11, -11}, {-9, -3}, {-1, -9} } },
	[101] = { .set = { {4, -7}, {6, -6}, {4, -5}, {0, -8} } },
	[102] = { .set = { {6, -10}, {6, -7}, {-3, -2}, {-1, -9} } },
	[103] = { .set = { {6, -10}, {0, -5}, {-5, -1}, {-2, -9} } },
	[104] = { .set = { {6, -9}, {10, -8}, {8, -7}, {-1, -9} } },
	[105] = { .set = { {2, -13}, {-4, -13}, {7, -6}, {-1, -9} } },
	[106] = { .set = { {3, -12}, {-10, -11}, {10, -5}, {-1, -11} } },
	[107] = { .set = { {5, -11}, {7, -13}, {10, -12}, {0, -11} } },
	[108] = { .set = { {-1, -13}, {8, -8}, {-10, -8}, {-1, -10} } },
	[109] = { .set = { {-1, -14}, {9, -8}, {-11, -8}, {-1, -11} } },
	[110] = { .set = { {-1, -14}, {3, -15}, {-5, -15}, {-1, -11} } },
	[111] = { .set = { {-3, -13}, {3, -13}, {-8, -6}, {0, -9} } },
	[112] = { .set = { {-4, -12}, {9, -11}, {-11, -5}, {0, -11} } },
	[113] = { .set = { {-6, -11}, {-8, -13}, {-11, -12}, {-1, -11} } },
	[114] = { .set = { {-7, -10}, {-7, -7}, {2, -2}, {0, -9} } },
	[115] = { .set = { {-7, -10}, {-1, -5}, {4, -1}, {1, -9} } },
	[116] = { .set = { {-7, -9}, {-11, -8}, {-9, -7}, {0, -9} } },
	[117] = { .set = { {-4, -9}, {-9, -7}, {6, -3}, {-1, -10} } },
	[118] = { .set = { {-4, -9}, {-12, -11}, {8, -3}, {0, -9} } },
	[119] = { .set = { {-5, -7}, {-7, -6}, {-5, -5}, {-1, -8} } },
	[120] = { .set = { {-5, -6}, {-9, -4}, {7, 1}, {-1, -6} } },
	[121] = { .set = { {-5, -5}, {-9, -3}, {7, 2}, {-1, -6} } },
	[122] = { .set = { {0, -11}, {-12, -13}, {12, -13}, {0, -10} } },
	[123] = { .set = { {0, -12}, {11, -18}, {-14, -5}, {-1, -10} } },
	[124] = { .set = { {0, -14}, {6, -17}, {-9, -9}, {-3, -11} } },
	[125] = { .set = { {0, -15}, {-12, -16}, {8, -8}, {-2, -9} } },
	[126] = { .set = { {0, -15}, {12, -12}, {-12, -12}, {0, -9} } },
	[127] = { .set = { {-1, -15}, {11, -16}, {-9, -8}, {1, -9} } },
	[128] = { .set = { {-1, -14}, {-7, -17}, {8, -9}, {2, -11} } },
	[129] = { .set = { {-1, -12}, {-12, -18}, {13, -5}, {0, -10} } },
	[130] = { .set = { {-1, -8}, {-10, -5}, {8, -5}, {-1, -10} } },
	[131] = { .set = { {-1, -8}, {-12, -6}, {10, -6}, {-1, -9} } },
	[132] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -8} } },
	[133] = { .set = { {3, -9}, {8, -7}, {-7, -3}, {0, -10} } },
	[134] = { .set = { {3, -9}, {11, -11}, {-9, -3}, {-1, -9} } },
	[135] = { .set = { {4, -7}, {6, -6}, {4, -5}, {0, -8} } },
	[136] = { .set = { {6, -10}, {6, -7}, {-3, -2}, {-1, -9} } },
	[137] = { .set = { {6, -10}, {0, -5}, {-5, -1}, {-2, -9} } },
	[138] = { .set = { {6, -9}, {10, -8}, {8, -7}, {-1, -9} } },
	[139] = { .set = { {2, -13}, {-4, -13}, {7, -6}, {-1, -9} } },
	[140] = { .set = { {3, -12}, {-10, -11}, {10, -5}, {-1, -11} } },
	[141] = { .set = { {5, -11}, {7, -13}, {10, -12}, {0, -11} } },
	[142] = { .set = { {-1, -13}, {8, -8}, {-10, -8}, {-1, -10} } },
	[143] = { .set = { {-1, -14}, {9, -8}, {-11, -8}, {-1, -11} } },
	[144] = { .set = { {-1, -14}, {3, -15}, {-5, -15}, {-1, -11} } },
	[145] = { .set = { {-3, -13}, {3, -13}, {-8, -6}, {0, -9} } },
	[146] = { .set = { {-4, -12}, {9, -11}, {-11, -5}, {0, -11} } },
	[147] = { .set = { {-6, -11}, {-8, -13}, {-11, -12}, {-1, -11} } },
	[148] = { .set = { {-7, -10}, {-7, -7}, {2, -2}, {0, -9} } },
	[149] = { .set = { {-7, -10}, {-1, -5}, {4, -1}, {1, -9} } },
	[150] = { .set = { {-7, -9}, {-11, -8}, {-9, -7}, {0, -9} } },
	[151] = { .set = { {-4, -9}, {-9, -7}, {6, -3}, {-1, -10} } },
	[152] = { .set = { {-4, -9}, {-12, -11}, {8, -3}, {0, -9} } },
	[153] = { .set = { {-5, -7}, {-7, -6}, {-5, -5}, {-1, -8} } },
	[154] = { .set = { {-1, -8}, {-12, -6}, {10, -6}, {-1, -9} } },
	[155] = { .set = { {-5, -9}, {-13, -11}, {7, -3}, {-1, -9} } },
	[156] = { .set = { {-8, -11}, {-2, -6}, {3, -2}, {0, -10} } },
	[157] = { .set = { {-5, -12}, {8, -11}, {-12, -5}, {-1, -11} } },
	[158] = { .set = { {-1, -14}, {9, -8}, {-11, -8}, {-1, -11} } },
	[159] = { .set = { {4, -12}, {-9, -11}, {11, -5}, {0, -11} } },
	[160] = { .set = { {9, -11}, {3, -6}, {-2, -2}, {1, -10} } },
	[161] = { .set = { {6, -9}, {14, -11}, {-6, -3}, {2, -9} } },
	[162] = { .set = { {-1, -8}, {-12, -6}, {10, -6}, {-1, -9} } },
	[163] = { .set = { {6, -9}, {14, -11}, {-6, -3}, {2, -9} } },
	[164] = { .set = { {9, -11}, {3, -6}, {-2, -2}, {1, -10} } },
	[165] = { .set = { {4, -12}, {-9, -11}, {11, -5}, {0, -11} } },
	[166] = { .set = { {-1, -14}, {9, -8}, {-11, -8}, {-1, -11} } },
	[167] = { .set = { {-5, -12}, {8, -11}, {-12, -5}, {-1, -11} } },
	[168] = { .set = { {-8, -11}, {-2, -6}, {3, -2}, {0, -10} } },
	[169] = { .set = { {-5, -9}, {-13, -11}, {7, -3}, {-1, -9} } },
	[170] = { .set = { {-1, -8}, {-10, -5}, {8, -5}, {-1, -10} } },
	[171] = { .set = { {-1, -8}, {-12, -6}, {10, -6}, {-1, -9} } },
	[172] = { .set = { {-1, -7}, {-3, -4}, {1, -4}, {-1, -8} } },
	[173] = { .set = { {5, -9}, {10, -7}, {-5, -3}, {2, -10} } },
	[174] = { .set = { {5, -9}, {13, -11}, {-7, -3}, {1, -9} } },
	[175] = { .set = { {6, -7}, {8, -6}, {6, -5}, {2, -8} } },
	[176] = { .set = { {8, -10}, {8, -7}, {-1, -2}, {1, -9} } },
	[177] = { .set = { {8, -10}, {2, -5}, {-3, -1}, {0, -9} } },
	[178] = { .set = { {8, -9}, {12, -8}, {10, -7}, {1, -9} } },
	[179] = { .set = { {2, -13}, {-4, -13}, {7, -6}, {-1, -9} } },
	[180] = { .set = { {3, -12}, {-10, -11}, {10, -5}, {-1, -11} } },
	[181] = { .set = { {5, -11}, {7, -13}, {10, -12}, {0, -11} } },
	[182] = { .set = { {-1, -13}, {8, -8}, {-10, -8}, {-1, -10} } },
	[183] = { .set = { {-1, -14}, {9, -8}, {-11, -8}, {-1, -11} } },
	[184] = { .set = { {-1, -14}, {3, -15}, {-5, -15}, {-1, -11} } },
	[185] = { .set = { {-4, -13}, {2, -13}, {-9, -6}, {-1, -9} } },
	[186] = { .set = { {-5, -12}, {8, -11}, {-12, -5}, {-1, -11} } },
	[187] = { .set = { {-7, -11}, {-9, -13}, {-12, -12}, {-2, -11} } },
	[188] = { .set = { {-8, -10}, {-8, -7}, {1, -2}, {-1, -9} } },
	[189] = { .set = { {-8, -10}, {-2, -5}, {3, -1}, {0, -9} } },
	[190] = { .set = { {-8, -9}, {-12, -8}, {-10, -7}, {-1, -9} } },
	[191] = { .set = { {-5, -9}, {-10, -7}, {5, -3}, {-2, -10} } },
	[192] = { .set = { {-5, -9}, {-13, -11}, {7, -3}, {-1, -9} } },
	[193] = { .set = { {-6, -7}, {-8, -6}, {-6, -5}, {-2, -8} } },
	[194] = { .set = { {-1, -8}, {-12, -6}, {10, -6}, {-1, -9} } },
	[195] = { .set = { {-5, -9}, {-13, -11}, {7, -3}, {-1, -9} } },
	[196] = { .set = { {-8, -11}, {-2, -6}, {3, -2}, {0, -10} } },
	[197] = { .set = { {-5, -13}, {8, -12}, {-12, -6}, {-1, -12} } },
	[198] = { .set = { {-1, -15}, {9, -9}, {-11, -9}, {-1, -12} } },
	[199] = { .set = { {4, -13}, {-9, -12}, {11, -6}, {0, -12} } },
	[200] = { .set = { {9, -11}, {3, -6}, {-2, -2}, {1, -10} } },
	[201] = { .set = { {6, -9}, {14, -11}, {-6, -3}, {2, -9} } },
	[202] = { .set = { {-1, -8}, {-10, -5}, {8, -5}, {-1, -10} } },
	[203] = { .set = { {-5, -9}, {-10, -7}, {5, -3}, {-2, -10} } },
	[204] = { .set = { {-8, -10}, {-8, -7}, {1, -2}, {-1, -9} } },
	[205] = { .set = { {-4, -13}, {2, -13}, {-9, -6}, {-1, -9} } },
	[206] = { .set = { {-1, -13}, {8, -8}, {-10, -8}, {-1, -10} } },
	[207] = { .set = { {2, -13}, {-4, -13}, {7, -6}, {-1, -9} } },
	[208] = { .set = { {8, -10}, {8, -7}, {-1, -2}, {1, -9} } },
	[209] = { .set = { {5, -9}, {10, -7}, {-5, -3}, {2, -10} } },
	[210] = { .set = { {-1, -8}, {-10, -5}, {8, -5}, {-1, -10} } },
	[211] = { .set = { {-1, -7}, {-10, -5}, {8, -3}, {-1, -9} } },
	[212] = { .set = { {-1, -7}, {-10, -3}, {8, -6}, {-1, -9} } },
	[213] = { .set = { {5, -9}, {10, -7}, {-5, -3}, {2, -10} } },
	[214] = { .set = { {5, -8}, {9, -6}, {-2, -3}, {1, -8} } },
	[215] = { .set = { {5, -8}, {10, -7}, {-6, -4}, {1, -9} } },
	[216] = { .set = { {8, -10}, {8, -7}, {-1, -2}, {1, -9} } },
	[217] = { .set = { {8, -9}, {7, -6}, {1, -1}, {1, -8} } },
	[218] = { .set = { {8, -9}, {8, -6}, {-3, -1}, {0, -8} } },
	[219] = { .set = { {2, -13}, {-4, -13}, {7, -6}, {-1, -9} } },
	[220] = { .set = { {3, -12}, {-2, -8}, {9, -6}, {0, -8} } },
	[221] = { .set = { {2, -12}, {0, -12}, {6, -5}, {-1, -8} } },
	[222] = { .set = { {-1, -13}, {8, -8}, {-10, -8}, {-1, -10} } },
	[223] = { .set = { {-1, -12}, {8, -6}, {-10, -9}, {-1, -9} } },
	[224] = { .set = { {-1, -12}, {8, -9}, {-10, -5}, {-1, -9} } },
	[225] = { .set = { {-4, -13}, {2, -13}, {-9, -6}, {-1, -9} } },
	[226] = { .set = { {-5, -12}, {0, -8}, {-11, -6}, {-2, -8} } },
	[227] = { .set = { {-4, -12}, {-2, -12}, {-8, -5}, {-1, -8} } },
	[228] = { .set = { {-8, -10}, {-8, -7}, {1, -2}, {-1, -9} } },
	[229] = { .set = { {-8, -9}, {-7, -6}, {-1, -1}, {-1, -8} } },
	[230] = { .set = { {-8, -9}, {-8, -6}, {3, -1}, {0, -8} } },
	[231] = { .set = { {-5, -9}, {-10, -7}, {5, -3}, {-2, -10} } },
	[232] = { .set = { {-5, -8}, {-9, -6}, {2, -3}, {-1, -8} } },
	[233] = { .set = { {-5, -8}, {-10, -7}, {6, -4}, {-1, -9} } },
	[234] = { .set = { {-1, -8}, {-10, -5}, {8, -5}, {-1, -10} } },
	[235] = { .set = { {-1, -5}, {-8, -6}, {6, -6}, {-1, -8} } },
	[236] = { .set = { {-1, -10}, {-10, -20}, {8, -20}, {-1, -11} } },
	[237] = { .set = { {-1, -10}, {-10, -20}, {8, -20}, {-1, -11} } },
	[238] = { .set = { {-1, -5}, {-6, -2}, {4, -2}, {-1, -8} } },
	[239] = { .set = { {-1, -5}, {-6, -2}, {4, -2}, {-1, -8} } },
	[240] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -8} } },
	[241] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -8} } },
	[242] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -8} } },
	[243] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -8} } },
	[244] = { .set = { {-1, -5}, {-4, -2}, {2, -2}, {-1, -8} } },
	[245] = { .set = { {-1, -10}, {-7, -10}, {2, -3}, {0, -9} } },
	[246] = { .set = { {0, -10}, {6, -10}, {-3, -3}, {-1, -9} } },
	[247] = { .set = { {-1, -13}, {8, -8}, {-10, -8}, {-1, -10} } },
	[248] = { .set = { {-4, -15}, {9, -22}, {-13, -17}, {-1, -14} } },
	[249] = { .set = { {-12, -1}, {-8, -4}, {-7, 3}, {-1, -4} } },
};

static const ax_anim *const sAlakazamAnimTable1[] = {
	gAxSharedAnim_02603,
	gAxSharedAnim_02679,
	gAxSharedAnim_02688,
	gAxSharedAnim_02697,
	gAxSharedAnim_02615,
	gAxSharedAnim_02637,
	gAxSharedAnim_02650,
	gAxSharedAnim_02659,
};

static const ax_anim *const sAlakazamAnimTable2[] = {
	sAlakazamAnims_2_1,
	sAlakazamAnims_2_2,
	sAlakazamAnims_2_3,
	sAlakazamAnims_2_4,
	sAlakazamAnims_2_5,
	sAlakazamAnims_2_6,
	sAlakazamAnims_2_7,
	sAlakazamAnims_2_8,
};

static const ax_anim *const sAlakazamAnimTable3[] = {
	sAlakazamAnims_3_1,
	sAlakazamAnims_3_2,
	sAlakazamAnims_3_3,
	sAlakazamAnims_3_4,
	sAlakazamAnims_3_5,
	sAlakazamAnims_3_6,
	sAlakazamAnims_3_7,
	sAlakazamAnims_3_8,
};

static const ax_anim *const sAlakazamAnimTable4[] = {
	sAlakazamAnims_4_1,
	sAlakazamAnims_4_2,
	sAlakazamAnims_4_3,
	sAlakazamAnims_4_4,
	sAlakazamAnims_4_5,
	sAlakazamAnims_4_6,
	sAlakazamAnims_4_7,
	sAlakazamAnims_4_8,
};

static const ax_anim *const sAlakazamAnimTable5[] = {
	sAlakazamAnims_5_1,
	sAlakazamAnims_5_2,
	sAlakazamAnims_5_3,
	sAlakazamAnims_5_4,
	sAlakazamAnims_5_5,
	sAlakazamAnims_5_6,
	sAlakazamAnims_5_7,
	sAlakazamAnims_5_8,
};

static const ax_anim *const sAlakazamAnimTable6[] = {
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
	gAxSharedAnim_02362,
};

static const ax_anim *const sAlakazamAnimTable7[] = {
	gAxSharedAnim_00331,
	gAxSharedAnim_00341,
	gAxSharedAnim_00349,
	gAxSharedAnim_00357,
	gAxSharedAnim_00369,
	gAxSharedAnim_00377,
	gAxSharedAnim_00384,
	gAxSharedAnim_00391,
};

static const ax_anim *const sAlakazamAnimTable8[] = {
	sAlakazamAnims_8_1,
	sAlakazamAnims_8_2,
	sAlakazamAnims_8_3,
	sAlakazamAnims_8_4,
	sAlakazamAnims_8_5,
	sAlakazamAnims_8_6,
	sAlakazamAnims_8_7,
	sAlakazamAnims_8_8,
};

static const ax_anim *const sAlakazamAnimTable9[] = {
	sAlakazamAnims_9_1,
	sAlakazamAnims_9_2,
	sAlakazamAnims_9_3,
	sAlakazamAnims_9_4,
	sAlakazamAnims_9_5,
	sAlakazamAnims_9_6,
	sAlakazamAnims_9_7,
	sAlakazamAnims_9_8,
};

static const ax_anim *const sAlakazamAnimTable10[] = {
	gAxSharedAnim_00705,
	gAxSharedAnim_00714,
	gAxSharedAnim_00725,
	gAxSharedAnim_00737,
	gAxSharedAnim_00750,
	gAxSharedAnim_00760,
	gAxSharedAnim_00772,
	gAxSharedAnim_00781,
};

static const ax_anim *const sAlakazamAnimTable11[] = {
	gAxSharedAnim_00794,
	gAxSharedAnim_00836,
	gAxSharedAnim_00873,
	gAxSharedAnim_00913,
	gAxSharedAnim_00952,
	gAxSharedAnim_00988,
	gAxSharedAnim_01044,
	gAxSharedAnim_01087,
};

static const ax_anim *const sAlakazamAnimTable12[] = {
	gAxSharedAnim_01147,
	gAxSharedAnim_01231,
	gAxSharedAnim_01208,
	gAxSharedAnim_01194,
	gAxSharedAnim_01193,
	gAxSharedAnim_01181,
	gAxSharedAnim_01161,
	gAxSharedAnim_01148,
};

static const ax_anim *const sAlakazamAnimTable13[] = {
	gAxSharedAnim_01242,
	gAxSharedAnim_01323,
	gAxSharedAnim_01314,
	gAxSharedAnim_01301,
	gAxSharedAnim_01286,
	gAxSharedAnim_01278,
	gAxSharedAnim_01267,
	gAxSharedAnim_01253,
};

static const ax_anim *const sAlakazamAnimTable14[] = {
	sAlakazamAnims_14_1,
	sAlakazamAnims_14_2,
	sAlakazamAnims_14_3,
	sAlakazamAnims_14_4,
	sAlakazamAnims_14_5,
	sAlakazamAnims_14_6,
	sAlakazamAnims_14_7,
	sAlakazamAnims_14_8,
};

static const ax_anim *const sAlakazamAnimTable15[] = {
	sAlakazamAnims_15_1,
	sAlakazamAnims_15_1,
	sAlakazamAnims_15_1,
	sAlakazamAnims_15_1,
	sAlakazamAnims_15_1,
	sAlakazamAnims_15_1,
	sAlakazamAnims_15_1,
	sAlakazamAnims_15_1,
};

static const ax_anim *const sAlakazamAnimTable16[] = {
	sAlakazamAnims_16_1,
	sAlakazamAnims_16_2,
	sAlakazamAnims_16_1,
	sAlakazamAnims_16_1,
	sAlakazamAnims_16_1,
	sAlakazamAnims_16_1,
	sAlakazamAnims_16_1,
	sAlakazamAnims_16_1,
};

static const ax_anim *const sAlakazamAnimTable17[] = {
	sAlakazamAnims_17_1,
	sAlakazamAnims_17_1,
	sAlakazamAnims_17_1,
	sAlakazamAnims_17_1,
	sAlakazamAnims_17_1,
	sAlakazamAnims_17_1,
	sAlakazamAnims_17_1,
	sAlakazamAnims_17_1,
};

static const ax_anim *const sAlakazamAnimTable18[] = {
	sAlakazamAnims_18_1,
	sAlakazamAnims_18_1,
	sAlakazamAnims_18_1,
	sAlakazamAnims_18_1,
	sAlakazamAnims_18_1,
	sAlakazamAnims_18_1,
	sAlakazamAnims_18_1,
	sAlakazamAnims_18_1,
};

static const ax_anim *const *const sAxAnimationsAlakazam[] = {
	sAlakazamAnimTable1,
	sAlakazamAnimTable2,
	sAlakazamAnimTable3,
	sAlakazamAnimTable4,
	sAlakazamAnimTable5,
	sAlakazamAnimTable6,
	sAlakazamAnimTable7,
	sAlakazamAnimTable8,
	sAlakazamAnimTable9,
	sAlakazamAnimTable10,
	sAlakazamAnimTable11,
	sAlakazamAnimTable12,
	sAlakazamAnimTable13,
	sAlakazamAnimTable14,
	sAlakazamAnimTable15,
	sAlakazamAnimTable16,
	sAlakazamAnimTable17,
	sAlakazamAnimTable18,
};

static const ax_sprite *const sAxSpritesAlakazam[] = {
	sAlakazamSprites1,
	sAlakazamSprites2,
	sAlakazamSprites3,
	sAlakazamSprites4,
	sAlakazamSprites5,
	sAlakazamSprites6,
	sAlakazamSprites7,
	sAlakazamSprites8,
	sAlakazamSprites9,
	sAlakazamSprites10,
	sAlakazamSprites11,
	sAlakazamSprites12,
	sAlakazamSprites13,
	sAlakazamSprites14,
	sAlakazamSprites15,
	sAlakazamSprites16,
	sAlakazamSprites17,
	sAlakazamSprites18,
	sAlakazamSprites19,
	sAlakazamSprites20,
	sAlakazamSprites21,
	sAlakazamSprites22,
	sAlakazamSprites23,
	sAlakazamSprites24,
	sAlakazamSprites25,
	sAlakazamSprites26,
	sAlakazamSprites27,
	sAlakazamSprites28,
	sAlakazamSprites29,
	sAlakazamSprites30,
	sAlakazamSprites31,
	sAlakazamSprites32,
	sAlakazamSprites33,
	sAlakazamSprites34,
	sAlakazamSprites35,
	sAlakazamSprites36,
	sAlakazamSprites37,
	sAlakazamSprites38,
	sAlakazamSprites39,
	sAlakazamSprites40,
	sAlakazamSprites41,
	sAlakazamSprites42,
	sAlakazamSprites43,
	sAlakazamSprites44,
	sAlakazamSprites45,
};

static const axmain sAxMainAlakazam = {
	.poses = sAxPosesAlakazam,
	.animations = sAxAnimationsAlakazam,
	.animCount = ARRAY_COUNT(sAxAnimationsAlakazam),
	.spriteData = sAxSpritesAlakazam,
	.positions = sAxPositionsAlakazam,
};
