#ifndef GUARD_STR_SPAWN_POKEMON_DATA_H
#define GUARD_STR_SPAWN_POKEMON_DATA_H

#define PACKED_BITS_SPECIES 0x1FF
#define PACKED_BITS_LEVEL 0x7F
#define PACKED_BITS_LEVEL_SHIFT 9

// size: R=0x8 | B=0x6
typedef struct SpawnPokemonData
{
    u16 bits; // species first 9 bits, level last 7 bits
    s16 randNum[2];
#ifdef SKY_STORY
    u16 speciesHi; // sky build: species bits 9+ (Gen 4 ids go past 511)
#endif
} SpawnPokemonData;

/* One spawn entry as stored in the "mapparam" file (always the 9-bit form). */
typedef struct FileSpawnPokemonData
{
    u16 bits;
    s16 randNum[2];
} FileSpawnPokemonData;

#endif // GUARD_STR_SPAWN_POKEMON_DATA_H
