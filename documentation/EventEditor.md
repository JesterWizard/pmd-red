# Event Editor

The Explorers of Sky demake's chapter 1 (the default `STORY=sky` build) keeps
its story events in plain text files under [`events/sky/`](../events/sky).
The build turns them into the game's data, so you can change scenes, story
pictures and the opening movie without touching C. A local web page edits
the same files; editing them in a text editor works just as well.

| What | File | Needs the EoS ROM? |
|---|---|---|
| Scene scripts: dialogue, movement, waits, sounds, which CG shows and for how long | [`events/sky/scenes/*.scene`](../events/sky/scenes) | No |
| Story CGs: which picture, fades, pans (up / down / none, speed) | [`events/sky/cutaways.cfg`](../events/sky/cutaways.cfg) | No |
| Opening movie: the Shaymin scene's timings | [`events/sky/opening.cfg`](../events/sky/opening.cfg) `[shaymin]` | No |
| Opening movie: leave out a recorded scene, play fewer of its frames | `opening.cfg` `[scene ...]` | No |
| Opening movie: move a recorded scene's view | `opening.cfg` `[scene ...]` | Works without it, exact only with it ([below](#what-needs-the-eos-rom)) |
| Opening movie: more frames than recorded, new pictures or sprites | — | Yes |

60 frames = 1 second everywhere.

## Open the editor

```bash
python3 tools/event_editor/serve.py        # opens http://127.0.0.1:8765/
python3 tools/event_editor/serve.py --port 9000 --no-browser
```

It needs only Python 3. It serves the page on your own computer
(127.0.0.1) and writes only the files under `events/sky/` (and pictures you
add, into `graphics/custom/sky_cutaways/`). Ctrl+C stops it. Four tabs:

- **Scenes**: pick a scene file and a script on the left. Each command is a
  row: change the command in its list, fill in its fields (names come up as
  you type), ▲ ▼ move it, + inserts a command below, ✕ deletes. The grey text
  under a command (on hover) says what it does. **Save** checks the whole
  file first and refuses with the line and the reason if something is wrong.
  **Edit as text** shows the file itself.
- **Story CGs**: every picture with its preview, where the scenes show it and
  for how many frames (edit the number there), new pictures, fades and pans.
- **Opening**: the Shaymin timings and the recorded scenes.
- **Build**: runs `make` and shows the end of its output.

## Rebuild and check

```bash
make -j$(nproc)                       # pmd_red.gba, with your changes
scripts/cloud/smoke_test.sh           # boots it headless
scripts/cloud/sky_regression.sh       # the full sky suite (~2 min)
```

The build reads the files directly; there is no export step. A scene file
with a mistake stops the build with `FILE.scene:LINE: error: ...`.

## Scenes

A scene file is the scripts of one map, one command a line:

```
script g6_s0_lives0_dlg0                       # the partner drives this scene
    DEBUGINFO line=246
    WAIT 30                                    # half a second
    PORTRAIT place=LEFT_BOTTOM_2 who=PARTNER emotion=WORRIED
    MSG_NPC who=PARTNER text=" Hmm..."
    TEXTBOX_CLEAR
    WALK_RELATIVE speed=204 dx=24 dy=0
    SKY_CUTAWAY cg=RELIC_FRAGMENT frames=90    # the close-up, 1.5 s
    HALT
end
```

- `#` starts a comment; comments are kept (they end up in the C too).
- Arguments are `name=value` in any order, or just values in the order the
  table below lists them (`WAIT 30`, `WALK_RELATIVE 204 24 0`).
- Text is in double quotes. `\n` starts a new line in the box,
  `{WAIT_PRESS}` waits for a button, `\"` is a quote. `MSG_NPC` lines start
  with a space, as the existing ones do.
- Names can leave out their family prefix: `emotion=HAPPY` is
  `EMOTION_HAPPY`, `who=PARTNER` is `NPC_PARTNER` (the scene's own
  `#define`s), `cg=SKY_DAY_SCROLL` is `SKY_CUTAWAY_SKY_DAY_SCROLL`,
  `map=SKY_BEACH_DAY` is `MAP_SKY_BEACH_DAY`. The full C name works too, and so
  does any number or C expression (in brackets if it has spaces: `(15 + 5)`).
- Every script starts with `DEBUGINFO`. Its `line=` is kept from the C file
  the scenes came from (the build records it); leave it out in a new script.

**Actors and objects** (who is on the map, where, and which script they run):

```
actors g1_s0_lives
    actor kind=0 facing=EAST x=36 y=22.5 script=g1_s0_lives0_dlg0     # the hero
    actor kind=34 facing=WEST x=86 y=24.5 script=g1_s0_lives1_dlg0    # the partner
end
objects g6_s2_objs
    object kind=SKY_OBJ_RELIC_FRAGMENT w=1 h=1 x=30 y=23.5 script=relic_fragment_dlg0
end
```

`x`, `y` are map tiles (8 pixels; `.5` is half a tile), `facing` is SOUTH,
SOUTHEAST, EAST, NORTHEAST, NORTH, NORTHWEST, WEST or SOUTHWEST, `kind` is 0
for the hero, 34 for the partner or a `SKY_LIVES_` / `SKY_OBJ_` name.

**Layout**: `stations` (the scripts that run each group), `sectors NAME`
(what `SELECT_ENTITIES` / `SELECT_LIVES` / `SELECT_OBJECTS` put on the map:
sector 0 when the scene starts) and `groups` (the map's groups in order) tie it
together. Scripts talk to each other with cues: one waits with `AWAIT_CUE 6`,
another sends `ALERT_CUE 6`.

**A new script**: "+ New script" in the editor (or a `script NAME ... end`
block by hand), then name it in an actor's or object's `script=`. **A new
scene file** `events/sky/scenes/sky_<map>_scenes.scene` becomes
`sky_<map>_scenes.h`, which `src/data/ground/sky/ground_data_<map>_station.h`
must `#include`; `tools/event_editor/import_c.py` turns an existing C scene
file into one.

### Commands

The commands with friendly fields (the editor lists every other command of
`include/data_script.h` too, under "Other", with its C argument names):

| Command | Arguments | What it does |
|---|---|---|
| **Timing** | | |
| `WAIT` | `frames=` | Wait this many frames (60 frames = 1 second). |
| `WAIT_FADE` |  | Wait until the screen has finished fading. |
| `WAIT_FANFARE2` | `sound=` | Wait until this sound effect has finished. |
| **Cues** | | |
| `AWAIT_CUE` | `cue=` | Wait until another script sends this cue (ALERT_CUE). |
| `ALERT_CUE` | `cue=` | Send a cue: scripts waiting for it (AWAIT_CUE) go on. |
| **Text** | | |
| `MSG_NPC` | `who= text=` | A line of dialogue with the speaker's name. who=-1: no name. {WAIT_PRESS} waits for a button, \n starts a new line. |
| `MSG_QUIET` | `who= text=` | A line of text without a speaker name (thoughts). |
| `MSG_ON_BG_AUTO` | `frames= text=` | Text over a black screen that goes on by itself. |
| `TEXTBOX_CLEAR` |  | Close the text box. |
| `PORTRAIT` | `place= who= emotion=` | Show the speaker's portrait. place=KEEP keeps it where it is and only changes the face. |
| `ASK2` | `flag= default= who= text=` | Ask a question; the CHOICE lines after it are the answers. |
| `CHOICE` | `label= text=` | An answer to the question above: picking it jumps to LABEL label. |
| `UPDATE_NAME` | `kind= who= id=` | Set the name the text boxes use for an actor. |
| `RENAME_ALLY` | `id=` | Open the naming screen for the partner. |
| `CLEAR_HERO_NAME` |  | Clear the hero's name. |
| **Flow** | | |
| `LABEL` | `label=` | A place to jump to (JUMP_LABEL, CHOICE). |
| `JUMP_LABEL` | `label=` | Jump to LABEL label. |
| `CALL_SCRIPT` | `script=` | Run a common script (e.g. SHOCK_FUNC: the actor jumps in surprise). |
| `JUMP_SCRIPT` | `script=` | Go on with a common script and do not come back. |
| `RET` |  | End the script (station scripts). |
| `HALT` |  | Stop here and stay (the actor stays on the map). |
| `END_DELETE` |  | End the script and remove the actor from the map. |
| `DEBUGINFO` | `line=` | The first line of every script (a debug marker). line: kept from the original C file; leave it out in new scripts. |
| **Actors** | | |
| `WALK_RELATIVE` | `speed= dx= dy=` | Walk dx, dy pixels from where the actor is (8 pixels = 1 tile); speed 256 = 1 pixel a frame. |
| `MOVE_RELATIVE` | `speed= dx= dy=` | Slide dx, dy pixels without the walking animation (speed 256 = 1 pixel a frame). |
| `ROTATE_TO` | `speed= turn= direction=` | Turn to face a direction; speed is frames per step. |
| `ROTATE_TO_LIVES` | `speed= turn= kind=` | Turn to face another actor (by lives kind: 0 = hero, 34 = partner). |
| `SELECT_ANIMATION` | `anim=` | Change the actor's animation (2 = standing still). |
| `STOP_ANIMATION_ON_CURRENT_FRAME` |  | Wait until the actor's animation has played once. |
| `SET_OBJ_FLAGS` | `flags=` | Set actor flags. |
| `CLEAR_OBJ_FLAGS` | `flags=` | Clear actor flags (INTERACT_MASK: no collision). |
| `EMOTION_EFFECT` | `effect=` | Show an emotion mark over the actor (!, ?, sweat...). |
| **Scene** | | |
| `SELECT_ENTITIES` | `group= sector=` | Put a sector's actors and objects on the map (group -1: this scene's group). |
| `SELECT_LIVES` | `group= sector=` | Put a sector's actors on the map. |
| `SELECT_OBJECTS` | `group= sector=` | Put a sector's objects on the map (the Relic Fragment...). |
| `SELECT_MAP` | `map=` | Load a map. |
| `SET_PLACE_MODE` | `mode=` | 1 before a scene is set up, 4 when it starts. |
| `NEXT_DUNGEON` | `frames= dungeon=` | Go to a dungeon. |
| `SKY_SAVE_GAME` |  | Ask to save (the demo's end). |
| `SKY_DEMO_TO_TITLE` |  | Back to the title screen. |
| **Screen** | | |
| `FADE_IN` | `wait= frames=` | Fade the scene in from black over frames (0: at once). |
| `FADE_OUT` | `wait= frames=` | Fade the scene out to black over frames. |
| `FADE2_IN` | `wait= frames=` | Fade the text layer in. |
| `FADE2_OUT` | `wait= frames=` | Fade the text layer out. |
| `FLASH_TO` | `wait= kind= frames= color=` | Flash the screen to a colour over frames. |
| `FLASH_FROM` | `wait= kind= frames= color=` | Come back from a flash over frames. |
| `CAMERA_SHAKE` | `mode= amp= period=` | Shake the screen (mode OFF stops it). |
| `CAMERA_INIT_PAN` |  | The camera follows this actor. |
| `CAMERA_END_PAN` |  | The camera stops following. |
| `SKY_CAMERA_SET` | `x= y=` | Put the camera's top-left corner at map pixel x, y. |
| `SKY_CAMERA_MOVE` | `dy= speed=` | Move the camera dy pixels down (speed 256 = 1 pixel a frame). |
| `SKY_CAMERA_MOVE_X` | `dx= speed=` | Move the camera dx pixels right (speed 256 = 1 pixel a frame). |
| `SKY_SHOW_MAP` | `on=` | Hide (FALSE) or show (TRUE) the map and its actors; text boxes stay. |
| `SKY_BUBBLES` | `mode=` | Krabby bubbles or rain over the scene (OFF stops them). |
| `SKY_STORM_BOLT` |  | The stormy sea's lightning, once. |
| `SKY_MAP_PAL_RESTART` |  | Restart the map's palette animations. |
| **Sound** | | |
| `BGM_STOP` |  | Stop the music. |
| `BGM_SWITCH` | `song=` | Play a song. |
| `BGM_FADEIN` | `frames= song=` | Play a song, fading it in over frames. |
| `BGM_FADEOUT` | `frames=` | Fade the music out over frames. |
| `FANFARE_PLAY2` | `sound=` | Play a sound effect (a number, or an SE_SKY_ name). |
| `SKY_AMBIENCE` | `song= frames=` | An ambience under the music (the waves), faded in over frames. |
| `SKY_AMBIENCE_FADEOUT` | `frames=` | Fade the ambience out (0: stop at once). |
| **Story CGs** | | |
| `SKY_CUTAWAY` | `cg= frames=` | Show a story CG. Still pictures: shown for frames (A/B skips after a while). Pans: the picture is held for frames, then the pan. |

## Story CGs

The full-screen pictures in the middle of scenes. A scene shows one with
`SKY_CUTAWAY cg=NAME frames=N`.

**How long it shows**: that line's `frames`. Change it in the scene file, or
in the editor's Story CGs tab under "Shown in". A still picture fades in,
stays `frames` (A or B skips it after `skip_after` frames) and fades out.

**Another picture**: point the CG's `picture` at a PNG ("New picture…" in
the editor copies one into `graphics/custom/sky_cutaways/`). Any size is
fine: it is scaled to fill the 240x160 screen and reduced to 240 colours by
the build. The PNGs that came from EoS have their converted `.at4px` / `.pal`
next to them and are used as they are; to change one of those in place,
delete its `.at4px` and `.pal` so the build converts it again.

**A new CG**: add a section (the editor's "+ Add a CG" does it):

```
[cg TREASURE_BAG]
id = 15                 # the next number no CG has had
title = The treasure bag
picture = graphics/custom/sky_cutaways/treasure_bag.png
```

then `SKY_CUTAWAY cg=TREASURE_BAG frames=120` in a scene. A CG's `id` is its
number in the game and never changes: built-in CGs keep theirs (2 and 3 were
the storm cliff's), a removed CG leaves its number unused, a new one takes
the next number. SUNSET_SEA0..7 (the glittering sea) cannot be removed.

**Fades and the sea**: `[stills] fade_frames` (32, 64, 96...: each fade in
and out) and `skip_after`; `[sequence SUNSET_SEA_ANIM] frames_per_picture`.

**Pans** (`SKY_DAY_SCROLL` over the beach, `GUILD_SKY_SCROLL` over the guild):
a tall picture, EoS's top-screen CG over the scene's map.

| Setting | Values |
|---|---|
| `direction` | `down`: from the CG down to the scene; it ends exactly on the scene's first view and the scene goes on without a cut (as EoS). `up`: from the scene up to the CG, then a fade to black. `none`: the CG only, then a fade to black. |
| `speed` | pixels a second (100 as shipped) |
| `easing` | `smooth` (starts and ends slowly) or `linear` |
| `fade_in` | `yes`: from black; `no`: at once |
| `top` | the CG at the top. After changing it run `python3 tools/event_editor/cutaways.py pans` (the editor's "Rebuild pan pictures", ~20 s) to make the tall picture again |

The scene's `frames` is how long the picture is held before it moves. With
`up` or `none` the scene comes back after a black frame: give the `FADE_IN`
after the `SKY_CUTAWAY` some frames (`FADE_IN wait=TRUE frames=30`) for a
fade.

The storm cliff (`STORM`), the boot screens, the title and the opening are
fixed sequences: `frames` does nothing for them (the opening has its own file).

## The opening

**Shaymin** (`[shaymin]`): every timing of the first scene, in frames from
the start of the fade in: the flash, the camera's move (`pan_start`,
`pan_join`, `pan_end`, `pan_speed`, `land_view`), when Shaymin and the petals
appear, the fade out. The file says what each one is.

**The recorded scenes** (`[scene NAME]`, Lapras to the hills):

| Setting | Meaning |
|---|---|
| `play` | `no` leaves the scene out |
| `first`, `last` | the recorded frames to play; the editor shows the recorded range. A scene still starts on the song's beat; a shorter one leaves the background up (its sprites gone) until the next starts |
| `view` | `frame:x,y` keyframes: the top-left corner of the GBA's 240x160 view on EoS's two screens (top screen y 0–191, bottom 192–383) |
| `ease` | `smooth` or `linear` moves between keyframes |

### What needs the EoS ROM

The recorded scenes are frame-by-frame recordings of EoS, kept as one data
file a scene (`graphics/custom/sky_opening/scenes/*.bin`, with what they were
made with in `baked.json`). Without the ROM:

- **Fewer frames, leaving a scene out**: exact.
- **Moving the view**: the build moves the recorded backgrounds and sprites
  to the new view. Backgrounds are exact wherever the recording had them;
  **sprites that were outside the original view were never recorded**, so a
  view that shows more than the original shows them missing. The editor marks
  such a scene "moved: exact only with the EoS ROM".
- **More frames than recorded, anything not on screen in EoS**: not possible.

With the ROM, `python3 tools/make_sky_opening.py EOS.nds` records the scenes
again, taking `first`, `last`, `view` and `ease` from `opening.cfg`, so every
setting comes out exact (see [SkyDemake.md](Features/SkyDemake.md#the-rest-of-the-opening)).
The ROM is only read; never commit it.

Nothing else here needs the ROM: the story CGs and pans are built from the
PNGs and converted maps in the repository.

## How it builds (for programmers)

- In the sky build the Makefile runs `tools/event_editor/scenes.py`,
  `cutaways.py` and `opening.py`; their headers go to `build/pmd_red/gen/sky/`
  (`sky_d01p01_scenes.h`, `sky_d01p02_scenes.h`, `sky_cg_config.h`,
  `sky_opening_config.h`, `sky_opening_scenes.h`). `STORY=vanilla` and
  `MODERN=0` never read them.
- As shipped, the generated C is the same as the hand-written C it replaced,
  so `pmd_red.gba` is byte-identical. The modern build records
  `__LINE__` / `__FILE__` in each `DEBUGINFO`, so the compiler puts a `#line`
  with the original line and file before each one. Pan settings other than
  the shipped ones switch `src/sky_cutaways.c` to its configurable pan
  (`SKY_CG_PANS_AS_SHIPPED`).
- `sky_cutaways.c` / `sky_cutaways_data.c` include `<sky_cg_config.h>` (angle
  brackets: the vanilla build compiles them too, and scaninc skips `<>`).
- Tests: `python3 -m unittest tools/event_editor/test_event_editor.py`, also
  run by `scripts/cloud/sky_regression.sh` (`event_editor_tests`).
- `python3 tools/event_editor/scenes.py check|fmt FILE.scene`,
  `cutaways.py check`, `opening.py check` check the files from the command line.
