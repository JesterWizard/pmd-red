#!/usr/bin/env bash
# Headless boot smoke test for pmd_red.gba (runs build/tools/mgba_shot).
#
# Usage: scripts/cloud/smoke_test.sh [--build] [--rom PATH] [--out DIR]
#
#   --build     run make -j"$(nproc)" first (log: build/smoke/make.log)
#   --rom PATH  ROM to test (default: pmd_red.gba); relative to the repo root
#   --out DIR   capture directory (default: build/smoke); relative to the repo root
#   -h, --help  show this help and exit 0
#
# The ROM is emulated for 1800 frames with a fixed button script, and six
# captures are taken. The checks look only for generic signs of life: the
# title screen is drawn, the picture changes over time, and intro graphics
# appear before the title. Nothing is compared against fixed golden hashes,
# because the ROM hack changes often.
#
# Exit status: 0 all checks passed, 1 a step or check failed, 2 bad arguments.
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"

usage() {
	cat <<'EOF'
usage: scripts/cloud/smoke_test.sh [--build] [--rom PATH] [--out DIR]

  --build     run make -j"$(nproc)" first (log: build/smoke/make.log)
  --rom PATH  ROM to test (default: pmd_red.gba)
  --out DIR   capture directory (default: build/smoke)
  -h, --help  show this help and exit
EOF
}

BUILD=0
ROM="pmd_red.gba"
OUT="build/smoke"
while [[ $# -gt 0 ]]; do
	case "$1" in
	--build)
		BUILD=1
		shift
		;;
	--rom | --out)
		if [[ $# -lt 2 || -z "$2" ]]; then
			echo "smoke_test.sh: $1 needs a value" >&2
			exit 2
		fi
		if [[ "$1" == "--rom" ]]; then
			ROM="$2"
		else
			OUT="$2"
		fi
		shift 2
		;;
	-h | --help)
		usage
		exit 0
		;;
	*)
		echo "smoke_test.sh: unknown argument '$1'" >&2
		usage >&2
		exit 2
		;;
	esac
done

FAILS=0
pass() { echo "PASS: $*"; }
fail() {
	echo "FAIL: $*"
	FAILS=$((FAILS + 1))
}
finish() {
	if [[ $FAILS -eq 0 ]]; then
		echo "SMOKE TEST PASSED"
		exit 0
	fi
	echo "SMOKE TEST FAILED ($FAILS checks)"
	exit 1
}

if [[ $BUILD -eq 1 ]]; then
	mkdir -p build/smoke
	echo "building: make -j$(nproc) (log: build/smoke/make.log)"
	if ! make -j"$(nproc)" >build/smoke/make.log 2>&1; then
		tail -n 40 build/smoke/make.log
		fail "make failed (full log: $ROOT/build/smoke/make.log)"
		finish
	fi
fi

if ! make -s -C scripts/cloud; then
	fail "could not build build/tools/mgba_shot (make -C scripts/cloud)"
	finish
fi

if [[ ! -f "$ROM" ]]; then
	echo "FAIL: $ROM not found (run make or pass --build)"
	exit 1
fi

mkdir -p "$OUT"
PREFIX="$OUT/boot"
if SHOT_OUT="$(build/tools/mgba_shot "$ROM" "$PREFIX" --frames 1800 --every 300 \
	--press 600:START --press 900:A --press 1200:A --press 1500:A)"; then
	RC=0
else
	RC=$?
fi

if [[ -n $SHOT_OUT ]]; then
	printf '%s\n' "$SHOT_OUT"
fi
if [[ $RC -ne 0 ]]; then
	fail "mgba_shot exited with status $RC on $ROM"
	finish
fi

RAW=$(printf '%s\n' "$SHOT_OUT" | grep -c '^shot ' || true)
# Each record: frame colors hash file
mapfile -t RECS < <(printf '%s\n' "$SHOT_OUT" |
	sed -n 's/^shot frame=\([0-9][0-9]*\) file=\(.*\) colors=\([0-9][0-9]*\) hash=\([0-9a-f][0-9a-f]*\)$/\1 \3 \4 \2/p')
N=${#RECS[@]}

if [[ $RAW -eq 6 && $N -eq 6 ]]; then
	pass "exactly 6 shot lines printed"
else
	fail "expected 6 shot lines, got $RAW ($N parsed)"
fi

LAST_F=""
LAST_C=0
LAST_P=""
DISTINCT=0
EARLY_OK=""
if [[ $N -gt 0 ]]; then
	read -r LAST_F LAST_C _ LAST_P <<<"${RECS[$((N - 1))]}"
	DISTINCT=$(printf '%s\n' "${RECS[@]}" | awk '{print $3}' | sort -u | wc -l)
	for ((i = 0; i < N - 1; i++)); do
		read -r F C _ _ <<<"${RECS[$i]}"
		if [[ -z $EARLY_OK && $C -ge 16 ]]; then
			EARLY_OK="frame $F colors=$C"
		fi
	done
fi

if [[ $LAST_C -ge 64 ]]; then
	pass "title screen rendered: final capture frame $LAST_F colors=$LAST_C (>= 64)"
else
	fail "title screen not rendered: final capture colors=$LAST_C (need >= 64)"
fi

if [[ $DISTINCT -ge 4 ]]; then
	pass "screen is changing: $DISTINCT distinct hashes across captures (>= 4)"
else
	fail "screen may be frozen: $DISTINCT distinct hashes across captures (need >= 4)"
fi

if [[ -n $EARLY_OK ]]; then
	pass "intro graphics rendered: $EARLY_OK before the final capture (>= 16 colors)"
else
	fail "no intro graphics: no capture before the final one had >= 16 colors"
fi

if [[ -n $LAST_P ]]; then
	case "$LAST_P" in
	/*) FINAL="$LAST_P" ;;
	*) FINAL="$ROOT/$LAST_P" ;;
	esac
	echo "final PNG: $FINAL"
fi

finish
