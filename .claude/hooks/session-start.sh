#!/bin/bash
# SessionStart hook: prepare Claude Code cloud sessions to build and screenshot the ROM.
# Local sessions are left alone; run scripts/cloud/setup.sh yourself there.
set -euo pipefail

if [ "${CLAUDE_CODE_REMOTE:-}" != "true" ]; then
  exit 0
fi

cd "${CLAUDE_PROJECT_DIR:-$(dirname "$0")/../..}"

scripts/cloud/setup.sh

echo "[setup] Next: make -j\$(nproc) && scripts/cloud/smoke_test.sh   (screenshots: scripts/cloud/screenshot.sh; docs: documentation/cloud_sessions.md)"
