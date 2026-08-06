# GBA techniques

Reusable engine patterns for this decomp / hack. Prefer linking feature docs here instead of re-explaining the same machinery.

| Technique | Summary |
|-----------|---------|
| [Dynamic tile loading](DynamicTileLoading.md) | VRAM slot cache for ground maps with more unique tiles than the 10-bit / ~1024-slot BG budget; ROM-backed source tiles + VBlank-safe uploads |
