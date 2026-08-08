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
ifeq ($(CUSTOM_STORY_FLAG),TRUE)
  GROUND_STORY_DIR := custom
else
  GROUND_STORY_DIR := vanilla
endif
GROUND_STORY_PATH := src/data/ground/$(GROUND_STORY_DIR)
CPPFLAGS += -iquote $(GROUND_STORY_PATH)
INCLUDE_PATHS += -I $(GROUND_STORY_PATH)

#### Files ####
# Always emit pmd_red.gba. Matching (agbcc) and modern objects stay separated.
BUILD_DIR_NORMAL := build/pmd_red_matching
BUILD_DIR_MODERN := build/pmd_red
ifeq ($(MODERN),0)
  BUILD_DIR := $(BUILD_DIR_NORMAL)
else
  BUILD_DIR := $(BUILD_DIR_MODERN)
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
# Designated-initializer settings blob (modern/hack builds only).
CONFIG_SRCS := $(CONFIG_SUBDIR)/runtime.c
ASM_SOURCES := $(wildcard asm/*.s data/*.s)
C_ASM_SOURCES := $(wildcard src/*.s)
SONG_SRCS := $(wildcard sound/songs/*.s)

# Region fragments are .included by asm/ram_map.s — do not assemble alone.
RAM_MAP_FRAGMENTS := \
	asm/ram_map_iwram.s \
	asm/ram_map_ewram.s \
	asm/ram_map_sram.s
ASM_SOURCES := $(filter-out $(RAM_MAP_FRAGMENTS),$(ASM_SOURCES))

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
.PHONY: all modern clean compare tidy ground-compress ax-compress ax-dedupe ax-anim-compress title-bg-convert libagbsyscall tools clean-tools FORCE $(TOOLDIRS)

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

# Rebuild station scripts when custom_story pack selection flips
$(GROUND_STATION_OBJECTS): $(GROUND_STORY_STAMP)
$(GROUND_STORY_STAMP):
	@mkdir -p $(BUILD_DIR)
	@rm -f $(BUILD_DIR)/.ground_story_vanilla $(BUILD_DIR)/.ground_story_custom
	@touch $@
	@echo "Ground story pack: $(GROUND_STORY_DIR) (custom_story=$(CUSTOM_STORY_FLAG))"

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

$(AX_TILES_STAMP): FORCE
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

.PHONY: check-save-layout check-palette-owners
check-save-layout:
	python3 tools/check_save_layout.py

check-palette-owners:
	python3 tools/check_palette_owners.py

ifeq (,$(filter clean,$(MAKECMDGOALS)))
-include $(ALL_OBJECTS:.o=.d)
endif

# Symbol file (`make syms`)
$(SYM): $(ELF)
	$(OBJDUMP) -t $< | sort -u | grep -E "^0[2389]" | $(PERL) -p -e 's/^(\w{8}) (\w).{6} \S+\t(\w{8}) (\S+)$$/\1 \2 \3 \4/g' > $@
