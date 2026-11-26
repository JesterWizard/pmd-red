#ifndef GUARD_SKY_STORY_H
#define GUARD_SKY_STORY_H

/*
 * Explorers of Sky demake (opening chapter).
 * Built when the Makefile selects STORY=sky (default for the modern build),
 * which also defines SKY_STORY. See documentation/Features/SkyDemake.md.
 */

/* Extra ground-script NPC kinds (GroundLivesData.kind), appended after the
 * 147 vanilla entries of gGroundLivesTypeData_811E63C. */
#define SKY_LIVES_KIND_FIRST 147
#define SKY_LIVES_ZUBAT      147
#define SKY_LIVES_KOFFING    148
#define SKY_LIVES_WIGGLYTUFF 149
#define SKY_LIVES_KRABBY     150
#define SKY_LIVES_DIGLETT    151
#define SKY_LIVES_KIND_COUNT 5

#ifndef __ASSEMBLER__
#include "global.h"

/* TRUE while Tiny Woods is playing the part of Beach Cave. */
bool8 SkyStory_IsBeachCave(u8 dungeonId);
/* TRUE on the story run, when Beach Cave Pit hosts the Zubat & Koffing fight. */
bool8 SkyStory_IsBeachCaveStoryRun(void);
/* Called after floor data is loaded (SetFloorItemMonsterSpawns). */
void SkyStory_ApplyFloorOverrides(void);
s32 SkyStory_GetBeachCaveFloorCount(void);
u8 SkyStory_RemapDataFloor(u8 dungeonId, u8 floor);
struct OpenedFile;
void SkyStory_PatchFixedMap(struct OpenedFile *file);
/* Fixed-room spawn remap: Gengar/Ekans -> Zubat/Koffing; Medicham dropped. */
s16 SkyStory_RemapFixedRoomSpecies(s16 species);

/* Beach Cave Pit boss cutscene (src/dungeon_cutscene_beach_cave.c). */
bool8 SkyStory_TrySetBeachCavePitCutscene(void);
void SkyStory_BeachCavePitSetup(void);
void SkyStory_BeachCavePitPreFightDialogue(void);
void SkyStory_HandleBeachCavePitBossFaint(u8 monsterBehavior);
#endif

#endif /* GUARD_SKY_STORY_H */
