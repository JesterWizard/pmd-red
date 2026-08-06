# Dynamic Tile Loading (Ground BG Streamer)

---

## Index

- [Problem](#problem)
- [Idea](#idea)
- [Data flow](#data-flow)
- [Frame loop](#frame-loop)
- [Pitfalls (do not skip)](#pitfalls-do-not-skip)
- [When to reuse](#when-to-reuse)
- [Code map](#code-map)
- [Reference use](#reference-use)

---

## Problem

GBA background tilemaps use a **10-bit tile index** (slots `0..1023` in a charblock). Rescue Team ground maps expand chunk tilemaps into those slots via `CopyBpcTilesToVram`.

If a map has **more unique 8×8 tiles than available VRAM slots** (`unk6`, typically `0x400` for dual-layer town maps), you cannot preload the whole set. Downscaling art works but destroys pixel fidelity. Dumping a huge decompressed BPC onto the **main heap** (~147KB) next to GroundBg scratch/tilemaps often **OOM → `FATAL_ERROR` → black screen**.

---

## Idea

Keep the **full source tile set** addressable (prefer **ROM**, not heap). Treat VRAM as a **cache**:

1. Intermediate maps (`tileMappings` / CPU `bgTilemaps`) store **source tile IDs** in bits `0..11` (palette in `12..15`) — wider than hardware.
2. Each camera move that changes the visible tile window: expand chunks → **remap** source IDs → VRAM slot IDs.
3. Upload only the **missed** tile gfx into free/evicted slots.
4. Hardware BG entries always see **10-bit slots**; scrolling within a tile only updates BG offsets.

```
ROM/EWRAM source tiles (N can be > 1024)
        │
        ▼
  chunk expand ──► CPU tilemap (source IDs)
        │
        ▼
  Remap / EnsureTile ──► slot cache (≤ unk6)
        │
        ▼  (after VBlank, with tilemap DMA)
  VRAM charblock @ 0x06008000
```

---

## Data flow

| Stage | What lives where |
|-------|------------------|
| BPC tiles | Prefer **uncompressed ROM** (`INCBIN` raw `.bpc`) so `OpenGroundFileData` returns a stable pointer — no ~N×32 heap copy. |
| Chunk defs | Loaded once into `tileMappings` (source IDs + pal). |
| Visible window | `CallMapTilemapRenderFunc` writes **source** IDs into `gBgTilemaps[]`. |
| Slot cache | `sSourceToSlot[]` / `sSlotToSource[]` + free-bit set + clock stamps. |
| Hardware | After remap: tilemap entries are `slot \| (pal << 12)`; gfx in VRAM slots. |

Install paths:

- `GroundBgTileStream_InstallRom` — ROM pointer (café).
- `GroundBgTileStream_InstallOwned` — steal heap LZ buffer (avoid a second copy).
- `GroundBgTileStream_Install` — alloc + copy (last resort).

Activation: `layerSpecs->numTiles > groundBg->unk52C.unk6`.

---

## Frame loop

Hooked from `sub_80A4764` (ground BG update) and `DoScheduledMemCopies`:

1. **Update camera** (`tilePos` / `chunkPos` / BG scroll regs).
2. **`NeedsRebuild`?** Same `tilePos` as last remap → **skip** clear/render/remap and **skip** tilemap DMA (`unk52A`). Only refresh BG offsets (cheap sub-tile scroll).
3. On rebuild: clear CPU tilemaps → render source IDs → `RemapVisibleTilemaps` (assign slots, **queue** uploads — no VRAM writes yet).
4. After `WaitForNextFrame` / in **`DoScheduledMemCopies`**: `FlushUploads` **then** BG tilemap DMA so gfx and map commit together in VBlank.

Eviction: free bits first; else clock-hand on slots **not** stamped for the current rebuild and **not** `sOnScreenClock` (still referenced by the displayed map).

---

## Pitfalls (do not skip)

1. **Heap OOM** — Do not keep a decompressed ~60KB+ BPC on the heap while GroundBg already holds scratch + mappings. Prefer ROM tiles or steal-one-buffer.
2. **Mid-frame VRAM uploads** — Writing charblocks while the old tilemap is still displayed causes sparkle / wrong tiles. Queue uploads; flush with tilemap DMA after VBlank.
3. **Evicting on-screen slots** — Never overwrite gfx for slots still in the displayed tilemap until the new map is committed (`sOnScreenClock`).
4. **Remap without clear** — Remap mutates CPU tilemaps in place (source → slot). Next rebuild must clear (or rewrite every cell) before render, or stale slot IDs are treated as source IDs.
5. **Check rebuild after camera update** — `NeedsRebuild` must see **this** frame’s `tilePos`, not last frame’s.
6. **LZ + scratch** — Oversized GMLZ BPC won’t fit `unkE×256` scratch; free scratch before decompress or use ROM/raw.

---

## When to reuse

Good fit when:

- Unique tiles **> ~1024** but **visible unique tiles ≪ 1024** (camera windows a large map).
- Art must stay **native resolution** / high tile variety (indoors, large overworlds, detailed custom maps).
- You can keep source gfx in **ROM** (or a single stolen buffer).

Poor fit when:

- A single screen needs **more unique tiles than VRAM slots** (no amount of streaming helps).
- You need random access into **LZ-only** tile data without a decompressed backing store.

---

## Code map

| Piece | Path |
|-------|------|
| Streamer | [`src/ground_bg_tile_stream.c`](../../src/ground_bg_tile_stream.c), [`include/ground_bg_tile_stream.h`](../../include/ground_bg_tile_stream.h) |
| Load / steal / ROM | [`src/ground_bg.c`](../../src/ground_bg.c) (`sub_80A2FBC`), [`src/ground_assets.c`](../../src/ground_assets.c) |
| VBlank flush + tilemap DMA | [`src/graphics_memory.c`](../../src/graphics_memory.c) (`DoScheduledMemCopies`) |
| Map→BPC tool | [`tools/convert_ground_map_png.py`](../../tools/convert_ground_map_png.py) |
| Skip LZ for streamed BPC | [`compress_ground_assets.py`](../../compress_ground_assets.py) (`T01P08c.bpc` excluded), raw `INCBIN` in map file tables |

---

## Reference use

**Spinda’s Café** indoor map (`T01P08*`, ~1800 tiles, 520×400 source): see [`documentation/Features/SpindaCafe.md`](../Features/SpindaCafe.md). Dual-layer (`unk0 = 6`); BPC shipped uncompressed in ROM for streaming.
