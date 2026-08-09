using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public static class KaoIndexer
{
    private static readonly string[] Emotions =
    [
        "Normal", "Happy", "Pained", "Angry", "Worried", "Sad", "Crying",
        "Shouting", "TearyEye", "Determined", "Joyous", "Inspired", "Surprised",
    ];

    private static readonly Regex LabelPattern = new(
        @"^\s*(?<label>[A-Za-z_]\w*):\s*$", RegexOptions.Compiled);
    private static readonly Regex IncbinPattern = new(
        """\.incbin\s+"(?<path>[^"]+)" """.TrimEnd(),
        RegexOptions.Compiled);
    private static readonly Regex PortraitPattern = new(
        @"kao_portrait\s+(?<palette>\S+)\s*,\s*(?<graphics>\S+)",
        RegexOptions.Compiled);
    private static readonly Regex PartPattern = new(
        @"_(?<offset>[0-9A-Fa-f]+)_(?<size>[0-9A-Fa-f]+)\.bin$",
        RegexOptions.Compiled);

    public static IEnumerable<AssetDescriptor> Index(string? repositoryRoot)
    {
        if (string.IsNullOrWhiteSpace(repositoryRoot))
            yield break;
        var directory = Path.Combine(repositoryRoot, "data", "kao");
        if (!Directory.Exists(directory))
            yield break;

        foreach (var sourcePath in Directory.EnumerateFiles(directory, "*.inc").OrderBy(path => path))
        {
            var text = File.ReadAllText(sourcePath);
            var labels = ParseParts(text);
            var emotionIndex = 0;
            foreach (Match portrait in PortraitPattern.Matches(text))
            {
                var paletteName = portrait.Groups["palette"].Value;
                var graphicsName = portrait.Groups["graphics"].Value;
                if (paletteName == "0" || graphicsName == "0" ||
                    !labels.TryGetValue(paletteName, out var palette) ||
                    !labels.TryGetValue(graphicsName, out var graphics))
                {
                    emotionIndex++;
                    continue;
                }

                var species = Path.GetFileNameWithoutExtension(sourcePath);
                var emotion = emotionIndex < Emotions.Length ? Emotions[emotionIndex] : $"Emotion{emotionIndex}";
                yield return CreatePortrait(species, emotion, graphics.Offset, graphics.Size,
                    palette.Offset, palette.Size, graphics.NeedsAtPrefix, sourcePath);
                emotionIndex++;
            }
        }
    }

    public static IEnumerable<AssetDescriptor> IndexRetail()
    {
        foreach (var entry in RetailTables.Portraits)
        {
            yield return CreatePortrait(
                entry.Species,
                entry.Emotion,
                entry.GraphicsOffset,
                entry.GraphicsSize,
                entry.PaletteOffset,
                entry.PaletteSize,
                entry.ForcePrefix,
                sourcePath: null);
        }
    }

    private static AssetDescriptor CreatePortrait(
        string species,
        string emotion,
        int graphicsOffset,
        int graphicsSize,
        int paletteOffset,
        int paletteSize,
        bool forcePrefix,
        string? sourcePath)
    {
        return new AssetDescriptor
        {
            Id = $"portrait:{species}:{emotion}",
            Name = $"{species} — {emotion}",
            Category = AssetCategory.Portraits,
            Kind = AssetKind.KaoPortrait,
            Offset = graphicsOffset,
            Size = graphicsSize,
            AuxiliaryOffset = paletteOffset,
            AuxiliarySize = paletteSize,
            Format = "AT4PX / 4bpp",
            SourcePath = sourcePath,
            Description = $"{species} {emotion} portrait",
            Metadata = new Dictionary<string, string>
            {
                ["forcePrefix"] = forcePrefix.ToString(),
                ["species"] = species,
                ["emotion"] = emotion,
            },
        };
    }

    private static Dictionary<string, Part> ParseParts(string text)
    {
        var labels = new Dictionary<string, Part>(StringComparer.Ordinal);
        string? currentLabel = null;
        var needsPrefix = false;
        foreach (var line in text.Split('\n'))
        {
            var labelMatch = LabelPattern.Match(line);
            if (labelMatch.Success)
            {
                currentLabel = labelMatch.Groups["label"].Value;
                needsPrefix = false;
                continue;
            }

            if (currentLabel is null)
                continue;
            if (line.Contains(".string \"AT4PX\"", StringComparison.Ordinal))
            {
                needsPrefix = true;
                continue;
            }

            var incbin = IncbinPattern.Match(line);
            if (!incbin.Success)
                continue;
            var part = PartPattern.Match(Path.GetFileName(incbin.Groups["path"].Value));
            if (!part.Success ||
                !int.TryParse(part.Groups["offset"].Value,
                    System.Globalization.NumberStyles.HexNumber, null, out var offset) ||
                !int.TryParse(part.Groups["size"].Value,
                    System.Globalization.NumberStyles.HexNumber, null, out var size))
                continue;
            labels[currentLabel] = new Part(offset, size, needsPrefix);
            currentLabel = null;
            needsPrefix = false;
        }

        return labels;
    }

    private readonly record struct Part(int Offset, int Size, bool NeedsAtPrefix);
}

public static class TitleBackgroundIndexer
{
    public static IEnumerable<AssetDescriptor> Index()
    {
        yield return Create("titlen0", 0x384C9C, 0x3E34, 0x388AD0, 0x380, false);
        yield return Create("titlen1", 0x388E55, 0x4143, 0x38CF98, 0x380, true);
        yield return Create("titlen2", 0x38D318, 0x4928, 0x391C48, 0x380, false);
    }

    private static AssetDescriptor Create(
        string name,
        int graphicsOffset,
        int graphicsSize,
        int paletteOffset,
        int paletteSize,
        bool forcePrefix)
    {
        return new AssetDescriptor
        {
            Id = $"title-background:{name}",
            Name = name,
            Category = AssetCategory.Backgrounds,
            Kind = AssetKind.TitleBackground,
            Offset = graphicsOffset,
            Size = graphicsSize,
            AuxiliaryOffset = paletteOffset,
            AuxiliarySize = paletteSize,
            Format = "AT4PX / tilemap",
            Description = "Retail title-screen background",
            Metadata = new Dictionary<string, string>
            {
                ["forcePrefix"] = forcePrefix.ToString(),
            },
        };
    }
}
