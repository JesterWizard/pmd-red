#include "global.h"
#include "constants/main_menu.h"
#include "achievements_log.h"
#include "achievements_menu.h"
#include "input.h"
#include "text_1.h"

void CreateAchievementsMenu(void)
{
    CreateAchievementsScreen(0);
}

void CleanAchievementsMenu(void)
{
    ResetUnusedInputStruct();
    ShowWindows(NULL, TRUE, TRUE);
}

u32 UpdateAchievementsMenu(void)
{
    u32 nextMenu = MENU_NO_SCREEN_CHANGE;

    switch (HandleAchievementsInput(TRUE)) {
        case 0:
        case 1:
            break;
        case 2:
        case 3:
            CleanAchievementsScreen();
            nextMenu = MENU_MAIN_SCREEN;
        default:
            break;
    }
    return nextMenu;
}
