#!/usr/bin/env bash
# Dev launcher for RescueTemple.
# Mirrors onto the Windows filesystem and runs Windows `dotnet watch` there
# (\\wsl$ paths break Windows file watchers / ref assemblies).
#
# Heavy repo assets (actor sprites, sound) are synced once and then skipped
# until they change (or you pass --force-assets). Live sync only mirrors
# RescueEditor sources + small sidecar files so edits stay fast.
set -euo pipefail

root="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
repo="$(cd "$root/.." && pwd)"
win_dotnet="/mnt/c/Program Files/dotnet/dotnet.exe"
win_mirror="/mnt/c/Users/Owner/Github/pmd-red-win"
assets_stamp="$win_mirror/.rescue-temple-assets.stamp"
force_assets=0
sync_pid=""

cleanup() {
  if [[ -n "${sync_pid}" ]] && kill -0 "${sync_pid}" 2>/dev/null; then
    kill "${sync_pid}" 2>/dev/null || true
  fi
}
trap cleanup EXIT INT TERM

for arg in "$@"; do
  case "$arg" in
    --force-assets) force_assets=1 ;;
    --linux) ;; # handled below
    -h|--help)
      cat <<'EOF'
Usage: ./dev.sh [--linux] [--force-assets]

  --linux          Run Avalonia under WSL (no Windows mirror).
  --force-assets   Re-copy sound / actor sprites / ornaments even if stamp matches.
EOF
      exit 0
      ;;
  esac
done

# Lightweight fingerprint — avoids walking ~20k sprite files across /mnt/c.
assets_fingerprint() {
  printf 'mon_dirs=%s\n' "$(find "$repo/graphics/ax/mon" -mindepth 1 -maxdepth 1 -type d 2>/dev/null | wc -l)"
  printf 'mon_mtime=%s\n' "$(stat -c %Y "$repo/graphics/ax/mon" 2>/dev/null || echo 0)"
  printf 'sound_mtime=%s\n' "$(stat -c %Y "$repo/sound" 2>/dev/null || echo 0)"
  printf 'ornament_mtime=%s\n' "$(stat -c %Y "$repo/graphics/ornament" 2>/dev/null || echo 0)"
  printf 'effects_mtime=%s\n' "$(stat -c %Y "$repo/data/effects" 2>/dev/null || echo 0)"
  for f in \
    "$repo/include/constants/bg_music.h" \
    "$repo/include/constants/emotions.h" \
    "$repo/include/constants/ground_map.h" \
    "$repo/src/sound_names.c" \
    "$repo/charmap.txt" \
    "$repo/data/monster/monster_data.json" \
    "$repo/graphics/custom/pmd2_font_sheet.png"
  do
    if [[ -e "$f" ]]; then
      stat -c 'file %Y %n' "$f"
    else
      printf 'file missing %s\n' "$f"
    fi
  done
}

assets_need_sync() {
  if [[ "$force_assets" -eq 1 ]]; then
    return 0
  fi
  if [[ ! -f "$assets_stamp" ]]; then
    return 0
  fi
  # Destination must look populated (stamp alone is not enough after a wiped mirror).
  local dest_dirs
  dest_dirs="$(find "$win_mirror/graphics/ax/mon" -mindepth 1 -maxdepth 1 -type d 2>/dev/null | wc -l)"
  if [[ "${dest_dirs// /}" -lt 100 ]]; then
    return 0
  fi
  if ! assets_fingerprint | cmp -s - "$assets_stamp"; then
    return 0
  fi
  return 1
}

sync_small_repo_files() {
  mkdir -p "$win_mirror/include/constants" "$win_mirror/src" \
    "$win_mirror/data/monster" "$win_mirror/graphics/custom" "$win_mirror/data/effects"
  cp -f "$repo/include/constants/bg_music.h" "$win_mirror/include/constants/bg_music.h"
  cp -f "$repo/include/constants/emotions.h" "$win_mirror/include/constants/emotions.h"
  cp -f "$repo/include/constants/ground_map.h" "$win_mirror/include/constants/ground_map.h"
  cp -f "$repo/src/sound_names.c" "$win_mirror/src/sound_names.c"
  cp -f "$repo/charmap.txt" "$win_mirror/charmap.txt"
  cp -f "$repo/data/monster/monster_data.json" "$win_mirror/data/monster/monster_data.json"
  cp -f "$repo/graphics/custom/pmd2_font_sheet.png" "$win_mirror/graphics/custom/pmd2_font_sheet.png" 2>/dev/null || true
  for id in 088 089 091 092 093 094; do
    cp -f "$repo/data/effects/efob${id}.png" "$win_mirror/data/effects/efob${id}.png" 2>/dev/null || true
  done
}

sync_heavy_repo_assets() {
  mkdir -p "$win_mirror/include/constants" "$win_mirror/src" \
    "$win_mirror/data/monster" "$win_mirror/graphics/ax/mon" "$win_mirror/graphics/ornament"
  echo "Syncing sound + actor sprites (one-time / when changed)…"
  rsync -a --delete \
    --exclude bin --exclude obj --exclude publish --exclude .git \
    "$repo/sound/" "$win_mirror/sound/"
  sync_small_repo_files
  # Actor frames: idle dirs (1–15) + common sleep sheets (47–55). Full dump is huge.
  rsync -a --include '*/' \
    --include 'sprite_[1-9].png' --include 'sprite_1[0-5].png' \
    --include 'sprite_4[7-9].png' --include 'sprite_5[0-5].png' \
    --exclude '*' \
    "$repo/graphics/ax/mon/" "$win_mirror/graphics/ax/mon/"
  rsync -a --include '*/' --include 'sprite_1.png' --exclude '*' \
    "$repo/graphics/ornament/" "$win_mirror/graphics/ornament/"
  assets_fingerprint > "$assets_stamp"
}

sync_editor_sources() {
  mkdir -p "$win_mirror/RescueEditor"
  rsync -a --delete \
    --exclude bin --exclude obj --exclude publish --exclude .git \
    "$root/" "$win_mirror/RescueEditor/"
}

sync_to_windows() {
  local t0 t1
  t0=$(date +%s)
  sync_editor_sources
  if assets_need_sync; then
    sync_heavy_repo_assets
  else
    echo "Skipping heavy asset sync (stamp matches; pass --force-assets to refresh)."
    sync_small_repo_files
  fi
  if [[ -f "$repo/baserom.gba" && ! -f "$win_mirror/baserom.gba" ]]; then
    echo "Copying baserom.gba once…"
    cp -f "$repo/baserom.gba" "$win_mirror/baserom.gba"
  fi
  t1=$(date +%s)
  echo "Mirror sync done in $((t1 - t0))s → $win_mirror"
}

start_live_sync() {
  if ! command -v inotifywait >/dev/null; then
    echo "Tip: install inotify-tools for live WSL→Windows sync (sudo apt install inotify-tools)"
    return
  fi
  (
    # Code/test edits: sync editor only (fast). Sidecar edits: copy those files.
    # Actor sprites / ornaments are stamp-gated on startup (too large for inotify).
    while path="$(inotifywait -r -q -e modify,create,delete,move --format '%w%f' \
      "$root/src" "$root/tests" \
      "$repo/charmap.txt" "$repo/sound" \
      "$repo/include/constants/bg_music.h" \
      "$repo/include/constants/emotions.h" \
      "$repo/include/constants/ground_map.h" \
      "$repo/src/sound_names.c" \
      "$repo/data/monster" "$repo/graphics/custom" "$repo/data/effects" \
      2>/dev/null)"; do
      case "$path" in
        "$repo/sound"*)
          # Sound tree is modest; keep Windows mirror live for music preview.
          rsync -a --delete "$repo/sound/" "$win_mirror/sound/" >/dev/null
          assets_fingerprint > "$assets_stamp"
          ;;
        "$repo/charmap.txt"*|"$repo/include/constants/bg_music.h"*|\
        "$repo/include/constants/emotions.h"*|"$repo/include/constants/ground_map.h"*|\
        "$repo/src/sound_names.c"*|\
        "$repo/data/monster"*|"$repo/graphics/custom"*|"$repo/data/effects"*)
          sync_small_repo_files >/dev/null
          assets_fingerprint > "$assets_stamp"
          ;;
        *)
          sync_editor_sources >/dev/null
          ;;
      esac
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
  # Release DLL locks from a previous RescueTemple instance (MSB3027).
  /mnt/c/Windows/System32/taskkill.exe /F /IM RescueTemple.exe >/dev/null 2>&1 || true
  start_live_sync
  echo "Starting Windows hot reload…"
  echo "Project: $project_win"
  cd "$win_mirror/RescueEditor"
  # Avoid interactive "rude edit" prompts that leave the app stuck/silent on old code.
  export DOTNET_WATCH_RESTART_ON_RUDE_EDIT=1
  local watch_args=(watch run --project "$project_win")
  if [[ -f "$win_mirror/RescueEditor/src/RescueEditor.App/obj/project.assets.json" ]]; then
    watch_args+=(--no-restore)
  fi
  "$win_dotnet" "${watch_args[@]}"
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
  local watch_args=(watch run --project "$project")
  if [[ -f "$root/src/RescueEditor.App/obj/project.assets.json" ]]; then
    watch_args+=(--no-restore)
  fi
  exec "$dotnet_bin" "${watch_args[@]}"
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
