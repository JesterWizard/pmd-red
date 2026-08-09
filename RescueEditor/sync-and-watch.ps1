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
    @{ Src = Join-Path $wslRoot "src\sound_names.c"; Dst = Join-Path $winRoot "src\sound_names.c" }
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

$project = Join-Path $winRoot "RescueEditor\src\RescueEditor.App\RescueEditor.App.csproj"
Write-Host "Starting dotnet watch on Windows path..."
Write-Host "Project: $project"
Set-Location (Join-Path $winRoot "RescueEditor")
dotnet watch run --project $project
