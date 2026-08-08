#ifndef GUARD_POKEMON_3_H
#define GUARD_POKEMON_3_H

#include "pokemon.h"
#include "structs/str_spawn_pokemon_data.h"

void GenerateHiddenPower(HiddenPower* a1);
bool8 HasRecruitedMon(s32 species_);
s16 GetBaseSpecies(s16 index);
s16 GetBaseSpeciesNoUnown(s16 index);
s32 GetUnownIndex(s16 index);
s16 ExtractSpeciesIndex(SpawnPokemonData *data);
void SetSpeciesToExtract(SpawnPokemonData *data, s32 species_);
void SetSpeciesLevelToExtract(SpawnPokemonData *data, s32 level, s32 species_);
s32 ExtractLevel(SpawnPokemonData *data);
const u8 *GetIQSkillName(u8 skill);
void CopyTacticsNameToBuffer(char *buffer, u8 tactic);
const u8 *GetIQSkillDescription(u8 skill);
const u8 *GetTacticsDescription(u8 tactic);
bool8 TacticsTargetLeader(u8 tactic);
void GetAvailTacticsforLvl(u8 *tacticsBuffer, s32 pokeLevel);
void GetUnlockedTacticFlags(u8 *tacticsBuffer, s32 pokeLevel);
bool8 HasIQForSkill(s32 pokeIQ, u8 IQSkillIndex);
s32 GetNumAvailableIQSkills(u8 *iqSkillBuffer, s32 pokeIQ);
void ToggleIQSkill(IqSkillFlags *iq, u32 skillIndex);
void SetIQSkill(IqSkillFlags *iq, u32 skillIndex);
void SetDefaultIQSkills(IqSkillFlags *iq, bool8 enableSelfCurer);
bool8 IsIQSkillSet(IqSkillFlags *iq, u32 skillIndex);
void sub_808ED00(void);
s32 SaveRecruitedPokemon(u8 *a1, s32 a2);
s32 RestoreRecruitedPokemon(u8 *a1, s32 a2);

/* Bit-packed recruited Pokémon blob in the save pak.
 * Vanilla was 0x4650 (~24 IQ flag bits). 64-bit IQ flags need ~0x49F8;
 * 0x4B00 leaves headroom. Must stay in sync with save.c / UnkStruct_sub_8011DAC. */
#define RECRUITED_POKEMON_SAVE_SIZE 0x4B00

void WritePoke1Bits(DataSerializer *, Pokemon *pokemon);
void ReadPoke1Bits(DataSerializer *, Pokemon *);
s32 SavePoke2s(u8* buffer, s32 size);
s32 RestorePoke2s(u8* a1, s32 size);
void ReadPoke1LevelBits(DataSerializer* a1, u8* level);
void WritePoke1LevelBits(DataSerializer* a1, u8* level);

#endif // GUARD_POKEMON_3_H
