#!/usr/bin/env python3
"""Extract data-side baserom slices into repository-owned binary assets."""

from pathlib import Path
import re


ROOT = Path(__file__).resolve().parent
ROM_PATH = ROOT / "baserom.gba"
INCBIN_RE = re.compile(
    r'^(?P<indent>\s*)\.incbin\s+"baserom\.gba",\s*'
    r'(?P<offset>0x[0-9A-Fa-f]+),\s*(?P<size>0x[0-9A-Fa-f]+)\s*$',
    re.MULTILINE,
)


def asset_path(source: Path, offset: int, size: int) -> Path:
    relative = source.relative_to(ROOT)

    if relative.parts[:2] == ("data", "kao"):
        directory = ROOT / "graphics" / "kao"
        name = f"{source.stem}_{offset:X}_{size:X}.bin"
    elif relative == Path("data/titlemenu_sbin.s"):
        directory = ROOT / "graphics" / "titlemenu"
        name = f"titlemenu_sbin_{offset:X}_{size:X}.bin"
    elif relative.parent == Path("data") and source.stem.startswith("unk_"):
        directory = ROOT / "data" / "unknown_unused"
        name = f"{source.stem}.bin"
    else:
        raise ValueError(f"unsupported baserom asset source: {relative}")

    return directory / name


def main() -> None:
    rom = ROM_PATH.read_bytes()
    extracted = 0
    extracted_bytes = 0
    rewritten_files = 0

    sources = sorted((ROOT / "data").rglob("*"))
    for source in sources:
        if not source.is_file() or source.suffix not in {".s", ".inc"}:
            continue

        text = source.read_text()
        matches = list(INCBIN_RE.finditer(text))
        if not matches:
            continue

        def replace(match: re.Match[str]) -> str:
            nonlocal extracted, extracted_bytes
            offset = int(match.group("offset"), 16)
            size = int(match.group("size"), 16)
            payload = rom[offset : offset + size]
            if len(payload) != size:
                raise ValueError(
                    f"{source}: ROM range 0x{offset:X}+0x{size:X} is out of bounds"
                )

            output = asset_path(source, offset, size)
            output.parent.mkdir(parents=True, exist_ok=True)
            if output.exists() and output.read_bytes() != payload:
                raise ValueError(f"existing asset does not match ROM: {output}")
            output.write_bytes(payload)

            extracted += 1
            extracted_bytes += size
            relative_output = output.relative_to(ROOT).as_posix()
            return f'{match.group("indent")}.incbin "{relative_output}"'

        updated = INCBIN_RE.sub(replace, text)
        if updated != text:
            source.write_text(updated)
            rewritten_files += 1

    print(
        f"extracted {extracted} assets ({extracted_bytes} bytes) "
        f"from {rewritten_files} source files"
    )


if __name__ == "__main__":
    main()
