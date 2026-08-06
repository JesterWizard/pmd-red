#!/usr/bin/env python3
"""LZ-compress AX anim sequences (GMLZ + BIOS LZ77) for the hack ROM.

Scans src/data/ax/*.h and src/data/ax_shared_anims.c. Anim arrays whose packed
size is <= AX_ANIM_CACHE_SIZE (256) and that shrink under LZ are replaced with
ALIGNED INCBINs of .lz blobs. Oversized / non-shrinking arrays stay as C.

Runtime (sprite.c ResolveAxAnimData) decompresses GMLZ into axdata.animCache.

Idempotent: already-INCBINed anims are left alone unless --force rebuilds .lz.
"""

from __future__ import annotations

import argparse
import re
import struct
import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent
AX_DIR = ROOT / "src" / "data" / "ax"
SHARED_C = ROOT / "src" / "data" / "ax_shared_anims.c"
SHARED_H = ROOT / "include" / "ax_shared_anims.h"
LZ_ROOT = ROOT / "graphics" / "ax" / "anim_lz"
GBAGFX = ROOT / "tools" / "gbagfx" / "gbagfx"
GMLZ = b"GMLZ"
AX_ANIM_CACHE_SIZE = 256
AX_ANIM_SIZE = 12

ANIM_DEF_RE = re.compile(
    r"(static\s+)?const\s+ax_anim\s+(\w+)\[\]\s*=\s*\{(.*?)\n\};",
    re.S,
)
ANIM_U8_INCBIN_RE = re.compile(
    r"(static\s+)?const\s+u8\s+(\w+)\[\]\s*ALIGNED\(4\)\s*=\s*INCBIN_U8\(\"([^\"]+\.lz)\"\);",
)
FRAME_RE = re.compile(
    r"\{\s*\.frames\s*=\s*(-?\d+)\s*,\s*\.unkFlags\s*=\s*(-?\d+)\s*,\s*"
    r"\.poseId\s*=\s*(-?\d+)\s*,\s*"
    r"\.offset\s*=\s*\{\s*(-?\d+)\s*,\s*(-?\d+)\s*\}\s*,\s*"
    r"\.shadow\s*=\s*\{\s*(-?\d+)\s*,\s*(-?\d+)\s*\}\s*\}",
)


def pack_anim_body(body: str) -> bytes:
    out = bytearray()
    for mo in FRAME_RE.finditer(body):
        frames, unk, pose, ox, oy, sx, sy = map(int, mo.groups())
        out += struct.pack("<BBhhhhh", frames & 0xFF, unk & 0xFF, pose, ox, oy, sx, sy)
    if "AX_ANIM_TERMINATOR" in body:
        out += bytes(AX_ANIM_SIZE)
    if not out:
        raise ValueError("empty anim body")
    return bytes(out)


def lz77_with_gmlz(raw: bytes) -> bytes:
    with tempfile.TemporaryDirectory() as td:
        raw_path = Path(td) / "anim.bin"
        lz_path = Path(td) / "anim.bin.lz"
        raw_path.write_bytes(raw)
        subprocess.run([str(GBAGFX), str(raw_path), str(lz_path)], check=True)
        lz = lz_path.read_bytes()
    if lz.startswith(GMLZ):
        return lz
    if lz.startswith(b"\x10"):
        return GMLZ + lz
    raise RuntimeError("gbagfx did not emit LZ77")


def lz77_decompress(data: bytes) -> bytes:
    if len(data) < 4 or data[0] != 0x10:
        raise ValueError("not LZ77")
    output_size = data[1] | (data[2] << 8) | (data[3] << 16)
    output = bytearray()
    source_pos = 4
    while len(output) < output_size:
        if source_pos >= len(data):
            raise ValueError("truncated flag")
        flags = data[source_pos]
        source_pos += 1
        for bit in range(7, -1, -1):
            if len(output) >= output_size:
                break
            if flags & (1 << bit):
                first, second = data[source_pos], data[source_pos + 1]
                source_pos += 2
                length = (first >> 4) + 3
                distance = ((first & 0xF) << 8) | second
                start = len(output) - distance - 1
                for i in range(length):
                    output.append(output[start + i])
            else:
                output.append(data[source_pos])
                source_pos += 1
    return bytes(output[:output_size])


def wrap_anim_ptrs(text: str, anim_names: set[str]) -> str:
    """Wrap bare anim symbol refs in AnimTable initializers with AX_ANIM_PTR()."""
    if not anim_names:
        return text

    # Only touch ax_anim *const tables (direction tables), not ax_anim *** animations.
    table_re = re.compile(
        r"(static\s+const\s+ax_anim\s*\*\s*const\s+\w+\[\]\s*=\s*\{)(.*?)(\n\};)",
        re.S,
    )

    names = sorted(anim_names, key=len, reverse=True)
    name_alt = "|".join(re.escape(n) for n in names)
    sym_re = re.compile(rf"\b({name_alt})\b")

    def repl_table(m: re.Match[str]) -> str:
        head, body, tail = m.group(1), m.group(2), m.group(3)

        def repl_sym(sm: re.Match[str]) -> str:
            name = sm.group(1)
            start = sm.start()
            before = body[max(0, start - 20) : start]
            if before.rstrip().endswith("AX_ANIM_PTR("):
                return name
            return f"AX_ANIM_PTR({name})"

        return head + sym_re.sub(repl_sym, body) + tail

    return table_re.sub(repl_table, text)


def process_file(
    path: Path,
    lz_subdir: str,
    *,
    force: bool,
    is_shared_c: bool,
) -> tuple[int, int, int, set[str]]:
    """Returns (compressed, skipped, rebuilt, all_anim_names_in_file)."""
    text = path.read_text()
    all_names: set[str] = set()
    compressed = skipped = rebuilt = 0
    out_parts: list[str] = []
    pos = 0

    # Collect existing u8 INCBINs (already compressed).
    for m in ANIM_U8_INCBIN_RE.finditer(text):
        all_names.add(m.group(2))

    matches = list(ANIM_DEF_RE.finditer(text))
    for m in matches:
        out_parts.append(text[pos : m.start()])
        static_kw, name, body = m.group(1) or "", m.group(2), m.group(3)
        all_names.add(name)

        try:
            raw = pack_anim_body(body)
        except ValueError:
            out_parts.append(m.group(0))
            skipped += 1
            pos = m.end()
            continue

        if len(raw) > AX_ANIM_CACHE_SIZE:
            out_parts.append(m.group(0))
            skipped += 1
            pos = m.end()
            continue

        rel = f"graphics/ax/anim_lz/{lz_subdir}/{name}.lz"
        lz_path = ROOT / rel
        lz_path.parent.mkdir(parents=True, exist_ok=True)

        need_build = force or not lz_path.exists()
        if need_build:
            blob = lz77_with_gmlz(raw)
            if len(blob) >= len(raw):
                out_parts.append(m.group(0))
                skipped += 1
                pos = m.end()
                continue
            if lz77_decompress(blob[len(GMLZ) :]) != raw:
                raise SystemExit(f"LZ round-trip failed for {name}")
            lz_path.write_bytes(blob)
            rebuilt += 1
        else:
            blob = lz_path.read_bytes()
            if len(blob) >= len(raw):
                out_parts.append(m.group(0))
                skipped += 1
                pos = m.end()
                continue

        static_prefix = "static " if static_kw or not is_shared_c else ""
        # Shared symbols are global (no static).
        if is_shared_c:
            static_prefix = ""
        elif static_kw:
            static_prefix = "static "

        out_parts.append(
            f'{static_prefix}const u8 {name}[] ALIGNED(4) = INCBIN_U8("{rel}");'
        )
        compressed += 1
        pos = m.end()

    out_parts.append(text[pos:])
    new_text = "".join(out_parts)

    # Wrap pointers in direction anim tables.
    # Also wrap gAxSharedAnim_* that appear in tables (may not be defined here).
    shared_names = set(
        re.findall(r"\bgAxSharedAnim_\d+\b", new_text)
    )
    new_text = wrap_anim_ptrs(new_text, all_names | shared_names)

    # Only insert the banner once. Deduped headers start with /* ax-table-deduped,
    # so startswith("/* ax-anim-lz") is false forever and used to append a new
    # banner (and rewrite the file) on every make → all monster_gfx*.o rebuild.
    banner = "/* ax-anim-lz: GMLZ anim sequences; AX_ANIM_PTR in tables */\n"
    # Collapse duplicates left by older buggy runs.
    while True:
        collapsed = new_text.replace(banner + banner, banner)
        if collapsed == new_text:
            break
        new_text = collapsed
    if banner not in new_text:
        if new_text.startswith("/* ax-table-deduped"):
            nl = new_text.find("\n") + 1
            new_text = new_text[:nl] + banner + new_text[nl:]
        else:
            new_text = banner + new_text

    if new_text != text:
        path.write_text(new_text)

    return compressed, skipped, rebuilt, all_names


def rewrite_shared_header(compressed_names: set[str]) -> None:
    if not SHARED_H.exists() or not compressed_names:
        return
    text = SHARED_H.read_text()
    new_text = text
    for name in compressed_names:
        new_text = re.sub(
            rf"extern const ax_anim {name}\[\]\s*;",
            f"extern const u8 {name}[];",
            new_text,
        )
    if "ax-anim-lz" not in new_text:
        new_text = (
            "/* ax-anim-lz: compressed symbols are const u8[]; use AX_ANIM_PTR */\n"
            + new_text
        )
    if new_text != text:
        SHARED_H.write_text(new_text)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--force", action="store_true")
    parser.add_argument(
        "--stamp",
        type=Path,
        help="touch when any .lz was written or stamp missing",
    )
    parser.add_argument("--quiet", action="store_true")
    parser.add_argument("--only", type=str, help="single species stem")
    args = parser.parse_args()

    if not GBAGFX.exists():
        raise SystemExit(f"{GBAGFX} missing; build tools/gbagfx first")

    total_c = total_s = total_r = 0
    shared_compressed: set[str] = set()

    paths: list[tuple[Path, str, bool]] = []
    if args.only:
        p = AX_DIR / f"{args.only}.h"
        if not p.exists():
            raise SystemExit(f"missing {p}")
        paths.append((p, args.only, False))
    else:
        for p in sorted(AX_DIR.glob("*.h")):
            paths.append((p, p.stem, False))
        if SHARED_C.exists():
            paths.append((SHARED_C, "shared", True))

    for path, sub, is_shared in paths:
        c, s, r, names = process_file(
            path, sub, force=args.force, is_shared_c=is_shared
        )
        total_c += c
        total_s += s
        total_r += r
        if is_shared:
            shared_compressed = {
                m.group(2) for m in ANIM_U8_INCBIN_RE.finditer(path.read_text())
            }

    if not args.only:
        rewrite_shared_header(shared_compressed)

    if args.stamp is not None:
        if total_r > 0 or not args.stamp.exists():
            args.stamp.parent.mkdir(parents=True, exist_ok=True)
            args.stamp.touch()

    if total_r > 0 or not args.quiet:
        print(
            f"ax anims: compressed {total_c}, skipped {total_s}, "
            f"lz rebuilt {total_r}"
        )


if __name__ == "__main__":
    main()
