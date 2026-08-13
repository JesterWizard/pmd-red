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
        @"^\s*#define\s+(?<name>EMOTION_[A-Z0-9_]+)\s+(?<value>\d+)\b",
        RegexOptions.Compiled);

    private static readonly Regex EmotionEffectDefine = new(
        @"^\s*#define\s+(?<name>EMOTION_EFFECT_[A-Z0-9_]+)\s+(?<value>\d+)\b",
        RegexOptions.Compiled);

    private static readonly Regex ObjFlagDefine = new(
        @"^\s*#define\s+(?<name>OBJ_FLAG_[A-Z0-9_]+)\s+(?<value>0x[0-9A-Fa-f]+|\d+)\b",
        RegexOptions.Compiled);

    private static readonly Regex UpdateNameEnumEntry = new(
        @"^\s*(?<name>UPDATE_NAME_[A-Z0-9_]+)\s*(?:=\s*(?<value>\d+))?\s*,?",
        RegexOptions.Compiled);

    private static readonly Regex DirectionEnumEntry = new(
        @"^\s*(?<name>DIRECTION_[A-Z0-9_]+)\s*(?:=\s*(?<value>\d+))?\s*,?",
        RegexOptions.Compiled);

    private static readonly Regex DirTransEnumEntry = new(
        @"^\s*(?<name>DIR_TRANS_[A-Z0-9_]+)\s*(?:=\s*(?<value>\d+))?\s*,?",
        RegexOptions.Compiled);

    private static readonly Regex PlacementEnumEntry = new(
        @"^\s*(?<name>PLACEMENT_[A-Z0-9_]+)\s*(?:=\s*(?<value>\d+))?\s*,?",
        RegexOptions.Compiled);

    private static readonly Regex GroundAnimDefine = new(
        @"^\s*#define\s+(?<name>GROUND_ANIM_[A-Z0-9_]+)\s+(?<value>\d+)\b",
        RegexOptions.Compiled);

    private static readonly Regex MonsterDefine = new(
        @"^\s*#define\s+(?<name>MONSTER_[A-Z0-9_]+)\s+(?<value>\d+)\b",
        RegexOptions.Compiled);

    private static readonly Regex PaletteUtilEnumEntry = new(
        @"^\s*(?<name>PALUTIL_KIND_[A-Z0-9_]+)\s*(?:=\s*(?<value>\d+))?\s*,?",
        RegexOptions.Compiled);

    private static readonly Regex ScriptIdEnumEntry = new(
        @"^\s*(?<name>[A-Z][A-Z0-9_]*)\s*(?:=\s*(?<value>\d+))?\s*,?",
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
            // Portrait faces only — overhead effects live in ParseEmotionEffectDefines.
            if (match.Groups["name"].Value.StartsWith("EMOTION_EFFECT_", StringComparison.Ordinal))
                continue;
            var id = int.Parse(match.Groups["value"].Value, CultureInfo.InvariantCulture);
            pairs.Add((id, match.Groups["name"].Value));
        }

        return new NamedIdCatalog(pairs);
    }

    public static NamedIdCatalog ParseUpdateNameKindEnum(string headerText) =>
        ParseSequentialEnum(headerText, UpdateNameEnumEntry, startAt: -1);

    public static NamedIdCatalog ParseObjFlagDefines(string headerText) =>
        ParseHashDefines(headerText, ObjFlagDefine, allowHex: true);

    public static NamedIdCatalog ParseEmotionEffectDefines(string headerText) =>
        ParseHashDefines(headerText, EmotionEffectDefine, allowHex: false);

    public static NamedIdCatalog ParseDirectionEnum(string headerText) =>
        ParseSequentialEnum(headerText, DirectionEnumEntry, startAt: -1, skipNames: ["NUM_DIRECTIONS"]);

    public static NamedIdCatalog ParseDirTransEnum(string headerText) =>
        ParseSequentialEnum(headerText, DirTransEnumEntry, startAt: -1);

    public static NamedIdCatalog ParseGroundAnimDefines(string headerText) =>
        ParseHashDefines(headerText, GroundAnimDefine, allowHex: false);

    public static NamedIdCatalog ParseMonsterDefines(string headerText)
    {
        var pairs = new List<(int, string)>();
        foreach (var rawLine in headerText.Replace("\r\n", "\n").Split('\n'))
        {
            var match = MonsterDefine.Match(rawLine);
            if (!match.Success)
                continue;
            var name = match.Groups["name"].Value;
            if (name is "MONSTER_MAX" or "MONSTER_FLAGS_U32STORAGE")
                continue;
            var id = int.Parse(match.Groups["value"].Value, CultureInfo.InvariantCulture);
            pairs.Add((id, name));
        }

        return new NamedIdCatalog(pairs);
    }

    public static NamedIdCatalog ParsePaletteUtilEnum(string headerText) =>
        ParseSequentialEnum(headerText, PaletteUtilEnumEntry, startAt: -1);

    public static NamedIdCatalog ParseScriptIdEnum(string headerText) =>
        ParseSequentialEnum(headerText, ScriptIdEnumEntry, startAt: -1, skipNames: ["NUM_SCRIPT_IDS"]);

    public static NamedIdCatalog ParsePortraitPlacement(string headerText)
    {
        var pairs = new List<(int, string)>();
        int? current = -1;
        int? countValue = null;
        foreach (var rawLine in headerText.Replace("\r\n", "\n").Split('\n'))
        {
            var match = PlacementEnumEntry.Match(rawLine);
            if (match.Success)
            {
                var name = match.Groups["name"].Value;
                if (match.Groups["value"].Success)
                    current = int.Parse(match.Groups["value"].Value, CultureInfo.InvariantCulture);
                else if (current is null)
                    continue;
                else
                    current++;

                if (name == "PLACEMENT_COUNT")
                {
                    countValue = current;
                    continue;
                }

                pairs.Add((current.Value, name));
                continue;
            }

            if (rawLine.Contains("PLACEMENT_KEEP", StringComparison.Ordinal) &&
                rawLine.Contains("PLACEMENT_COUNT", StringComparison.Ordinal) &&
                countValue is int keep)
                pairs.Add((keep, "PLACEMENT_KEEP"));
        }

        return new NamedIdCatalog(pairs);
    }

    public static (NamedIdCatalog UpdateName, NamedIdCatalog ObjFlag, NamedIdCatalog EmotionEffect, NamedIdCatalog GroundAnim)
        ParseGroundScriptParams(string headerText) =>
        (
            ParseUpdateNameKindEnum(headerText),
            ParseObjFlagDefines(headerText),
            ParseEmotionEffectDefines(headerText),
            ParseGroundAnimDefines(headerText)
        );

    private static NamedIdCatalog ParseHashDefines(string headerText, Regex define, bool allowHex)
    {
        var pairs = new List<(int, string)>();
        foreach (var rawLine in headerText.Replace("\r\n", "\n").Split('\n'))
        {
            var match = define.Match(rawLine);
            if (!match.Success)
                continue;
            var raw = match.Groups["value"].Value;
            int id;
            if (allowHex && raw.StartsWith("0x", StringComparison.OrdinalIgnoreCase))
                id = unchecked((int)ulong.Parse(raw.AsSpan(2), NumberStyles.HexNumber, CultureInfo.InvariantCulture));
            else
                id = int.Parse(raw, CultureInfo.InvariantCulture);
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

    private static NamedIdCatalog ParseSequentialEnum(
        string headerText,
        Regex entry,
        int? startAt = null,
        IReadOnlyCollection<string>? skipNames = null)
    {
        var pairs = new List<(int, string)>();
        int? current = startAt;
        foreach (var rawLine in headerText.Replace("\r\n", "\n").Split('\n'))
        {
            var match = entry.Match(rawLine);
            if (!match.Success)
                continue;

            var name = match.Groups["name"].Value;
            if (skipNames is not null && skipNames.Contains(name))
                continue;

            if (match.Groups["value"].Success)
                current = int.Parse(match.Groups["value"].Value, CultureInfo.InvariantCulture);
            else if (current is null)
                continue;
            else
                current++;

            pairs.Add((current.Value, name));
        }

        return new NamedIdCatalog(pairs);
    }
}
