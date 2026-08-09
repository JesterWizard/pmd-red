#!/usr/bin/env bash
set -euo pipefail

rid="${1:-win-x64}"
root="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
output="$root/publish/$rid"

# Prefer an explicit SDK: DOTNET_ROOT, then isolated /tmp/dotnet8, then PATH.
if [[ -n "${DOTNET_ROOT:-}" && -x "${DOTNET_ROOT}/dotnet" ]]; then
  dotnet_bin="${DOTNET_ROOT}/dotnet"
elif [[ -x /tmp/dotnet8/dotnet ]]; then
  dotnet_bin=/tmp/dotnet8/dotnet
  export DOTNET_ROOT=/tmp/dotnet8
  export PATH="/tmp/dotnet8:${PATH}"
else
  dotnet_bin="$(command -v dotnet)"
fi

sdk_version="$("$dotnet_bin" --version)"
if [[ "${sdk_version%%.*}" -lt 8 ]]; then
  printf 'error: .NET SDK 8+ required (found %s via %s)\n' "$sdk_version" "$dotnet_bin" >&2
  printf 'Install with: curl -fsSL https://dot.net/v1/dotnet-install.sh | bash -s -- --channel 8.0 --install-dir /tmp/dotnet8\n' >&2
  exit 1
fi

rm -rf "$output"
"$dotnet_bin" publish "$root/src/RescueEditor.App/RescueEditor.App.csproj" \
  --configuration Release \
  --runtime "$rid" \
  --self-contained true \
  --output "$output" \
  -p:PublishSingleFile=true \
  -p:IncludeNativeLibrariesForSelfExtract=true \
  -p:EnableCompressionInSingleFile=true \
  -p:DebugType=none \
  -p:DebugSymbols=false \
  -p:PublishReadyToRun=true \
  -p:InvariantGlobalization=true

# Drop leftover debug sidecars if any older publish left them behind.
rm -f "$output"/*.pdb "$output"/*.dbg

printf 'Published RescueEditor to %s\n' "$output"
printf 'Run: %s/RescueEditor.App.exe\n' "$output"
ls -lh "$output"/RescueEditor.App* 2>/dev/null || true
