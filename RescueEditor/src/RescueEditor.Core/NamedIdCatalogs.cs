using System.Globalization;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

/// <summary>Parsers for decomp constant headers / sound name tables into <see cref="NamedIdCatalog"/>.</summary>
public static class NamedIdCatalogs
{
    private static readonly Regex MusicEnumEntry = new(
        @"^\s*(?<name>MUS_[A-Z0-9_]+)\s*(?:=\s*(?<value>\d+))?\s*,?",
        RegexOptions.Compiled);

    private static readonly Regex MapEnumEntry = new(
        @"^\s*(?<name>MAP_[A-Z0-9_]+)\s*(?:=\s*(?<value>\d+))?\s*,?",
        RegexOptions.Compiled);

    private static readonly Regex EmotionDefine = new(
        @"^\s*#define\s+(?<name>EMOTION_[A-Z0-9_]+)\s+(?<value>\d+)\s*$",
        RegexOptions.Compiled);

    private static readonly Regex SfxNameEntry = new(
        @"^\s*\{\s*(?:NULL|""(?<name>[^""]+)"")\s*,",
        RegexOptions.Compiled);

    public static NamedIdCatalog ParseMusicEnum(string headerText) =>
        ParseSequentialEnum(headerText, MusicEnumEntry);

    public static NamedIdCatalog ParseGroundMapEnum(string headerText) =>
        // First MAP_* with no =N becomes 0 (C enum default).
        ParseSequentialEnum(headerText, MapEnumEntry, startAt: -1);

    public static NamedIdCatalog ParseEmotionDefines(string headerText)
    {
        var pairs = new List<(int, string)>();
        foreach (var rawLine in headerText.Replace("\r\n", "\n").Split('\n'))
        {
            var match = EmotionDefine.Match(rawLine);
            if (!match.Success)
                continue;
            var id = int.Parse(match.Groups["value"].Value, CultureInfo.InvariantCulture);
            pairs.Add((id, match.Groups["name"].Value));
        }

        return new NamedIdCatalog(pairs);
    }

    public static NamedIdCatalog ParseSfxNames(string soundNamesC)
    {
        var pairs = new List<(int, string)>();
        var inArray = false;
        var index = 0;
        foreach (var rawLine in soundNamesC.Replace("\r\n", "\n").Split('\n'))
        {
            if (!inArray)
            {
                if (rawLine.Contains("gSfxNames[]", StringComparison.Ordinal))
                    inArray = true;
                continue;
            }

            var match = SfxNameEntry.Match(rawLine);
            if (match.Success)
            {
                if (match.Groups["name"].Success)
                    pairs.Add((index, match.Groups["name"].Value));
                index++;
            }

            if (rawLine.Contains("};", StringComparison.Ordinal) && index > 0)
                break;
        }

        return new NamedIdCatalog(pairs);
    }

    private static NamedIdCatalog ParseSequentialEnum(string headerText, Regex entry, int? startAt = null)
    {
        var pairs = new List<(int, string)>();
        int? current = startAt;
        foreach (var rawLine in headerText.Replace("\r\n", "\n").Split('\n'))
        {
            var match = entry.Match(rawLine);
            if (!match.Success)
                continue;

            if (match.Groups["value"].Success)
                current = int.Parse(match.Groups["value"].Value, CultureInfo.InvariantCulture);
            else if (current is null)
                continue;
            else
                current++;

            pairs.Add((current.Value, match.Groups["name"].Value));
        }

        return new NamedIdCatalog(pairs);
    }
}
