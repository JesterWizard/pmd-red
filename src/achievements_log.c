#include "global.h"
#include "globaldata.h"
#include "constants/input.h"
#include "achievements.h"
#include "achievements_log.h"
#include "input.h"
#include "memory.h"
#include "menu_input.h"
#include "music_util.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"

static EWRAM_INIT MenuHeaderWindow *sAchievementsLog = { NULL };

#include "data/achievements_log.h"

static void UpdateAchievementsHeader(void);
static void DisplayAchievementsList(void);

bool8 CreateAchievementsScreen(u32 kind)
{
    sAchievementsLog = MemoryAlloc(sizeof(*sAchievementsLog), MEMALLOC_GROUP_8);
    sAchievementsLog->m.menuWinId = kind;
    sAchievementsLog->m.menuWindow = &sAchievementsLog->m.windows.id[kind];
    RestoreSavedWindows(&sAchievementsLog->m.windows);
    sAchievementsLog->m.windows.id[sAchievementsLog->m.menuWinId] = sAchievementsWindow;
    sAchievementsLog->m.menuWindow->header = &sAchievementsLog->header;

    ResetUnusedInputStruct();
    ShowWindows(&sAchievementsLog->m.windows, TRUE, TRUE);
    CreateMenuOnWindow(&sAchievementsLog->m.input, ACH_MAX, 8, kind);
    UpdateAchievementsHeader();
    DisplayAchievementsList();
    return TRUE;
}

u32 HandleAchievementsInput(bool8 allowInput)
{
    if (!allowInput) {
        sub_8013660(&sAchievementsLog->m.input);
        return 0;
    }

    switch (GetKeyPress(&sAchievementsLog->m.input)) {
        case INPUT_B_BUTTON:
            PlayMenuSoundEffect(MENU_SFX_BACK);
            return 2;
        case INPUT_A_BUTTON:
            PlayMenuSoundEffect(MENU_SFX_ACCEPT);
            return 3;
        default:
            if (MenuCursorUpdateOnlyLeftRight(&sAchievementsLog->m.input)) {
                UpdateAchievementsHeader();
                DisplayAchievementsList();
                return 1;
            }
            return 0;
    }
}

void CleanAchievementsScreen(void)
{
    if (sAchievementsLog != NULL) {
        sAchievementsLog->m.windows.id[sAchievementsLog->m.menuWinId] = sAchievementsWindowClear;
        ResetUnusedInputStruct();
        ShowWindows(&sAchievementsLog->m.windows, TRUE, TRUE);
        MemoryFree(sAchievementsLog);
        sAchievementsLog = NULL;
    }
}

static void UpdateAchievementsHeader(void)
{
    sAchievementsLog->header.count = sAchievementsLog->m.input.pagesCount;
    sAchievementsLog->header.currId = sAchievementsLog->m.input.currPage;
    sAchievementsLog->header.width = 12;
    sAchievementsLog->header.f3 = 0;

    UPDATE_MENU_WINDOW_HEIGHT(sAchievementsLog->m);
}

static void DisplayAchievementsList(void)
{
    s32 i;
    s32 r4;
    s32 r6;
    u8 id;

    CallPrepareTextbox_8008C54(sAchievementsLog->m.menuWinId);
    sub_80073B8(sAchievementsLog->m.menuWinId);
    r4 = sAchievementsLog->m.input.currPage * 8;
    r6 = r4 + 10;
    PrintStringOnWindow(r6, 0, sAchievementsTitle, sAchievementsLog->m.menuWinId, 0);

    r4 += 4;
    r6 = r4 + (sAchievementsLog->header.width * 8);
    PrintNumOnWindow(r6, 0, sAchievementsLog->m.input.currPage + 1, 1, 7, sAchievementsLog->m.menuWinId);

    for (i = 0; i < sAchievementsLog->m.input.currPageEntries; i++) {
        id = (sAchievementsLog->m.input.currPage * sAchievementsLog->m.input.entriesPerPage) + i;
        if (id >= ACH_MAX)
            break;

        if (GetAchievementUnlocked(id)) {
            switch (id) {
                case ACH_ENEMIES_1000:
                    gFormatArgs[0] = GetAchievementEnemiesDefeated();
                    break;
                case ACH_CRITS_100:
                    gFormatArgs[0] = GetAchievementCriticalHits();
                    break;
                default:
                    break;
            }
            PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&sAchievementsLog->m.input, i),
                                         GetAchievementName(id), sAchievementsLog->m.menuWinId, 0);
        }
        else {
            PrintStringOnWindow(8, GetMenuEntryYCoord(&sAchievementsLog->m.input, i),
                                sAchievementsPlaceholder, sAchievementsLog->m.menuWinId, 0);
        }
    }
    sub_80073E0(sAchievementsLog->m.menuWinId);
}
