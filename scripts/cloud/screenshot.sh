#!/usr/bin/env bash
# Headless screenshot run of pmd_red.gba via the mgba_shot tool.
#
# Usage: scripts/cloud/screenshot.sh [OUT_DIR] [-- extra mgba_shot args]
#
#   OUT_DIR  output directory, relative to the repo root (default build/screenshots)
#   extra    arguments passed to mgba_shot after the ROM and output prefix.
#            Without them the default run is:
#              --frames 1800 --every 300 --press 600:START --press 900:A
#              --press 1200:A --press 1500:A
#
# The ROM is not built here; run `make` in the repo root first.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"

usage() {
	cat <<'EOF'
usage: scripts/cloud/screenshot.sh [OUT_DIR] [-- extra mgba_shot args]

  OUT_DIR  output directory relative to the repo root (default: build/screenshots)
  extra    passed to build/tools/mgba_shot after ROM and OUT_PREFIX; see
           `build/tools/mgba_shot --help` once the tool is built.
EOF
}

OUT_DIR="build/screenshots"
if [[ $# -gt 0 ]]; then
	case "$1" in
	-h | --help)
		usage
		exit 0
		;;
	--) ;;
	*)
		OUT_DIR="$1"
		shift
		;;
	esac
fi
if [[ $# -gt 0 ]]; then
	if [[ "$1" != "--" ]]; then
		echo "screenshot.sh: unexpected argument '$1' (use -- before mgba_shot args)" >&2
		exit 2
	fi
	shift
fi
EXTRA=("$@")

make -s -C scripts/cloud

if [[ ! -f pmd_red.gba ]]; then
	echo "pmd_red.gba not found; run make first" >&2
	exit 1
fi

mkdir -p "$OUT_DIR"

if [[ ${#EXTRA[@]} -eq 0 ]]; then
	EXTRA=(--frames 1800 --every 300 --press 600:START --press 900:A --press 1200:A --press 1500:A)
fi

OUT="$(build/tools/mgba_shot pmd_red.gba "$OUT_DIR/shot" "${EXTRA[@]}")"
printf '%s\n' "$OUT"

echo "PNG files:"
printf '%s\n' "$OUT" | sed -n 's/^shot .* file=\([^ ]*\) colors=.*$/  \1/p'
