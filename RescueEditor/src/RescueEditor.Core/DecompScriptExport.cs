using System.Globalization;
using System.Text;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public sealed record DecompScriptExportFilter(
    string? Kind = null,
    int? Group = null,
    int? Sector = null,
    int? Index = null,
    int? ScriptSlot = null);

public enum DecompScriptExportScope
{
    CurrentScript,
    CurrentSector,
    WholeScene,
}

/// <summary>Pretty-print scene scripts as <c>data_script.h</c> C tables for decomp PRs.</summary>
public static class DecompScriptExport
{
    private static readonly Regex SectionHeader =
        new(@"^@(station|live|object|effect|event)\s+g(\d+)/s(\d+)(?:\.(\d+))?(?:\s+dlg(\d+))?(?:\s+(\S+))?\s*$",
            RegexOptions.IgnoreCase | RegexOptions.CultureInvariant | RegexOptions.Compiled);

    private static readonly Dictionary<string, string> MacroRemap = new(StringComparer.Ordinal)
    {
        ["DIALOGUE"] = "MSG_NPC",
        ["MOVE_TO_COORDS"] = "WALK_RELATIVE",
    };

    public static string SuggestedFileName(Scene scene)
    {
        var bma = scene.Map?.BmaName;
        if (string.IsNullOrWhiteSpace(bma))
            return $"ground_data_gs{scene.MapId}_station.h";
        var slug = Path.GetFileNameWithoutExtension(bma).ToLowerInvariant();
        return $"ground_data_{slug}_station.h";
    }

    public static DecompScriptExportFilter? FilterFromSourceLine(string source, int lineNumber)
    {
        DecompScriptExportFilter? current = null;
        var lines = source.Replace("\r\n", "\n").Replace('\r', '\n').Split('\n');
        var last = Math.Min(Math.Max(lineNumber, 1), Math.Max(lines.Length, 1));
        for (var i = 0; i < last; i++)
        {
            var trimmed = StripComment(lines[i]).Trim();
            var match = SectionHeader.Match(trimmed);
            if (!match.Success)
                continue;
            current = new DecompScriptExportFilter(
                Kind: match.Groups[1].Value.ToLowerInvariant(),
                Group: int.Parse(match.Groups[2].Value, CultureInfo.InvariantCulture),
                Sector: int.Parse(match.Groups[3].Value, CultureInfo.InvariantCulture),
                Index: match.Groups[4].Success
                    ? int.Parse(match.Groups[4].Value, CultureInfo.InvariantCulture)
                    : 0,
                ScriptSlot: match.Groups[5].Success
                    ? int.Parse(match.Groups[5].Value, CultureInfo.InvariantCulture)
                    : 0);
        }

        return current;
    }

    public static DecompScriptExportFilter? FilterForScope(
        DecompScriptExportScope scope,
        DecompScriptExportFilter? current) =>
        scope switch
        {
            DecompScriptExportScope.CurrentScript => current,
            DecompScriptExportScope.CurrentSector when current is not null =>
                new DecompScriptExportFilter(Group: current.Group, Sector: current.Sector),
            _ => null,
        };

    public static string FormatCommand(
        ScriptCommandData command,
        IReadOnlyDictionary<int, DialogueString>? dialogue = null,
        ScriptNamedDefinitions? names = null,
        string? dialogueText = null)
    {
        if (command.Op == 0xF4)
        {
            var label = command.ArgShort;
            return string.Create(CultureInfo.InvariantCulture, $"  LABEL({label}), /* = 0x{label:x2} */");
        }

        var formatted = ScriptSource.FormatCommand(command, dialogue, names, dialogueText);
        var note = formatted.IndexOf("  # ", StringComparison.Ordinal);
        if (note >= 0)
            formatted = formatted[..note];

        var paren = formatted.IndexOf('(');
        if (paren > 0)
        {
            var name = formatted[..paren];
            if (MacroRemap.TryGetValue(name, out var decomp))
                formatted = decomp + formatted[paren..];
        }

        formatted = WrapGettext(formatted);
        if (formatted.EndsWith("()", StringComparison.Ordinal))
            formatted = formatted[..^2];
        return formatted;
    }

    public static string Format(
        Scene scene,
        DecompScriptExportFilter? filter = null,
        IReadOnlyDictionary<int, DialogueString>? dialogue = null,
        ScriptNamedDefinitions? names = null)
    {
        var builder = new StringBuilder();
        foreach (var group in scene.Groups)
        {
            foreach (var sector in group.Sectors)
            {
                for (var stationIndex = 0; stationIndex < sector.Stations.Count; stationIndex++)
                {
                    var station = sector.Stations[stationIndex];
                    if (station.Commands.Count == 0)
                        continue;
                    if (!Matches(filter, "station", sector.Group, sector.Sector, stationIndex, 0))
                        continue;
                    var symbol = stationIndex == 0 && sector.Stations.Count <= 1
                        ? $"s_gs{scene.MapId}_g{sector.Group}_s{sector.Sector}_station_sref_script"
                        : $"s_gs{scene.MapId}_g{sector.Group}_s{sector.Sector}_station{stationIndex}_sref_script";
                    AppendTable(builder, symbol, station.ScriptOffset, station.Commands, dialogue, names);
                }

                AppendEntityTables(builder, scene.MapId, sector.Lives, "live", "lives", "_dlg", filter, dialogue, names);
                AppendEntityTables(builder, scene.MapId, sector.Objects, "object", "obj", "_dlg", filter, dialogue, names);
                AppendEntityTables(builder, scene.MapId, sector.Effects, "effect", "eff", "_script", filter, dialogue, names, dlgSuffixIsSlot: false);

                foreach (var entity in sector.Events)
                {
                    if (entity.EventScript is not { Commands.Count: > 0 } eventScript)
                        continue;
                    if (!Matches(filter, "event", entity.Group, entity.Sector, entity.Index, 0))
                        continue;
                    var symbol = $"s_gs{scene.MapId}_g{entity.Group}_s{entity.Sector}_evt{entity.Index}_sref_script";
                    AppendTable(builder, symbol, eventScript.ScriptOffset, eventScript.Commands, dialogue, names);
                }
            }
        }

        return builder.ToString();
    }

    public static string Format(
        int mapId,
        IReadOnlyList<ScriptSourceSection> sections,
        DecompScriptExportFilter? filter = null,
        ScriptNamedDefinitions? names = null)
    {
        var builder = new StringBuilder();
        foreach (var section in sections)
        {
            if (section.Commands.Count == 0)
                continue;
            if (!Matches(filter, section.Kind, section.Group, section.Sector, section.Index, section.ScriptSlot))
                continue;
            var symbol = SymbolName(mapId, section);
            var commands = section.Commands.Select(item => item.Command).ToList();
            AppendTable(builder, symbol, commands[0].RomOffset, commands, dialogue: null, names, section);
        }

        return builder.ToString();
    }

    private static string SymbolName(int mapId, ScriptSourceSection section)
    {
        var prefix = $"s_gs{mapId}_g{section.Group}_s{section.Sector}_";
        return section.Kind switch
        {
            "station" => prefix + (section.Index == 0 ? "station_sref_script" : $"station{section.Index}_sref_script"),
            "live" => prefix + $"lives{section.Index}_dlg{section.ScriptSlot}",
            "object" => prefix + $"obj{section.Index}_dlg{section.ScriptSlot}",
            "effect" => prefix + $"eff{section.Index}_script",
            "event" => prefix + $"evt{section.Index}_sref_script",
            _ => prefix + $"{section.Kind}{section.Index}",
        };
    }

    private static void AppendEntityTables(
        StringBuilder builder,
        int mapId,
        IReadOnlyList<SceneEntity> entities,
        string kind,
        string symbolKind,
        string slotSuffix,
        DecompScriptExportFilter? filter,
        IReadOnlyDictionary<int, DialogueString>? dialogue,
        ScriptNamedDefinitions? names,
        bool dlgSuffixIsSlot = true)
    {
        for (var entityPos = 0; entityPos < entities.Count; entityPos++)
        {
            var entity = entities[entityPos];
            var index = kind == "live" ? entityPos : entity.Index;
            for (var slot = 0; slot < entity.Scripts.Count; slot++)
            {
                var script = entity.Scripts[slot];
                if (script.Commands.Count == 0)
                    continue;
                if (!Matches(filter, kind, entity.Group, entity.Sector, index, slot))
                    continue;
                var suffix = dlgSuffixIsSlot ? $"{slotSuffix}{slot}" : slotSuffix;
                var symbol = $"s_gs{mapId}_g{entity.Group}_s{entity.Sector}_{symbolKind}{index}{suffix}";
                AppendTable(builder, symbol, script.Offset, script.Commands, dialogue, names);
            }
        }
    }

    private static void AppendTable(
        StringBuilder builder,
        string symbol,
        int romOffset,
        IReadOnlyList<ScriptCommandData> commands,
        IReadOnlyDictionary<int, DialogueString>? dialogue,
        ScriptNamedDefinitions? names,
        ScriptSourceSection? section = null)
    {
        if (builder.Length > 0)
            builder.AppendLine();

        builder.Append("static const struct ScriptCommand ");
        builder.Append(symbol);
        builder.Append("[] = {");
        if (romOffset >= 0)
        {
            var address = RomImage.RomVirtualAddress + (uint)romOffset;
            builder.Append(string.Create(CultureInfo.InvariantCulture, $" /* 0x{address:x} */"));
        }

        builder.AppendLine();
        for (var i = 0; i < commands.Count; i++)
        {
            var dialogueText = section?.Commands[i].DialogueText;
            var line = FormatCommand(commands[i], dialogue, names, dialogueText);
            if (commands[i].Op == 0xF4)
            {
                builder.AppendLine(line);
                continue;
            }

            builder.Append("    ");
            builder.Append(line);
            builder.AppendLine(",");
        }

        builder.AppendLine("};");
    }

    private static bool Matches(
        DecompScriptExportFilter? filter,
        string kind,
        int group,
        int sector,
        int index,
        int scriptSlot)
    {
        if (filter is null)
            return true;
        if (filter.Kind is not null &&
            !string.Equals(filter.Kind, kind, StringComparison.OrdinalIgnoreCase))
            return false;
        if (filter.Group is int expectedGroup && expectedGroup != group)
            return false;
        if (filter.Sector is int expectedSector && expectedSector != sector)
            return false;
        if (filter.Index is int expectedIndex && expectedIndex != index)
            return false;
        if (filter.ScriptSlot is int expectedSlot &&
            kind is "live" or "object" or "effect" &&
            expectedSlot != scriptSlot)
            return false;
        return true;
    }

    private static string WrapGettext(string line)
    {
        var start = line.IndexOf('"');
        if (start < 0)
            return line;
        var end = line.LastIndexOf('"');
        if (end <= start)
            return line;
        return line[..start] + "_(" + line[start..(end + 1)] + ")" + line[(end + 1)..];
    }

    private static string StripComment(string line)
    {
        var hash = line.IndexOf('#');
        return hash < 0 ? line : line[..hash];
    }
}
