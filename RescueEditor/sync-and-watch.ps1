# Sync RescueTemple (RescueEditor) from WSL onto the Windows filesystem, then hot-reload there.
# Windows `dotnet watch` cannot use \\wsl$\ paths (CS0006 + broken file watchers).
#
# Usage (PowerShell):
#   \\wsl$\Ubuntu-22.04\home\username\Github\pmd-red\RescueEditor\sync-and-watch.ps1
#
# Edit files in WSL/Cursor as usual. This script re-syncs on each restart (Ctrl+R).
# For true instant hot reload of every save, open the Windows copy in the editor:
#   %USERPROFILE%\Github\pmd-red-win

$ErrorActionPreference = "Stop"

$wslRoot = "\\wsl$\Ubuntu-22.04\home\username\Github\pmd-red"
$winRoot = Join-Path $env:USERPROFILE "Github\pmd-red-win"

if (-not (Test-Path $wslRoot)) {
    Write-Error "WSL repo not found at $wslRoot — update the path in this script."
}

New-Item -ItemType Directory -Force -Path $winRoot | Out-Null

Write-Host "Syncing WSL -> $winRoot ..."
$dirs = @(
    @{ Src = Join-Path $wslRoot "RescueEditor"; Dst = Join-Path $winRoot "RescueEditor" },
    @{ Src = Join-Path $wslRoot "charmap.txt"; Dst = Join-Path $winRoot "charmap.txt" },
    @{ Src = Join-Path $wslRoot "sound"; Dst = Join-Path $winRoot "sound" },
    @{ Src = Join-Path $wslRoot "include\constants\bg_music.h"; Dst = Join-Path $winRoot "include\constants\bg_music.h" },
    @{ Src = Join-Path $wslRoot "src\sound_names.c"; Dst = Join-Path $winRoot "src\sound_names.c" },
    @{ Src = Join-Path $wslRoot "data\monster\monster_data.json"; Dst = Join-Path $winRoot "data\monster\monster_data.json" }
)

foreach ($item in $dirs) {
    if (Test-Path $item.Src -PathType Container) {
        New-Item -ItemType Directory -Force -Path $item.Dst | Out-Null
        & robocopy $item.Src $item.Dst /MIR /XD bin obj .git publish /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
        if ($LASTEXITCODE -ge 8) { throw "robocopy failed for $($item.Src) (exit $LASTEXITCODE)" }
    }
    elseif (Test-Path $item.Src -PathType Leaf) {
        $dstDir = Split-Path -Parent $item.Dst
        if ($dstDir) { New-Item -ItemType Directory -Force -Path $dstDir | Out-Null }
        Copy-Item -Force $item.Src $item.Dst
    }
}

# Optional: copy baserom so Open-default works (skip if missing / huge update not needed every time)
$baseromSrc = Join-Path $wslRoot "baserom.gba"
$baseromDst = Join-Path $winRoot "baserom.gba"
if ((Test-Path $baseromSrc) -and -not (Test-Path $baseromDst)) {
    Write-Host "Copying baserom.gba once..."
    Copy-Item $baseromSrc $baseromDst
}

# Standing actor/object frames for the scene editor.
$axSrc = Join-Path $wslRoot "graphics\ax\mon"
$axDst = Join-Path $winRoot "graphics\ax\mon"
if (Test-Path $axSrc) {
    Write-Host "Syncing actor sprite_*.png frames..."
    New-Item -ItemType Directory -Force -Path $axDst | Out-Null
    & robocopy $axSrc $axDst sprite_1.png sprite_2.png sprite_3.png sprite_4.png sprite_5.png sprite_6.png sprite_7.png sprite_8.png sprite_9.png sprite_10.png sprite_11.png sprite_12.png sprite_13.png sprite_14.png sprite_15.png sprite_16.png /S /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
    if ($LASTEXITCODE -ge 8) { throw "robocopy failed for actor sprites (exit $LASTEXITCODE)" }
}

$ornSrc = Join-Path $wslRoot "graphics\ornament"
$ornDst = Join-Path $winRoot "graphics\ornament"
if (Test-Path $ornSrc) {
    Write-Host "Syncing object sprite_1.png frames..."
    New-Item -ItemType Directory -Force -Path $ornDst | Out-Null
    & robocopy $ornSrc $ornDst sprite_1.png /S /NFL /NDL /NJH /NJS /nc /ns /np | Out-Null
    if ($LASTEXITCODE -ge 8) { throw "robocopy failed for object sprites (exit $LASTEXITCODE)" }
}

$fontSrc = Join-Path $wslRoot "graphics\custom\pmd2_font_sheet.png"
$fontDstDir = Join-Path $winRoot "graphics\custom"
if (Test-Path $fontSrc) {
    Write-Host "Syncing pmd2 font sheet..."
    New-Item -ItemType Directory -Force -Path $fontDstDir | Out-Null
    Copy-Item $fontSrc (Join-Path $fontDstDir "pmd2_font_sheet.png") -Force
}

$fxSrc = Join-Path $wslRoot "data\effects"
$fxDst = Join-Path $winRoot "data\effects"
if (Test-Path $fxSrc) {
    Write-Host "Syncing emotion effect overlays..."
    New-Item -ItemType Directory -Force -Path $fxDst | Out-Null
    foreach ($id in @("088","089","091","092","093","094")) {
        $src = Join-Path $fxSrc "efob$id.png"
        if (Test-Path $src) { Copy-Item $src (Join-Path $fxDst "efob$id.png") -Force }
    }
}

$project = Join-Path $winRoot "RescueEditor\src\RescueEditor.App\RescueEditor.App.csproj"
# Release DLL locks from a previous RescueTemple instance (MSB3027).
Get-Process -Name "RescueTemple" -ErrorAction SilentlyContinue | Stop-Process -Force
Start-Sleep -Milliseconds 400
Write-Host "Starting dotnet watch on Windows path..."
Write-Host "Project: $project"
Set-Location (Join-Path $winRoot "RescueEditor")
$env:DOTNET_WATCH_RESTART_ON_RUDE_EDIT = "1"
dotnet watch run --project $project
