/* ax-table-deduped: duplicate pose/anim arrays aliased */
/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */
#include "ax_shared_anims.h"
static const axmain sAxMainVictreebel;
const SiroArchive gAxVictreebel = {"SIRO", &sAxMainVictreebel};

static const ax_pose sVictreebelPose1[] = {
	AX_POSE(0, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose2[] = {
	AX_POSE(1, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose3[] = {
	AX_POSE(2, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose4[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose5[] = {
	AX_POSE(4, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose6[] = {
	AX_POSE(5, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose7[] = {
	AX_POSE(6, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose8[] = {
	AX_POSE(7, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose9[] = {
	AX_POSE(8, OAM1(228, ST_OAM_V_RECTANGLE, 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose10[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose11[] = {
	AX_POSE(10, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose12[] = {
	AX_POSE(11, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose13[] = {
	AX_POSE(12, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose14[] = {
	AX_POSE(13, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose15[] = {
	AX_POSE(14, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose16[] = {
	AX_POSE(15, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose17[] = {
	AX_POSE(16, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose18[] = {
	AX_POSE(17, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose19[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose20[] = {
	AX_POSE(19, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose21[] = {
	AX_POSE(20, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose22[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose23[] = {
	AX_POSE(22, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose24[] = {
	AX_POSE(23, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose52[] = {
	AX_POSE(24, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose53[] = {
	AX_POSE(25, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose54[] = {
	AX_POSE(26, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose58[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose59[] = {
	AX_POSE(28, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(0, ST_OAM_SIZE_2, FLIP(1, 0), 0, 1), OAM3(0, 3, 3)),
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose60[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose64[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose65[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose66[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose70[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose71[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose72[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose76[] = {
	AX_POSE(36, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose77[] = {
	AX_POSE(37, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose78[] = {
	AX_POSE(38, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose82[] = {
	AX_POSE(33, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose83[] = {
	AX_POSE(34, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose84[] = {
	AX_POSE(35, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose88[] = {
	AX_POSE(30, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose89[] = {
	AX_POSE(31, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(16, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose90[] = {
	AX_POSE(32, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose94[] = {
	AX_POSE(27, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose95[] = {
	AX_POSE(28, OAM1(230, ST_OAM_V_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(8, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose96[] = {
	AX_POSE(29, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose100[] = {
	AX_POSE(39, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose104[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose108[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose112[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose116[] = {
	AX_POSE(43, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose120[] = {
	AX_POSE(42, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose124[] = {
	AX_POSE(41, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose128[] = {
	AX_POSE(40, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose130[] = {
	AX_POSE(21, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose131[] = {
	AX_POSE(18, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose134[] = {
	AX_POSE(9, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose135[] = {
	AX_POSE(44, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose136[] = {
	AX_POSE(3, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose137[] = {
	AX_POSE(45, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose138[] = {
	AX_POSE(46, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose139[] = {
	AX_POSE(47, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose140[] = {
	AX_POSE(48, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose141[] = {
	AX_POSE(49, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose142[] = {
	AX_POSE(50, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose143[] = {
	AX_POSE(51, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose144[] = {
	AX_POSE(50, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose145[] = {
	AX_POSE(49, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose146[] = {
	AX_POSE(48, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose171[] = {
	AX_POSE(39, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose172[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose174[] = {
	AX_POSE(42, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose176[] = {
	AX_POSE(42, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose178[] = {
	AX_POSE(40, OAM1(230, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose180[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose181[] = {
	AX_POSE(41, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose182[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose183[] = {
	AX_POSE(43, OAM1(229, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose184[] = {
	AX_POSE(42, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(243, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose185[] = {
	AX_POSE(41, OAM1(231, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const ax_pose sVictreebelPose186[] = {
	AX_POSE(40, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 3)),
	AX_POSE_TERMINATOR
};
static const u8 sVictreebelAnims_1_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_1_1.lz");
static const u8 sVictreebelAnims_1_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_1_2.lz");
static const u8 sVictreebelAnims_1_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_1_3.lz");
static const u8 sVictreebelAnims_1_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_1_4.lz");
static const u8 sVictreebelAnims_1_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_1_5.lz");
static const u8 sVictreebelAnims_1_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_1_6.lz");
static const u8 sVictreebelAnims_1_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_1_7.lz");
static const u8 sVictreebelAnims_1_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_1_8.lz");
static const u8 sVictreebelAnims_2_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_2_1.lz");
static const u8 sVictreebelAnims_2_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_2_2.lz");
static const u8 sVictreebelAnims_2_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_2_3.lz");
static const u8 sVictreebelAnims_2_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_2_4.lz");
static const u8 sVictreebelAnims_2_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_2_5.lz");
static const u8 sVictreebelAnims_2_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_2_6.lz");
static const u8 sVictreebelAnims_2_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_2_7.lz");
static const u8 sVictreebelAnims_2_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_2_8.lz");
static const u8 sVictreebelAnims_3_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_3_1.lz");
static const u8 sVictreebelAnims_3_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_3_2.lz");
static const u8 sVictreebelAnims_3_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_3_3.lz");
static const u8 sVictreebelAnims_3_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_3_4.lz");
static const u8 sVictreebelAnims_3_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_3_5.lz");
static const u8 sVictreebelAnims_3_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_3_6.lz");
static const u8 sVictreebelAnims_3_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_3_7.lz");
static const u8 sVictreebelAnims_3_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_3_8.lz");
static const u8 sVictreebelAnims_4_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_4_1.lz");
static const u8 sVictreebelAnims_4_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_4_2.lz");
static const u8 sVictreebelAnims_4_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_4_3.lz");
static const u8 sVictreebelAnims_4_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_4_4.lz");
static const u8 sVictreebelAnims_4_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_4_5.lz");
static const u8 sVictreebelAnims_4_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_4_6.lz");
static const u8 sVictreebelAnims_4_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_4_7.lz");
static const u8 sVictreebelAnims_4_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_4_8.lz");
static const u8 sVictreebelAnims_8_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_8_1.lz");
static const u8 sVictreebelAnims_8_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_8_2.lz");
static const u8 sVictreebelAnims_8_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_8_3.lz");
static const u8 sVictreebelAnims_8_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_8_4.lz");
static const u8 sVictreebelAnims_8_5[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_8_5.lz");
static const u8 sVictreebelAnims_8_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_8_6.lz");
static const u8 sVictreebelAnims_8_7[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_8_7.lz");
static const u8 sVictreebelAnims_8_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_8_8.lz");
static const u8 sVictreebelAnims_9_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_9_1.lz");
static const u8 sVictreebelAnims_9_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_9_2.lz");
static const u8 sVictreebelAnims_9_4[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_9_4.lz");
static const u8 sVictreebelAnims_9_6[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_9_6.lz");
static const u8 sVictreebelAnims_9_8[] ALIGNED(4) = INCBIN_U8("graphics/ax/anim_lz/victreebel/sVictreebelAnims_9_8.lz");

static const u8 sVictreebelGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_1.4bpp.lz");
static const ax_sprite sVictreebelSprites1[] = {
	{sVictreebelGfx1, ARRAY_COUNT(sVictreebelGfx1)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_2.4bpp.lz");
static const ax_sprite sVictreebelSprites2[] = {
	{sVictreebelGfx2, ARRAY_COUNT(sVictreebelGfx2)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_3.4bpp.lz");
static const ax_sprite sVictreebelSprites3[] = {
	{sVictreebelGfx3, ARRAY_COUNT(sVictreebelGfx3)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_4.4bpp.lz");
static const ax_sprite sVictreebelSprites4[] = {
	{sVictreebelGfx4, ARRAY_COUNT(sVictreebelGfx4)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_5.4bpp.lz");
static const ax_sprite sVictreebelSprites5[] = {
	{sVictreebelGfx5, ARRAY_COUNT(sVictreebelGfx5)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_6.4bpp.lz");
static const ax_sprite sVictreebelSprites6[] = {
	{sVictreebelGfx6, ARRAY_COUNT(sVictreebelGfx6)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_7.4bpp.lz");
static const ax_sprite sVictreebelSprites7[] = {
	{sVictreebelGfx7, ARRAY_COUNT(sVictreebelGfx7)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_8.4bpp.lz");
static const ax_sprite sVictreebelSprites8[] = {
	{sVictreebelGfx8, ARRAY_COUNT(sVictreebelGfx8)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_9.4bpp.lz");
static const ax_sprite sVictreebelSprites9[] = {
	{sVictreebelGfx9, ARRAY_COUNT(sVictreebelGfx9)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_10.4bpp.lz");
static const ax_sprite sVictreebelSprites10[] = {
	{sVictreebelGfx10, ARRAY_COUNT(sVictreebelGfx10)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_11.4bpp.lz");
static const ax_sprite sVictreebelSprites11[] = {
	{sVictreebelGfx11, ARRAY_COUNT(sVictreebelGfx11)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_12.4bpp.lz");
static const ax_sprite sVictreebelSprites12[] = {
	{sVictreebelGfx12, ARRAY_COUNT(sVictreebelGfx12)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_13.4bpp.lz");
static const ax_sprite sVictreebelSprites13[] = {
	{sVictreebelGfx13, ARRAY_COUNT(sVictreebelGfx13)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_14.4bpp.lz");
static const ax_sprite sVictreebelSprites14[] = {
	{sVictreebelGfx14, ARRAY_COUNT(sVictreebelGfx14)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_15.4bpp.lz");
static const ax_sprite sVictreebelSprites15[] = {
	{sVictreebelGfx15, ARRAY_COUNT(sVictreebelGfx15)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_16.4bpp.lz");
static const ax_sprite sVictreebelSprites16[] = {
	{sVictreebelGfx16, ARRAY_COUNT(sVictreebelGfx16)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_17.4bpp.lz");
static const ax_sprite sVictreebelSprites17[] = {
	{sVictreebelGfx17, ARRAY_COUNT(sVictreebelGfx17)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_18.4bpp.lz");
static const ax_sprite sVictreebelSprites18[] = {
	{sVictreebelGfx18, ARRAY_COUNT(sVictreebelGfx18)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_19.4bpp.lz");
static const ax_sprite sVictreebelSprites19[] = {
	{sVictreebelGfx19, ARRAY_COUNT(sVictreebelGfx19)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_20.4bpp.lz");
static const ax_sprite sVictreebelSprites20[] = {
	{sVictreebelGfx20, ARRAY_COUNT(sVictreebelGfx20)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_21.4bpp.lz");
static const ax_sprite sVictreebelSprites21[] = {
	{sVictreebelGfx21, ARRAY_COUNT(sVictreebelGfx21)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_22.4bpp.lz");
static const ax_sprite sVictreebelSprites22[] = {
	{sVictreebelGfx22, ARRAY_COUNT(sVictreebelGfx22)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_23.4bpp.lz");
static const ax_sprite sVictreebelSprites23[] = {
	{sVictreebelGfx23, ARRAY_COUNT(sVictreebelGfx23)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_24.4bpp.lz");
static const ax_sprite sVictreebelSprites24[] = {
	{sVictreebelGfx24, ARRAY_COUNT(sVictreebelGfx24)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_25.4bpp.lz");
static const u8 sVictreebelGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_25_1.4bpp.lz");
static const u8 sVictreebelGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_25_2.4bpp.lz");
static const ax_sprite sVictreebelSprites25[] = {
	{NULL, 32}, 
	{sVictreebelGfx25, ARRAY_COUNT(sVictreebelGfx25)}, 
	{NULL, 32}, 
	{sVictreebelGfx25_1, ARRAY_COUNT(sVictreebelGfx25_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx25_2, ARRAY_COUNT(sVictreebelGfx25_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_26.4bpp.lz");
static const u8 sVictreebelGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_26_1.4bpp.lz");
static const u8 sVictreebelGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_26_2.4bpp.lz");
static const u8 sVictreebelGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_26_3.4bpp.lz");
static const ax_sprite sVictreebelSprites26[] = {
	{NULL, 128}, 
	{sVictreebelGfx26, ARRAY_COUNT(sVictreebelGfx26)}, 
	{NULL, 96}, 
	{sVictreebelGfx26_1, ARRAY_COUNT(sVictreebelGfx26_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx26_2, ARRAY_COUNT(sVictreebelGfx26_2)}, 
	{NULL, 32}, 
	{sVictreebelGfx26_3, ARRAY_COUNT(sVictreebelGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_27.4bpp.lz");
static const u8 sVictreebelGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_27_1.4bpp.lz");
static const u8 sVictreebelGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_27_2.4bpp.lz");
static const u8 sVictreebelGfx27_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_27_3.4bpp.lz");
static const ax_sprite sVictreebelSprites27[] = {
	{NULL, 32}, 
	{sVictreebelGfx27, ARRAY_COUNT(sVictreebelGfx27)}, 
	{NULL, 32}, 
	{sVictreebelGfx27_1, ARRAY_COUNT(sVictreebelGfx27_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx27_2, ARRAY_COUNT(sVictreebelGfx27_2)}, 
	{NULL, 64}, 
	{sVictreebelGfx27_3, ARRAY_COUNT(sVictreebelGfx27_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_28.4bpp.lz");
static const u8 sVictreebelGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_28_1.4bpp.lz");
static const ax_sprite sVictreebelSprites28[] = {
	{sVictreebelGfx28, ARRAY_COUNT(sVictreebelGfx28)}, 
	{NULL, 32}, 
	{sVictreebelGfx28_1, ARRAY_COUNT(sVictreebelGfx28_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_29.4bpp.lz");
static const ax_sprite sVictreebelSprites29[] = {
	{NULL, 64}, 
	{sVictreebelGfx29, ARRAY_COUNT(sVictreebelGfx29)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_30.4bpp.lz");
static const u8 sVictreebelGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_30_1.4bpp.lz");
static const u8 sVictreebelGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_30_2.4bpp.lz");
static const ax_sprite sVictreebelSprites30[] = {
	{NULL, 32}, 
	{sVictreebelGfx30, ARRAY_COUNT(sVictreebelGfx30)}, 
	{NULL, 32}, 
	{sVictreebelGfx30_1, ARRAY_COUNT(sVictreebelGfx30_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx30_2, ARRAY_COUNT(sVictreebelGfx30_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_31.4bpp.lz");
static const u8 sVictreebelGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_31_1.4bpp.lz");
static const u8 sVictreebelGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_31_2.4bpp.lz");
static const u8 sVictreebelGfx31_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_31_3.4bpp.lz");
static const ax_sprite sVictreebelSprites31[] = {
	{NULL, 32}, 
	{sVictreebelGfx31, ARRAY_COUNT(sVictreebelGfx31)}, 
	{NULL, 32}, 
	{sVictreebelGfx31_1, ARRAY_COUNT(sVictreebelGfx31_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx31_2, ARRAY_COUNT(sVictreebelGfx31_2)}, 
	{NULL, 32}, 
	{sVictreebelGfx31_3, ARRAY_COUNT(sVictreebelGfx31_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_32.4bpp.lz");
static const u8 sVictreebelGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_32_1.4bpp.lz");
static const u8 sVictreebelGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_32_2.4bpp.lz");
static const u8 sVictreebelGfx32_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_32_3.4bpp.lz");
static const ax_sprite sVictreebelSprites32[] = {
	{NULL, 32}, 
	{sVictreebelGfx32, ARRAY_COUNT(sVictreebelGfx32)}, 
	{NULL, 32}, 
	{sVictreebelGfx32_1, ARRAY_COUNT(sVictreebelGfx32_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx32_2, ARRAY_COUNT(sVictreebelGfx32_2)}, 
	{NULL, 64}, 
	{sVictreebelGfx32_3, ARRAY_COUNT(sVictreebelGfx32_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_33.4bpp.lz");
static const u8 sVictreebelGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_33_1.4bpp.lz");
static const ax_sprite sVictreebelSprites33[] = {
	{NULL, 32}, 
	{sVictreebelGfx33, ARRAY_COUNT(sVictreebelGfx33)}, 
	{NULL, 64}, 
	{sVictreebelGfx33_1, ARRAY_COUNT(sVictreebelGfx33_1)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_34.4bpp.lz");
static const u8 sVictreebelGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_34_1.4bpp.lz");
static const u8 sVictreebelGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_34_2.4bpp.lz");
static const u8 sVictreebelGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_34_3.4bpp.lz");
static const ax_sprite sVictreebelSprites34[] = {
	{NULL, 32}, 
	{sVictreebelGfx34, ARRAY_COUNT(sVictreebelGfx34)}, 
	{NULL, 32}, 
	{sVictreebelGfx34_1, ARRAY_COUNT(sVictreebelGfx34_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx34_2, ARRAY_COUNT(sVictreebelGfx34_2)}, 
	{NULL, 32}, 
	{sVictreebelGfx34_3, ARRAY_COUNT(sVictreebelGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_35.4bpp.lz");
static const u8 sVictreebelGfx35_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_35_1.4bpp.lz");
static const u8 sVictreebelGfx35_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_35_2.4bpp.lz");
static const u8 sVictreebelGfx35_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_35_3.4bpp.lz");
static const ax_sprite sVictreebelSprites35[] = {
	{sVictreebelGfx35, ARRAY_COUNT(sVictreebelGfx35)}, 
	{NULL, 32}, 
	{sVictreebelGfx35_1, ARRAY_COUNT(sVictreebelGfx35_1)}, 
	{NULL, 96}, 
	{sVictreebelGfx35_2, ARRAY_COUNT(sVictreebelGfx35_2)}, 
	{NULL, 96}, 
	{sVictreebelGfx35_3, ARRAY_COUNT(sVictreebelGfx35_3)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_36.4bpp.lz");
static const u8 sVictreebelGfx36_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_36_1.4bpp.lz");
static const u8 sVictreebelGfx36_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_36_2.4bpp.lz");
static const u8 sVictreebelGfx36_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_36_3.4bpp.lz");
static const ax_sprite sVictreebelSprites36[] = {
	{sVictreebelGfx36, ARRAY_COUNT(sVictreebelGfx36)}, 
	{NULL, 32}, 
	{sVictreebelGfx36_1, ARRAY_COUNT(sVictreebelGfx36_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx36_2, ARRAY_COUNT(sVictreebelGfx36_2)}, 
	{NULL, 64}, 
	{sVictreebelGfx36_3, ARRAY_COUNT(sVictreebelGfx36_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_37.4bpp.lz");
static const u8 sVictreebelGfx37_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_37_1.4bpp.lz");
static const ax_sprite sVictreebelSprites37[] = {
	{NULL, 64}, 
	{sVictreebelGfx37, ARRAY_COUNT(sVictreebelGfx37)}, 
	{NULL, 64}, 
	{sVictreebelGfx37_1, ARRAY_COUNT(sVictreebelGfx37_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_38.4bpp.lz");
static const u8 sVictreebelGfx38_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_38_1.4bpp.lz");
static const u8 sVictreebelGfx38_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_38_2.4bpp.lz");
static const u8 sVictreebelGfx38_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_38_3.4bpp.lz");
static const ax_sprite sVictreebelSprites38[] = {
	{NULL, 32}, 
	{sVictreebelGfx38, ARRAY_COUNT(sVictreebelGfx38)}, 
	{NULL, 64}, 
	{sVictreebelGfx38_1, ARRAY_COUNT(sVictreebelGfx38_1)}, 
	{NULL, 96}, 
	{sVictreebelGfx38_2, ARRAY_COUNT(sVictreebelGfx38_2)}, 
	{NULL, 64}, 
	{sVictreebelGfx38_3, ARRAY_COUNT(sVictreebelGfx38_3)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_39.4bpp.lz");
static const u8 sVictreebelGfx39_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_39_1.4bpp.lz");
static const u8 sVictreebelGfx39_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_39_2.4bpp.lz");
static const u8 sVictreebelGfx39_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_39_3.4bpp.lz");
static const ax_sprite sVictreebelSprites39[] = {
	{NULL, 32}, 
	{sVictreebelGfx39, ARRAY_COUNT(sVictreebelGfx39)}, 
	{NULL, 32}, 
	{sVictreebelGfx39_1, ARRAY_COUNT(sVictreebelGfx39_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx39_2, ARRAY_COUNT(sVictreebelGfx39_2)}, 
	{NULL, 32}, 
	{sVictreebelGfx39_3, ARRAY_COUNT(sVictreebelGfx39_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_40.4bpp.lz");
static const u8 sVictreebelGfx40_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_40_1.4bpp.lz");
static const ax_sprite sVictreebelSprites40[] = {
	{NULL, 128}, 
	{sVictreebelGfx40, ARRAY_COUNT(sVictreebelGfx40)}, 
	{NULL, 32}, 
	{sVictreebelGfx40_1, ARRAY_COUNT(sVictreebelGfx40_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_41.4bpp.lz");
static const u8 sVictreebelGfx41_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_41_1.4bpp.lz");
static const ax_sprite sVictreebelSprites41[] = {
	{NULL, 32}, 
	{sVictreebelGfx41, ARRAY_COUNT(sVictreebelGfx41)}, 
	{NULL, 32}, 
	{sVictreebelGfx41_1, ARRAY_COUNT(sVictreebelGfx41_1)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_42.4bpp.lz");
static const u8 sVictreebelGfx42_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_42_1.4bpp.lz");
static const u8 sVictreebelGfx42_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_42_2.4bpp.lz");
static const u8 sVictreebelGfx42_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_42_3.4bpp.lz");
static const ax_sprite sVictreebelSprites42[] = {
	{sVictreebelGfx42, ARRAY_COUNT(sVictreebelGfx42)}, 
	{NULL, 32}, 
	{sVictreebelGfx42_1, ARRAY_COUNT(sVictreebelGfx42_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx42_2, ARRAY_COUNT(sVictreebelGfx42_2)}, 
	{NULL, 32}, 
	{sVictreebelGfx42_3, ARRAY_COUNT(sVictreebelGfx42_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_43.4bpp.lz");
static const u8 sVictreebelGfx43_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_43_1.4bpp.lz");
static const u8 sVictreebelGfx43_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_43_2.4bpp.lz");
static const ax_sprite sVictreebelSprites43[] = {
	{sVictreebelGfx43, ARRAY_COUNT(sVictreebelGfx43)}, 
	{NULL, 32}, 
	{sVictreebelGfx43_1, ARRAY_COUNT(sVictreebelGfx43_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx43_2, ARRAY_COUNT(sVictreebelGfx43_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_44.4bpp.lz");
static const u8 sVictreebelGfx44_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_44_1.4bpp.lz");
static const u8 sVictreebelGfx44_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_44_2.4bpp.lz");
static const ax_sprite sVictreebelSprites44[] = {
	{NULL, 32}, 
	{sVictreebelGfx44, ARRAY_COUNT(sVictreebelGfx44)}, 
	{NULL, 32}, 
	{sVictreebelGfx44_1, ARRAY_COUNT(sVictreebelGfx44_1)}, 
	{NULL, 32}, 
	{sVictreebelGfx44_2, ARRAY_COUNT(sVictreebelGfx44_2)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_45.4bpp.lz");
static const u8 sVictreebelGfx45_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_45_1.4bpp.lz");
static const u8 sVictreebelGfx45_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_45_2.4bpp.lz");
static const u8 sVictreebelGfx45_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_45_3.4bpp.lz");
static const ax_sprite sVictreebelSprites45[] = {
	{sVictreebelGfx45, ARRAY_COUNT(sVictreebelGfx45)}, 
	{NULL, 64}, 
	{sVictreebelGfx45_1, ARRAY_COUNT(sVictreebelGfx45_1)}, 
	{NULL, 64}, 
	{sVictreebelGfx45_2, ARRAY_COUNT(sVictreebelGfx45_2)}, 
	{NULL, 64}, 
	{sVictreebelGfx45_3, ARRAY_COUNT(sVictreebelGfx45_3)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx46[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_46.4bpp.lz");
static const ax_sprite sVictreebelSprites46[] = {
	{sVictreebelGfx46, ARRAY_COUNT(sVictreebelGfx46)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx47[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_47.4bpp.lz");
static const ax_sprite sVictreebelSprites47[] = {
	{sVictreebelGfx47, ARRAY_COUNT(sVictreebelGfx47)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx48[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_48.4bpp.lz");
static const ax_sprite sVictreebelSprites48[] = {
	{sVictreebelGfx48, ARRAY_COUNT(sVictreebelGfx48)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx49[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_49.4bpp.lz");
static const ax_sprite sVictreebelSprites49[] = {
	{sVictreebelGfx49, ARRAY_COUNT(sVictreebelGfx49)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx50[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_50.4bpp.lz");
static const ax_sprite sVictreebelSprites50[] = {
	{sVictreebelGfx50, ARRAY_COUNT(sVictreebelGfx50)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx51[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_51.4bpp.lz");
static const ax_sprite sVictreebelSprites51[] = {
	{sVictreebelGfx51, ARRAY_COUNT(sVictreebelGfx51)}, 
	{NULL, 0}
};
static const u8 sVictreebelGfx52[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/victreebel/sprite_52.4bpp.lz");
static const ax_sprite sVictreebelSprites52[] = {
	{sVictreebelGfx52, ARRAY_COUNT(sVictreebelGfx52)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesVictreebel[] = {
	sVictreebelPose1,
	sVictreebelPose2,
	sVictreebelPose3,
	sVictreebelPose4,
	sVictreebelPose5,
	sVictreebelPose6,
	sVictreebelPose7,
	sVictreebelPose8,
	sVictreebelPose9,
	sVictreebelPose10,
	sVictreebelPose11,
	sVictreebelPose12,
	sVictreebelPose13,
	sVictreebelPose14,
	sVictreebelPose15,
	sVictreebelPose16,
	sVictreebelPose17,
	sVictreebelPose18,
	sVictreebelPose19,
	sVictreebelPose20,
	sVictreebelPose21,
	sVictreebelPose22,
	sVictreebelPose23,
	sVictreebelPose24,
	sVictreebelPose1,
	sVictreebelPose2,
	sVictreebelPose3,
	sVictreebelPose4,
	sVictreebelPose5,
	sVictreebelPose6,
	sVictreebelPose7,
	sVictreebelPose8,
	sVictreebelPose9,
	sVictreebelPose10,
	sVictreebelPose11,
	sVictreebelPose12,
	sVictreebelPose13,
	sVictreebelPose14,
	sVictreebelPose15,
	sVictreebelPose16,
	sVictreebelPose17,
	sVictreebelPose18,
	sVictreebelPose19,
	sVictreebelPose20,
	sVictreebelPose21,
	sVictreebelPose22,
	sVictreebelPose23,
	sVictreebelPose24,
	sVictreebelPose1,
	sVictreebelPose2,
	sVictreebelPose3,
	sVictreebelPose52,
	sVictreebelPose53,
	sVictreebelPose54,
	sVictreebelPose4,
	sVictreebelPose5,
	sVictreebelPose6,
	sVictreebelPose58,
	sVictreebelPose59,
	sVictreebelPose60,
	sVictreebelPose7,
	sVictreebelPose8,
	sVictreebelPose9,
	sVictreebelPose64,
	sVictreebelPose65,
	sVictreebelPose66,
	sVictreebelPose10,
	sVictreebelPose11,
	sVictreebelPose12,
	sVictreebelPose70,
	sVictreebelPose71,
	sVictreebelPose72,
	sVictreebelPose13,
	sVictreebelPose14,
	sVictreebelPose15,
	sVictreebelPose76,
	sVictreebelPose77,
	sVictreebelPose78,
	sVictreebelPose16,
	sVictreebelPose17,
	sVictreebelPose18,
	sVictreebelPose82,
	sVictreebelPose83,
	sVictreebelPose84,
	sVictreebelPose19,
	sVictreebelPose20,
	sVictreebelPose21,
	sVictreebelPose88,
	sVictreebelPose89,
	sVictreebelPose90,
	sVictreebelPose22,
	sVictreebelPose23,
	sVictreebelPose24,
	sVictreebelPose94,
	sVictreebelPose95,
	sVictreebelPose96,
	sVictreebelPose1,
	sVictreebelPose2,
	sVictreebelPose3,
	sVictreebelPose100,
	sVictreebelPose4,
	sVictreebelPose5,
	sVictreebelPose6,
	sVictreebelPose104,
	sVictreebelPose7,
	sVictreebelPose8,
	sVictreebelPose9,
	sVictreebelPose108,
	sVictreebelPose10,
	sVictreebelPose11,
	sVictreebelPose12,
	sVictreebelPose112,
	sVictreebelPose13,
	sVictreebelPose14,
	sVictreebelPose15,
	sVictreebelPose116,
	sVictreebelPose16,
	sVictreebelPose17,
	sVictreebelPose18,
	sVictreebelPose120,
	sVictreebelPose19,
	sVictreebelPose20,
	sVictreebelPose21,
	sVictreebelPose124,
	sVictreebelPose22,
	sVictreebelPose23,
	sVictreebelPose24,
	sVictreebelPose128,
	sVictreebelPose1,
	sVictreebelPose130,
	sVictreebelPose131,
	sVictreebelPose16,
	sVictreebelPose13,
	sVictreebelPose134,
	sVictreebelPose135,
	sVictreebelPose136,
	sVictreebelPose137,
	sVictreebelPose138,
	sVictreebelPose139,
	sVictreebelPose140,
	sVictreebelPose141,
	sVictreebelPose142,
	sVictreebelPose143,
	sVictreebelPose144,
	sVictreebelPose145,
	sVictreebelPose146,
	sVictreebelPose1,
	sVictreebelPose3,
	sVictreebelPose2,
	sVictreebelPose4,
	sVictreebelPose6,
	sVictreebelPose5,
	sVictreebelPose7,
	sVictreebelPose9,
	sVictreebelPose8,
	sVictreebelPose10,
	sVictreebelPose12,
	sVictreebelPose11,
	sVictreebelPose13,
	sVictreebelPose15,
	sVictreebelPose14,
	sVictreebelPose16,
	sVictreebelPose18,
	sVictreebelPose17,
	sVictreebelPose19,
	sVictreebelPose21,
	sVictreebelPose20,
	sVictreebelPose22,
	sVictreebelPose24,
	sVictreebelPose23,
	sVictreebelPose171,
	sVictreebelPose172,
	sVictreebelPose124,
	sVictreebelPose174,
	sVictreebelPose116,
	sVictreebelPose176,
	sVictreebelPose108,
	sVictreebelPose178,
	sVictreebelPose100,
	sVictreebelPose180,
	sVictreebelPose181,
	sVictreebelPose182,
	sVictreebelPose183,
	sVictreebelPose184,
	sVictreebelPose185,
	sVictreebelPose186,
	sVictreebelPose1,
	sVictreebelPose2,
	sVictreebelPose3,
	sVictreebelPose4,
	sVictreebelPose5,
	sVictreebelPose6,
	sVictreebelPose7,
	sVictreebelPose8,
	sVictreebelPose9,
	sVictreebelPose10,
	sVictreebelPose11,
	sVictreebelPose12,
	sVictreebelPose13,
	sVictreebelPose14,
	sVictreebelPose15,
	sVictreebelPose16,
	sVictreebelPose17,
	sVictreebelPose18,
	sVictreebelPose19,
	sVictreebelPose20,
	sVictreebelPose21,
	sVictreebelPose22,
	sVictreebelPose23,
	sVictreebelPose24,
	sVictreebelPose3,
	sVictreebelPose24,
	sVictreebelPose21,
	sVictreebelPose18,
	sVictreebelPose15,
	sVictreebelPose12,
	sVictreebelPose9,
	sVictreebelPose6,
	sVictreebelPose1,
	sVictreebelPose130,
	sVictreebelPose131,
	sVictreebelPose16,
	sVictreebelPose13,
	sVictreebelPose134,
	sVictreebelPose135,
	sVictreebelPose136,
};

static const struct PositionSets sAxPositionsVictreebel[] = {
	[0] = { .set = { {0, -15}, {-12, -5}, {11, -5}, {0, -9} } },
	[1] = { .set = { {0, -16}, {-11, -3}, {10, -3}, {0, -9} } },
	[2] = { .set = { {0, -16}, {-12, -9}, {11, -9}, {0, -9} } },
	[3] = { .set = { {0, -16}, {-8, -3}, {7, -9}, {-1, -9} } },
	[4] = { .set = { {0, -16}, {-8, -2}, {7, -6}, {-1, -9} } },
	[5] = { .set = { {-1, -16}, {-9, -4}, {6, -11}, {-1, -9} } },
	[6] = { .set = { {0, -15}, {-4, -2}, {4, -11}, {-1, -9} } },
	[7] = { .set = { {0, -15}, {-5, 0}, {4, -9}, {-1, -9} } },
	[8] = { .set = { {0, -15}, {-4, -5}, {3, -11}, {-1, -9} } },
	[9] = { .set = { {0, -16}, {7, -4}, {-7, -12}, {-2, -9} } },
	[10] = { .set = { {0, -16}, {7, -2}, {-8, -8}, {-2, -9} } },
	[11] = { .set = { {0, -16}, {8, -7}, {-7, -12}, {-1, -9} } },
	[12] = { .set = { {-1, -15}, {10, -7}, {-11, -7}, {-1, -9} } },
	[13] = { .set = { {-1, -15}, {9, -4}, {-10, -4}, {-1, -9} } },
	[14] = { .set = { {-1, -16}, {10, -9}, {-11, -9}, {-1, -10} } },
	[15] = { .set = { {-1, -17}, {7, -10}, {-8, -4}, {0, -10} } },
	[16] = { .set = { {-1, -17}, {7, -8}, {-8, -2}, {0, -10} } },
	[17] = { .set = { {-1, -16}, {7, -12}, {-9, -7}, {0, -10} } },
	[18] = { .set = { {-1, -15}, {-5, -11}, {3, -2}, {1, -11} } },
	[19] = { .set = { {-1, -15}, {-5, -9}, {4, 0}, {1, -11} } },
	[20] = { .set = { {-1, -16}, {-4, -13}, {4, -6}, {1, -11} } },
	[21] = { .set = { {0, -16}, {-8, -9}, {7, -3}, {1, -10} } },
	[22] = { .set = { {0, -16}, {-8, -6}, {7, -2}, {1, -10} } },
	[23] = { .set = { {0, -15}, {-7, -11}, {8, -4}, {1, -10} } },
	[24] = { .set = { {0, -15}, {-12, -5}, {11, -5}, {0, -9} } },
	[25] = { .set = { {0, -16}, {-11, -3}, {10, -3}, {0, -9} } },
	[26] = { .set = { {0, -16}, {-12, -9}, {11, -9}, {0, -9} } },
	[27] = { .set = { {0, -16}, {-8, -3}, {7, -9}, {-1, -9} } },
	[28] = { .set = { {0, -16}, {-8, -2}, {7, -6}, {-1, -9} } },
	[29] = { .set = { {-1, -16}, {-9, -4}, {6, -11}, {-1, -9} } },
	[30] = { .set = { {0, -15}, {-4, -2}, {4, -11}, {-1, -9} } },
	[31] = { .set = { {0, -15}, {-5, 0}, {4, -9}, {-1, -9} } },
	[32] = { .set = { {0, -15}, {-4, -5}, {3, -11}, {-1, -9} } },
	[33] = { .set = { {0, -16}, {7, -4}, {-7, -12}, {-2, -9} } },
	[34] = { .set = { {0, -16}, {7, -2}, {-8, -8}, {-2, -9} } },
	[35] = { .set = { {0, -16}, {8, -7}, {-7, -12}, {-1, -9} } },
	[36] = { .set = { {-1, -15}, {10, -7}, {-11, -7}, {-1, -9} } },
	[37] = { .set = { {-1, -15}, {9, -4}, {-10, -4}, {-1, -9} } },
	[38] = { .set = { {-1, -16}, {10, -9}, {-11, -9}, {-1, -10} } },
	[39] = { .set = { {-1, -17}, {7, -10}, {-8, -4}, {0, -10} } },
	[40] = { .set = { {-1, -17}, {7, -8}, {-8, -2}, {0, -10} } },
	[41] = { .set = { {-1, -16}, {7, -12}, {-9, -7}, {0, -10} } },
	[42] = { .set = { {-1, -15}, {-5, -11}, {3, -2}, {1, -11} } },
	[43] = { .set = { {-1, -15}, {-5, -9}, {4, 0}, {1, -11} } },
	[44] = { .set = { {-1, -16}, {-4, -13}, {4, -6}, {1, -11} } },
	[45] = { .set = { {0, -16}, {-8, -9}, {7, -3}, {1, -10} } },
	[46] = { .set = { {0, -16}, {-8, -6}, {7, -2}, {1, -10} } },
	[47] = { .set = { {0, -15}, {-7, -11}, {8, -4}, {1, -10} } },
	[48] = { .set = { {0, -15}, {-12, -5}, {11, -5}, {0, -9} } },
	[49] = { .set = { {0, -16}, {-11, -3}, {10, -3}, {0, -9} } },
	[50] = { .set = { {0, -16}, {-12, -9}, {11, -9}, {0, -9} } },
	[51] = { .set = { {-3, -13}, {-8, -12}, {4, 0}, {-1, -7} } },
	[52] = { .set = { {1, -14}, {5, 1}, {5, -8}, {0, -8} } },
	[53] = { .set = { {1, -14}, {5, 1}, {5, -8}, {0, -8} } },
	[54] = { .set = { {0, -16}, {-8, -3}, {7, -9}, {-1, -9} } },
	[55] = { .set = { {0, -16}, {-8, -2}, {7, -6}, {-1, -9} } },
	[56] = { .set = { {-1, -16}, {-9, -4}, {6, -11}, {-1, -9} } },
	[57] = { .set = { {4, -14}, {0, -14}, {0, 0}, {1, -8} } },
	[58] = { .set = { {0, -13}, {8, 0}, {-8, -10}, {-1, -7} } },
	[59] = { .set = { {0, -13}, {8, 0}, {-8, -10}, {-1, -7} } },
	[60] = { .set = { {0, -15}, {-4, -2}, {4, -11}, {-1, -9} } },
	[61] = { .set = { {0, -15}, {-5, 0}, {4, -9}, {-1, -9} } },
	[62] = { .set = { {0, -15}, {-4, -5}, {3, -11}, {-1, -9} } },
	[63] = { .set = { {0, -16}, {-8, -12}, {4, -1}, {-2, -10} } },
	[64] = { .set = { {0, -14}, {13, -5}, {-10, 2}, {-1, -7} } },
	[65] = { .set = { {0, -14}, {13, -5}, {-10, 2}, {-1, -7} } },
	[66] = { .set = { {0, -16}, {7, -4}, {-7, -12}, {-2, -9} } },
	[67] = { .set = { {0, -16}, {7, -2}, {-8, -8}, {-2, -9} } },
	[68] = { .set = { {0, -16}, {8, -7}, {-7, -12}, {-1, -9} } },
	[69] = { .set = { {-2, -16}, {-8, -1}, {8, -11}, {-1, -10} } },
	[70] = { .set = { {2, -14}, {11, -18}, {1, 4}, {0, -9} } },
	[71] = { .set = { {2, -14}, {11, -18}, {1, 4}, {0, -9} } },
	[72] = { .set = { {-1, -15}, {10, -7}, {-11, -7}, {-1, -9} } },
	[73] = { .set = { {-1, -15}, {9, -4}, {-10, -4}, {-1, -9} } },
	[74] = { .set = { {-1, -16}, {10, -9}, {-11, -9}, {-1, -10} } },
	[75] = { .set = { {4, -13}, {1, 5}, {-5, -12}, {0, -7} } },
	[76] = { .set = { {0, -12}, {-4, -21}, {-9, -1}, {0, -8} } },
	[77] = { .set = { {0, -12}, {-4, -21}, {-9, -1}, {0, -8} } },
	[78] = { .set = { {-1, -17}, {7, -10}, {-8, -4}, {0, -10} } },
	[79] = { .set = { {-1, -17}, {7, -8}, {-8, -2}, {0, -10} } },
	[80] = { .set = { {-1, -16}, {7, -12}, {-9, -7}, {0, -10} } },
	[81] = { .set = { {1, -16}, {7, -1}, {-9, -11}, {0, -10} } },
	[82] = { .set = { {-3, -14}, {-12, -18}, {-2, 4}, {-1, -9} } },
	[83] = { .set = { {-3, -14}, {-12, -18}, {-2, 4}, {-1, -9} } },
	[84] = { .set = { {-1, -15}, {-5, -11}, {3, -2}, {1, -11} } },
	[85] = { .set = { {-1, -15}, {-5, -9}, {4, 0}, {1, -11} } },
	[86] = { .set = { {-1, -16}, {-4, -13}, {4, -6}, {1, -11} } },
	[87] = { .set = { {-1, -16}, {7, -12}, {-5, -1}, {1, -10} } },
	[88] = { .set = { {-1, -14}, {-14, -5}, {9, 2}, {0, -7} } },
	[89] = { .set = { {-1, -14}, {-14, -5}, {9, 2}, {0, -7} } },
	[90] = { .set = { {0, -16}, {-8, -9}, {7, -3}, {1, -10} } },
	[91] = { .set = { {0, -16}, {-8, -6}, {7, -2}, {1, -10} } },
	[92] = { .set = { {0, -15}, {-7, -11}, {8, -4}, {1, -10} } },
	[93] = { .set = { {-5, -14}, {-1, -14}, {-1, 0}, {-2, -8} } },
	[94] = { .set = { {-1, -13}, {-9, 0}, {7, -10}, {0, -7} } },
	[95] = { .set = { {-1, -13}, {-9, 0}, {7, -10}, {0, -7} } },
	[96] = { .set = { {0, -15}, {-12, -5}, {11, -5}, {0, -9} } },
	[97] = { .set = { {0, -16}, {-11, -3}, {10, -3}, {0, -9} } },
	[98] = { .set = { {0, -16}, {-12, -9}, {11, -9}, {0, -9} } },
	[99] = { .set = { {0, -3}, {-9, -17}, {8, -17}, {0, -9} } },
	[100] = { .set = { {0, -16}, {-8, -3}, {7, -9}, {-1, -9} } },
	[101] = { .set = { {0, -16}, {-8, -2}, {7, -6}, {-1, -9} } },
	[102] = { .set = { {-1, -16}, {-9, -4}, {6, -11}, {-1, -9} } },
	[103] = { .set = { {4, -7}, {-1, -20}, {-10, -17}, {-2, -11} } },
	[104] = { .set = { {0, -15}, {-4, -2}, {4, -11}, {-1, -9} } },
	[105] = { .set = { {0, -15}, {-5, 0}, {4, -9}, {-1, -9} } },
	[106] = { .set = { {0, -15}, {-4, -5}, {3, -11}, {-1, -9} } },
	[107] = { .set = { {6, -9}, {-5, -17}, {-9, -11}, {0, -9} } },
	[108] = { .set = { {0, -16}, {7, -4}, {-7, -12}, {-2, -9} } },
	[109] = { .set = { {0, -16}, {7, -2}, {-8, -8}, {-2, -9} } },
	[110] = { .set = { {0, -16}, {8, -7}, {-7, -12}, {-1, -9} } },
	[111] = { .set = { {3, -13}, {-11, -13}, {-2, -9}, {-1, -11} } },
	[112] = { .set = { {-1, -15}, {10, -7}, {-11, -7}, {-1, -9} } },
	[113] = { .set = { {-1, -15}, {9, -4}, {-10, -4}, {-1, -9} } },
	[114] = { .set = { {-1, -16}, {10, -9}, {-11, -9}, {-1, -10} } },
	[115] = { .set = { {0, -14}, {9, -12}, {-10, -12}, {0, -8} } },
	[116] = { .set = { {-1, -17}, {7, -10}, {-8, -4}, {0, -10} } },
	[117] = { .set = { {-1, -17}, {7, -8}, {-8, -2}, {0, -10} } },
	[118] = { .set = { {-1, -16}, {7, -12}, {-9, -7}, {0, -10} } },
	[119] = { .set = { {-4, -13}, {10, -13}, {1, -9}, {0, -11} } },
	[120] = { .set = { {-1, -15}, {-5, -11}, {3, -2}, {1, -11} } },
	[121] = { .set = { {-1, -15}, {-5, -9}, {4, 0}, {1, -11} } },
	[122] = { .set = { {-1, -16}, {-4, -13}, {4, -6}, {1, -11} } },
	[123] = { .set = { {-7, -9}, {4, -17}, {8, -11}, {-1, -9} } },
	[124] = { .set = { {0, -16}, {-8, -9}, {7, -3}, {1, -10} } },
	[125] = { .set = { {0, -16}, {-8, -6}, {7, -2}, {1, -10} } },
	[126] = { .set = { {0, -15}, {-7, -11}, {8, -4}, {1, -10} } },
	[127] = { .set = { {-5, -7}, {0, -20}, {9, -17}, {1, -11} } },
	[128] = { .set = { {0, -15}, {-12, -5}, {11, -5}, {0, -9} } },
	[129] = { .set = { {-1, -16}, {-9, -9}, {6, -3}, {0, -10} } },
	[130] = { .set = { {-2, -15}, {-6, -11}, {2, -2}, {0, -11} } },
	[131] = { .set = { {-1, -17}, {7, -10}, {-8, -4}, {0, -10} } },
	[132] = { .set = { {-1, -15}, {10, -7}, {-11, -7}, {-1, -9} } },
	[133] = { .set = { {1, -16}, {8, -4}, {-6, -12}, {-1, -9} } },
	[134] = { .set = { {1, -15}, {-3, -2}, {5, -11}, {0, -9} } },
	[135] = { .set = { {1, -16}, {-7, -3}, {8, -9}, {0, -9} } },
	[136] = { .set = { {-1, -16}, {-8, -9}, {7, -3}, {0, -9} } },
	[137] = { .set = { {-1, -15}, {-8, -7}, {7, -1}, {0, -8} } },
	[138] = { .set = { {0, -13}, {-11, -5}, {12, -10}, {0, -10} } },
	[139] = { .set = { {3, -12}, {6, -5}, {-12, -8}, {-1, -10} } },
	[140] = { .set = { {2, -16}, {6, -9}, {-9, -7}, {-2, -11} } },
	[141] = { .set = { {6, -15}, {-8, -11}, {5, -4}, {0, -11} } },
	[142] = { .set = { {-1, -14}, {9, -6}, {-11, -8}, {-1, -10} } },
	[143] = { .set = { {-7, -15}, {7, -11}, {-6, -4}, {-1, -11} } },
	[144] = { .set = { {-3, -16}, {-7, -9}, {8, -7}, {1, -11} } },
	[145] = { .set = { {-4, -12}, {-7, -5}, {11, -8}, {0, -10} } },
	[146] = { .set = { {0, -15}, {-12, -5}, {11, -5}, {0, -9} } },
	[147] = { .set = { {0, -16}, {-12, -9}, {11, -9}, {0, -9} } },
	[148] = { .set = { {0, -16}, {-11, -3}, {10, -3}, {0, -9} } },
	[149] = { .set = { {0, -16}, {-8, -3}, {7, -9}, {-1, -9} } },
	[150] = { .set = { {-1, -16}, {-9, -4}, {6, -11}, {-1, -9} } },
	[151] = { .set = { {0, -16}, {-8, -2}, {7, -6}, {-1, -9} } },
	[152] = { .set = { {0, -15}, {-4, -2}, {4, -11}, {-1, -9} } },
	[153] = { .set = { {0, -15}, {-4, -5}, {3, -11}, {-1, -9} } },
	[154] = { .set = { {0, -15}, {-5, 0}, {4, -9}, {-1, -9} } },
	[155] = { .set = { {0, -16}, {7, -4}, {-7, -12}, {-2, -9} } },
	[156] = { .set = { {0, -16}, {8, -7}, {-7, -12}, {-1, -9} } },
	[157] = { .set = { {0, -16}, {7, -2}, {-8, -8}, {-2, -9} } },
	[158] = { .set = { {-1, -15}, {10, -7}, {-11, -7}, {-1, -9} } },
	[159] = { .set = { {-1, -16}, {10, -9}, {-11, -9}, {-1, -10} } },
	[160] = { .set = { {-1, -15}, {9, -4}, {-10, -4}, {-1, -9} } },
	[161] = { .set = { {-1, -17}, {7, -10}, {-8, -4}, {0, -10} } },
	[162] = { .set = { {-1, -16}, {7, -12}, {-9, -7}, {0, -10} } },
	[163] = { .set = { {-1, -17}, {7, -8}, {-8, -2}, {0, -10} } },
	[164] = { .set = { {-1, -15}, {-5, -11}, {3, -2}, {1, -11} } },
	[165] = { .set = { {-1, -16}, {-4, -13}, {4, -6}, {1, -11} } },
	[166] = { .set = { {-1, -15}, {-5, -9}, {4, 0}, {1, -11} } },
	[167] = { .set = { {0, -16}, {-8, -9}, {7, -3}, {1, -10} } },
	[168] = { .set = { {0, -15}, {-7, -11}, {8, -4}, {1, -10} } },
	[169] = { .set = { {0, -16}, {-8, -6}, {7, -2}, {1, -10} } },
	[170] = { .set = { {0, -4}, {-9, -18}, {8, -18}, {0, -10} } },
	[171] = { .set = { {-5, -6}, {0, -19}, {9, -16}, {1, -10} } },
	[172] = { .set = { {-7, -9}, {4, -17}, {8, -11}, {-1, -9} } },
	[173] = { .set = { {-4, -12}, {10, -12}, {1, -8}, {0, -10} } },
	[174] = { .set = { {0, -14}, {9, -12}, {-10, -12}, {0, -8} } },
	[175] = { .set = { {3, -12}, {-11, -12}, {-2, -8}, {-1, -10} } },
	[176] = { .set = { {6, -9}, {-5, -17}, {-9, -11}, {0, -9} } },
	[177] = { .set = { {4, -6}, {-1, -19}, {-10, -16}, {-2, -10} } },
	[178] = { .set = { {0, -3}, {-9, -17}, {8, -17}, {0, -9} } },
	[179] = { .set = { {5, -4}, {0, -17}, {-9, -14}, {-1, -8} } },
	[180] = { .set = { {5, -8}, {-6, -16}, {-10, -10}, {-1, -8} } },
	[181] = { .set = { {2, -10}, {-12, -10}, {-3, -6}, {-2, -8} } },
	[182] = { .set = { {0, -13}, {9, -11}, {-10, -11}, {0, -7} } },
	[183] = { .set = { {-3, -10}, {11, -10}, {2, -6}, {1, -8} } },
	[184] = { .set = { {-6, -8}, {5, -16}, {9, -10}, {0, -8} } },
	[185] = { .set = { {-6, -4}, {-1, -17}, {8, -14}, {0, -8} } },
	[186] = { .set = { {0, -15}, {-12, -5}, {11, -5}, {0, -9} } },
	[187] = { .set = { {0, -16}, {-11, -3}, {10, -3}, {0, -9} } },
	[188] = { .set = { {0, -16}, {-12, -9}, {11, -9}, {0, -9} } },
	[189] = { .set = { {0, -16}, {-8, -3}, {7, -9}, {-1, -9} } },
	[190] = { .set = { {0, -16}, {-8, -2}, {7, -6}, {-1, -9} } },
	[191] = { .set = { {-1, -16}, {-9, -4}, {6, -11}, {-1, -9} } },
	[192] = { .set = { {0, -15}, {-4, -2}, {4, -11}, {-1, -9} } },
	[193] = { .set = { {0, -15}, {-5, 0}, {4, -9}, {-1, -9} } },
	[194] = { .set = { {0, -15}, {-4, -5}, {3, -11}, {-1, -9} } },
	[195] = { .set = { {0, -16}, {7, -4}, {-7, -12}, {-2, -9} } },
	[196] = { .set = { {0, -16}, {7, -2}, {-8, -8}, {-2, -9} } },
	[197] = { .set = { {0, -16}, {8, -7}, {-7, -12}, {-1, -9} } },
	[198] = { .set = { {-1, -15}, {10, -7}, {-11, -7}, {-1, -9} } },
	[199] = { .set = { {-1, -15}, {9, -4}, {-10, -4}, {-1, -9} } },
	[200] = { .set = { {-1, -16}, {10, -9}, {-11, -9}, {-1, -10} } },
	[201] = { .set = { {-1, -17}, {7, -10}, {-8, -4}, {0, -10} } },
	[202] = { .set = { {-1, -17}, {7, -8}, {-8, -2}, {0, -10} } },
	[203] = { .set = { {-1, -16}, {7, -12}, {-9, -7}, {0, -10} } },
	[204] = { .set = { {-1, -15}, {-5, -11}, {3, -2}, {1, -11} } },
	[205] = { .set = { {-1, -15}, {-5, -9}, {4, 0}, {1, -11} } },
	[206] = { .set = { {-1, -16}, {-4, -13}, {4, -6}, {1, -11} } },
	[207] = { .set = { {0, -16}, {-8, -9}, {7, -3}, {1, -10} } },
	[208] = { .set = { {0, -16}, {-8, -6}, {7, -2}, {1, -10} } },
	[209] = { .set = { {0, -15}, {-7, -11}, {8, -4}, {1, -10} } },
	[210] = { .set = { {0, -16}, {-12, -9}, {11, -9}, {0, -9} } },
	[211] = { .set = { {0, -15}, {-7, -11}, {8, -4}, {1, -10} } },
	[212] = { .set = { {-1, -16}, {-4, -13}, {4, -6}, {1, -11} } },
	[213] = { .set = { {-1, -16}, {7, -12}, {-9, -7}, {0, -10} } },
	[214] = { .set = { {-1, -16}, {10, -9}, {-11, -9}, {-1, -10} } },
	[215] = { .set = { {0, -16}, {8, -7}, {-7, -12}, {-1, -9} } },
	[216] = { .set = { {0, -15}, {-4, -5}, {3, -11}, {-1, -9} } },
	[217] = { .set = { {-1, -16}, {-9, -4}, {6, -11}, {-1, -9} } },
	[218] = { .set = { {0, -15}, {-12, -5}, {11, -5}, {0, -9} } },
	[219] = { .set = { {-1, -16}, {-9, -9}, {6, -3}, {0, -10} } },
	[220] = { .set = { {-2, -15}, {-6, -11}, {2, -2}, {0, -11} } },
	[221] = { .set = { {-1, -17}, {7, -10}, {-8, -4}, {0, -10} } },
	[222] = { .set = { {-1, -15}, {10, -7}, {-11, -7}, {-1, -9} } },
	[223] = { .set = { {1, -16}, {8, -4}, {-6, -12}, {-1, -9} } },
	[224] = { .set = { {1, -15}, {-3, -2}, {5, -11}, {0, -9} } },
	[225] = { .set = { {1, -16}, {-7, -3}, {8, -9}, {0, -9} } },
};

static const ax_anim *const sVictreebelAnimTable1[] = {
	AX_ANIM_PTR(sVictreebelAnims_1_1),
	AX_ANIM_PTR(sVictreebelAnims_1_2),
	AX_ANIM_PTR(sVictreebelAnims_1_3),
	AX_ANIM_PTR(sVictreebelAnims_1_4),
	AX_ANIM_PTR(sVictreebelAnims_1_5),
	AX_ANIM_PTR(sVictreebelAnims_1_6),
	AX_ANIM_PTR(sVictreebelAnims_1_7),
	AX_ANIM_PTR(sVictreebelAnims_1_8),
};

static const ax_anim *const sVictreebelAnimTable2[] = {
	AX_ANIM_PTR(sVictreebelAnims_2_1),
	AX_ANIM_PTR(sVictreebelAnims_2_2),
	AX_ANIM_PTR(sVictreebelAnims_2_3),
	AX_ANIM_PTR(sVictreebelAnims_2_4),
	AX_ANIM_PTR(sVictreebelAnims_2_5),
	AX_ANIM_PTR(sVictreebelAnims_2_6),
	AX_ANIM_PTR(sVictreebelAnims_2_7),
	AX_ANIM_PTR(sVictreebelAnims_2_8),
};

static const ax_anim *const sVictreebelAnimTable3[] = {
	AX_ANIM_PTR(sVictreebelAnims_3_1),
	AX_ANIM_PTR(sVictreebelAnims_3_2),
	AX_ANIM_PTR(sVictreebelAnims_3_3),
	AX_ANIM_PTR(sVictreebelAnims_3_4),
	AX_ANIM_PTR(sVictreebelAnims_3_5),
	AX_ANIM_PTR(sVictreebelAnims_3_6),
	AX_ANIM_PTR(sVictreebelAnims_3_7),
	AX_ANIM_PTR(sVictreebelAnims_3_8),
};

static const ax_anim *const sVictreebelAnimTable4[] = {
	AX_ANIM_PTR(sVictreebelAnims_4_1),
	AX_ANIM_PTR(sVictreebelAnims_4_2),
	AX_ANIM_PTR(sVictreebelAnims_4_3),
	AX_ANIM_PTR(sVictreebelAnims_4_4),
	AX_ANIM_PTR(sVictreebelAnims_4_5),
	AX_ANIM_PTR(sVictreebelAnims_4_6),
	AX_ANIM_PTR(sVictreebelAnims_4_7),
	AX_ANIM_PTR(sVictreebelAnims_4_8),
};

static const ax_anim *const sVictreebelAnimTable5[] = {
	AX_ANIM_PTR(gAxSharedAnim_00381),
	AX_ANIM_PTR(gAxSharedAnim_00438),
	AX_ANIM_PTR(gAxSharedAnim_00433),
	AX_ANIM_PTR(gAxSharedAnim_00427),
	AX_ANIM_PTR(gAxSharedAnim_00418),
	AX_ANIM_PTR(gAxSharedAnim_00409),
	AX_ANIM_PTR(gAxSharedAnim_00401),
	AX_ANIM_PTR(gAxSharedAnim_00389),
};

static const ax_anim *const sVictreebelAnimTable6[] = {
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
	AX_ANIM_PTR(gAxSharedAnim_02365),
};

static const ax_anim *const sVictreebelAnimTable7[] = {
	AX_ANIM_PTR(gAxSharedAnim_00466),
	AX_ANIM_PTR(gAxSharedAnim_00479),
	AX_ANIM_PTR(gAxSharedAnim_00487),
	AX_ANIM_PTR(gAxSharedAnim_00496),
	AX_ANIM_PTR(gAxSharedAnim_00508),
	AX_ANIM_PTR(gAxSharedAnim_00517),
	AX_ANIM_PTR(gAxSharedAnim_00523),
	AX_ANIM_PTR(gAxSharedAnim_00529),
};

static const ax_anim *const sVictreebelAnimTable8[] = {
	AX_ANIM_PTR(sVictreebelAnims_8_1),
	AX_ANIM_PTR(sVictreebelAnims_8_2),
	AX_ANIM_PTR(sVictreebelAnims_8_3),
	AX_ANIM_PTR(sVictreebelAnims_8_4),
	AX_ANIM_PTR(sVictreebelAnims_8_5),
	AX_ANIM_PTR(sVictreebelAnims_8_6),
	AX_ANIM_PTR(sVictreebelAnims_8_7),
	AX_ANIM_PTR(sVictreebelAnims_8_8),
};

static const ax_anim *const sVictreebelAnimTable9[] = {
	AX_ANIM_PTR(sVictreebelAnims_9_1),
	AX_ANIM_PTR(sVictreebelAnims_9_2),
	AX_ANIM_PTR(gAxSharedAnim_00876),
	AX_ANIM_PTR(sVictreebelAnims_9_4),
	AX_ANIM_PTR(gAxSharedAnim_00846),
	AX_ANIM_PTR(sVictreebelAnims_9_6),
	AX_ANIM_PTR(gAxSharedAnim_00823),
	AX_ANIM_PTR(sVictreebelAnims_9_8),
};

static const ax_anim *const sVictreebelAnimTable10[] = {
	AX_ANIM_PTR(gAxSharedAnim_00905),
	AX_ANIM_PTR(gAxSharedAnim_00918),
	AX_ANIM_PTR(gAxSharedAnim_00930),
	AX_ANIM_PTR(gAxSharedAnim_00942),
	AX_ANIM_PTR(gAxSharedAnim_00955),
	AX_ANIM_PTR(gAxSharedAnim_00965),
	AX_ANIM_PTR(gAxSharedAnim_00978),
	AX_ANIM_PTR(gAxSharedAnim_00993),
};

static const ax_anim *const sVictreebelAnimTable11[] = {
	AX_ANIM_PTR(gAxSharedAnim_01006),
	AX_ANIM_PTR(gAxSharedAnim_01057),
	AX_ANIM_PTR(gAxSharedAnim_01105),
	AX_ANIM_PTR(gAxSharedAnim_01152),
	AX_ANIM_PTR(gAxSharedAnim_01187),
	AX_ANIM_PTR(gAxSharedAnim_01225),
	AX_ANIM_PTR(gAxSharedAnim_01264),
	AX_ANIM_PTR(gAxSharedAnim_01295),
};

static const ax_anim *const sVictreebelAnimTable12[] = {
	AX_ANIM_PTR(gAxSharedAnim_01337),
	AX_ANIM_PTR(gAxSharedAnim_01414),
	AX_ANIM_PTR(gAxSharedAnim_01392),
	AX_ANIM_PTR(gAxSharedAnim_01380),
	AX_ANIM_PTR(gAxSharedAnim_01379),
	AX_ANIM_PTR(gAxSharedAnim_01368),
	AX_ANIM_PTR(gAxSharedAnim_01354),
	AX_ANIM_PTR(gAxSharedAnim_01338),
};

static const ax_anim *const sVictreebelAnimTable13[] = {
	AX_ANIM_PTR(gAxSharedAnim_01422),
	AX_ANIM_PTR(gAxSharedAnim_01464),
	AX_ANIM_PTR(gAxSharedAnim_01461),
	AX_ANIM_PTR(gAxSharedAnim_01456),
	AX_ANIM_PTR(gAxSharedAnim_01446),
	AX_ANIM_PTR(gAxSharedAnim_01443),
	AX_ANIM_PTR(gAxSharedAnim_01438),
	AX_ANIM_PTR(gAxSharedAnim_01429),
};

static const ax_anim *const *const sAxAnimationsVictreebel[] = {
	sVictreebelAnimTable1,
	sVictreebelAnimTable2,
	sVictreebelAnimTable3,
	sVictreebelAnimTable4,
	sVictreebelAnimTable5,
	sVictreebelAnimTable6,
	sVictreebelAnimTable7,
	sVictreebelAnimTable8,
	sVictreebelAnimTable9,
	sVictreebelAnimTable10,
	sVictreebelAnimTable11,
	sVictreebelAnimTable12,
	sVictreebelAnimTable13,
};

static const ax_sprite *const sAxSpritesVictreebel[] = {
	sVictreebelSprites1,
	sVictreebelSprites2,
	sVictreebelSprites3,
	sVictreebelSprites4,
	sVictreebelSprites5,
	sVictreebelSprites6,
	sVictreebelSprites7,
	sVictreebelSprites8,
	sVictreebelSprites9,
	sVictreebelSprites10,
	sVictreebelSprites11,
	sVictreebelSprites12,
	sVictreebelSprites13,
	sVictreebelSprites14,
	sVictreebelSprites15,
	sVictreebelSprites16,
	sVictreebelSprites17,
	sVictreebelSprites18,
	sVictreebelSprites19,
	sVictreebelSprites20,
	sVictreebelSprites21,
	sVictreebelSprites22,
	sVictreebelSprites23,
	sVictreebelSprites24,
	sVictreebelSprites25,
	sVictreebelSprites26,
	sVictreebelSprites27,
	sVictreebelSprites28,
	sVictreebelSprites29,
	sVictreebelSprites30,
	sVictreebelSprites31,
	sVictreebelSprites32,
	sVictreebelSprites33,
	sVictreebelSprites34,
	sVictreebelSprites35,
	sVictreebelSprites36,
	sVictreebelSprites37,
	sVictreebelSprites38,
	sVictreebelSprites39,
	sVictreebelSprites40,
	sVictreebelSprites41,
	sVictreebelSprites42,
	sVictreebelSprites43,
	sVictreebelSprites44,
	sVictreebelSprites45,
	sVictreebelSprites46,
	sVictreebelSprites47,
	sVictreebelSprites48,
	sVictreebelSprites49,
	sVictreebelSprites50,
	sVictreebelSprites51,
	sVictreebelSprites52,
};

static const axmain sAxMainVictreebel = {
	.poses = sAxPosesVictreebel,
	.animations = sAxAnimationsVictreebel,
	.animCount = ARRAY_COUNT(sAxAnimationsVictreebel),
	.spriteData = sAxSpritesVictreebel,
	.positions = sAxPositionsVictreebel,
};
