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

// ---------------------------------------------------------------------------
// SELECT_ANIMATION(id) — CMD_BYTE_54
// Script anim ids mapped through gUnknown_8117F64 (ground_lives.c).
// Names follow Data Crystal “Set Movement Animation” descriptions.
// ---------------------------------------------------------------------------

#define GROUND_ANIM_IDLE              0  // Overworld idle while standing
#define GROUND_ANIM_IDLE_ALT          1  // Same as IDLE
#define GROUND_ANIM_STILL             2  // Motionless standing (very common cutscene default)
#define GROUND_ANIM_STILL_WALK        3  // Motionless stand + walk
#define GROUND_ANIM_IDLE_AND_WALK     4  // Idle stand + walk
#define GROUND_ANIM_WALK_IN_PLACE     5  // Walking animation while standing
#define GROUND_ANIM_SLEEP             6  // Sleep pose
#define GROUND_ANIM_ATTACK            7  // Attack pose
#define GROUND_ANIM_HURT              8  // Hurt pose
#define GROUND_ANIM_SHAKE             9  // Vibrating / shake pose
#define GROUND_ANIM_STILL2           10  // Motionless (alt)
#define GROUND_ANIM_HURT2            11  // Hurt pose (alt)
#define GROUND_ANIM_ATTACK1          12  // Physical attack 1
#define GROUND_ANIM_ATTACK2          13  // Physical attack 2
#define GROUND_ANIM_TAIL_WHIP        14  // Tail Whip-like
#define GROUND_ANIM_SPIN             15  // Spin in place
#define GROUND_ANIM_DOUBLE_TEAM      16  // Double Team-like
#define GROUND_ANIM_JUMP             17  // Jump
#define GROUND_ANIM_SPECIAL          18  // Special attack
#define GROUND_ANIM_SPIN2            19  // Spin in place (alt)
#define GROUND_ANIM_SPECIAL_LOOP     20  // Special attack (looping)
#define GROUND_ANIM_SPIN_LOOP        21  // Spin endlessly
#define GROUND_ANIM_TWITCH           22  // Hold/twitch (often wing / cutscene hold)
#define GROUND_ANIM_TWITCH2          23  // Related hold/twitch

// ---------------------------------------------------------------------------
// CAMERA_SHAKE(mode, amp, period) — CMD_BYTE_97
// ---------------------------------------------------------------------------

#define CAMERA_SHAKE_OFF   0  // Stop shake
#define CAMERA_SHAKE_SOFT  1  // Fixed soft shake (period 4, amp ±2)
#define CAMERA_SHAKE_CUSTOM 2 // Use amp + period arguments

#endif // GUARD_CONSTANTS_GROUND_SCRIPT_PARAMS_H
