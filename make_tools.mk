
MAKEFLAGS += --no-print-directory

# Only real tool packages (dirs with a Makefile). Skips e.g. tools/__pycache__/.
TOOLDIRS := $(foreach d,$(filter-out tools/agbcc/ tools/binutils/,$(wildcard tools/*/)),$(if $(wildcard $(d)Makefile),$(d)))

.PHONY: all $(TOOLDIRS)

all: $(TOOLDIRS)

$(TOOLDIRS):
	@$(MAKE) -C $@
