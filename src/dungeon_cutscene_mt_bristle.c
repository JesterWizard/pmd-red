/*
 * Explorers of Sky demake: the Drowzee fight at Mt. Bristle Peak (chapter 3).
 *
 * EoS plays the peak as dungeon 5 (fixed floor 2), entered from the end of
 * m03a0801 (first fight) or m03a0901 (re-fight) on the ground map D03P41A:
 * Drowzee's closing speech, bgm_Stop, two white flashes, CORO_BOSS_WIPE_FUNC
 * and main_EnterDungeon(5, 30). The GBA plays the peak as a Mt. Steel run
 * (SCRIPT_DUNGEON_3, src/sky_story.c): the scene on the ground ends before
 * Drowzee's closing speech, which this cutscene plays in the boss room,
 * followed by the transition (src/sky_boss_wipe.c) and Boss Battle!. The room
 * is Red's Skarmory room (FIXED_ROOM_MT_STEEL_SKARMORY) patched with EoS's
 * fixed floor; Drowzee takes Skarmory's slot (BEHAVIOR_SKARMORY). EoS has no
 * Azurill in the dungeon (fixed floor 2 has Drowzee only).
 *
 * Red's Mt. Steel cutscene flags mark the peak reached (the re-fight's lines
 * from then on, as EoS's m03a0901) and cleared.
 */
#include "global.h"

#ifdef SKY_STORY

#include "globaldata.h"
#include "dungeon_cutscene.h"
#include "dungeon_message.h"
#include "dungeon_music.h"
#include "dungeon_util.h"
#include "dungeon_vram.h"
#include "dungeon_mon_sprite_render.h"
#include "exclusive_pokemon.h"
#include "pokemon.h"
#include "weather.h"
#include "constants/cutscenes.h"
#include "constants/direction.h"
#include "constants/emotions.h"
#include "constants/fixed_rooms.h"
#include "constants/monster.h"
#include "constants/weather.h"
#include "sky_story.h"
#include "sky_boss_wipe.h"
#include "structs/str_dungeon.h"

/* EoS m03a0801: Drowzee's last two boxes before the fight. */
static const struct DungeonDialogueStruct sPeak1 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 12,
    .speciesId = MONSTER_DROWZEE,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" This should be a laugh.{WAIT_PRESS} Let's see\nif you can take me down."),
};
static const struct DungeonDialogueStruct sPeak2 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 12,
    .speciesId = MONSTER_DROWZEE,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" Show me what you've got!"),
};

/* EoS m03a0901 (the re-fight): Drowzee's last three boxes. */
static const struct DungeonDialogueStruct sRe1 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 12,
    .speciesId = MONSTER_DROWZEE,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" You foolish pests. Do I have to\nembarrass you again?"),
};
static const struct DungeonDialogueStruct sRe2 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 12,
    .speciesId = MONSTER_DROWZEE,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" You seem to hunger for\npunishment. Let me help you out!"),
};
static const struct DungeonDialogueStruct sRe3 = {
    .type = 0,
    .spriteId = EMOTION_NORMAL,
    .spritePlacementId = 12,
    .speciesId = MONSTER_DROWZEE,
    .allowType = DIALOGUE_ALLOW_ALL,
    .str = _(" C'mon! Whenever you want!"),
};

static EWRAM_DATA bool8 sMtBristlePeakRefight = FALSE;

/* Called from sub_80847D4 before the fixed-room cutscene lookup (Red's own
 * Mt. Steel entry would run Skarmory's cutscene in this room). */
bool8 SkyStory_TrySetMtBristlePeakCutscene(void)
{
    if (!SkyStory_IsMtBristle(gDungeon->unk644.dungeonLocation.id))
        return FALSE;
    if (gDungeon->fixedRoomNumber != FIXED_ROOM_MT_STEEL_SKARMORY)
        return FALSE;
    gDungeon->cutscene = CUTSCENE_MT_BRISTLE_PEAK;
    sMtBristlePeakRefight = GetCutsceneFlag(CUTSCENE_FLAG_MT_STEEL_REACHED);
    SetTempCutsceneFlag(CUTSCENE_FLAG_MT_STEEL_REACHED);
    gDungeon->unk644.unk31 = 1;
    sub_807E5E4(WEATHER_CLEAR);
    return TRUE;
}

/* Floor setup (sub_80848F0): the team on its slots facing Drowzee, Drowzee
 * facing them, the camera between them (EoS's room: Drowzee two tiles above
 * the gap between the hero and the partner). The music goes on from the
 * scene on the ground (m03a0801's In the Depths of the Pit). */
void SkyStory_MtBristlePeakSetup(void)
{
    Entity *leaderEntity = CutsceneGetLeader();
    Entity *drowzeeEntity = GetEntityFromMonsterBehavior(BEHAVIOR_SKARMORY);

    DungeonStartNewBGM(MUS_SKY_IN_THE_DEPTHS_OF_THE_PIT);
    sub_8085374();
    sub_80854D4();
    sub_8085930(DIRECTION_NORTH);
    sub_80855E4(sub_8086A54); /* the team in cutscene mode, shown (no walk-in) */
    sub_808563C(sub_8086A54);
    if (EntityIsValid(drowzeeEntity))
        SetFacingDirection(drowzeeEntity, DIRECTION_SOUTH);
    sub_8085860(leaderEntity->pos.x - 1, leaderEntity->pos.y - 1);
    CopyMonsterNameToBuffer(gFormatBuffer_Monsters[2], MONSTER_DROWZEE);
}

/* EoS before main_EnterDungeon(5, 30): bgm_Stop(), the two flashes,
 * CORO_BOSS_WIPE_FUNC; then the dungeon loads behind the white and the fight
 * fades in with Boss Battle! (as Beach Cave Pit's PitBossWipe). */
static void PeakBossWipe(Entity *leaderEntity)
{
    SkyBossWipe_Start();
    ShiftCameraToPosition(&leaderEntity->pixelPos, 0x10); /* 17 frames */
    SkyBossWipe_HoldWhite(136 - 17 - 4);
    DungeonStartNewBGM(MUS_SKY_BOSS_BATTLE);
    SkyBossWipe_HoldWhite(4);
    SkyBossWipe_FadeIn();
}

void SkyStory_MtBristlePeakPreFightDialogue(void)
{
    Entity *leaderEntity = CutsceneGetLeader();

    DungeonWaitFrames_Async(20, 0x46);
    if (sMtBristlePeakRefight) {
        DisplayDungeonDialogue_Async(&sRe1);
        DisplayDungeonDialogue_Async(&sRe2);
        DisplayDungeonDialogue_Async(&sRe3);
    }
    else {
        DisplayDungeonDialogue_Async(&sPeak1);
        DisplayDungeonDialogue_Async(&sPeak2);
    }
    PeakBossWipe(leaderEntity);
}

/* The dungeon is won once Drowzee is down (EoS: "exit the floor when the
 * enemies are defeated", fixed floor 2's properties). */
void SkyStory_HandleMtBristlePeakBossFaint(u8 monsterBehavior)
{
    s32 i;

    for (i = 0; i < DUNGEON_MAX_WILD_POKEMON; i++) {
        Entity *entity = gDungeon->wildPokemon[i];
        if (EntityIsValid(entity) && GetEntInfo(entity)->monsterBehavior != monsterBehavior)
            return;
    }
    SetTempCutsceneFlag(CUTSCENE_FLAG_MT_STEEL_COMPLETE);
    gDungeon->unk2 = DUNGEON_UNK2_1;
}

#endif /* SKY_STORY */
