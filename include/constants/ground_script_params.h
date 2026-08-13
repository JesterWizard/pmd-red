#ifndef GUARD_CONSTANTS_GROUND_SCRIPT_PARAMS_H
#define GUARD_CONSTANTS_GROUND_SCRIPT_PARAMS_H

// Parameter defines for named ground-script macros in include/data_script.h.
// See documentation/GroundScriptOpcodeRenames.md.

// ---------------------------------------------------------------------------
// UPDATE_NAME(kind, slot, id) — CMD_BYTE_2D
// ---------------------------------------------------------------------------

enum UpdateNameKind
{
    UPDATE_NAME_CLEAR = 0,           // Reset format buffers for slot
    UPDATE_NAME_SPEECH_SELF = 1,     // Speech-bubble name from self
    UPDATE_NAME_SPEECH_PARTNER = 2,  // Speech-bubble name from partner ref
    UPDATE_NAME_SPEECH_TYPE = 3,     // Speech-bubble name from lives type id
    UPDATE_NAME_SPECIES_SELF = 4,    // Species name from self
    UPDATE_NAME_SPECIES_PARTNER = 5, // Species name from partner ref
    UPDATE_NAME_SPECIES_TYPE = 6,    // Species name from lives type id
    UPDATE_NAME_ACTOR_SELF = 7,     // Actor display name from running lives
    UPDATE_NAME_ACTOR_PARTNER = 8,  // Actor display name from partner ref
    UPDATE_NAME_ACTOR_TYPE = 9,     // Actor display name from lives type id
    UPDATE_NAME_DUNGEON_FLOORS = 10, // Dungeon floor count → gFormatArgs[slot]
};

// ---------------------------------------------------------------------------
// SET_OBJ_FLAGS / CLEAR_OBJ_FLAGS — CMD_BYTE_52 / 53
// Bits on parent lives/object flags (callbacks->setFlags / clearFlags).
// Only bits with clear script/engine evidence are named; others stay numeric.
// ---------------------------------------------------------------------------

// When cleared via CLEAR_OBJ_FLAGS, also cancels nested scriptData2 if active.
#define OBJ_FLAG_CANCEL_SCRIPT2   0x00000400

// Walk / locomotion related (often cleared/set around WALK_* / MOVE_*).
#define OBJ_FLAG_WALK_RELATED     0x00001000

// Common cutscene visibility / interaction mask (frequently 0x1F as a group).
#define OBJ_FLAG_INTERACT_MASK    0x0000001F

// Height / airborne cutscene bit — typically CLEARed before HEIGHT_TO / SET_HEIGHT,
// then SET after landing (see Sky Tower entry, ground_lives height helpers).
#define OBJ_FLAG_AIRBORNE         0x01000000

// ---------------------------------------------------------------------------
// EMOTION_EFFECT(id) — CMD_BYTE_56
// Overhead emotion overlays (shared efob001 bank; ids match RescueTemple atlas).
// ---------------------------------------------------------------------------

#define EMOTION_EFFECT_NONE       0
#define EMOTION_EFFECT_NOTICE     88  // !
#define EMOTION_EFFECT_QUESTION   89  // ?
#define EMOTION_EFFECT_SHOCK      91  // !!
#define EMOTION_EFFECT_SWEAT      92  // sweat drop
#define EMOTION_EFFECT_SMILE      93  // music note / smile
#define EMOTION_EFFECT_ANGRY      94  // anger mark

#endif // GUARD_CONSTANTS_GROUND_SCRIPT_PARAMS_H
