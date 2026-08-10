#include "global.h"
#include "globaldata.h"
#include "constants/emotions.h"
#include "constants/colors.h"
#include "constants/iq_skill.h"
#include "constants/item.h"
#include "constants/monster.h"
#include "achievements.h"
#include "common_strings.h"
#include "data_serializer.h"
#include "input.h"
#include "items.h"
#include "kecleon_bros4.h"
#include "memory.h"
#include "menu_input.h"
#include "music_util.h"
#include "other_random.h"
#include "pokemon.h"
#include "pokemon_3.h"
#include "random.h"
#include "runtime.h"
#include "spinda_cafe.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"

EWRAM_DATA struct SpindaCafeData gSpindaCafeData = {0};

enum JuiceMenuActions {
    JUICE_CANCEL = 1,
    JUICE_MIX,
    JUICE_INFO,
};

enum JuiceStates {
    JUICE_INIT,
    JUICE_MAIN_PROMPT,
    JUICE_MAIN_MENU,
    JUICE_INFO_DLG,
    JUICE_NO_FOOD,
    JUICE_PICK_ITEM_DLG,
    JUICE_PICK_ITEM,
    JUICE_NOT_FOOD,
    JUICE_PICK_MON_DLG,
    JUICE_PICK_MON,
    JUICE_MIXING,
    JUICE_DRANK_SYS,
    JUICE_SPINDA_REACT,
    JUICE_STAT_SYS,
    JUICE_IQ_SKILL,
    JUICE_BYE,
    JUICE_EXIT,
};

typedef struct SpindaJuiceBarWork
{
    s32 currState;
    s32 fallbackState;
    u32 menuAction;
    s32 itemIndex;
    Item item;
    s32 monCount;
    Pokemon *teamMons[MAX_TEAM_MEMBERS];
    MenuItem menuItems[8];
    u16 menuRestrict[8];
    MonPortraitMsg monPortrait;
    MonPortraitMsg *monPortraitPtr;
    WindowTemplates windows;
    bool8 goodFeeling;
    bool8 wasGummi;
    bool8 hpBoosted;
    s32 iqGain;
    u16 gummiFlags;
    u8 reactEmotion;
    Pokemon *drinkMon;
    u8 iqSkillPre[NUM_IQ_SKILLS];
    u8 iqSkillPost[NUM_IQ_SKILLS];
    s32 availIQSkillPre;
    s32 availIQSkillPost;
    s32 nextIqSkillCheck;
} SpindaJuiceBarWork;

static EWRAM_INIT SpindaJuiceBarWork *sJuiceWork = {NULL};

#include "data/spinda_cafe.h"

static void UpdateJuiceState(u32 newState);
static void SetupJuiceWindows(void);
static void UpdateJuiceDialogue(void);
static void BuildJuiceMainMenu(void);
static void BuildJuiceMonMenu(void);
static void HandleJuiceMainMenu(void);
static void HandleJuiceMonMenu(void);
static void HandleJuiceItemPick(void);
static void ApplyJuiceDrink(Pokemon *mon);
static void SetSpindaEmotion(u8 emotion);
static bool8 BoostRandomOffense(Pokemon *mon);
static void ShowNextStatSystemMessage(void);
static void ShowNextIqSkillMessage(void);
static bool8 IsJuiceFoodItem(u8 itemId);
static bool8 TeamHasJuiceFood(void);
static void CollectTeamMons(void);

void InitSpindaCafe(void)
{
    /* EWRAM BSS / DATA already zeroed; keep API for parity with achievements. */
}

void ResetSpindaCafeData(void)
{
    MemoryFill8(&gSpindaCafeData, 0, sizeof(gSpindaCafeData));
}

u8 GetSpindaCafeCatalogTier(void)
{
    u16 n = gSpindaCafeData.itemsRecycled;
    u8 tier = 1;

    if (n >= 8)
        tier = 2;
    if (n >= 24)
        tier = 3;
    if (n >= 48)
        tier = 4;
    return tier;
}

void NoteSpindaCafeItemsRecycled(u16 count)
{
    u32 sum = gSpindaCafeData.itemsRecycled + count;

    if (sum > 0xFFFF)
        sum = 0xFFFF;
    gSpindaCafeData.itemsRecycled = sum;
    gSpindaCafeData.catalogTier = GetSpindaCafeCatalogTier();
}

u32 SaveSpindaCafeData(u8 *buffer, u32 bufLen)
{
    DataSerializer seri;

    InitBitWriter(&seri, buffer, bufLen);
    WriteBits(&seri, &gSpindaCafeData.itemsRecycled, 16);
    WriteBits(&seri, &gSpindaCafeData.catalogTier, 8);
    WriteBits(&seri, &gSpindaCafeData.ticketType, 8);
    FinishBitSerializer(&seri);
    return seri.count;
}

u32 RestoreSpindaCafeData(u8 *buffer, u32 bufLen)
{
    DataSerializer seri;

    ResetSpindaCafeData();
    InitBitReader(&seri, buffer, bufLen);
    ReadBits(&seri, &gSpindaCafeData.itemsRecycled, 16);
    ReadBits(&seri, &gSpindaCafeData.catalogTier, 8);
    ReadBits(&seri, &gSpindaCafeData.ticketType, 8);
    FinishBitSerializer(&seri);
    if (gSpindaCafeData.catalogTier == 0)
        gSpindaCafeData.catalogTier = GetSpindaCafeCatalogTier();
    return seri.count;
}

static bool8 IsJuiceFoodItem(u8 itemId)
{
    u8 cat;

    if (itemId == ITEM_NOTHING)
        return FALSE;
    if (IsGummiItem(itemId))
        return TRUE;
    cat = GetItemCategory(itemId);
    return cat == CATEGORY_BERRIES_SEEDS_VITAMINS || cat == CATEGORY_FOOD_GUMMIES;
}

static bool8 TeamHasJuiceFood(void)
{
    s32 i;

    for (i = 0; i < INVENTORY_SIZE; i++) {
        if (ItemExists(&gTeamInventoryRef->teamItems[i])
            && IsJuiceFoodItem(gTeamInventoryRef->teamItems[i].id))
            return TRUE;
    }
    return FALSE;
}

static void CollectTeamMons(void)
{
    s32 i;

    sJuiceWork->monCount = 0;
    for (i = 0; i < NUM_MONSTERS && sJuiceWork->monCount < MAX_TEAM_MEMBERS; i++) {
        Pokemon *mon = &gRecruitedPokemonRef->pokemon[i];

        if (PokemonExists(mon) && PokemonIsOnTeam(mon))
            sJuiceWork->teamMons[sJuiceWork->monCount++] = mon;
    }
}

bool8 CreateSpindaJuiceBar(s32 mode)
{
    OpenedFile *faceFile;
    u8 *monName;

    (void)mode;
    if (!gRuntimeConfig.spinda_cafe)
        return FALSE;

    ResetUnusedInputStruct();
    ShowWindows(NULL, TRUE, TRUE);
    sJuiceWork = MemoryAlloc(sizeof(SpindaJuiceBarWork), MEMALLOC_GROUP_8);
    MemoryFill8(sJuiceWork, 0, sizeof(SpindaJuiceBarWork));
    sJuiceWork->menuAction = JUICE_MIX;

    CopyYellowMonsterNametoBuffer(gSpeakerNameBuffer, MONSTER_SPINDA);
    CopyYellowMonsterNametoBuffer(gFormatBuffer_Monsters[7], MONSTER_SPINDA);
    monName = GetMonSpecies(MONSTER_SPINDA);
    strcpy(gFormatBuffer_Monsters[6], monName);

    sJuiceWork->monPortraitPtr = &sJuiceWork->monPortrait;
    faceFile = GetDialogueSpriteDataPtr(MONSTER_SPINDA);
    sJuiceWork->monPortrait.faceFile = faceFile;
    sJuiceWork->monPortrait.faceData = (PortraitGfx *)faceFile->data;
    sJuiceWork->monPortrait.spriteId = 0;
    sJuiceWork->monPortrait.flip = FALSE;
    sJuiceWork->monPortrait.unkE = 0;
    sJuiceWork->monPortrait.pos.x = 2;
    sJuiceWork->monPortrait.pos.y = 8;

    CollectTeamMons();
    UpdateJuiceState(JUICE_INIT);
    return TRUE;
}

u32 SpindaJuiceBarCallback(void)
{
    switch (sJuiceWork->currState) {
        case JUICE_MAIN_PROMPT:
            HandleJuiceMainMenu();
            break;
        case JUICE_PICK_MON_DLG:
            HandleJuiceMonMenu();
            break;
        case JUICE_PICK_ITEM:
            HandleJuiceItemPick();
            break;
        case JUICE_EXIT:
            return 3;
        default: {
            s32 tmp;

            if (sub_80144A4(&tmp) == 0)
                UpdateJuiceState(sJuiceWork->fallbackState);
            break;
        }
    }
    return 0;
}

void DestroySpindaJuiceBar(void)
{
    if (sJuiceWork != NULL) {
        CloseFile(sJuiceWork->monPortrait.faceFile);
        FREE_AND_SET_NULL(sJuiceWork);
    }
}

static void UpdateJuiceState(u32 newState)
{
    sJuiceWork->currState = newState;
    SetupJuiceWindows();
    UpdateJuiceDialogue();
}

static void SetupJuiceWindows(void)
{
    s32 i;

    RestoreSavedWindows(&sJuiceWork->windows);
    for (i = 0; i < 4; i++)
        sJuiceWork->windows.id[i] = sSpindaCafeDummyWin;
    ResetUnusedInputStruct();
    ShowWindows(&sJuiceWork->windows, TRUE, TRUE);
}

static void BuildJuiceMainMenu(void)
{
    s32 n = 0;

    MemoryFill16(sJuiceWork->menuRestrict, 0, sizeof(sJuiceWork->menuRestrict));
    sJuiceWork->menuItems[n].text = sMixDrink;
    sJuiceWork->menuItems[n].menuAction = JUICE_MIX;
    n++;
    sJuiceWork->menuItems[n].text = gCommonInfo[0];
    sJuiceWork->menuItems[n].menuAction = JUICE_INFO;
    n++;
    sJuiceWork->menuItems[n].text = gCommonCancel[0];
    sJuiceWork->menuItems[n].menuAction = JUICE_CANCEL;
    n++;
    sJuiceWork->menuItems[n].text = NULL;
    sJuiceWork->menuItems[n].menuAction = JUICE_CANCEL;
}

static void BuildJuiceMonMenu(void)
{
    s32 i;
    s32 n = 0;

    MemoryFill16(sJuiceWork->menuRestrict, 0, sizeof(sJuiceWork->menuRestrict));
    for (i = 0; i < sJuiceWork->monCount; i++) {
        PrintColoredPokeNameToBuffer(gFormatBuffer_Names[i], sJuiceWork->teamMons[i], COLOR_WHITE_2);
        sJuiceWork->menuItems[n].text = gFormatBuffer_Names[i];
        sJuiceWork->menuItems[n].menuAction = i + 10;
        n++;
    }
    sJuiceWork->menuItems[n].text = gCommonCancel[0];
    sJuiceWork->menuItems[n].menuAction = JUICE_CANCEL;
    n++;
    sJuiceWork->menuItems[n].text = NULL;
    sJuiceWork->menuItems[n].menuAction = JUICE_CANCEL;
}

static void SetSpindaEmotion(u8 emotion)
{
    if (IsPokemonDialogueSpriteAvail(MONSTER_SPINDA, emotion))
        sJuiceWork->monPortrait.spriteId = emotion;
    else
        sJuiceWork->monPortrait.spriteId = EMOTION_NORMAL;
}

static bool8 BoostRandomOffense(Pokemon *mon)
{
    s32 order[4];
    s32 i, j, t;

    for (i = 0; i < 4; i++)
        order[i] = i;
    for (i = 3; i > 0; i--) {
        j = RandInt(i + 1);
        t = order[i];
        order[i] = order[j];
        order[j] = t;
    }

    for (i = 0; i < 4; i++) {
        switch (order[i]) {
            case 0:
                if (mon->offense.att[OFFENSE_NRM] < 255) {
                    mon->offense.att[OFFENSE_NRM]++;
                    sJuiceWork->gummiFlags |= 1;
                    return TRUE;
                }
                break;
            case 1:
                if (mon->offense.att[OFFENSE_SP] < 255) {
                    mon->offense.att[OFFENSE_SP]++;
                    sJuiceWork->gummiFlags |= 2;
                    return TRUE;
                }
                break;
            case 2:
                if (mon->offense.def[OFFENSE_NRM] < 255) {
                    mon->offense.def[OFFENSE_NRM]++;
                    sJuiceWork->gummiFlags |= 4;
                    return TRUE;
                }
                break;
            case 3:
                if (mon->offense.def[OFFENSE_SP] < 255) {
                    mon->offense.def[OFFENSE_SP]++;
                    sJuiceWork->gummiFlags |= 8;
                    return TRUE;
                }
                break;
        }
    }
    return FALSE;
}

static void ApplyJuiceDrink(Pokemon *mon)
{
    Gummi gummi;
    s32 iqBefore;
    bool8 good;

    sJuiceWork->goodFeeling = FALSE;
    sJuiceWork->wasGummi = FALSE;
    sJuiceWork->hpBoosted = FALSE;
    sJuiceWork->iqGain = 0;
    sJuiceWork->gummiFlags = 0;
    sJuiceWork->reactEmotion = EMOTION_NORMAL;
    good = (RandInt(100) < 25);
    sJuiceWork->goodFeeling = good;

    PrintColoredPokeNameToBuffer(gFormatBuffer_Names[0], mon, COLOR_CYAN);
    sJuiceWork->drinkMon = mon;
    iqBefore = mon->IQ;
    sJuiceWork->availIQSkillPre = GetNumAvailableIQSkills(sJuiceWork->iqSkillPre, mon->IQ);
    sJuiceWork->nextIqSkillCheck = 1;

    if (IsGummiItem(sJuiceWork->item.id)) {
        /* PMD2: gummi drinks always raise IQ (type matchup) and at least one stat. */
        sJuiceWork->wasGummi = TRUE;
        GetGummiItemStatBoost(mon, sJuiceWork->item.id, FALSE, &gummi);
        sJuiceWork->gummiFlags = gummi.flags;
        if (sJuiceWork->gummiFlags == 0)
            BoostRandomOffense(mon);
        if (good && mon->IQ < 999) {
            mon->IQ += 2;
            if (mon->IQ > 999)
                mon->IQ = 999;
        }
        sJuiceWork->iqGain = mon->IQ - iqBefore;
        sJuiceWork->availIQSkillPost = GetNumAvailableIQSkills(sJuiceWork->iqSkillPost, mon->IQ);
        sJuiceWork->reactEmotion = good ? EMOTION_JOYOUS : EMOTION_HAPPY;
        ShiftItemsDownFrom(sJuiceWork->itemIndex);
        return;
    }

    if (good) {
        /* Good mix: IQ bump + guaranteed offense (or HP) raise. */
        mon->IQ += 2 + RandInt(2);
        if (!BoostRandomOffense(mon)) {
            if (mon->pokeHP < 999) {
                mon->pokeHP += 2;
                sJuiceWork->hpBoosted = TRUE;
            }
        }
        sJuiceWork->reactEmotion = EMOTION_JOYOUS;
    }
    else if (RandInt(100) < 40) {
        mon->IQ += 1;
        sJuiceWork->reactEmotion = EMOTION_HAPPY;
    }
    else if (RandInt(100) < 30) {
        BoostRandomOffense(mon);
        sJuiceWork->reactEmotion = EMOTION_HAPPY;
    }
    else {
        sJuiceWork->reactEmotion = EMOTION_SAD;
    }

    if (mon->IQ > 999)
        mon->IQ = 999;
    if (mon->IQ < 1)
        mon->IQ = 1;
    sJuiceWork->iqGain = mon->IQ - iqBefore;
    sJuiceWork->availIQSkillPost = GetNumAvailableIQSkills(sJuiceWork->iqSkillPost, mon->IQ);
    ShiftItemsDownFrom(sJuiceWork->itemIndex);
}

static void ShowNextStatSystemMessage(void)
{
    u16 flags = sJuiceWork->gummiFlags;

    sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;

    if (flags == 0xF) {
        sJuiceWork->gummiFlags = 0;
        if (sJuiceWork->hpBoosted || sJuiceWork->iqGain > 0)
            sJuiceWork->fallbackState = JUICE_STAT_SYS;
        CreateDialogueBoxAndPortrait(SPINDA_PLUS_ALL, 0, NULL, 0x301);
        return;
    }
    if (flags & 1) {
        sJuiceWork->gummiFlags &= ~1;
        if (sJuiceWork->gummiFlags != 0 || sJuiceWork->hpBoosted || sJuiceWork->iqGain > 0)
            sJuiceWork->fallbackState = JUICE_STAT_SYS;
        CreateDialogueBoxAndPortrait(SPINDA_PLUS_ATK, 0, NULL, 0x301);
        return;
    }
    if (flags & 2) {
        sJuiceWork->gummiFlags &= ~2;
        if (sJuiceWork->gummiFlags != 0 || sJuiceWork->hpBoosted || sJuiceWork->iqGain > 0)
            sJuiceWork->fallbackState = JUICE_STAT_SYS;
        CreateDialogueBoxAndPortrait(SPINDA_PLUS_SPATK, 0, NULL, 0x301);
        return;
    }
    if (flags & 4) {
        sJuiceWork->gummiFlags &= ~4;
        if (sJuiceWork->gummiFlags != 0 || sJuiceWork->hpBoosted || sJuiceWork->iqGain > 0)
            sJuiceWork->fallbackState = JUICE_STAT_SYS;
        CreateDialogueBoxAndPortrait(SPINDA_PLUS_DEF, 0, NULL, 0x301);
        return;
    }
    if (flags & 8) {
        sJuiceWork->gummiFlags &= ~8;
        if (sJuiceWork->gummiFlags != 0 || sJuiceWork->hpBoosted || sJuiceWork->iqGain > 0)
            sJuiceWork->fallbackState = JUICE_STAT_SYS;
        CreateDialogueBoxAndPortrait(SPINDA_PLUS_SPDEF, 0, NULL, 0x301);
        return;
    }
    if (sJuiceWork->hpBoosted) {
        sJuiceWork->hpBoosted = FALSE;
        if (sJuiceWork->iqGain > 0)
            sJuiceWork->fallbackState = JUICE_STAT_SYS;
        CreateDialogueBoxAndPortrait(SPINDA_PLUS_HP, 0, NULL, 0x301);
        return;
    }
    if (sJuiceWork->iqGain > 0) {
        sJuiceWork->iqGain = 0;
        sJuiceWork->nextIqSkillCheck = 1;
        sJuiceWork->fallbackState = JUICE_IQ_SKILL;
        CreateDialogueBoxAndPortrait(SPINDA_IQ_UP, 0, NULL, 0x101);
        return;
    }

    UpdateJuiceState(JUICE_MAIN_PROMPT);
}

/* Same pattern as town gummi feeding (code_80227B8): announce each newly available skill. */
static void ShowNextIqSkillMessage(void)
{
    s32 i;

    sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;

    while (sJuiceWork->nextIqSkillCheck < NUM_IQ_SKILLS) {
        u8 skill = sJuiceWork->nextIqSkillCheck;
        bool8 hadBefore = FALSE;
        bool8 hasNow = FALSE;

        for (i = 0; i < sJuiceWork->availIQSkillPre; i++) {
            if (sJuiceWork->iqSkillPre[i] == skill) {
                hadBefore = TRUE;
                break;
            }
        }
        for (i = 0; i < sJuiceWork->availIQSkillPost; i++) {
            if (sJuiceWork->iqSkillPost[i] == skill) {
                hasNow = TRUE;
                break;
            }
        }

        sJuiceWork->nextIqSkillCheck++;
        if (hadBefore != hasNow) {
            sJuiceWork->fallbackState = JUICE_IQ_SKILL;
            /* Plain name so only the skill is cyan-highlighted. */
            if (sJuiceWork->drinkMon != NULL)
                PrintPokeNameToBuffer(gFormatBuffer_Names[0], sJuiceWork->drinkMon);
            strcpy(gFormatBuffer_Items[1], GetIQSkillName(skill));
            PlaySound(203);
            CreateDialogueBoxAndPortrait(SPINDA_IQ_LEARNED, 0, NULL, 0x101);
            return;
        }
    }

    UpdateJuiceState(JUICE_MAIN_PROMPT);
}

static void UpdateJuiceDialogue(void)
{
    switch (sJuiceWork->currState) {
        case JUICE_INIT:
            SetSpindaEmotion(EMOTION_NORMAL);
            sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(SPINDA_WELCOME, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_MAIN_PROMPT:
            SetSpindaEmotion(EMOTION_NORMAL);
            BuildJuiceMainMenu();
            CreateMenuDialogueBoxAndPortrait(SPINDA_HOW_MAY, 0, sJuiceWork->menuAction,
                sJuiceWork->menuItems, sJuiceWork->menuRestrict, 4, 0, sJuiceWork->monPortraitPtr, 0xC);
            break;
        case JUICE_INFO_DLG:
            SetSpindaEmotion(EMOTION_NORMAL);
            sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(SPINDA_INFO, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_NO_FOOD:
            SetSpindaEmotion(EMOTION_SAD);
            sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(SPINDA_NO_FOOD, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_PICK_ITEM_DLG:
            SetSpindaEmotion(EMOTION_NORMAL);
            sJuiceWork->fallbackState = JUICE_PICK_ITEM;
            CreateDialogueBoxAndPortrait(SPINDA_PICK_ITEM, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_PICK_ITEM:
            sub_801A5D8(1, 3, NULL, 10);
            sub_801A8D0(TRUE);
            break;
        case JUICE_NOT_FOOD:
            SetSpindaEmotion(EMOTION_SAD);
            sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;
            CreateDialogueBoxAndPortrait(SPINDA_NOT_FOOD, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_PICK_MON_DLG:
            SetSpindaEmotion(EMOTION_NORMAL);
            BuildJuiceMonMenu();
            CreateMenuDialogueBoxAndPortrait(SPINDA_PICK_MON, 0, 10,
                sJuiceWork->menuItems, sJuiceWork->menuRestrict, 4, 0, sJuiceWork->monPortraitPtr, 0xC);
            break;
        case JUICE_MIXING:
            SetSpindaEmotion(EMOTION_HAPPY);
            sJuiceWork->fallbackState = JUICE_DRANK_SYS;
            CreateDialogueBoxAndPortrait(SPINDA_MIXING, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_DRANK_SYS:
            /* System narration — no Spinda portrait. */
            sJuiceWork->fallbackState = JUICE_SPINDA_REACT;
            CreateDialogueBoxAndPortrait(SPINDA_DRANK_SYS, 0, NULL, 0x101);
            break;
        case JUICE_SPINDA_REACT:
            SetSpindaEmotion(sJuiceWork->reactEmotion);
            if (sJuiceWork->gummiFlags != 0 || sJuiceWork->hpBoosted || sJuiceWork->iqGain > 0)
                sJuiceWork->fallbackState = JUICE_STAT_SYS;
            else
                sJuiceWork->fallbackState = JUICE_MAIN_PROMPT;

            if (sJuiceWork->goodFeeling)
                CreateDialogueBoxAndPortrait(SPINDA_REACT_GOOD, 0, sJuiceWork->monPortraitPtr, 0x10D);
            else if (sJuiceWork->wasGummi)
                CreateDialogueBoxAndPortrait(SPINDA_REACT_GUMMI, 0, sJuiceWork->monPortraitPtr, 0x10D);
            else if (sJuiceWork->iqGain > 0 || sJuiceWork->gummiFlags != 0 || sJuiceWork->hpBoosted)
                CreateDialogueBoxAndPortrait(SPINDA_REACT_OK, 0, sJuiceWork->monPortraitPtr, 0x10D);
            else
                CreateDialogueBoxAndPortrait(SPINDA_REACT_NOTHING, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_STAT_SYS:
            ShowNextStatSystemMessage();
            break;
        case JUICE_IQ_SKILL:
            ShowNextIqSkillMessage();
            break;
        case JUICE_BYE:
            SetSpindaEmotion(EMOTION_HAPPY);
            sJuiceWork->fallbackState = JUICE_EXIT;
            CreateDialogueBoxAndPortrait(SPINDA_BYE, 0, sJuiceWork->monPortraitPtr, 0x10D);
            break;
        case JUICE_MAIN_MENU:
        case JUICE_PICK_MON:
        case JUICE_EXIT:
        default:
            break;
    }
}

static void HandleJuiceMainMenu(void)
{
    s32 menuAction;

    if (sub_80144A4(&menuAction))
        return;

    sJuiceWork->menuAction = menuAction;
    switch (menuAction) {
        case JUICE_CANCEL:
            UpdateJuiceState(JUICE_BYE);
            break;
        case JUICE_INFO:
            UpdateJuiceState(JUICE_INFO_DLG);
            break;
        case JUICE_MIX:
            if (!TeamHasJuiceFood())
                UpdateJuiceState(JUICE_NO_FOOD);
            else
                UpdateJuiceState(JUICE_PICK_ITEM_DLG);
            break;
    }
}

static void HandleJuiceItemPick(void)
{
    switch (sub_801A6E8(TRUE)) {
        case 3: {
            sJuiceWork->itemIndex = sub_801A8AC();
            sJuiceWork->item = gTeamInventoryRef->teamItems[sJuiceWork->itemIndex];
            sub_801A928();
            if (!IsJuiceFoodItem(sJuiceWork->item.id))
                UpdateJuiceState(JUICE_NOT_FOOD);
            else if (sJuiceWork->monCount <= 0)
                UpdateJuiceState(JUICE_MAIN_PROMPT);
            else
                UpdateJuiceState(JUICE_PICK_MON_DLG);
            break;
        }
        case 2:
            sub_801A928();
            UpdateJuiceState(JUICE_MAIN_PROMPT);
            break;
    }
}

static void HandleJuiceMonMenu(void)
{
    s32 menuAction;

    if (sub_80144A4(&menuAction))
        return;

    if (menuAction == JUICE_CANCEL) {
        UpdateJuiceState(JUICE_MAIN_PROMPT);
        return;
    }

    if (menuAction >= 10 && menuAction < 10 + sJuiceWork->monCount) {
        ApplyJuiceDrink(sJuiceWork->teamMons[menuAction - 10]);
        UpdateJuiceState(JUICE_MIXING);
    }
}
