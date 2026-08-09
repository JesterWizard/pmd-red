namespace RescueEditor.Core;

/// <summary>
/// Floating emotion overlays attached to ground lives (NOTICE/QUESTION/SHOCK/SWEAT).
/// Loads a single 8×8 frame from <c>data/effects/efob088–094</c> or ROM tiles.
/// </summary>
public sealed class EmotionEffectAtlas
{
    // Matches NOTICE/QUESTION/… function scripts (arg1 = efob index).
    public const int NoticeId = 88;   // !
    public const int QuestionId = 89; // ?
    public const int ShockId = 91;
    public const int SweatId = 92;
    public const int SmileId = 93;
    public const int AngryId = 94;

    private readonly string? _repositoryRoot;
    private readonly RomImage? _rom;
    private readonly Dictionary<int, RgbaImage?> _cache = new();

    public EmotionEffectAtlas(string? repositoryRoot, RomImage? rom = null)
    {
        _repositoryRoot = ResolveEffectsRoot(repositoryRoot);
        _rom = rom;
    }

    public void PrefetchCommon()
    {
        foreach (var id in new[] { NoticeId, QuestionId, ShockId, SweatId, SmileId, AngryId })
            _ = TryGet(id);
    }

    public RgbaImage? TryGet(int effectId)
    {
        if (effectId <= 0)
            return null;
        if (_cache.TryGetValue(effectId, out var cached))
            return cached;

        // Prefer ROM/PNG game tiles; drawn icons only if both fail.
        var image = TryLoadFromRom(effectId) ?? TryLoadFromPng(effectId) ?? TryDrawFallback(effectId);
        _cache[effectId] = image;
        return image;
    }

    private static string? ResolveEffectsRoot(string? hint)
    {
        foreach (var start in new[] { hint, Environment.CurrentDirectory, AppContext.BaseDirectory })
        {
            if (string.IsNullOrWhiteSpace(start))
                continue;
            try
            {
                var current = new DirectoryInfo(Path.GetFullPath(start));
                while (current is not null)
                {
                    var effects = Path.Combine(current.FullName, "data", "effects");
                    if (Directory.Exists(effects) &&
                        File.Exists(Path.Combine(effects, "efob088.png")))
                        return current.FullName;
                    if (Directory.Exists(Path.Combine(current.FullName, "graphics", "ax", "mon")))
                        return current.FullName;
                    current = current.Parent;
                }
            }
            catch
            {
                // try next
            }
        }
        return hint;
    }

    private RgbaImage? TryLoadFromPng(int effectId)
    {
        if (string.IsNullOrWhiteSpace(_repositoryRoot))
            return null;
        var name = $"efob{effectId:D3}";
        var path = Path.Combine(_repositoryRoot, "data", "effects", $"{name}.png");
        if (!File.Exists(path))
            return null;
        try
        {
            var sheet = RgbaImage.FromPng(File.ReadAllBytes(path));
            return sheet is null ? null : ExtractIconFrame(sheet, effectId);
        }
        catch
        {
            return null;
        }
    }

    private RgbaImage? TryLoadFromRom(int effectId)
    {
        if (_rom is null)
            return null;
        RetailTables.EffectEntry? entry = null;
        foreach (var e in RetailTables.Effects)
        {
            if (e.Name.Equals($"efob{effectId:D3}", StringComparison.OrdinalIgnoreCase))
            {
                entry = e;
                break;
            }
        }
        if (entry is null)
            return null;
        try
        {
            var asset = new AssetDescriptor
            {
                Id = $"effect:{entry.Value.Name}",
                Name = entry.Value.Name,
                Category = AssetCategory.Effects,
                Kind = AssetKind.Effect,
                Offset = unchecked((int)entry.Value.VirtualAddress),
                Metadata = new Dictionary<string, string>
                {
                    ["virtualAddress"] = $"0x{entry.Value.VirtualAddress:X8}",
                },
            };
            var preview = EffectRenderer.Render(_rom, asset);
            if (preview.Png is null)
                return null;
            var sheet = RgbaImage.FromPng(preview.Png);
            return sheet is null ? null : ExtractIconFrame(sheet, effectId);
        }
        catch
        {
            return null;
        }
    }

    /// <summary>
    /// Effect dumps are vertical 8×N frame strips (or ROM 16-col sheets). Take one 8×8 tile
    /// and normalize chroma-key cyan to the retail icon ink color.
    /// </summary>
    private static RgbaImage ExtractIconFrame(RgbaImage sheet, int effectId)
    {
        RgbaImage tile;
        if (sheet.Width <= 8 && sheet.Height >= 8)
        {
            // PNG strip: first frame with enough ink (frame 0 is the resting ! / ?).
            tile = CropTile(sheet, 0, 0) ?? sheet;
            for (var frame = 0; frame < sheet.Height / 8; frame++)
            {
                var candidate = CropTile(sheet, 0, frame * 8);
                if (candidate is not null && CountOpaque(candidate) >= 4)
                {
                    tile = candidate;
                    break;
                }
            }
        }
        else
        {
            // ROM sheet: tile 0 at top-left.
            tile = CropTile(sheet, 0, 0) ?? sheet;
        }

        return RecolorIcon(tile, effectId);
    }

    private static RgbaImage? CropTile(RgbaImage sheet, int x0, int y0)
    {
        if (x0 < 0 || y0 < 0 || x0 + 8 > sheet.Width || y0 + 8 > sheet.Height)
            return null;
        var pixels = new byte[8 * 8 * 4];
        for (var row = 0; row < 8; row++)
        for (var col = 0; col < 8; col++)
        {
            var src = ((y0 + row) * sheet.Width + (x0 + col)) * 4;
            var dst = (row * 8 + col) * 4;
            pixels[dst] = sheet.Pixels[src];
            pixels[dst + 1] = sheet.Pixels[src + 1];
            pixels[dst + 2] = sheet.Pixels[src + 2];
            pixels[dst + 3] = sheet.Pixels[src + 3];
        }
        return new RgbaImage(8, 8, pixels);
    }

    private static int CountOpaque(RgbaImage img)
    {
        var n = 0;
        for (var i = 3; i < img.Pixels.Length; i += 4)
        {
            if (img.Pixels[i] > 16)
                n++;
        }
        return n;
    }

    private static RgbaImage RecolorIcon(RgbaImage tile, int effectId)
    {
        var (inkR, inkG, inkB) = effectId switch
        {
            NoticeId or QuestionId => ((byte)0xF8, (byte)0xF8, (byte)0xF8),
            SweatId => ((byte)0x70, (byte)0xD0, (byte)0xF8),
            ShockId or SmileId => ((byte)0xF8, (byte)0xF0, (byte)0x40),
            AngryId => ((byte)0xF8, (byte)0x40, (byte)0x40),
            _ => ((byte)0xF8, (byte)0xF8, (byte)0xF8),
        };

        // Keep multi-color ROM tiles as-is; only remap pure chroma silhouettes.
        if (!IsMostlyChromaOrSingleInk(tile))
        {
            var copy = new byte[tile.Pixels.Length];
            Buffer.BlockCopy(tile.Pixels, 0, copy, 0, tile.Pixels.Length);
            for (var i = 0; i < copy.Length; i += 4)
            {
                if (copy[i + 3] < 16)
                    continue;
                if (GbaChroma.IsChromaKey(copy[i], copy[i + 1], copy[i + 2], copy[i + 3]))
                    copy[i + 3] = 0;
            }
            return new RgbaImage(tile.Width, tile.Height, copy);
        }

        var pixels = new byte[tile.Pixels.Length];
        for (var i = 0; i < tile.Pixels.Length; i += 4)
        {
            if (tile.Pixels[i + 3] < 16)
                continue;
            pixels[i] = inkR;
            pixels[i + 1] = inkG;
            pixels[i + 2] = inkB;
            pixels[i + 3] = 255;
        }
        return new RgbaImage(tile.Width, tile.Height, pixels);
    }

    private static bool IsMostlyChromaOrSingleInk(RgbaImage tile)
    {
        var opaque = 0;
        var chromaOrRed = 0;
        for (var i = 0; i < tile.Pixels.Length; i += 4)
        {
            if (tile.Pixels[i + 3] < 16)
                continue;
            opaque++;
            var r = tile.Pixels[i];
            var g = tile.Pixels[i + 1];
            var b = tile.Pixels[i + 2];
            if ((r < 40 && g > 180 && b > 180) || (r > 200 && g < 80 && b < 80))
                chromaOrRed++;
        }
        return opaque > 0 && chromaOrRed * 2 >= opaque;
    }

    private static RgbaImage? TryDrawFallback(int effectId) =>
        effectId switch
        {
            NoticeId => DrawBang(),
            QuestionId => DrawQuestion(),
            SweatId => DrawSweat(),
            ShockId => DrawShock(),
            SmileId => DrawSmile(),
            AngryId => DrawAngry(),
            _ => null,
        };

    private static RgbaImage DrawBang()
    {
        var img = New(8, 8);
        Fill(img, 3, 0, 2, 5, 0xF8, 0xF8, 0xF8);
        Fill(img, 3, 6, 2, 2, 0xF8, 0xF8, 0xF8);
        return img;
    }

    private static RgbaImage DrawQuestion()
    {
        var img = New(8, 8);
        Fill(img, 2, 0, 4, 2, 0xF8, 0xF8, 0xF8);
        Fill(img, 5, 2, 2, 2, 0xF8, 0xF8, 0xF8);
        Fill(img, 3, 4, 2, 1, 0xF8, 0xF8, 0xF8);
        Fill(img, 3, 6, 2, 2, 0xF8, 0xF8, 0xF8);
        return img;
    }

    private static RgbaImage DrawSweat()
    {
        var img = New(8, 8);
        Fill(img, 3, 0, 2, 2, 0x70, 0xD0, 0xF8);
        Fill(img, 2, 2, 4, 3, 0x70, 0xD0, 0xF8);
        Fill(img, 3, 5, 2, 2, 0x70, 0xD0, 0xF8);
        return img;
    }

    private static RgbaImage DrawShock()
    {
        var img = New(8, 8);
        Fill(img, 3, 0, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 0, 3, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 6, 3, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 3, 6, 2, 2, 0xF8, 0xF0, 0x40);
        return img;
    }

    private static RgbaImage DrawSmile()
    {
        var img = New(8, 8);
        Fill(img, 1, 2, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 5, 2, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 2, 5, 4, 2, 0xF8, 0xF0, 0x40);
        return img;
    }

    private static RgbaImage DrawAngry()
    {
        var img = New(8, 8);
        Fill(img, 0, 1, 3, 2, 0xF8, 0x40, 0x40);
        Fill(img, 5, 1, 3, 2, 0xF8, 0x40, 0x40);
        Fill(img, 1, 5, 6, 2, 0xF8, 0x40, 0x40);
        return img;
    }

    private static RgbaImage New(int w, int h) => new(w, h, new byte[w * h * 4]);

    private static void Fill(RgbaImage img, int x, int y, int w, int h, byte r, byte g, byte b)
    {
        for (var row = 0; row < h; row++)
        for (var col = 0; col < w; col++)
        {
            var px = x + col;
            var py = y + row;
            if (px < 0 || py < 0 || px >= img.Width || py >= img.Height)
                continue;
            var o = (py * img.Width + px) * 4;
            img.Pixels[o] = r;
            img.Pixels[o + 1] = g;
            img.Pixels[o + 2] = b;
            img.Pixels[o + 3] = 255;
        }
    }
}
