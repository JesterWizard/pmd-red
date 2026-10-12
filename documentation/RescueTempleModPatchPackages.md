# RescueTemple mod patch packages

RescueTemple can export a **mod package** of the current project's changes so
authors can share work without shipping a ROM. Recipients open the **same**
US 1.0 `baserom.gba` (matching SHA-1) and import the package.

Menu: **Mods → Export Project as Mod…** / **Mods → Add Mod…** (switchable) / **Mods → Merge Mod into Project…** (permanent)

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
| `warnings` | Optional notes from collect (for example a working ROM length mismatch), or the mods it was built on ("Made on top of mods: …"). |

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

## Mod stack (projects)

A project can also reference mods instead of copying them. The `.rtproj` file
stores a `mods` list in load order, with one entry per mod:

- `path`: where the `.rtmod` file (or mod folder) lives. The file is not copied
  into the project. If it is moved or deleted, the mod shows as missing.
- `name`: the mod's display name.
- `enabled`: whether the mod is applied.

```json
"mods": [
  { "path": "C:\\mods\\faster-text.rtmod", "name": "Faster Text", "enabled": true }
],
"romPatches": [
  { "offset": 4718592, "data": "AQID" }
]
```

Apply order, where later layers win:

1. The baserom.
2. Enabled mods, top to bottom. A lower mod wins where two overlap. Mod overlays
   are a separate layer from the user's own byte edits.
3. The project's own edits (scene, dialogue, script and C Patch edits).
4. `romPatches`, the user's direct ROM byte edits (Dungeons, Data Tables, graphics,
   and same-size sound/graphics replacements).

Conflicts are shown in **Manage Mods**, marked `⚠ Overlaps with …`. A conflict is
reported when two enabled mods change the same ROM bytes, the same C Patch setting
with different values, or the same edit target.

`romPatches` entries have two fields:

- `offset`: the ROM byte offset where the bytes are written.
- `data`: the replacement bytes, base64-encoded.

An edit that resizes ROM data cannot be stored in `romPatches`. This covers a sound
replacement that changes size, or a data-table insert. On save, RescueTemple writes
a note to Output and asks before a mod reload. Use **Build ROM** to keep those edits.

When mods are enabled, **Export Project as Mod…** exports only your own changes.
ROM bytes are compared against the state right after the mods load, and C Patch
values are compared against the mods' values. The package's `warnings` lists the
mods it was built on ("Made on top of mods: …"), so recipients know which mods to
load first.
