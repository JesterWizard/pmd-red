namespace RescueEditor.Core;

/// <summary>Floor-item icons from <c>itempat</c> and trap tiles from <c>trappat</c>.</summary>
public sealed class DungeonIconAtlas
{
    private const int TileBytes = 32;
    private const int ItemIconTiles = 4;
    private const int TrapCellTiles = 9;

    private static readonly byte[] TrapPaletteBanks =
    [
        12, 12, 12, 12, 12, 13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 13, 12, 12,
    ];

    private readonly byte[] _itemTiles;
    private readonly RgbaColor[] _itemPal;
    private readonly byte[] _trapTiles;
    private readonly RgbaColor[] _trapPal;
    private readonly Dictionary<int, RgbaImage?> _items = new();
    private readonly Dictionary<int, RgbaImage?> _traps = new();

    private DungeonIconAtlas(byte[] itemTiles, RgbaColor[] itemPal, byte[] trapTiles, RgbaColor[] trapPal)
    {
        _itemTiles = itemTiles;
        _itemPal = itemPal;
        _trapTiles = trapTiles;
        _trapPal = trapPal;
    }

    public static DungeonIconAtlas? TryLoad(RomImage rom, int tileset)
    {
        if (!TryLoadPat(rom, "itempat", out var itemTiles, out _) || itemTiles.Length < TileBytes)
            return null;
        TryLoadPat(rom, "trappat", out var trapTiles, out var trapPalBytes);
        var repo = CatalogBuilder.FindRepositoryRoot(rom.Path);
        var itemPal = LoadItemPalette(rom, repo) ?? FallbackPalette();
        var trapPal = DecodeRgbx(trapPalBytes) ?? itemPal;
        return new DungeonIconAtlas(itemTiles, itemPal, trapTiles ?? [], trapPal);
    }

    public RgbaImage? TryGetItem(int itemId)
    {
        if (_items.TryGetValue(itemId, out var cached))
            return cached;
        var sprite = DungeonBuiltinNames.ItemSprite(itemId);
        var palBank = DungeonBuiltinNames.ItemPalette(itemId);
        var image = RenderGrid(_itemTiles, _itemPal, sprite * ItemIconTiles, 2, 2, palBank);
        _items[itemId] = image;
        return image;
    }

    public RgbaImage? TryGetTrap(int trapId)
    {
        if (_traps.TryGetValue(trapId, out var cached))
            return cached;
        if ((uint)trapId >= TrapPaletteBanks.Length)
        {
            _traps[trapId] = null;
            return null;
        }

        var palBank = TrapPaletteBanks[trapId] == 13 ? 1 : 0;
        var image = RenderGrid(_trapTiles, _trapPal, trapId * TrapCellTiles, 3, 3, palBank);
        _traps[trapId] = image;
        return image;
    }

    private static RgbaImage? RenderGrid(
        byte[] tiles, RgbaColor[] pal, int firstTile, int cols, int rows, int palBank)
    {
        var needed = (firstTile + cols * rows) * TileBytes;
        if (firstTile < 0 || needed > tiles.Length)
            return null;
        var width = cols * 8;
        var height = rows * 8;
        var pixels = new byte[width * height * 4];
        for (var ty = 0; ty < rows; ty++)
        for (var tx = 0; tx < cols; tx++)
            BlitTile(tiles, pal, firstTile + ty * cols + tx, palBank, pixels, width, tx * 8, ty * 8);
        return new RgbaImage(width, height, pixels);
    }

    private static void BlitTile(
        byte[] tiles, RgbaColor[] pal, int tileIndex, int palBank, byte[] pixels, int stride, int destX, int destY)
    {
        var tileOff = tileIndex * TileBytes;
        if (tileOff < 0 || tileOff + TileBytes > tiles.Length)
            return;
        for (var row = 0; row < 8; row++)
        for (var col = 0; col < 8; col++)
        {
            var packed = tiles[tileOff + row * 4 + col / 2];
            var index = (col & 1) == 0 ? packed & 0xF : packed >> 4;
            if (index == 0)
                continue;
            var pi = palBank * 16 + index;
            if ((uint)pi >= (uint)pal.Length)
                continue;
            var c = pal[pi];
            var o = ((destY + row) * stride + destX + col) * 4;
            pixels[o] = c.R;
            pixels[o + 1] = c.G;
            pixels[o + 2] = c.B;
            pixels[o + 3] = 255;
        }
    }

    private static bool TryLoadPat(RomImage rom, string name, out byte[] tiles, out byte[]? pal)
    {
        tiles = [];
        pal = null;
        foreach (var archive in RomArchiveParser.FindArchives(rom))
        {
            var entry = archive.Entries.FirstOrDefault(e => e.Name.Equals(name, StringComparison.Ordinal));
            if (entry is null)
                continue;
            var magic = rom.ReadAscii(entry.Offset, 4);
            if (magic is not ("SIRO" or "SIR0"))
                continue;
            var table = rom.ReadPointerOffset(entry.Offset + 4);
            if (table < 0)
                continue;
            var tilesOff = rom.ReadPointerOffset(table);
            if (tilesOff < 0 || !rom.IsRangeValid(tilesOff, 4))
                continue;
            var count = rom.ReadInt32(tilesOff);
            if (count is <= 0 or > 1024 || !rom.IsRangeValid(tilesOff + 4, count * TileBytes))
                continue;
            tiles = rom.Copy(tilesOff + 4, count * TileBytes);
            var palOff = rom.ReadPointerOffset(table + 4);
            if (palOff >= 0 && rom.IsRangeValid(palOff, 0x80))
                pal = rom.Copy(palOff, 0x80);
            return true;
        }

        return false;
    }

    /// <summary>
    /// Floor items use OBJ palettes from monster <c>palet</c> / <c>graphics/ax/pal/N.pal</c>
    /// (GetItemPalette), not the dungeon tileset.
    /// </summary>
    private static RgbaColor[]? LoadItemPalette(RomImage rom, string? repositoryRoot)
    {
        var fromFiles = TryLoadAxPalettes(repositoryRoot);
        if (fromFiles is not null)
            return fromFiles;
        var offset = EmotionEffectAtlas.ResolvePaletOffset(rom);
        return offset < 0 ? null : DecodeRgbx(rom.Copy(offset, 14 * 64));
    }

    private static RgbaColor[]? TryLoadAxPalettes(string? repositoryRoot)
    {
        if (string.IsNullOrEmpty(repositoryRoot))
            return null;
        var palDir = Path.Combine(repositoryRoot, "graphics", "ax", "pal");
        var colors = new RgbaColor[14 * 16];
        var loaded = 0;
        for (var bank = 0; bank < 14; bank++)
        {
            var path = Path.Combine(palDir, $"{bank}.pal");
            if (!File.Exists(path) || !TryReadJascBank(File.ReadAllLines(path), colors, bank * 16))
                continue;
            loaded++;
        }

        return loaded >= 12 ? colors : null;
    }

    private static bool TryReadJascBank(string[] lines, RgbaColor[] dest, int destOffset)
    {
        if (destOffset + 16 > dest.Length)
            return false;
        var parsed = 0;
        foreach (var line in lines)
        {
            var parts = line.Split(' ', StringSplitOptions.RemoveEmptyEntries);
            if (parts.Length != 3 ||
                !byte.TryParse(parts[0], out var r) ||
                !byte.TryParse(parts[1], out var g) ||
                !byte.TryParse(parts[2], out var b))
                continue;
            dest[destOffset + parsed] = new RgbaColor(r, g, b, 255);
            parsed++;
            if (parsed == 16)
                return true;
        }

        return false;
    }

    private static RgbaColor[]? DecodeRgbx(byte[]? bytes)
    {
        if (bytes is null || bytes.Length < 64)
            return null;
        var count = bytes.Length / 4;
        var colors = new RgbaColor[count];
        for (var i = 0; i < count; i++)
        {
            var o = i * 4;
            colors[i] = new RgbaColor(bytes[o], bytes[o + 1], bytes[o + 2], 255);
        }

        return colors;
    }

    private static RgbaColor[] FallbackPalette()
    {
        var colors = new RgbaColor[256];
        for (var i = 0; i < colors.Length; i++)
        {
            var v = (byte)(i * 17);
            colors[i] = new RgbaColor(v, v, v, 255);
        }

        return colors;
    }
}
