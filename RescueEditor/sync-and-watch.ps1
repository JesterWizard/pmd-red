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
    $lines = @(
        "mon_dirs=$monCount",
        "mon_mtime=$(Get-DirMtimeUtcTicks $monSrc)",
        "sound_mtime=$(Get-DirMtimeUtcTicks (Join-Path $wslRoot 'sound'))",
        "ornament_mtime=$(Get-DirMtimeUtcTicks (Join-Path $wslRoot 'graphics\ornament'))",
        "effects_mtime=$(Get-DirMtimeUtcTicks (Join-Path $wslRoot 'data\effects'))"
    )
    foreach ($rel in @(
        "include\constants\bg_music.h",
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
    $current = Get-AssetsFingerprint
    $previous = [System.IO.File]::ReadAllText($stampPath)
    return $current -ne $previous
}

function Sync-SmallRepoFiles {
    $pairs = @(
        @{ Src = "include\constants\bg_music.h"; Dst = "include\constants\bg_music.h" },
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

    $axSrc = Join-Path $wslRoot "graphics\ax\mon"
    $axDst = Join-Path $winRoot "graphics\ax\mon"
    if (Test-Path $axSrc) {
        New-Item -ItemType Directory -Force -Path $axDst | Out-Null
        $names = @()
        1..15 | ForEach-Object { $names += "sprite_$_.png" }
        47..55 | ForEach-Object { $names += "sprite_$_.png" }
        & robocopy $axSrc $axDst @names /S /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
        if ($LASTEXITCODE -ge 8) { throw "robocopy failed for actor sprites (exit $LASTEXITCODE)" }
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
# Release DLL locks from a previous RescueTemple instance (MSB3027).
Get-Process -Name "RescueTemple" -ErrorAction SilentlyContinue | Stop-Process -Force
Start-Sleep -Milliseconds 200
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
