#include "global.h"
#include "globaldata.h"
#include "bg_palette_buffer.h"
#include "constants/emotions.h"
#include "constants/input.h"
#include "constants/monster.h"
#include "constants/type.h"
#include "menu_input.h"
#include "music_util.h"
#include "input.h"
#include "memory.h"
#include "palette_fade_util.h"
#include "personality_test2.h"
#include "pokemon.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"

EWRAM_INIT struct PersonalityStruct_203B404 *gUnknown_203B404 = {NULL};

#include "data/personality_test2.h"

static s32 GetValidPartners(void);
static s32 GetAllStarters(void);
static void nullsub_135(void);
static void PersonalityTest_DisplayPartnerSprite(void);
static void RedrawPartnerSelectionMenu(void);
static void SetupSelectionMenuWindows(void);

static void sub_803CEAC(void);
static void sub_803CECC(void);

static void SetupSelectionMenuWindows(void)
{
    gUnknown_203B404->s18.m.menuWinId = 0;
    gUnknown_203B404->s18.m.menuWindow = &gUnknown_203B404->s18.m.windows.id[0];

    gUnknown_203B404->s18.m.windows.id[0] = gUnknown_80F4290;
    gUnknown_203B404->s18.m.windows.id[1] = gUnknown_80F42A8;
    gUnknown_203B404->s18.m.windows.id[2] = gUnknown_80F4278;
    gUnknown_203B404->s18.m.windows.id[3] = gUnknown_80F4278;

    gUnknown_203B404->s18.m.menuWindow->header = &gUnknown_203B404->s18.header;

    gUnknown_203B404->s18.header.count = 1;
    gUnknown_203B404->s18.header.currId = 0;
    gUnknown_203B404->s18.header.width = 6;
    gUnknown_203B404->s18.header.f3 = 0;
    ResetUnusedInputStruct();
    ShowWindows(&gUnknown_203B404->s18.m.windows, TRUE, TRUE);
}

void CreatePartnerSelectionMenu(s16 starterID)
{
    s32 starterID_s32;
    starterID_s32 = starterID; // force an asr shift.. does lsr without it

    sub_803CEAC();
    gUnknown_203B404->StarterID = starterID_s32;
    SetupSelectionMenuWindows();
    CreateMenuOnWindow(&gUnknown_203B404->s18.m.input, GetValidPartners(), 10, gUnknown_203B404->s18.m.menuWinId);
    RedrawPartnerSelectionMenu();
    PersonalityTest_DisplayPartnerSprite();
}

void CreateStarterSelectionMenu(void)
{
    sub_803CEAC();
    gUnknown_203B404->StarterID = MONSTER_NONE;
    SetupSelectionMenuWindows();
    CreateMenuOnWindow(&gUnknown_203B404->s18.m.input, GetAllStarters(), 10, gUnknown_203B404->s18.m.menuWinId);
    RedrawPartnerSelectionMenu();
    PersonalityTest_DisplayPartnerSprite();
}

u16 HandlePartnerSelectionInput(void)
{
    s32 partnerID;
    bool8 pageChanged;

    partnerID = gUnknown_203B404->s18.m.input.menuIndex;
    gUnknown_203B404->unk16 = 0;

    if (GetKeyPress(&gUnknown_203B404->s18.m.input) == INPUT_A_BUTTON) {
        PlayMenuSoundEffect(MENU_SFX_ACCEPT);
        return gUnknown_203B404->PartnerArray[GET_CURRENT_MENU_ENTRY(gUnknown_203B404->s18.m.input)];
    }

    pageChanged = MenuCursorUpdate(&gUnknown_203B404->s18.m.input, TRUE);
    if (pageChanged)
        RedrawPartnerSelectionMenu();

    /* Page changes recreate windows (palette 15 fills); always restore the portrait. */
    if (pageChanged || partnerID != gUnknown_203B404->s18.m.input.menuIndex)
        PersonalityTest_DisplayPartnerSprite();

    if (gUnknown_203B404->unk16 != 0) {
        return -2;
    }
    return -1;
}

UNUSED static void sub_803CE34(bool8 cursorSprite)
{
    gUnknown_203B404->s18.m.input.totalEntriesCount = GetValidPartners();
    MenuUpdatePagesData(&gUnknown_203B404->s18.m.input);
    RedrawPartnerSelectionMenu();
    PersonalityTest_DisplayPartnerSprite();

    if (cursorSprite)
        AddMenuCursorSprite(&gUnknown_203B404->s18.m.input);
}

void sub_803CE6C(void)
{
    s32 i;

    /* Clear list + portrait (and any other) windows so nothing remains on screen. */
    for (i = 0; i < MAX_WINDOWS; i++)
        gUnknown_203B404->s18.m.windows.id[i] = gUnknown_80F4278;
    ResetUnusedInputStruct();
    ShowWindows(&gUnknown_203B404->s18.m.windows, TRUE, TRUE);
    sub_803CECC();
}

static void sub_803CEAC(void)
{
    gUnknown_203B404 = MemoryAlloc(sizeof(struct PersonalityStruct_203B404), MEMALLOC_GROUP_8);
    nullsub_135();
}

static void nullsub_135(void)
{
}

static void sub_803CECC(void)
{
    if (gUnknown_203B404 != NULL) {
        nullsub_135();
        MemoryFree(gUnknown_203B404);
        gUnknown_203B404 = NULL;
    }
}

static void RedrawPartnerSelectionMenu(void)
{
    u32 yCoord;
    const u8 *monName;
    s32 monCounter;
    s32 pageBase;

    UPDATE_MENU_WINDOW_HEIGHT(gUnknown_203B404->s18.m);

    CallPrepareTextbox_8008C54(gUnknown_203B404->s18.m.menuWinId);
    sub_80073B8(gUnknown_203B404->s18.m.menuWinId);
    PrintStringOnWindow(12, 0, gPartnerSelectionHeaderText, gUnknown_203B404->s18.m.menuWinId, 0);

    pageBase = gUnknown_203B404->s18.m.input.currPage * gUnknown_203B404->s18.m.input.entriesPerPage;
    monCounter = 0;
    while (monCounter < gUnknown_203B404->s18.m.input.currPageEntries) {
        yCoord = GetMenuEntryYCoord(&gUnknown_203B404->s18.m.input, monCounter);
        monName = GetMonSpecies(gUnknown_203B404->PartnerArray[pageBase + monCounter]);
        PrintStringOnWindow(8, yCoord, monName, gUnknown_203B404->s18.m.menuWinId, 0);
        monCounter++;
    }
    sub_80073E0(gUnknown_203B404->s18.m.menuWinId);
    gUnknown_203B404->unk16 = 1;
}

static void PersonalityTest_DisplayPartnerSprite(void)
{
    s32 partnerID;
    struct OpenedFile *faceFile;
    const u8 *gfx;
    const RGB_Struct *pal;
    s32 i;

    partnerID = gUnknown_203B404->PartnerArray[GET_CURRENT_MENU_ENTRY(gUnknown_203B404->s18.m.input)];

    CallPrepareTextbox_8008C54(1);
    sub_80073B8(1);

    faceFile = GetDialogueSpriteDataPtr(partnerID);
#define FACE_DATA ((PortraitGfx *)faceFile->data)

    /* Sync both the immediate BG palette buffer and the fade source buffer —
     * ground UI brightness updates call sub_8099E58 on palette 14 and would
     * otherwise restore stale colors. */
    gfx = FACE_DATA->sprites[EMOTION_NORMAL].gfx;
    pal = FACE_DATA->sprites[EMOTION_NORMAL].pal;
    for (i = 0; i < 16; i++)
        SetBGPaletteBufferColorArray(i + 0xE0, &pal[i]);
    sub_800388C(0xE0, (const RGB_Union *)pal, 16);

    DisplayMonPortraitSpriteFlipped(1, gfx, 14);

#undef FACE_DATA
    CloseFile(faceFile);

    sub_80073E0(1);
    gUnknown_203B404->unk16 = 1;
}

static s32 GetValidPartners(void)
{
    u8 PlayerType[2];
    u8 currentPartnerTypes[2];
    s32 i;
    s32 ValidPartnerCounter;
    s32 CurrentPartnerID;

    ValidPartnerCounter = 0;
    PlayerType[0] = GetPokemonType(gUnknown_203B404->StarterID, 0);
    PlayerType[1] = GetPokemonType(gUnknown_203B404->StarterID, 1);

    for (i = 0; i < NUM_PARTNERS; i++) {
        CurrentPartnerID = gPartners[i];
        currentPartnerTypes[0] = GetPokemonType(CurrentPartnerID, 0);
        currentPartnerTypes[1] = GetPokemonType(CurrentPartnerID, 1);

        if ((currentPartnerTypes[0] == TYPE_NONE || (currentPartnerTypes[0] != PlayerType[0] && currentPartnerTypes[0] != PlayerType[1]))
        && ((currentPartnerTypes[1] == TYPE_NONE || (currentPartnerTypes[1] != PlayerType[0] && currentPartnerTypes[1] != PlayerType[1])))) {
            gUnknown_203B404->PartnerArray[ValidPartnerCounter] = CurrentPartnerID;
            ValidPartnerCounter++;
        }
    }

    return ValidPartnerCounter;
}

static s32 GetAllStarters(void)
{
    s32 i;

    for (i = 0; i < NUM_STARTERS; i++)
        gUnknown_203B404->PartnerArray[i] = gStarterSelectionList[i];

    return NUM_STARTERS;
}
