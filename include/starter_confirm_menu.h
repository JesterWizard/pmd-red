#ifndef GUARD_STARTER_CONFIRM_MENU_H
#define GUARD_STARTER_CONFIRM_MENU_H

#include "gba/types.h"

enum StarterConfirmMenuInputRet
{
    StarterConfirmMenu_INPUTRET_NONE,
    StarterConfirmMenu_INPUTRET_LEFTRIGHT,
    StarterConfirmMenu_INPUTRET_BACK,
    StarterConfirmMenu_INPUTRET_ACCEPT,
};

/* Preview Lv5 stats / features / moves / info for a species. A = accept (or move info on Moves), B = back. */
bool8 StarterConfirmMenu_Create(s16 species);
u32 StarterConfirmMenu_Input(void);
void StarterConfirmMenu_Destroy(void);

#endif // GUARD_STARTER_CONFIRM_MENU_H
