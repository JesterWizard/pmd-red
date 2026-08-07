%.4bpp:   %.png  ; $(GBAGFX) $< $@
%.pmdpal: %.pal  ; $(GBAGFX) $< $@
%.gbapal: %.pal  ; $(GBAGFX) $< $@

# Poké coin PNG palettes are often packed; remap RGB → town bank indices.
graphics/custom/poke_coin.4bpp: graphics/custom/poke_coin.png
	python3 tools/convert_poke_coin.py $< $@
