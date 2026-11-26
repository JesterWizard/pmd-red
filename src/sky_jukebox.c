/*
 * Explorers of Sky demake: the Sky Jukebox (top menu > Other).
 *
 * Lists EoS's 141 Sky Jukebox tracks in EoS's order and with EoS's names
 * (src/data/sky_jukebox_data.h, tools/eos_music/convert_eos_bgm.py). The
 * songs are EoS's sequences on Red's instruments; the ones not used by the
 * story are appended after Red's song table.
 *
 *   A: play   SELECT/START: stop   Left/Right: page   B: exit
 */
#include "global.h"

#ifdef SKY_STORY

#include "globaldata.h"
#include "constants/input.h"
#include "constants/main_menu.h"
#include "input.h"
#include "memory.h"
#include "menu_input.h"
#include "music.h"
#include "music_util.h"
#include "sky_jukebox.h"
#include "sky_story.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"

#define SKY_JUKEBOX_DATA
#include "data/sky_jukebox_data.h"

#define JUKEBOX_PER_PAGE 6
#define JUKEBOX_LABEL_LEN 48

struct SkyJukebox
{
    MenuWindow menu;
    u8 labels[JUKEBOX_PER_PAGE][JUKEBOX_LABEL_LEN];
    u8 pageLabel[16];
    u8 status[64];
    s16 playing; /* track index, -1 = stopped */
};

static EWRAM_INIT struct SkyJukebox *sJukebox = {NULL};

static const WindowTemplate sJukeboxDummyWindow = {
    0, 3, 0, 0, 0, 0, 0, 0, NULL
};

/* The title screen's 8bpp art sits above the window tiles: keep the two
 * windows small (6 entries per page, about 330 tiles with the status
 * window), like Red's Continue screen; 7 entries overran into the art. */
static const WindowTemplate sJukeboxListWindow = {
    0, 3, 2, 1, 24, 12, 12, 0, NULL
};

static const WindowTemplate sJukeboxStatusWindow = {
    0, 3, 2, 15, 24, 3, 3, 0, NULL
};

static void DrawJukeboxList(void)
{
    s32 i;
    s32 first = sJukebox->menu.input.currPage * sJukebox->menu.input.entriesPerPage;

    UPDATE_MENU_WINDOW_HEIGHT(sJukebox->menu);
    sJukebox->menu.input.firstEntryY = DEFAULT_MENU_ENTRY_HEIGHT;
    sJukebox->menu.input.leftRightArrowsPos.y = (sJukebox->menu.windows.id[0].pos.y + 1) * 8 - 2 + 8;
    CallPrepareTextbox_8008C54(0);
    sub_80073B8(0);
    PrintFormattedStringOnWindow(8, 0, _("{COLOR YELLOW}Sky Jukebox{RESET}"), 0, 0);
    for (i = 0; i < sJukebox->menu.input.currPageEntries; i++) {
        s32 track = first + i;
        sprintfStatic(sJukebox->labels[i], _("%03d: %s"), track + 1, sSkyJukeboxTracks[track].name);
        PrintFormattedStringOnWindow(8, GetMenuEntryYCoord(&sJukebox->menu.input, i), sJukebox->labels[i], 0, 0);
    }
    sprintfStatic(sJukebox->pageLabel, _("%d/%d"), sJukebox->menu.input.currPage + 1, sJukebox->menu.input.pagesCount);
    PrintFormattedStringOnWindow(sJukebox->menu.windows.id[0].width * 8 - GetStringLineWidth(sJukebox->pageLabel) - 4,
                                 0, sJukebox->pageLabel, 0, 0);
    sub_80073E0(0);
}

static void DrawJukeboxStatus(void)
{
    CallPrepareTextbox_8008C54(1);
    sub_80073B8(1);
    if (sJukebox->playing >= 0)
        sprintfStatic(sJukebox->status, _("Now playing: %s"), sSkyJukeboxTracks[sJukebox->playing].name);
    else
        sprintfStatic(sJukebox->status, _("Select a Song"));
    PrintFormattedStringOnWindow(4, 0, sJukebox->status, 1, 0);
    PrintFormattedStringOnWindow(4, 12, _("{COLOR CYAN}A{RESET}: Play  {COLOR CYAN}SELECT{RESET}: Stop  {COLOR CYAN}B{RESET}: Exit"), 1, 0);
    sub_80073E0(1);
}

void CreateSkyJukeboxMenu(void)
{
    s32 i;

    if (sJukebox == NULL) {
        sJukebox = MemoryAlloc(sizeof(struct SkyJukebox), MEMALLOC_GROUP_8);
        MemoryFill8(sJukebox, 0, sizeof(struct SkyJukebox));
        sJukebox->playing = -1;
    }
    sJukebox->menu.menuWinId = 0;
    sJukebox->menu.menuWindow = &sJukebox->menu.windows.id[0];
    for (i = 0; i < MAX_WINDOWS; i++)
        sJukebox->menu.windows.id[i] = sJukeboxDummyWindow;
    sJukebox->menu.windows.id[0] = sJukeboxListWindow;
    sJukebox->menu.windows.id[1] = sJukeboxStatusWindow;

    ResetUnusedInputStruct();
    ShowWindows(&sJukebox->menu.windows, TRUE, TRUE);
    CreateMenuOnWindow(&sJukebox->menu.input, SKY_JUKEBOX_TRACKS, JUKEBOX_PER_PAGE, 0);
    DrawJukeboxList();
    DrawJukeboxStatus();
    AddMenuCursorSprite(&sJukebox->menu.input);
}

void CleanSkyJukeboxMenu(void)
{
    ResetUnusedInputStruct();
    ShowWindows(NULL, TRUE, TRUE);
    if (sJukebox != NULL) {
        MemoryFree(sJukebox);
        sJukebox = NULL;
    }
}

u32 UpdateSkyJukeboxMenu(void)
{
    s32 track;

    switch (GetKeyPress(&sJukebox->menu.input)) {
        case INPUT_B_BUTTON:
            PlayMenuSoundEffect(MENU_SFX_BACK);
            /* EoS goes back to the top menu theme (TOP_MENU_RETURN_MUSIC_ID). */
            StartNewBGM(MUS_SKY_TOP_MENU_THEME);
            return MENU_MAIN_SCREEN;
        case INPUT_A_BUTTON:
            track = GET_CURRENT_MENU_ENTRY(sJukebox->menu.input);
            sJukebox->playing = track;
            StopBGMusic();
            StartNewBGM(sSkyJukeboxTracks[track].song);
            DrawJukeboxStatus();
            break;
        case INPUT_SELECT_BUTTON:
        case INPUT_START_BUTTON:
            PlayMenuSoundEffect(MENU_SFX_BACK);
            sJukebox->playing = -1;
            StopBGMusic();
            DrawJukeboxStatus();
            break;
        default:
            if (MenuCursorUpdate(&sJukebox->menu.input, TRUE)) {
                DrawJukeboxList();
                DrawJukeboxStatus();
            }
            break;
    }
    AddMenuCursorSprite(&sJukebox->menu.input);
    return MENU_NO_SCREEN_CHANGE;
}

#endif /* SKY_STORY */
