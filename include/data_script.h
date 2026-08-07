//#ifndef GUARD_DATA_SCRIPT_H
//#define GUARD_DATA_SCRIPT_H

#include "constants/bg_music.h"
#include "constants/cutscenes.h"
#include "constants/direction.h"
#include "constants/emotions.h"
#include "constants/event_flag.h"
#include "constants/ground_map.h"
#include "constants/item.h"
#include "constants/palette_util.h"
#include "constants/rescue_dungeon_id.h"
#include "constants/script_dungeon_id.h"
#include "constants/script_cmd.h"
#include "constants/script_id.h"
#include "structs/str_ground_script.h"
#include "ground_place.h"
#include "portrait_placement.h"

#define LPARRAY(x) (ARRAY_COUNT(x)), x

#define CPOS_HALFTILE 0x2
#define CPOS_CURRENT  0x4

// 01..07: complex map/dungeon selection/check commands

// TODO: CMD_BYTE_01

// Seems to be a general command for setting up which dungeon to enter next.
// u: Unknown.
// d: enum "ScriptDungeonId".
#define NEXT_DUNGEON(u, d)              { CMD_BYTE_02, 0, u, d, 0, NULL }

// TODO: CMD_BYTE_03

// TODO: CMD_BYTE_04

// TODO: CMD_BYTE_05

// TODO: CMD_BYTE_06

// TODO: CMD_BYTE_07

// m: enum "GroundMapID".
#define SELECT_MAP(m)                   { CMD_BYTE_08, 0, 0, m, 0, NULL }

#define SELECT_GROUND(m)                { CMD_BYTE_09, 0, 0, m, 0, NULL }

#define SELECT_DUNGEON(m, d, f, b)      { CMD_BYTE_0A, b, f, d, m, NULL }

#define SELECT_WEATHER(w)               { CMD_BYTE_0B, 0, 0, w, 0, NULL }

// Uses the map from SELECT_MAP.
// Does GroundLives_Select(), GroundObject_Select(), GroundEffect_Select(), and GroundEvent_Select().
// g: Group. -1 will use the ScriptInfo group.
// s: Sector. -1 will use the ScriptInfo sector.
#define SELECT_ENTITIES(g, s)           { CMD_BYTE_0C, s, g, 0, 0, NULL }

#define SELECT_LIVES(g,s)               { CMD_BYTE_0D, s, g, 0, 0, NULL }

#define SELECT_OBJECTS(g,s)             { CMD_BYTE_0E, s, g, 0, 0, NULL }

#define SELECT_EFFECTS(g,s)             { CMD_BYTE_0F, s, g, 0, 0, NULL }

#define SELECT_EVENTS(g,s)              { CMD_BYTE_10, s, g, 0, 0, NULL }

#define CANCEL_ENTITIES(g,s)            { CMD_BYTE_11, s, g, 0, 0, NULL }

#define CANCEL_LIVES(g,s)               { CMD_BYTE_12, s, g, 0, 0, NULL }

#define CANCEL_OBJECTS(g,s)             { CMD_BYTE_13, s, g, 0, 0, NULL }

#define CANCEL_EFFECTS(g,s)             { CMD_BYTE_14, s, g, 0, 0, NULL }

#define CANCEL_EVENTS(g,s)              { CMD_BYTE_15, s, g, 0, 0, NULL }

#define CANCEL_OFFSCREEN_LIVES          { CMD_BYTE_16, 0, 0, 0, 0, NULL }

#define CANCEL_OFFSCREEN_OBJECTS        { CMD_BYTE_17, 0, 0, 0, 0, NULL }

#define CANCEL_OFFSCREEN_EFFECTS        { CMD_BYTE_18, 0, 0, 0, 0, NULL }

#define SPAWN_OBJECT(k,d,g,s)           { CMD_BYTE_19, s, g, d, k, NULL }

#define SPAWN_EFFECT(k,d,g,s)           { CMD_BYTE_1A, s, g, d, k, NULL }

// f: enum "ScriptID".
#define EXECUTE_FUNCTION(f)             { CMD_BYTE_1B, 0, f, 0, 0, NULL }

// f: enum "ScriptID".
#define EXECUTE_SUBROUTINE(f)           { CMD_BYTE_1C, 0, f, 0, 0, NULL }

#define EXECUTE_STATION(m,g,s)          { CMD_BYTE_1D, s, g, m, 0, NULL }

#define EXECUTE_SUBSTATION(m,g,s)       { CMD_BYTE_1E, s, g, m, 0, NULL }

#define RESCUE_SELECT                   { CMD_BYTE_1F, 0, 0, 0, 0, NULL }

// TODO: CMD_BYTE_20: execute script as parented object, maybe? Unused in ROM

// TODO: CMD_BYTE_21: follow object/make object follow/get parented?

// Fade primary screen brightness in/out over f frames.
// wait: if nonzero, script waits until the fade finishes.
#define FADE_IN(wait, f)                { CMD_BYTE_22, wait, f, 0, 0, NULL }
#define FADE_OUT(wait, f)               { CMD_BYTE_23, wait, f, 0, 0, NULL }

// TODO: CMD_BYTE_24: fade between two brightness levels

// Same as FADE_IN/OUT for the secondary palette fade channel.
#define FADE2_IN(wait, f)               { CMD_BYTE_25, wait, f, 0, 0, NULL }
#define FADE2_OUT(wait, f)              { CMD_BYTE_26, wait, f, 0, 0, NULL }

// a0: Some bool
// kind: See enum "PaletteUtilUnk0Kind"
// a2: ?
// rgb: (R << 16) | (G << 8) | (B)
#define FLASH_FROM(a0, kind, a2, rgb)   { CMD_BYTE_27, a0, kind, a2, rgb, NULL }

// a0: Some bool
// kind: See enum "PaletteUtilUnk0Kind"
// a2: ?
// rgb: (R << 16) | (G << 8) | (B)
#define FLASH_TO(a0, kind, a2, rgb)     { CMD_BYTE_28, a0, kind, a2, rgb, NULL }

// TODO: CMD_BYTE_29

// TODO: CMD_BYTE_2A

// Waits specified number of frames, then automatically does a button press without waiting for player's input.
// -1 disables it.
#define TEXTBOX_AUTO_PRESS(endF, midF)  { CMD_BYTE_2B, 0, 0, endF, midF, NULL }

// TODO: CMD_BYTE_2C

// TODO: CMD_BYTE_2D

// Sets up portrait data for the specified speaker.
// place: PortraitPlacementID, or PLACEMENT_KEEP to keep the speaker's last placement/flip.
// id: speaker/lives script id
// emotion: EMOTION_* (first 4 bits are the face; a 0x40 flag sometimes appears but is unused)
#define PORTRAIT(place, id, emotion)    { CMD_BYTE_2E, place, id, emotion, 0, NULL }

// Deprecated alias: prefer PORTRAIT(PLACEMENT_KEEP, id, emotion).
#define PORTRAIT_REP(id, emotion)       PORTRAIT(PLACEMENT_KEEP, id, emotion)

// Sets portrait delta position, which modifies the portrait's position on the screen.
#define PORTRAIT_POS(id, x, y)          { CMD_BYTE_2F, 0, id, x, y, NULL }

#define TEXTBOX_CLEAR                   { CMD_BYTE_30, 0, 0, 0, 0, NULL }

// Used rarely. I don't think there's a functional difference from TEXTBOX_CLEAR.
#define TEXTBOX_CLEAR2                  { CMD_BYTE_31, 0, 0, 0, 0, NULL }

#define MSG_INSTANT(msg)                { CMD_BYTE_32, 0, -1, 0, 0, msg }

// Used for messages that don't make a sound while printing characters.
// The player hero, Munchlax munching, and the voice in Murky Cave use this.
// id: Speaker ID. -1 for no portrait.
#define MSG_QUIET(id, msg)              { CMD_BYTE_33, 0, id, 0, 0, msg }

// id: Speaker ID. -1 for no portrait.
#define MSG_NPC(id, msg)                { CMD_BYTE_34, 0, id, 0, 0, msg }

#define MSG_LETTER(msg)                 { CMD_BYTE_35, 0, -1, 0, 0, msg }

// Used for sounds or dialogue the player hears from the background such as flapping, boss cries, and NPCs conversing.
#define MSG_OVERHEARD(msg)              { CMD_BYTE_36, 0, -1, 0, 0, msg }

// Prints raw text on bg without any windows.
// Used for the intro portal messages.
// To advance the text, the player needs to press a button.
#define MSG_ON_BG(msg)                  { CMD_BYTE_37, 0, -1, 0, 0, msg }

// Identical to the above, used literally once for just a newline.
#define MSG_ON_BG2(msg)                 { CMD_BYTE_38, 0, -1, 0, 0, msg }

// Similar to the above, but the message appears and fades automatically, without any player's input.
// Used for narration text.
// The short argument isn't really used, but needs to be greater than 0.
#define MSG_ON_BG_AUTO(u, msg)          { CMD_BYTE_39, 0, u, 0, 0, msg }

// TODO: CMD_BYTE_3A: yes/no choice (only used for saving)

// Multi-purpose special process / conditional jump. kind selects the subroutine in
// sub_80A14E8(). Return value can jump to a label (ResolveJump). Some kinds only
// run side effects (return 0). Prefer the named macros below over raw forms.
#define SPECIAL_PROCESS_EX(kind, a, b)  { CMD_BYTE_3B, kind, a, b, 0, NULL }
#define SPECIAL_PROCESS(kind, a)        SPECIAL_PROCESS_EX(kind, a, 0)

/* --- SPECIAL_PROCESS kinds (CMD_BYTE_3B) --- */

// Clear GROUND_LOCAL / EVENT_LOCAL / item script vars; rotate FLAG_KIND; tick EVENT_GONBE; refresh shops/jobs.
#define CLEAR_LOCAL_SCRIPT_STATE        SPECIAL_PROCESS(0x01, 0)
// Seed RNG if needed, init team from personality results, related setup (new-game path).
#define INIT_TEAM_FROM_PERSONALITY      SPECIAL_PROCESS(0x02, 0)
// Refresh Kecleon inventory, Pelipper jobs, related daily town services.
#define REFRESH_TOWN_SERVICES           SPECIAL_PROCESS(0x03, 0)
// Try to deliver a mailbox letter/job; returns 1 if something was delivered.
#define CHECK_MAILBOX_DELIVERY          SPECIAL_PROCESS(0x04, 0)
#define RESET_MAILBOX                   SPECIAL_PROCESS(0x05, 0)
// Clear non-news mailbox slots and force the tutorial Pidgey rescue mail.
#define SETUP_TUTORIAL_MAIL             SPECIAL_PROCESS(0x06, 0)
// Advance/cleanup remaining mailbox slots (post-tutorial).
#define ADVANCE_MAILBOX                 SPECIAL_PROCESS(0x07, 0)
// Returns whether a specific mailbox condition/check succeeds.
#define CHECK_MAILBOX_STATE             SPECIAL_PROCESS(0x08, 0)
// Can the player change leader? (returns bool; refreshes party UI stub).
#define CHECK_CAN_CHANGE_LEADER         SPECIAL_PROCESS(0x09, 0)
// Show friend-area dungeon dialogue for the interacting friend; returns 1/2 on success.
#define TRY_FRIEND_AREA_DIALOGUE        SPECIAL_PROCESS(0x0A, 0)
// True if the current dungeon enter index has jobs.
#define CHECK_DUNGEON_HAS_JOBS          SPECIAL_PROCESS(0x0B, 0)
// True if the current SOS/rescue mail still allows rescues.
#define CHECK_RESCUES_ALLOWED           SPECIAL_PROCESS(0x0C, 0)
// True if a waiting Wonder Mail / related check passes.
#define CHECK_WONDER_MAIL_PENDING       SPECIAL_PROCESS(0x0D, 0)
// Mark next unclaimed maze present and return its index offset (or 0).
#define CLAIM_NEXT_MAZE_PRESENT         SPECIAL_PROCESS(0x0E, 0)
// Related mailbox/news readiness check.
#define CHECK_MAILBOX_NEWS              SPECIAL_PROCESS(0x0F, 0)
// True if the acting object can interact with the current friend live.
#define CHECK_CAN_TALK_TO_FRIEND        SPECIAL_PROCESS(0x10, 0)
// True if a partner mon exists for scripts.
#define CHECK_HAS_PARTNER               SPECIAL_PROCESS(0x11, 0)
// True while L or R is held.
#define CHECK_LR_HELD                   SPECIAL_PROCESS(0x12, 0)
// True if ally `id` is currently on the team.
#define CHECK_ALLY_ON_TEAM(id)          SPECIAL_PROCESS(0x13, id)
// True if the acting live can move.
#define CHECK_ACTOR_CAN_MOVE            SPECIAL_PROCESS(0x14, 0)
// True if actor is within `dist` tiles of ally index `ally`.
#define CHECK_NEAR_ALLY(ally, dist)     SPECIAL_PROCESS_EX(0x15, ally, dist)
// Zero the hero's nickname (ally id 1) so RENAME_ALLY starts blank.
#define CLEAR_HERO_NAME                 SPECIAL_PROCESS(0x16, 0)
// Unlock Wild Plains + Mist-Rise Forest (early friend areas).
#define UNLOCK_STARTER_FRIEND_AREAS     SPECIAL_PROCESS(0x17, 0)
// Copy Magnemite display/story name into the poke-name buffer.
#define PREPARE_MAGNEMITE_NAME          SPECIAL_PROCESS(0x18, 0)
// Recruit story Magnemite; `nameBuf` is gFormatBuffer_Names index. Returns 1 on failure.
#define RECRUIT_MAGNEMITE(nameBuf)      SPECIAL_PROCESS(0x19, nameBuf)
#define PREPARE_ABSOL_NAME              SPECIAL_PROCESS(0x1A, 0)
#define RECRUIT_ABSOL                   SPECIAL_PROCESS(0x1B, 0)
#define PUT_ABSOL_ON_TEAM               SPECIAL_PROCESS(0x1C, 0)
// Returns 1 if Smeargle cannot join (friend area full / blocked).
#define CHECK_SMEARGLE_JOIN_BLOCKED     SPECIAL_PROCESS(0x1D, 0)
#define PREPARE_SMEARGLE_NAME           SPECIAL_PROCESS(0x1E, 0)
#define RECRUIT_SMEARGLE(nameBuf)       SPECIAL_PROCESS(0x1F, nameBuf)
// Unlock Legendary Island and add missing legendary birds if needed.
#define UNLOCK_LEGENDARY_BIRDS          SPECIAL_PROCESS(0x20, 0)
#define CHECK_HAS_LEGENDARY_BIRDS       SPECIAL_PROCESS(0x21, 0)
// Returns 1 if the leader is not one of the legendary birds.
#define CHECK_LEADER_NOT_LEGENDARY_BIRD SPECIAL_PROCESS(0x22, 0)
// 2 if leader is Ho-Oh, 1 if Ho-Oh has been seen, else 0.
#define CHECK_HO_OH_STATUS              SPECIAL_PROCESS(0x23, 0)
#define PREPARE_LATIOS_NAME             SPECIAL_PROCESS(0x24, 0)
#define RECRUIT_LATIOS                  SPECIAL_PROCESS(0x25, 0)
#define PREPARE_LATIAS_NAME             SPECIAL_PROCESS(0x26, 0)
#define RECRUIT_LATIAS                  SPECIAL_PROCESS(0x27, 0)
#define GIVE_WISH_STONE                 SPECIAL_PROCESS(0x28, 0)
// Pick a random recruitable species into NEW_FRIEND_KIND; returns area state.
#define PICK_RANDOM_NEW_FRIEND          SPECIAL_PROCESS(0x29, 0)
// Inspect NEW_FRIEND_KIND friend-area state (0/1/2).
#define CHECK_NEW_FRIEND_AREA           SPECIAL_PROCESS(0x2A, 0)
#define PREPARE_NEW_FRIEND_NAME         SPECIAL_PROCESS(0x2B, 0)
// doRecruit!=0 recruits NEW_FRIEND_KIND; 0 clears NEW_FRIEND_KIND.
#define RECRUIT_OR_CLEAR_NEW_FRIEND(doRecruit) SPECIAL_PROCESS(0x2C, doRecruit)
#define CHECK_RANK_CAN_INCREASE         SPECIAL_PROCESS(0x2D, 0)
// Spend points to raise rescue rank and show the rank-up message.
#define PERFORM_RANK_UP                 SPECIAL_PROCESS(0x2E, 0)
#define GIVE_TEAM_MONEY_10000           SPECIAL_PROCESS(0x2F, 0)
// Returns 1 if Gardevoir cannot join (no friend-area space).
#define CHECK_GARDEVOIR_JOIN_BLOCKED    SPECIAL_PROCESS(0x30, 0)
#define PREPARE_GARDEVOIR_NAME          SPECIAL_PROCESS(0x31, 0)
#define RECRUIT_GARDEVOIR               SPECIAL_PROCESS(0x32, 0)
// Maybe start the Spinda “Gonbe” side event; returns 1 if it triggered.
#define TRY_TRIGGER_GONBE_EVENT         SPECIAL_PROCESS(0x33, 0)
#define GIVE_THREE_APPLES               SPECIAL_PROCESS(0x34, 0)
// 2 if leader is Chansey, 1 if Chansey seen, else 0.
#define CHECK_CHANSEY_STATUS            SPECIAL_PROCESS(0x35, 0)
// Set map camera offset (pixel units stored as raw script ints).
#define SET_CAMERA_OFFSET(x, y)         SPECIAL_PROCESS_EX(0x36, x, y)
#define SET_CAMERA_TARGET_OFFSET(x, y)  SPECIAL_PROCESS_EX(0x37, x, y)
// Nudge/refresh ground map camera layer params.
#define REFRESH_MAP_CAMERA              SPECIAL_PROCESS(0x38, 0)
// Dual-screen place-name display mode (stubbed / no visible effect on GBA).
// Common values: 1 = suppress for cutscenes, 4 = normal/enabled.
#define SET_PLACE_MODE(mode)            SPECIAL_PROCESS(0x39, mode)
// Apply default place-mode from game options / dungeon context.
#define APPLY_DEFAULT_PLACE_MODE        SPECIAL_PROCESS(0x3A, 0)
#define CLEAR_PLACE_MODE                SPECIAL_PROCESS(0x3B, 0)
// Cancel movement on all lives/objects/effects (freeze scene actors).
#define FREEZE_ALL_ACTORS               SPECIAL_PROCESS(0x3C, 0)
#define SET_DEBUG_CAMERA_POS(x, y)      SPECIAL_PROCESS_EX(0x3D, x, y)
// Spawn the debug camera effect attached to the current actor.
#define SPAWN_DEBUG_CAMERA              SPECIAL_PROCESS(0x3E, 0)
// Debug free-cam control loop; returns -1 while active.
#define RUN_DEBUG_CAMERA_CONTROL        SPECIAL_PROCESS(0x3F, 0)
// Enable/disable a ground-main debug/presentation flag.
#define SET_GROUND_DEBUG_FLAG(on)       SPECIAL_PROCESS(0x40, on)
// Request returning to the title/menu with a music fade of `frames`.
#define REQUEST_GAME_END(frames)        SPECIAL_PROCESS(0x41, frames)
// Same as REQUEST_GAME_END but also forces script-var init via sub_8011C28.
#define REQUEST_GAME_END_RESET(frames)  SPECIAL_PROCESS(0x42, frames)
// Remember current BGM so it can be restored; returns 1 if song was playing.
#define SAVE_CURRENT_BGM                SPECIAL_PROCESS(0x43, 0)
#define RESTORE_SAVED_BGM               SPECIAL_PROCESS(0x44, 0)
#define FADE_IN_SAVED_BGM(frames)       SPECIAL_PROCESS(0x45, frames)
#define QUEUE_SAVED_BGM                 SPECIAL_PROCESS(0x46, 0)
#define PLAY_CUTSCENE_EFFECT(a, b)      SPECIAL_PROCESS_EX(0x47, a, b)
// Play cutscene effect variant with fixed first arg 30.
#define PLAY_CUTSCENE_EFFECT_30(a)      SPECIAL_PROCESS(0x48, a)
#define EXTEND_SPRITE_PALETTE(id)       SPECIAL_PROCESS(0x49, id)
#define CLEAR_EXTENDED_SPRITE_PALETTE   SPECIAL_PROCESS(0x4A, 0)
// Prefill ally #1 (hero) nickname with "Trielo" for the rename prompt.
#define PRESET_HERO_NAME_TRIELO         SPECIAL_PROCESS(0x4B, 0)

// k: See enum "SpecialTextKind"
// i: ???
// t: ???
#define SPECIAL_TEXT(k, i, t)           { CMD_BYTE_3C, k, 0, i, t, NULL }

#define RENAME_ALLY(id)                 { CMD_BYTE_3D, 0, 0, id, 0, NULL }

#define RENAME_TEAM                     { CMD_BYTE_3E, 0, 0, 0, 0, NULL }

// TODO: CMD_BYTE_3F: input box?

// TODO: CMD_BYTE_40: unused?

#define REMOVE_ITEMSTACK(i)             { CMD_BYTE_41, 0, i, 0, 0, NULL }

#define MUSIC_STOP_ALL                  { CMD_BYTE_42, 0, 0, 0, 0, NULL }

#define MUSIC_FADEOUT_ALL(f)            { CMD_BYTE_43, 0, f, 0, 0, NULL }

#define BGM_SWITCH(i)                   { CMD_BYTE_44, 0, 0, i, 0, NULL }

#define BGM_FADEIN(f,i)                 { CMD_BYTE_45, 0, f, i, 0, NULL }

#define BGM_QUEUE(i)                    { CMD_BYTE_46, 0, 0, i, 0, NULL }

#define BGM_STOP                        { CMD_BYTE_47, 0, 0, 0, 0, NULL }

#define BGM_FADEOUT(f)                  { CMD_BYTE_48, 0, f, 0, 0, NULL }

#define FANFARE_PLAY(i)                 { CMD_BYTE_49, 0, 0, i, 0, NULL }

#define FANFARE_STOP(i)                 { CMD_BYTE_4A, 0, 0, i, 0, NULL }

#define FANFARE_FADEOUT(f,i)            { CMD_BYTE_4B, 0, f, i, 0, NULL }

#define FANFARE_PLAY2(i)                { CMD_BYTE_4C, 0, 0, i, 0, NULL }

#define FANFARE_STOP2(i)                { CMD_BYTE_4D, 0, 0, i, 0, NULL }

#define FANFARE_FADEOUT2(f,i)           { CMD_BYTE_4E, 0, f, i, 0, NULL }

// TODO: CMD_BYTE_4F

// TODO: CMD_BYTE_50

// TODO: CMD_BYTE_51

// TODO: CMD_BYTE_52

// TODO: CMD_BYTE_53

#define SELECT_ANIMATION(id)            { CMD_BYTE_54, 0, id, 0, 0, NULL }

// TODO: CMD_BYTE_55

// TODO: CMD_BYTE_56

// TODO: CMD_BYTE_57

// TODO: CMD_BYTE_58

// TODO: CMD_BYTE_59

// TODO: CMD_BYTE_5A

// For WARP/WALK, every map has a list of predefined locations.
#define WARP_WAYPOINT(u,w)              { CMD_BYTE_5B, u, 0, w, 0, NULL }

// TODO: CMD_BYTE_5C

// TODO: CMD_BYTE_5D

// TODO: CMD_BYTE_5E

// TODO: CMD_BYTE_5F

// TODO: CMD_BYTE_60

// TODO: CMD_BYTE_61

// TODO: CMD_BYTE_62

// TODO: CMD_BYTE_63

// TODO: CMD_BYTE_64

// TODO: CMD_BYTE_65

// TODO: CMD_BYTE_66

// TODO: CMD_BYTE_67

// TODO: CMD_BYTE_68

// TODO: CMD_BYTE_69

#define WALK_RELATIVE(spd,h,v)          { CMD_BYTE_6A, 0, spd, h, v, NULL }

#define WALK_GRID(spd,w)                { CMD_BYTE_6B, 0, spd, w, 0, NULL }

// TODO: CMD_BYTE_6C

// TODO: CMD_BYTE_6D

// TODO: CMD_BYTE_6E

// TODO: CMD_BYTE_6F

// TODO: CMD_BYTE_70

// TODO: CMD_BYTE_71

// TODO: CMD_BYTE_72

// TODO: CMD_BYTE_73

// TODO: CMD_BYTE_74

// TODO: CMD_BYTE_75

// TODO: CMD_BYTE_76

// TODO: CMD_BYTE_77

// TODO: CMD_BYTE_78

// TODO: CMD_BYTE_79

#define WALK_DIRECT(spd,w)              { CMD_BYTE_7A, 0, spd, w, 0, NULL }

// TODO: CMD_BYTE_7B

// TODO: CMD_BYTE_7C

// TODO: CMD_BYTE_7D

// TODO: CMD_BYTE_7E

// TODO: CMD_BYTE_7F

// TODO: CMD_BYTE_80

// TODO: CMD_BYTE_81

// TODO: CMD_BYTE_82

// TODO: CMD_BYTE_83

// TODO: CMD_BYTE_84

// TODO: CMD_BYTE_85

#define CAMERA_PAN(u1,u2)               { CMD_BYTE_86, 0, u1, u2, 0, NULL }

// TODO: CMD_BYTE_87

// TODO: CMD_BYTE_88

// TODO: CMD_BYTE_89

#define CMD_UNK_8A(a,b,t)               { CMD_BYTE_8A, a, b, t, 0, NULL }

// Sets the parent object's direction then waits the specified number of frames.
// d: Direction to set. Can be -1 also, which doesn't set the object's direction, but is still stored in the action script data.
// f: Amount of frames to wait afterwards.
#define SET_DIR_WAIT(d, f)              { CMD_BYTE_8B, f, d, 0, 0, NULL }

#define CMD_UNK_8C(a,t,c)               { CMD_BYTE_8C, a, t, c, 0, NULL }

#define CMD_UNK_8D(a,t)                 { CMD_BYTE_8D, a, t, 0, 0, NULL }

#define CMD_UNK_8E(a,t,c)               { CMD_BYTE_8E, a, t, c, 0, NULL }

#define CMD_UNK_8F(a,t,c)               { CMD_BYTE_8F, a, t, c, 0, NULL }

#define CMD_UNK_90(a,t,c)               { CMD_BYTE_90, a, t, c, 0, NULL }

// o: Final orientation
#define ROTATE_TO(spd,t,o)              { CMD_BYTE_91, spd, t, o, 0, NULL }

#define CMD_UNK_92(a,b,t)               { CMD_BYTE_92, a, b, t, 0, NULL }

#define CMD_UNK_93(a,t,c)               { CMD_BYTE_93, a, t, c, 0, NULL }

#define CMD_UNK_94(a,t,c)               { CMD_BYTE_94, a, t, c, 0, NULL }

#define CMD_UNK_95(a,t,c)               { CMD_BYTE_95, a, t, c, 0, NULL }

// TODO: CMD_BYTE_96

// TODO: CMD_BYTE_97

#define CAMERA_INIT_PAN                 { CMD_BYTE_98, 0, 0, 0, 0, NULL }

#define CAMERA_END_PAN                  { CMD_BYTE_99, 0, 0, 0, 0, NULL }

// TODO: CMD_BYTE_9A

// TODO: CMD_BYTE_9B

// TODO: CMD_BYTE_9C

// TODO: CMD_BYTE_9D

// TODO: CMD_BYTE_9E

// TODO: CMD_BYTE_9F

// TODO: CMD_BYTE_A0

// TODO: CMD_BYTE_A1

// TODO: CMD_BYTE_A2

// TODO: CMD_BYTE_A3

#define RESET_ARRAY(v)                  { CMD_BYTE_A4, 0, v, 0, 0, NULL }

#define CLEAR_ARRAY(v)                  { CMD_BYTE_A5, 0, v, 0, 0, NULL }

#define UPDATE_VARINT(o,v,i)            { CMD_BYTE_A6, o, v, i, 0, NULL }

#define UPDATE_VARVAR(o,a,b)            { CMD_BYTE_A7, o, a, b, 0, NULL }

#define SET_ARRAYVAL(v,i,x)             { CMD_BYTE_A8, 0, v, i, x, NULL }

#define SCENARIO_CALC(v,a,b)            { CMD_BYTE_A9, 0, v, a, b, NULL }

#define SCENARIO_ADVANCE(v,a)           { CMD_BYTE_AA, 0, v, a, 0, NULL }

// r is the value to put in DUNGEON_RESULT.
// e is the value to put in DUNGEON_ENTER.
#define SET_DUNGEON_RES(r,e)            { CMD_BYTE_AB, 0, r, e, 0, NULL }

#define SET_PLAYER_KIND(k)              { CMD_BYTE_AC, 0, k, 0, 0, NULL }

#define UNLOCK_FRIEND_AREA(a)           { CMD_BYTE_AD, TRUE, a, 0, 0, NULL }

#define CMD_UNK_AE(r)                   { CMD_BYTE_AE, TRUE, r, 0, 0, NULL }

#define CMD_UNK_AF(r, b)                { CMD_BYTE_AF, b, r, 0, 0, NULL }

#define SET_RESCUE_CONQUERED(s)         { CMD_BYTE_B0, TRUE, s, 0, 0, NULL }

// TODO: CMD_BYTE_B1

// TODO: CMD_BYTE_B2

#define JUMPIF_EQUAL(v,i,l)             { CMD_BYTE_B3, l, v, i, 0, NULL }

#define JUMPIF(o,v,i,l)                 { CMD_BYTE_B4, o, l, v, i, NULL }

#define JUMPIF_2(o,a,b,l)               { CMD_BYTE_B5, o, l, a, b, NULL }

#define JUMPIF_ARRAY(v,i,l)             { CMD_BYTE_B6, 0, l, v, i, NULL }

#define JUMPIF_SUM(o,v,i,l)             { CMD_BYTE_B7, o, l, v, i, NULL }

#define JUMPIF_SCENE_LT(v,a,b,l)        { CMD_BYTE_B8, l, v, a, b, NULL }

#define JUMPIF_SCENE_EQ(v,a,b,l)        { CMD_BYTE_B9, l, v, a, b, NULL }

#define JUMPIF_SCENE_GT(v,a,b,l)        { CMD_BYTE_BA, l, v, a, b, NULL }

// Jumps to a label if `CheckQuest(i)` returns TRUE.
// i: The quest to check. See enum "MainQuest".
// l: The label to jump to.
#define JUMPIF_SCENARIOCHECK(i,l)       { CMD_BYTE_BB, l, i, 0, 0, NULL }

#define JUMPIF_CUTSCENE_FLAG(f,l)       { CMD_BYTE_BC, l, f, 0, 0, NULL }

#define JUMPIF_UNK_BD(i,l)              { CMD_BYTE_BD, l, 0, i, 0, NULL }

#define JUMPIF_UNK_BE(l)                { CMD_BYTE_BE, l, 0, 0, 0, NULL }

#define JUMPIF_HASITEM(i,l)             { CMD_BYTE_BF, l, i, 0, 0, NULL }

#define CJUMP_VAR(v)                    { CMD_BYTE_C0, 0, v, 0, 0, NULL }

#define CJUMP_CALC_VI(o,v,i)            { CMD_BYTE_C1, o, v, i, 0, NULL }

#define CJUMP_CALC_VV(o,a,b)            { CMD_BYTE_C2, o, a, b, 0, NULL }

#define CJUMP_RANDOM(h)                 { CMD_BYTE_C3, 0, h, 0, 0, NULL }

#define CJUMP_SCENARIO_0(v)             { CMD_BYTE_C4, 0, v, 0, 0, NULL }

#define CJUMP_SCENARIO_1(v)             { CMD_BYTE_C5, 0, v, 0, 0, NULL }

#define CJUMP_UNK_C6(a)                 { CMD_BYTE_C6, 0, 0, a, 0, NULL }

#define CJUMP_DIRECTION                 { CMD_BYTE_C7, 0, 0, 0, 0, NULL }

// C8: distance calculation with that weird 80A7AE8
#define CJUMP_UNK_C8(a)                 { CMD_BYTE_C8, 0, 0, a, 0, NULL }

// C9: ditto, but with one hardcoded pos of four
#define CJUMP_UNK_C9(a)                 { CMD_BYTE_C9, 0, 0, a, 0, NULL }

#define CJUMP_DIR_TO_LINK(l)            { CMD_BYTE_CA, 0, 0, l, 0, NULL }

#define CJUMP_UNK_CB(h)                 { CMD_BYTE_CB, 0, h, 0, 0, NULL }

#define COND_EQUAL(v,t)                 { CMD_BYTE_CC, 0, t, v, 0, NULL }

#define COND(o,v,t)                     { CMD_BYTE_CD, o, t, v, 0, NULL }

#define COND_VAR(o,v,t)                 { CMD_BYTE_CE, o, t, v, 0, NULL }

#define MSG_VAR(b,v,a)                  { CMD_BYTE_CF, b, v, a, 0, NULL }

#define VARIANT(c,s)                    { CMD_BYTE_D0, 0, c, 0, 0, s    }

#define VARIANT_DEFAULT(s)              { CMD_BYTE_D1, 0, 0, 0, 0, s    }

#define ASK_DEBUG(b,h,a,s)              { CMD_BYTE_D2, b, h, a, 0, s    }

#define ASK1(b,h,a,s)                   { CMD_BYTE_D3, b, h, a, 0, s    }

#define ASK2(b,h,a,s)                   { CMD_BYTE_D4, b, h, a, 0, s    }

#define ASK3(b,h,a,s)                   { CMD_BYTE_D5, b, h, a, 0, s    }

#define ASK1_VAR(b,h,a,v)               { CMD_BYTE_D6, b, h, a, v, NULL }

#define ASK2_VAR(b,h,a,v)               { CMD_BYTE_D7, b, h, a, v, NULL }

#define ASK3_VAR(b,h,a,v)               { CMD_BYTE_D8, b, h, a, v, NULL }

#define CHOICE(h,s)                     { CMD_BYTE_D9, 0, h, 0, 0, s    }

// TODO: CMD_BYTE_DA

#define WAIT(f)                         { CMD_BYTE_DB, 0, f, 0, 0, NULL }

#define WAIT_RANDOM(a,b)                { CMD_BYTE_DC, 0, a, b, 0, NULL }

#define STOP_ANIMATION_ON_CURRENT_FRAME { CMD_BYTE_DD, 0, 0, 0, 0, NULL }

// TODO: CMD_BYTE_DE

// TODO: CMD_BYTE_DF

// TODO: CMD_BYTE_E0

#define WAIT_FANFARE1(id)               { CMD_BYTE_E1, 0, id, 0, 0, NULL }

#define WAIT_FANFARE2(id)               { CMD_BYTE_E2, 0, id, 0, 0, NULL }

#define AWAIT_CUE(id)                   { CMD_BYTE_E3, 0, id, 0, 0, NULL }

#define ALERT_CUE(id)                   { CMD_BYTE_E4, 0, id, 0, 0, NULL }

// a: Value to place in script's `branchDiscriminant`.
// b: Value to place in `gUnlockBranchLabels[a]`.
#define CMD_UNK_E5(a, b)                { CMD_BYTE_E5, b, a, 0, 0, NULL }

#define CALL_LABEL(x)                   { CMD_BYTE_E6, 0, x, 0, 0, NULL }

#define JUMP_LABEL(x)                   { CMD_BYTE_E7, 0, x, 0, 0, NULL }

#define CALL_SCRIPT(x)                  { CMD_BYTE_E8, 0, x, 0, 0, NULL }

#define JUMP_SCRIPT(x)                  { CMD_BYTE_E9, 0, x, 0, 0, NULL }

#define CALL_STATION(g,s)               { CMD_BYTE_EA, s, g,-1, 0, NULL }

#define JUMP_STATION(g,s)               { CMD_BYTE_EB, s, g,-1, 0, NULL }

#define EXECUTE_MAP_VAR(v)              { CMD_BYTE_EC, 0, v, 0, 0, NULL }

#define RESET_CALLER                    { CMD_BYTE_ED, 0, 0, 0, 0, NULL }

#define RET_DIRECT                      { CMD_BYTE_EE, 0, 0, 0, 0, NULL }

#define RET                             { CMD_BYTE_EF, 0, 0, 0, 0, NULL }

#define HALT                            { CMD_BYTE_F0, 0, 0, 0, 0, NULL }

#define END_DELETE                      { CMD_BYTE_F1, 0, 0, 0, 0, NULL }

// Unused
#define CMD_F2                          { CMD_BYTE_F2, 0, 0, 0, 0, NULL }

// Unused
#define CMD_F3                          { CMD_BYTE_F3, 0, 0, 0, 0, NULL }

// Serves as an offset which the script can reference for jumps.
#define LABEL(x)                        { CMD_BYTE_F4, 0, x, 0, 0, NULL }

// Unused
#define CMD_F5                          { CMD_BYTE_F5, 0, 0, 0, 0, NULL }

#ifdef NONMATCHING
#define DEBUGINFO                       { CMD_BYTE_F6, 0, __LINE__, 0, 0, __FILE__ }
#define DEBUGINFO_O(originalLineNum)    DEBUGINFO
#else
#define DEBUGINFO_O(originalLineNum)    { CMD_BYTE_F6, 0, originalLineNum, 0, 0, FAKE_FILENAME }
#endif

//#endif // GUARD_DATA_SCRIPT_H
