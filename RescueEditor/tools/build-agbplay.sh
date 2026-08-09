#!/usr/bin/env bash
# Rebuild the bundled agbplay-cli used by RescueTemple for authentic mp2k playback.
set -euo pipefail

root="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
dest="$root/agbplay"
work="${TMPDIR:-/tmp}/agbplay-build-rescue-temple"
deps="${TMPDIR:-/tmp}/agbdeps"

echo "This script expects build dependencies extracted under $deps (see prior setup),"
echo "or system packages: cmake g++ libfmt-dev nlohmann-json3-dev libboost-dev libzip-dev libsndfile1-dev"
echo

if [[ ! -d /tmp/agbplay/.git ]]; then
  git clone --depth 1 https://github.com/ipatix/agbplay.git /tmp/agbplay
fi

# Prefer an already-configured local tree from the RescueTemple setup if present.
if [[ -x /tmp/agbplay/build/src/agbplay-cli/agbplay-cli ]]; then
  src_cli=/tmp/agbplay/build/src/agbplay-cli/agbplay-cli
  src_lib=/tmp/agbplay/build/src/agbplay/libagbplay.so
else
  echo "Configure and build agbplay first (see RescueEditor README)." >&2
  exit 1
fi

mkdir -p "$dest/lib"
cp -f "$src_cli" "$dest/agbplay-cli"
cp -f "$src_lib" "$dest/lib/libagbplay.so"
chmod +x "$dest/agbplay-cli"
cat > "$dest/agbplay-cli.sh" <<'EOF'
#!/usr/bin/env bash
set -euo pipefail
here="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export LD_LIBRARY_PATH="$here/lib:${LD_LIBRARY_PATH:-}"
exec "$here/agbplay-cli" "$@"
EOF
chmod +x "$dest/agbplay-cli.sh"
echo "Installed $dest/agbplay-cli"
