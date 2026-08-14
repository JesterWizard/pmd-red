# RescueTemple

RescueTemple (project folder: `RescueEditor`) is a cross-platform Avalonia/.NET 8
browser and exporter for the Pokémon Mystery Dungeon: Red Rescue Team
decompilation. This editor opens a ROM without modifying it, builds an in-memory asset
catalog and scene graph, previews supported formats, exports selected entries,
and can save a project / build an edited ROM **copy**. The source baserom is
never overwritten.

## Requirements

.NET SDK **8.0+** (Avalonia 12). If `dotnet --version` reports 6.x, either install
.NET 8 or prefix commands with the SDK path, e.g.
`PATH=/tmp/dotnet8:$PATH`.

## Run from the repository

### Hot reload while editing (recommended)

**Do not** run Windows `dotnet watch` against a `\\wsl$\...` path. It fails with
`CS0006` and broken file watchers.

| Setup | Command |
| --- | --- |
| Edit in WSL, UI on Windows | `./RescueEditor/dev.sh` (mirrors to `%USERPROFILE%\Github\pmd-red-win`, Windows hot reload) |
| Same from PowerShell | `RescueEditor\sync-and-watch.ps1` |
| Everything in WSL | `./RescueEditor/dev.sh --linux` (Avalonia software renderer) |
| Repo already on `C:\...` | PowerShell: `.\RescueEditor\dev.ps1` |

Heavy assets (actor sprites / sound) sync once, then skip on later launches. Pass
`--force-assets` / `-ForceAssets` after pulling large graphics or sound changes.

One-shot without watch:

```sh
dotnet run --project RescueEditor/src/RescueEditor.App/RescueEditor.App.csproj
```

Published Windows builds use `WinExe` (no console window).

The editor looks for `baserom.gba` in the current directory and its parents.
Use **File → Open ROM** to select another image. Detection uses SHA-1 + size
(`RomProfile`). Supported dumps:

| Profile | SHA-1 | Writes / scene graph |
| --- | --- | --- |
| PMD Red Rescue Team US 1.0 (`B24E`) | `9f4cfc5b5f4859d17169a485462e977c7aac2b89` | Yes |
| PMD Red Rescue Team EU (`B24P`) | `afee3b060dd5fd4a68afb1b003456aef3a2af073` | Browse-only until offsets are verified |
| PMD Red Rescue Team JP (`B24J`) | `4bc9370edebb3da5bdf768eeced689fda3f8b77b` | Browse-only until offsets are verified |
| PMD Blue Rescue Team US (`APHE`) | `503edef4fe6088bca00616efcac3b13da90cd105` | Recognized; layout not mapped yet |

An unmatched image still opens for generic browsing; the catalog reports that
its SHA-1 is not a supported profile.

## Build tests

```sh
dotnet test RescueEditor/tests/RescueEditor.Core.Tests/RescueEditor.Core.Tests.csproj
dotnet build RescueEditor/RescueEditor.sln
```

## Publish a self-contained executable

The first argument selects the runtime identifier:

```sh
./RescueEditor/publish.sh win-x64
./RescueEditor/publish.sh linux-x64
./RescueEditor/publish.sh osx-x64
```

The published application is placed under
`RescueEditor/publish/<rid>/` as a single executable.

## UI notes

- Use **List** / **Grid** in the toolbar (or **View** menu) to switch the
  middle browser pane. Grid mode shows thumbnail cards for portraits,
  backgrounds, effects, and ground maps.
- Dialogue entries are listed by ID (`D0001`…); the right pane shows the
  decoded text with macros such as `{COLOR GREEN}`, `{POKEMON_0}`, and
  `{WAIT_PRESS}`.

## Current asset coverage

- Portraits: AT4PX/AT4PN-style decompression and 40×40 portrait rendering.
- Title backgrounds: title tilemap composition and PNG export.
- Effects: SIRO background/object tile previews.
- Ground maps: GMLZ, BPL, BPC, and BMA decoding with composed PNG previews.
- Dialogue and scripts: ROM scanning for `MSG_*` command pointers, PMD
  charmap decoding (including text macros), and read-only `ScriptCommand`
  disassembly.
- Scenes: authoritative `gMapScriptTable` → `GroundScriptHeader` graph with
  groups/sectors, lives/objects/effects/events, stations, and links. The
  Scenes category opens a workspace that composites the ground map with actor
  overlays, script timeline preview, undoable position edits, project save,
  and Build ROM (writes a copy; never mutates the source baserom).
- Music / Sound Effects: M4A sequences named from `src/sound_names.c` (and
  `MUS_*` from `include/constants/bg_music.h` for BGM). Preview has **Player**
  and **Code** tabs. Playback uses bundled
  [agbplay](https://github.com/ipatix/agbplay) (`tools/agbplay`):
  `agbplay-stream --server` keeps the ROM loaded so clicks stream audio within
  about a second (often much faster after the first warm). A background warmer
  fills the WAV cache for instant later plays. On Windows, Linux tools launch via WSL.
- `pksdir0` archives: generic raw entry browsing and export.

This MVP keeps the source ROM read-only. Exported files, **mod packages**, and
Build ROM copies are the safe hand-off points for later reassembly workflows.

## Mod packages

**File → Export Mod Package…** writes a `.rtmod` archive (manifest + changed
ROM overlays + RuntimeConfig / C Patches + project edits). Recipients open the
same baserom and use **File → Import Mod Package…**. Format details:
[documentation/RescueTempleModPatchPackages.md](../documentation/RescueTempleModPatchPackages.md).
