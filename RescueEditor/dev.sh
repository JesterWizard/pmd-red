#!/usr/bin/env bash
# Dev launcher for RescueEditor.
# Mirrors onto the Windows filesystem and runs Windows `dotnet watch` there
# (\\wsl$ paths break Windows file watchers / ref assemblies).
set -euo pipefail

root="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
repo="$(cd "$root/.." && pwd)"
win_dotnet="/mnt/c/Program Files/dotnet/dotnet.exe"
win_mirror="/mnt/c/Users/Owner/Github/pmd-red-win"
sync_pid=""

cleanup() {
  if [[ -n "${sync_pid}" ]] && kill -0 "${sync_pid}" 2>/dev/null; then
    kill "${sync_pid}" 2>/dev/null || true
  fi
}
trap cleanup EXIT INT TERM

sync_to_windows() {
  mkdir -p "$win_mirror/RescueEditor"
  rsync -a --delete \
    --exclude bin --exclude obj --exclude publish --exclude .git \
    "$root/" "$win_mirror/RescueEditor/"
  cp -f "$repo/charmap.txt" "$win_mirror/charmap.txt"
  if [[ -f "$repo/baserom.gba" && ! -f "$win_mirror/baserom.gba" ]]; then
    echo "Copying baserom.gba once…"
    cp -f "$repo/baserom.gba" "$win_mirror/baserom.gba"
  fi
}

start_live_sync() {
  if ! command -v inotifywait >/dev/null; then
    echo "Tip: install inotify-tools for live WSL→Windows sync (sudo apt install inotify-tools)"
    return
  fi
  (
    while inotifywait -r -qq -e modify,create,delete,move \
      "$root/src" "$root/tests" "$repo/charmap.txt" 2>/dev/null; do
      rsync -a --delete \
        --exclude bin --exclude obj --exclude publish --exclude .git \
        "$root/" "$win_mirror/RescueEditor/" >/dev/null
      cp -f "$repo/charmap.txt" "$win_mirror/charmap.txt"
    done
  ) &
  sync_pid=$!
  echo "Live syncing WSL edits → $win_mirror (pid $sync_pid)"
}

run_windows_watch() {
  local project_linux="$win_mirror/RescueEditor/src/RescueEditor.App/RescueEditor.App.csproj"
  local project_win
  project_win="$(wslpath -w "$project_linux")"
  if [[ ! -f "$project_linux" ]]; then
    echo "error: sync failed; missing $project_linux" >&2
    exit 1
  fi
  echo "Synced to $win_mirror"
  start_live_sync
  echo "Starting Windows hot reload…"
  echo "Project: $project_win"
  cd "$win_mirror/RescueEditor"
  "$win_dotnet" watch run --project "$project_win"
}

run_linux_watch() {
  local project="$root/src/RescueEditor.App/RescueEditor.App.csproj"
  local dotnet_bin
  if [[ -x /tmp/dotnet8/dotnet ]]; then
    export DOTNET_ROOT=/tmp/dotnet8
    export PATH="/tmp/dotnet8:${PATH}"
    dotnet_bin=/tmp/dotnet8/dotnet
  else
    dotnet_bin="$(command -v dotnet)"
  fi
  echo "Starting Linux Avalonia build (software renderer)…"
  exec "$dotnet_bin" watch run --project "$project"
}

if [[ "${1:-}" == "--linux" ]]; then
  run_linux_watch
fi

if [[ -x "$win_dotnet" && -d /mnt/c/Users/Owner ]]; then
  if ! command -v rsync >/dev/null; then
    echo "rsync is required. Install with: sudo apt install rsync" >&2
    exit 1
  fi
  sync_to_windows
  run_windows_watch
  exit 0
fi

echo "Windows .NET not found; falling back to Linux."
run_linux_watch
