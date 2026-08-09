# RescueTemple

RescueTemple (project folder: `RescueEditor`) is a cross-platform Avalonia/.NET 8
browser and exporter for the Pokémon Mystery Dungeon: Red Rescue Team
decompilation. It opens a ROM without modifying it, builds an in-memory asset
catalog, previews supported formats, and exports selected entries or whole
categories.

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
| Edit in WSL, UI on Windows | PowerShell: `RescueEditor\sync-and-watch.ps1` (mirrors to `%USERPROFILE%\Github\pmd-red-win`) |
| Everything in WSL | `./RescueEditor/dev.sh` (Linux Avalonia, software renderer) |
| Repo already on `C:\...` | PowerShell: `.\RescueEditor\dev.ps1` |

One-shot without watch:

```sh
dotnet run --project RescueEditor/src/RescueEditor.App/RescueEditor.App.csproj
```

Published Windows builds use `WinExe` (no console window).

The editor looks for `baserom.gba` in the current directory and its parents.
Use **File → Open ROM** to select another image. A non-retail ROM is allowed,
but the status bar reports when its SHA-1 differs from the documented US 1.0
baserom.

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
- Music / Sound Effects: M4A sequences named from `src/sound_names.c` (and
  `MUS_*` from `include/constants/bg_music.h` for BGM). Preview has **Player**
  and **Code** tabs. Playback uses bundled
  [agbplay](https://github.com/ipatix/agbplay) (`tools/agbplay`) for authentic
  mp2k/m4a rendering, with a pre-rendered waveform overview and piano roll.
  DirectSound waves export/play as PCM WAV when matched in the opened ROM.
  On Windows, if only the Linux `agbplay-cli` is present, RescueTemple launches
  it through WSL.
- `pksdir0` archives: generic raw entry browsing and export.

This MVP deliberately does not patch ROMs, edit decomp source, or allocate
new ROM space. Exported files are the safe hand-off point for the later editor
and reassembly workflow.
