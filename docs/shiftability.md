# ROM shiftability

The repository now has two intentional build modes:

- `make compare` uses the retail linker layout and must reproduce the original
  ROM byte-for-byte.
- `make modern` uses `ld_script_modern.ld`, which packs code and data without
  the retail archive address pins. This is the shiftable build for ROM hacks.

## What was changed

- The two remaining title-menu pointer tables were split into labeled data
  chunks in `data/titlemenu_sbin.s`. Their 16 absolute ROM pointers are now
  linker-relocated `.4byte` symbol references.
- Remaining data-side `baserom.gba` slices were extracted into repository-owned
  binary assets:
  - `graphics/kao/`
  - `graphics/titlemenu/`
  - `data/unknown_unused/`
- `extract_baserom_assets.py` can reproduce those extractions from the original
  `baserom.gba`.

There are no active `.incbin "baserom.gba"` directives left under `data/`.
Historical `@ replacing .incbin ...` comments remain as source-address notes.

The opaque `unk_*` payloads are retained for matching builds. They have no
live code or data consumers in the current build; their internal bytes should
not be reused as structured data without first decoding them.

## Verification

Run both builds after changing movable data:

```bash
make compare -j$(nproc)
make modern -j$(nproc)
```

Expected results:

- `make compare` prints `pmd_red.gba: OK`.
- `make modern` produces `pmd_red_modern.gba`.

The matching linker script intentionally keeps the retail VMAs for
`unk_data`, `titlemenu_sbin`, `dungeon_sbin`, and `monster_sbin`. Do not remove
those pins when the goal is a byte-identical retail build. The modern linker
script omits them and uses wildcard `.rodata` placement instead.

To regenerate extracted assets, keep the verified retail ROM at
`baserom.gba` and run:

```bash
python3 extract_baserom_assets.py
```
