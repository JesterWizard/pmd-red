#include "global.h"
#include "globaldata.h"
#include "constants/ability.h"
#include "pokemon_abilities.h"
#include "runtime.h"
#include "strings.h"

static u8 ResolveAbilityIndex(u8 index)
{
    if (index >= NUM_ABILITIES)
        return ABILITY_UNKNOWN;
    if (IS_CUSTOM_ABILITY(index) && !gRuntimeConfig.custom_abilities)
        return ABILITY_UNKNOWN;
    return index;
}

// Unused
void CopyAbilityNametoBuffer(char *buffer, u8 index)
{
    strncpy(buffer, gAbilityNames[ResolveAbilityIndex(index)], 0x50);
}

const u8 *GetAbilityDescription(u8 index)
{
    return gAbilityDescriptions[ResolveAbilityIndex(index)];
}
