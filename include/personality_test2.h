#ifndef GUARD_PERSONALITY_TEST2_H
#define GUARD_PERSONALITY_TEST2_H

#include "constants/personality_test.h"
#include "structs/menu.h"
#include "structs/str_text.h"
#include "text_3.h"

// PartnerArray sized for NUM_STARTERS_MAX (vanilla + optional PMD2 casting)
struct PersonalityStruct_203B404
{
    /* 0x0 */ s16 StarterID;
    /* 0x2 */ s16 PartnerArray[NUM_STARTERS_MAX];
    u8 unk16;
    /* 0x18 */ MenuHeaderWindow s18;
};

extern const s16 gPmd2CastingStarters[NUM_PMD2_CASTING_STARTERS];

void CreatePartnerSelectionMenu(s16 starterID);
void CreateStarterSelectionMenu(void);
u16 HandlePartnerSelectionInput(void);

void sub_803CE6C(void);

#endif // GUARD_PERSONALITY_TEST2_H
