# RescueTemple mod patch packages

RescueTemple can export a **mod package** of the current project's changes so
authors can share work without shipping a ROM. Recipients open the **same**
US 1.0 `baserom.gba` (matching SHA-1) and import the package.

Menu: **File → Export Mod Package…** / **File → Import Mod Package…**

## Layout

A package is either:

- a `.rtmod` zip archive, or
- a folder with the same files (unzipped)

```
manifest.json
payloads/
  overlay-<offset>.bin
```

`offset` in payload names is eight lowercase hex digits (for example
`overlay-00000180.bin`).

## `manifest.json`

```json
{
  "formatVersion": 1,
  "kind": "rescue-temple-mod",
  "name": "My Project",
  "baseRomSha1": "9f4cfc5b5f4859d17169a485462e977c7aac2b89",
  "profileName": "PMD Red Rescue Team US 1.0",
  "runtimeConfig": [
    { "id": "always_run", "value": 1 }
  ],
  "overlays": [
    {
      "id": "overlay:0x180",
      "offset": 384,
      "size": 2,
      "payload": "payloads/overlay-00000180.bin"
    }
  ],
  "edits": [
    {
      "id": "…",
      "kind": "script.source",
      "target": "Toy",
      "description": "Assemble script",
      "values": { "mapId": "1", "source": "@station g0/s0 EVENT_TEST\n…" },
      "timestamp": "2026-08-14T00:00:00+00:00"
    }
  ]
}
```

| Field | Meaning |
| --- | --- |
| `formatVersion` | `1` for this layout. Newer RescueTemple builds reject a greater version. |
| `kind` | Must be `rescue-temple-mod`. |
| `baseRomSha1` | SHA-1 of the author's opened baserom. Import fails if the opened ROM differs. |
| `runtimeConfig` | C Patch / RuntimeConfig fields whose values are not vanilla. |
| `overlays` | Coalesced byte runs where the working ROM differs from the baserom (asset replacements, dungeon table writes, and other same-length patches). The RuntimeConfig ROM slice is omitted here when it is already listed under `runtimeConfig`. |
| `edits` | Project edits (`script.source`, `dialogue.text`, entity moves, C Patch field history, …) so the editor graph matches after import. |
| `warnings` | Optional notes from collect (for example a working ROM length mismatch). |

Payload files are raw little-endian ROM bytes for `overlays[i].size` starting at
`overlays[i].offset`. Paths must stay under the package root (`..` is rejected).

## Collect / apply

1. **Collect** diffs `WorkingRom.View` against the opened baserom, copies
   `ProjectDocument.Edits`, and records non-vanilla RuntimeConfig fields.
2. **Apply** checks SHA-1, writes overlays onto the working copy, sets C Patch
   fields, then replays `edits` onto the scene graph.

Export → import on a fresh open of the same baserom restores those edits.
Build ROM afterwards to produce a playable `.gba` copy (the source baserom is
never overwritten).
