# Standalone build for the headless GBA screenshot tool (mgba_shot).
#
# Not included by the root Makefile: run `make -C scripts/cloud` explicitly.
# Needs libmgba-dev (headers in /usr/include/mgba) and libpng-dev.

TOOL := ../../build/tools/mgba_shot
TOOL_DIR := ../../build/tools

.PHONY: all clean

all: $(TOOL)

$(TOOL): mgba_shot.c Makefile | $(TOOL_DIR)
	cc -std=c11 -Wall -Wextra -O2 mgba_shot.c -o $@ -lmgba -lpng

$(TOOL_DIR):
	mkdir -p $@

clean:
	rm -f $(TOOL)
