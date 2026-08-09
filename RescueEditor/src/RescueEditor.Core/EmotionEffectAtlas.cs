namespace RescueEditor.Core;

/// <summary>
/// Floating emotion overlays attached to ground lives (NOTICE/QUESTION/SHOCK/SWEAT).
/// Assets are <c>data/effects/efob088–093</c> (retail effect ids 88–93).
/// </summary>
public sealed class EmotionEffectAtlas
{
    // Matches NOTICE/QUESTION/… function scripts (arg1 = efob index).
    public const int NoticeId = 88;   // !
    public const int QuestionId = 89; // ?
    public const int ShockId = 91;
    public const int SweatId = 92;
    public const int SmileId = 93;   // "shop"/smile face
    public const int AngryId = 94;

    private readonly string? _repositoryRoot;
    private readonly RomImage? _rom;
    private readonly Dictionary<int, RgbaImage?> _cache = new();

    public EmotionEffectAtlas(string? repositoryRoot, RomImage? rom = null)
    {
        _repositoryRoot = repositoryRoot;
        _rom = rom;
    }

    public RgbaImage? TryGet(int effectId)
    {
        if (effectId <= 0)
            return null;
        if (_cache.TryGetValue(effectId, out var cached))
            return cached;

        var image = TryLoadFromPng(effectId) ?? TryLoadFromRom(effectId) ?? TryDrawFallback(effectId);
        _cache[effectId] = image;
        return image;
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
            return sheet is null ? null : CompactTileStrip(sheet);
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
            return sheet is null ? null : CompactTileStrip(sheet, maxSize: 32);
        }
        catch
        {
            return null;
        }
    }

    /// <summary>
    /// Effect dumps are often an 8×N tile strip. Pack the first opaque tiles into a small icon.
    /// </summary>
    private static RgbaImage CompactTileStrip(RgbaImage sheet, int maxSize = 24)
    {
        // Find opaque bounding box.
        var minX = sheet.Width;
        var minY = sheet.Height;
        var maxX = 0;
        var maxY = 0;
        var any = false;
        for (var y = 0; y < sheet.Height; y++)
        for (var x = 0; x < sheet.Width; x++)
        {
            var a = sheet.Pixels[(y * sheet.Width + x) * 4 + 3];
            if (a < 16) continue;
            any = true;
            if (x < minX) minX = x;
            if (y < minY) minY = y;
            if (x > maxX) maxX = x;
            if (y > maxY) maxY = y;
        }
        if (!any)
            return sheet;

        // Prefer first ~3 tile rows for animated strips (icon-sized).
        var tileH = 8;
        var preferBottom = Math.Min(maxY, minY + tileH * 3 - 1);
        maxY = Math.Min(maxY, preferBottom);

        var w = Math.Clamp(maxX - minX + 1, 1, maxSize);
        var h = Math.Clamp(maxY - minY + 1, 1, maxSize);
        var pixels = new byte[w * h * 4];
        for (var row = 0; row < h; row++)
        for (var col = 0; col < w; col++)
        {
            var sx = minX + col;
            var sy = minY + row;
            if (sx >= sheet.Width || sy >= sheet.Height)
                continue;
            var src = (sy * sheet.Width + sx) * 4;
            var dst = (row * w + col) * 4;
            pixels[dst] = sheet.Pixels[src];
            pixels[dst + 1] = sheet.Pixels[src + 1];
            pixels[dst + 2] = sheet.Pixels[src + 2];
            pixels[dst + 3] = sheet.Pixels[src + 3];
        }
        return new RgbaImage(w, h, pixels);
    }

    private static RgbaImage? TryDrawFallback(int effectId)
    {
        // Tiny procedural icons when assets are missing.
        return effectId switch
        {
            NoticeId => DrawBang(),
            QuestionId => DrawQuestion(),
            SweatId => DrawSweat(),
            ShockId => DrawShock(),
            SmileId => DrawSmile(),
            AngryId => DrawAngry(),
            _ => null,
        };
    }

    private static RgbaImage DrawBang()
    {
        var img = New(10, 14);
        Fill(img, 4, 1, 2, 8, 0xF8, 0xF8, 0xF8);
        Fill(img, 4, 11, 2, 2, 0xF8, 0xF8, 0xF8);
        return img;
    }

    private static RgbaImage DrawQuestion()
    {
        var img = New(10, 14);
        Fill(img, 2, 1, 6, 2, 0xF8, 0xF8, 0xF8);
        Fill(img, 7, 3, 2, 3, 0xF8, 0xF8, 0xF8);
        Fill(img, 4, 6, 3, 2, 0xF8, 0xF8, 0xF8);
        Fill(img, 4, 8, 2, 2, 0xF8, 0xF8, 0xF8);
        Fill(img, 4, 11, 2, 2, 0xF8, 0xF8, 0xF8);
        return img;
    }

    private static RgbaImage DrawSweat()
    {
        var img = New(8, 12);
        Fill(img, 3, 0, 2, 2, 0x70, 0xD0, 0xF8);
        Fill(img, 2, 2, 4, 3, 0x70, 0xD0, 0xF8);
        Fill(img, 3, 5, 2, 2, 0x70, 0xD0, 0xF8);
        return img;
    }

    private static RgbaImage DrawShock()
    {
        var img = New(14, 14);
        Fill(img, 6, 0, 2, 4, 0xF8, 0xF0, 0x40);
        Fill(img, 0, 6, 4, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 10, 6, 4, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 6, 10, 2, 4, 0xF8, 0xF0, 0x40);
        return img;
    }

    private static RgbaImage DrawSmile()
    {
        var img = New(12, 8);
        Fill(img, 2, 2, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 8, 2, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 3, 5, 6, 2, 0xF8, 0xF0, 0x40);
        return img;
    }

    private static RgbaImage DrawAngry()
    {
        var img = New(12, 12);
        Fill(img, 1, 2, 3, 2, 0xF8, 0x40, 0x40);
        Fill(img, 8, 2, 3, 2, 0xF8, 0x40, 0x40);
        Fill(img, 2, 7, 8, 2, 0xF8, 0x40, 0x40);
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
