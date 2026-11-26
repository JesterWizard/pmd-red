#!/usr/bin/env bash
# Sky demake regression suite: builds the test ROMs, plays them headless and
# prints PASS / FAIL per check. See documentation/Features/SkyDemake.md
# ("Testing") and scripts/cloud/sky_regression/harness.py.
#
#   scripts/cloud/sky_regression.sh              # everything (~2 min)
#   scripts/cloud/sky_regression.sh --no-vanilla # skip the vanilla sha1 rebuild
#   scripts/cloud/sky_regression.sh --no-build -k portrait   # rerun some checks
#   scripts/cloud/sky_regression.sh --list
set -euo pipefail
cd "$(dirname "$0")/../.."
exec python3 scripts/cloud/sky_regression/run.py "$@"
