"""The checks, one module per area. Importing this package registers them
(harness.REGISTRY, in this order)."""

from . import build, pans, dialogue, scenes, audio, dungeon, aftermath, jukebox, opening  # noqa: F401
