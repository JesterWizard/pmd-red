#ifndef GUARD_THOUGHT_BUBBLE_H
#define GUARD_THOUGHT_BUBBLE_H

#include "gba/types.h"

#define THOUGHT_BUBBLE_SCENARIO_NONE 0xFFFF

/* Pack SCENARIO_MAIN (main, sub) for THOUGHT_BUBBLE_FLAG_LIST keys. */
#define THOUGHT_BUBBLE_SCENARIO_KEY(main, sub) ((u16)(((main) << 8) | ((sub) & 0xFF)))

u16 GetLatestThoughtBubbleScenarioKey(void);
void ThoughtBubble_NotifyScenarioMain(s32 main, s32 sub);
void ThoughtBubble_Reset(void);
bool8 ThoughtBubble_IsVisible(void);
void ThoughtBubble_Show(void);
void ThoughtBubble_Hide(void);
void ThoughtBubble_Draw(void);

#endif /* GUARD_THOUGHT_BUBBLE_H */
