# Split screens

Every chapter-1 moment where Explorers of Sky uses both DS screens, as two
linked PNGs per folder: `top.png` (the top screen, a transparent strip of
64 lines under it) and `bottom.png` (a 64-line strip, then the bottom
screen). Stack top over bottom and the strips meet: paint the gap there.
`link.json` says where each screen comes from and how the GBA shows it.
Made by `tools/export_split_screens.py EOS.nds`; the build does not read them.
`tools/export_split_screens.py --join graphics/custom/split_screens/NAME`
previews a pair joined (`joined_preview.png`).

| Folder | What |
|---|---|
| [`storm_cliff`](storm_cliff/) | The cliff in the storm (dark), over the stormy sea |
| [`storm_cliff_lit`](storm_cliff_lit/) | The cliff lit by lightning, over the stormy sea |
| [`beach_day`](beach_day/) | The sky over the beach by day, over the beach |
| [`guild`](guild/) | Dusk clouds over Wigglytuff's Guild, over the guild |
| [`guild_relic_fragment`](guild_relic_fragment/) | The Relic Fragment close-up, over the partner at the grate |
| [`beach_dusk`](beach_dusk/) | The sky at dusk, over the beach at sunset |
| [`beach_dusk_relic_fragment`](beach_dusk_relic_fragment/) | The Relic Fragment close-up, over the heroes on the beach |
| [`krabby_bubbles`](krabby_bubbles/) | The sky at dusk, over Krabby's bubbles |
| [`krabby_sunset`](krabby_sunset/) | The sky at dusk, over the bubbles at sunset |
| [`sunset_sea_0`](sunset_sea_0/) | The sunset sky over the glittering sea, frame 0 of 8 |
| [`sunset_sea_1`](sunset_sea_1/) | The sunset sky over the glittering sea, frame 1 of 8 |
| [`sunset_sea_2`](sunset_sea_2/) | The sunset sky over the glittering sea, frame 2 of 8 |
| [`sunset_sea_3`](sunset_sea_3/) | The sunset sky over the glittering sea, frame 3 of 8 |
| [`sunset_sea_4`](sunset_sea_4/) | The sunset sky over the glittering sea, frame 4 of 8 |
| [`sunset_sea_5`](sunset_sea_5/) | The sunset sky over the glittering sea, frame 5 of 8 |
| [`sunset_sea_6`](sunset_sea_6/) | The sunset sky over the glittering sea, frame 6 of 8 |
| [`sunset_sea_7`](sunset_sea_7/) | The sunset sky over the glittering sea, frame 7 of 8 |
| [`op_shaymin_start`](op_shaymin_start/) | Opening: the sky with the sun, the camera about to pan down |
| [`op_shaymin_end`](op_shaymin_end/) | Opening: the land, Shaymin gone |
| [`op_lapras_start`](op_lapras_start/) | Opening: Lapras on the sea |
| [`op_lapras_end`](op_lapras_end/) | Opening: the camera up at the Wingull |
| [`op_treasure_start`](op_treasure_start/) | Opening: the treasure chest (top) |
| [`op_treasure_end`](op_treasure_end/) | Opening: the treasure chest (camera down) |
| [`op_timegear`](op_timegear/) | Opening: the Time Gear |
| [`op_logo`](op_logo/) | Opening: the logo over the field |
| [`op_bidoof`](op_bidoof/) | Opening: Bidoof |
| [`op_charms`](op_charms/) | Opening: the charms |
| [`op_sableye`](op_sableye/) | Opening: Sableye |
| [`op_island`](op_island/) | Opening: the island |
| [`op_crystal_start`](op_crystal_start/) | Opening: the crystal cave (top) |
| [`op_crystal_end`](op_crystal_end/) | Opening: the crystal cave (camera down) |
| [`op_dialga`](op_dialga/) | Opening: Dialga |
| [`op_forest`](op_forest/) | Opening: the forest and the box's light |
| [`op_march`](op_march/) | Opening: the march |
| [`op_hills_start`](op_hills_start/) | Opening: the hills (camera low) |
| [`op_hills_end`](op_hills_end/) | Opening: the hills (camera up) |
| [`title`](title/) | The title screen: the logo, and the field with EXPLORERS OF SKY |
