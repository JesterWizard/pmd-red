using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public static class EffectIndexer
{
    private static readonly Regex EntryPattern = new(
        """\[\s*\d+\s*\]\s*=\s*\{\s*"(?<name>\w+)"\s*,\s*&gUnknown_(?<address>[0-9A-Fa-f]+)\s*,\s*\}""",
        RegexOptions.Compiled);

    public static IEnumerable<AssetDescriptor> Index(string? repositoryRoot)
    {
        if (string.IsNullOrWhiteSpace(repositoryRoot))
            yield break;

        var tablePath = Path.Combine(repositoryRoot, "src", "effect_files_table.c");
        if (!File.Exists(tablePath))
            yield break;

        foreach (Match match in EntryPattern.Matches(File.ReadAllText(tablePath)))
        {
            if (!uint.TryParse(match.Groups["address"].Value, System.Globalization.NumberStyles.HexNumber,
                    null, out var virtualAddress))
                continue;
            yield return Create(match.Groups["name"].Value, virtualAddress);
        }
    }

    public static IEnumerable<AssetDescriptor> IndexRetail()
    {
        foreach (var entry in RetailTables.Effects)
            yield return Create(entry.Name, entry.VirtualAddress);
    }

    private static AssetDescriptor Create(string name, uint virtualAddress)
    {
        return new AssetDescriptor
        {
            Id = $"effect:{name}",
            Name = name,
            Category = AssetCategory.Effects,
            Kind = AssetKind.Effect,
            Offset = unchecked((int)virtualAddress),
            Format = "SIRO",
            Description = "SIRO effect archive",
            Metadata = new Dictionary<string, string>
            {
                ["virtualAddress"] = $"0x{virtualAddress:X8}",
            },
        };
    }
}

public static class EffectRenderer
{
    public static PreviewContent Render(RomImage rom, AssetDescriptor asset)
    {
        var virtualAddress = asset.Metadata.TryGetValue("virtualAddress", out var text) &&
                             text.StartsWith("0x", StringComparison.OrdinalIgnoreCase)
            ? Convert.ToUInt32(text[2..], 16)
            : unchecked((uint)asset.Offset);
        var archiveOffset = rom.PointerToOffset(virtualAddress);
        if (archiveOffset < 0 || !rom.IsRangeValid(archiveOffset, 8))
            throw new InvalidDataException("Effect pointer is outside the ROM.");

        var magic = System.Text.Encoding.ASCII.GetString(rom.Slice(archiveOffset, 4));
        if (magic is not "SIRO" and not "SIR0")
            throw new InvalidDataException($"Unexpected effect archive magic {magic}.");
        var dataOffset = rom.ReadPointerOffset(archiveOffset + 4);
        if (dataOffset < 0 || !rom.IsRangeValid(dataOffset, 20))
            throw new InvalidDataException("Effect data pointer is invalid.");

        if (asset.Name.StartsWith("efob", StringComparison.OrdinalIgnoreCase))
            return RenderObjectEffect(rom, asset.Name, dataOffset);
        return RenderBackgroundEffect(rom, asset.Name, dataOffset);
    }

    private static PreviewContent RenderBackgroundEffect(RomImage rom, string name, int dataOffset)
    {
        var frameCount = rom.ReadInt32(dataOffset);
        var tileCount = rom.ReadInt32(dataOffset + 8);
        var tilesOffset = rom.ReadPointerOffset(dataOffset + 12);
        var paletteOffset = rom.ReadPointerOffset(dataOffset + 16);
        if (tilesOffset < 0 || paletteOffset < 0 || tileCount < 0)
            throw new InvalidDataException("Background effect contains an invalid graphics pointer.");

        var tileBytes = checked((tileCount + 1) * 32);
        if (!rom.IsRangeValid(tilesOffset, tileBytes))
            throw new InvalidDataException("Background effect tile data is truncated.");
        var palette = GraphicsRenderers.ReadRgbPalette(rom, paletteOffset, 0x400, transparentFirst: true);
        var image = GraphicsRenderers.Render4BppSheet(rom.Slice(tilesOffset, tileBytes), palette,
            tileCount + 1, columns: 16);
        return new PreviewContent($"{name} ({Math.Max(0, frameCount)} frames)",
            Png: image.ToPng(), MimeType: "image/png");
    }

    private static PreviewContent RenderObjectEffect(RomImage rom, string name, int dataOffset)
    {
        var charOffset = rom.ReadPointerOffset(dataOffset + 20);
        var paletteOffset = rom.ReadPointerOffset(dataOffset + 24);
        var charCount = rom.ReadInt32(dataOffset + 28);
        if (charOffset < 0 || paletteOffset < 0 || charCount <= 0)
            throw new InvalidDataException("Object effect contains an invalid graphics pointer.");

        var tileBytes = checked(charCount * 32);
        if (!rom.IsRangeValid(charOffset, tileBytes))
            throw new InvalidDataException("Object effect tile data is truncated.");
        var palette = GraphicsRenderers.ReadRgbPalette(rom, paletteOffset, 64, transparentFirst: true);
        var image = GraphicsRenderers.Render4BppSheet(rom.Slice(charOffset, tileBytes), palette,
            charCount, columns: 16, objectPalette: true);
        return new PreviewContent($"{name} ({charCount} tiles)",
            Png: image.ToPng(), MimeType: "image/png");
    }
}
