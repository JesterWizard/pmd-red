# Kill RescueTemple.exe and leftover `dotnet watch` for the Windows mirror.
# Use taskkill so this works when invoked from WSL.
$ErrorActionPreference = "SilentlyContinue"
$pids = @(
    Get-CimInstance Win32_Process -Filter "Name='dotnet.exe'" |
        Where-Object { $_.CommandLine -match 'pmd-red-win.+RescueEditor' } |
        Select-Object -ExpandProperty ProcessId
)
foreach ($procId in $pids) {
    & "$env:SystemRoot\System32\taskkill.exe" /F /PID $procId | Out-Null
}
& "$env:SystemRoot\System32\taskkill.exe" /F /IM RescueTemple.exe | Out-Null
