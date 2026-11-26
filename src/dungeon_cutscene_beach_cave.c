/*
 * Explorers of Sky demake: the Zubat & Koffing fight in Beach Cave Pit.
 * Pre-fight dialogue follows EoS SCRIPT/D01P41A/m01a0401. The floor reuses the
 * Team Meanies boss room (FIXED_ROOM_SINISTER_WOODS_TEAM_MEANIES) with Gengar /
 * Ekans swapped for Zubat / Koffing (src/sky_story.c), so the bosses keep the
 * Gengar / Ekans monster behaviours. No cutscene flags are used: this fight
 * never marks Sinister Woods as reached or cleared.
 */
#include "global.h"

#ifdef SKY_STORY

#include "global.h"
#include "globaldata.h"
#include "dungeon_cutscene.h"
#include "effect_main.h"
#include "dungeon_vram.h"
#include "dungeon_8041AD0.h"
#include "dungeon_mon_sprite_render.h"
#include "constants/bg_music.h"
#include "constants/direction.h"
#include "constants/friend_area.h"
#include "constants/weather.h"
#include "dungeon_items.h"
#include "dungeon_range.h"
#include "dungeon_map_access.h"
#include "dungeon_message.h"
#include "dungeon_music.h"
#include "dungeon_misc.h"
#include "dungeon_logic.h"
#include "dungeon_random.h"
#include "dungeon_util.h"
#include "exclusive_pokemon.h"
#include "friend_area.h"
#include "items.h"
#include "pokemon_3.h"
#include "pokemon.h"
#include "position_util.h"
#include "trap.h"
#include "math.h"
#include "dungeon_config.h"
#include "dungeon_boss_dialogue.h"
#include "constants/cutscenes.h"
#include "constants/emotions.h"
#include "constants/fixed_rooms.h"
#include "dungeon_cutscene.h"
#include "sky_story.h"
#include "weather.h"
#include "event_flag.h"
#include "constants/event_flag.h"
#include "dungeon_cutscenes.h"

static const struct DungeonDialogueStruct sPit1 = {
    .type = 0,
    .spriteId = EMOTION_DETERMINED,
    .spritePlacementId = 2,
    .speciesId = DIALOGUE_MONSTER_PARTNER,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Um...{WAIT_PRESS} Hey!"),
};
static const struct DungeonDialogueStruct sPit2 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 12,
    .speciesId = MONSTER_KOFFING,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Well, well...{EXTRA_MSG} If it isn't our old friend, the\nbig chicken."),
};
static const struct DungeonDialogueStruct sPit3 = {
    .type = 0,
    .spriteId = EMOTION_PAINED,
    .spritePlacementId = 2,
    .speciesId = DIALOGUE_MONSTER_PARTNER,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Urk!"),
};
static const struct DungeonDialogueStruct sPit4 = {
    .type = 0,
    .spriteId = EMOTION_SHOUTING,
    .spritePlacementId = 2,
    .speciesId = DIALOGUE_MONSTER_PARTNER,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Give me...{WAIT_PRESS} Give me back what\nyou stole from me!"),
};
/* EoS plays the angry jump's sound (8971) between the two halves. */
static const struct DungeonDialogueStruct sPit4b = {
    .type = 0,
    .spriteId = EMOTION_SHOUTING,
    .spritePlacementId = 2,
    .speciesId = DIALOGUE_MONSTER_PARTNER,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" That's my personal treasure!\nIt means everything to me!"),
};
static const struct DungeonDialogueStruct sPit5 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 13,
    .speciesId = MONSTER_ZUBAT,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Treasure, you say?{WAIT_PRESS} So that\nthing really is valuable, huh?"),
};
static const struct DungeonDialogueStruct sPit6 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 12,
    .speciesId = MONSTER_KOFFING,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" It could be worth more than\nwe'd hoped for, I'd say.{EXTRA_MSG} We ought to try selling it.\nWho knows? It might get a good price.{EXTRA_MSG} Whoa-ho-ho!{WAIT_PRESS} All the more\nreason not to give it back!"),
};
static const struct DungeonDialogueStruct sPit7 = {
    .type = 0,
    .spriteId = EMOTION_SUPRISED,
    .spritePlacementId = 2,
    .speciesId = DIALOGUE_MONSTER_PARTNER,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" You can't!"),
};
static const struct DungeonDialogueStruct sPit8 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 13,
    .speciesId = MONSTER_ZUBAT,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" If you want it back that\nbadly...{WAIT_PRESS} Come and get it! Heh-heh-heh!"),
};

/* Re-fight (EoS m01a0501): used once the Pit has been reached before. */
static const struct DungeonDialogueStruct sRe1 = {
    .type = 0,
    .spriteId = EMOTION_WORRIED,
    .spritePlacementId = 2,
    .speciesId = DIALOGUE_MONSTER_PARTNER,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Oh... What?"),
};
/* EoS: the thieves' "!" (8964) between the partner's two lines. */
static const struct DungeonDialogueStruct sRe1b = {
    .type = 0,
    .spriteId = EMOTION_WORRIED,
    .spritePlacementId = 2,
    .speciesId = DIALOGUE_MONSTER_PARTNER,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Why are you still here?{EXTRA_MSG} I expected you to have gotten\nfar away by now."),
};
static const struct DungeonDialogueStruct sRe2 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 12,
    .speciesId = MONSTER_KOFFING,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Y-you...{WAIT_PRESS} Shut up!"),
};
static const struct DungeonDialogueStruct sRe3 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 13,
    .speciesId = MONSTER_ZUBAT,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" We can't find our way out of\nthis place!"),
};
static const struct DungeonDialogueStruct sRe4 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 12,
    .speciesId = MONSTER_KOFFING,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Whoa-ho-ho!{WAIT_PRESS} But there's nothing\nto fear, is there? It's only you!"),
};
static const struct DungeonDialogueStruct sRe5 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 13,
    .speciesId = MONSTER_ZUBAT,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Heh-heh-heh! Once a pushover,\nalways a pushover!"),
};
static const struct DungeonDialogueStruct sRe6 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 12,
    .speciesId = MONSTER_KOFFING,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" We'll show you what a wimp you\nare all over again!{WAIT_PRESS} You ready?"),
};

/* EoS marks the first arrival with SCENARIO_MAIN (2,3) (m01a0401). */
static EWRAM_DATA bool8 sBeachCavePitRefight = FALSE;

static void SetUpBeachCavePit(void);
static void PitEmote(Entity *entity, u16 soundEffect);
static void PitBossWipe(void);

/* Called from sub_80847D4 before the fixed-room cutscene lookup. */
bool8 SkyStory_TrySetBeachCavePitCutscene(void)
{
    if (!SkyStory_IsBeachCave(gDungeon->unk644.dungeonLocation.id))
        return FALSE;
    if (gDungeon->fixedRoomNumber != FIXED_ROOM_SINISTER_WOODS_TEAM_MEANIES)
        return FALSE;
    gDungeon->cutscene = CUTSCENE_BEACH_CAVE_PIT;
    {
        u32 main, sub;
        GetScriptVarScenario(SCENARIO_MAIN, &main, &sub);
        sBeachCavePitRefight = (main == 2 && sub >= 3);
        if (main == 2 && sub < 3)
            ScenarioCalc(SCENARIO_MAIN, 2, 3);
    }
    gDungeon->unk644.unk31 = 1;
    sub_807E5E4(WEATHER_CLEAR);
    return TRUE;
}

/* Floor setup (sub_80848F0): place the team below the thieves. */
void SkyStory_BeachCavePitSetup(void)
{
    SetUpBeachCavePit();
}

static void SetUpBeachCavePit(void)
{
    Entity *leaderEntity = CutsceneGetLeader();

    DungeonStartNewBGM(MUS_SKY_IN_THE_DEPTHS_OF_THE_PIT);
    sub_8085374();
    sub_80854D4();
    sub_8085930(DIRECTION_NORTH);
    sub_80855E4(sub_8086A3C);
    sub_808563C(sub_8086A54);
    /* One tile left of the leader: the middle of the Pit's sand, between
     * the leader and the partner (and between the thieves). */
    sub_8085860(leaderEntity->pos.x - 1, leaderEntity->pos.y - 3);
    CopyMonsterNameToBuffer(gFormatBuffer_Monsters[2], MONSTER_ZUBAT);
    CopyMonsterNameToBuffer(gFormatBuffer_Monsters[3], MONSTER_KOFFING);
}

static void BeachCavePitRefightDialogue(Entity *leaderEntity, Entity *partnerEntity, Entity *zubatEntity, Entity *koffingEntity)
{
    PixelPos bossPos;

    /* EoS m01a0501: se_Play(8962) + "?" on the partner. */
    PitEmote(partnerEntity, 469);
    DisplayDungeonDialogue_Async(&sRe1);
    /* se_Play(8964) + "!" on both thieves as they turn round. */
    PitEmote(zubatEntity, 465);
    PitEmote(koffingEntity, STOP_SOUND_EFFECT);
    if (EntityIsValid(zubatEntity)) {
        sub_806CDD4(zubatEntity, 0, DIRECTION_SOUTH);
        bossPos.x = zubatEntity->pixelPos.x - 0x1800; /* centre the Pit */
        bossPos.y = zubatEntity->pixelPos.y + 0x1800;
        ShiftCameraToPosition(&bossPos, 0x30);
    }
    if (EntityIsValid(koffingEntity))
        sub_806CDD4(koffingEntity, 0, DIRECTION_SOUTH);
    DungeonWaitFrames_Async(10, 0x46);
    DisplayDungeonDialogue_Async(&sRe1b);
    PlaySoundEffect(470); /* se_Play(8972): Koffing sweats */
    DungeonWaitFrames_Async(20, 0x46);
    DisplayDungeonDialogue_Async(&sRe2);
    DisplayDungeonDialogue_Async(&sRe3);
    /* se_Play(8973) + EFFECT_SHOCKED on the partner and the hero. */
    PitEmote(partnerEntity, 473);
    PitEmote(leaderEntity, STOP_SOUND_EFFECT);
    DungeonWaitFrames_Async(45, 0x46);
    DisplayDungeonDialogue_Async(&sRe4);
    DisplayDungeonDialogue_Async(&sRe5);
    DisplayDungeonDialogue_Async(&sRe6);
    DungeonWaitFrames_Async(10, 0x46);
    PitBossWipe();
    DungeonStartNewBGM(MUS_SKY_BOSS_BATTLE);
    ShiftCameraToPosition(&leaderEntity->pixelPos, 0x10);
}

void SkyStory_BeachCavePitPreFightDialogue(void)
{
    Entity *leaderEntity = CutsceneGetLeader();
    Entity *partnerEntity = CutsceneGetPartner();
    Entity *zubatEntity = GetEntityFromMonsterBehavior(BEHAVIOR_GENGAR);
    Entity *koffingEntity = GetEntityFromMonsterBehavior(BEHAVIOR_EKANS);

    PixelPos bossPos;

    sub_8086448();
    DungeonWaitFrames_Async(10, 0x46);
    if (sBeachCavePitRefight) {
        BeachCavePitRefightDialogue(leaderEntity, partnerEntity, zubatEntity, koffingEntity);
        return;
    }
    DisplayDungeonDialogue_Async(&sPit1);
    DungeonWaitFrames_Async(10, 0x46);
    /* EoS m01a0401: se_Play(8964) + "!" on both thieves, then they turn. */
    PitEmote(zubatEntity, 465);
    PitEmote(koffingEntity, STOP_SOUND_EFFECT);
    DungeonWaitFrames_Async(20, 0x46);
    if (EntityIsValid(zubatEntity))
        sub_806CDD4(zubatEntity, 0, DIRECTION_SOUTH);
    if (EntityIsValid(koffingEntity))
        sub_806CDD4(koffingEntity, 0, DIRECTION_SOUTH);
    /* Bring the thieves into view, as the EoS scene frames both groups. */
    if (EntityIsValid(zubatEntity)) {
        bossPos.x = zubatEntity->pixelPos.x - 0x1800; /* centre the Pit */
        bossPos.y = zubatEntity->pixelPos.y + 0x1800;
        ShiftCameraToPosition(&bossPos, 0x30);
    }
    DungeonWaitFrames_Async(20, 0x46);
    DisplayDungeonDialogue_Async(&sPit2);
    DungeonWaitFrames_Async(10, 0x46);
    /* EoS: the partner flinches back without a sound. */
    PitEmote(partnerEntity, STOP_SOUND_EFFECT);
    DisplayDungeonDialogue_Async(&sPit3);
    DungeonWaitFrames_Async(10, 0x46);
    DisplayDungeonDialogue_Async(&sPit4);
    PlaySoundEffect(457); /* se_Play(8971) with the angry jump */
    DisplayDungeonDialogue_Async(&sPit4b);
    DungeonWaitFrames_Async(10, 0x46);
    DisplayDungeonDialogue_Async(&sPit5);
    DungeonWaitFrames_Async(10, 0x46);
    DisplayDungeonDialogue_Async(&sPit6);
    DungeonWaitFrames_Async(10, 0x46);
    PitEmote(partnerEntity, 463); /* se_Play(8968) + EFFECT_SHOCKED */
    DisplayDungeonDialogue_Async(&sPit7);
    DungeonWaitFrames_Async(10, 0x46);
    DisplayDungeonDialogue_Async(&sPit8);
    DungeonWaitFrames_Async(10, 0x46);
    PitBossWipe();
    DungeonStartNewBGM(MUS_SKY_BOSS_BATTLE);
    ShiftCameraToPosition(&leaderEntity->pixelPos, 0x10);
}

/* The "!" over a cutscene actor (SpriteShockEffect's effect) with an EoS
 * sound, or none (STOP_SOUND_EFFECT). */
static void PitEmote(Entity *entity, u16 soundEffect)
{
    if (soundEffect != STOP_SOUND_EFFECT)
        PlaySoundEffect(soundEffect);
    if (EntityIsValid(entity))
        sub_80861F8(323, entity, FALSE);
}

static void PitWhite(s32 level)
{
    SetDungeonBGColorRGB(level, level, level, TRUE, FALSE);
    DungeonRunFrameActions(0x46);
}

/* EoS m01a0401 / m01a0501 before the fight: bgm_Stop(); two white flashes with
 * se_Play(5143) (SE_NUM_EVENT_EFF_FLASH_HEAVY), WaitSe; then
 * CORO_BOSS_WIPE_FUNC: se_Play(5136) (SE_NUM_EVENT_EFF_WIPE_01), 60 frames,
 * a 30-frame white-out; the fight fades in from it. */
static void PitBossWipe(void)
{
    s32 i, n;

    DungeonStopBGM();
    for (n = 0; n < 2; n++) {
        PlaySoundEffect(SE_SKY_FLASH_HEAVY);
        PitWhite(255);
        DungeonWaitFrames_Async(2, 0x46);
        PitWhite(128);
        PitWhite(0);
        DungeonWaitFrames_Async(10, 0x46);
    }
    DungeonWaitFrames_Async(30, 0x46); /* WaitSe(5143) */
    PlaySoundEffect(SE_SKY_BOSS_WIPE);
    DungeonWaitFrames_Async(60, 0x46);
    for (i = 0; i <= 30; i++)
        PitWhite(i * 255 / 30);
    for (i = 30; i >= 0; i--)
        PitWhite(i * 255 / 30);
}

/* The fight ends when both thieves are down. */
void SkyStory_HandleBeachCavePitBossFaint(u8 monsterBehavior)
{
    s32 i;

    for (i = 0; i < DUNGEON_MAX_WILD_POKEMON; i++) {
        Entity *entity = gDungeon->wildPokemon[i];
        if (EntityIsValid(entity) && GetEntInfo(entity)->monsterBehavior != monsterBehavior)
            return;
    }
    gDungeon->unk2 = DUNGEON_UNK2_1;
}

#endif /* SKY_STORY */
