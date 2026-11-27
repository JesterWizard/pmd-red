"""The checks, one module per area. Importing this package registers them
(harness.REGISTRY, in this order)."""

from . import build, maps, pans, dialogue, scenes, audio, dungeon, aftermath, jukebox, opening, perf, bluff, chapter2  # noqa: F401
