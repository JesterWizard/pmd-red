# Explorers of Sky Demake (Chapter 1)

---

## Index

- [Introduction](#introduction)
- [What plays](#what-plays)
- [Building](#building)
- [EoS maps](#eos-maps)
- [Beach Cave and the boss](#beach-cave-and-the-boss)
- [Music](#music)
- [Dungeon tilesets](#dungeon-tilesets)
- [Title screens](#title-screens)
- [Gen 4 Pokémon and moves](#gen-4-pokémon-and-moves)
- [Testing](#testing)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

A demake of the opening chapter of *Pokémon Mystery Dungeon: Explorers of Sky*
("A Storm at Sea"), from the storm to the end of the Zubat & Koffing fight in
Beach Cave Pit, built from the real EoS assets: ground maps, second-screen art,
dungeon tileset, the Beach Cave Pit room, music, title screens, portraits and
the Gen 4 Pokémon and moves, all converted from a user-supplied EoS ROM (which
is never committed). The choreography and text follow the EoS scene scripts
(`SCRIPT/<level>/m01a0xxx.ssb`).

![Chapter 1 in the GBA engine](images/sky_demake.png)

It is the default story of the modern build on this branch (`STORY=sky`).
The game is a demo of chapter 1: after the beach epilogue ("And so...") it
asks whether to save, shows "The demo ends here. Look forward to updates!"
and returns to the title screen. Continuing a finished save shows the same
ending again (`s_script_SKY_DEMO_END` in
[`src/data/ground/ground_event_data.h`](../../src/data/ground/ground_event_data.h),
`SKY_SAVE_GAME` / `SKY_DEMO_TO_TITLE` in [`src/sky_story.c`](../../src/sky_story.c),
the Continue check in [`src/ground_main.c`](../../src/ground_main.c)).

Red's story after chapter 1 is not in the sky build: only the ground maps the
demo visits keep their scripts and map files (Tiny Woods entrance/end, which
host the Sky scenes, the personality test, the two logo maps and the Sky
maps; found by tracing a full playthrough). The other 130 station script
files compile to nothing under `SKY_STORY`, their `gMapScriptTable` entries
are empty (`GetGroundScript` returns the null script) and their map files
are not linked (their names in the sorted ground file table point at a kept
file). This saves about 3.7 MB. The vanilla build keeps everything.

---

## What plays

Boot: EoS's Nintendo logo and ESRB notice, Red's logo screens, then the EoS
title (EoS's English logo, blinking "Press START", EoS title theme). The top
menu has EoS's options and background and plays the EoS top-menu theme; the quiz uses EoS's intro wording and "Welcome to the World
of Pokémon". The starter list adds Turtwig, Chimchar, Piplup, Munchlax and
Riolu (with Vulpix, Meowth, Phanpy). Then:

| # | EoS script | Map (converted EoS level) | Scene |
|---|---|---|---|
| 1 | — | — | Chapter card: black screen, EoS banner font, **Chapter 1 — A Storm at Sea** |
| 2 | m01a0101/0102 | `v01p01a` storm at sea | Lightning on black, voices, the storm-cliff art lit by lightning, then a fade to the waves (EoS's "Storm") |
| 3 | m01a0103 | `d01p11a` beach (day) | The EoS sky panorama, the hero washed up on the sand |
| 4 | m01a0104 | `g01p01b` Wigglytuff's Guild (dusk) | Guild sky; the partner loses their nerve on the sentry grate; the Relic Fragment close-up; Zubat & Koffing watch and follow |
| 5 | m01a0202/0203 | `v01p04b`, `v01p05b` | Dusk sky; Krabby blowing bubbles at sunset ("On the Beach at Dusk") |
| 6 | m01a0204–0208 | `d01p11b` beach (sunset) | The glittering sunset sea; the partner finds the hero; naming; Zubat & Koffing steal the Relic Fragment; "can you please help me?" |
| 7 | — | Beach Cave B1F–B4F | EoS Beach Cave tileset and wild Pokémon (Shellder, Kabuto, Corsola, Shellos), "Beach Cave" music |
| 8 | m01a0401 | Beach Cave Pit (B5F) | The EoS Pit room and background, "In the Depths of the Pit", pre-fight dialogue, then the Zubat & Koffing fight ("Boss Battle") |
| 9 | m01a0701 | `d01p41a` Beach Cave Pit | The thieves give the fragment back and flee |
| 10 | m01a0702 | `d01p11b` beach (sunset) | The Relic Fragment; "Form a team / Say no"; "And so..." |

The Relic Fragment is a ground object (EoS `GROUND/g01p01a1.wan`, ornament
`relicfragmentp`, object kind `SKY_OBJ_RELIC_FRAGMENT`): it falls on the sand
when Zubat rams the partner and is gone when Zubat grabs it (m01a0208), and it
lands in front of the heroes when Zubat throws it back in the Pit (m01a0701).

Losing in Beach Cave plays m01a0301 on the beach ("Ouch! We didn't do too
well...") and goes straight back in; the re-fight uses m01a0501's text.

Dialogue uses EoS's box, measured on the DS (Sky UI style): 52 px tall with
5 px bevelled frames and EoS's rounded corners (a 7-tile window from row 12,
2 px left transparent above and below, so the bottom margin is 10 px as on
the DS; corner tiles in `graphics/custom/ui_style/sky_story_chrome.png`,
frame blues measured from EoS), text 4 px below and 6 px right of the frame's
inner edge, 13 px between lines; portraits have EoS's 4 px frame, 14 px above
the box,
bottom portraits kept just above the box, and a full box clears for the next
page instead of scrolling (`sSkyTextbox` in
[`src/string_format.c`](../../src/string_format.c)). The dungeon message box has
the same box; it keeps Red's 7-row window (an 8th would reach the minimap's
tiles), so when it is full it scrolls a line up before writing the next,
and the minimap's tilemap stops at row 11 while it is up (`LOG_*` in [`src/dungeon_message.c`](../../src/dungeon_message.c),
`sub_803EAF0` kind 3 in [`src/dungeon_vram.c`](../../src/dungeon_vram.c),
`UpdateBgTilemapForDungeonMap`).

The Krabby bubbles (EoS's `supervision_SpecialActing` 4/5 effect; spawn
points, sizes and velocities measured frame by frame in EoS: down-right from
the Krabby mouths on the sand, up-left at sunset, a slow leftward drift on
the beach) drift
over the two Krabby scenes, the sunset beach and the sunset-sea cutaway:
`SKY_BUBBLES(mode)` in scripts, OBJ sprites captured from EoS's OBJ layer
([`src/sky_bubbles.c`](../../src/sky_bubbles.c),
`graphics/custom/sky_bubbles/`). Bubbles hide behind open windows, since EoS
shows text on the other screen. The same effect draws the rain over the
storm (`SKY_BUBBLES_RAIN`, m01a0102): 1 px teal streaks falling steeply over
the cliff, through the lightning and over the sea after the pan
(`graphics/custom/sky_rain/`). As in EoS the rain is blended over the
picture: the streaks are semi-transparent OBJs, alpha-blended (10/16 over
8/16) with BG2/BG3/the backdrop, so they are dim over the cliff and bright
over the sky; the previous blend settings come back when the rain stops. Converted maps keep EoS's palette animations
(the sea shimmer, the sunset glitter, the Pit water) and, on maps that fit
VRAM, EoS's BPA tile animations: the storm-sea waves (`EV0101A1.bpa`) and
the guild torches (`EG0101B1.bpa`), in RT's BPA slots.

Connected CGs pan instead of cutting: where EoS shows a top-screen CG right
above the scene (the sky over the beach, the dusk clouds over the guild), the
demake shows the CG and eases down into the scene. The storm cliff instead
fades out and the stormy sea fades in, as the two screens fade on the DS. The 240x320 pictures come from
[`tools/make_sky_cutaway_scrolls.py`](../../tools/make_sky_cutaway_scrolls.py)
(`graphics/custom/sky_scrolls/`: the CG over a capture of the scene's first
view, with the player's Pokémon replaced by the rendered map; between them
the map from its top edge, so the tent is whole under the guild's sky, as on
the DS); the pan ends on exactly the map's first view and the scene is shown
at once, without a fade; the tiles
stream through a 21-row ring in the cutaway's VRAM (`ScrollConnected` in
[`src/sky_cutaways.c`](../../src/sky_cutaways.c)).

The pan hands over to the map without black or garbage frames: the map's
rebuild reuses the cutaway's VRAM, so the pan ends on an exact cover of the
map's first view (`<pair>_cover.{tiles,tilemap}`: the map's two layers as
BG0 = front and BG1 = back, using the map's own tiles, flips and palettes)
and keeps it up for a few frames while `GroundMap_Select` rebuilds BG2/BG3
(`ShowCover` / `SkyCutaway_UpdateCover`; `gSkyCoverActive` lets BG1 show
outside the text windows, see `REG_WINOUT` in
[`src/cpu.c`](../../src/cpu.c)). Mid-scene CGs (the Relic Fragment, the
sunset sea) fade out of and back into the scene. The scene's actors are on
screen during the pan (the hero lying on the sand, the partner at the
grate): the pan draws them each frame with the ground camera at the map
position the picture shows (`SKY_SCROLL_<PAIR>_CAM_X/Y`,
`SkyGroundSprite_DrawActors` in [`src/ground_sprite.c`](../../src/ground_sprite.c)),
after unfading the ground palettes the scene's `FADE_OUT` darkened.

The storm voices follow m01a0101: EoS's thunder (`SE_NUM_EVENT_MAIN01_THUNDER_01/02`,
Red ids 461/467) with each white flash, and after "Waaaaaah!" (`..._WARP`,
id 488) a 90-frame white-out with the text box up, a hold on white, then
black before the cliff, whose lightning plays the same thunder.

Zubat and Koffing walk in from off screen at the guild as in m01a0104: the
camera follows the partner 104 px down, the two spawn above the view, and
`SKY_CAMERA_MOVE(dy, speed)` (`SkyCamera_MoveBy` in
[`src/code_809D148.c`](../../src/code_809D148.c)) raises the camera 88 px
while they walk to their marks. Both carry lives flag `0x80000` (EoS
`SetOutputAttribute(8)`), the higher OBJ priority, so they are drawn over the
guild's bushes.

EoS's `SetAnimation` ids match Red's ground animation ids for the common
ones (2 still, 5 walking in place, 11 surprised/hurt, 12 attack), so the
scenes copy EoS's: the hero's `CORO_EXPLANATION_FUNC` (walking in place for
45 frames) when telling the partner they are human, backing off with feet
moving, the partner knocked back, Zubat's tackle.

The DS second screen has no GBA equivalent, so its art (sky panoramas, the
storm cliff, the Relic Fragment close-up, the animated sunset sea) is shown as
full-screen cutaways in the middle of scenes (`SKY_CUTAWAY(id, frames)`,
[`src/sky_cutaways.c`](../../src/sky_cutaways.c)).

---

## Building

```bash
make -j$(nproc)                 # sky story (default for the modern build)
make -j$(nproc) STORY=vanilla   # Red's story, no EoS content
```

- `STORY=sky` selects the ground-script pack `src/data/ground/sky/` and
  defines `SKY_STORY`. Everything EoS-specific is inside `#ifdef SKY_STORY`.
- `MODERN=0` (retail-matching) always uses the vanilla pack.
- `custom_story = TRUE` in `configs/runtime.c` still wins over `STORY`.
- Flipping `STORY` rebuilds every C object (the pack stamp is a dependency of
  all C objects, because headers test `SKY_STORY`).

---

## EoS maps

The EoS ROM is never committed. Only the converted map files are:
`data/map_bg/E*.bpl`, `E*c.bpc`, `E*m.bma` (+ GMLZ copies in `data/map_bg_lz/`).

| Map id | File stem | EoS level | Tiles |
|---|---|---|---|
| `MAP_SKY_STORM_SEA` | `EV0101A` | `v01p01a` | 613 (VRAM) |
| `MAP_SKY_BEACH_DAY` | `ED0111A` | `d01p11a` | 1651 (streamed) |
| `MAP_SKY_GUILD_DUSK` | `EG0101B` | `g01p01b` | 952 (VRAM) |
| `MAP_SKY_KRABBY_BUBBLES` | `EV0104B` | `v01p04b` | 1067 (streamed) |
| `MAP_SKY_KRABBY_SUNSET` | `EV0105B` | `v01p05b` | 1080 (streamed) |
| `MAP_SKY_BEACH_DUSK` | `ED0111B` | `d01p11b` | 1767 (streamed) |
| `MAP_SKY_BEACH_CAVE_PIT` | `ED0141A` | `d01p41a` | 1503 (streamed) |

Converter: [`tools/convert_eos_ground_map.py`](../../tools/convert_eos_ground_map.py)

```bash
tools/convert_eos_ground_map.py EOS.nds d01p11b ED0111B --render check.png
```

- Lossless: EoS and RT share 4bpp tiles, 3×3-tile chunks and 16-colour
  palettes, so tiles, palettes and chunk layouts are copied, not re-quantized.
  `--render` draws the written RT files back to a PNG; for all seven maps it is
  pixel-identical to skytemple's render of the EoS original.
- Both EoS layers become the RT dual-layer map (EoS upper layer → RT layer 0,
  in front of sprites). Frame 0 of BPA tile animations is baked in; palette
  and tile animations are dropped.
- Maps over the VRAM tile budget (1024 dual-layer, 896 single-layer) are
  streamed by `src/ground_bg_tile_stream.c`, which has no tile-flip bits, so
  the converter bakes flipped tiles for those.
- Collision comes from the EoS BMA.
- New BPCs stay uncompressed in ROM (streamed like the café's);
  `compress_ground_assets.py` skips `E*.bpc`.

Map registration: `include/constants/ground_map.h`, `include/map_files_table.h`,
`src/map_files_table.c`, `src/ground_map_conversion_table.c`,
`src/map_script_table.c`, `src/ground_files_table.c` (sorted by name; the
block is inserted under `#ifdef SKY_STORY` and later indices shift by
`SKY_GROUND_FILES`), `src/ground_map_files_sky.c`.

`SELECT_MAP` also selects the script file of the map in `gMapScriptTable`, so
each EoS map points at the station file whose groups use it (gs178 for the
beach, guild and storm scenes, gs179 for Beach Cave Pit).

---

## Beach Cave and the boss

Tiny Woods plays Beach Cave ([`src/sky_story.c`](../../src/sky_story.c)):

- Name "Beach Cave", floors shown as B1F–B4F (`IsStairDirectionUp`).
- EoS Beach Cave tileset (EoS tileset 1, see [Dungeon tilesets](#dungeon-tilesets)).
- Wild Pokémon from EoS's `mappa_s.bin`: Shellder L1, Kabuto L1, Corsola L2,
  Shellos L2 (25% each), Kecleon L48 for shops.
- On the story run (`SCENARIO_MAIN` major 2) B5F is **Beach Cave Pit**: EoS
  fixed floor 1 (14×15) in Red's `fixedmap` encoding, patched over the Team
  Meanies room number while in Beach Cave, with Zubat L4 and Koffing L7 and
  EoS's Pit background as the floor's tileset. Its cutscene is
  `CUTSCENE_BEACH_CAVE_PIT`
  ([`src/dungeon_cutscene_beach_cave.c`](../../src/dungeon_cutscene_beach_cave.c)):
  m01a0401 (first visit) or m01a0501 (re-fight) dialogue, the camera shows the
  thieves, boss music, and the dungeon ends once both are down. No cutscene
  flags are touched, so Sinister Woods is unaffected.
- Later visits to Beach Cave have no Pit.
- Bosses grant no EXP, as in EoS: `gSkyBossExp` (src/sky_story.c, default
  FALSE) gates EXP from Pokémon with `bossFlag` (the Pit's Zubat and Koffing
  set it); the debug menu's "Boss EXP" toggles it at runtime.
- Gen 4 Pokémon have no lines in Red's per-species talk files (level-up and
  team chat); they use a Red Pokémon's (`SkyStory_TalkSpecies`: Turtwig →
  Bulbasaur, Chimchar → Charmander, Piplup → Squirtle, Riolu → Machop, else
  Pikachu). Reading a missing talk file showed garbage and could crash.
- Zubat and Koffing use EoS's fixed-floor boss stats (overlay 10's monster
  spawn stats, entries 1 and 2): Zubat L3, 15 HP, 15 Atk / Sp. Atk, 11 Def /
  Sp. Def; Koffing L6, 27 HP, 20 / 20, 8 / 8
  (`SkyStory_ApplyFixedRoomBossStats`).
- The Pit's background keeps EoS's animated water colours (palettes 10-11,
  `dungeon_bg0.dpla`); the cutscene camera is centred on the sand.
- Red's species (all 419 that EoS also has, except Munchlax) use EoS's base
  stats, EXP yield and level-up growth (`gSkyRedLevelData`, generated by
  [`tools/make_sky_gen4_data.py`](../../tools/make_sky_gen4_data.py)), so the
  Beach Cave Pokémon have EoS's stats at EoS's levels (Corsola L2: 11 base HP,
  not Red's 45).
- The sky build mixes 8 DirectSound channels instead of 12 (`src/m4a.c`),
  which cuts the frames the dungeon falls behind in Beach Cave by about a third.

---

## Music

The sky build plays no Red music: every Red song id (0–128) points at an
EoS track instead ([`tools/eos_music/sky_red_bgm_map.py`](../../tools/eos_music/sky_red_bgm_map.py)
→ `sound/sky_red_bgm_table.inc`). EoS has no versions of Red's songs, so the
mapping is by name where EoS has the same piece (Rising Fear, Kecleon's
Shop, Monster House!, Heartwarming, In the Depths of the Pit, Boss Battle!)
and otherwise by place and mood (Pokémon Square → Treasure Town, team base →
Wigglytuff's Guild, Makuhita Dojo → Marowak Dojo, Tiny Woods → Apple Woods,
Magma Cavern → Steam Cave, ...). Red's music sequences, its music
voicegroups (`bank_000`–`bank_024`, the drum kits) and the 75 samples only
they use are left out of the sky build (about 780 KB). Most sound effects are
EoS's too ([Sound effects](#sound-effects)); the ones that stay Red's keep
Red's instruments (`bank_025`–`bank_028`).

EoS's sequences on EoS's own instruments
([`tools/eos_music/convert_eos_bgm.py`](../../tools/eos_music/convert_eos_bgm.py)):
SMDL → MIDI (`sound/songs/midi/sky_*.mid`) → `mid2agb` →
`sound/songs/seq_061.s`–`seq_068.s` (song ids 61–68, `MUS_SKY_*` in
`include/sky_story.h`).

Instruments come from EoS's DSE sound banks
([`swdl.py`](../../tools/eos_music/swdl.py) parses them,
[`sky_soundfont.py`](../../tools/eos_music/sky_soundfont.py) converts them):

- **Samples**: the 204 samples of `SOUND/BGM/bgm.swd` the songs use, decoded
  (IMA-ADPCM / PCM), resampled to at most 18157 Hz (the mixer rate),
  normalised to full 8-bit scale, in
  `sound/direct_sound_samples/sky/eos_NNN.bin`. Loop points are kept: the
  loop length is rounded to whole samples and the playback rate adjusted to
  match.
- **WaveData**: `sound/songs/sky_samples.s`, one per sample and tuning (349,
  1.91 MB). DSE plays a note at `32728 * 2^((note - root + ctune + ftune/256)/12)`
  Hz. That pitch is baked into the WaveData `freq`, because m4a ignores a
  DirectSound voice's base key.
- **Voicegroups**: every song has its own voicegroup (`sky_vg_bgmNNNN`, at the
  top of the song's `.s`) built from its `bgmNNNN.swd`. The MIDI program is
  the EoS program id. A program with one split is a DirectSound voice. One
  with several splits is a KeySplit voice. A drum kit with per-key pan is a
  DrumTable voice. Each DSE envelope (attack, hold, decay, sustain, decay2,
  release) is approximated by m4a ADSR bytes.
- **Volumes**: split, program and sample volume, and the normalisation gain,
  scale note velocities. EoS volume × expression becomes MIDI volume, and pitch
  bends are kept. Each song's master volume comes from an offline model of the
  m4a mixer ([`m4a_render.py`](../../tools/eos_music/m4a_render.py)) so the
  8-bit mix, which wraps instead of clipping, keeps headroom.
- **Loops**: DSE loops each track by itself (its 0x99 loop point to its end).
  In music every track loops together, so a song has one loop, as mid2agb
  writes it. EoS's ambient songs (bgm0100–0118, 0179–0193) layer short loops
  of different lengths instead. In bgm0101 "Storm" the wind noise (sample
  903) loops every 85, 145 and 150 ticks, and the low rumble loops every 3420.
  With one loop for the whole song, the wind played once for 1–3 s and was
  then silent until the 36 s loop came round, so the storm voices had no wind.
  When a track's loop is under half the longest track's loop
  (`per_track_loops`), the converter runs mid2agb once per track, giving each
  track its own `GOTO`, and splices the tracks into one song. The MIDI files
  are then `midi/<name>_trackN.mid`. Of the converted songs, only `seq_069`
  does this. Some music songs have one track whose end is 256 ticks
  later than the others' (a trailing rest). They keep the shared loop.
- **Engine**: in the sky build the mixer uses 12 DirectSound channels instead
  of Red's 5, and the BGM player has 16 tracks instead of 12 (`src/m4a.c`,
  `sound/music_player_table.inc`). The vanilla build is unchanged.

Not ported: LFOs (vibrato), key groups, and layered splits (the first split
wins).

| Id | EoS | Used for |
|---|---|---|
| 61 | bgm0069 On the Beach at Dusk | Krabby, beach scenes |
| 62 | bgm0021 Beach Cave | Beach Cave floors |
| 63 | bgm0015 Boss Battle! | Zubat & Koffing |
| 64 | bgm0014 In the Depths of the Pit | Beach Cave Pit |
| 65 | bgm0130 title theme | Title screen |
| 66 | bgm0002 Top Menu Theme | Main menu |
| 67 | bgm0001 Exploration team theme | (available) |
| 68 | bgm0006 Welcome to the World of Pokémon! | Personality quiz |
| 69 | bgm0101 Storm | The storm at sea (m01a0101/0102) |

`seq_069` is past Red's music ids, so non-sky builds leave its object out of
the link (Makefile `SONG_SRCS`): an extra object reorders the linker's
long-call stubs and would change the vanilla ROM.

### Jingles

Red's fanfares (song ids 200–219, played on the fanfare player by
`PlayFanfareSE` / `PlaySound` / `FANFARE_PLAY`) play EoS's own jingles in the
sky build. EoS keeps them in `SOUND/ME/me0000.smd`–`me0013.smd` with one bank,
`SOUND/ME/me.swd`, that holds both the programs and the samples.
`convert_eos_bgm.py` converts them with the same pipeline as the BGM
(`--me-only` converts only these): `sound/songs/sky_me_NNNN.s` (voicegroup
`sky_vg_meNNNN`), samples in `sound/songs/sky_me_samples.s` (labels
`sky_me_wav_*`, files `sound/direct_sound_samples/sky/me_NNN.bin`; 10 samples,
34 KB). `me0000` is not converted: it is note for note `me0006` and EoS only
plays it from a debug "ME test" menu (`T00P01/m01a0116.ssb`).

`sound/song_table.inc` points ids 200–219 at them under `SKY_STORY`, with
Red's player fields (`1, 1`); Red's `seq_200`–`seq_219` are not assembled in
the sky build. EoS jingles use up to 10 tracks, so the sky build's fanfare
player has 10 tracks instead of 6, in IWRAM (EWRAM is full).

How each id was matched. Red's use comes from its callers in `src/` and the
ground scripts. EoS's use comes from the EoS scripts (`me_Play(n)` in the
`.ssb` files, decompiled with SkyTemple) and from the callers of EoS's
`PlayMeById` (NA `0x0201820C`, veneer `0x02017C50`) in arm9 and the overlays.
"Melody" is how many note onsets (pitch class on a 16th-note grid, best
transposition) Red's and EoS's jingles share, which shows the remakes: most EoS
jingles are Red's, re-orchestrated.

| Id | Red use | EoS ME | EoS use (evidence) |
|---|---|---|---|
| 200 | dungeon level up (`sub_8083D58`) | me0001 | level up in ground mode (ov11 `PlayMeById(1)` then "became level N!"); also big rewards: `[me_play:1]` in "accepted the rare and precious item", Egg hatched, scripts' "team was rewarded" |
| 201 | rescue rank up (`mission_reward.c`, b01p02a "rescue rank went up!") | me0002 | the rank-up step of the reward screen (arm9, played after "Team … went up in rank"); melody closest to Red's 201 |
| 202 | Pokémon farewell (`party_list_menu.c`) | me0003 | "… was released from the team." (ov11 ×3, Chimecho Assembly, Day Care) |
| 203 | reward / item received (`GET_ITEM_FUNC`, shops, mission rewards) | me0004 | item received (66 script uses: "received …", reward points; Recycle Shop; dungeon). Melody 0.53 (same tempo, length) |
| 204 | joined the team (`JOIN_FUNC`, dungeon recruit, Celebi, "became leader") | me0005 | "… joined the team!" (52 of 57 script uses; Chimecho, Day Care). Melody 0.84 |
| 205 | new dungeon open ("Uproar Forest is now open") | me0006 | "You can now go to …" (42 of 45 script uses) |
| 206 | friend area obtained | me0006 | same as 205; me0006 is Red's 206 remade (melody 0.61) |
| 207 | reached the destination floor, tutorial notice, standby | me0007 | "A message has arrived from the Exploration Team Federation". Melody 0.69 |
| 208 | unused (200 at another volume) | me0001 | as 200 |
| 209 | (empty) | — | — |
| 210 | evolution at Luminous Cave (`luminous_cave.c`) | me0008 | Luminous Spring evolution (ov16 ×2), "Teddiursa evolved into Ursaring!". Melody 0.50 |
| 211 | evolution in a dungeon (`sub_8083D78`) | me0008 | as 210 |
| 212 | important item received (Teleport Gem, Red Wing, 9-Tail Crest) | me0009 | "… obtained …" key items (24 script uses), dungeon "You've completed a mission!". Same tempo (72/73 bpm) |
| 213 | Rescue Team Starter Set from the Mailbox | me0004 | as 203 (Red's 213 is 203 at another volume) |
| 214 | unused | me0010 | no caller in Red: given one of EoS's dungeon-end stings (ov29 `IsFloorOver` plays `{10, 11, 11}[i]` or `{12, 13, 13}[i]`), by length |
| 215 | unused | me0012 | as 214 |
| 216 | unused | me0010 | Red's 216–219 are sparse stings like EoS's me0010–me0013; matched by tempo and length (1.3 s / 2.9 s) |
| 217 | unused | me0011 | 6 notes, 10.8 beats at 160 bpm in both |
| 218 | unused | me0012 | 150 bpm, ~2 s in both |
| 219 | unused | me0013 | 3 notes at 240 bpm in both |

### Sound effects

397 of Red's 489 sound effects (song ids 300–938) play EoS's own sound
effect in the sky build, on EoS's own instruments; the other 92 keep Red's.
Red ids 461, 467 and 488 (unused by the sky scripts and code) carry the storm
intro's thunder and warp SEs.

EoS keeps its SEs in DSE "sedl" banks: `SOUND/SYSTEM/se_sys.sed` (menus) and
`SOUND/SE/*.sed` (motion, event, state, trap, waza1–15, ...). An SE id is
`bank << 8 | sequence` (`se_Play(0x2308)` = `event_s.sed` sequence 8); each
sequence names itself (`SE_NUM_EVENT_SIGN_SHOCK_01`). Tracks are SMDL tracks
that pick their instrument bank per program change (0xA8 hi lo): hi 0x64 =
`SOUND/SWD/<lo>.swd` (one sample each: footstep, punch, bell, ...), hi 0x7F =
the sedl's own bank, `motion.swd` (`motion.sed` writes 0x7F01: lo is the sedl's
bank number, *not* `SOUND/SWD/001.swd`) or `se_sys.swd`, whose programs are DS
PSG square / noise waves.
[`sedl.py`](../../tools/eos_music/sedl.py) parses them;
[`convert_eos_se.py`](../../tools/eos_music/convert_eos_se.py) writes each SE
used as `sound/songs/sky_se_BBII.s` (m4a assembly straight from the DSE events,
48 ticks per beat, own voicegroup `sky_vg_se_BBII`), the samples to
`sound/songs/sky_se_samples.s` (`sound/direct_sound_samples/sky/se*.bin`,
300 KB) and `sound/sky_red_se_table.inc`, which `sound/song_table.inc`
includes for ids 300–938 under `SKY_STORY` (player fields as in Red).

- PSG programs become the GBA's CGB square / noise voices (the DS duty
  (d+1)/8 → 12.5 / 25 / 50 / 75 %), like Red's own menu sounds.
- Pitch bend and SweepTune (0xD4, a glide from each note's start) become
  BEND with one BENDR per track; volume / pan sweeps become VOL / PAN steps;
  repeats are unrolled; envelope overrides give the track its own voice.
- A looping EoS SE loops only if Red's SE for that id loops.
- The sky build gives every SE player 2 tracks (the EoS SEs used have 1–2),
  in IWRAM (EWRAM −720 bytes, IWRAM +960 bytes).
- Not ported: LFOs (vibrato / tremolo) and fine / coarse tune events.
- Volume: EoS's own levels came out at 0.4–0.8× Red's SE for the same id
  (measured in mGBA, loudest 100 ms RMS, each SE played alone), so the
  converter multiplies them by `SE_GAIN` = 1.6 (`PSG_GAIN` = 1.25 for SEs on
  CGB voices only), into VOL up to 127 and the rest into the velocities, still
  capped at the lone-SE mix level (`TARGET_LEVEL`) where the 8-bit mixer would
  wrap. Most SEs now measure within ±30 % of Red's; a few that already hit
  VOL / velocity 127 stay quieter (608 "middle damage": ~0.5× Red's).
- Channels: every SE song has Red's SE priority (80–127), above the EoS
  songs' 50, so an SE note takes a mixer channel from the BGM even when the
  BGM holds all 8 (m4a steals the lowest-priority channel). Checked in Beach
  Cave: every SE started in a 15000-frame run got a DirectSound or CGB channel.

Motion SEs (`motion.sed`: the basic attack, hits, attack motions) used the
wrong bank until the 0x7F01 fix above: programs missing from `001.swd` became
silent voices (the hit SEs played when a move or attack connects, e.g. 608 /
609 `SE_NUM_EFF_MIDDLE_DAMAGE` / `_LARGE_DAMAGE`, and 607, 610, 621 were
silent), and the rest played `001.swd`'s PSG noise program instead (the basic
attack 351, `SE_NUM_MOTION_ANIM_2`, sounded like crunchy low noise). With `motion.swd` the basic attack is a 50 % square wave
with exactly Red's notes for 351.

Each pair and its evidence is listed in
[`sky_red_se_map.py`](../../tools/eos_music/sky_red_se_map.py):

- **Effect animations (336 ids).** Red's effect animation table
  (`gUnknown_80B9CC4`, `src/effect_data.c`) and EoS's (overlay 10
  `EFFECT_ANIMATION_INFO`) are the same table: 426 of 448 rows are identical
  (the rest differ only in the animation type number). Each row names its SE,
  so Red's SE of row *n* becomes EoS's SE of row *n*. This covers the move,
  item and status effects.
- **Move animations (13 ids).** The move and per-species move animation tables
  (`gUnknown_80BDBC4` / `gUnknown_80C183C` vs `MOVE_ANIMATION_INFO` /
  `SPECIAL_MONSTER_MOVE_ANIMATION_INFO`), matched by move and species name.
- **Code and scripts (43 ids).** Menus: EoS's `PlaySeVolumeWrapper` table
  (arm9 `0x0209915C`: 3F02 3F03 3F03 3F01 3F04 3F06 3F07 3F0B) has the layout
  of Red's `sMenuSoundEffects`; EoS's text blip (0x3F05) has Red's 3-frame
  counter. Dungeon actions: the EoS functions that play SEs with a constant
  id (found by scanning arm9 / the overlays for calls to `PlaySeByIdVolume`
  and its wrappers) against Red's functions (stairs, item / money pick-up,
  throws, misses, hunger, traps, orbs, revive, learning a move). Emotes: Red's
  `FANFARE_PLAY2(n)` + `CALL_SCRIPT(<emote>_FUNC)` against EoS's
  `se_Play(n)` + `SetEffect(EFFECT_<emote>)` over all EoS scripts.
- **Same notes (2 ids).** Many of Red's SEs are EoS's (same keys, ticks and
  lengths); two were matched only that way (door, trap mine).

| Red id | Red use | EoS SE |
|---|---|---|
| 301–307 | menu cursor, accept, back, info, text blip, sort, toggle | `SE_NUM_SYS_01`–`07` |
| 312 | learned a move | `SE_NUM_SYS_WAZA` |
| 330 / 332 | item / money picked up | `SE_NUM_MOTION_ITEM` / `_MONEY` |
| 336–338 | thrown item | `SE_NUM_MOTION_THROW`, `_02`, `_03` |
| 339 | belly empty | `SE_NUM_MOTION_HUNGRY` |
| 340 / 341 | stairs up / down | `SE_NUM_MOTION_STAIRS_UP` / `_DOWN` |
| 342 / 343 | move missed (leader / other) | `SE_NUM_MOTION_MISS_PLAYER` / `_ENEMY` |
| 351–370 | attack motions | `SE_NUM_MOTION_ANIM_*` |
| 400–404 | trip, sticky, pitfall, summon traps | `SE_NUM_TRAP_*` |
| 463 / 482 / 473 | shock emote | `SE_NUM_EVENT_SIGN_SHOCK_01` / `_02` / `_03` |
| 465 / 466 / 464 | notice emote | `SE_NUM_EVENT_SIGN_NOTICE_01` / `_04` / `_02` |
| 469 | question emote | `SE_NUM_EVENT_SIGN_HATENA_02` |
| 470 | sweat emote | `SE_NUM_EVENT_SIGN_TENSION_01` |
| 455 / 458 | jump | `SE_NUM_EVENT_MOTION_JUNP_01` / `_02` |
| 457 / 471 / 472 | anger | `SE_NUM_EVENT_SIGN_ANGER_02` / `_01` / `_02` |
| 600–938 | move / item / status effects | by effect animation row |

Red's SE stays for: 308–311, 313, 331, 335, 345, 347, 360, 364, 371, 390–392,
401, 405–409, 411–414, 416, 421, 422, 424–426 (some dungeon and status sounds
with no EoS equivalent found: curse, confusion, sleep, whiffer, charging, ...),
450–517 except the emotes above (Red's own ground-scene sounds: footsteps,
doors, crowd, cries of the legendaries, ...; the chapter 1 scenes use only the
emotes), 727, 804, 916, 917 (effect rows whose EoS SE is none) and 633–635,
637, 894, 923 (no caller found). The chapter 1 scenes' SEs (463, 466, 469, 470, 482) are all EoS's.

---

## Dungeon tilesets

[`tools/convert_eos_dungeon_tileset.py`](../../tools/convert_eos_dungeon_tileset.py)
converts an EoS dungeon tileset (`DUNGEON/dungeon.bin`: dpci tiles, dpc chunks,
dma autotile table, dpl palettes, dpla animated colours) into Red's
fon/cel/cex/pal/canm data as C arrays; both engines share the layout. A fixed
floor background (`dungeon_bgN`) becomes Red's pre-drawn "emap" tileset
(24×24 chunks over ≤249 deduplicated chunks). Output:
`src/data/sky_beach_cave_tileset.h`, `src/data/sky_beach_cave_pit_tileset.h`,
loaded by [`src/sky_dungeon_tileset.c`](../../src/sky_dungeon_tileset.c).

---

## Title screens

[`tools/make_sky_title_screens.py`](../../tools/make_sky_title_screens.py)
writes `graphics/custom/sky_title/`:

- The Nintendo logo and ESRB notice (`BACK/n_logo.bgp`, `BACK/w_esrb.bgp`).
- The title card: EoS's English logo from ground level **S13P01B**
  (`MAP_BG/s13p01a.bma`/`.bpc` with the `s13p01b.bpl` palette, the end of the
  logo fade-in that opens EoS): the orange glow and the "Pokémon Mystery
  Dungeon" logo, scaled to 7/8 to fit 240 px (the DS top screen, the one
  with the logo). Under it goes EoS's green "EXPLORERS OF SKY" emblem, which
  EoS draws as OBJ sprites over the demo loop on the bottom screen:
  `graphics/custom/sky_title/emblem_src.png` is that sprite layer captured
  from the running game (DeSmuME, main-engine OBJ layer only; pure black is
  kept where the full frame is black too, so the outlines survive). The logo,
  emblem and "Press START" get their own share of the 8bpp palette. "Press START"
  blinks; the EoS title theme plays.
- The main-menu backgrounds: the ten CGs EoS shows on the DS top screen
  during its top menu (`BACK/s09p01a`–`s09p10a.bgp`), scaled to 240×180 and
  cropped to the middle 160 lines; one is picked at random each time
  (`CUSTOM_TITLE_BG_COUNT` 10 in the sky build).

`DEMO_02`/`DEMO_03`/`DEMO_04` (`src/data/ground/ground_event_data.h`) call
`SKY_CUTAWAY_BOOT_SCREENS` / `SKY_CUTAWAY_TITLE_SCREEN` instead of Red's
intro movie and logo map.

The menu windows use EoS's green top-menu frames whatever the window-colour
option (`SetUiStyleFrameColorOverride`, [`src/ui_style.c`](../../src/ui_style.c),
set while the main menu is open) and, like EoS, are sized to their longest entry.

The top menu follows EoS ([`src/main_menu2.c`](../../src/main_menu2.c),
`#ifdef SKY_STORY`): **New Game / Other** without a save, **Continue**
(Revive Team, Awaiting Rescue) **/ Other** with one (no Friend Rescue or
Wonder Mail S in the demo: rescues run on Red's later-story maps, which are
not in the sky build). **Other** opens a second window: Adventure Log, Achievements (if
on), Trade Items, Delete Save Data, Sky Jukebox, Exit. The descriptions are EoS's, with the
DS-only parts (wireless, Nintendo WFC) replaced by the GBA's link cable and
passwords.

![EoS title card and top menu](images/sky_title_menu.png)

### Sky Jukebox

[`src/sky_jukebox.c`](../../src/sky_jukebox.c) lists EoS's 141 Sky Jukebox
tracks in EoS's order with EoS's names (A play, SELECT/START stop, Left/Right
page, B back to the top menu theme). The track → song table comes from EoS's
overlay 9 (the jukebox) and the names from the "Music Tracks" strings;
`tools/eos_music/convert_eos_bgm.py` converts every track. The eight the story
uses keep song ids 61–68; the other 133 are `sound/songs/sky_bgm_NNNN.s`,
appended after Red's song table (`sound/sky_jukebox_songs.inc`, song ids
940–1072), and `IsBGSong` accepts that range (≈1.4 MB with their voicegroups; the shared EoS samples are another 1.9 MB).

![Sky Jukebox](images/sky_jukebox.png)

---

## Gen 4 Pokémon and moves

All Gen 4 species in EoS (105 new ids, 424–528: dex 387–492 without Munchlax,
which keeps Red's id 420 but gets EoS's data; EoS has no Arceus) and the Gen 4
moves, from [`tools/make_sky_gen4_data.py`](../../tools/make_sky_gen4_data.py)
(`include/constants/sky_gen4.h`, `src/data/sky_gen4_data.c`):

- **Species data** from `BALANCE/monster.md` (types, abilities mapped by name
  onto Red's + Custom Abilities, stats, movement type, body size, recruit
  rate, evolutions) and level-up tables from `m_level.bin`. Evolutions that
  need Gen 4 items or move/gender conditions evolve at level 40 instead.
  EoS has no friend areas: each Gen 4 evolution line joins its Red family's
  area or the area where Red puts most Pokémon of its type, at most 16 species
  per area (the Wigglytuff list size). Alphabetical order is recomputed over
  all species.
- **Moves**: EoS move ids 0x000–0x1AD are Red's, so Gen 4 moves keep their EoS
  ids 0x1AE–0x21E with EoS's power, type, category, range, accuracy and PP;
  names and descriptions from EoS's text. Red has no handlers or animations for
  them, so each borrows a Red move's effect handler and animation
  ([`src/sky_gen4_moves.c`](../../src/sky_gen4_moves.c)), e.g. Dark Pulse →
  Headbutt's flinch, Close Combat → Superpower's stat drop, Flare Blitz →
  Double-Edge's recoil, Draco Meteor → Overheat's Sp. Atk drop.
- **Learnsets**: every species (Red's too) uses its EoS level-up and TM/HM
  learnset, so old species can learn Gen 4 moves.
- **Portraits**: EoS's `FONT/kaomado.kao` faces, each of Red's 13 emotions EoS
  has ([`tools/make_sky_gen4_portraits.py`](../../tools/make_sky_gen4_portraits.py)
  → `graphics/portraits/<species>/`, built by `convert_custom_portraits.py`
  into the custom portrait archive under `SKY_STORY`).
- **Sprites**: EoS's WAN sprites converted to Red's AX format by
  [`tools/convert_eos_wan_to_ax.py`](../../tools/convert_eos_wan_to_ax.py)
  (`batch EOS.nds 387-445 447-492 --names <dex name file>`). AX is WAN's GBA
  ancestor, so frames, OAM pieces, offsets, shadows and the 8 directions map
  one to one; Red's 13 animation groups are EoS's first 13 (walk, attack,
  kick, shoot, strike, sleep, hurt, idle, swing, double, hop, charge, rotate),
  taken from `monster.bin` / `m_attack.bin`. Each sprite uses the closest of
  Red's 13 shared overworld palettes (written into the header comment and read
  back as the species' `overworldPalette`). Frames over Red's VRAM budget (16
  tiles per body-size unit) drop their outermost effect pieces. Output:
  `graphics/ax/mon/<species>/`, `src/data/ax/<species>.h`,
  [`src/monster_gfx_sky.c`](../../src/monster_gfx_sky.c), registered as
  `ax424`–`ax528` in `src/monster_files_table.c` (≈2.5 MB).
  Red's cutscene animation groups 13+ (lying, getting up, ...) don't exist in
  the converted sprites; `AxResInit` falls back to Sleep for lying (13) and
  Idle for the rest.

![Turtwig and Piplup on the beach, the Relic Fragment in Beach Cave Pit, Shellos using Mud Bomb, the fragment after the theft](images/sky_demake_gen4.png)

The sky build reads species, moves, learnsets and level data from these tables
(`LoadMonsterParameters`, `LoadWazaParameters`, `GetLvlUpEntry`); Red's
entries in them match the retail data except the alphabetical order.

### Save format (sky build)

Old saves need a new game. Following the save-layout checklist
(`tools/check_save_layout.py` checks the sky widths):

- Species and move ids take 10 bits (`SPECIES_SAVE_BITS`, `MOVE_ID_SAVE_BITS`);
  `RECRUITED_POKEMON_SAVE_SIZE` 0x4B40.
- Per-species and per-move flag arrays grow to 17 words
  (`MONSTER_FLAGS_U32STORAGE`, `MOVE_FLAGS_U32STORAGE`), so the adventure chunk
  is 0x140 (`ADVENTURE_SAVE_SIZE`) and `unk448` 0x5A80 (`SAVE_CHUNKS_SIZE`).
- Dungeon spawn entries carry species bits 9+ (`SpawnPokemonData.speciesHi`);
  `mapparam` is read through the 9-bit `FileSpawnPokemonData`.
- Wonder Mail keeps 9-bit species, because its bits are also the rescue
  password format; mail jobs only use species below 512.

---

## Testing

Two test-only Makefile hooks (normal builds are unaffected):

```bash
make DEBUG_BOOT_EVENT=EVENT_DIVIDE DEBUG_BOOT_FLOOR=5
```

- `DEBUG_BOOT_EVENT=<script>`: New Game skips the quiz, creates the default
  team (Charmander / Squirtle) at story scenario (2,0) and runs that event
  script; `EVENT_DIVIDE` starts chapter 1 the normal way. Naming screens are
  skipped (`RENAME_ALLY` keeps the default name).
- `DEBUG_BOOT_FLOOR=<n>`: every dungeon run starts on floor n (5 = Beach Cave
  Pit).

Then drive it with `mgba_shot` (A every 60 frames reaches the dungeon at about
frame 15000):

```bash
P="--press 600:START --press 900:A --press 1200:A --press 1500:A --press 1800:A"
for f in $(seq 2100 60 30000); do P="$P --press $f:A"; done
build/tools/mgba_shot pmd_red.gba build/shots/sky --frames 30000 --every 250 $P
make -j$(nproc)   # plain build again afterwards
```

Winning the boss fight by mashing A needs a strong team; for that test set
`max_level_stats = TRUE` in `configs/runtime.c` temporarily.

---

## Code Locations

| Piece | Path |
|-------|------|
| Story pack select, test hooks | [`Makefile`](../../Makefile) (`STORY`, `DEBUG_BOOT_EVENT`, `DEBUG_BOOT_FLOOR`) |
| Opening scenes (gs178 groups 1–8) | [`src/data/ground/sky/sky_d01p01_scenes.h`](../../src/data/ground/sky/sky_d01p01_scenes.h) |
| Beach Cave Pit aftermath (gs179 group 1) | [`src/data/ground/sky/ground_data_d01p02_station.h`](../../src/data/ground/sky/ground_data_d01p02_station.h) |
| Scene order, boot/title demos | [`src/data/ground/ground_event_data.h`](../../src/data/ground/ground_event_data.h) |
| Ground actors, Relic Fragment object | [`src/ground_lives.c`](../../src/ground_lives.c), [`src/ground_sprite_data.c`](../../src/ground_sprite_data.c), [`src/ornament_files_table.c`](../../src/ornament_files_table.c), [`include/sky_story.h`](../../include/sky_story.h) |
| Cutaways, boot and title screens | [`src/sky_cutaways.c`](../../src/sky_cutaways.c), [`src/sky_cutaways_data.c`](../../src/sky_cutaways_data.c), [`src/sky_title_data.c`](../../src/sky_title_data.c), [`src/custom_title_backgrounds.c`](../../src/custom_title_backgrounds.c) |
| Chapter cards | [`src/chapter_titles.c`](../../src/chapter_titles.c), [`src/chapter_cards_data.c`](../../src/chapter_cards_data.c) |
| Beach Cave overrides | [`src/sky_story.c`](../../src/sky_story.c), [`src/dungeon_floor_spawns.c`](../../src/dungeon_floor_spawns.c), [`src/dungeon_generation.c`](../../src/dungeon_generation.c), [`src/dungeon_generation_fixed.c`](../../src/dungeon_generation_fixed.c), [`src/dungeon_info.c`](../../src/dungeon_info.c) |
| Dungeon tilesets | [`src/sky_dungeon_tileset.c`](../../src/sky_dungeon_tileset.c), [`src/dungeon_map_access.c`](../../src/dungeon_map_access.c) |
| Boss cutscene | [`src/dungeon_cutscene_beach_cave.c`](../../src/dungeon_cutscene_beach_cave.c), [`src/dungeon_cutscene.c`](../../src/dungeon_cutscene.c) |
| Gen 4 data / moves / sprites | [`src/data/sky_gen4_data.c`](../../src/data/sky_gen4_data.c), [`src/sky_gen4_moves.c`](../../src/sky_gen4_moves.c), [`src/monster_gfx_sky.c`](../../src/monster_gfx_sky.c), [`src/sprite.c`](../../src/sprite.c) (animation fallback) |
| Dialogue box layout | [`src/string_format.c`](../../src/string_format.c), [`src/text_2.c`](../../src/text_2.c) |
| Converters (need an EoS ROM) | `tools/convert_eos_ground_map.py`, `tools/make_sky_cutaways.py`, `tools/make_sky_cutaway_scrolls.py`, `tools/make_sky_chapter_cards.py`, `tools/make_sky_title_screens.py`, `tools/eos_music/convert_eos_bgm.py`, `tools/eos_music/convert_eos_se.py`, `tools/convert_eos_dungeon_tileset.py`, `tools/make_sky_gen4_data.py`, `tools/make_sky_gen4_portraits.py`, `tools/convert_eos_wan_to_ax.py` |

---

## Limitations

- The EoS logo is scaled to 7/8 to fit the GBA screen. EoS options with no
  Red feature (Sky Jukebox, Trade Team, Rename Team, Send Demo Dungeon,
  Nintendo WFC) are left out of the top menu. The jukebox has no Loop or
  Lock; every track loops as converted.
- Music uses EoS's samples at 8 bits and at most 18157 Hz. LFO vibrato, key
  groups and layered splits are not ported, and envelopes are approximated.
  12 mixer channels cost more CPU than Red's 5.
- Sprites and the Relic Fragment use Red's 13 shared overworld palettes, so
  some colours shift (the fragment's red mark becomes grey; Turtwig loses its
  yellow). Converted sprites lack Red's cutscene animation groups 13+ (they
  fall back to Sleep / Idle).
- Gen 4 moves borrow Red effect handlers; effects Red has no mechanism for
  (Gravity, Trick Room, Heal Block, Embargo, Shadow Force's vanish turn, ...)
  behave like the nearest Red move.
- Gen 4 evolutions needing Gen 4 items or move/gender conditions evolve at
  level 40. Gen 4 Pokémon only appear in the wild in Beach Cave (Shellos); the
  rest of Red's dungeons keep Red's spawn lists.
- Beach Cave Pit's background is folded into Red's 249-chunk limit by
  merging the most alike chunks (pixel distance weighted by use), so the
  picture keeps its shape; a few near-identical rock and sand chunks repeat.
- Old saves need a new game in the sky build.
- Test hooks: `DEBUG_BOOT_STARTER=<id> DEBUG_BOOT_PARTNER=<id>` pick the team
  `DEBUG_BOOT_EVENT` creates.
- To save ROM space, the sky build leaves out Red-only art EoS has no use
  for: every starter shares one team base (Pikachu's; `BASE_KIND` is ignored
  in `GetAdjustedGroundMap`, and the other 15 bases' map files are not linked,
  about 640 KB), and there are no Friend Area pictures (Red's chapter-card
  backgrounds, also shown on entering a Friend Area; about 1.5 MB). The
  vanilla build keeps all of them.
