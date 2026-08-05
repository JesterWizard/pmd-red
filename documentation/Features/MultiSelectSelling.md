# Multi-Select Selling

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Vanilla Kecleon Shop sell picks one bag slot at a time (or **Sell All**). Kangaskhan Storage already supports marking several bag items with **L/R**, then confirming once.

When enabled, Kecleon sell uses that same multi-select pattern.

Toggle: `gRuntimeConfig.multi_select_selling` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for vanilla one-at-a-time sell.

---

## Behavior

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | On the sell list, **L/R** toggles selection (highlight). **A** with one or more marked items confirms a bulk sale at the combined price. **A** with nothing marked opens the usual single-item Sell / Info menu. |
| `FALSE` | Vanilla: no L/R select; each **A** opens single-item sell. |

Selection rules match Kangaskhan deposit style:

- Only shoppable items can be marked.
- Marking is refused if team money + already selected prices + this item would exceed the money cap.
- Unsellable / over-cap rows are greyed while multi-select is on.
- Marked rows hide the sell price (and its green digits) so the highlight bar is unobstructed; price returns when unmarked.

Bulk confirm reuses the Sell All offer dialogue (`KECLEON_DLG_10`) with the selected total. **Sell All** on the main menu is unchanged.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| L/R select, eligibility, greying | [`src/kecleon_bros4.c`](../../src/kecleon_bros4.c) (inventory mode `4`) |
| Confirm / clear selected / pay | [`src/kecleon_bros1.c`](../../src/kecleon_bros1.c) (`KECLEON_STORE_SELL_SELECTED_ITEMS`) |

---

## Limitations

- Confirm text is the Sell All line (“For everything I can buy…”), not a dedicated “selected items” string.
- Does not change dungeon Kecleon shops or buy flow.
