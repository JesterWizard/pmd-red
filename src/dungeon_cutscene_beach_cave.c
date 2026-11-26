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
    .str = _(" Give me...{WAIT_PRESS} Give me back what\nyou stole from me!{EXTRA_MSG} That's my personal treasure!\nIt means everything to me!"),
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

static void SetUpBeachCavePit(void);

/* Called from sub_80847D4 before the fixed-room cutscene lookup. */
bool8 SkyStory_TrySetBeachCavePitCutscene(void)
{
    if (!SkyStory_IsBeachCave(gDungeon->unk644.dungeonLocation.id))
        return FALSE;
    if (gDungeon->fixedRoomNumber != FIXED_ROOM_SINISTER_WOODS_TEAM_MEANIES)
        return FALSE;
    gDungeon->cutscene = CUTSCENE_BEACH_CAVE_PIT;
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

    DungeonStartNewBGM(MUS_IN_THE_DEPTHS_OF_THE_PIT);
    sub_8085374();
    sub_80854D4();
    sub_8085930(DIRECTION_NORTH);
    sub_80855E4(sub_8086A3C);
    sub_808563C(sub_8086A54);
    sub_8085860(leaderEntity->pos.x, leaderEntity->pos.y - 3);
    CopyMonsterNameToBuffer(gFormatBuffer_Monsters[2], MONSTER_ZUBAT);
    CopyMonsterNameToBuffer(gFormatBuffer_Monsters[3], MONSTER_KOFFING);
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
    DisplayDungeonDialogue_Async(&sPit1);
    DungeonWaitFrames_Async(10, 0x46);
    if (EntityIsValid(zubatEntity))
        sub_806CDD4(zubatEntity, 0, DIRECTION_SOUTH);
    if (EntityIsValid(koffingEntity))
        sub_806CDD4(koffingEntity, 0, DIRECTION_SOUTH);
    /* Bring the thieves into view, as the EoS scene frames both groups. */
    if (EntityIsValid(zubatEntity)) {
        bossPos.x = zubatEntity->pixelPos.x;
        bossPos.y = zubatEntity->pixelPos.y + 0x2800;
        ShiftCameraToPosition(&bossPos, 0x30);
    }
    DungeonWaitFrames_Async(20, 0x46);
    DisplayDungeonDialogue_Async(&sPit2);
    DungeonWaitFrames_Async(10, 0x46);
    if (EntityIsValid(partnerEntity))
        SpriteShockEffect(partnerEntity);
    DisplayDungeonDialogue_Async(&sPit3);
    DungeonWaitFrames_Async(10, 0x46);
    DisplayDungeonDialogue_Async(&sPit4);
    DungeonWaitFrames_Async(10, 0x46);
    DisplayDungeonDialogue_Async(&sPit5);
    DungeonWaitFrames_Async(10, 0x46);
    DisplayDungeonDialogue_Async(&sPit6);
    DungeonWaitFrames_Async(10, 0x46);
    if (EntityIsValid(partnerEntity))
        SpriteShockEffect(partnerEntity);
    DisplayDungeonDialogue_Async(&sPit7);
    DungeonWaitFrames_Async(10, 0x46);
    DisplayDungeonDialogue_Async(&sPit8);
    DungeonWaitFrames_Async(10, 0x46);
    DungeonStartNewBGM(MUS_BOSS_BATTLE);
    ShiftCameraToPosition(&leaderEntity->pixelPos, 0x10);
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
