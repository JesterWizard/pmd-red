using System.Globalization;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public readonly record struct SceneStationEntry(
    int Group,
    int Sector,
    int StationIndex,
    int StationCountInSector,
    string Name,
    int CommandCount,
    string? FirstOpcodePreview,
    ScriptRefData Station)
{
    public string Identity =>
        SceneStations.FormatIdentity(Group, Sector, StationIndex, StationCountInSector);

    public string DisplayLabel
    {
        get
        {
            var label = $"{Identity} · station {StationIndex} · {CommandCount} cmds";
            if (!string.IsNullOrEmpty(FirstOpcodePreview))
                label += $" · {FirstOpcodePreview}";
            return label;
        }
    }
}

/// <summary>Enumerate and label station scripts attached to a scene's sectors.</summary>
public static class SceneStations
{
    /// <summary>Parser and ROM layout cap for stations per sector.</summary>
    public const int MaxPerSector = 64;

    private static readonly Regex StationHeader = new(
        @"^@station\s+g(\d+)/s(\d+)(?:\.(\d+))?(?:\s+(\S+))?\s*$",
        RegexOptions.IgnoreCase | RegexOptions.CultureInvariant | RegexOptions.Compiled);

    public static IReadOnlyList<SceneStationEntry> Enumerate(Scene scene)
    {
        var result = new List<SceneStationEntry>();
        foreach (var group in scene.Groups.OrderBy(item => item.Index))
        {
            foreach (var sector in group.Sectors.OrderBy(item => item.Sector))
            {
                for (var index = 0; index < sector.Stations.Count; index++)
                {
                    var station = sector.Stations[index];
                    var preview = station.Commands.Count > 0
                        ? ScriptOpcodeNames.GetName(station.Commands[0].Op)
                        : null;
                    result.Add(new SceneStationEntry(
                        sector.Group,
                        sector.Sector,
                        index,
                        sector.Stations.Count,
                        station.Name,
                        station.Commands.Count,
                        preview,
                        station));
                }
            }
        }

        return result;
    }

    public static string FormatIdentity(int group, int sector, int stationIndex, int stationCountInSector)
    {
        var suffix = stationCountInSector > 1 ? $".{stationIndex}" : "";
        return string.Create(CultureInfo.InvariantCulture, $"g{group}/s{sector}{suffix}");
    }

    public static string Summarize(Scene scene)
    {
        var entries = Enumerate(scene);
        var commands = entries.Sum(entry => entry.CommandCount);
        return string.Create(
            CultureInfo.InvariantCulture,
            $"{entries.Count} stations · {commands} commands");
    }

    /// <summary>1-based line number of the matching @station header, or -1.</summary>
    public static int FindStationHeaderLine(string sourceText, int group, int sector, int stationIndex)
    {
        var lines = sourceText.Replace("\r\n", "\n").Replace('\r', '\n').Split('\n');
        for (var i = 0; i < lines.Length; i++)
        {
            var trimmed = lines[i].Trim();
            var match = StationHeader.Match(trimmed);
            if (!match.Success)
                continue;
            var headerGroup = int.Parse(match.Groups[1].Value, CultureInfo.InvariantCulture);
            var headerSector = int.Parse(match.Groups[2].Value, CultureInfo.InvariantCulture);
            var headerIndex = match.Groups[3].Success
                ? int.Parse(match.Groups[3].Value, CultureInfo.InvariantCulture)
                : 0;
            if (headerGroup == group && headerSector == sector && headerIndex == stationIndex)
                return i + 1;
        }

        return -1;
    }
}
