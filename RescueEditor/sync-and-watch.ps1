# Sync RescueTemple (RescueEditor) from WSL onto the Windows filesystem, then hot-reload there.
# Windows `dotnet watch` cannot use \\wsl$\ paths (CS0006 + broken file watchers).
#
# Usage (PowerShell):
#   \\wsl$\Ubuntu-22.04\home\username\Github\pmd-red\RescueEditor\sync-and-watch.ps1
#   ...\sync-and-watch.ps1 -ForceAssets
#
# Heavy assets (actor sprites, sound) sync once then skip until the stamp mismatches
# or -ForceAssets is passed. Re-run is then mostly a fast editor-source mirror.

param(
    [switch]$ForceAssets
)

$ErrorActionPreference = "Stop"

$wslRoot = "\\wsl$\Ubuntu-22.04\home\username\Github\pmd-red"
$winRoot = Join-Path $env:USERPROFILE "Github\pmd-red-win"
# Separate from dev.sh's Linux stamp (different mtime units / path forms).
$stampPath = Join-Path $winRoot ".rescue-temple-assets.win.stamp"

if (-not (Test-Path $wslRoot)) {
    Write-Error "WSL repo not found at $wslRoot — update the path in this script."
}

New-Item -ItemType Directory -Force -Path $winRoot | Out-Null

function Get-DirMtimeUtcTicks([string]$path) {
    if (-not (Test-Path $path)) { return 0 }
    return (Get-Item $path).LastWriteTimeUtc.Ticks
}

function Get-AssetsFingerprint {
    $monSrc = Join-Path $wslRoot "graphics\ax\mon"
    $monCount = 0
    if (Test-Path $monSrc) {
        $monCount = @(Get-ChildItem -Path $monSrc -Directory -ErrorAction SilentlyContinue).Count
    }
    $axHdr = Join-Path $wslRoot "src\data\ax"
    $axHdrCount = 0
    if (Test-Path $axHdr) {
        $axHdrCount = @(Get-ChildItem -Path $axHdr -Filter "*.h" -File -ErrorAction SilentlyContinue).Count
    }
    $lines = @(
        "mon_dirs=$monCount",
        "mon_mtime=$(Get-DirMtimeUtcTicks $monSrc)",
        "ax_headers=$axHdrCount",
        "ax_hdr_mtime=$(Get-DirMtimeUtcTicks $axHdr)",
        "anim_lz_mtime=$(Get-DirMtimeUtcTicks (Join-Path $wslRoot 'graphics\ax\anim_lz'))",
        "sound_mtime=$(Get-DirMtimeUtcTicks (Join-Path $wslRoot 'sound'))",
        "ornament_mtime=$(Get-DirMtimeUtcTicks (Join-Path $wslRoot 'graphics\ornament'))",
        "effects_mtime=$(Get-DirMtimeUtcTicks (Join-Path $wslRoot 'data\effects'))"
    )
    foreach ($rel in @(
        "include\constants\bg_music.h",
        "include\constants\emotions.h",
        "include\constants\ground_map.h",
        "src\sound_names.c",
        "charmap.txt",
        "data\monster\monster_data.json",
        "graphics\custom\pmd2_font_sheet.png"
    )) {
        $p = Join-Path $wslRoot $rel
        if (Test-Path $p) {
            $lines += "file $((Get-Item $p).LastWriteTimeUtc.Ticks) $rel"
        }
        else {
            $lines += "file missing $rel"
        }
    }
    return ($lines -join "`n") + "`n"
}

function Test-AssetsNeedSync {
    if ($ForceAssets) { return $true }
    if (-not (Test-Path $stampPath)) { return $true }
    $monDst = Join-Path $winRoot "graphics\ax\mon"
    $destCount = 0
    if (Test-Path $monDst) {
        $destCount = @(Get-ChildItem -Path $monDst -Directory -ErrorAction SilentlyContinue).Count
    }
    if ($destCount -lt 100) { return $true }
    # Boss multi-OAM assembly needs AX pose headers + 4bpp tiles (not just PNGs).
    $axHdr = Join-Path $winRoot "src\data\ax\moltres.h"
    if (-not (Test-Path $axHdr)) { return $true }
    $lzSample = Join-Path $winRoot "graphics\ax\mon\moltres\sprite_1.4bpp.lz"
    if (-not (Test-Path $lzSample)) { return $true }
    $current = Get-AssetsFingerprint
    $previous = [System.IO.File]::ReadAllText($stampPath)
    return $current -ne $previous
}

function Sync-SmallRepoFiles {
    $pairs = @(
        @{ Src = "include\constants\bg_music.h"; Dst = "include\constants\bg_music.h" },
        @{ Src = "include\constants\emotions.h"; Dst = "include\constants\emotions.h" },
        @{ Src = "include\constants\ground_map.h"; Dst = "include\constants\ground_map.h" },
        @{ Src = "src\sound_names.c"; Dst = "src\sound_names.c" },
        @{ Src = "charmap.txt"; Dst = "charmap.txt" },
        @{ Src = "data\monster\monster_data.json"; Dst = "data\monster\monster_data.json" },
        @{ Src = "graphics\custom\pmd2_font_sheet.png"; Dst = "graphics\custom\pmd2_font_sheet.png" }
    )
    foreach ($item in $pairs) {
        $src = Join-Path $wslRoot $item.Src
        if (-not (Test-Path $src)) { continue }
        $dst = Join-Path $winRoot $item.Dst
        $dstDir = Split-Path -Parent $dst
        New-Item -ItemType Directory -Force -Path $dstDir | Out-Null
        Copy-Item -Force $src $dst
    }
    $fxSrc = Join-Path $wslRoot "data\effects"
    $fxDst = Join-Path $winRoot "data\effects"
    if (Test-Path $fxSrc) {
        New-Item -ItemType Directory -Force -Path $fxDst | Out-Null
        foreach ($id in @("088", "089", "091", "092", "093", "094")) {
            $src = Join-Path $fxSrc "efob$id.png"
            if (Test-Path $src) { Copy-Item $src (Join-Path $fxDst "efob$id.png") -Force }
        }
    }
}

function Sync-HeavyRepoAssets {
    Write-Host "Syncing sound + actor sprites (one-time / when changed)..."
    $soundSrc = Join-Path $wslRoot "sound"
    $soundDst = Join-Path $winRoot "sound"
    if (Test-Path $soundSrc) {
        New-Item -ItemType Directory -Force -Path $soundDst | Out-Null
        & robocopy $soundSrc $soundDst /MIR /XD bin obj .git publish /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
        if ($LASTEXITCODE -ge 8) { throw "robocopy failed for sound (exit $LASTEXITCODE)" }
    }

    Sync-SmallRepoFiles

    # AX pose headers — required to assemble multi-OAM / padded boss sprites.
    $axHdrSrc = Join-Path $wslRoot "src\data\ax"
    $axHdrDst = Join-Path $winRoot "src\data\ax"
    if (Test-Path $axHdrSrc) {
        Write-Host "Syncing AX pose headers..."
        New-Item -ItemType Directory -Force -Path $axHdrDst | Out-Null
        & robocopy $axHdrSrc $axHdrDst *.h /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
        if ($LASTEXITCODE -ge 8) { throw "robocopy failed for ax headers (exit $LASTEXITCODE)" }
    }

    # Full actor sprite dumps: PNGs (incl. compound sprite_N_k) + compressed tiles.
    # PNG-only idle scraps are not enough for bosses (Moltres wing poses, Ho-Oh 64x64).
    $axSrc = Join-Path $wslRoot "graphics\ax\mon"
    $axDst = Join-Path $winRoot "graphics\ax\mon"
    if (Test-Path $axSrc) {
        Write-Host "Syncing actor sprite PNGs + 4bpp.lz..."
        New-Item -ItemType Directory -Force -Path $axDst | Out-Null
        & robocopy $axSrc $axDst *.png *.4bpp.lz /S /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
        if ($LASTEXITCODE -ge 8) { throw "robocopy failed for actor sprites (exit $LASTEXITCODE)" }
    }

    # AX animation sequences (SELECT_ANIMATION → wing flap, etc.).
    $animSrc = Join-Path $wslRoot "graphics\ax\anim_lz"
    $animDst = Join-Path $winRoot "graphics\ax\anim_lz"
    if (Test-Path $animSrc) {
        Write-Host "Syncing AX anim_lz..."
        New-Item -ItemType Directory -Force -Path $animDst | Out-Null
        & robocopy $animSrc $animDst /S /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
        if ($LASTEXITCODE -ge 8) { throw "robocopy failed for anim_lz (exit $LASTEXITCODE)" }
    }

    $ornSrc = Join-Path $wslRoot "graphics\ornament"
    $ornDst = Join-Path $winRoot "graphics\ornament"
    if (Test-Path $ornSrc) {
        New-Item -ItemType Directory -Force -Path $ornDst | Out-Null
        & robocopy $ornSrc $ornDst sprite_1.png /S /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
        if ($LASTEXITCODE -ge 8) { throw "robocopy failed for object sprites (exit $LASTEXITCODE)" }
    }

    [System.IO.File]::WriteAllText($stampPath, (Get-AssetsFingerprint))
}

$sw = [System.Diagnostics.Stopwatch]::StartNew()
Write-Host "Syncing editor sources WSL -> $winRoot ..."
$editorSrc = Join-Path $wslRoot "RescueEditor"
$editorDst = Join-Path $winRoot "RescueEditor"
New-Item -ItemType Directory -Force -Path $editorDst | Out-Null
& robocopy $editorSrc $editorDst /MIR /XD bin obj .git publish /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
if ($LASTEXITCODE -ge 8) { throw "robocopy failed for RescueEditor (exit $LASTEXITCODE)" }

if (Test-AssetsNeedSync) {
    Sync-HeavyRepoAssets
}
else {
    Write-Host "Skipping heavy asset sync (stamp matches; pass -ForceAssets to refresh)."
    Sync-SmallRepoFiles
}

# Optional: copy baserom so Open-default works (skip if missing / huge update not needed every time)
$baseromSrc = Join-Path $wslRoot "baserom.gba"
$baseromDst = Join-Path $winRoot "baserom.gba"
if ((Test-Path $baseromSrc) -and -not (Test-Path $baseromDst)) {
    Write-Host "Copying baserom.gba once..."
    Copy-Item $baseromSrc $baseromDst
}

$sw.Stop()
Write-Host ("Mirror sync done in {0:N1}s" -f $sw.Elapsed.TotalSeconds)

$project = Join-Path $winRoot "RescueEditor\src\RescueEditor.App\RescueEditor.App.csproj"
# One RescueTemple: stop leftover watches for this mirror, then the editor exe.
& (Join-Path $PSScriptRoot "stop-editor.ps1")
Start-Sleep -Milliseconds 300
Write-Host "Starting dotnet watch on Windows path..."
Write-Host "Project: $project"
Set-Location (Join-Path $winRoot "RescueEditor")
$env:DOTNET_WATCH_RESTART_ON_RUDE_EDIT = "1"
$watchArgs = @("watch", "run", "--project", $project)
$assetsJson = Join-Path $winRoot "RescueEditor\src\RescueEditor.App\obj\project.assets.json"
if (Test-Path $assetsJson) {
    $watchArgs += "--no-restore"
}
dotnet @watchArgs
