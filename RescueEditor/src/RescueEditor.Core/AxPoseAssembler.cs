using System.Text.RegularExpressions;

namespace RescueEditor.Core;

/// <summary>
/// Assembles multi-OAM AX poses from decomp headers + per-piece 4bpp tiles.
/// Large Pokémon dump each OAM piece separately; compound <c>ax_sprite</c> arrays
/// (with NULL padding / <c>sprite_N_1</c> parts) must be rebuilt before OAM blit.
/// </summary>
public static partial class AxPoseAssembler
{
    [GeneratedRegex(
        @"AX_POSE\(\s*(-?\d+)\s*,\s*OAM1\(\s*(-?\d+)\s*,\s*ST_OAM_(\w+)\s*,\s*(-?\d+)\s*\)\s*,\s*OAM2\(\s*(-?\d+)\s*,\s*ST_OAM_SIZE_(\d+)\s*,\s*FLIP\(\s*(\d+)\s*,\s*(\d+)\s*\)\s*,\s*(-?\d+)\s*,\s*(-?\d+)\s*\)\s*,\s*OAM3\(\s*(-?\d+)\s*,\s*(-?\d+)\s*,\s*(-?\d+)\s*\)",
        RegexOptions.CultureInvariant)]
    private static partial Regex PosePieceRegex();

    [GeneratedRegex(
        @"static const ax_pose s\w+Pose(\d+)\[\]\s*=\s*\{(.*?)\};",
        RegexOptions.Singleline | RegexOptions.CultureInvariant)]
    private static partial Regex PoseArrayRegex();

    [GeneratedRegex(
        @"static const ax_sprite s\w+Sprites(\d+)\[\]\s*=\s*\{(.*?)\};",
        RegexOptions.Singleline | RegexOptions.CultureInvariant)]
    private static partial Regex SpriteArrayRegex();

    [GeneratedRegex(
        @"\{(?:NULL\s*,\s*(\d+)|s\w+Gfx(\d+)(?:_(\d+))?)[^}]*\}",
        RegexOptions.CultureInvariant)]
    private static partial Regex SpritePartRegex();

    [GeneratedRegex(
        @"static const ax_pose \*const s\w+Poses\w*\[\]\s*=\s*\{(.*?)\};",
        RegexOptions.Singleline | RegexOptions.CultureInvariant)]
    private static partial Regex PoseIdTableRegex();

    [GeneratedRegex(@"s\w+Pose(\d+)", RegexOptions.CultureInvariant)]
    private static partial Regex PoseSymbolRegex();

    private static readonly Dictionary<string, IReadOnlyList<int>?> PoseIdTables = new(StringComparer.OrdinalIgnoreCase);

    private static IReadOnlyList<int>? GetPoseIdTable(string repositoryRoot, string folder)
    {
        var key = repositoryRoot + '\0' + folder;
        if (PoseIdTables.TryGetValue(key, out var cached))
            return cached;

        var header = FindAxHeader(repositoryRoot, folder);
        if (header is null || !File.Exists(header))
        {
            PoseIdTables[key] = null;
            return null;
        }

        try
        {
            var text = File.ReadAllText(header);
            var match = PoseIdTableRegex().Match(text);
            if (!match.Success)
            {
                PoseIdTables[key] = null;
                return null;
            }

            var list = new List<int>();
            foreach (Match sym in PoseSymbolRegex().Matches(match.Groups[1].Value))
                list.Add(int.Parse(sym.Groups[1].Value));
            PoseIdTables[key] = list;
            return list;
        }
        catch
        {
            PoseIdTables[key] = null;
            return null;
        }
    }

    /// <summary>
    /// True when idle drawing needs AX pose assembly (boss-sized / multi-OAM).
    /// Includes single-OAM monsters whose sprite arrays use <c>{NULL,pad}</c> or
    /// <c>sprite_N_k</c> chunks (e.g. Ho-Oh 64×64) — sheet PNGs are only strips.
    /// </summary>
    public static bool IsMultiPieceMonster(string repositoryRoot, string folder)
    {
        var pieces = ParsePose(repositoryRoot, folder, poseNumber: 1);
        if (pieces is null || pieces.Count == 0)
            return false;

        var header = FindAxHeader(repositoryRoot, folder);
        var arrays = header is not null ? ParseSpriteArrays(header) : null;
        foreach (var piece in pieces)
        {
            var spriteNum = piece.SpriteId + 1;
            if (arrays is not null &&
                arrays.TryGetValue(spriteNum, out var parts) &&
                parts.Any(p => p.IsPadding || !string.IsNullOrEmpty(p.Suffix) || parts.Count > 1))
                return true;
        }

        // Several OAM pieces without compound VRAM still need a shared assemble.
        return pieces.Count >= 4;
    }

    /// <summary>Test hook: tile bytes for <c>sprite_N</c> after applying <c>{NULL,pad}</c> gaps.</summary>
    public static int MeasureSpriteTileBytes(string repositoryRoot, string folder, int spriteNum)
    {
        var header = FindAxHeader(repositoryRoot, folder);
        var arrays = header is not null ? ParseSpriteArrays(header) : null;
        var spriteDir = Path.Combine(repositoryRoot, "graphics", "ax", "mon", folder);
        var tiles = BuildSpriteTiles(spriteDir, spriteNum, arrays);
        return tiles?.Length ?? 0;
    }

    /// <summary>
    /// Assemble by AX pose-table index (<c>sAxPosesXxx[poseId]</c>), resolving
    /// deduped aliases (e.g. poseId 229 → <c>sMoltresPose230</c>).
    /// </summary>
    public static RgbaImage? TryAssemblePoseId(string repositoryRoot, string folder, int poseId)
    {
        if (poseId < 0)
            return null;
        var poseNumber = ResolvePoseNumber(repositoryRoot, folder, poseId);
        return poseNumber is int n ? TryAssemble(repositoryRoot, folder, n) : null;
    }

    /// <summary>Map <c>sAxPosesXxx[poseId]</c> → 1-based <c>sXxxPoseN</c> symbol number.</summary>
    public static int? ResolvePoseNumber(string repositoryRoot, string folder, int poseId)
    {
        if (poseId < 0)
            return null;
        var table = GetPoseIdTable(repositoryRoot, folder);
        if (table is null || poseId >= table.Count)
            return null;
        return table[poseId];
    }

    /// <summary>1-based pose index matching <c>sXxxPoseN</c> (Pose1 = south).</summary>
    public static RgbaImage? TryAssemble(string repositoryRoot, string folder, int poseNumber)
    {
        if (poseNumber <= 0)
            return null;

        var pieces = ParsePose(repositoryRoot, folder, poseNumber);
        if (pieces is null || pieces.Count == 0)
            return null;

        var spriteDir = Path.Combine(repositoryRoot, "graphics", "ax", "mon", folder);
        var header = FindAxHeader(repositoryRoot, folder);
        var spriteArrays = header is not null ? ParseSpriteArrays(header) : null;

        // Retail uploads each pose sprite into a shared OBJ VRAM block; OAM3 tileNum
        // indexes that block (sprite.c RegisterSpriteParts / AddAxSprite).
        var vram = BuildSharedVram(spriteDir, pieces, spriteArrays);
        if (vram is null || vram.Length < 32)
            return null;

        var palette = TryLoadIndexedPalette(Path.Combine(spriteDir, $"sprite_{pieces[0].SpriteId + 1}.png"))
            ?? TryLoadIndexedPalette(Path.Combine(spriteDir, $"sprite_{pieces[0].SpriteId + 1}_1.png"))
            ?? TryLoadIndexedPalette(Path.Combine(spriteDir, "sprite_1.png"));
        if (palette is null)
            return null;

        var blits = new List<(RgbaImage Image, int X, int Y, bool FlipH, bool FlipV)>();
        foreach (var piece in pieces)
        {
            if (piece.SpriteId < 0)
                continue;
            var image = RenderOamFromVram(vram, palette, piece.TileNum, piece.OamW, piece.OamH);
            if (image is null)
                continue;
            GbaChroma.KeyOut(image);
            blits.Add((image, piece.X, piece.Y, piece.FlipH, piece.FlipV));
        }

        if (blits.Count == 0)
            return null;

        if (blits.Count == 1 && !blits[0].FlipH && !blits[0].FlipV)
            return blits[0].Image;

        var minX = blits.Min(b => b.X);
        var minY = blits.Min(b => b.Y);
        var maxX = blits.Max(b => b.X + b.Image.Width);
        var maxY = blits.Max(b => b.Y + b.Image.Height);
        var width = Math.Max(1, maxX - minX);
        var height = Math.Max(1, maxY - minY);
        var canvas = new RgbaImage(width, height, new byte[width * height * 4]);

        foreach (var blit in blits)
            Blit(canvas, blit.Image, blit.X - minX, blit.Y - minY, blit.FlipH, blit.FlipV);

        return canvas;
    }

    /// <summary>
    /// Idle direction → 1-based pose of the first frame in that facing group.
    /// AX idle packs 3 poses per direction (S…SW): Pose1–3 south, Pose13–15 north, etc.
    /// </summary>
    public static int IdlePoseForDirection(int direction) => ((direction & 7) * 3) + 1;

    public static IReadOnlyList<PosePiece>? ParsePose(string repositoryRoot, string folder, int poseNumber)
    {
        var header = FindAxHeader(repositoryRoot, folder);
        if (header is null || !File.Exists(header))
            return null;

        string text;
        try
        {
            text = File.ReadAllText(header);
        }
        catch
        {
            return null;
        }

        foreach (Match array in PoseArrayRegex().Matches(text))
        {
            if (!int.TryParse(array.Groups[1].Value, out var n) || n != poseNumber)
                continue;

            var pieces = new List<PosePiece>();
            foreach (Match m in PosePieceRegex().Matches(array.Groups[2].Value))
            {
                var spriteId = int.Parse(m.Groups[1].Value);
                var yParam = int.Parse(m.Groups[2].Value);
                var shapeName = m.Groups[3].Value;
                var unk = int.Parse(m.Groups[4].Value);
                var xParam = int.Parse(m.Groups[5].Value);
                var size = int.Parse(m.Groups[6].Value);
                var flipH = m.Groups[7].Value != "0";
                var flipV = m.Groups[8].Value != "0";
                var unk1 = int.Parse(m.Groups[9].Value);
                var unk2 = int.Parse(m.Groups[10].Value);
                var tileNum = int.Parse(m.Groups[11].Value);

                // Match AddAxSprite: pos += raw - bias (src/sprite.c).
                var flags1 = (yParam & 0xFF) | ((unk & 0x3) << 8) | (ShapeCode(shapeName) << 14);
                var flags2 = (xParam & 0x1FF)
                    | ((unk2 & 1) << 8)
                    | ((unk1 & 1) << 9)
                    | ((flipH ? 1 : 0) << 12)
                    | ((flipV ? 1 : 0) << 13)
                    | ((size & 3) << 14);
                var x = (flags2 & 0x1FF) - 0x100;
                var y = (flags1 & 0x3FF) - 0x200;
                var (oamW, oamH) = OamDims(ShapeCode(shapeName), size);
                pieces.Add(new PosePiece(spriteId, x, y, oamW, oamH, flipH, flipV, tileNum));
            }

            return pieces;
        }

        return null;
    }

    public readonly record struct PosePiece(
        int SpriteId, int X, int Y, int OamW, int OamH, bool FlipH, bool FlipV, int TileNum = 0);

    private static Dictionary<int, List<SpritePart>>? ParseSpriteArrays(string headerPath)
    {
        try
        {
            var text = File.ReadAllText(headerPath);
            var result = new Dictionary<int, List<SpritePart>>();
            foreach (Match array in SpriteArrayRegex().Matches(text))
            {
                if (!int.TryParse(array.Groups[1].Value, out var spriteNum))
                    continue;
                var parts = new List<SpritePart>();
                foreach (Match part in SpritePartRegex().Matches(array.Groups[2].Value))
                {
                    if (part.Groups[1].Success)
                    {
                        var pad = int.Parse(part.Groups[1].Value);
                        if (pad > 0) // {NULL, 0} terminates the array
                            parts.Add(SpritePart.Padding(pad));
                    }
                    else if (part.Groups[2].Success)
                    {
                        var fileNum = int.Parse(part.Groups[2].Value);
                        var suffix = part.Groups[3].Success ? "_" + part.Groups[3].Value : "";
                        parts.Add(SpritePart.Gfx(fileNum, suffix));
                    }
                }

                if (parts.Count > 0)
                    result[spriteNum] = parts;
            }

            return result;
        }
        catch
        {
            return null;
        }
    }

    private readonly record struct SpritePart(int PadBytes, int FileNum, string Suffix)
    {
        public static SpritePart Padding(int bytes) => new(bytes, 0, "");
        public static SpritePart Gfx(int fileNum, string suffix) => new(0, fileNum, suffix);
        public bool IsPadding => PadBytes > 0;
    }

    private static byte[]? BuildSharedVram(
        string spriteDir,
        IReadOnlyList<PosePiece> pieces,
        Dictionary<int, List<SpritePart>>? spriteArrays)
    {
        using var ms = new MemoryStream();
        foreach (var piece in pieces)
        {
            if (piece.SpriteId < 0)
                continue;
            // Retail uploads once per pose piece that references a sprite (in order).
            var spriteNum = piece.SpriteId + 1;
            var tiles = BuildSpriteTiles(spriteDir, spriteNum, spriteArrays);
            if (tiles is null)
                return null;
            ms.Write(tiles);
        }

        return ms.Length > 0 ? ms.ToArray() : null;
    }

    private static RgbaImage? RenderOamFromVram(
        byte[] vram, RgbaColor[] palette, int tileNum, int oamW, int oamH)
    {
        if (oamW < 8 || oamH < 8 || tileNum < 0)
            return null;
        var tileOff = tileNum * 32;
        if (tileOff >= vram.Length)
            return null;
        // Enough remaining bytes for the OAM footprint (missing tail tiles stay blank).
        return RenderOamSprite(vram.AsSpan(tileOff), palette, oamW, oamH);
    }

    private static RgbaImage? TryLoadPieceImage(
        string spriteDir,
        int spriteId,
        int oamW,
        int oamH,
        Dictionary<int, List<SpritePart>>? spriteArrays)
    {
        // Pose sprite index N → sXxxSprites(N+1) / sprite_(N+1)* files.
        var spriteNum = spriteId + 1;
        var palette = TryLoadIndexedPalette(Path.Combine(spriteDir, $"sprite_{spriteNum}.png"))
            ?? TryLoadIndexedPalette(Path.Combine(spriteDir, $"sprite_{spriteNum}_1.png"));

        var tiles = BuildSpriteTiles(spriteDir, spriteNum, spriteArrays);
        if (tiles is not null && palette is not null)
        {
            var fromTiles = RenderOamSprite(tiles, palette, oamW, oamH);
            if (fromTiles is not null)
                return fromTiles;
        }

        var pngPath = Path.Combine(spriteDir, $"sprite_{spriteNum}.png");
        if (!File.Exists(pngPath))
            return null;
        try
        {
            return RgbaImage.FromPng(File.ReadAllBytes(pngPath));
        }
        catch
        {
            return null;
        }
    }

    private static byte[]? BuildSpriteTiles(
        string spriteDir,
        int spriteNum,
        Dictionary<int, List<SpritePart>>? spriteArrays)
    {
        if (spriteArrays is not null && spriteArrays.TryGetValue(spriteNum, out var parts))
        {
            using var ms = new MemoryStream();
            foreach (var part in parts)
            {
                if (part.IsPadding)
                {
                    ms.Write(new byte[part.PadBytes]);
                    continue;
                }

                var name = $"sprite_{part.FileNum}{part.Suffix}";
                var chunk = TryLoadTiles(Path.Combine(spriteDir, name));
                if (chunk is null)
                    return null;
                ms.Write(chunk);
            }

            return ms.Length > 0 ? ms.ToArray() : null;
        }

        return TryLoadTiles(Path.Combine(spriteDir, $"sprite_{spriteNum}"));
    }

    private static byte[]? TryLoadTiles(string baseName)
    {
        var rawPath = baseName + ".4bpp";
        if (File.Exists(rawPath))
        {
            try { return File.ReadAllBytes(rawPath); }
            catch { /* fall through */ }
        }

        var lzPath = baseName + ".4bpp.lz";
        if (File.Exists(lzPath))
        {
            try { return Compression.DecompressGmlz(File.ReadAllBytes(lzPath)); }
            catch { /* fall through */ }
        }

        return null;
    }

    private static RgbaColor[]? TryLoadIndexedPalette(string pngPath)
    {
        if (!File.Exists(pngPath))
            return null;
        try
        {
            var data = File.ReadAllBytes(pngPath);
            var i = 8;
            while (i + 8 <= data.Length)
            {
                var len = (data[i] << 24) | (data[i + 1] << 16) | (data[i + 2] << 8) | data[i + 3];
                var type = System.Text.Encoding.ASCII.GetString(data, i + 4, 4);
                if (type == "PLTE" && len >= 3)
                {
                    var colors = new RgbaColor[16];
                    var entries = Math.Min(16, len / 3);
                    for (var c = 0; c < entries; c++)
                    {
                        var o = i + 8 + c * 3;
                        colors[c] = c == 0
                            ? new RgbaColor(0, 0, 0, 0)
                            : new RgbaColor(data[o], data[o + 1], data[o + 2], 255);
                    }

                    return colors;
                }

                i += 12 + len;
                if (type == "IEND")
                    break;
            }
        }
        catch
        {
            // ignore
        }

        return null;
    }

    private static RgbaImage? RenderOamSprite(byte[] tiles, RgbaColor[] palette, int oamW, int oamH) =>
        RenderOamSprite(tiles.AsSpan(), palette, oamW, oamH);

    private static RgbaImage? RenderOamSprite(ReadOnlySpan<byte> tiles, RgbaColor[] palette, int oamW, int oamH)
    {
        if (oamW < 8 || oamH < 8 || tiles.Length < 32)
            return null;

        var tilesX = oamW / 8;
        var tilesY = oamH / 8;
        var needed = tilesX * tilesY;
        var pixels = new byte[oamW * oamH * 4];

        for (var ty = 0; ty < tilesY; ty++)
        for (var tx = 0; tx < tilesX; tx++)
        {
            var tileIndex = ty * tilesX + tx;
            if (tileIndex >= needed)
                continue;
            var tileOff = tileIndex * 32;
            if (tileOff + 32 > tiles.Length)
                continue;
            BlitTile(tiles.Slice(tileOff, 32), palette, pixels, oamW, tx * 8, ty * 8);
        }

        return new RgbaImage(oamW, oamH, pixels);
    }

    private static void BlitTile(
        ReadOnlySpan<byte> tile,
        RgbaColor[] palette,
        byte[] pixels,
        int stride,
        int destX,
        int destY)
    {
        for (var row = 0; row < 8; row++)
        for (var col = 0; col < 8; col++)
        {
            var packed = tile[row * 4 + col / 2];
            var index = (col & 1) == 0 ? packed & 0xF : packed >> 4;
            if (index == 0 || index >= palette.Length)
                continue;
            var color = palette[index];
            if (color.A == 0)
                continue;
            var o = ((destY + row) * stride + destX + col) * 4;
            pixels[o] = color.R;
            pixels[o + 1] = color.G;
            pixels[o + 2] = color.B;
            pixels[o + 3] = color.A;
        }
    }

    private static string? FindAxHeader(string repositoryRoot, string folder)
    {
        var direct = Path.Combine(repositoryRoot, "src", "data", "ax", folder + ".h");
        if (File.Exists(direct))
            return direct;

        var axDir = Path.Combine(repositoryRoot, "src", "data", "ax");
        if (!Directory.Exists(axDir))
            return null;

        return Directory.EnumerateFiles(axDir, "*.h")
            .FirstOrDefault(f => Path.GetFileNameWithoutExtension(f)
                .Equals(folder, StringComparison.OrdinalIgnoreCase));
    }

    private static int ShapeCode(string name) => name switch
    {
        "SQUARE" => 0,
        "H_RECTANGLE" => 1,
        "V_RECTANGLE" => 2,
        _ => 0,
    };

    private static (int W, int H) OamDims(int shape, int size) => (shape, size) switch
    {
        (0, 0) => (8, 8),
        (0, 1) => (16, 16),
        (0, 2) => (32, 32),
        (0, 3) => (64, 64),
        (1, 0) => (16, 8),
        (1, 1) => (32, 8),
        (1, 2) => (32, 16),
        (1, 3) => (64, 32),
        (2, 0) => (8, 16),
        (2, 1) => (8, 32),
        (2, 2) => (16, 32),
        (2, 3) => (32, 64),
        _ => (8, 8),
    };

    private static void Blit(RgbaImage dest, RgbaImage src, int x, int y, bool flipH, bool flipV)
    {
        for (var row = 0; row < src.Height; row++)
        for (var col = 0; col < src.Width; col++)
        {
            var sx = flipH ? src.Width - 1 - col : col;
            var sy = flipV ? src.Height - 1 - row : row;
            var srcOff = (sy * src.Width + sx) * 4;
            var a = src.Pixels[srcOff + 3];
            if (a < 8)
                continue;
            var dx = x + col;
            var dy = y + row;
            if ((uint)dx >= (uint)dest.Width || (uint)dy >= (uint)dest.Height)
                continue;
            var dstOff = (dy * dest.Width + dx) * 4;
            dest.Pixels[dstOff] = src.Pixels[srcOff];
            dest.Pixels[dstOff + 1] = src.Pixels[srcOff + 1];
            dest.Pixels[dstOff + 2] = src.Pixels[srcOff + 2];
            dest.Pixels[dstOff + 3] = a;
        }
    }
}
