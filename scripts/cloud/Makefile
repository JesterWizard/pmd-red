# Standalone build for the headless GBA tools: mgba_shot (screenshots) and
# mgba_rpc (the emulator the sky regression suite drives).
#
# Not included by the root Makefile: run `make -C scripts/cloud` explicitly.
# Needs libmgba-dev (headers in /usr/include/mgba) and libpng-dev.

TOOL := ../../build/tools/mgba_shot
RPC := ../../build/tools/mgba_rpc
TOOL_DIR := ../../build/tools

.PHONY: all clean

all: $(TOOL) $(RPC)

$(TOOL): mgba_shot.c Makefile | $(TOOL_DIR)
	cc -std=c11 -Wall -Wextra -O2 mgba_shot.c -o $@ -lmgba -lpng

$(RPC): mgba_rpc.c Makefile | $(TOOL_DIR)
	cc -std=c11 -Wall -Wextra -O2 mgba_rpc.c -o $@ -lmgba

$(TOOL_DIR):
	mkdir -p $@

clean:
	rm -f $(TOOL) $(RPC)
