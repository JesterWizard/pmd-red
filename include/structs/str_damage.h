#ifndef GUARD_STR_DAMAGE_H
#define GUARD_STR_DAMAGE_H

// size: 0x14
typedef struct DamageStruct
{
    s32 dmg;
    s32 residualDmgType;
    u32 typeEffectiveness;
    u8 type;
    bool8 isCrit;
    u8 unkE;
    bool8 tookNoDamage;
    /* Set by CalcDamage; used for Counter / contact abilities under Phys/Spec split */
    bool8 isPhysical;
} DamageStruct;

#endif // GUARD_STR_DAMAGE_H