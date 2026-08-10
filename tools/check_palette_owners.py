#!/usr/bin/env python3
"""Build-time check: coin / HUD / HP bar / pink / stairs / minimap palette ownership."""

from __future__ import annotations

import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OWNERS_H = ROOT / "include" / "palette_owners.h"
CUSTOM_C = ROOT / "src" / "custom_graphics.c"
CUSTOM_H = ROOT / "include" / "custom_graphics.h"
BASEROM = ROOT / "baserom.gba"
COLORS_H = ROOT / "include" / "constants" / "colors.h"
TRAPPAT_INC = ROOT / "data" / "dungeon" / "trappat.inc"

LEVFONT_SLOTS = frozenset({4, 5, 6, 12, 15})
HP5FONT_SLOTS = frozenset({8, 10, 15})
HUD_CHROME_SLOTS = frozenset({12, 13, 14, 15})
# Normal stairs objs 22/23 — must remain free of coin overwrites in bank 12.
STAIRS_SAFE_FREE = frozenset({8, 9, 10, 11})  # coin may use these
STAIRS_USED = frozenset({1, 2, 3, 4, 5, 6, 7, 15})

FONTPAL_OFF = 0x30612C


def fail(msg: str) -> None:
    print(f"check_palette_owners: FAIL: {msg}", file=sys.stderr)
    sys.exit(1)


def parse_defines(path: Path) -> dict[str, int]:
    text = path.read_text(encoding="utf-8", errors="replace")
    defs: dict[str, int] = {}
    for m in re.finditer(r"^\s*#define\s+(\w+)\s+(\d+)\b", text, re.M):
        defs[m.group(1)] = int(m.group(2))
    return defs


def fontpal_rgb(rom: bytes, slot: int) -> tuple[int, int, int]:
    o = FONTPAL_OFF + slot * 4
    r, g, b, _a = rom[o : o + 4]
    return r, g, b


def stairs_indices_from_trappat() -> dict[int, set[int]]:
    """Return {obj_index: set of nibble indices} for objs 22 and 23."""
    if not TRAPPAT_INC.is_file():
        return {}
    text = TRAPPAT_INC.read_text(encoding="utf-8", errors="replace")
    start = text.find(".global trappat\ntrappat:")
    end = text.find(".global gUnknown_84F4520")
    if start < 0 or end < 0:
        return {}
    chunk = text[start:end]
    raw: list[int] = []
    for m in re.finditer(r"\.byte\s+([0-9a-fxA-F,\s]+)", chunk):
        for tok in m.group(1).split(","):
            tok = tok.strip()
            if tok:
                raw.append(int(tok, 0))
    count = raw[0] | (raw[1] << 8) | (raw[2] << 16) | (raw[3] << 24)
    data = bytes(raw[4:])
    out: dict[int, set[int]] = {}
    for obj in (22, 23):
        used: set[int] = set()
        base = obj * 9 * 32
        for ti in range(9):
            tile = data[base + ti * 32 : base + ti * 32 + 32]
            for b in tile:
                used.add(b & 0xF)
                used.add(b >> 4)
        out[obj] = used
    if count < 29 * 9:
        fail(f"trappat tile count unexpected: {count}")
    return out


def main() -> None:
    if not OWNERS_H.is_file():
        fail(f"missing {OWNERS_H}")

    d = parse_defines(OWNERS_H)
    required = [
        "POKE_COIN_PAL_BANK_TOWN",
        "POKE_COIN_PAL_BANK_DUNGEON",
        "POKE_COIN_NUM_GOLD_TONES",
        "POKE_COIN_DUNGEON_GOLD_SLOT0",
        "POKE_COIN_DUNGEON_GOLD_SLOT1",
        "POKE_COIN_DUNGEON_GOLD_SLOT2",
        "POKE_COIN_DUNGEON_GOLD_SLOT3",
        "FONT_SLOT_HP_GREEN",
        "FONT_SLOT_HUD_LABEL",
        "ITEM_PINK_SLOT",
        "ITEM_PINK_R",
        "ITEM_PINK_G",
        "ITEM_PINK_B",
        "FONT_HUD_LABEL_R",
        "FONT_HUD_LABEL_G",
        "FONT_HUD_LABEL_B",
        "FONT_HP_GREEN_R",
        "FONT_HP_GREEN_G",
        "FONT_HP_GREEN_B",
        "FONT_BANK",
    ]
    for name in required:
        if name not in d:
            fail(f"{OWNERS_H.name}: missing #define {name}")

    if d["POKE_COIN_NUM_GOLD_TONES"] != 4:
        fail("POKE_COIN_NUM_GOLD_TONES must be 4")

    if d["POKE_COIN_PAL_BANK_DUNGEON"] == d["FONT_BANK"]:
        fail("dungeon coin must not use font bank (HUD/pink)")

    if d["POKE_COIN_PAL_BANK_TOWN"] == 12:
        fail("town coin must not use BG bank 12 (T01P03 map flowers)")

    if d["POKE_COIN_PAL_BANK_TOWN"] == d["FONT_BANK"]:
        fail("town coin primary bank must be 14")

    portrait = d.get("POKE_COIN_PAL_BANK_TOWN_PORTRAIT", d.get("POKE_COIN_PAL_BANK_TOWN_FONT_FALLBACK"))
    if portrait is None:
        fail("missing POKE_COIN_PAL_BANK_TOWN_PORTRAIT")
    if portrait == d["POKE_COIN_PAL_BANK_TOWN"]:
        fail("town coin portrait bank must differ from primary 14")
    if portrait == 12:
        fail("town coin portrait bank must not be 12 (map flowers)")
    if portrait == d["FONT_BANK"]:
        fail("town coin portrait bank must not be font 15 (use full golds on 13)")

    gold_slots = [
        d["POKE_COIN_DUNGEON_GOLD_SLOT0"],
        d["POKE_COIN_DUNGEON_GOLD_SLOT1"],
        d["POKE_COIN_DUNGEON_GOLD_SLOT2"],
        d["POKE_COIN_DUNGEON_GOLD_SLOT3"],
    ]
    if len(set(gold_slots)) != 4:
        fail(f"dungeon gold slots must be 4 distinct: {gold_slots}")
    if not set(gold_slots).issubset(STAIRS_SAFE_FREE):
        fail(f"dungeon gold slots {gold_slots} must be within stairs-safe {sorted(STAIRS_SAFE_FREE)}")
    if set(gold_slots) & STAIRS_USED:
        fail(f"dungeon gold slots overlap stairs indices {sorted(STAIRS_USED)}")

    # Verify real stairs tiles don't use coin slots.
    stairs = stairs_indices_from_trappat()
    for obj, used in stairs.items():
        overlap = used & set(gold_slots)
        if overlap:
            fail(f"trappat stairs obj {obj} uses coin slots {sorted(overlap)}")

    font_protected = set(LEVFONT_SLOTS | HP5FONT_SLOTS | HUD_CHROME_SLOTS)
    font_protected.update({d["ITEM_PINK_SLOT"], d["FONT_SLOT_HP_GREEN"], 5, 6, 8})

    custom_c = CUSTOM_C.read_text(encoding="utf-8", errors="replace")
    custom_h = CUSTOM_H.read_text(encoding="utf-8", errors="replace")
    if "palette_owners.h" not in custom_c and "palette_owners.h" not in custom_h:
        fail("custom_graphics must include palette_owners.h")

    # Must not write font-bank protected slots (240+N).
    for slot in sorted(font_protected):
        if slot == d["ITEM_PINK_SLOT"]:
            continue
        if re.search(rf"240\s*\+\s*{slot}\b", custom_c):
            fail(f"{CUSTOM_C.name}: writes font slot {slot} (HUD/HP protected)")

    for name in (
        "POKE_COIN_DUNGEON_GOLD_SLOT0",
        "POKE_COIN_DUNGEON_GOLD_SLOT1",
        "POKE_COIN_DUNGEON_GOLD_SLOT2",
        "POKE_COIN_DUNGEON_GOLD_SLOT3",
    ):
        if name not in custom_c:
            fail(f"{CUSTOM_C.name}: must load {name} for dungeon coin gold")

    # Pink RGB
    pink_macros = re.search(
        r"sItemPinkColor\s*=\s*\{\s*ITEM_PINK_R\s*,\s*ITEM_PINK_G\s*,\s*ITEM_PINK_B\b",
        custom_c,
    )
    pink_lit = re.search(
        r"sItemPinkColor\s*=\s*\{\s*(\d+)\s*,\s*(\d+)\s*,\s*(\d+)",
        custom_c,
    )
    if pink_macros:
        pr, pg, pb = d["ITEM_PINK_R"], d["ITEM_PINK_G"], d["ITEM_PINK_B"]
    elif pink_lit:
        pr, pg, pb = map(int, pink_lit.groups())
        if (pr, pg, pb) != (d["ITEM_PINK_R"], d["ITEM_PINK_G"], d["ITEM_PINK_B"]):
            fail(f"sItemPinkColor {(pr,pg,pb)} != owners pink")
    else:
        fail("sItemPinkColor must use ITEM_PINK_R/G/B or matching literals")

    if COLORS_H.is_file():
        colors_h = COLORS_H.read_text(encoding="utf-8", errors="replace")
        if "COLOR_PINK" in colors_h and not re.search(r"#define\s+COLOR_PINK\s+11", colors_h):
            fail("COLOR_PINK must remain 11")

    if not BASEROM.is_file():
        fail(f"missing {BASEROM}")
    rom = BASEROM.read_bytes()
    label = fontpal_rgb(rom, d["FONT_SLOT_HUD_LABEL"])
    expect_label = (d["FONT_HUD_LABEL_R"], d["FONT_HUD_LABEL_G"], d["FONT_HUD_LABEL_B"])
    if label != expect_label:
        fail(f"fontpal HUD label {label} != {expect_label}")
    green = fontpal_rgb(rom, d["FONT_SLOT_HP_GREEN"])
    expect_green = (d["FONT_HP_GREEN_R"], d["FONT_HP_GREEN_G"], d["FONT_HP_GREEN_B"])
    if green != expect_green:
        fail(f"fontpal HP green {green} != {expect_green}")
    if fontpal_rgb(rom, d["ITEM_PINK_SLOT"]) != (0, 0, 0):
        fail("fontpal slot 11 should be unused for pink patch")

    print(
        "check_palette_owners: OK — "
        f"HUD {expect_label}, HP green {expect_green}, pink ({pr},{pg},{pb})@11, "
        f"dungeon coin bank {d['POKE_COIN_PAL_BANK_DUNGEON']} slots {gold_slots} "
        f"({d['POKE_COIN_NUM_GOLD_TONES']} golds, stairs-safe)"
    )


if __name__ == "__main__":
    main()
