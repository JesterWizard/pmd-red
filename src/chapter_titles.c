#include "global.h"
#include "chapter_titles.h"
#include "bg_control.h"
#include "constants/colors.h"
#include "constants/friend_area.h"
#include "friend_area_intros.h"
#include "fullscreen_art.h"
#include "input.h"
#include "runtime.h"
#include "structs/rgb.h"
#include "structs/str_text.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"
#include "window_buffer.h"

/* Art dims to this brightness (of 32) so the white text reads on any picture. */
#define CHAPTER_ART_BRIGHTNESS 20
#define CHAPTER_ART_FADE_FRAMES 2   /* per brightness step */
#define CHAPTER_TEXT_FADE_FRAMES 2  /* per alpha step (0–16) */
#define CHAPTER_HOLD_MIN_FRAMES 60  /* A/B can skip after this */
#define CHAPTER_HOLD_FRAMES 180

#define CHAPTER_WIN_X 1
#define CHAPTER_WIN_Y 7
#define CHAPTER_WIN_WIDTH 28
#define CHAPTER_WIN_HEIGHT 5
#define CHAPTER_LABEL_Y 4
#define CHAPTER_RULE_Y 18
#define CHAPTER_TITLE_Y 23

typedef struct ChapterTitle
{
    u8 scenarioMain;  /* SCENARIO_MAIN major whose first morning opens the chapter */
    u8 artFriendArea; /* background art (Friend Area intro picture) */
    const u8 *label;
    const u8 *title;
} ChapterTitle;

/* One entry per story episode (EVENT_M01ExxA); B halves continue a chapter. */
static const ChapterTitle sChapterTitles[CHAPTER_TITLE_COUNT] = {
    {  2, FRIEND_AREA_OVERGROWN_FOREST, _("Chapter 1"),  _("A Pokémon Awakens") },         /* Tiny Woods */
    {  3, FRIEND_AREA_MT_CLEFT,         _("Chapter 2"),  _("The Rescue Team Begins") },    /* Thunderwave Cave, Mt. Steel */
    {  5, FRIEND_AREA_SECRETIVE_FOREST, _("Chapter 3"),  _("Into Sinister Woods") },       /* Sinister Woods */
    {  6, FRIEND_AREA_THUNDER_MEADOW,   _("Chapter 4"),  _("Thunder on the Mountain") },   /* Silent Chasm, Mt. Thunder */
    {  8, FRIEND_AREA_RAINBOW_PEAK,     _("Chapter 5"),  _("The Hill of the Ancients") },  /* Great Canyon */
    { 10, FRIEND_AREA_MT_MOONVIEW,      _("Chapter 6"),  _("The Ninetales Legend") },
    { 11, FRIEND_AREA_SCORCHED_PLAINS,  _("Chapter 7"),  _("On the Run") },                /* Lapis Cave, Mt. Blaze */
    { 13, FRIEND_AREA_ICE_FLOE_BEACH,   _("Chapter 8"),  _("The Frozen North") },          /* Frosty Forest, Mt. Freeze */
    { 15, FRIEND_AREA_CRATER,           _("Chapter 9"),  _("Heart of the Volcano") },      /* Magma Cavern */
    { 16, FRIEND_AREA_STRATOS_LOOKOUT,  _("Chapter 10"), _("Toward the Sky") },            /* Sky Tower */
};

static const WindowTemplates sChapterTitleWindows = {
    .id = {
        [0] = {
            .type = WINDOW_TYPE_ONLY_TEXT,
            .pos = { CHAPTER_WIN_X, CHAPTER_WIN_Y },
            .width = CHAPTER_WIN_WIDTH,
            .height = CHAPTER_WIN_HEIGHT,
            .totalHeight = CHAPTER_WIN_HEIGHT,
        },
        [1] = WIN_TEMPLATE_DUMMY,
        [2] = WIN_TEMPLATE_DUMMY,
        [3] = WIN_TEMPLATE_DUMMY,
    },
};

/* 1-based chapter waiting for the next map load; 0 = none. */
static EWRAM_DATA u8 sPendingChapter = 0;

void ChapterTitles_NotifyScenarioMain(s32 oldMain, s32 oldSub, s32 newMain, s32 newSub)
{
    s32 i;

    if (oldMain != newMain || oldSub != 0 || newSub != 1)
        return;
    for (i = 0; i < CHAPTER_TITLE_COUNT; i++) {
        if (sChapterTitles[i].scenarioMain == newMain) {
            sPendingChapter = i + 1;
            return;
        }
    }
}

/* Text (BG0) alpha-blends over the art (BG3): 0 = invisible, 16 = opaque.
 * ToggleWindowBgBuffer reloads BLDALPHA from gUnknown_2026E4E every frame. */
static void SetChapterTextAlpha(s32 alpha)
{
    gUnknown_2026E4E = (alpha << 8) | (16 - alpha);
}

static void PrintCentered(s32 y, const u8 *str)
{
    PrintStringOnWindow((CHAPTER_WIN_WIDTH * 8 - GetStringLineWidth(str)) / 2, y, str, 0, 0);
}

void ShowPendingChapterTitle_Async(void)
{
    const ChapterTitle *chapter;
    const RGB_Struct *pal;
    s32 brightness, alpha, frames;
    s32 ruleWidth;
    u16 savedBldCnt;
    u16 savedBlendCoeffs;
    u32 savedLayers;

    if (sPendingChapter == 0)
        return;
    chapter = &sChapterTitles[sPendingChapter - 1];
    sPendingChapter = 0;
    if (!gRuntimeConfig.chapter_titles)
        return;
    if (gFriendAreaIntroAssets[chapter->artFriendArea].at4pn == NULL)
        return;

    pal = (const RGB_Struct *)gFriendAreaIntroAssets[chapter->artFriendArea].pal;
    savedLayers = (REG_DISPCNT >> 8) & 0x1F;
    LoadFullscreenArt(gFriendAreaIntroAssets[chapter->artFriendArea].at4pn);

    /* Text is drawn up front but blended fully transparent until the art is in. */
    savedBldCnt = gBldCnt;
    savedBlendCoeffs = gUnknown_2026E4E;
    gBldCnt = BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3;
    SetChapterTextAlpha(0);
    ShowWindows(&sChapterTitleWindows, TRUE, TRUE);
    sub_80073B8(0);
    PrintCentered(CHAPTER_LABEL_Y, chapter->label);
    ruleWidth = GetStringLineWidth(chapter->title) + 16;
    AddDoubleUnderScoreHighlight(0, (CHAPTER_WIN_WIDTH * 8 - ruleWidth) / 2, CHAPTER_RULE_Y,
                                 ruleWidth, COLOR_WHITE_2);
    PrintCentered(CHAPTER_TITLE_Y, chapter->title);
    sub_80073E0(0);

    for (brightness = 0; brightness <= CHAPTER_ART_BRIGHTNESS; brightness++) {
        SetFullscreenArtBrightness(pal, brightness);
        for (frames = 0; frames < CHAPTER_ART_FADE_FRAMES; frames++)
            RunFullscreenArtFrame();
    }
    for (alpha = 1; alpha <= 16; alpha++) {
        SetChapterTextAlpha(alpha);
        for (frames = 0; frames < CHAPTER_TEXT_FADE_FRAMES; frames++)
            RunFullscreenArtFrame();
    }

    for (frames = 0; frames < CHAPTER_HOLD_FRAMES; frames++) {
        RunFullscreenArtFrame();
        if (frames >= CHAPTER_HOLD_MIN_FRAMES && (gRealInputs.pressed & (A_BUTTON | B_BUTTON)))
            break;
    }

    /* Text and art fade out together. */
    for (brightness = CHAPTER_ART_BRIGHTNESS; brightness >= 0; brightness--) {
        SetFullscreenArtBrightness(pal, brightness);
        SetChapterTextAlpha(brightness * 16 / CHAPTER_ART_BRIGHTNESS);
        for (frames = 0; frames < CHAPTER_ART_FADE_FRAMES; frames++)
            RunFullscreenArtFrame();
    }

    gBldCnt = savedBldCnt;
    gUnknown_2026E4E = savedBlendCoeffs;
    UnloadFullscreenArt();
    /* Mid-scene (not ground start): nothing else re-enables BG2/BG3 after the
     * map loads, so put the scene's layers back as they were. */
    SetBGOBJEnableFlags(~savedLayers & 0x1F);
}
