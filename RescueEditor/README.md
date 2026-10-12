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
| PMD Red Rescue Team EU (`B24P`) | `afee3b060dd5fd4a68afb1b003456aef3a2af073` | Browse-only; anchors not yet probed on a retail dump |
| PMD Red Rescue Team JP (`B24J`) | `4bc9370edebb3da5bdf768eeced689fda3f8b77b` | Browse-only; anchors not yet probed on a retail dump |
| PMD Blue Rescue Team US (`APHE`) | `503edef4fe6088bca00616efcac3b13da90cd105` | Recognized; layout not mapped yet |

An unmatched image still opens for generic browsing; the catalog reports that
its SHA-1 is not a supported profile.

### Verifying a new profile (EU / JP)

```sh
dotnet run --project RescueEditor/src/RescueEditor.Bake -- probe-layout path/to/rom.gba
```

The probe locates `gMapFilesTable`, `gGroundMapConversionTable`, `gMapScriptTable`,
`gGroundLivesTypeData`, and `gFunctionScriptTable` by structure (no US offsets),
parses the scene graph read-only, and prints `Validation: sane` plus a RomProfile
snippet only when there are no errors. To turn that into a profile:

1. Paste the snippet into the `Eu10` or `Jp10` definition in `RomProfile.cs`.
2. Set `LayoutVerified = true` once the scene graph checks out.
3. Set `AllowWrites = true` only after checking sample scenes in the editor.
4. Add a test to `RomProfileTests.cs`.

C Patches and RuntimeConfig stay US-only. `Us10` lists 230 maps and 246 map files
because the modern hack build adds Spinda Cafe; a retail US probe reports 229 / 245 / 407.

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

## Playtest in an emulator

After **File → Build ROM…**, press **F5** (or **Play → Play Last Build**) to
open that build in mGBA.

- The **Play** menu holds **Play Scene**, **Play Last Build**, **Set Emulator…**,
  **Use Auto-Detected mGBA** and **Restart After Build**. There is no separate
  **Scene** menu.
- RescueTemple launches a copy next to the build, `<name>.playtest.gba`, so a
  running emulator never locks the Build ROM output. The copy's save file is
  `<name>.playtest.sav`. The first launch seeds it from `<name>.sav` if one exists;
  after that it keeps its own progress.
- **Play → Restart After Build** (on by default): when an emulator that
  RescueTemple started is still open, a successful Build ROM closes it, refreshes
  the copy, and relaunches it. Pressing F5 again does the same by hand. mGBA has
  no command to reload a ROM from outside, so "hot reload" is a restart. The
  emulator is asked to close first so it can flush its save; it is force-closed
  after 3 seconds.
- **Play → Set Emulator…** picks any emulator executable; **Use
  Auto-Detected mGBA** goes back to searching the default install locations:
  - Windows: `%ProgramFiles%\mGBA\mGBA.exe`, `%ProgramFiles(x86)%\mGBA\mGBA.exe`,
    `%LOCALAPPDATA%\Programs\mGBA\mGBA.exe`
  - macOS: `/Applications/mGBA.app`
  - Linux: `mgba-qt` in `/usr/bin`, `/usr/local/bin`, `/usr/games`, or the mGBA
    Flatpak
- Settings are kept in the RescueTemple session file with the recent ROMs list.

Failure messages:

| Situation | What RescueTemple says |
|-----------|------------------------|
| No ROM built yet | "No ROM has been built yet. Use File → Build ROM… first." |
| Built ROM was moved or deleted | "The last built ROM is missing: …" |
| No emulator configured or found | "No emulator found. Install mGBA (https://mgba.io/downloads.html) …" plus the paths it checked |
| Configured emulator was removed | "The emulator set in RescueTemple was not found: …" |
| Playtest copy locked (an emulator RescueTemple did not start has it open) | "Could not update the playtest copy: … Close the emulator and try again." |

### Windows and WSL

- `./RescueEditor/dev.sh` runs RescueTemple as a Windows program, so it launches
  the **Windows** mGBA (`mGBA.exe`). Install mGBA on Windows, not inside WSL.
- Builds saved under `\\wsl$\...` paths work; mGBA opens them directly. Saving
  the build on a Windows drive (for example `C:\Users\<you>\pmd-builds\`) is
  faster to copy.
- If RescueTemple runs natively inside WSL (Linux `dotnet` with WSLg), it looks
  for Linux mGBA instead: `sudo apt install mgba-qt`.

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

## Editing tips

- **Ctrl+Z** / **Ctrl+Y** undo and redo direct ROM edits (Dungeons, Data Tables,
  graphics, same-size sound replacements, ground map imports) like scene edits.
  Several byte ranges written by one action are one undo step. The **Edit** menu
  shows what Undo and Redo will do.
- An edit that resizes ROM data (a size-changing sound replacement or a data-table
  insert) cannot be undone. Older ROM edits can't be undone after one.
- Saving marks the project clean: the `*` in the title clears, and undoing back to
  the saved state clears it too.
- **Merge Mod into Project…** clears undo history.
- Drop a `.gba` or `.bin` to open a ROM, or a `.rtproj` / `.rescue` to open a
  project. Drop `.rtmod` files, a mod folder, or its `manifest.json` to add mods.
  Dropping onto the **Manage Mods** window adds mods to its list. If one drop mixes
  kinds, a project wins over a ROM, and a ROM wins over mods.
- The welcome screen lists **Recent Projects** as well as **Recent ROMs**, with a
  drag-and-drop tip.
- **Build ROM** and **Merge Mod into Project…** warnings go to the **Output** panel,
  which opens automatically. Errors still pop up.
- The project explorer builds rows only when a branch is expanded, and its filter
  applies 200 ms after you stop typing.

## Mods

RescueTemple can layer mods over the baserom from the top-level **Mods** menu. A
mod is a `.rtmod` file or a mod folder with a `manifest.json`. The project
references each mod and switches it on or off. Your own edits are kept
separately and always win.

### Mod menu

- **Mods → Manage Mods…** (Ctrl+Shift+M) opens the mod list.
- **Mods → Add Mod…** adds a `.rtmod` file or a mod folder's `manifest.json`.
- One checkbox item per mod in the project. Click it to turn that mod on or off.
- **Mods → Export Project as Mod…** packages only your own changes. With mods
  enabled, ROM bytes are compared against the state right after the mods load, and
  C Patch values against the mods' values. The package's `warnings` lists the mods
  it was built on ("Made on top of mods: …"), so recipients know which mods to load
  first.
- **Mods → Merge Mod into Project…** copies a mod's changes into the project
  permanently, with no toggle afterwards. Prefer **Add Mod…** to keep it switchable.
- A `Mods: N` badge (N enabled mods, or `Mods: enabled/total` when some are off) at
  the right of the breadcrumb bar shows when the project has mods. Click it to open
  Manage Mods.

The last two items replace the old **File → Export Mod Package…** and
**File → Import Mod Package…**.

### Manage Mods window

- Lists mods in load order, with a checkbox per mod.
- Each row shows its edit, ROM patch and C Patch setting counts.
- Errors show in red when a file is missing or unreadable, or was made for a
  different baserom. Those mods are added disabled.
- **Locate…** is enabled when the selected mod's file is missing. Use it to point
  the mod at the moved file.
- **⚠ Overlaps with …** appears when two enabled mods change the same ROM bytes,
  the same C Patch setting with different values, or the same edit target.
- The details panel for the selected mod shows its file, target profile, package
  warnings and conflicts.
- **Add Mod…**, **Remove**, **Move Up** / **Move Down** (Alt+Up / Alt+Down),
  **Enable All** and **Disable All**. The **Delete** key also removes the selected mod.
  Removing a mod only takes it out of the project; the `.rtmod` file stays on disk.
- **Apply** is enabled only after a change. **Escape** or **Cancel** discards changes.

### Load order and saving

- Load order: the baserom, then enabled mods from top to bottom (a lower mod wins
  where two overlap), then the project's own edits, which always win.
- Switching mods is faster: RescueTemple reuses the existing ROM index and only
  re-reads scenes (about 2 s instead of a full re-index). It falls back to a full
  re-index when that is not possible, for example after installing C Patches. The
  Output line shows how long it took. Undo history is still cleared when mods
  change, and unsaved edits are kept.
- Mods are references, not copies. The project file (`.rtproj`) stores each mod's
  path and on/off state in a `mods` list. The `.rtmod` file is not copied. Moving
  or deleting the file shows the mod as missing.
- The project also saves direct ROM byte edits (Dungeons, Data Tables, graphics,
  and same-size sound/graphics replacements) in a `romPatches` list, so they
  survive reopening. Previously only scene, dialogue, script and C Patch edits
  were saved.
- Exception: an edit that resizes ROM data (a sound replacement that changes size,
  or a data-table insert) cannot be stored in the project. RescueTemple says so in
  Output on save and asks before a mod reload. Use **Build ROM** to keep those.
- **File → Save Project As…** (Ctrl+Shift+S). **Save Project** is Ctrl+S.

Format details: [documentation/RescueTempleModPatchPackages.md](../documentation/RescueTempleModPatchPackages.md).
