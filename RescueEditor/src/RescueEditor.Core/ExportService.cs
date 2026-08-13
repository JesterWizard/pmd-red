using System.Text;

namespace RescueEditor.Core;

public static class AssetPreviewer
{
    public static PreviewContent Create(RomImage rom, AssetDescriptor asset, Charmap charmap)
    {
        return asset.Kind switch
        {
            AssetKind.KaoPortrait => GraphicsRenderers.RenderPortrait(rom, asset),
            AssetKind.KaoPortraitSheet => GraphicsRenderers.RenderPortraitSheet(rom, asset),
            AssetKind.TitleBackground => GraphicsRenderers.RenderTitleBackground(rom, asset),
            AssetKind.Effect => EffectRenderer.Render(rom, asset),
            AssetKind.GroundMap => GroundMapIndexer.Render(rom, asset),
            AssetKind.Scene => CreateScenePreview(rom, asset),
            AssetKind.Dungeon or AssetKind.DungeonFloor => DungeonPreview.Create(rom, asset),
            AssetKind.MonsterTable or AssetKind.MonsterEntry or
                AssetKind.MoveTable or AssetKind.MoveEntry or
                AssetKind.ItemTable or AssetKind.ItemEntry or
                AssetKind.FriendAreaTable or AssetKind.FriendAreaEntry => DataTablePreview.Create(rom, asset, charmap),
            AssetKind.Dialogue => CreateDialoguePreview(rom, asset, charmap),
            AssetKind.Script => new PreviewContent(asset.Name,
                Text: ScriptDisassembler.Disassemble(rom, asset.Offset, charmap)),
            AssetKind.SoundWave => new PreviewContent(asset.Name, Text: SoundWaveCodec.Describe(rom, asset)),
            AssetKind.SoundSong => new PreviewContent(asset.Name, Text: DescribeSong(asset)),
            _ => new PreviewContent(asset.Name, Text: CreateHexPreview(rom, asset)),
        };
    }

    private static PreviewContent CreateScenePreview(RomImage rom, AssetDescriptor asset)
    {
        var text = new System.Text.StringBuilder();
        text.AppendLine(asset.Name);
        text.AppendLine(asset.Description ?? string.Empty);
        text.AppendLine();
        text.AppendLine($"Map ID: {asset.Metadata.GetValueOrDefault("mapId")}");
        text.AppendLine($"BMA: {asset.Metadata.GetValueOrDefault("bma")}");
        text.AppendLine($"Header: 0x{asset.Offset:X}");
        text.AppendLine();
        text.AppendLine("Open the Scenes workspace to inspect groups, sectors, actors, and scripts.");
        return new PreviewContent(asset.Name, Text: text.ToString());
    }

    private static PreviewContent CreateDialoguePreview(
        RomImage rom,
        AssetDescriptor asset,
        Charmap charmap)
    {
        var text = string.IsNullOrWhiteSpace(asset.Description)
            ? charmap.Decode(rom.Slice(asset.Offset, asset.Size))
            : asset.Description!;
        var romOffset = asset.Metadata.GetValueOrDefault("romOffset", $"0x{asset.Offset:X}");
        var command = asset.Metadata.TryGetValue("commandOffset", out var commandOffset)
            ? $"\nScript command: {commandOffset}"
            : string.Empty;
        return new PreviewContent(asset.Name,
            Text: $"{text}\n\n——\nID: {asset.Name}\nROM offset: {romOffset}{command}");
    }

    private static string CreateHexPreview(RomImage rom, AssetDescriptor asset)
    {
        if (!asset.HasRomRange)
            return $"{asset.Name}\n\n{asset.Description ?? "No ROM range is available."}";

        var length = Math.Min(asset.Size, 512);
        var builder = new StringBuilder();
        builder.AppendLine($"{asset.Name}");
        builder.AppendLine($"Format: {asset.Format}");
        builder.AppendLine($"ROM offset: 0x{asset.Offset:X}");
        builder.AppendLine($"Size: 0x{asset.Size:X}");
        builder.AppendLine();
        for (var row = 0; row < length; row += 16)
        {
            builder.Append($"{asset.Offset + row:X8}  ");
            for (var column = 0; column < 16; column++)
            {
                if (row + column < length)
                    builder.Append($"{rom.ReadByte(asset.Offset + row + column):X2} ");
                else
                    builder.Append("   ");
            }
            builder.Append(" |");
            for (var column = 0; column < 16 && row + column < length; column++)
            {
                var value = rom.ReadByte(asset.Offset + row + column);
                builder.Append(value is >= 0x20 and <= 0x7E ? (char)value : '.');
            }
            builder.AppendLine("|");
        }
        if (length < asset.Size)
            builder.AppendLine($"… {asset.Size - length:N0} more bytes");
        return builder.ToString();
    }

    internal static string ReadSource(string? path, string? fallback)
    {
        return path is not null && File.Exists(path)
            ? File.ReadAllText(path)
            : fallback ?? "Source file is unavailable.";
    }

    private static string DescribeSong(AssetDescriptor asset)
    {
        var header = new StringBuilder();
        header.AppendLine(asset.Name);
        header.AppendLine();
        header.AppendLine($"Format: {asset.Format}");
        if (asset.Metadata.TryGetValue("songId", out var songId))
            header.AppendLine($"Song ID: {songId}");
        if (asset.Metadata.TryGetValue("role", out var role))
            header.AppendLine($"Role: {role}");
        if (asset.Metadata.TryGetValue("player", out var player))
            header.AppendLine($"Music player: {player}");
        if (!string.IsNullOrWhiteSpace(asset.SourcePath))
            header.AppendLine($"Source: {asset.SourcePath}");
        header.AppendLine();
        header.AppendLine("——");
        header.AppendLine();
        header.Append(ReadSource(asset.SourcePath, asset.Description));
        return header.ToString();
    }
}

public static class AssetExportService
{
    public static IReadOnlyList<string> Export(
        RomImage rom,
        AssetDescriptor asset,
        Charmap charmap,
        string directory)
    {
        Directory.CreateDirectory(directory);
        var categoryDirectory = Path.Combine(directory, CategoryName(asset.Category));
        Directory.CreateDirectory(categoryDirectory);
        var stem = SanitizeFileName(asset.Name);
        var paths = new List<string>();

        switch (asset.Kind)
        {
            case AssetKind.KaoPortrait:
                WriteFile(categoryDirectory, stem + ".png",
                    GraphicsRenderers.RenderPortrait(rom, asset).Png!, paths);
                WriteRange(categoryDirectory, stem + ".pal", rom, asset.AuxiliaryOffset,
                    asset.AuxiliarySize, paths);
                break;
            case AssetKind.KaoPortraitSheet:
                WriteFile(categoryDirectory, stem + ".png",
                    GraphicsRenderers.RenderPortraitSheet(rom, asset).Png!, paths);
                foreach (var emotion in asset.Children)
                {
                    var emotionStem = SanitizeFileName(
                        $"{asset.Name}-{emotion.Metadata.GetValueOrDefault("emotion", "face")}");
                    WriteFile(categoryDirectory, emotionStem + ".png",
                        GraphicsRenderers.RenderPortrait(rom, emotion).Png!, paths);
                }
                break;
            case AssetKind.TitleBackground:
                WriteFile(categoryDirectory, stem + ".png",
                    GraphicsRenderers.RenderTitleBackground(rom, asset).Png!, paths);
                WriteRange(categoryDirectory, stem + ".pal", rom, asset.AuxiliaryOffset,
                    asset.AuxiliarySize, paths);
                break;
            case AssetKind.Effect:
                WriteFile(categoryDirectory, stem + ".png",
                    EffectRenderer.Render(rom, asset).Png!, paths);
                break;
            case AssetKind.GroundMap:
                WriteFile(categoryDirectory, stem + ".png",
                    GroundMapIndexer.Render(rom, asset).Png!, paths);
                ExportGroundPart(categoryDirectory, asset, rom, "bpl", paths);
                ExportGroundPart(categoryDirectory, asset, rom, "bpc", paths);
                WriteRange(categoryDirectory, stem + ".bma", rom, asset.Offset, asset.Size, paths);
                break;
            case AssetKind.Dialogue:
                WriteText(categoryDirectory, stem + ".txt",
                    charmap.Decode(rom.Slice(asset.Offset, asset.Size)), paths);
                break;
            case AssetKind.Script:
                WriteText(categoryDirectory, stem + ".txt",
                    ScriptDisassembler.Disassemble(rom, asset.Offset, charmap), paths);
                break;
            case AssetKind.SoundWave:
                if (asset.HasRomRange)
                {
                    WriteFile(categoryDirectory, stem + ".wav", SoundWaveCodec.ToWave(rom, asset), paths);
                    WriteRange(categoryDirectory, stem + ".bin", rom, asset.Offset, asset.Size, paths);
                }
                else if (asset.SourcePath is not null)
                {
                    WriteText(categoryDirectory, stem + ".txt", File.ReadAllText(asset.SourcePath), paths);
                }
                break;
            case AssetKind.SoundSong:
            {
                var songStem = asset.Metadata.GetValueOrDefault("seq", stem);
                WriteText(categoryDirectory, songStem + ".s",
                    AssetPreviewer.ReadSource(asset.SourcePath, asset.Description), paths);
                break;
            }
            case AssetKind.GroundFile:
            case AssetKind.Raw:
            default:
                if (asset.HasRomRange)
                    WriteRange(categoryDirectory, stem + ExtensionFor(asset), rom, asset.Offset,
                        asset.Size, paths);
                else if (asset.SourcePath is not null)
                    WriteText(categoryDirectory, stem + ".txt", File.ReadAllText(asset.SourcePath), paths);
                break;
        }

        return paths;
    }

    public static (IReadOnlyList<string> Paths, IReadOnlyList<string> Errors) ExportMany(
        RomImage rom,
        IEnumerable<AssetDescriptor> assets,
        Charmap charmap,
        string directory)
    {
        var paths = new List<string>();
        var errors = new List<string>();
        foreach (var asset in assets)
        {
            try
            {
                paths.AddRange(Export(rom, asset, charmap, directory));
            }
            catch (Exception exception) when (exception is InvalidDataException or IOException or ArgumentOutOfRangeException)
            {
                errors.Add($"{asset.Name}: {exception.Message}");
            }
        }
        return (paths, errors);
    }

    private static void ExportGroundPart(
        string directory,
        AssetDescriptor asset,
        RomImage rom,
        string part,
        ICollection<string> paths)
    {
        if (!asset.Metadata.TryGetValue(part + "Offset", out var offsetText) ||
            !asset.Metadata.TryGetValue(part + "Size", out var sizeText) ||
            !int.TryParse(offsetText, out var offset) ||
            !int.TryParse(sizeText, out var size))
            return;
        var extension = part == "bpc" && rom.IsRangeValid(offset, 4) &&
                        rom.Slice(offset, 4).SequenceEqual("GMLZ"u8)
            ? ".bpc.lz"
            : "." + part;
        WriteRange(directory, SanitizeFileName(asset.Name) + extension, rom, offset, size, paths);
    }

    private static void WriteRange(
        string directory,
        string fileName,
        RomImage rom,
        int offset,
        int size,
        ICollection<string> paths)
    {
        if (offset < 0 || size <= 0 || !rom.IsRangeValid(offset, size))
            return;
        WriteFile(directory, fileName, rom.Copy(offset, size), paths);
    }

    private static void WriteFile(
        string directory,
        string fileName,
        byte[] bytes,
        ICollection<string> paths)
    {
        var path = Path.Combine(directory, SanitizeFileName(fileName));
        File.WriteAllBytes(path, bytes);
        paths.Add(path);
    }

    private static void WriteText(
        string directory,
        string fileName,
        string text,
        ICollection<string> paths)
    {
        var path = Path.Combine(directory, SanitizeFileName(fileName));
        File.WriteAllText(path, text, Encoding.UTF8);
        paths.Add(path);
    }

    private static string CategoryName(AssetCategory category) => category switch
    {
        AssetCategory.RawArchives => "raw-archives",
        AssetCategory.GroundMaps => "ground-maps",
        AssetCategory.Dungeons => "dungeons",
        AssetCategory.DataTables => "data-tables",
        AssetCategory.SoundEffects => "sound-effects",
        AssetCategory.CPatches => "c-patches",
        _ => category.ToString().ToLowerInvariant(),
    };

    private static string ExtensionFor(AssetDescriptor asset) => asset.Kind == AssetKind.GroundFile
        ? asset.Name.EndsWith('c') ? ".bpc" : asset.Name.EndsWith('m') ? ".bma" : ".bpl"
        : ".bin";

    private static string SanitizeFileName(string name)
    {
        var invalid = Path.GetInvalidFileNameChars();
        var builder = new StringBuilder(name.Length);
        foreach (var character in name)
            builder.Append(invalid.Contains(character) ? '_' : character);
        return builder.ToString().Trim().TrimEnd('.');
    }
}
