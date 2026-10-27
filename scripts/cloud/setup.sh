#!/usr/bin/env bash
#
# Prepare a fresh Ubuntu 24.04 cloud container to build pmd_red and take
# headless screenshots of it. Safe to re-run: every step checks whether its
# work is already done and skips it if so.
#
# Steps, in order:
#   1. apt      install the build packages that are missing
#   2. python   install the Python modules the build imports (pip)
#   3. baserom  regenerate baserom.gba from baserom.xdelta if it is missing
#               or its sha1 does not match red.sha1
#   4. tools    make tools (host tools under tools/)
#   5. shots    make -C scripts/cloud (build/tools/mgba_shot)
#   6. agbcc    (optional) clone and install agbcc into tools/agbcc
#   7. build    (optional) full ROM build: make -j$(nproc)
#
# Usage: scripts/cloud/setup.sh [--agbcc] [--build] [-h|--help]
#
#   --agbcc   also install agbcc, needed only for `make MODERN=0 compare`
#             (env: PMD_SETUP_AGBCC=1)
#   --build   also run the full ROM build at the end
#             (env: PMD_SETUP_BUILD=1)
#   -h,--help show this help and exit
#
# Logs for the long steps go to build/setup-logs/. Real failures exit non-zero.

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
cd "$ROOT"

SECONDS=0
LOG_DIR="build/setup-logs"

APT_PKGS=(
  gcc-arm-none-eabi
  binutils-arm-none-eabi
  libnewlib-arm-none-eabi
  xdelta3
  libpng-dev
  libmgba-dev
  python3-pip
)
PY_MODS=(skytemple_files tilequant PIL numpy)
PY_PKGS=(skytemple-files tilequant pillow numpy)

DO_AGBCC="${PMD_SETUP_AGBCC:-0}"
DO_BUILD="${PMD_SETUP_BUILD:-0}"

usage() {
  cat <<'EOF'
Usage: scripts/cloud/setup.sh [--agbcc] [--build] [-h|--help]

  --agbcc   also install agbcc into tools/agbcc (only needed for MODERN=0 compare)
  --build   also run the full ROM build (make -j"$(nproc)") at the end
  -h,--help show this help

Environment equivalents: PMD_SETUP_AGBCC=1, PMD_SETUP_BUILD=1
EOF
}

log() { echo "[setup] $*"; }
die() { echo "[setup] ERROR: $*" >&2; exit 1; }

while [[ $# -gt 0 ]]; do
  case "$1" in
    --agbcc) DO_AGBCC=1 ;;
    --build) DO_BUILD=1 ;;
    -h|--help) usage; exit 0 ;;
    *)
      echo "[setup] unknown option: $1" >&2
      usage >&2
      exit 2
      ;;
  esac
  shift
done

if [[ "$(id -u)" -eq 0 ]]; then
  SUDO=""
else
  SUDO="sudo"
fi

mkdir -p "$LOG_DIR"

# ---------------------------------------------------------------- apt
log "apt: checking packages"
missing_pkgs=()
for p in "${APT_PKGS[@]}"; do
  if ! dpkg-query -W -f='${Status}' "$p" 2>/dev/null | grep -q "install ok installed"; then
    missing_pkgs+=("$p")
  fi
done

if (( ${#missing_pkgs[@]} )); then
  log "apt: installing ${missing_pkgs[*]}"
  $SUDO apt-get update -qq
  $SUDO env DEBIAN_FRONTEND=noninteractive apt-get install -y -qq --no-install-recommends "${missing_pkgs[@]}"
else
  log "apt: all packages present"
fi

# ---------------------------------------------------------------- python
py_missing=()
for i in "${!PY_MODS[@]}"; do
  if ! python3 -c "import ${PY_MODS[$i]}" 2>/dev/null; then
    py_missing+=("${PY_PKGS[$i]}")
  fi
done

if (( ${#py_missing[@]} )); then
  log "python: installing ${py_missing[*]}"
  if ! python3 -m pip install -q "${py_missing[@]}"; then
    log "python: pip install failed, retrying with --break-system-packages"
    python3 -m pip install -q --break-system-packages "${py_missing[@]}" \
      || die "pip install failed for: ${py_missing[*]}"
  fi
  for i in "${!PY_MODS[@]}"; do
    python3 -c "import ${PY_MODS[$i]}" 2>/dev/null \
      || die "python module still missing after install: ${PY_MODS[$i]}"
  done
else
  log "python: all modules present"
fi

# ---------------------------------------------------------------- baserom
BASEROM="baserom.gba"
BASEROM_PARTIAL="baserom.gba.partial"
XDELTA="baserom.xdelta"
EXPECT_SHA="$(awk '{print $1; exit}' red.sha1)"
[[ -n "$EXPECT_SHA" ]] || die "could not read expected sha1 from red.sha1"

baserom_sha() { sha1sum "$BASEROM" | awk '{print $1}'; }

if [[ -f "$BASEROM" ]] && [[ "$(baserom_sha)" == "$EXPECT_SHA" ]]; then
  log "baserom: $BASEROM present, sha1 OK"
else
  log "baserom: building $BASEROM from $XDELTA"
  tmp="$(mktemp)"
  trap 'rm -f "$tmp" "$BASEROM_PARTIAL"' EXIT
  head -c 33554432 /dev/zero > "$tmp"
  xdelta3 -d -f -s "$tmp" "$XDELTA" "$BASEROM_PARTIAL" \
    || die "xdelta3 failed to apply $XDELTA"
  mv -f "$BASEROM_PARTIAL" "$BASEROM"
  got="$(baserom_sha)"
  if [[ "$got" != "$EXPECT_SHA" ]]; then
    die "$BASEROM sha1 mismatch: got $got, expected $EXPECT_SHA"
  fi
  log "baserom: $BASEROM regenerated, sha1 OK"
fi

# ---------------------------------------------------------------- tools
log "tools: make tools (log: $LOG_DIR/tools.log)"
if ! make tools -j"$(nproc)" >"$LOG_DIR/tools.log" 2>&1; then
  tail -n 40 "$LOG_DIR/tools.log" >&2
  die "make tools failed (full log: $LOG_DIR/tools.log)"
fi
log "tools: done"

# ---------------------------------------------------------------- screenshot tool
log "shots: make -C scripts/cloud"
make -s -C scripts/cloud || die "building mgba_shot failed"
log "shots: build/tools/mgba_shot ready"

# ---------------------------------------------------------------- agbcc (optional)
if [[ "$DO_AGBCC" == 1 ]]; then
  if [[ -x tools/agbcc/bin/agbcc ]]; then
    log "agbcc: already installed"
  else
    log "agbcc: installing (log: $LOG_DIR/agbcc.log)"
    mkdir -p .cache
    if [[ ! -d .cache/agbcc ]]; then
      if ! git clone --depth 1 https://github.com/pret/agbcc.git .cache/agbcc >"$LOG_DIR/agbcc.log" 2>&1; then
        tail -n 40 "$LOG_DIR/agbcc.log" >&2
        die "git clone of pret/agbcc failed (full log: $LOG_DIR/agbcc.log)"
      fi
    fi
    if ! ( cd .cache/agbcc && ./build.sh && ./install.sh "$ROOT" ) >>"$LOG_DIR/agbcc.log" 2>&1; then
      tail -n 40 "$LOG_DIR/agbcc.log" >&2
      die "agbcc build/install failed (full log: $LOG_DIR/agbcc.log)"
    fi
    [[ -x tools/agbcc/bin/agbcc ]] || die "agbcc install did not produce tools/agbcc/bin/agbcc"
    log "agbcc: installed"
  fi
else
  log "agbcc: skipped (pass --agbcc to install)"
fi

# ---------------------------------------------------------------- full build (optional)
if [[ "$DO_BUILD" == 1 ]]; then
  log "build: make -j$(nproc) (log: $LOG_DIR/make.log)"
  if ! make -j"$(nproc)" >"$LOG_DIR/make.log" 2>&1; then
    tail -n 40 "$LOG_DIR/make.log" >&2
    die "full build failed (full log: $LOG_DIR/make.log)"
  fi
  tail -n 3 "$LOG_DIR/make.log" | sed 's/^/[setup]   /'
  log "build: OK"
fi

# ---------------------------------------------------------------- summary
gcc_line="$(arm-none-eabi-gcc --version 2>&1 | sed -n '1p')"
log "toolchain: $gcc_line"
log "baserom: $BASEROM sha1 OK ($EXPECT_SHA)"
if [[ -f pmd_red.gba ]]; then
  log "rom: pmd_red.gba present"
else
  log "rom: pmd_red.gba not built yet"
fi
log 'Build: make -j$(nproc)   Screenshots: scripts/cloud/screenshot.sh'
log "done in ${SECONDS}s"
