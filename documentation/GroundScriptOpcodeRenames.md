# Ground Script Opcode Renames

Reference for opcodes that were previously written as raw hex (`{ 0xNN, … }`), `CMD_XX`, or `CMD_UNK_*`, and are now named macros in [`include/data_script.h`](../include/data_script.h).

Handlers live in [`src/ground_script.c`](../src/ground_script.c). RescueTemple uses the same names via `ScriptOpcodeNames` / `ScriptSource`.

Ticket: [DEC-18](https://linear.app/decomp-projects/issue/DEC-18/name-remaining-ground-script-cmd-xx-opcodes-and-document-parameters).

---

## ScriptCommand layout

Every command is a 16-byte `ScriptCommand`:

| Field | Offset | Notes |
|------|--------|--------|
| `op` | 0x0 | Opcode byte (`CMD_BYTE_XX`) |
| `argByte` | 0x1 | Often wait frames, mode, or speed |
| `argShort` | 0x2 | Often speed, frames, slot, or link id |
| `arg1` | 0x4 | Primary operand (flags, height, lives id, …) |
| `arg2` | 0x8 | Secondary operand (Y delta, …) |
| `argPtr` | 0xC | String / file pointer when needed |

Editor/raw dumps often show `CMD_XX(argByte, argShort, arg1, arg2, ptr)`.

---

## Parameter defines

Named constants live in [`include/constants/ground_script_params.h`](../include/constants/ground_script_params.h) (included by `data_script.h`). Related existing headers:

| Header | Used for |
|--------|----------|
| [`constants/ground_script_params.h`](../include/constants/ground_script_params.h) | `UPDATE_NAME_*`, `OBJ_FLAG_*`, `EMOTION_EFFECT_*` |
| [`constants/direction.h`](../include/constants/direction.h) | `DIRECTION_*`, `DIR_TRANS_*` |
| [`portrait_placement.h`](../include/portrait_placement.h) | `PLACEMENT_*` / `PLACEMENT_KEEP` (for `PORTRAIT`) |
| [`constants/emotions.h`](../include/constants/emotions.h) | `EMOTION_*` portrait faces (for `PORTRAIT`, not overhead effects) |
| [`constants/bg_music.h`](../include/constants/bg_music.h) | `MUS_*` (for `BGM_*` / `WAIT_BGM`) |

### `UpdateNameKind` — `UPDATE_NAME(kind, …)`

```c
UPDATE_NAME_CLEAR            // 0  reset slot
UPDATE_NAME_SPEECH_SELF      // 1
UPDATE_NAME_SPEECH_PARTNER   // 2
UPDATE_NAME_SPEECH_TYPE      // 3  id = lives type
UPDATE_NAME_SPECIES_SELF     // 4
UPDATE_NAME_SPECIES_PARTNER  // 5
UPDATE_NAME_SPECIES_TYPE     // 6  id = lives type
UPDATE_NAME_ACTOR_SELF       // 7  running lives (most common)
UPDATE_NAME_ACTOR_PARTNER    // 8
UPDATE_NAME_ACTOR_TYPE       // 9  id = lives type
UPDATE_NAME_DUNGEON_FLOORS   // 10 → gFormatArgs[slot]
```

### `OBJ_FLAG_*` — `SET_OBJ_FLAGS` / `CLEAR_OBJ_FLAGS`

```c
OBJ_FLAG_INTERACT_MASK    // 0x0000001F  common interact/visibility group
OBJ_FLAG_CANCEL_SCRIPT2   // 0x00000400  CLEAR also cancels nested scriptData2
OBJ_FLAG_WALK_RELATED     // 0x00001000  often around walk/move sequences
OBJ_FLAG_AIRBORNE         // 0x01000000  height cutscenes (clear → HEIGHT_TO → set)
```

Other flag values still appear as raw hex until identified.

### `EMOTION_EFFECT_*` — `EMOTION_EFFECT(id)`

```c
EMOTION_EFFECT_NONE       // 0   clear
EMOTION_EFFECT_NOTICE     // 88  !
EMOTION_EFFECT_QUESTION   // 89  ?
EMOTION_EFFECT_SHOCK      // 91  !!
EMOTION_EFFECT_SWEAT      // 92  sweat
EMOTION_EFFECT_SMILE      // 93  smile / note
EMOTION_EFFECT_ANGRY      // 94  anger
```

### Direction / rotate — `WALK_DIRECTION`, `ROTATE_*`

From `constants/direction.h`:

```c
DIRECTION_SOUTH, DIRECTION_SOUTHEAST, DIRECTION_EAST, DIRECTION_NORTHEAST,
DIRECTION_NORTH, DIRECTION_NORTHWEST, DIRECTION_WEST, DIRECTION_SOUTHWEST

DIR_TRANS_NONE, DIR_TRANS_SPINRIGHT1, DIR_TRANS_SPINLEFT1, …
DIR_TRANS_10, DIR_TRANS_11   // common cutscene turn styles
```

---

## Quick index

| Op | Old name(s) | New macro |
|----|-------------|-----------|
| `0x2D` | `CMD_2D` | `UPDATE_NAME` |
| `0x4F` | `CMD_4F` | `CLEAR_HITBOX` |
| `0x51` | `CMD_51` | `SET_POSITION_BOUNDS` |
| `0x52` | `CMD_52` | `SET_OBJ_FLAGS` |
| `0x53` | `CMD_53` | `CLEAR_OBJ_FLAGS` |
| `0x56` | `CMD_56` | `EMOTION_EFFECT` / `EMOTION_EFFECT_EX` |
| `0x59` | `CMD_59` | `MOVE_RELATIVE_POS` |
| `0x60` | `CMD_60` | `SET_HEIGHT` / `SET_HEIGHT_WAIT` |
| `0x62` | `CMD_62` | `MOVE_RELATIVE` |
| `0x68` | `CMD_68` | `HEIGHT_TO_2` |
| `0x70` | `CMD_70` | `HEIGHT_TO` |
| `0x84` | `CMD_84` | `WALK_RELATIVE_DIST` |
| `0x89` | `CMD_89` | `WALK_DIRECTION` |
| `0x92` | `CMD_92` / `CMD_UNK_92` | `ROTATE_RELATIVE` |
| `0x93` | `CMD_93` / `CMD_UNK_93` | `ROTATE_TO_LIVES` |
| `0x94` | `CMD_94` / `CMD_UNK_94` | `ROTATE_TO_LIVES2` |
| `0x95` | `CMD_95` / `CMD_UNK_95` | `ROTATE_TO_WAYPOINT` |
| `0x9A` | `CMD_9A` | `CAMERA_FOCUS_PLAYER` |
| `0x9B` | `CMD_9B` | `CAMERA_FOLLOW` |
| `0xDE` | `CMD_DE` | `WAIT_EFFECT` |
| `0xDF` | `CMD_DF` | `WAIT_FADE` |
| `0xE0` | `CMD_E0` | `WAIT_BGM` |
| `0xE5` | `CMD_E5` / `CMD_UNK_E5` | `AWAIT_CUE_COND` |
| `0xF6` | `CMD_F6` | `DEBUGINFO` / `DEBUGINFO_O` |

Compatibility aliases still exist for `CMD_UNK_92`–`95` and `CMD_UNK_E5` (they expand to the new macros).

Also bulk-rewired already-named macros that were still written raw in data: `FADE_IN` (`0x22`), `FADE_OUT` (`0x23`), `SELECT_ANIMATION` (`0x54`), `PORTRAIT` (`0x2E`), etc.

---

## Command reference

### `0x2D` → `UPDATE_NAME(kind, slot, id)`

**Does:** Binds dialogue substitution buffers `gFormatBuffer_Names` / `gFormatBuffer_Monsters[slot]` (what `{NAME_n}` / monster-name macros resolve to).

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `kind` | `argByte` | `UpdateNameKind` (`UPDATE_NAME_*`) |
| `slot` | `argShort` | Format buffer index (`{NAME_0}` …) |
| `id` | `arg1` | Lives type id for `UPDATE_NAME_*_TYPE`; else `0` |

**Example (Sky Tower):** `UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0, 0)` — bind slot 0 to the running actor.

---

### `0x4F` → `CLEAR_HITBOX`

**Does:** Clears the running object’s hitbox (`setHitboxPos` null) and cancels a nested `scriptData2` if active.

**Parameters:** none.

---

### `0x51` → `SET_POSITION_BOUNDS(link)`

**Does:** Restricts movement to a GroundLink area (`GroundLink_GetArea`).

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `link` | `argShort` | Area / link index (map-local; no global enum yet) |

---

### `0x52` → `SET_OBJ_FLAGS(f)`

**Does:** Sets bits on the parent object/lives flags (`callbacks->setFlags`).

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `f` | `arg1` | `OBJ_FLAG_*` bitmask |

**Example:** `SET_OBJ_FLAGS(OBJ_FLAG_AIRBORNE)` after landing from a `HEIGHT_TO` sequence.

---

### `0x53` → `CLEAR_OBJ_FLAGS(f)`

**Does:** Clears bits on the parent object/lives flags (`callbacks->clearFlags`). If `f` includes `OBJ_FLAG_CANCEL_SCRIPT2`, also cancels nested `scriptData2`.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `f` | `arg1` | `OBJ_FLAG_*` bitmask |

**Example:** `CLEAR_OBJ_FLAGS(OBJ_FLAG_AIRBORNE)` before a fall/height cutscene.

---

### `0x56` → `EMOTION_EFFECT(id)` / `EMOTION_EFFECT_EX(unk, id)`

**Does:** Attaches (or clears) an overhead emotion effect on the running lives. Pair with `WAIT_EFFECT`.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `unk` | `argShort` | Secondary callback arg (usually `0`; rarely `3`) — use `EMOTION_EFFECT_EX` when non-zero |
| `id` | `arg1` | `EMOTION_EFFECT_*` (`EMOTION_EFFECT_NONE` clears) |

**Example:** `EMOTION_EFFECT(EMOTION_EFFECT_NOTICE)` then `WAIT_EFFECT`.

---

### `0x59` → `MOVE_RELATIVE_POS(wait, h, v)`

**Does:** Instantly offsets position by `(h, v)` pixels (engine stores values `<< 8`), then optionally waits.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `wait` | `argByte` | Frames to pause after |
| `h` | `argShort` | X delta (pixels) |
| `v` | `arg1` | Y delta (pixels) |

---

### `0x60` → `SET_HEIGHT(h)` / `SET_HEIGHT_WAIT(wait, h)`

**Does:** Instantly sets sprite height above ground (pixels; stored as `h << 8`).

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `wait` | `argByte` | Frames to pause after (use `SET_HEIGHT_WAIT` when non-zero) |
| `h` | `arg1` | Height in pixels |

**Example:** `SET_HEIGHT(0x88)` — start a fall/land sequence from height 136.

---

### `0x62` → `MOVE_RELATIVE(spd, h, v)`

**Does:** Walks toward a relative `(h, v)` pixel offset at speed `spd` **without** updating facing each step. Counterpart of `WALK_RELATIVE` (`0x6A`), which does update facing.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `spd` | `argShort` | Max step speed |
| `h` | `arg1` | X delta (pixels) |
| `v` | `arg2` | Y delta (pixels) |

---

### `0x68` → `HEIGHT_TO_2(spd, h)`

**Does:** Same runtime behavior as `HEIGHT_TO` — animate height to `h` at up to `spd` units/frame. Kept as a separate opcode because retail uses both `0x68` and `0x70`.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `spd` | `argShort` | Max height change per frame |
| `h` | `arg1` | Target height (pixels) |

---

### `0x70` → `HEIGHT_TO(spd, h)`

**Does:** Animates sprite Z/height to `h` (pixels) at up to `spd` units/frame (Data Crystal: “Change Sprite Z Position”). Script waits until the height reaches the target.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `spd` | `argShort` | Max height change per frame |
| `h` | `arg1` | Target height (pixels) |

**Example (Sky Tower land):** `HEIGHT_TO(0xA00, 0)` then `HEIGHT_TO(0x200, 0xC)` / `HEIGHT_TO(0x200, 0)`.

---

### `0x84` → `WALK_RELATIVE_DIST(spd, h, v)`

**Does:** Interpolates to a relative `(h, v)` pixel offset. Duration = `hypot(delta) / spd` (minimum 1 frame). Updates facing along the path.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `spd` | `argShort` | Distance divisor for duration |
| `h` | `arg1` | X delta (pixels) |
| `v` | `arg2` | Y delta (pixels) |

---

### `0x89` → `WALK_DIRECTION(f, spd, dir)`

**Does:** Faces `dir`, then walks forward at `spd` for `f` frames (updates walk animation).

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `f` | `argByte` | Frames to walk |
| `spd` | `argShort` | Walk speed |
| `dir` | `arg1` | `DIRECTION_*` |

**Example:** `WALK_DIRECTION(0x48, 0x100, DIRECTION_NORTH)`.

---

### `0x92` → `ROTATE_RELATIVE(spd, t, turn)`  
*(was `CMD_UNK_92`)*

**Does:** Like `ROTATE_TO`, but the target facing is derived from the current direction via `TransformDirection1` (relative turn).

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `spd` | `argByte` | Turn speed |
| `t` | `argShort` | `DIR_TRANS_*` |
| `turn` | `arg1` | Relative turn operand |

---

### `0x93` → `ROTATE_TO_LIVES(spd, t, id)`  
*(was `CMD_UNK_93`)*

**Does:** Rotates to face another lives actor (resolved by lives id), using sized delta direction.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `spd` | `argByte` | Turn speed |
| `t` | `argShort` | `DIR_TRANS_*` (often `DIR_TRANS_10`) |
| `id` | `arg1` | Lives type / index to face |

**Example:** `ROTATE_TO_LIVES(4, DIR_TRANS_10, 0)`.

---

### `0x94` → `ROTATE_TO_LIVES2(spd, t, id)`  
*(was `CMD_UNK_94`)*

**Does:** Same idea as `ROTATE_TO_LIVES`, but without the size-offset path when computing facing.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `spd` | `argByte` | Turn speed |
| `t` | `argShort` | `DIR_TRANS_*` |
| `id` | `arg1` | Lives type / index |

---

### `0x95` → `ROTATE_TO_WAYPOINT(spd, t, w)`  
*(was `CMD_UNK_95`)*

**Does:** Rotates to face a GroundLink waypoint.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `spd` | `argByte` | Turn speed |
| `t` | `argShort` | `DIR_TRANS_*` |
| `w` | `arg1` | Waypoint / link index |

---

### `0x9A` → `CAMERA_FOCUS_PLAYER`

**Does:** Snaps camera focus to lives index 0 (player) without waiting.

**Parameters:** none.

---

### `0x9B` → `CAMERA_FOLLOW(spd)`

**Does:** Starts camera tracking of the running object at speed `spd`; script waits until the camera settle condition clears.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `spd` | `argShort` | Follow / pan speed |

---

### `0xDE` → `WAIT_EFFECT`

**Does:** Waits until the lives emotion/sprite effect started by `EMOTION_EFFECT` finishes (`func50_spriteRelated`).

**Parameters:** none.

---

### `0xDF` → `WAIT_FADE`

**Does:** Waits until the current screen fade finishes (same waiter used after `FADE_IN` / `FADE_OUT`).

**Parameters:** none.

---

### `0xE0` → `WAIT_BGM(id)`

**Does:** Waits until the current BGM is no longer track `id` (timeout ~180 seconds).

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `id` | `argShort` | `MUS_*` from `constants/bg_music.h` |

---

### `0xE5` → `AWAIT_CUE_COND(a, b)`  
*(was `CMD_UNK_E5`)*

**Does:** Sets `branchDiscriminant` to cue `a`, then waits until `GroundScriptLockCond(action, a, b)` succeeds (alert/lock condition), then continues via unlock branch labels.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| `a` | `argShort` | Cue id / branch discriminant |
| `b` | `argByte` | Condition value (`gUnlockBranchLabels[a]`) |

Note: macro args are `(a, b)` but the struct stores `argByte = b`, `argShort = a`.

---

### `0xF6` → `DEBUGINFO` / `DEBUGINFO_O(originalLineNum)`

**Does:** Debug marker recording the source line (and, in non-matching builds, the source file). No gameplay effect — the interpreter skips / treats it as a no-op marker. Almost every station/live script starts with one; dumps often show it as `CMD_F6(...)`.

| Param | Field | Meaning / defines |
|-------|-------|-------------------|
| *(unused)* | `argByte` | Always `0` |
| `originalLineNum` | `argShort` | Line number from the original script source |
| *(unused)* | `arg1` / `arg2` | Always `0` |
| filename | `argPtr` | `FAKE_FILENAME` in matching builds; `__FILE__` when `NONMATCHING` |

**Macros:**

```c
// Matching (retail) builds — preserve original line numbers:
DEBUGINFO_O(originalLineNum)  // { CMD_BYTE_F6, 0, originalLineNum, 0, 0, FAKE_FILENAME }

// NONMATCHING — use the real C line/file:
DEBUGINFO                  // { CMD_BYTE_F6, 0, __LINE__, 0, 0, __FILE__ }
```

**Dump example:** `CMD_F6(0, 35, 0, 0, 0x0825FFA8)` → `DEBUGINFO_O(35)` (ptr is the fake filename string in ROM).

---

## Related already-named commands (often still seen as `CMD_XX` in dumps)

These were already macros; dumps/editors sometimes still showed hex names:

| Op | Macro | Role / param defines |
|----|-------|----------------------|
| `0x02` | `NEXT_DUNGEON(u, d)` | `d`: script dungeon id (`constants/script_dungeon_id.h`) |
| `0x22` / `0x23` | `FADE_IN(wait, f)` / `FADE_OUT(wait, f)` | `wait` bool-ish; `f` frames |
| `0x4C` | `FANFARE_PLAY2(i)` | Fanfare / SFX id |
| `0x54` | `SELECT_ANIMATION(id)` | Cutscene stand/walk animation mode |
| `0x6A` | `WALK_RELATIVE(spd, h, v)` | Walk to relative offset **with** facing updates |
| `0x91` | `ROTATE_TO(spd, t, o)` | `t`: `DIR_TRANS_*`; `o`: `DIRECTION_*` |
| `0x2E` | `PORTRAIT(place, id, emotion)` | `place`: `PLACEMENT_*`; `emotion`: `EMOTION_*` |

---

## Source pointers

| Area | Path |
|------|------|
| Macro definitions + param comments | [`include/data_script.h`](../include/data_script.h) |
| Parameter defines | [`include/constants/ground_script_params.h`](../include/constants/ground_script_params.h) |
| Opcode enum | [`include/constants/script_cmd.h`](../include/constants/script_cmd.h) |
| Runtime handlers | [`src/ground_script.c`](../src/ground_script.c) |
| Editor names / parse layouts | [`RescueEditor/src/RescueEditor.Core/ScriptCodec.cs`](../RescueEditor/src/RescueEditor.Core/ScriptCodec.cs), [`ScriptSource.cs`](../RescueEditor/src/RescueEditor.Core/ScriptSource.cs) |
| Example rewritten scene | [`src/data/ground/vanilla/ground_data_d13p01_station.h`](../src/data/ground/vanilla/ground_data_d13p01_station.h) (Sky Tower entry) |
