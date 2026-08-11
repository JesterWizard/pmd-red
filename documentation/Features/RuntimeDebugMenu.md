# Runtime Debug Menu

The in-game debug menu is opened with Start from the overworld when
`gRuntimeConfig.debug_menu` is enabled. Its runtime feature overrides are
stored in the save data and restored after loading.

The overrides use a fixed `0x40`-byte record appended after the Spinda Café
save chunk. This record fits inside the existing `unk448` save buffer, so the
save structure and SRAM footprint do not grow. Saves made before runtime
overrides were added have no valid record and continue using the ROM defaults.

Press **R** on a highlighted option to open its detail page (same pattern as
move / item / IQ skill info). **A** or **B** closes the page and returns to the
list. **Start** only opens the menu from the overworld.

Some options take effect only after entering a new dungeon, visiting an area,
starting a new game, or rebooting. Detail pages note when a delayed apply is
needed. `custom_story` remains build-time-only because the Makefile selects its
ground-script asset pack while building, so it is not listed in the menu.

## Restart and re-entry markers

Options requiring a title restart or reboot are:

- `PMD2 font`: applied during font initialization.
- `Title BG`: loaded when the title screen is created.
- `Skip intro`: checked during the boot opening sequence.

Options read when starting a new game are:

- `Start pick`
- `Start view`
- `Partners`
- `PMD2 cast`

Options applied on the next relevant re-entry or transition are:

- `Training`: next training/Dojo entry.
- `Floor mods`: next dungeon-floor generation.
- `Outlaw jobs`: after the job board is refreshed or reopened.
- `Keep allies`: at the next end-of-day transition.
- `HP bars`: next dungeon entry.
- `Area intros`: next Friend Area visit.
- `Team ACT` and `All Dojo`: next Dojo entry.
- `Living Sq`: after leaving and re-entering Pokémon Square.
- `Party of 4`: next dungeon entry.
