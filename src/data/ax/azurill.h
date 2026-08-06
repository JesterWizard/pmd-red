/* ax-table-deduped: duplicate pose/anim arrays aliased */
#include "ax_shared_anims.h"
static const axmain sAxMainAzurill;
const SiroArchive gAxAzurill = {"SIRO", &sAxMainAzurill};

static const ax_pose sAzurillPose1[] = {
	AX_POSE(0, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose2[] = {
	AX_POSE(1, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose3[] = {
	AX_POSE(2, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose4[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose5[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose6[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose7[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose8[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose9[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose10[] = {
	AX_POSE(9, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose11[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose12[] = {
	AX_POSE(11, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose13[] = {
	AX_POSE(12, OAM1(243, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose14[] = {
	AX_POSE(13, OAM1(235, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose15[] = {
	AX_POSE(14, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose16[] = {
	AX_POSE(9, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose17[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose18[] = {
	AX_POSE(11, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose19[] = {
	AX_POSE(6, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose20[] = {
	AX_POSE(7, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose21[] = {
	AX_POSE(8, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose22[] = {
	AX_POSE(3, OAM1(238, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose23[] = {
	AX_POSE(4, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose24[] = {
	AX_POSE(5, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose35[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose36[] = {
	AX_POSE(11, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(238, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose41[] = {
	AX_POSE(10, OAM1(234, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose42[] = {
	AX_POSE(11, OAM1(242, ST_OAM_H_RECTANGLE, 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose73[] = {
	AX_POSE(15, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose74[] = {
	AX_POSE(16, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose75[] = {
	AX_POSE(17, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose76[] = {
	AX_POSE(18, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose77[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose78[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose79[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose80[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose81[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose82[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose83[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose84[] = {
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose85[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose86[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose87[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose88[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(237, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose89[] = {
	AX_POSE(31, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose90[] = {
	AX_POSE(32, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose91[] = {
	AX_POSE(33, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose92[] = {
	AX_POSE(34, OAM1(236, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose93[] = {
	AX_POSE(27, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose94[] = {
	AX_POSE(28, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose95[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose96[] = {
	AX_POSE(30, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose97[] = {
	AX_POSE(23, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose98[] = {
	AX_POSE(24, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose99[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose100[] = {
	AX_POSE(26, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose101[] = {
	AX_POSE(19, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose102[] = {
	AX_POSE(20, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose103[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose104[] = {
	AX_POSE(22, OAM1(236, ST_OAM_SQUARE     , 1), OAM2(242, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose129[] = {
	AX_POSE(35, OAM1(242, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose130[] = {
	AX_POSE(36, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose131[] = {
	AX_POSE(37, OAM1(233, ST_OAM_SQUARE     , 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose132[] = {
	AX_POSE(38, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(239, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose133[] = {
	AX_POSE(39, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(40, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(4, 3, 5)),
	AX_POSE(41, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(232, ST_OAM_SIZE_0, FLIP(1, 0), 0, 0), OAM3(5, 3, 5)),
	AX_POSE(42, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(6, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose134[] = {
	AX_POSE(43, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose135[] = {
	AX_POSE(44, OAM1(223, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose136[] = {
	AX_POSE(43, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose137[] = {
	AX_POSE(39, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE(40, OAM1(243, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(4, 3, 5)),
	AX_POSE(41, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(16, ST_OAM_SIZE_0, FLIP(0, 0), 0, 1), OAM3(5, 3, 5)),
	AX_POSE(42, OAM1(227, ST_OAM_H_RECTANGLE, 1), OAM2(240, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(6, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose138[] = {
	AX_POSE(38, OAM1(225, ST_OAM_SQUARE     , 1), OAM2(241, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose180[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose181[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(235, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose182[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose184[] = {
	AX_POSE(29, OAM1(228, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose185[] = {
	AX_POSE(25, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(245, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose186[] = {
	AX_POSE(21, OAM1(227, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose188[] = {
	AX_POSE(1, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose189[] = {
	AX_POSE(2, OAM1(232, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose191[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose192[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose194[] = {
	AX_POSE(7, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(234, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose195[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(233, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose197[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(231, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose198[] = {
	AX_POSE(11, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(236, ST_OAM_SIZE_2, FLIP(1, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose200[] = {
	AX_POSE(13, OAM1(238, ST_OAM_V_RECTANGLE, 1), OAM2(248, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose201[] = {
	AX_POSE(14, OAM1(246, ST_OAM_SQUARE     , 1), OAM2(248, ST_OAM_SIZE_1, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose203[] = {
	AX_POSE(10, OAM1(237, ST_OAM_SQUARE     , 1), OAM2(249, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose204[] = {
	AX_POSE(11, OAM1(243, ST_OAM_H_RECTANGLE, 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose206[] = {
	AX_POSE(7, OAM1(239, ST_OAM_SQUARE     , 1), OAM2(246, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose207[] = {
	AX_POSE(8, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(247, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose209[] = {
	AX_POSE(4, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_pose sAzurillPose210[] = {
	AX_POSE(5, OAM1(235, ST_OAM_SQUARE     , 1), OAM2(244, ST_OAM_SIZE_2, FLIP(0, 0), 0, 0), OAM3(0, 3, 5)),
	AX_POSE_TERMINATOR
};
static const ax_anim sAzurillAnims_1_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 0, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 0}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 2}, .shadow = {0, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 1, .offset = {0, 4}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, 0}, .shadow = {0, 2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 2, .offset = {0, -1}, .shadow = {0, 1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_1_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 3, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {-1, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {0, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {1, 1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 4, .offset = {2, 3}, .shadow = {2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {2, 0}, .shadow = {2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 5, .offset = {1, -1}, .shadow = {1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_1_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 6, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {-2, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {-1, 1}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {0, 0}, .shadow = {2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 7, .offset = {2, 1}, .shadow = {3, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {2, -1}, .shadow = {3, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 8, .offset = {0, -1}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_1_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 9, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {-1, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {0, 0}, .shadow = {1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {1, -1}, .shadow = {2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 10, .offset = {2, 0}, .shadow = {3, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {2, -1}, .shadow = {3, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 11, .offset = {1, 0}, .shadow = {2, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_1_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 12, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 13, .offset = {0, 0}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -4}, .shadow = {0, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -3}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, -1}, .shadow = {0, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 14, .offset = {0, 0}, .shadow = {0, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_1_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 15, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {1, 3}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {0, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-1, -1}, .shadow = {-2, -1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 16, .offset = {-2, 0}, .shadow = {-3, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {-2, -1}, .shadow = {-3, -2} },
	{ .frames = 6, .unkFlags = 0, .poseId = 17, .offset = {-1, 0}, .shadow = {-2, -1} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_1_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 18, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {2, 2}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {1, 1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {0, 0}, .shadow = {-2, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 19, .offset = {-2, 1}, .shadow = {-3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {-2, -1}, .shadow = {-3, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 20, .offset = {0, -1}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_1_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 21, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {1, 1}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {0, 0}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {-1, 1}, .shadow = {-1, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 22, .offset = {-2, 3}, .shadow = {-2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-2, 0}, .shadow = {-2, 1} },
	{ .frames = 6, .unkFlags = 0, .poseId = 23, .offset = {-1, -1}, .shadow = {-1, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_2_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 24, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 25, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 25, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 26, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 26, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 24, .offset = {0, 3}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_2_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 27, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 28, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 28, .offset = {6, 2}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 28, .offset = {14, 11}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {19, 17}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 29, .offset = {20, 16}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {19, 17}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 29, .offset = {20, 16}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 27, .offset = {8, 5}, .shadow = {8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_2_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 30, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 31, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 31, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 31, .offset = {10, -1}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, -1}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 32, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, -1}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 32, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 30, .offset = {6, -3}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_2_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 33, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 34, .offset = {2, -4}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 34, .offset = {6, -11}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 34, .offset = {10, -15}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {19, -22}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 35, .offset = {20, -21}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {19, -22}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 35, .offset = {20, -21}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 33, .offset = {6, -9}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_2_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 36, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 37, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 37, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 37, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 38, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 38, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 36, .offset = {0, -9}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_2_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 39, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 40, .offset = {-2, -4}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 40, .offset = {-6, -11}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 40, .offset = {-10, -15}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-19, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 41, .offset = {-20, -21}, .shadow = {-22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-19, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 41, .offset = {-20, -21}, .shadow = {-22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 39, .offset = {-6, -9}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_2_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 42, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 43, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 43, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 43, .offset = {-10, -1}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, -1}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, -1}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 44, .offset = {-18, 0}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 42, .offset = {-6, -3}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_2_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 45, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 46, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 46, .offset = {-6, 2}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 46, .offset = {-14, 11}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, 17}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 47, .offset = {-20, 16}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-19, 17}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 47, .offset = {-20, 16}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 45, .offset = {-8, 5}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_3_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 48, .offset = {0, -2}, .shadow = {0, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 49, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 49, .offset = {0, 4}, .shadow = {0, 4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 50, .offset = {0, 10}, .shadow = {0, 10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 1, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {0, 18}, .shadow = {0, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 50, .offset = {1, 18}, .shadow = {1, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 48, .offset = {0, 3}, .shadow = {0, 6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_3_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 51, .offset = {-2, -2}, .shadow = {-2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 52, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 52, .offset = {6, 2}, .shadow = {6, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 52, .offset = {14, 11}, .shadow = {14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {19, 17}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 53, .offset = {20, 16}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {19, 17}, .shadow = {19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 53, .offset = {20, 16}, .shadow = {20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 51, .offset = {8, 5}, .shadow = {8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_3_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 54, .offset = {-2, 0}, .shadow = {-2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 55, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 55, .offset = {4, -1}, .shadow = {4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 55, .offset = {10, -1}, .shadow = {10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, -1}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 56, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, -1}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 56, .offset = {18, 0}, .shadow = {18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 54, .offset = {6, -3}, .shadow = {6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_3_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 57, .offset = {-2, 2}, .shadow = {-2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 58, .offset = {2, -4}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 58, .offset = {6, -11}, .shadow = {6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 58, .offset = {10, -15}, .shadow = {10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {19, -22}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 1, .poseId = 59, .offset = {20, -21}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {19, -22}, .shadow = {21, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 59, .offset = {20, -21}, .shadow = {22, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 57, .offset = {6, -9}, .shadow = {6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_3_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 60, .offset = {0, 2}, .shadow = {0, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 61, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 61, .offset = {0, -4}, .shadow = {0, -4} },
	{ .frames = 2, .unkFlags = 2, .poseId = 61, .offset = {0, -10}, .shadow = {0, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 1, .poseId = 62, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {0, -20}, .shadow = {0, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 62, .offset = {1, -20}, .shadow = {1, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 60, .offset = {0, -9}, .shadow = {0, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_3_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 63, .offset = {2, 2}, .shadow = {2, 2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 64, .offset = {-2, -4}, .shadow = {-2, -2} },
	{ .frames = 2, .unkFlags = 0, .poseId = 64, .offset = {-6, -11}, .shadow = {-6, -6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 64, .offset = {-10, -15}, .shadow = {-10, -10} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-19, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 1, .poseId = 65, .offset = {-20, -21}, .shadow = {-22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-19, -22}, .shadow = {-21, -22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 65, .offset = {-20, -21}, .shadow = {-22, -21} },
	{ .frames = 2, .unkFlags = 0, .poseId = 63, .offset = {-6, -9}, .shadow = {-6, -6} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_3_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 66, .offset = {2, 0}, .shadow = {2, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 67, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 67, .offset = {-4, -1}, .shadow = {-4, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 67, .offset = {-10, -1}, .shadow = {-10, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, -1}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, -1}, .shadow = {-18, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 68, .offset = {-18, 0}, .shadow = {-18, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 66, .offset = {-6, -3}, .shadow = {-6, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_3_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 4, .unkFlags = 0, .poseId = 69, .offset = {2, -2}, .shadow = {2, -2} },
	{ .frames = 1, .unkFlags = 0, .poseId = 70, .offset = {0, -1}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 70, .offset = {-6, 2}, .shadow = {-6, 6} },
	{ .frames = 2, .unkFlags = 2, .poseId = 70, .offset = {-14, 11}, .shadow = {-14, 14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-19, 17}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 1, .poseId = 71, .offset = {-20, 16}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-19, 17}, .shadow = {-19, 19} },
	{ .frames = 2, .unkFlags = 0, .poseId = 71, .offset = {-20, 16}, .shadow = {-20, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 69, .offset = {-8, 5}, .shadow = {-8, 8} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_4_1[] = {
	{ .frames = 6, .unkFlags = 2, .poseId = 75, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 74, .offset = {0, 1}, .shadow = {0, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 74, .offset = {0, 3}, .shadow = {0, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 74, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {0, 5}, .shadow = {0, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 74, .offset = {1, 5}, .shadow = {1, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 75, .offset = {0, 2}, .shadow = {0, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_4_2[] = {
	{ .frames = 6, .unkFlags = 2, .poseId = 79, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {1, 1}, .shadow = {1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 78, .offset = {3, 3}, .shadow = {3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 78, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {4, 6}, .shadow = {4, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {4, 6}, .shadow = {4, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {5, 5}, .shadow = {5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 78, .offset = {4, 6}, .shadow = {4, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 79, .offset = {2, 2}, .shadow = {2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_4_3[] = {
	{ .frames = 6, .unkFlags = 2, .poseId = 83, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {1, 0}, .shadow = {1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 82, .offset = {3, 0}, .shadow = {3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 82, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {5, 0}, .shadow = {5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 82, .offset = {5, 1}, .shadow = {5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 83, .offset = {2, 0}, .shadow = {2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_4_4[] = {
	{ .frames = 6, .unkFlags = 2, .poseId = 87, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {1, -1}, .shadow = {1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 86, .offset = {3, -3}, .shadow = {3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 86, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {5, -5}, .shadow = {5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 86, .offset = {4, -6}, .shadow = {4, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 87, .offset = {2, -2}, .shadow = {2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_4_5[] = {
	{ .frames = 6, .unkFlags = 2, .poseId = 91, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -1}, .shadow = {0, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 90, .offset = {0, -3}, .shadow = {0, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 90, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {0, -5}, .shadow = {0, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 90, .offset = {1, -5}, .shadow = {1, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 91, .offset = {0, -2}, .shadow = {0, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_4_6[] = {
	{ .frames = 6, .unkFlags = 2, .poseId = 95, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {-1, -1}, .shadow = {-1, -1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 94, .offset = {-3, -3}, .shadow = {-3, -3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 94, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-5, -5}, .shadow = {-5, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 94, .offset = {-4, -6}, .shadow = {-4, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 95, .offset = {-2, -2}, .shadow = {-2, -2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_4_7[] = {
	{ .frames = 6, .unkFlags = 2, .poseId = 99, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {-1, 0}, .shadow = {-1, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 98, .offset = {-3, 0}, .shadow = {-3, 0} },
	{ .frames = 2, .unkFlags = 1, .poseId = 98, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-5, 0}, .shadow = {-5, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 98, .offset = {-5, 1}, .shadow = {-5, 1} },
	{ .frames = 2, .unkFlags = 0, .poseId = 99, .offset = {-2, 0}, .shadow = {-2, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_4_8[] = {
	{ .frames = 6, .unkFlags = 2, .poseId = 103, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {-1, 1}, .shadow = {-1, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 102, .offset = {-3, 3}, .shadow = {-3, 3} },
	{ .frames = 2, .unkFlags = 1, .poseId = 102, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-4, 6}, .shadow = {-4, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-4, 6}, .shadow = {-4, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-5, 5}, .shadow = {-5, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 102, .offset = {-4, 6}, .shadow = {-4, 6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 103, .offset = {-2, 2}, .shadow = {-2, 2} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_5_1[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 104, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 106, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 105, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_5_2[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 107, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 109, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 108, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_5_3[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 110, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 112, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 111, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_5_4[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 113, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 115, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 114, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_5_5[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 116, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 118, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 117, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_5_6[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 119, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 121, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 120, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_5_7[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 122, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 124, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 123, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_5_8[] = {
	{ .frames = 6, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 2, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 125, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 127, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 6, .unkFlags = 0, .poseId = 126, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_8_1[] = {
	{ .frames = 16, .unkFlags = 0, .poseId = 138, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 139, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 141, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_8_2[] = {
	{ .frames = 16, .unkFlags = 0, .poseId = 142, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 143, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 145, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_8_3[] = {
	{ .frames = 16, .unkFlags = 0, .poseId = 146, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 147, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 149, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_8_4[] = {
	{ .frames = 16, .unkFlags = 0, .poseId = 150, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 151, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 153, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_8_5[] = {
	{ .frames = 16, .unkFlags = 0, .poseId = 154, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 155, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 157, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_8_6[] = {
	{ .frames = 16, .unkFlags = 0, .poseId = 158, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 159, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 161, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_8_7[] = {
	{ .frames = 16, .unkFlags = 0, .poseId = 162, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 163, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 165, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_8_8[] = {
	{ .frames = 16, .unkFlags = 0, .poseId = 166, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 16, .unkFlags = 0, .poseId = 167, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 10, .unkFlags = 0, .poseId = 169, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_9_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {6, 3}, .shadow = {6, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {8, 9}, .shadow = {8, 9} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {7, 18}, .shadow = {7, 18} },
	{ .frames = 3, .unkFlags = 0, .poseId = 174, .offset = {0, 21}, .shadow = {0, 21} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-7, 18}, .shadow = {-7, 18} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-8, 9}, .shadow = {-8, 9} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {-6, 3}, .shadow = {-6, 3} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_9_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {8, 0}, .shadow = {8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {17, 3}, .shadow = {17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {23, 13}, .shadow = {23, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 173, .offset = {24, 20}, .shadow = {24, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {13, 22}, .shadow = {13, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {3, 15}, .shadow = {3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_9_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 177, .offset = {3, -5}, .shadow = {3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {12, -6}, .shadow = {12, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {20, -4}, .shadow = {20, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 172, .offset = {25, 0}, .shadow = {25, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 173, .offset = {22, 5}, .shadow = {22, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {12, 8}, .shadow = {12, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {4, 5}, .shadow = {4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_9_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 176, .offset = {-1, -8}, .shadow = {-1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {4, -17}, .shadow = {4, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {13, -23}, .shadow = {13, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 171, .offset = {24, -23}, .shadow = {24, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 172, .offset = {25, -14}, .shadow = {25, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {20, -5}, .shadow = {20, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {11, 1}, .shadow = {11, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_9_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 175, .offset = {-8, -5}, .shadow = {-8, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-9, -12}, .shadow = {-9, -12} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-6, -20}, .shadow = {-6, -20} },
	{ .frames = 3, .unkFlags = 0, .poseId = 170, .offset = {0, -23}, .shadow = {0, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 171, .offset = {6, -20}, .shadow = {6, -20} },
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {9, -12}, .shadow = {9, -12} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {8, -5}, .shadow = {8, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_9_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {1, -8}, .shadow = {1, -8} },
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {-4, -17}, .shadow = {-4, -17} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-13, -23}, .shadow = {-13, -23} },
	{ .frames = 3, .unkFlags = 0, .poseId = 177, .offset = {-24, -23}, .shadow = {-24, -23} },
	{ .frames = 2, .unkFlags = 3, .poseId = 176, .offset = {-25, -14}, .shadow = {-25, -14} },
	{ .frames = 2, .unkFlags = 0, .poseId = 175, .offset = {-20, -5}, .shadow = {-20, -5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 174, .offset = {-11, 1}, .shadow = {-11, 1} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_9_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {-3, -5}, .shadow = {-3, -5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 170, .offset = {-12, -6}, .shadow = {-12, -6} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-20, -4}, .shadow = {-20, -4} },
	{ .frames = 3, .unkFlags = 0, .poseId = 176, .offset = {-25, 0}, .shadow = {-25, 0} },
	{ .frames = 2, .unkFlags = 3, .poseId = 175, .offset = {-22, 5}, .shadow = {-22, 5} },
	{ .frames = 2, .unkFlags = 0, .poseId = 174, .offset = {-12, 8}, .shadow = {-12, 8} },
	{ .frames = 1, .unkFlags = 0, .poseId = 173, .offset = {-4, 5}, .shadow = {-4, 5} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_9_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 170, .offset = {-8, 0}, .shadow = {-8, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 177, .offset = {-17, 3}, .shadow = {-17, 3} },
	{ .frames = 2, .unkFlags = 0, .poseId = 176, .offset = {-23, 13}, .shadow = {-23, 13} },
	{ .frames = 3, .unkFlags = 0, .poseId = 175, .offset = {-24, 20}, .shadow = {-24, 20} },
	{ .frames = 2, .unkFlags = 3, .poseId = 174, .offset = {-13, 22}, .shadow = {-13, 22} },
	{ .frames = 2, .unkFlags = 0, .poseId = 173, .offset = {-3, 15}, .shadow = {-3, 15} },
	{ .frames = 1, .unkFlags = 0, .poseId = 172, .offset = {0, 7}, .shadow = {0, 7} },
	{ .frames = 1, .unkFlags = 0, .poseId = 171, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_11_1[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 186, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 187, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 187, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 187, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 187, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 186, .offset = {0, -23}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 188, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 188, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 188, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 188, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_11_2[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 189, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 190, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 190, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 190, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 190, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 189, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 191, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 191, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 191, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 191, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_11_3[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 192, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 193, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 193, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 193, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 193, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 192, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 194, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 194, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 194, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 194, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_11_4[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 195, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 196, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 196, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 196, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 196, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 195, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 197, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 197, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 197, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 197, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_11_5[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 198, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 199, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 199, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 199, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 199, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 198, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 200, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 200, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 200, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 200, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_11_6[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 201, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 202, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 202, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 202, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 202, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 201, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 203, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 203, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 203, .offset = {0, -11}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 203, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_11_7[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 204, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 205, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 205, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 205, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 205, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 204, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 206, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 206, .offset = {0, -19}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 206, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 206, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};
static const ax_anim sAzurillAnims_11_8[] = {
	{ .frames = 2, .unkFlags = 0, .poseId = 207, .offset = {0, 0}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 208, .offset = {0, -10}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 208, .offset = {0, -16}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 208, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 208, .offset = {0, -21}, .shadow = {0, 0} },
	{ .frames = 4, .unkFlags = 0, .poseId = 207, .offset = {0, -24}, .shadow = {0, 0} },
	{ .frames = 3, .unkFlags = 0, .poseId = 209, .offset = {0, -25}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 0, .poseId = 209, .offset = {0, -20}, .shadow = {0, 0} },
	{ .frames = 1, .unkFlags = 0, .poseId = 209, .offset = {0, -12}, .shadow = {0, 0} },
	{ .frames = 2, .unkFlags = 2, .poseId = 209, .offset = {0, 0}, .shadow = {0, 0} },
	AX_ANIM_TERMINATOR
};

static const u8 sAzurillGfx1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_1.4bpp.lz");
static const ax_sprite sAzurillSprites1[] = {
	{sAzurillGfx1, ARRAY_COUNT(sAzurillGfx1)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_2.4bpp.lz");
static const ax_sprite sAzurillSprites2[] = {
	{sAzurillGfx2, ARRAY_COUNT(sAzurillGfx2)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_3.4bpp.lz");
static const ax_sprite sAzurillSprites3[] = {
	{sAzurillGfx3, ARRAY_COUNT(sAzurillGfx3)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx4[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_4.4bpp.lz");
static const ax_sprite sAzurillSprites4[] = {
	{sAzurillGfx4, ARRAY_COUNT(sAzurillGfx4)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx5[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_5.4bpp.lz");
static const ax_sprite sAzurillSprites5[] = {
	{sAzurillGfx5, ARRAY_COUNT(sAzurillGfx5)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx6[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_6.4bpp.lz");
static const ax_sprite sAzurillSprites6[] = {
	{sAzurillGfx6, ARRAY_COUNT(sAzurillGfx6)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx7[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_7.4bpp.lz");
static const ax_sprite sAzurillSprites7[] = {
	{sAzurillGfx7, ARRAY_COUNT(sAzurillGfx7)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx8[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_8.4bpp.lz");
static const ax_sprite sAzurillSprites8[] = {
	{sAzurillGfx8, ARRAY_COUNT(sAzurillGfx8)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx9[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_9.4bpp.lz");
static const ax_sprite sAzurillSprites9[] = {
	{sAzurillGfx9, ARRAY_COUNT(sAzurillGfx9)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx10[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_10.4bpp.lz");
static const ax_sprite sAzurillSprites10[] = {
	{sAzurillGfx10, ARRAY_COUNT(sAzurillGfx10)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx11[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_11.4bpp.lz");
static const ax_sprite sAzurillSprites11[] = {
	{sAzurillGfx11, ARRAY_COUNT(sAzurillGfx11)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx12[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_12.4bpp.lz");
static const ax_sprite sAzurillSprites12[] = {
	{sAzurillGfx12, ARRAY_COUNT(sAzurillGfx12)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx13[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_13.4bpp.lz");
static const ax_sprite sAzurillSprites13[] = {
	{sAzurillGfx13, ARRAY_COUNT(sAzurillGfx13)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx14[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_14.4bpp.lz");
static const ax_sprite sAzurillSprites14[] = {
	{sAzurillGfx14, ARRAY_COUNT(sAzurillGfx14)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx15[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_15.4bpp.lz");
static const ax_sprite sAzurillSprites15[] = {
	{sAzurillGfx15, ARRAY_COUNT(sAzurillGfx15)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx16[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_16.4bpp.lz");
static const u8 sAzurillGfx16_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_16_1.4bpp.lz");
static const u8 sAzurillGfx16_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_16_2.4bpp.lz");
static const ax_sprite sAzurillSprites16[] = {
	{sAzurillGfx16, ARRAY_COUNT(sAzurillGfx16)}, 
	{NULL, 32}, 
	{sAzurillGfx16_1, ARRAY_COUNT(sAzurillGfx16_1)}, 
	{NULL, 64}, 
	{sAzurillGfx16_2, ARRAY_COUNT(sAzurillGfx16_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx17[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_17.4bpp.lz");
static const u8 sAzurillGfx17_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_17_1.4bpp.lz");
static const u8 sAzurillGfx17_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_17_2.4bpp.lz");
static const ax_sprite sAzurillSprites17[] = {
	{NULL, 32}, 
	{sAzurillGfx17, ARRAY_COUNT(sAzurillGfx17)}, 
	{NULL, 32}, 
	{sAzurillGfx17_1, ARRAY_COUNT(sAzurillGfx17_1)}, 
	{NULL, 64}, 
	{sAzurillGfx17_2, ARRAY_COUNT(sAzurillGfx17_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx18[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_18.4bpp.lz");
static const u8 sAzurillGfx18_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_18_1.4bpp.lz");
static const u8 sAzurillGfx18_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_18_2.4bpp.lz");
static const u8 sAzurillGfx18_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_18_3.4bpp.lz");
static const ax_sprite sAzurillSprites18[] = {
	{NULL, 32}, 
	{sAzurillGfx18, ARRAY_COUNT(sAzurillGfx18)}, 
	{NULL, 64}, 
	{sAzurillGfx18_1, ARRAY_COUNT(sAzurillGfx18_1)}, 
	{NULL, 64}, 
	{sAzurillGfx18_2, ARRAY_COUNT(sAzurillGfx18_2)}, 
	{NULL, 64}, 
	{sAzurillGfx18_3, ARRAY_COUNT(sAzurillGfx18_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAzurillGfx19[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_19.4bpp.lz");
static const ax_sprite sAzurillSprites19[] = {
	{sAzurillGfx19, ARRAY_COUNT(sAzurillGfx19)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sAzurillGfx20[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_20.4bpp.lz");
static const u8 sAzurillGfx20_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_20_1.4bpp.lz");
static const u8 sAzurillGfx20_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_20_2.4bpp.lz");
static const ax_sprite sAzurillSprites20[] = {
	{sAzurillGfx20, ARRAY_COUNT(sAzurillGfx20)}, 
	{NULL, 32}, 
	{sAzurillGfx20_1, ARRAY_COUNT(sAzurillGfx20_1)}, 
	{NULL, 64}, 
	{sAzurillGfx20_2, ARRAY_COUNT(sAzurillGfx20_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx21[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_21.4bpp.lz");
static const u8 sAzurillGfx21_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_21_1.4bpp.lz");
static const u8 sAzurillGfx21_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_21_2.4bpp.lz");
static const ax_sprite sAzurillSprites21[] = {
	{sAzurillGfx21, ARRAY_COUNT(sAzurillGfx21)}, 
	{NULL, 32}, 
	{sAzurillGfx21_1, ARRAY_COUNT(sAzurillGfx21_1)}, 
	{NULL, 64}, 
	{sAzurillGfx21_2, ARRAY_COUNT(sAzurillGfx21_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx22[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_22.4bpp.lz");
static const u8 sAzurillGfx22_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_22_1.4bpp.lz");
static const u8 sAzurillGfx22_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_22_2.4bpp.lz");
static const u8 sAzurillGfx22_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_22_3.4bpp.lz");
static const ax_sprite sAzurillSprites22[] = {
	{sAzurillGfx22, ARRAY_COUNT(sAzurillGfx22)}, 
	{NULL, 32}, 
	{sAzurillGfx22_1, ARRAY_COUNT(sAzurillGfx22_1)}, 
	{NULL, 32}, 
	{sAzurillGfx22_2, ARRAY_COUNT(sAzurillGfx22_2)}, 
	{NULL, 64}, 
	{sAzurillGfx22_3, ARRAY_COUNT(sAzurillGfx22_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAzurillGfx23[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_23.4bpp.lz");
static const u8 sAzurillGfx23_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_23_1.4bpp.lz");
static const u8 sAzurillGfx23_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_23_2.4bpp.lz");
static const ax_sprite sAzurillSprites23[] = {
	{sAzurillGfx23, ARRAY_COUNT(sAzurillGfx23)}, 
	{NULL, 32}, 
	{sAzurillGfx23_1, ARRAY_COUNT(sAzurillGfx23_1)}, 
	{NULL, 64}, 
	{sAzurillGfx23_2, ARRAY_COUNT(sAzurillGfx23_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx24[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_24.4bpp.lz");
static const u8 sAzurillGfx24_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_24_1.4bpp.lz");
static const u8 sAzurillGfx24_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_24_2.4bpp.lz");
static const ax_sprite sAzurillSprites24[] = {
	{sAzurillGfx24, ARRAY_COUNT(sAzurillGfx24)}, 
	{NULL, 32}, 
	{sAzurillGfx24_1, ARRAY_COUNT(sAzurillGfx24_1)}, 
	{NULL, 64}, 
	{sAzurillGfx24_2, ARRAY_COUNT(sAzurillGfx24_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx25[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_25.4bpp.lz");
static const u8 sAzurillGfx25_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_25_1.4bpp.lz");
static const u8 sAzurillGfx25_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_25_2.4bpp.lz");
static const ax_sprite sAzurillSprites25[] = {
	{sAzurillGfx25, ARRAY_COUNT(sAzurillGfx25)}, 
	{NULL, 32}, 
	{sAzurillGfx25_1, ARRAY_COUNT(sAzurillGfx25_1)}, 
	{NULL, 64}, 
	{sAzurillGfx25_2, ARRAY_COUNT(sAzurillGfx25_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx26[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_26.4bpp.lz");
static const u8 sAzurillGfx26_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_26_1.4bpp.lz");
static const u8 sAzurillGfx26_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_26_2.4bpp.lz");
static const u8 sAzurillGfx26_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_26_3.4bpp.lz");
static const ax_sprite sAzurillSprites26[] = {
	{sAzurillGfx26, ARRAY_COUNT(sAzurillGfx26)}, 
	{NULL, 64}, 
	{sAzurillGfx26_1, ARRAY_COUNT(sAzurillGfx26_1)}, 
	{NULL, 32}, 
	{sAzurillGfx26_2, ARRAY_COUNT(sAzurillGfx26_2)}, 
	{NULL, 64}, 
	{sAzurillGfx26_3, ARRAY_COUNT(sAzurillGfx26_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAzurillGfx27[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_27.4bpp.lz");
static const u8 sAzurillGfx27_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_27_1.4bpp.lz");
static const u8 sAzurillGfx27_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_27_2.4bpp.lz");
static const ax_sprite sAzurillSprites27[] = {
	{sAzurillGfx27, ARRAY_COUNT(sAzurillGfx27)}, 
	{NULL, 32}, 
	{sAzurillGfx27_1, ARRAY_COUNT(sAzurillGfx27_1)}, 
	{NULL, 64}, 
	{sAzurillGfx27_2, ARRAY_COUNT(sAzurillGfx27_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx28[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_28.4bpp.lz");
static const u8 sAzurillGfx28_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_28_1.4bpp.lz");
static const u8 sAzurillGfx28_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_28_2.4bpp.lz");
static const ax_sprite sAzurillSprites28[] = {
	{sAzurillGfx28, ARRAY_COUNT(sAzurillGfx28)}, 
	{NULL, 32}, 
	{sAzurillGfx28_1, ARRAY_COUNT(sAzurillGfx28_1)}, 
	{NULL, 64}, 
	{sAzurillGfx28_2, ARRAY_COUNT(sAzurillGfx28_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx29[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_29.4bpp.lz");
static const u8 sAzurillGfx29_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_29_1.4bpp.lz");
static const u8 sAzurillGfx29_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_29_2.4bpp.lz");
static const ax_sprite sAzurillSprites29[] = {
	{sAzurillGfx29, ARRAY_COUNT(sAzurillGfx29)}, 
	{NULL, 32}, 
	{sAzurillGfx29_1, ARRAY_COUNT(sAzurillGfx29_1)}, 
	{NULL, 64}, 
	{sAzurillGfx29_2, ARRAY_COUNT(sAzurillGfx29_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx30[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_30.4bpp.lz");
static const u8 sAzurillGfx30_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_30_1.4bpp.lz");
static const u8 sAzurillGfx30_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_30_2.4bpp.lz");
static const u8 sAzurillGfx30_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_30_3.4bpp.lz");
static const ax_sprite sAzurillSprites30[] = {
	{sAzurillGfx30, ARRAY_COUNT(sAzurillGfx30)}, 
	{NULL, 64}, 
	{sAzurillGfx30_1, ARRAY_COUNT(sAzurillGfx30_1)}, 
	{NULL, 32}, 
	{sAzurillGfx30_2, ARRAY_COUNT(sAzurillGfx30_2)}, 
	{NULL, 64}, 
	{sAzurillGfx30_3, ARRAY_COUNT(sAzurillGfx30_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAzurillGfx31[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_31.4bpp.lz");
static const u8 sAzurillGfx31_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_31_1.4bpp.lz");
static const u8 sAzurillGfx31_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_31_2.4bpp.lz");
static const ax_sprite sAzurillSprites31[] = {
	{sAzurillGfx31, ARRAY_COUNT(sAzurillGfx31)}, 
	{NULL, 32}, 
	{sAzurillGfx31_1, ARRAY_COUNT(sAzurillGfx31_1)}, 
	{NULL, 64}, 
	{sAzurillGfx31_2, ARRAY_COUNT(sAzurillGfx31_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx32[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_32.4bpp.lz");
static const u8 sAzurillGfx32_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_32_1.4bpp.lz");
static const u8 sAzurillGfx32_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_32_2.4bpp.lz");
static const ax_sprite sAzurillSprites32[] = {
	{NULL, 32}, 
	{sAzurillGfx32, ARRAY_COUNT(sAzurillGfx32)}, 
	{NULL, 32}, 
	{sAzurillGfx32_1, ARRAY_COUNT(sAzurillGfx32_1)}, 
	{NULL, 64}, 
	{sAzurillGfx32_2, ARRAY_COUNT(sAzurillGfx32_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx33[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_33.4bpp.lz");
static const u8 sAzurillGfx33_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_33_1.4bpp.lz");
static const u8 sAzurillGfx33_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_33_2.4bpp.lz");
static const ax_sprite sAzurillSprites33[] = {
	{sAzurillGfx33, ARRAY_COUNT(sAzurillGfx33)}, 
	{NULL, 32}, 
	{sAzurillGfx33_1, ARRAY_COUNT(sAzurillGfx33_1)}, 
	{NULL, 64}, 
	{sAzurillGfx33_2, ARRAY_COUNT(sAzurillGfx33_2)}, 
	{NULL, 160}, 
	{NULL, 0}
};
static const u8 sAzurillGfx34[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_34.4bpp.lz");
static const u8 sAzurillGfx34_1[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_34_1.4bpp.lz");
static const u8 sAzurillGfx34_2[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_34_2.4bpp.lz");
static const u8 sAzurillGfx34_3[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_34_3.4bpp.lz");
static const ax_sprite sAzurillSprites34[] = {
	{sAzurillGfx34, ARRAY_COUNT(sAzurillGfx34)}, 
	{NULL, 64}, 
	{sAzurillGfx34_1, ARRAY_COUNT(sAzurillGfx34_1)}, 
	{NULL, 64}, 
	{sAzurillGfx34_2, ARRAY_COUNT(sAzurillGfx34_2)}, 
	{NULL, 64}, 
	{sAzurillGfx34_3, ARRAY_COUNT(sAzurillGfx34_3)}, 
	{NULL, 32}, 
	{NULL, 0}
};
static const u8 sAzurillGfx35[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_35.4bpp.lz");
static const ax_sprite sAzurillSprites35[] = {
	{sAzurillGfx35, ARRAY_COUNT(sAzurillGfx35)}, 
	{NULL, 64}, 
	{NULL, 0}
};
static const u8 sAzurillGfx36[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_36.4bpp.lz");
static const ax_sprite sAzurillSprites36[] = {
	{sAzurillGfx36, ARRAY_COUNT(sAzurillGfx36)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx37[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_37.4bpp.lz");
static const ax_sprite sAzurillSprites37[] = {
	{sAzurillGfx37, ARRAY_COUNT(sAzurillGfx37)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx38[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_38.4bpp.lz");
static const ax_sprite sAzurillSprites38[] = {
	{sAzurillGfx38, ARRAY_COUNT(sAzurillGfx38)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx39[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_39.4bpp.lz");
static const ax_sprite sAzurillSprites39[] = {
	{sAzurillGfx39, ARRAY_COUNT(sAzurillGfx39)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx40[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_40.4bpp.lz");
static const ax_sprite sAzurillSprites40[] = {
	{sAzurillGfx40, ARRAY_COUNT(sAzurillGfx40)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx41[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_41.4bpp.lz");
static const ax_sprite sAzurillSprites41[] = {
	{sAzurillGfx41, ARRAY_COUNT(sAzurillGfx41)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx42[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_42.4bpp.lz");
static const ax_sprite sAzurillSprites42[] = {
	{sAzurillGfx42, ARRAY_COUNT(sAzurillGfx42)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx43[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_43.4bpp.lz");
static const ax_sprite sAzurillSprites43[] = {
	{sAzurillGfx43, ARRAY_COUNT(sAzurillGfx43)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx44[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_44.4bpp.lz");
static const ax_sprite sAzurillSprites44[] = {
	{sAzurillGfx44, ARRAY_COUNT(sAzurillGfx44)}, 
	{NULL, 0}
};
static const u8 sAzurillGfx45[] ALIGNED(4) = INCBIN_U8("graphics/ax/mon/azurill/sprite_45.4bpp.lz");
static const ax_sprite sAzurillSprites45[] = {
	{sAzurillGfx45, ARRAY_COUNT(sAzurillGfx45)}, 
	{NULL, 0}
};

static const ax_pose *const sAxPosesAzurill[] = {
	sAzurillPose1,
	sAzurillPose2,
	sAzurillPose3,
	sAzurillPose4,
	sAzurillPose5,
	sAzurillPose6,
	sAzurillPose7,
	sAzurillPose8,
	sAzurillPose9,
	sAzurillPose10,
	sAzurillPose11,
	sAzurillPose12,
	sAzurillPose13,
	sAzurillPose14,
	sAzurillPose15,
	sAzurillPose16,
	sAzurillPose17,
	sAzurillPose18,
	sAzurillPose19,
	sAzurillPose20,
	sAzurillPose21,
	sAzurillPose22,
	sAzurillPose23,
	sAzurillPose24,
	sAzurillPose1,
	sAzurillPose2,
	sAzurillPose3,
	sAzurillPose4,
	sAzurillPose5,
	sAzurillPose6,
	sAzurillPose7,
	sAzurillPose8,
	sAzurillPose9,
	sAzurillPose10,
	sAzurillPose35,
	sAzurillPose36,
	sAzurillPose13,
	sAzurillPose14,
	sAzurillPose15,
	sAzurillPose16,
	sAzurillPose41,
	sAzurillPose42,
	sAzurillPose19,
	sAzurillPose20,
	sAzurillPose21,
	sAzurillPose22,
	sAzurillPose23,
	sAzurillPose24,
	sAzurillPose1,
	sAzurillPose2,
	sAzurillPose3,
	sAzurillPose4,
	sAzurillPose5,
	sAzurillPose6,
	sAzurillPose7,
	sAzurillPose8,
	sAzurillPose9,
	sAzurillPose10,
	sAzurillPose35,
	sAzurillPose36,
	sAzurillPose13,
	sAzurillPose14,
	sAzurillPose15,
	sAzurillPose16,
	sAzurillPose41,
	sAzurillPose42,
	sAzurillPose19,
	sAzurillPose20,
	sAzurillPose21,
	sAzurillPose22,
	sAzurillPose23,
	sAzurillPose24,
	sAzurillPose73,
	sAzurillPose74,
	sAzurillPose75,
	sAzurillPose76,
	sAzurillPose77,
	sAzurillPose78,
	sAzurillPose79,
	sAzurillPose80,
	sAzurillPose81,
	sAzurillPose82,
	sAzurillPose83,
	sAzurillPose84,
	sAzurillPose85,
	sAzurillPose86,
	sAzurillPose87,
	sAzurillPose88,
	sAzurillPose89,
	sAzurillPose90,
	sAzurillPose91,
	sAzurillPose92,
	sAzurillPose93,
	sAzurillPose94,
	sAzurillPose95,
	sAzurillPose96,
	sAzurillPose97,
	sAzurillPose98,
	sAzurillPose99,
	sAzurillPose100,
	sAzurillPose101,
	sAzurillPose102,
	sAzurillPose103,
	sAzurillPose104,
	sAzurillPose73,
	sAzurillPose74,
	sAzurillPose76,
	sAzurillPose77,
	sAzurillPose78,
	sAzurillPose80,
	sAzurillPose81,
	sAzurillPose82,
	sAzurillPose84,
	sAzurillPose85,
	sAzurillPose86,
	sAzurillPose88,
	sAzurillPose89,
	sAzurillPose90,
	sAzurillPose92,
	sAzurillPose93,
	sAzurillPose94,
	sAzurillPose96,
	sAzurillPose97,
	sAzurillPose98,
	sAzurillPose100,
	sAzurillPose101,
	sAzurillPose102,
	sAzurillPose104,
	sAzurillPose129,
	sAzurillPose130,
	sAzurillPose131,
	sAzurillPose132,
	sAzurillPose133,
	sAzurillPose134,
	sAzurillPose135,
	sAzurillPose136,
	sAzurillPose137,
	sAzurillPose138,
	sAzurillPose73,
	sAzurillPose74,
	sAzurillPose75,
	sAzurillPose76,
	sAzurillPose77,
	sAzurillPose78,
	sAzurillPose79,
	sAzurillPose80,
	sAzurillPose81,
	sAzurillPose82,
	sAzurillPose83,
	sAzurillPose84,
	sAzurillPose85,
	sAzurillPose86,
	sAzurillPose87,
	sAzurillPose88,
	sAzurillPose89,
	sAzurillPose90,
	sAzurillPose91,
	sAzurillPose92,
	sAzurillPose93,
	sAzurillPose94,
	sAzurillPose95,
	sAzurillPose96,
	sAzurillPose97,
	sAzurillPose98,
	sAzurillPose99,
	sAzurillPose100,
	sAzurillPose101,
	sAzurillPose102,
	sAzurillPose103,
	sAzurillPose104,
	sAzurillPose74,
	sAzurillPose102,
	sAzurillPose98,
	sAzurillPose94,
	sAzurillPose90,
	sAzurillPose86,
	sAzurillPose82,
	sAzurillPose78,
	sAzurillPose75,
	sAzurillPose180,
	sAzurillPose181,
	sAzurillPose182,
	sAzurillPose91,
	sAzurillPose184,
	sAzurillPose185,
	sAzurillPose186,
	sAzurillPose1,
	sAzurillPose188,
	sAzurillPose189,
	sAzurillPose4,
	sAzurillPose191,
	sAzurillPose192,
	sAzurillPose7,
	sAzurillPose194,
	sAzurillPose195,
	sAzurillPose10,
	sAzurillPose197,
	sAzurillPose198,
	sAzurillPose13,
	sAzurillPose200,
	sAzurillPose201,
	sAzurillPose16,
	sAzurillPose203,
	sAzurillPose204,
	sAzurillPose19,
	sAzurillPose206,
	sAzurillPose207,
	sAzurillPose22,
	sAzurillPose209,
	sAzurillPose210,
	sAzurillPose76,
	sAzurillPose104,
	sAzurillPose100,
	sAzurillPose96,
	sAzurillPose92,
	sAzurillPose88,
	sAzurillPose84,
	sAzurillPose80,
	sAzurillPose1,
	sAzurillPose22,
	sAzurillPose19,
	sAzurillPose16,
	sAzurillPose13,
	sAzurillPose10,
	sAzurillPose7,
	sAzurillPose4,
};

static const struct PositionSets sAxPositionsAzurill[] = {
	[0] = { .set = { {-1, -2}, {-6, -4}, {4, -4}, {-1, -5} } },
	[1] = { .set = { {-1, -7}, {-6, -8}, {4, -8}, {-1, -10} } },
	[2] = { .set = { {-1, 2}, {-6, 0}, {4, 0}, {-1, -2} } },
	[3] = { .set = { {3, -3}, {5, -5}, {-4, -3}, {0, -5} } },
	[4] = { .set = { {5, -8}, {7, -8}, {-2, -5}, {2, -8} } },
	[5] = { .set = { {5, 1}, {7, -1}, {-1, 1}, {2, -2} } },
	[6] = { .set = { {4, -4}, {1, -7}, {1, -2}, {0, -5} } },
	[7] = { .set = { {7, -10}, {2, -11}, {2, -7}, {2, -10} } },
	[8] = { .set = { {7, -1}, {4, -5}, {4, -1}, {3, -4} } },
	[9] = { .set = { {2, -5}, {-5, -7}, {4, -4}, {0, -6} } },
	[10] = { .set = { {5, -10}, {-2, -12}, {7, -9}, {2, -11} } },
	[11] = { .set = { {6, -4}, {2, -8}, {7, -4}, {4, -6} } },
	[12] = { .set = { {0, -7}, {5, -6}, {-5, -6}, {0, -6} } },
	[13] = { .set = { {0, -13}, {5, -11}, {-5, -11}, {0, -12} } },
	[14] = { .set = { {0, -5}, {5, -7}, {-5, -7}, {0, -7} } },
	[15] = { .set = { {-3, -5}, {4, -7}, {-5, -4}, {-1, -6} } },
	[16] = { .set = { {-6, -10}, {1, -12}, {-8, -9}, {-3, -11} } },
	[17] = { .set = { {-7, -4}, {-3, -8}, {-8, -4}, {-5, -6} } },
	[18] = { .set = { {-5, -4}, {-2, -7}, {-2, -2}, {-1, -5} } },
	[19] = { .set = { {-8, -10}, {-3, -11}, {-3, -7}, {-3, -10} } },
	[20] = { .set = { {-8, -1}, {-5, -5}, {-5, -1}, {-4, -4} } },
	[21] = { .set = { {-4, -3}, {-6, -5}, {3, -3}, {-1, -5} } },
	[22] = { .set = { {-6, -8}, {-8, -8}, {1, -5}, {-3, -8} } },
	[23] = { .set = { {-6, 1}, {-8, -1}, {0, 1}, {-3, -2} } },
	[24] = { .set = { {-1, -2}, {-6, -4}, {4, -4}, {-1, -5} } },
	[25] = { .set = { {-1, -7}, {-6, -8}, {4, -8}, {-1, -10} } },
	[26] = { .set = { {-1, 2}, {-6, 0}, {4, 0}, {-1, -2} } },
	[27] = { .set = { {3, -3}, {5, -5}, {-4, -3}, {0, -5} } },
	[28] = { .set = { {5, -8}, {7, -8}, {-2, -5}, {2, -8} } },
	[29] = { .set = { {5, 1}, {7, -1}, {-1, 1}, {2, -2} } },
	[30] = { .set = { {4, -4}, {1, -7}, {1, -2}, {0, -5} } },
	[31] = { .set = { {7, -10}, {2, -11}, {2, -7}, {2, -10} } },
	[32] = { .set = { {7, -1}, {4, -5}, {4, -1}, {3, -4} } },
	[33] = { .set = { {2, -5}, {-5, -7}, {4, -4}, {0, -6} } },
	[34] = { .set = { {3, -10}, {-4, -12}, {5, -9}, {0, -11} } },
	[35] = { .set = { {4, -4}, {0, -8}, {5, -4}, {2, -6} } },
	[36] = { .set = { {0, -7}, {5, -6}, {-5, -6}, {0, -6} } },
	[37] = { .set = { {0, -13}, {5, -11}, {-5, -11}, {0, -12} } },
	[38] = { .set = { {0, -5}, {5, -7}, {-5, -7}, {0, -7} } },
	[39] = { .set = { {-3, -5}, {4, -7}, {-5, -4}, {-1, -6} } },
	[40] = { .set = { {-4, -10}, {3, -12}, {-6, -9}, {-1, -11} } },
	[41] = { .set = { {-5, -4}, {-1, -8}, {-6, -4}, {-3, -6} } },
	[42] = { .set = { {-5, -4}, {-2, -7}, {-2, -2}, {-1, -5} } },
	[43] = { .set = { {-8, -10}, {-3, -11}, {-3, -7}, {-3, -10} } },
	[44] = { .set = { {-8, -1}, {-5, -5}, {-5, -1}, {-4, -4} } },
	[45] = { .set = { {-4, -3}, {-6, -5}, {3, -3}, {-1, -5} } },
	[46] = { .set = { {-6, -8}, {-8, -8}, {1, -5}, {-3, -8} } },
	[47] = { .set = { {-6, 1}, {-8, -1}, {0, 1}, {-3, -2} } },
	[48] = { .set = { {-1, -2}, {-6, -4}, {4, -4}, {-1, -5} } },
	[49] = { .set = { {-1, -7}, {-6, -8}, {4, -8}, {-1, -10} } },
	[50] = { .set = { {-1, 2}, {-6, 0}, {4, 0}, {-1, -2} } },
	[51] = { .set = { {3, -3}, {5, -5}, {-4, -3}, {0, -5} } },
	[52] = { .set = { {5, -8}, {7, -8}, {-2, -5}, {2, -8} } },
	[53] = { .set = { {5, 1}, {7, -1}, {-1, 1}, {2, -2} } },
	[54] = { .set = { {4, -4}, {1, -7}, {1, -2}, {0, -5} } },
	[55] = { .set = { {7, -10}, {2, -11}, {2, -7}, {2, -10} } },
	[56] = { .set = { {7, -1}, {4, -5}, {4, -1}, {3, -4} } },
	[57] = { .set = { {2, -5}, {-5, -7}, {4, -4}, {0, -6} } },
	[58] = { .set = { {3, -10}, {-4, -12}, {5, -9}, {0, -11} } },
	[59] = { .set = { {4, -4}, {0, -8}, {5, -4}, {2, -6} } },
	[60] = { .set = { {0, -7}, {5, -6}, {-5, -6}, {0, -6} } },
	[61] = { .set = { {0, -13}, {5, -11}, {-5, -11}, {0, -12} } },
	[62] = { .set = { {0, -5}, {5, -7}, {-5, -7}, {0, -7} } },
	[63] = { .set = { {-3, -5}, {4, -7}, {-5, -4}, {-1, -6} } },
	[64] = { .set = { {-4, -10}, {3, -12}, {-6, -9}, {-1, -11} } },
	[65] = { .set = { {-5, -4}, {-1, -8}, {-6, -4}, {-3, -6} } },
	[66] = { .set = { {-5, -4}, {-2, -7}, {-2, -2}, {-1, -5} } },
	[67] = { .set = { {-8, -10}, {-3, -11}, {-3, -7}, {-3, -10} } },
	[68] = { .set = { {-8, -1}, {-5, -5}, {-5, -1}, {-4, -4} } },
	[69] = { .set = { {-4, -3}, {-6, -5}, {3, -3}, {-1, -5} } },
	[70] = { .set = { {-6, -8}, {-8, -8}, {1, -5}, {-3, -8} } },
	[71] = { .set = { {-6, 1}, {-8, -1}, {0, 1}, {-3, -2} } },
	[72] = { .set = { {-3, -10}, {-7, -9}, {3, -12}, {-2, -11} } },
	[73] = { .set = { {1, -10}, {-5, -12}, {5, -9}, {0, -11} } },
	[74] = { .set = { {-1, -19}, {-6, -20}, {4, -20}, {-1, -20} } },
	[75] = { .set = { {-1, -7}, {-6, -9}, {4, -9}, {-1, -10} } },
	[76] = { .set = { {2, -10}, {4, -9}, {-4, -11}, {0, -11} } },
	[77] = { .set = { {3, -9}, {4, -11}, {-4, -8}, {1, -10} } },
	[78] = { .set = { {6, -18}, {7, -20}, {-1, -18}, {3, -19} } },
	[79] = { .set = { {3, -8}, {5, -11}, {-4, -8}, {-1, -10} } },
	[80] = { .set = { {5, -10}, {1, -12}, {1, -8}, {0, -10} } },
	[81] = { .set = { {5, -9}, {2, -13}, {1, -7}, {1, -10} } },
	[82] = { .set = { {11, -18}, {7, -22}, {7, -17}, {7, -19} } },
	[83] = { .set = { {5, -9}, {1, -13}, {1, -8}, {1, -10} } },
	[84] = { .set = { {1, -11}, {-5, -10}, {4, -11}, {0, -11} } },
	[85] = { .set = { {1, -10}, {-4, -12}, {4, -8}, {-1, -11} } },
	[86] = { .set = { {3, -18}, {0, -20}, {7, -17}, {1, -19} } },
	[87] = { .set = { {2, -9}, {-3, -11}, {4, -9}, {-1, -10} } },
	[88] = { .set = { {-1, -10}, {5, -9}, {-5, -11}, {0, -10} } },
	[89] = { .set = { {-1, -10}, {4, -12}, {-6, -11}, {-1, -11} } },
	[90] = { .set = { {-1, -19}, {4, -18}, {-6, -18}, {-1, -18} } },
	[91] = { .set = { {-1, -10}, {4, -10}, {-6, -10}, {-1, -11} } },
	[92] = { .set = { {-3, -11}, {3, -10}, {-6, -11}, {-2, -11} } },
	[93] = { .set = { {-3, -10}, {2, -12}, {-6, -8}, {-1, -11} } },
	[94] = { .set = { {-5, -18}, {-2, -20}, {-9, -17}, {-3, -19} } },
	[95] = { .set = { {-4, -9}, {1, -11}, {-6, -9}, {-1, -10} } },
	[96] = { .set = { {-7, -10}, {-3, -12}, {-3, -8}, {-2, -10} } },
	[97] = { .set = { {-7, -9}, {-4, -13}, {-3, -7}, {-3, -10} } },
	[98] = { .set = { {-13, -18}, {-9, -22}, {-9, -17}, {-9, -19} } },
	[99] = { .set = { {-7, -9}, {-3, -13}, {-3, -8}, {-3, -10} } },
	[100] = { .set = { {-4, -10}, {-6, -9}, {2, -11}, {-2, -11} } },
	[101] = { .set = { {-5, -9}, {-6, -11}, {2, -8}, {-3, -10} } },
	[102] = { .set = { {-8, -18}, {-9, -20}, {-1, -18}, {-5, -19} } },
	[103] = { .set = { {-5, -8}, {-7, -11}, {2, -8}, {-1, -10} } },
	[104] = { .set = { {-3, -10}, {-7, -9}, {3, -12}, {-2, -11} } },
	[105] = { .set = { {1, -10}, {-5, -12}, {5, -9}, {0, -11} } },
	[106] = { .set = { {-1, -7}, {-6, -9}, {4, -9}, {-1, -10} } },
	[107] = { .set = { {2, -10}, {4, -9}, {-4, -11}, {0, -11} } },
	[108] = { .set = { {3, -9}, {4, -11}, {-4, -8}, {1, -10} } },
	[109] = { .set = { {3, -8}, {5, -11}, {-4, -8}, {-1, -10} } },
	[110] = { .set = { {5, -10}, {1, -12}, {1, -8}, {0, -10} } },
	[111] = { .set = { {5, -9}, {2, -13}, {1, -7}, {1, -10} } },
	[112] = { .set = { {5, -9}, {1, -13}, {1, -8}, {1, -10} } },
	[113] = { .set = { {1, -11}, {-5, -10}, {4, -11}, {0, -11} } },
	[114] = { .set = { {1, -10}, {-4, -12}, {4, -8}, {-1, -11} } },
	[115] = { .set = { {2, -9}, {-3, -11}, {4, -9}, {-1, -10} } },
	[116] = { .set = { {-1, -10}, {5, -9}, {-5, -11}, {0, -10} } },
	[117] = { .set = { {-1, -10}, {4, -12}, {-6, -11}, {-1, -11} } },
	[118] = { .set = { {-1, -10}, {4, -10}, {-6, -10}, {-1, -11} } },
	[119] = { .set = { {-3, -11}, {3, -10}, {-6, -11}, {-2, -11} } },
	[120] = { .set = { {-3, -10}, {2, -12}, {-6, -8}, {-1, -11} } },
	[121] = { .set = { {-4, -9}, {1, -11}, {-6, -9}, {-1, -10} } },
	[122] = { .set = { {-7, -10}, {-3, -12}, {-3, -8}, {-2, -10} } },
	[123] = { .set = { {-7, -9}, {-4, -13}, {-3, -7}, {-3, -10} } },
	[124] = { .set = { {-7, -9}, {-3, -13}, {-3, -8}, {-3, -10} } },
	[125] = { .set = { {-4, -10}, {-6, -9}, {2, -11}, {-2, -11} } },
	[126] = { .set = { {-5, -9}, {-6, -11}, {2, -8}, {-3, -10} } },
	[127] = { .set = { {-5, -8}, {-7, -11}, {2, -8}, {-1, -10} } },
	[128] = { .set = { {-4, -3}, {-4, -6}, {2, -3}, {-1, -5} } },
	[129] = { .set = { {-5, -1}, {-4, -4}, {2, -2}, {-1, -3} } },
	[130] = { .set = { {0, -17}, {-5, -14}, {5, -14}, {0, -15} } },
	[131] = { .set = { {-2, -16}, {2, -18}, {-6, -13}, {-3, -15} } },
	[132] = { .set = { {-1, -15}, {-2, -17}, {-4, -11}, {-4, -13} } },
	[133] = { .set = { {-1, -15}, {-5, -16}, {1, -11}, {-4, -11} } },
	[134] = { .set = { {0, -15}, {5, -9}, {-5, -9}, {0, -11} } },
	[135] = { .set = { {0, -15}, {4, -16}, {-2, -11}, {3, -11} } },
	[136] = { .set = { {0, -15}, {1, -17}, {3, -11}, {3, -13} } },
	[137] = { .set = { {1, -16}, {-3, -18}, {5, -13}, {2, -15} } },
	[138] = { .set = { {-3, -10}, {-7, -9}, {3, -12}, {-2, -11} } },
	[139] = { .set = { {1, -10}, {-5, -12}, {5, -9}, {0, -11} } },
	[140] = { .set = { {-1, -19}, {-6, -20}, {4, -20}, {-1, -20} } },
	[141] = { .set = { {-1, -7}, {-6, -9}, {4, -9}, {-1, -10} } },
	[142] = { .set = { {2, -10}, {4, -9}, {-4, -11}, {0, -11} } },
	[143] = { .set = { {3, -9}, {4, -11}, {-4, -8}, {1, -10} } },
	[144] = { .set = { {6, -18}, {7, -20}, {-1, -18}, {3, -19} } },
	[145] = { .set = { {3, -8}, {5, -11}, {-4, -8}, {-1, -10} } },
	[146] = { .set = { {5, -10}, {1, -12}, {1, -8}, {0, -10} } },
	[147] = { .set = { {5, -9}, {2, -13}, {1, -7}, {1, -10} } },
	[148] = { .set = { {11, -18}, {7, -22}, {7, -17}, {7, -19} } },
	[149] = { .set = { {5, -9}, {1, -13}, {1, -8}, {1, -10} } },
	[150] = { .set = { {1, -11}, {-5, -10}, {4, -11}, {0, -11} } },
	[151] = { .set = { {1, -10}, {-4, -12}, {4, -8}, {-1, -11} } },
	[152] = { .set = { {3, -18}, {0, -20}, {7, -17}, {1, -19} } },
	[153] = { .set = { {2, -9}, {-3, -11}, {4, -9}, {-1, -10} } },
	[154] = { .set = { {-1, -10}, {5, -9}, {-5, -11}, {0, -10} } },
	[155] = { .set = { {-1, -10}, {4, -12}, {-6, -11}, {-1, -11} } },
	[156] = { .set = { {-1, -19}, {4, -18}, {-6, -18}, {-1, -18} } },
	[157] = { .set = { {-1, -10}, {4, -10}, {-6, -10}, {-1, -11} } },
	[158] = { .set = { {-3, -11}, {3, -10}, {-6, -11}, {-2, -11} } },
	[159] = { .set = { {-3, -10}, {2, -12}, {-6, -8}, {-1, -11} } },
	[160] = { .set = { {-5, -18}, {-2, -20}, {-9, -17}, {-3, -19} } },
	[161] = { .set = { {-4, -9}, {1, -11}, {-6, -9}, {-1, -10} } },
	[162] = { .set = { {-7, -10}, {-3, -12}, {-3, -8}, {-2, -10} } },
	[163] = { .set = { {-7, -9}, {-4, -13}, {-3, -7}, {-3, -10} } },
	[164] = { .set = { {-13, -18}, {-9, -22}, {-9, -17}, {-9, -19} } },
	[165] = { .set = { {-7, -9}, {-3, -13}, {-3, -8}, {-3, -10} } },
	[166] = { .set = { {-4, -10}, {-6, -9}, {2, -11}, {-2, -11} } },
	[167] = { .set = { {-5, -9}, {-6, -11}, {2, -8}, {-3, -10} } },
	[168] = { .set = { {-8, -18}, {-9, -20}, {-1, -18}, {-5, -19} } },
	[169] = { .set = { {-5, -8}, {-7, -11}, {2, -8}, {-1, -10} } },
	[170] = { .set = { {1, -10}, {-5, -12}, {5, -9}, {0, -11} } },
	[171] = { .set = { {-5, -9}, {-6, -11}, {2, -8}, {-3, -10} } },
	[172] = { .set = { {-7, -9}, {-4, -13}, {-3, -7}, {-3, -10} } },
	[173] = { .set = { {-3, -10}, {2, -12}, {-6, -8}, {-1, -11} } },
	[174] = { .set = { {-1, -10}, {4, -12}, {-6, -11}, {-1, -11} } },
	[175] = { .set = { {1, -10}, {-4, -12}, {4, -8}, {-1, -11} } },
	[176] = { .set = { {5, -9}, {2, -13}, {1, -7}, {1, -10} } },
	[177] = { .set = { {3, -9}, {4, -11}, {-4, -8}, {1, -10} } },
	[178] = { .set = { {-1, -19}, {-6, -20}, {4, -20}, {-1, -20} } },
	[179] = { .set = { {5, -18}, {6, -20}, {-2, -18}, {2, -19} } },
	[180] = { .set = { {9, -18}, {5, -22}, {5, -17}, {5, -19} } },
	[181] = { .set = { {2, -18}, {-1, -20}, {6, -17}, {0, -19} } },
	[182] = { .set = { {-1, -19}, {4, -18}, {-6, -18}, {-1, -18} } },
	[183] = { .set = { {-3, -18}, {0, -20}, {-7, -17}, {-1, -19} } },
	[184] = { .set = { {-10, -18}, {-6, -22}, {-6, -17}, {-6, -19} } },
	[185] = { .set = { {-6, -18}, {-7, -20}, {1, -18}, {-3, -19} } },
	[186] = { .set = { {-1, -2}, {-6, -4}, {4, -4}, {-1, -5} } },
	[187] = { .set = { {-1, -4}, {-6, -5}, {4, -5}, {-1, -7} } },
	[188] = { .set = { {-1, 0}, {-6, -2}, {4, -2}, {-1, -4} } },
	[189] = { .set = { {3, -3}, {5, -5}, {-4, -3}, {0, -5} } },
	[190] = { .set = { {3, -7}, {5, -7}, {-4, -4}, {0, -7} } },
	[191] = { .set = { {3, -1}, {5, -3}, {-3, -1}, {0, -4} } },
	[192] = { .set = { {4, -4}, {1, -7}, {1, -2}, {0, -5} } },
	[193] = { .set = { {5, -7}, {0, -8}, {0, -4}, {0, -7} } },
	[194] = { .set = { {4, -2}, {1, -6}, {1, -2}, {0, -5} } },
	[195] = { .set = { {2, -5}, {-5, -7}, {4, -4}, {0, -6} } },
	[196] = { .set = { {2, -7}, {-5, -9}, {4, -6}, {-1, -8} } },
	[197] = { .set = { {2, -3}, {-2, -7}, {3, -3}, {0, -5} } },
	[198] = { .set = { {0, -7}, {5, -6}, {-5, -6}, {0, -6} } },
	[199] = { .set = { {0, -10}, {5, -8}, {-5, -8}, {0, -9} } },
	[200] = { .set = { {0, -2}, {5, -4}, {-5, -4}, {0, -4} } },
	[201] = { .set = { {-3, -5}, {4, -7}, {-5, -4}, {-1, -6} } },
	[202] = { .set = { {-3, -7}, {4, -9}, {-5, -6}, {0, -8} } },
	[203] = { .set = { {-3, -3}, {1, -7}, {-4, -3}, {-1, -5} } },
	[204] = { .set = { {-5, -4}, {-2, -7}, {-2, -2}, {-1, -5} } },
	[205] = { .set = { {-6, -7}, {-1, -8}, {-1, -4}, {-1, -7} } },
	[206] = { .set = { {-5, -2}, {-2, -6}, {-2, -2}, {-1, -5} } },
	[207] = { .set = { {-4, -3}, {-6, -5}, {3, -3}, {-1, -5} } },
	[208] = { .set = { {-4, -7}, {-6, -7}, {3, -4}, {-1, -7} } },
	[209] = { .set = { {-4, -1}, {-6, -3}, {2, -1}, {-1, -4} } },
	[210] = { .set = { {-1, -7}, {-6, -9}, {4, -9}, {-1, -10} } },
	[211] = { .set = { {-5, -8}, {-7, -11}, {2, -8}, {-1, -10} } },
	[212] = { .set = { {-7, -9}, {-3, -13}, {-3, -8}, {-3, -10} } },
	[213] = { .set = { {-4, -9}, {1, -11}, {-6, -9}, {-1, -10} } },
	[214] = { .set = { {-1, -10}, {4, -10}, {-6, -10}, {-1, -11} } },
	[215] = { .set = { {2, -9}, {-3, -11}, {4, -9}, {-1, -10} } },
	[216] = { .set = { {5, -9}, {1, -13}, {1, -8}, {1, -10} } },
	[217] = { .set = { {3, -8}, {5, -11}, {-4, -8}, {-1, -10} } },
	[218] = { .set = { {-1, -2}, {-6, -4}, {4, -4}, {-1, -5} } },
	[219] = { .set = { {-4, -3}, {-6, -5}, {3, -3}, {-1, -5} } },
	[220] = { .set = { {-5, -4}, {-2, -7}, {-2, -2}, {-1, -5} } },
	[221] = { .set = { {-3, -5}, {4, -7}, {-5, -4}, {-1, -6} } },
	[222] = { .set = { {0, -7}, {5, -6}, {-5, -6}, {0, -6} } },
	[223] = { .set = { {2, -5}, {-5, -7}, {4, -4}, {0, -6} } },
	[224] = { .set = { {4, -4}, {1, -7}, {1, -2}, {0, -5} } },
	[225] = { .set = { {3, -3}, {5, -5}, {-4, -3}, {0, -5} } },
};

static const ax_anim *const sAzurillAnimTable1[] = {
	sAzurillAnims_1_1,
	sAzurillAnims_1_2,
	sAzurillAnims_1_3,
	sAzurillAnims_1_4,
	sAzurillAnims_1_5,
	sAzurillAnims_1_6,
	sAzurillAnims_1_7,
	sAzurillAnims_1_8,
};

static const ax_anim *const sAzurillAnimTable2[] = {
	sAzurillAnims_2_1,
	sAzurillAnims_2_2,
	sAzurillAnims_2_3,
	sAzurillAnims_2_4,
	sAzurillAnims_2_5,
	sAzurillAnims_2_6,
	sAzurillAnims_2_7,
	sAzurillAnims_2_8,
};

static const ax_anim *const sAzurillAnimTable3[] = {
	sAzurillAnims_3_1,
	sAzurillAnims_3_2,
	sAzurillAnims_3_3,
	sAzurillAnims_3_4,
	sAzurillAnims_3_5,
	sAzurillAnims_3_6,
	sAzurillAnims_3_7,
	sAzurillAnims_3_8,
};

static const ax_anim *const sAzurillAnimTable4[] = {
	sAzurillAnims_4_1,
	sAzurillAnims_4_2,
	sAzurillAnims_4_3,
	sAzurillAnims_4_4,
	sAzurillAnims_4_5,
	sAzurillAnims_4_6,
	sAzurillAnims_4_7,
	sAzurillAnims_4_8,
};

static const ax_anim *const sAzurillAnimTable5[] = {
	sAzurillAnims_5_1,
	sAzurillAnims_5_2,
	sAzurillAnims_5_3,
	sAzurillAnims_5_4,
	sAzurillAnims_5_5,
	sAzurillAnims_5_6,
	sAzurillAnims_5_7,
	sAzurillAnims_5_8,
};

static const ax_anim *const sAzurillAnimTable6[] = {
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
	gAxSharedAnim_02363,
};

static const ax_anim *const sAzurillAnimTable7[] = {
	gAxSharedAnim_00398,
	gAxSharedAnim_00404,
	gAxSharedAnim_00415,
	gAxSharedAnim_00424,
	gAxSharedAnim_00436,
	gAxSharedAnim_00444,
	gAxSharedAnim_00454,
	gAxSharedAnim_00464,
};

static const ax_anim *const sAzurillAnimTable8[] = {
	sAzurillAnims_8_1,
	sAzurillAnims_8_2,
	sAzurillAnims_8_3,
	sAzurillAnims_8_4,
	sAzurillAnims_8_5,
	sAzurillAnims_8_6,
	sAzurillAnims_8_7,
	sAzurillAnims_8_8,
};

static const ax_anim *const sAzurillAnimTable9[] = {
	sAzurillAnims_9_1,
	sAzurillAnims_9_2,
	sAzurillAnims_9_3,
	sAzurillAnims_9_4,
	sAzurillAnims_9_5,
	sAzurillAnims_9_6,
	sAzurillAnims_9_7,
	sAzurillAnims_9_8,
};

static const ax_anim *const sAzurillAnimTable10[] = {
	gAxSharedAnim_00905,
	gAxSharedAnim_00918,
	gAxSharedAnim_00930,
	gAxSharedAnim_00942,
	gAxSharedAnim_00955,
	gAxSharedAnim_00965,
	gAxSharedAnim_00978,
	gAxSharedAnim_00993,
};

static const ax_anim *const sAzurillAnimTable11[] = {
	sAzurillAnims_11_1,
	sAzurillAnims_11_2,
	sAzurillAnims_11_3,
	sAzurillAnims_11_4,
	sAzurillAnims_11_5,
	sAzurillAnims_11_6,
	sAzurillAnims_11_7,
	sAzurillAnims_11_8,
};

static const ax_anim *const sAzurillAnimTable12[] = {
	gAxSharedAnim_01337,
	gAxSharedAnim_01414,
	gAxSharedAnim_01392,
	gAxSharedAnim_01380,
	gAxSharedAnim_01379,
	gAxSharedAnim_01368,
	gAxSharedAnim_01354,
	gAxSharedAnim_01338,
};

static const ax_anim *const sAzurillAnimTable13[] = {
	gAxSharedAnim_01422,
	gAxSharedAnim_01464,
	gAxSharedAnim_01461,
	gAxSharedAnim_01456,
	gAxSharedAnim_01446,
	gAxSharedAnim_01443,
	gAxSharedAnim_01438,
	gAxSharedAnim_01429,
};

static const ax_anim *const *const sAxAnimationsAzurill[] = {
	sAzurillAnimTable1,
	sAzurillAnimTable2,
	sAzurillAnimTable3,
	sAzurillAnimTable4,
	sAzurillAnimTable5,
	sAzurillAnimTable6,
	sAzurillAnimTable7,
	sAzurillAnimTable8,
	sAzurillAnimTable9,
	sAzurillAnimTable10,
	sAzurillAnimTable11,
	sAzurillAnimTable12,
	sAzurillAnimTable13,
};

static const ax_sprite *const sAxSpritesAzurill[] = {
	sAzurillSprites1,
	sAzurillSprites2,
	sAzurillSprites3,
	sAzurillSprites4,
	sAzurillSprites5,
	sAzurillSprites6,
	sAzurillSprites7,
	sAzurillSprites8,
	sAzurillSprites9,
	sAzurillSprites10,
	sAzurillSprites11,
	sAzurillSprites12,
	sAzurillSprites13,
	sAzurillSprites14,
	sAzurillSprites15,
	sAzurillSprites16,
	sAzurillSprites17,
	sAzurillSprites18,
	sAzurillSprites19,
	sAzurillSprites20,
	sAzurillSprites21,
	sAzurillSprites22,
	sAzurillSprites23,
	sAzurillSprites24,
	sAzurillSprites25,
	sAzurillSprites26,
	sAzurillSprites27,
	sAzurillSprites28,
	sAzurillSprites29,
	sAzurillSprites30,
	sAzurillSprites31,
	sAzurillSprites32,
	sAzurillSprites33,
	sAzurillSprites34,
	sAzurillSprites35,
	sAzurillSprites36,
	sAzurillSprites37,
	sAzurillSprites38,
	sAzurillSprites39,
	sAzurillSprites40,
	sAzurillSprites41,
	sAzurillSprites42,
	sAzurillSprites43,
	sAzurillSprites44,
	sAzurillSprites45,
};

static const axmain sAxMainAzurill = {
	.poses = sAxPosesAzurill,
	.animations = sAxAnimationsAzurill,
	.animCount = ARRAY_COUNT(sAxAnimationsAzurill),
	.spriteData = sAxSpritesAzurill,
	.positions = sAxPositionsAzurill,
};
