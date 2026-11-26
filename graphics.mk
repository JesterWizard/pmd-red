%.4bpp:   %.png  ; $(GBAGFX) $< $@
%.pmdpal: %.pal  ; $(GBAGFX) $< $@
%.gbapal: %.pal  ; $(GBAGFX) $< $@

# Poké coin PNG palettes are often packed; remap RGB → town bank indices.
graphics/custom/poke_coin.4bpp: graphics/custom/poke_coin.png
	python3 tools/convert_poke_coin.py $< $@

# Thought bubbles: 128×64 PNG → linear 4bpp → 1D OBJ halves + palette.
THOUGHT_BUBBLE_PNGS := $(shell find graphics/custom/thought_bubbles -type f -name 'thought.png' 2>/dev/null | sort)
THOUGHT_BUBBLE_4BPPS := $(patsubst %.png,%.4bpp,$(THOUGHT_BUBBLE_PNGS))
THOUGHT_BUBBLE_PALETTES := $(patsubst %.png,%.gbapal,$(THOUGHT_BUBBLE_PNGS))

graphics/custom/thought_bubbles/%/thought.gbapal: graphics/custom/thought_bubbles/%/thought.png
	$(GBAGFX) $< $@

graphics/custom/thought_bubbles/%/thought.4bpp: graphics/custom/thought_bubbles/%/thought.png tools/repack_thought_bubble_1d.py
	@tmp_tiles=$$(mktemp /tmp/thought_bubble_tiles.XXXXXX.4bpp); \
	$(GBAGFX) $< $$tmp_tiles; \
	python3 tools/repack_thought_bubble_1d.py $$tmp_tiles $@; \
	rm -f $$tmp_tiles

# Explorers of Sky demake bubbles (EoS d01p11b1 bubbles, 16x16 cells stacked).
graphics/custom/sky_bubbles/bubbles.gbapal: graphics/custom/sky_bubbles/bubbles.png
	$(GBAGFX) $< $@

# Explorers of Sky demake rain (three 64x64 sheets stacked, OBJ 1D order) and
# lightning (8x8 tiles stacked, OBJ 1D order); tools/make_sky_storm_fx.py.
graphics/custom/sky_rain/rain_sheets.gbapal: graphics/custom/sky_rain/rain_sheets.png
	$(GBAGFX) $< $@
graphics/custom/sky_storm/bolts.gbapal: graphics/custom/sky_storm/bolts.png
	$(GBAGFX) $< $@

# Explorers of Sky demake opening (Shaymin scene) objects and the title's
# "Press START": 8x8 tiles stacked in OBJ 1D order; tools/make_sky_opening.py,
# tools/make_sky_title_screens.py.
SKY_OBJ_PALETTES := $(addprefix graphics/custom/sky_opening/,flare.gbapal shaymin.gbapal petals.gbapal) \
	graphics/custom/sky_title/press_start.gbapal
$(SKY_OBJ_PALETTES): %.gbapal: %.png
	$(GBAGFX) $< $@
