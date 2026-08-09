# Prefer sync-and-watch.ps1 — Windows cannot hot-reload from \\wsl$\ paths.
$ErrorActionPreference = "Stop"
$here = $PSScriptRoot

if ($here -like "\\wsl$*" -or $here -like "\\wsl.localhost\*") {
    Write-Host @"
This folder is on the WSL filesystem ($here).

Windows 'dotnet watch' breaks there:
  - CS0006 missing ref assemblies
  - file watcher 'Incorrect function'

Use either:

  1) Recommended hybrid (edit in WSL, run on Windows):
       .\sync-and-watch.ps1

  2) Pure WSL (Linux window + software renderer):
       In Ubuntu:  ./RescueEditor/dev.sh

  3) Move/clone the repo to a Windows path, e.g.
       C:\Users\$env:USERNAME\Github\pmd-red
     then open THAT folder in Cursor and run this script again.
"@
    exit 1
}

$project = Join-Path $here "src\RescueEditor.App\RescueEditor.App.csproj"
dotnet watch run --project $project
