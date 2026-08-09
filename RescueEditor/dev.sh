#!/usr/bin/env bash
# Dev launcher for RescueTemple.
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

sync_repo_assets() {
  mkdir -p "$win_mirror/include/constants" "$win_mirror/src" \
    "$win_mirror/data/monster" "$win_mirror/graphics/ax/mon" "$win_mirror/graphics/ornament"
  rsync -a --delete \
    --exclude bin --exclude obj --exclude publish --exclude .git \
    "$repo/sound/" "$win_mirror/sound/"
  cp -f "$repo/include/constants/bg_music.h" "$win_mirror/include/constants/bg_music.h"
  cp -f "$repo/src/sound_names.c" "$win_mirror/src/sound_names.c"
  cp -f "$repo/charmap.txt" "$win_mirror/charmap.txt"
  cp -f "$repo/data/monster/monster_data.json" "$win_mirror/data/monster/monster_data.json"
  mkdir -p "$win_mirror/graphics/custom" "$win_mirror/data/effects"
  cp -f "$repo/graphics/custom/pmd2_font_sheet.png" "$win_mirror/graphics/custom/pmd2_font_sheet.png" 2>/dev/null || true
  # Emotion overlays used by Scene Play (NOTICE/QUESTION/SHOCK/SWEAT/SMILE/ANGRY).
  for id in 088 089 091 092 093 094; do
    cp -f "$repo/data/effects/efob${id}.png" "$win_mirror/data/effects/efob${id}.png" 2>/dev/null || true
  done
  # Actor frames for Scene Play animation (sprite_1..16.png).
  rsync -a --include '*/' --include 'sprite_[0-9].png' --include 'sprite_1[0-6].png' --exclude '*' \
    "$repo/graphics/ax/mon/" "$win_mirror/graphics/ax/mon/"
  rsync -a --include '*/' --include 'sprite_1.png' --exclude '*' \
    "$repo/graphics/ornament/" "$win_mirror/graphics/ornament/"
}

sync_to_windows() {
  mkdir -p "$win_mirror/RescueEditor"
  rsync -a --delete \
    --exclude bin --exclude obj --exclude publish --exclude .git \
    "$root/" "$win_mirror/RescueEditor/"
  sync_repo_assets
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
      "$root/src" "$root/tests" "$repo/charmap.txt" "$repo/sound" \
      "$repo/include/constants/bg_music.h" "$repo/src/sound_names.c" 2>/dev/null; do
      rsync -a --delete \
        --exclude bin --exclude obj --exclude publish --exclude .git \
        "$root/" "$win_mirror/RescueEditor/" >/dev/null
      sync_repo_assets >/dev/null
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
  # Release DLL locks from a previous RescueTemple instance (MSB3027).
  /mnt/c/Windows/System32/taskkill.exe /F /IM RescueTemple.exe >/dev/null 2>&1 || true
  start_live_sync
  echo "Starting Windows hot reload…"
  echo "Project: $project_win"
  cd "$win_mirror/RescueEditor"
  # Avoid interactive "rude edit" prompts that leave the app stuck/silent on old code.
  export DOTNET_WATCH_RESTART_ON_RUDE_EDIT=1
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
