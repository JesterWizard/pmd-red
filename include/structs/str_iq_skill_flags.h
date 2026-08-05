#ifndef GUARD_STR_IQ_SKILL_FLAGS_H
#define GUARD_STR_IQ_SKILL_FLAGS_H

#define NUM_PICKED_IQ_SKILLS 4

// size: 0x4 (32 skill bits; was vanilla 3 / 24)
typedef struct IqSkillFlags
{
    /* 0x0 */ u8 flags[NUM_PICKED_IQ_SKILLS];
} IqSkillFlags;

#endif // GUARD_STR_IQ_SKILL_FLAGS_H
