TOOLCHAIN := $(DEVKITARM)

ifeq ($(CC),)
HOSTCC := gcc
else
HOSTCC := $(CC)
endif

ifeq ($(CXX),)
HOSTCXX := g++
else
HOSTCXX := $(CXX)
endif

# don't use dkP's base_tools anymore
# because the redefinition of $(CC) conflicts
# with when we want to use $(CC) to preprocess files
# thus, manually create the variables for the bin
# files, or use arm-none-eabi binaries on the system
# if dkP is not installed on this system

ifneq (,$(TOOLCHAIN))
ifneq ($(wildcard $(TOOLCHAIN)/bin),)
export PATH := $(TOOLCHAIN)/bin:$(PATH)
endif
endif

# Default build is the packed hack ROM (modern toolchain + linker).
# Use MODERN=0 for the retail-pinned agbcc matching layout.
MODERN      ?= 1
ifeq (modern,$(MAKECMDGOALS))
  MODERN := 1
endif

# Test hook: make DEBUG_BOOT_MAP=MAP_SPINDA_CAFE → New Game boots into that map (post-game story, default team). Leave empty for normal builds.
DEBUG_BOOT_MAP ?=
# Test hook: make DEBUG_BOOT_EVENT=EVENT_DIVIDE → New Game skips the quiz,
# creates the default team at story scenario (2,0) and runs that event script
# (EVENT_DIVIDE then starts chapter 1 the normal way).
DEBUG_BOOT_EVENT ?=
# Test hook: make DEBUG_BOOT_FLOOR=3 → every dungeon run starts on that floor.
DEBUG_BOOT_FLOOR ?=
# Test hook: make DEBUG_BOOT_SEED=12345 → every dungeon floor is generated from that seed (same layout every run).
DEBUG_BOOT_SEED ?=
# Test hook: make DEBUG_BOOT_EVENT=... DEBUG_BOOT_LEVEL=8 → the team DEBUG_BOOT_EVENT creates starts at that level.
DEBUG_BOOT_LEVEL ?=

PREFIX := arm-none-eabi-
OBJCOPY := $(PREFIX)objcopy
OBJDUMP := $(PREFIX)objdump
AS := $(PREFIX)as
CC := $(PREFIX)gcc
AS := $(PREFIX)as
LD := $(PREFIX)ld

# use arm-none-eabi-cpp for macOS
# as macOS's default compiler is clang
# and clang's preprocessor will warn on \u
# when preprocessing asm files, expecting a unicode literal
# we can't unconditionally use arm-none-eabi-cpp
# as installations which install binutils-arm-none-eabi
# don't come with it
ifneq ($(MODERN),1)
  ifeq ($(shell uname -s),Darwin)
    CPP := $(PREFIX)cpp
  else
    CPP := $(CC) -E
  endif
else
  CPP := $(PREFIX)cpp
endif

ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE :=
endif


TITLE       := POKE DUNGEON
GAME_CODE   := B24E
MAKER_CODE  := 01
REVISION    := 0


#### Tools ####

SHELL     := /bin/bash -o pipefail
SHA1SUM   := sha1sum -c
GBAGFX    := tools/gbagfx/gbagfx
GBAFIX    := tools/gbafix/gbafix
AIF2PCM   := tools/aif2pcm/aif2pcm
MID2AGB   := tools/mid2agb/mid2agb
PREPROC   := tools/preproc/preproc
SCANINC   := tools/scaninc/scaninc
RAMSCRGEN := tools/ramscrgen/ramscrgen
DUNGEONJSON := tools/dungeonjson/dungeonjson

PERL := perl

# Only real tool packages (dirs with a Makefile). Skips e.g. tools/__pycache__/.
TOOLDIRS := $(foreach d,$(filter-out tools/agbcc/ tools/binutils/,$(wildcard tools/*/)),$(if $(wildcard $(d)Makefile),$(d)))
TOOLBASE = $(TOOLDIRS:tools/%/=%)
TOOLS = $(foreach tool,$(TOOLBASE),tools/$(tool)/$(tool)$(EXE))


ASFLAGS         := -mcpu=arm7tdmi --defsym MODERN=$(MODERN)

ifeq ($(MODERN),0)
  CC1       := tools/agbcc/bin/agbcc
  override CC1FLAGS += -mthumb-interwork -Wimplicit -Wparentheses -Wunused -Werror -O2 -fhex-asm -g
  ifeq ($(OS),Windows_NT)
    LIB := ../../tools/agbcc/lib/libc.a ../../tools/agbcc/lib/libgcc.a ../../libagbsyscall/libagbsyscall.a
  else
    LIB := -L ../../tools/agbcc/lib -lc -lgcc -L ../../libagbsyscall -lagbsyscall
  endif
  INCLUDE_PATHS   := -I include -I tools/agbcc/include
  CPPFLAGS        := -iquote include -I tools/agbcc/include -nostdinc -undef -std=gnu89
else
  MODERNCC := $(PREFIX)gcc
  PATH_MODERNCC := PATH="$(PATH)" $(MODERNCC)
  CC1 := $(shell $(PATH_MODERNCC) --print-prog-name=cc1) -quiet
  LIBPATH := -L "$(dir $(shell $(PATH_MODERNCC) -mthumb -print-file-name=libgcc.a))" -L "$(dir $(shell $(PATH_MODERNCC) -mthumb -print-file-name=libnosys.a))" -L "$(dir $(shell $(PATH_MODERNCC) -mthumb -print-file-name=libc.a))"
  LIB := $(LIBPATH) -lc -lnosys -lgcc -L../../libagbsyscall -lagbsyscall
  override CC1FLAGS += -mthumb -mthumb-interwork -mabi=apcs-gnu -mtune=arm7tdmi -march=armv4t -Wimplicit -Wparentheses -Wunused -Werror -O2 -g
  INCLUDE_DIRS := include
  INCLUDE_CPP_ARGS := $(INCLUDE_DIRS:%=-iquote %)
  INCLUDE_PATHS := $(INCLUDE_DIRS:%=-I %)
  CPPFLAGS := $(INCLUDE_CPP_ARGS) -Wno-trigraphs -DMODERN=$(MODERN)
endif

# Ground station scripts: compile only vanilla/ or custom/ pack matching configs/runtime.c
RUNTIME_CONFIG := configs/runtime.c
CUSTOM_STORY_FLAG := $(shell sed -n 's/.*\.custom_story *= *\(TRUE\|FALSE\).*/\1/p' $(RUNTIME_CONFIG) | head -1)
# Explorers of Sky demake (opening chapter): STORY=sky is the default for the
# modern build on this branch. `make STORY=vanilla` restores the Red story.
# The retail-matching build (MODERN=0) always uses vanilla.
ifeq ($(MODERN),0)
  STORY := vanilla
endif
STORY ?= sky
ifeq ($(CUSTOM_STORY_FLAG),TRUE)
  GROUND_STORY_DIR := custom
else ifeq ($(STORY),sky)
  GROUND_STORY_DIR := sky
  CPPFLAGS += -DSKY_STORY=1
else
  GROUND_STORY_DIR := vanilla
endif
GROUND_STORY_PATH := src/data/ground/$(GROUND_STORY_DIR)
CPPFLAGS += -iquote $(GROUND_STORY_PATH)
INCLUDE_PATHS += -I $(GROUND_STORY_PATH)

ifneq ($(DEBUG_BOOT_MAP),)
CPPFLAGS += -DDEBUG_BOOT_MAP=$(DEBUG_BOOT_MAP)
endif
ifneq ($(DEBUG_BOOT_EVENT),)
CPPFLAGS += -DDEBUG_BOOT_EVENT=$(DEBUG_BOOT_EVENT)
ifneq ($(DEBUG_BOOT_STARTER),)
CPPFLAGS += -DDEBUG_BOOT_STARTER=$(DEBUG_BOOT_STARTER) -DDEBUG_BOOT_PARTNER=$(DEBUG_BOOT_PARTNER)
endif
ifneq ($(DEBUG_BOOT_LEVEL),)
CPPFLAGS += -DDEBUG_BOOT_LEVEL=$(DEBUG_BOOT_LEVEL)
endif
endif
ifneq ($(DEBUG_BOOT_FLOOR),)
CPPFLAGS += -DDEBUG_BOOT_FLOOR=$(DEBUG_BOOT_FLOOR)
endif
ifneq ($(DEBUG_BOOT_SEED),)
CPPFLAGS += -DDEBUG_BOOT_SEED=$(DEBUG_BOOT_SEED)
endif

#### Files ####
# Always emit pmd_red.gba. Matching (agbcc) and modern objects stay separated.
BUILD_DIR_NORMAL := build/pmd_red_matching
BUILD_DIR_MODERN := build/pmd_red
ifeq ($(MODERN),0)
  BUILD_DIR := $(BUILD_DIR_NORMAL)
else
  BUILD_DIR := $(BUILD_DIR_MODERN)
endif

# Explorers of Sky demake: the event sources under events/sky/ (scene scripts,
# story CG settings, the opening's timings; documentation/EventEditor.md) are
# compiled by tools/event_editor/ into headers here, in the sky build only.
ifeq ($(GROUND_STORY_DIR),sky)
  SKY_GEN_DIR := $(BUILD_DIR)/gen/sky
  CPPFLAGS += -iquote $(SKY_GEN_DIR) -I $(SKY_GEN_DIR)
  INCLUDE_PATHS += -I $(SKY_GEN_DIR)
endif

ROM := pmd_red.gba
ELF := pmd_red.elf
MAP := pmd_red.map
SYM := pmd_red.sym

C_SUBDIR = src
CONFIG_SUBDIR = configs
ASM_SUBDIR = asm
DATA_SRC_SUBDIR = src/data
DATA_ASM_SUBDIR = data
SONG_SUBDIR = sound/songs
MID_SUBDIR = sound/songs/midi
SAMPLE_SUBDIR = sound/direct_sound_samples

C_BUILDDIR = $(BUILD_DIR)/$(C_SUBDIR)
CONFIG_BUILDDIR = $(BUILD_DIR)/$(CONFIG_SUBDIR)
ASM_BUILDDIR = $(BUILD_DIR)/$(ASM_SUBDIR)
DATA_ASM_BUILDDIR = $(BUILD_DIR)/$(DATA_ASM_SUBDIR)
SONG_BUILDDIR = $(BUILD_DIR)/$(SONG_SUBDIR)
MID_BUILDDIR = $(BUILD_DIR)/$(MID_SUBDIR)

C_SRCS_IN := $(wildcard $(C_SUBDIR)/*.c $(C_SUBDIR)/*/*.c $(C_SUBDIR)/*/*/*.c)
C_SOURCES := $(foreach src,$(C_SRCS_IN),$(if $(findstring .inc.c,$(src)),,$(src)))
# Sky-only C files added after the vanilla ROM was pinned: even an empty object
# moves the vanilla link, so the other builds leave them out.
SKY_ONLY_C_SOURCES := $(C_SUBDIR)/sky_storm.c $(C_SUBDIR)/sky_dungeon_talk.c $(C_SUBDIR)/sky_opening.c $(C_SUBDIR)/sky_boss_wipe.c
ifneq ($(GROUND_STORY_DIR),sky)
  C_SOURCES := $(filter-out $(SKY_ONLY_C_SOURCES),$(C_SOURCES))
endif
# Red-only systems the Sky demo has no way to reach (Wonder Mail and the
# Pelipper post office, Red's friend rescue, Friend Areas, the team-base
# flags): the sky build leaves them out of the link to save ROM space. Their
# callers in kept files are under #ifndef SKY_STORY (see
# documentation/Features/SkyDemake.md, "Red-only systems left out").
NON_SKY_C_SOURCES := $(addprefix $(C_SUBDIR)/, \
	pokemon_mail.c pokemon_mail_pre.c mailbox.c \
	pokemon_news1.c pokemon_news2.c pokemon_news3.c \
	wonder_mail.c wonder_mail_2.c wonder_mail_3_mid.c wonder_mail_4.c \
	wonder_mail_5.c wonder_mail_6.c wonder_mail_802C10C.c \
	wonder_mail_802C4C8.c wonder_mail_802C860.c wonder_mail_802CDD4.c \
	wonder_mail_802D098.c wonder_mail_main_menu.c \
	thank_you_wonder_mail.c thank_you_messages.c mission_reward.c \
	post_office_guide1.c pelipper_board.c code_802DE84.c code_803B344.c \
	code_803C1B4.c code_8031D70.c \
	friend_rescue.c rescue_password_menu.c \
	friend_area_action_menu.c friend_areas_map.c friend_areas_map_util.c \
	friend_area_intros.c friend_area_intros_data.c friend_area_dialogue.c \
	wigglytuff_shop1.c wigglytuff_shop2.c wigglytuff_shop3.c code_8023144.c \
	ornament_gfx1.c ornament_gfx2.c ornament_gfx3.c ornament_gfx4.c)
NON_SKY_ASM_SOURCES := data/data_80E7D40.s
ifeq ($(GROUND_STORY_DIR),sky)
  C_SOURCES := $(filter-out $(NON_SKY_C_SOURCES),$(C_SOURCES))
endif
# Designated-initializer settings blob (modern/hack builds only).
CONFIG_SRCS := $(CONFIG_SUBDIR)/runtime.c
ASM_SOURCES := $(wildcard asm/*.s data/*.s)
C_ASM_SOURCES := $(wildcard src/*.s)
SONG_SRCS := $(wildcard sound/songs/*.s)
# The EoS jingles (sky_me_*), sound effects (sky_se_*) and the songs added after Red's ids
# (seq_069: EoS Storm, seq_070: EoS Ocean1, seq_071: EoS Fire Crackling, seq_072: EoS Eating) are sky-only; leaving their (empty) objects out of the other links keeps
# those builds byte-identical (a new object reorders the linker's long-call stubs).
ifneq ($(GROUND_STORY_DIR),sky)
  SONG_SRCS := $(filter-out sound/songs/sky_me_%.s sound/songs/sky_se_%.s sound/songs/seq_069.s sound/songs/seq_070.s sound/songs/seq_071.s sound/songs/seq_072.s,$(SONG_SRCS))
endif
# The sky build's song table plays EoS SEs for most of Red's SE ids
# (sound/sky_red_se_table.inc); the Red SE sequences it no longer names are
# never played, so they are left out of the sky link (seq_939 is outside the remap).
ifeq ($(GROUND_STORY_DIR),sky)
  SKY_RED_SE_KEPT := $(patsubst %,sound/songs/%.s,$(shell grep -o 'seq_[0-9]*' sound/sky_red_se_table.inc)) sound/songs/seq_939.s
  SONG_SRCS := $(filter-out $(filter-out $(SKY_RED_SE_KEPT),$(wildcard sound/songs/seq_[3-9][0-9][0-9].s)),$(SONG_SRCS))
endif

# Region fragments are .included by asm/ram_map.s — do not assemble alone.
RAM_MAP_FRAGMENTS := \
	asm/ram_map_iwram.s \
	asm/ram_map_ewram.s \
	asm/ram_map_sram.s
ASM_SOURCES := $(filter-out $(RAM_MAP_FRAGMENTS),$(ASM_SOURCES))
ifeq ($(GROUND_STORY_DIR),sky)
  ASM_SOURCES := $(filter-out $(NON_SKY_ASM_SOURCES),$(ASM_SOURCES))
endif

# Dead retail padding blobs with no code references. Kept on disk / in the
# matching linker script so MODERN=0 can still reproduce the baserom layout.
# See SESSION_HISTORY.md to restore them in the default (modern) build.
UNUSED_UNK_ASM := \
	data/unk_96BD7AC.s \
	data/unk_98589A4.s \
	data/unk_9D02950.s \
	data/unk_9E7EB08.s \
	data/unk_9fbd5d0.s
ifeq ($(MODERN),1)
  ASM_SOURCES := $(filter-out $(UNUSED_UNK_ASM),$(ASM_SOURCES))
endif
# asm/ram_map.s defines the free-pool symbols (gAchievementsData and friends).
# The hack sources reference them unconditionally, so both configs need it.

C_OBJECTS := $(patsubst $(C_SUBDIR)/%.c,$(C_BUILDDIR)/%.o,$(C_SOURCES))
CONFIG_OBJECTS := $(patsubst $(CONFIG_SUBDIR)/%.c,$(CONFIG_BUILDDIR)/%.o,$(CONFIG_SRCS))
ASM_OBJECTS  := $(addprefix $(BUILD_DIR)/, $(ASM_SOURCES:%.s=%.o))
C_ASM_OBJECTS := $(addprefix $(BUILD_DIR)/, $(C_ASM_SOURCES:%.s=%.o))
SONG_OBJS := $(addprefix $(BUILD_DIR)/, $(SONG_SRCS:%.s=%.o))

ALL_OBJECTS := $(C_OBJECTS) $(ASM_OBJECTS) $(C_ASM_OBJECTS) $(SONG_OBJS) $(CONFIG_OBJECTS)
OBJS_REL := $(patsubst $(BUILD_DIR)/%,%,$(ALL_OBJECTS))

GROUND_MAP_RAW_ASSETS := $(wildcard data/map_bg/*)
GROUND_MAP_COMPRESSED_ASSETS := $(patsubst data/map_bg/%,data/map_bg_lz/%.lz,$(GROUND_MAP_RAW_ASSETS))
GROUND_MAP_OBJECTS := $(filter $(C_BUILDDIR)/ground_map_files_%.o,$(C_OBJECTS))

# Stamp path for pack flips (rule attached after `all:` so it is not the default goal)
GROUND_STATION_OBJECTS := $(filter $(C_BUILDDIR)/ground_data_%_station.o,$(C_OBJECTS))
GROUND_STORY_STAMP := $(BUILD_DIR)/.ground_story_$(GROUND_STORY_DIR)
# SKY_STORY is tested in C files and shared headers, so every C object
# rebuilds when the story pack flips (rare; a flip is a full C rebuild).
# Songs and asm (song table, sky-only seq_*/sky_bgm_* songs) test SKY_STORY too.
SKY_STORY_OBJECTS := $(C_OBJECTS) $(SONG_OBJS) $(ASM_OBJECTS)
$(if $(wildcard $(GROUND_STORY_STAMP)),,$(shell mkdir -p $(BUILD_DIR) && rm -f $(BUILD_DIR)/.ground_story_* && touch $(GROUND_STORY_STAMP)))
DEBUG_BOOT_STAMP := $(BUILD_DIR)/.debug_boot_$(if $(DEBUG_BOOT_MAP),$(DEBUG_BOOT_MAP),none)_$(if $(DEBUG_BOOT_EVENT),$(DEBUG_BOOT_EVENT),none)_$(if $(DEBUG_BOOT_FLOOR),$(DEBUG_BOOT_FLOOR),none)_$(DEBUG_BOOT_STARTER)_$(DEBUG_BOOT_PARTNER)$(if $(DEBUG_BOOT_SEED),_seed$(DEBUG_BOOT_SEED))$(if $(DEBUG_BOOT_LEVEL),_lv$(DEBUG_BOOT_LEVEL))
# GNU make skips a missing prerequisite that has a recipe when the target already
# exists (the .SECONDARY: above), so the rule below would never run after a flip.
# Create a missing stamp at parse time instead; the new mtime forces main_loops.o.
$(if $(wildcard $(DEBUG_BOOT_STAMP)),,$(shell mkdir -p $(BUILD_DIR) && rm -f $(BUILD_DIR)/.debug_boot_* && touch $(DEBUG_BOOT_STAMP)))

SUBDIRS := $(sort $(dir $(ALL_OBJECTS)))

# Special configurations required for lib files
ifeq ($(MODERN),0)
  $(C_BUILDDIR)/agb_flash.o   : CC1FLAGS := -O -mthumb-interwork
  $(C_BUILDDIR)/agb_flash_1m.o: CC1FLAGS := -O -mthumb-interwork
  $(C_BUILDDIR)/agb_flash_mx.o: CC1FLAGS := -O -mthumb-interwork
  $(C_BUILDDIR)/m4a.o: CC1 := tools/agbcc/bin/old_agbcc
else
  $(C_BUILDDIR)/agb_flash.o: override CC1FLAGS += -fno-toplevel-reorder
endif

#### Main Rules ####


ALL_BUILDS := red

# Available targets
.PHONY: all modern clean compare tidy ground-compress ax-compress ax-dedupe ax-anim-compress title-bg-convert libagbsyscall tools clean-tools cpatch-payload FORCE $(TOOLDIRS)

# Pack decomp feature code into RescueTemple so end users only need baserom.gba.
CPATCH_PAYLOAD := RescueEditor/src/RescueEditor.Core/Resources/CPatchFeaturePayload.rcp
cpatch-payload: $(ROM) $(MAP) gen-runtime-config-schema
	python3 tools/pack_cpatch_payload.py --feature-rom $(ROM) --map $(MAP) -o $(CPATCH_PAYLOAD)

# The map is written by the ELF link; this lets make order it after the link.
$(MAP): $(ELF) ;

# Pretend rules that are actually flags defer to `make all`
modern: all

MAKEFLAGS += --no-print-directory

# Secondary expansion is required for dependency variables in object rules.
.SECONDEXPANSION:
# Clear the default suffixes
.SUFFIXES:
# Don't delete intermediate files
.SECONDARY:
# Delete files that weren't built properly
.DELETE_ON_ERROR:

infoshell = $(foreach line, $(shell $1 | sed "s/ /__SPACE__/g"), $(info $(subst __SPACE__, ,$(line))))

# Build tools when building the rom
# Disable dependency scanning for clean/tidy/tools
# Use a separate minimal makefile for speed
# Since we don't need to reload most of this makefile
ifeq (,$(filter clean,$(MAKECMDGOALS)))
$(call infoshell, $(MAKE) -f make_tools.mk)
endif

.PRECIOUS: %.1bpp %.4bpp %.8bpp %.gbapal %.lz %.rl %.pcm %.bin


# Create build subdirectories

$(shell mkdir -p $(SUBDIRS))

all: $(ROM)

# Keep after `all:` so this prerequisite-only rule is not the default goal.
$(GROUND_MAP_OBJECTS): $(GROUND_MAP_COMPRESSED_ASSETS)

# Re-run the ground compressor when a raw map asset is newer than the stamp
# (data/map_bg_lz/*.lz are committed; the script only rewrites stale ones).
GROUND_LZ_STAMP := $(BUILD_DIR)/ground_lz.stamp
$(GROUND_LZ_STAMP): $(GROUND_MAP_RAW_ASSETS) compress_ground_assets.py | tools/gbagfx
	@mkdir -p $(dir $@)
	python3 compress_ground_assets.py
	@touch $@
$(GROUND_MAP_OBJECTS): $(GROUND_LZ_STAMP)
GROUND_ALIAS_STAMP := $(BUILD_DIR)/ground_aliases.stamp
$(GROUND_ALIAS_STAMP): src/ground_files_table.c $(wildcard src/ground_map_files_*.c) $(GROUND_MAP_RAW_ASSETS) $(GROUND_MAP_COMPRESSED_ASSETS) tools/check_ground_file_aliases.py
	@mkdir -p $(dir $@)
	@python3 tools/check_ground_file_aliases.py
	@touch $@
$(C_BUILDDIR)/ground_files_table.o: $(GROUND_ALIAS_STAMP)

# Rebuild station scripts when custom_story pack selection flips
$(GROUND_STATION_OBJECTS) $(SKY_STORY_OBJECTS): $(GROUND_STORY_STAMP)
$(GROUND_STORY_STAMP):
	@mkdir -p $(BUILD_DIR)
	@rm -f $(BUILD_DIR)/.ground_story_vanilla $(BUILD_DIR)/.ground_story_custom $(BUILD_DIR)/.ground_story_sky
	@touch $@
	@echo "Ground story pack: $(GROUND_STORY_DIR) (custom_story=$(CUSTOM_STORY_FLAG))"

# Rebuild main_loops when the DEBUG_BOOT_MAP test hook flips
$(C_BUILDDIR)/main_loops.o $(C_BUILDDIR)/ground_main.o $(C_BUILDDIR)/ground_script.o $(C_BUILDDIR)/run_dungeon.o: $(DEBUG_BOOT_STAMP)
$(DEBUG_BOOT_STAMP):
	@mkdir -p $(BUILD_DIR)
	@rm -f $(BUILD_DIR)/.debug_boot_*
	@touch $@

tools: $(TOOLDIRS)

ground-compress: tools/gbagfx
	python3 compress_ground_assets.py

# Lazy stamp: recipe always re-checks tiles (FORCE), but only refreshes the
# stamp mtime when a .lz was rewritten. monster_gfx uses an order-only dep so
# a stamp refresh does not force every gfx unit to rebuild — scaninc .d files
# pull in the specific .4bpp.lz paths that changed.
AX_TILES_STAMP := $(BUILD_DIR)/ax_tiles.stamp

ax-compress: $(AX_TILES_STAMP)

# Alias duplicate AX pose/anim arrays (within + cross-species shared anims).
# Safe to re-run; no-op when already deduped. See SESSION_HISTORY.md.
ax-dedupe:
	python3 dedupe_ax_tables.py --shared-anims

FORCE: ;

# Fresh clones have only the PNGs; generate every .4bpp before compressing.
AX_MON_4BPPS := $(patsubst %.png,%.4bpp,$(wildcard graphics/ax/mon/*/*.png))

$(AX_TILES_STAMP): FORCE $(AX_MON_4BPPS)
	@mkdir -p $(dir $@)
	@python3 compress_ax_tiles.py --stamp $@ --quiet

# Monster headers INCBIN compressed tiles; ensure they exist before assembling.
MONSTER_GFX_OBJECTS := $(filter $(C_BUILDDIR)/monster_gfx%.o,$(C_OBJECTS))
$(MONSTER_GFX_OBJECTS): | $(AX_TILES_STAMP)

# LZ AX anim sequences (GMLZ) into graphics/ax/anim_lz/; skip if >256B or no win.
AX_ANIMS_STAMP := $(BUILD_DIR)/ax_anims.stamp

ax-anim-compress: $(AX_ANIMS_STAMP)

$(AX_ANIMS_STAMP): FORCE
	@mkdir -p $(dir $@)
	@python3 compress_ax_anims.py --stamp $@ --quiet

$(MONSTER_GFX_OBJECTS): | $(AX_ANIMS_STAMP)
$(C_BUILDDIR)/data/ax_shared_anims.o: | $(AX_ANIMS_STAMP)

# Custom title-screen backgrounds (PNG → AT4PN + pal).
TITLE_BG_STAMP := $(BUILD_DIR)/title_bg.stamp

title-bg-convert: $(TITLE_BG_STAMP)

$(TITLE_BG_STAMP): FORCE
	@mkdir -p $(dir $@)
	@python3 convert_title_backgrounds.py --stamp $@ --quiet

$(C_BUILDDIR)/custom_title_backgrounds.o: | $(TITLE_BG_STAMP)

# Friend-area intro backgrounds (PNG → AT4PN + pal + data.c).
FRIEND_AREA_INTRO_STAMP := $(BUILD_DIR)/friend_area_intros.stamp

friend-area-intro-convert: $(FRIEND_AREA_INTRO_STAMP)

$(FRIEND_AREA_INTRO_STAMP): FORCE
	@mkdir -p $(dir $@)
	@python3 convert_friend_area_backgrounds.py --stamp $@ --quiet

$(C_BUILDDIR)/friend_area_intros_data.o: | $(FRIEND_AREA_INTRO_STAMP)
$(C_BUILDDIR)/friend_area_intros.o: | $(FRIEND_AREA_INTRO_STAMP)

# Custom starter-evolution portraits (PNG → AT4PX + pal + data.c).
CUSTOM_PORTRAIT_STAMP := $(BUILD_DIR)/custom_portraits.stamp

custom-portraits-convert: $(CUSTOM_PORTRAIT_STAMP)

$(CUSTOM_PORTRAIT_STAMP): FORCE
	@mkdir -p $(dir $@)
	@python3 convert_custom_portraits.py --stamp $@ --quiet

$(C_BUILDDIR)/custom_portraits_data.o: | $(CUSTOM_PORTRAIT_STAMP)
$(C_BUILDDIR)/custom_portraits.o: | $(CUSTOM_PORTRAIT_STAMP)

syms: $(SYM)

include dungeon_pokemon.mk
include dungeon_floor.mk
include dungeon_trap.mk
include dungeon_item.mk
include data_monster.mk
include data_item.mk
include data_move.mk
include data_dungeon.mk
include graphics.mk

$(TOOLDIRS):
	@$(MAKE) -C $@ CC=$(HOSTCC) CXX=$(HOSTCXX)

compare: $(ROM)
	@$(SHA1SUM) red.sha1

clean: tidy clean-tools
	$(RM) $(ALL_OBJECTS) $(ALL_OBJECTS:.o=.d)

clean-tools:
	@$(foreach tooldir,$(TOOLDIRS),$(MAKE) clean -C $(tooldir);)

tidy:
	$(RM) -f $(ROM) $(ELF) $(MAP) $(SYM)
	$(RM) -r $(BUILD_DIR_NORMAL)
	$(RM) -r $(BUILD_DIR_MODERN)
	$(RM) -f $(ITEM_DATA)
	$(RM) -f $(MOVE_DATA)
	$(RM) -f $(MONSTER_DATA)
	$(RM) -f $(LEARNSET_DATA)
	$(RM) -f $(LEARNSET_PTRS)
	$(RM) -f $(DUNGEON_DATA)
	$(RM) -f $(DUNGEON_FLOOR)
	$(RM) -f $(DUNGEON_POKEMON)
	$(RM) -f $(DUNGEON_TRAP)
	$(RM) -f $(DUNGEON_ITEM)
	find . \( -iname '*.1bpp' -o -iname '*.4bpp' -o -iname '*.8bpp' -o -iname '*.gbapal' -o -iname '*.lz' -o -iname '*.latfont' -o -iname '*.hwjpnfont' -o -iname '*.fwjpnfont' \) ! -path './data/map_bg_lz/*' ! -path './graphics/ax/mon/*' -exec rm {} +
	@$(MAKE) clean -C libagbsyscall

define scaninc
	( paths="$$($(SCANINC) $1 $<)"; \
		echo -n "$(@:.d=.o): " > $@; \
		echo "$$paths" | xargs printf "%s " >> $@; \
		test -n "$$paths" && echo "$$paths" | xargs printf "\n%s:" >> $@; \
		echo >> $@; )
endef

$(C_BUILDDIR)/%.o: $(C_SUBDIR)/%.c
	@$(CPP) $(CPPFLAGS) $< -o $(C_BUILDDIR)/$*.i
	@$(PREPROC) $(C_BUILDDIR)/$*.i charmap.txt | $(CC1) $(CC1FLAGS) -o $(C_BUILDDIR)/$*.s
	@echo -e ".text\n\t.align\t2, 0\n" >> $(C_BUILDDIR)/$*.s
	$(AS) $(ASFLAGS) -o $@ $(C_BUILDDIR)/$*.s

$(C_BUILDDIR)/%.d: $(C_SUBDIR)/%.c
	@$(call scaninc,$(INCLUDE_PATHS))

# runtime.c uses C99 designated initializers; compile with modern gcc.
$(CONFIG_BUILDDIR)/%.o: $(CONFIG_SUBDIR)/%.c
	@mkdir -p $(dir $@)
	$(PREFIX)gcc -c -mcpu=arm7tdmi -mthumb -mthumb-interwork -O2 \
		-fno-toplevel-reorder -iquote include -I include \
		-o $@ $<

$(DATA_ASM_BUILDDIR)/%.o: $(DATA_ASM_SUBDIR)/%.s dungeon_pokemon dungeon_floor dungeon_trap dungeon_item data_monster data_item data_move data_learnset data_learnset_ptrs data_dungeon
	@$(CPP) -x assembler-with-cpp $(CPPFLAGS) $< -o $(DATA_ASM_BUILDDIR)/$*.i.s
	@$(PREPROC) $(DATA_ASM_BUILDDIR)/$*.i.s charmap.txt > $(DATA_ASM_BUILDDIR)/$*.s
	$(AS) $(ASFLAGS) -o $@ $(DATA_ASM_BUILDDIR)/$*.s

# Explorers of Sky demake: the sky build's dungeon file archive leaves out Red's
# dungeon tilesets and talk files (tools/make_sky_dungeon_archive.py); the
# other builds assemble data/dungeon_sbin.s as it is.
ifeq ($(GROUND_STORY_DIR),sky)
$(DATA_ASM_BUILDDIR)/dungeon_sbin.o: $(DATA_ASM_SUBDIR)/dungeon_sbin.s tools/make_sky_dungeon_archive.py dungeon_pokemon dungeon_floor dungeon_trap dungeon_item data_monster data_item data_move data_learnset data_learnset_ptrs data_dungeon
	@$(CPP) -x assembler-with-cpp $(CPPFLAGS) $< -o $(DATA_ASM_BUILDDIR)/dungeon_sbin.i.s
	@$(PREPROC) $(DATA_ASM_BUILDDIR)/dungeon_sbin.i.s charmap.txt > $(DATA_ASM_BUILDDIR)/dungeon_sbin.s
	python3 tools/make_sky_dungeon_archive.py $(DATA_ASM_BUILDDIR)/dungeon_sbin.s $(DATA_ASM_BUILDDIR)/dungeon_sbin.sky.s --report
	$(AS) $(ASFLAGS) -o $@ $(DATA_ASM_BUILDDIR)/dungeon_sbin.sky.s
endif

# Explorers of Sky demake: the event sources (documentation/EventEditor.md).
# events/sky/scenes/sky_<map>_scenes.scene becomes $(SKY_GEN_DIR)/sky_<map>_scenes.h,
# which src/data/ground/sky/ground_data_<map>_station.h includes. The headers
# are listed as prerequisites of the station objects (and their .d files) so a
# clean build makes them first.
ifeq ($(GROUND_STORY_DIR),sky)
EVENT_EDITOR_PY := $(wildcard tools/event_editor/*.py)
SKY_SCENE_SOURCES := $(wildcard events/sky/scenes/*.scene)
$(SKY_GEN_DIR)/%.h: events/sky/scenes/%.scene $(EVENT_EDITOR_PY) events/sky/cutaways.cfg
	@mkdir -p $(dir $@)
	python3 tools/event_editor/scenes.py compile $< $@
# Story CGs: the picture table and the fade / pan settings (new pictures are
# converted into $(SKY_GEN_DIR)/cutaways/).
$(SKY_GEN_DIR)/sky_cg_config.h: events/sky/cutaways.cfg $(EVENT_EDITOR_PY) $(wildcard graphics/custom/sky_cutaways/*.png)
	@mkdir -p $(dir $@)
	python3 tools/event_editor/cutaways.py header $@
$(C_BUILDDIR)/sky_cutaways.o $(C_BUILDDIR)/sky_cutaways_data.o: $(SKY_GEN_DIR)/sky_cg_config.h
# EoS's opening: the Shaymin scene's timings and the recorded scenes' table
# (a scene whose view is moved gets its blob rewritten into $(SKY_GEN_DIR)/opening/).
SKY_OPENING_GEN := $(SKY_GEN_DIR)/sky_opening_config.h $(SKY_GEN_DIR)/sky_opening_scenes.h
$(SKY_GEN_DIR)/sky_opening_scenes.h: $(SKY_GEN_DIR)/sky_opening_config.h ;
$(SKY_GEN_DIR)/sky_opening_config.h: events/sky/opening.cfg graphics/custom/sky_opening/scenes/baked.json $(EVENT_EDITOR_PY)
	@mkdir -p $(dir $@)
	python3 tools/event_editor/opening.py headers $(SKY_GEN_DIR)
$(C_BUILDDIR)/sky_opening.o $(C_BUILDDIR)/sky_opening.d: $(SKY_OPENING_GEN)
define SKY_SCENE_DEPS
$(C_BUILDDIR)/ground_data_$(1)_station.o $(C_BUILDDIR)/ground_data_$(1)_station.d: $(SKY_GEN_DIR)/sky_$(1)_scenes.h
endef
$(foreach s,$(SKY_SCENE_SOURCES),$(eval $(call SKY_SCENE_DEPS,$(patsubst sky_%_scenes,%,$(basename $(notdir $(s)))))))
endif

# The song table's #include chain (sound/*.inc: the sky BGM / SE / jukebox tables)
# is not seen by scaninc.
$(DATA_ASM_BUILDDIR)/sound_data.o: $(wildcard sound/*.inc)

$(DATA_ASM_BUILDDIR)/%.d: $(DATA_ASM_SUBDIR)/%.s
	@$(call scaninc,$(INCLUDE_PATHS))

$(ASM_BUILDDIR)/%.o: $(ASM_SUBDIR)/%.s
	@$(CPP) -x assembler-with-cpp $(CPPFLAGS) $< -o $(ASM_BUILDDIR)/$*.s
	$(AS) $(ASFLAGS) -I $(ASM_SUBDIR) -o $@ $(ASM_BUILDDIR)/$*.s

$(ASM_BUILDDIR)/%.d: $(ASM_SUBDIR)/%.s
	@$(call scaninc,$(INCLUDE_PATHS))
	
$(SONG_BUILDDIR)/%.o: $(SONG_SUBDIR)/%.s
	@$(CPP) -x assembler-with-cpp $(CPPFLAGS) $< -o $(SONG_BUILDDIR)/$*.s
	$(AS) $(ASFLAGS) -o $@ $(SONG_BUILDDIR)/$*.s

$(SONG_BUILDDIR)/%.d: $(SONG_SUBDIR)/%.s
	@$(call scaninc,$(INCLUDE_PATHS))
	
$(C_BUILDDIR)/%.o: $(C_SUBDIR)/%.s
	@$(CPP) -x assembler-with-cpp $(CPPFLAGS) $< -o $(C_BUILDDIR)/$*.s
	$(AS) $(ASFLAGS) -o $@ $(C_BUILDDIR)/$*.s
	
$(C_BUILDDIR)/%.d: $(C_SUBDIR)/%.s
	@$(call scaninc,$(INCLUDE_PATHS))

libagbsyscall: libagbsyscall/libagbsyscall.a

libagbsyscall/libagbsyscall.a:
	@$(MAKE) -C libagbsyscall TOOLCHAIN=$(TOOLCHAIN)

$(BUILD_DIR)/sym_ewram.ld: sym_ewram.txt
	$(RAMSCRGEN) ewram_data $< ENGLISH > $@

$(BUILD_DIR)/sym_iwram.ld: sym_iwram.txt
	$(RAMSCRGEN) iwram_data $< ENGLISH > $@

$(BUILD_DIR)/sym_ewram_init.ld: sym_ewram_init.txt
	$(RAMSCRGEN) ewram_init $< ENGLISH > $@

$(BUILD_DIR)/sym_iwram_init.ld: sym_iwram_init.txt
	$(RAMSCRGEN) iwram_init $< ENGLISH > $@
    
ifeq ($(MODERN),0)
  LD_SCRIPT := ld_script.ld
  LD_SCRIPT_DEPS := $(BUILD_DIR)/sym_ewram.ld $(BUILD_DIR)/sym_iwram.ld $(BUILD_DIR)/sym_ewram_init.ld $(BUILD_DIR)/sym_iwram_init.ld
else
  LD_SCRIPT := ld_script_modern.ld
  LD_SCRIPT_DEPS :=
endif

# Hack builds are emitted at their real packed size. Matching retail padding can
# be restored by setting PAD_ROM=1.
PAD_ROM ?= 0
ifeq ($(PAD_ROM),1)
  OBJCOPY_PAD_FLAGS := --pad-to 0xA000000
  GBAFIX_PAD_FLAGS := -p
else
  OBJCOPY_PAD_FLAGS :=
  GBAFIX_PAD_FLAGS :=
endif

# Elf from object files
LDFLAGS = -Map ../../$(MAP)
$(ELF): $(LD_SCRIPT) $(LD_SCRIPT_DEPS) $(ALL_OBJECTS) libagbsyscall/libagbsyscall.a
	@cd $(BUILD_DIR) && $(LD) $(LDFLAGS) -T ../../$< --print-memory-usage -o ../../$@ $(OBJS_REL) $(LIB) | cat
	@echo "cd $(BUILD_DIR) && $(LD) $(LDFLAGS) -T ../../$< --print-memory-usage -o ../../$@ <objs> <libs> | cat"
	$(GBAFIX) $@ -t"$(TITLE)" -c$(GAME_CODE) -m$(MAKER_CODE) -r$(REVISION) --silent
	@python3 tools/check_save_layout.py
	@python3 tools/check_palette_owners.py

# Builds the rom from the elf file
$(ROM): %.gba: $(ELF)
	$(OBJCOPY) -O binary --gap-fill 0xFF $(OBJCOPY_PAD_FLAGS) $< $@
	$(GBAFIX) $@ $(GBAFIX_PAD_FLAGS) --silent

.PHONY: check-save-layout check-palette-owners check-runtime-config-schema gen-runtime-config-schema
check-save-layout:
	python3 tools/check_save_layout.py

check-palette-owners:
	python3 tools/check_palette_owners.py

# Lock RescueTemple C Patches field order to include/runtime.h.
gen-runtime-config-schema:
	python3 tools/gen_runtime_config_schema.py

check-runtime-config-schema:
	python3 tools/gen_runtime_config_schema.py --check

ifeq (,$(filter clean,$(MAKECMDGOALS)))
-include $(ALL_OBJECTS:.o=.d)
endif

# Symbol file (`make syms`)
$(SYM): $(ELF)
	$(OBJDUMP) -t $< | sort -u | grep -E "^0[2389]" | $(PERL) -p -e 's/^(\w{8}) (\w).{6} \S+\t(\w{8}) (\S+)$$/\1 \2 \3 \4/g' > $@
