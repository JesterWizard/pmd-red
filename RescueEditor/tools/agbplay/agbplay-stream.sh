#!/usr/bin/env bash
set -euo pipefail
here="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export LD_LIBRARY_PATH="$here/lib:${LD_LIBRARY_PATH:-}"
exec "$here/agbplay-stream" "$@"
