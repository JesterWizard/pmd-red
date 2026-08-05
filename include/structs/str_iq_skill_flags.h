#ifndef GUARD_STR_IQ_SKILL_FLAGS_H
#define GUARD_STR_IQ_SKILL_FLAGS_H

/* 8 bytes = 64 skill bits (vanilla was 3/24; earlier custom expand was 4/32). */
#define NUM_PICKED_IQ_SKILLS 8
#define IQ_SKILL_FLAGS_BIT_COUNT (NUM_PICKED_IQ_SKILLS * 8)

typedef struct IqSkillFlags
{
    /* 0x0 */ u8 flags[NUM_PICKED_IQ_SKILLS];
} IqSkillFlags;

#endif // GUARD_STR_IQ_SKILL_FLAGS_H
