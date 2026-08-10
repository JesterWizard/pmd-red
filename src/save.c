#include "global.h"
#include "globaldata.h"
#include "achievements.h"
#include "adventure_info.h"
#include "adventure_save.h"
#include "custom_debug_menu.h"
#include "code_800D090_1.h"
#include "code_8094F88.h"
#include "code_80958E8.h"
#include "event_flag.h"
#include "exclusive_pokemon.h"
#include "flash.h"
#include "friend_area.h"
#include "game_options.h"
#include "memory.h"
#include "music_util.h"
#include "pokemon.h"
#include "pokemon_3.h"
#include "random.h"
#include "rescue_scenario.h"
#include "runtime.h"
#include "save.h"
#include "spinda_cafe.h"
#include "string_format.h"
#include "training_maze.h"

// size: 0x800
struct unk_struct
{
    u32 unk0;
    u8 gameInternalName[16]; // has "POKE_DUNGEON__05
    u32 checksum;
    u32 unk18;
    DungeonLocation dungeonLocation;
    u32 unk20;
    u32 padding[503];
};

static u8 *GetRuntimeConfigSaveBuffer(u8 *buffer)
{
    buffer += RECRUITED_POKEMON_SAVE_SIZE;
    buffer += 150 * 4;
    buffer += TEAM_INVENTORY_SAVE_SIZE;
    buffer += 0x10;
    buffer += 0x8;
    buffer += 0x100;
    buffer += 0x594;
    buffer += MAIL_INFO_SAVE_SIZE;
    buffer += ACHIEVEMENTS_SAVE_SIZE;
    buffer += SPINDA_CAFE_SAVE_SIZE;
    return buffer;
}

EWRAM_DATA s32 gUnknown_202DE28 = {0};

EWRAM_INIT u32 gUnknown_203B17C = {0};
EWRAM_INIT const char *gUnknown_203B180 = {"POKE_DUNGEON__05"};
EWRAM_INIT UnkStruct_203B184 *gUnknown_203B184 = { NULL };

ALIGNED(4) static const char fill_save0[] = _("pksdir0");
ALIGNED(4) static const char fill_save1[] = _("pksdir0");
ALIGNED(4) static const char fill_save2[] = _("pksdir0");

u32 sub_8011C1C(void)
{
    return gUnknown_203B17C;
}

void sub_8011C28(u32 x)
{
    gUnknown_203B17C = x;
}

s32 sub_8011C34(void)
{
    return gUnknown_202DE28;
}

void sub_8011C40(s32 x)
{
    gUnknown_202DE28 = x;
}

static const char *GetGameInternalName(void)
{
    return gUnknown_203B180; // returns POKE_DUNGEON__05
}

void CalculateChecksum(u8 *out, u32 size)
{
    u32 checksum = 0;
    s32 i = size / 4;
    if (i > 1)
    {
        u32 *ptr = (u32 *)&out[4];
        --i;
        do
            checksum += *ptr++;
        while (--i);
    }
    *(u32 *)out = checksum;
}

bool8 ValidateChecksum(u8 *in, u32 size)
{
    u32 checksum = 0;
    s32 i = size / 4;
    if (i > 1)
	{
        u32 *ptr = (u32 *)&in[4];
        --i;
        do
            checksum += *ptr++;
        while (--i);
	}
    if (*(u32 *)in != checksum)
        return TRUE;
    return FALSE;
}

void sub_8011CA8(u32 *out, s32 size)
{
    if (gUnknown_203B184 == NULL) {
        AGB_WARNING("A warning most likely went here.");
        *out += (size + 0xFFF) / 0x1000;
    } else {
        *out += (size + 0xFFF) / 0x1000;
    }
}

u32 WriteSaveSector(s32 *a, u8 *src, s32 size)
{
    u32 r1;
    s32 sector = *a;
    sub_8011CA8(a, size);
    CalculateChecksum(src, size);
    if (gUnknown_203B184 == NULL) {
        r1 = WriteFlashData(sector, src, size);
    }
    else if (sub_800DAB8()) {
        if (!sub_800DAB4(sector, src, size)) {
            r1 = 3;
        }
        else {
            r1 = 0;
        }
    }
    else {
        return SAVE_FAILED;
    }
    if (r1 == 4) {
        return SAVE_NOT_WRTTEN;
    }
    if (r1) {
        return SAVE_FAILED;
    }
    return SAVE_COMPLETED;
}

u32 ReadSaveSector(s32 *a, u8 *dest, s32 size)
{
    u32 r1;
    s32 sector = *a;
    sub_8011CA8(a, size);
    if (gUnknown_203B184 == NULL) {
        r1 = ReadFlashData(sector, dest, size);
    }
    else if (sub_800DAB8()) {
        if (!sub_800DAB0(sector, dest, size)) {
            r1 = 1;
        }
        else {
            r1 = 0;
        }
    }
    else {
        return READ_SAVE_FAILED;
    }
    if (r1) {
        return READ_SAVE_FAILED;
    }
    if (ValidateChecksum(dest, size)) {
        return READ_SAVE_CHECKSUM_ERROR;
    }
    return READ_SAVE_VALID;
}

UNUSED static bool8 sub_8011DA8(void)
{
    return TRUE;
}

u32 ReadSaveFromPak(u32 *a)
{
    struct UnkStruct_sub_8011DAC *playerSave = MemoryAlloc(sizeof(struct UnkStruct_sub_8011DAC), MEMALLOC_GROUP_5);
    u8 *r4 = playerSave->unk448;
    u32 saveStatus = ReadSaveSector(a, (u8*)playerSave, sizeof(struct UnkStruct_sub_8011DAC));
    u32 r1;
    if (saveStatus)
    {
        saveStatus = ReadSaveSector(a, (u8*)playerSave, sizeof(struct UnkStruct_sub_8011DAC));
    }
    else
    {
        sub_8011CA8(a, sizeof(struct UnkStruct_sub_8011DAC));
    }
    if (!saveStatus)
    {
        if (playerSave->checksum != 0x5071412) {
            saveStatus = 4;
        }
    }
    if (!saveStatus)
    {
        if (gUnknown_203B184 == NULL) {
            sub_8011C28(playerSave->unk41C);
            sub_8011C40(playerSave->unk418);
            SetRNGSeed(playerSave->RngState);
        }
        else {
            gUnknown_203B184->unk054 = playerSave->unk41C;
            gUnknown_203B184->unk050 = playerSave->unk418;
            gUnknown_203B184->RngState = playerSave->RngState;
        }
    }
    if (!saveStatus)
    {
        if (!RestoreRuntimeConfig(GetRuntimeConfigSaveBuffer(playerSave->unk448), RUNTIME_CONFIG_SAVE_SIZE))
            ResetRuntimeConfigToRom();
        if (gUnknown_203B184 == NULL) {
            if (!RestoreGlobalScriptVars(playerSave->unk004)) {
                saveStatus = 4;
            }
        }
        else {
            MemoryCopy8(gUnknown_203B184->unk04C, playerSave->unk004, ARRAY_COUNT(playerSave->unk004));
        }
    }
    if (!saveStatus)
    {
        r1 = RestoreRecruitedPokemon(r4, RECRUITED_POKEMON_SAVE_SIZE);
        if (r1 != playerSave->savedRecruitedPokemon) {
            saveStatus = 3;
        }
        r4 += RECRUITED_POKEMON_SAVE_SIZE;
        r1 = RestorePoke2s(r4, 150 * 4);
        if (r1 != playerSave->unk428) {
            saveStatus = 3;
        }
        r4 += 150 * 4;
        r1 = RestoreTeamInventory(r4, TEAM_INVENTORY_SAVE_SIZE);
        if (r1 != playerSave->savedTeamInventory) {
            saveStatus = 3;
        }
        r4 += TEAM_INVENTORY_SAVE_SIZE;
        r1 = ReadRescueTeamInfo(r4, 0x10);
        if (r1 != playerSave->savedRescueTeamInfo) {
            saveStatus = 3;
        }
        r4 += 0x10;
        r1 = ReadSavedFriendAreas(r4, 0x8);
        if (r1 != playerSave->savedFriendAreas) {
            saveStatus = 3;
        }
        r4 += 0x8;
        r1 = RestoreAdventureData(r4, 0x100);
        if (r1 != playerSave->unk43C) {
            saveStatus = 3;
        }
        r4 += 0x100;
        r1 = sub_80954CC(r4, 0x594);
        if (r1 != playerSave->unk440) {
            saveStatus = 3;
        }
        r4 += 0x594;
        r1 = RestoreMailInfo(r4, MAIL_INFO_SAVE_SIZE);
        if (r1 != playerSave->savedMailInfo) {
            saveStatus = 3;
        }
        r4 += MAIL_INFO_SAVE_SIZE;
        r1 = RestoreAchievementsData(r4, ACHIEVEMENTS_SAVE_SIZE);
        if (r1 != playerSave->savedAchievements) {
            saveStatus = 3;
        }
        r4 += ACHIEVEMENTS_SAVE_SIZE;
        r1 = RestoreSpindaCafeData(r4, SPINDA_CAFE_SAVE_SIZE);
        /* Old saves lack this chunk (checksum 0); soft-accept rather than corrupt. */
        if (playerSave->savedSpindaCafe != 0 && r1 != playerSave->savedSpindaCafe) {
            saveStatus = 3;
        }
        else if (playerSave->savedSpindaCafe == 0) {
            ResetSpindaCafeData();
        }
        ApplyMaxLevelStatsToTeam();
    }
    MemoryFree(playerSave);
    return saveStatus;
}

u32 sub_8011F9C(s32 *r0, u8 *dest, s32 size)
{
    return ReadSaveSector(r0, dest, size);
}

u32 sub_8011FA8(void)
{
    u32 saveStatus;
    u32 temp3;
    u32 temp;
    struct unk_struct *r5 = MemoryAlloc(sizeof(struct unk_struct), MEMALLOC_GROUP_5);
    temp = 0x1F;
    saveStatus = ReadSaveSector(&temp, (u8 *)r5, sizeof(struct unk_struct));
    if( saveStatus == READ_SAVE_VALID)
    {
        if(r5->checksum != 0x5071412)
        {
            saveStatus = 4;
        }
    }
    temp3 = 0xf1209;
    if(saveStatus == READ_SAVE_VALID)
    {
        temp3 = r5->unk18;
    }
    MemoryFree(r5);
    return temp3;
}

bool8 IsSaveCorrupted(void)
{
    u32 temp;
    bool8 isCorrupted;
    struct unk_struct *r5 = MemoryAlloc(sizeof(struct unk_struct), MEMALLOC_GROUP_5);
    temp = 0x1F;
    isCorrupted = FALSE;
    if(ReadSaveSector(&temp, (u8 *)r5, sizeof(struct unk_struct)) == READ_SAVE_VALID)
    {
        if(r5->checksum == 0x5071412)
        {
            isCorrupted = TRUE;
        }
    }
    MemoryFree(r5);
    return isCorrupted;
}

u32 WriteSavetoPak(s32 *param_1, u32 param_2)
{
  struct UnkStruct_sub_8011DAC *playerSave;
  const u8 *gameName;
  s32 saveStatus1;
  s32 saveStatus2;
  u8 *array_ptr;

  playerSave = MemoryAlloc(sizeof(struct UnkStruct_sub_8011DAC), MEMALLOC_GROUP_5);
  array_ptr = playerSave->unk448;
  if (gUnknown_203B184 == NULL) {
    playerSave->unk41C = param_2;
    playerSave->unk418 = sub_8011C34();
    playerSave->RngState = GetRNGState();
  }
  else {
    playerSave->unk41C = gUnknown_203B184->unk054;
    playerSave->unk418 = gUnknown_203B184->unk050;
    playerSave->RngState = gUnknown_203B184->RngState;
  }
   playerSave->checksum = 0x5071412;
  gameName = GetGameInternalName();
  strncpy(playerSave->gameInternalName,gameName, ARRAY_COUNT(playerSave->gameInternalName));
  if (gUnknown_203B184 == NULL) {
    SaveGlobalScriptVars(playerSave->unk004);
  }
  else {
    MemoryCopy8(playerSave->unk004,gUnknown_203B184->unk04C,ARRAY_COUNT(playerSave->unk004));
  }

  playerSave->savedRecruitedPokemon = SaveRecruitedPokemon(array_ptr, RECRUITED_POKEMON_SAVE_SIZE);
  array_ptr += RECRUITED_POKEMON_SAVE_SIZE;
  playerSave->unk428 = SavePoke2s(array_ptr, 150 * 4);
  array_ptr += 150 * 4;
  playerSave->savedTeamInventory = SaveTeamInventory(array_ptr, TEAM_INVENTORY_SAVE_SIZE);
  array_ptr += TEAM_INVENTORY_SAVE_SIZE;
  playerSave->savedRescueTeamInfo = SaveRescueTeamInfo(array_ptr,0x10);
  array_ptr += 0x10;
  playerSave->savedFriendAreas = SaveFriendAreas(array_ptr,8);
  array_ptr += 8;
  playerSave->unk43C = SaveAdventureData(array_ptr, 0x100);
  array_ptr += 0x100;
  playerSave->unk440 = sub_8095624(array_ptr,0x594);
  array_ptr += 0x594;
  playerSave->savedMailInfo = SaveMailInfo(array_ptr, MAIL_INFO_SAVE_SIZE);
  array_ptr += MAIL_INFO_SAVE_SIZE;
  playerSave->savedAchievements = SaveAchievementsData(array_ptr, ACHIEVEMENTS_SAVE_SIZE);
  array_ptr += ACHIEVEMENTS_SAVE_SIZE;
  playerSave->savedSpindaCafe = SaveSpindaCafeData(array_ptr, SPINDA_CAFE_SAVE_SIZE);
  array_ptr += SPINDA_CAFE_SAVE_SIZE;
  SaveRuntimeConfig(array_ptr, RUNTIME_CONFIG_SAVE_SIZE);
  array_ptr += RUNTIME_CONFIG_SAVE_SIZE;

  saveStatus1 = WriteSaveSector(param_1, (u8 *)playerSave, sizeof(struct UnkStruct_sub_8011DAC));
  saveStatus2 = WriteSaveSector(param_1, (u8 *)playerSave, sizeof(struct UnkStruct_sub_8011DAC));
  MemoryFree(playerSave);

  if (saveStatus1 != SAVE_COMPLETED)
    return saveStatus1;
  if (saveStatus2 != SAVE_COMPLETED)
    return saveStatus2;

  return SAVE_COMPLETED;
}

s32 sub_80121D4(s32 *a, u8 *src, s32 size)
{
    return WriteSaveSector(a, src, size);
}

u32 sub_80121E0(u32 r0)
{
    u32 temp;
    const char *gameName;
    u32 saveStatus;
    struct unk_struct *r4 = MemoryAlloc(sizeof(struct unk_struct), MEMALLOC_GROUP_5);
    temp = 0x1F;

    r4->unk18 = r0;
    r4->dungeonLocation = *GetDungeonLocationInfo();
    r4->checksum = 0x5071412;

    gameName = GetGameInternalName();
    strncpy(r4->gameInternalName, gameName, ARRAY_COUNT(r4->gameInternalName));
    sub_80958E4(&r4->unk20, 0);
    saveStatus = WriteSaveSector(&temp, (u8 *)r4, sizeof(struct unk_struct));
    MemoryFree(r4);
    return saveStatus;
}

u32 sub_8012240(void)
{
    s32 status;
    struct unk_struct *r5 = MemoryAlloc(sizeof(struct unk_struct), MEMALLOC_GROUP_5);
    MemoryFill8(r5, 0xFF, 0x4);
    StopBGMResetSoundEffectCounters();
    status = WriteFlashData(0x1F, (u8 *)r5, sizeof(struct unk_struct));
    StartBGMusic();
    MemoryFree(r5);
    if (status != 0)
        return SAVE_FAILED;
    else
        return SAVE_COMPLETED;
}

void sub_8012284(void)
{
    sub_80122D0();
    sub_80122F4();
    InitializePlayerData();
}

// Is this the new game func?
void sub_8012298(void)
{
    ResetAdventureInfo();
    ResetAchievementsData();
    ResetSpindaCafeData();
    sub_80122A8();
}

// Init new game?
void sub_80122A8(void)
{
    ResetRuntimeConfigToRom();
    sub_80122D0();
    sub_80122F4();
    InitializePlayerData();
    sub_8012240();
}

void nullsub_33(void)
{
}

void sub_80122C4(void)
{
    sub_80122A8();
}

void sub_80122D0(void)
{
    sub_8011C28(0);
    sub_8011C40(-1);
    ResetNumAdventures();
    ResetPlayTime(gPlayTimeRef);
}

void sub_80122F4(void)
{
    ThoroughlyResetScriptVars();
}

void InitializePlayerData(void)
{
    ResetCustomDebugMenuState();
    InitializeFriendAreas();
    InitializeRecruitedPokemon();
    InitializeMoneyItems();
    InitializeRescueTeamInfo();
    sub_80972F4();
    sub_8095118();
    InitializeMailJobsNews();
    sub_80974E8();
    InitializeGameOptions(TRUE);
    InitializeExclusivePokemon();
    ResetAchievementsData();
    ResetSpindaCafeData();
}


UNUSED static void nullsub_200(u32 r0)
{
}

UNUSED static void sub_8012334(UnkStruct_203B184 *data)
{
    gUnknown_203B184 = data;
    if (data != NULL) {
        gTeamInventoryRef = data->MoneyItems;
        gRecruitedPokemonRef = data->recruitedPokemon;
        gUnknown_203B480 = data->unk8;
        gUnknown_203B484 = data->unkC;
        gUnknown_203B488 = data->unk10;
        gUnknown_203B48C = data->unk14;
        gUnknown_203B490 = data->mailInfo;
        gRescueTeamInfoRef = data->RescueTeamInfo;
        gUnknown_203B494 = data->unk20;
        gExclusiveMonPtr = data->exclusivePokemon;
        gFriendAreas = data->BoughtFriendAreas;
        gGameOptionsRef = data->gameOptions;
        gPlayTimeRef = data->playTime;
    }
    else {
        gTeamInventoryRef = GetMoneyItemsInfo();
        gRecruitedPokemonRef = GetRecruitedPokemon();
        gUnknown_203B480 = sub_80950F8();
        gUnknown_203B484 = sub_8095100();
        gUnknown_203B488 = sub_8095108();
        gUnknown_203B48C = sub_8095110();
        gUnknown_203B490 = GetMailInfo();
        gRescueTeamInfoRef = GetRescueTeamInfo();
        gUnknown_203B494 = sub_8097680();
        gExclusiveMonPtr = GetExclusivePokemon();
        gFriendAreas = GetBoughtFriendAreas();
        gGameOptionsRef = GetGameOptions();
        gPlayTimeRef = GetPlayTime();
    }
}

/* Link-map only (NOLOAD in SRAM @ 0x0E000000). Reports actual streamed save
 * bytes in `make` --print-memory-usage: primary + backup main pak + sector
 * 0x1F metadata. Chip capacity remains MEMORY LENGTH 128K.
 * External linkage and an explicit initializer on purpose: agbcc drops
 * unreferenced statics, and treats an uninitialized definition as tentative
 * (landing in .bss, ignoring the section attribute). Either one silently zeroes
 * the reported SRAM footprint in matching builds. */
USED u8 gSramSaveFootprint[
    sizeof(struct UnkStruct_sub_8011DAC) * 2 + sizeof(struct unk_struct)
] __attribute__((section(".sram_save"))) = {0};
