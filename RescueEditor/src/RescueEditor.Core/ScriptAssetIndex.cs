using System.Globalization;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public enum ScriptAssetKind
{
    Dialogue,
    Music,
    Fanfare,
    Portrait,
    Map,
}

public enum ScriptSiteKind
{
    Station,
    Live,
    Object,
    Effect,
    Event,
    Function,
}

public sealed record ScriptAssetHit(
    ScriptAssetKind Kind,
    int Value,
    int MapId,
    string SceneName,
    int Group,
    int Sector,
    ScriptSiteKind Site,
    int SiteIndex,
    int ScriptSlot,
    int CommandIndex,
    byte Op,
    string OpcodeName,
    string SiteName = "",
    string? PortraitSpecies = null,
    int PortraitEmotion = 0)
{
    public string LocationLabel => Site switch
    {
        ScriptSiteKind.Function => $"function {SiteName} · {OpcodeName}",
        ScriptSiteKind.Station => $"g{Group}/s{Sector} · station {SiteIndex} · {OpcodeName}",
        ScriptSiteKind.Live => $"g{Group}/s{Sector} · live {SiteIndex} dlg{ScriptSlot} · {OpcodeName}",
        ScriptSiteKind.Object => $"g{Group}/s{Sector} · object {SiteIndex} dlg{ScriptSlot} · {OpcodeName}",
        ScriptSiteKind.Effect => $"g{Group}/s{Sector} · effect {SiteIndex} dlg{ScriptSlot} · {OpcodeName}",
        ScriptSiteKind.Event => $"g{Group}/s{Sector} · event {SiteIndex} · {OpcodeName}",
        _ => OpcodeName,
    };
}

public readonly record struct ScriptSourceSelection(int Line, int Column, int Length);

/// <summary>Reverse lookup from dialogue / BGM / portrait / map ids to scene-script sites.</summary>
public sealed class ScriptAssetIndex
{
    private static readonly Regex ScriptHeader = new(
        @"^@(?<kind>station|live|object|effect|event)\s+g(?<g>\d+)/s(?<s>\d+)(?:\.(?<i>\d+))?(?:\s+dlg(?<dlg>\d+))?",
        RegexOptions.IgnoreCase | RegexOptions.CultureInvariant | RegexOptions.Compiled);

    public static ScriptAssetIndex Empty { get; } = new([]);

    private readonly IReadOnlyList<ScriptAssetHit> _hits;
    private readonly Dictionary<(ScriptAssetKind Kind, int Value), List<ScriptAssetHit>> _byValue;
    private readonly Dictionary<string, List<int>> _mapIdsByGroundName;

    public ScriptAssetIndex(
        IEnumerable<ScriptAssetHit> hits,
        IReadOnlyDictionary<string, List<int>>? mapIdsByGroundName = null)
    {
        _hits = hits.ToArray();
        _byValue = new Dictionary<(ScriptAssetKind, int), List<ScriptAssetHit>>();
        foreach (var hit in _hits)
        {
            var key = (hit.Kind, hit.Value);
            if (!_byValue.TryGetValue(key, out var list))
            {
                list = [];
                _byValue[key] = list;
            }

            list.Add(hit);
        }

        _mapIdsByGroundName = new Dictionary<string, List<int>>(StringComparer.OrdinalIgnoreCase);
        if (mapIdsByGroundName is null)
            return;
        foreach (var (name, ids) in mapIdsByGroundName)
        {
            if (!_mapIdsByGroundName.TryGetValue(name, out var list))
            {
                list = [];
                _mapIdsByGroundName[name] = list;
            }

            foreach (var id in ids)
            {
                if (!list.Contains(id))
                    list.Add(id);
            }
        }
    }

    public int Count => _hits.Count;

    public static ScriptAssetIndex Build(SceneDatabase database)
    {
        var hits = new List<ScriptAssetHit>();
        foreach (var scene in database.Scenes)
        {
            foreach (var group in scene.Groups)
            {
                foreach (var sector in group.Sectors)
                {
                    for (var stationIndex = 0; stationIndex < sector.Stations.Count; stationIndex++)
                    {
                        var station = sector.Stations[stationIndex];
                        Collect(hits, station.Commands, scene, sector, ScriptSiteKind.Station,
                            stationIndex, scriptSlot: 0, station.Name);
                    }

                    CollectEntities(hits, scene, sector, sector.Lives, ScriptSiteKind.Live);
                    CollectEntities(hits, scene, sector, sector.Objects, ScriptSiteKind.Object);
                    CollectEntities(hits, scene, sector, sector.Effects, ScriptSiteKind.Effect);

                    for (var eventIndex = 0; eventIndex < sector.Events.Count; eventIndex++)
                    {
                        var entity = sector.Events[eventIndex];
                        if (entity.EventScript is not { Commands.Count: > 0 } eventScript)
                            continue;
                        Collect(hits, eventScript.Commands, scene, sector, ScriptSiteKind.Event,
                            entity.Index >= 0 ? entity.Index : eventIndex, 0, eventScript.Name);
                    }
                }
            }
        }

        for (var i = 0; i < database.FunctionScripts.Count; i++)
        {
            var function = database.FunctionScripts[i];
            Collect(hits, function.Commands, scene: null, sector: null, ScriptSiteKind.Function,
                i, 0, function.Name);
        }

        var mapIdsByGroundName = new Dictionary<string, List<int>>(StringComparer.OrdinalIgnoreCase);
        foreach (var scene in database.Scenes)
        {
            void AddName(string? name)
            {
                if (string.IsNullOrWhiteSpace(name))
                    return;
                if (!mapIdsByGroundName.TryGetValue(name, out var ids))
                {
                    ids = [];
                    mapIdsByGroundName[name] = ids;
                }

                if (!ids.Contains(scene.MapId))
                    ids.Add(scene.MapId);
            }

            AddName(scene.Map?.BmaName);
            AddName(scene.Map?.Name);
            AddName(scene.Name);
        }

        return new ScriptAssetIndex(hits, mapIdsByGroundName);
    }

    public IReadOnlyList<ScriptAssetHit> Find(ScriptAssetKind kind, int value) =>
        _byValue.TryGetValue((kind, value), out var list) ? list : [];

    public IReadOnlyList<ScriptAssetHit> FindRelated(ScriptCommandData command)
    {
        var results = new List<ScriptAssetHit>();
        var seen = new HashSet<ScriptAssetHit>();
        foreach (var (kind, value) in KeysOn(command))
        {
            foreach (var hit in Find(kind, value))
            {
                if (seen.Add(hit))
                    results.Add(hit);
            }
        }

        return results;
    }

    public static IEnumerable<(ScriptAssetKind Kind, int Value)> KeysOn(ScriptCommandData command)
    {
        switch (command.Op)
        {
            case 0x08 or 0x09:
                yield return (ScriptAssetKind.Map, command.Arg1);
                break;
            case 0x0A:
                yield return (ScriptAssetKind.Map, command.Arg2);
                break;
            case 0x44 or 0x46:
                yield return (ScriptAssetKind.Music, command.Arg1);
                break;
            case 0x45:
                yield return (ScriptAssetKind.Music, command.Arg1);
                break;
            case 0x49 or 0x4C or 0x4E:
                yield return (ScriptAssetKind.Fanfare, command.Arg1);
                break;
            case 0x2E or 0x2F:
                yield return (ScriptAssetKind.Portrait, command.ArgShort);
                break;
        }

        if (ScriptOpcodeNames.TextPointerOps.Contains(command.Op) && command.ArgPtr != 0)
        {
            var offset = DialogueResolver.PointerToOffset(command.ArgPtr);
            if (offset >= 0)
                yield return (ScriptAssetKind.Dialogue, offset);
        }
    }

    public IReadOnlyList<ScriptAssetHit> FindForAsset(AssetDescriptor asset)
    {
        switch (asset.Kind)
        {
            case AssetKind.Dialogue:
                return Find(ScriptAssetKind.Dialogue, asset.Offset);
            case AssetKind.SoundSong:
                if (!TrySongId(asset, out var songId))
                    return [];
                return songId >= SoundIndexer.FanfareStartIndex
                    ? Find(ScriptAssetKind.Fanfare, songId)
                    : Find(ScriptAssetKind.Music, songId);
            case AssetKind.Scene:
                if (TryMapId(asset, out var mapId))
                    return Find(ScriptAssetKind.Map, mapId);
                return [];
            case AssetKind.GroundMap:
                return FindMapsForGroundAsset(asset);
            case AssetKind.KaoPortrait:
            case AssetKind.KaoPortraitSheet:
                if (!asset.Metadata.TryGetValue("species", out var species) ||
                    string.IsNullOrWhiteSpace(species))
                    species = asset.Name;
                return _hits
                    .Where(hit => hit.Kind == ScriptAssetKind.Portrait &&
                                  string.Equals(hit.PortraitSpecies, species, StringComparison.OrdinalIgnoreCase))
                    .ToArray();
            default:
                return [];
        }
    }

    /// <summary>1-based source line of the hit's command, or -1.</summary>
    public static int FindSourceLine(string sourceText, ScriptAssetHit hit)
    {
        var selection = FindSourceSelection(sourceText, hit);
        return selection.Line;
    }

    /// <summary>1-based line and 0-based column of the command, preferring a quoted dialogue string.</summary>
    public static ScriptSourceSelection FindSourceSelection(string sourceText, ScriptAssetHit hit)
    {
        if (hit.Site == ScriptSiteKind.Function)
            return default;

        var lines = sourceText.Replace("\r\n", "\n").Replace('\r', '\n').Split('\n');
        var kind = hit.Site switch
        {
            ScriptSiteKind.Station => "station",
            ScriptSiteKind.Live => "live",
            ScriptSiteKind.Object => "object",
            ScriptSiteKind.Effect => "effect",
            ScriptSiteKind.Event => "event",
            _ => null,
        };
        if (kind is null)
            return default;

        for (var i = 0; i < lines.Length; i++)
        {
            var trimmed = lines[i].Trim();
            var match = ScriptHeader.Match(trimmed);
            if (!match.Success)
                continue;
            if (!string.Equals(match.Groups["kind"].Value, kind, StringComparison.OrdinalIgnoreCase))
                continue;
            var group = int.Parse(match.Groups["g"].Value, CultureInfo.InvariantCulture);
            var sector = int.Parse(match.Groups["s"].Value, CultureInfo.InvariantCulture);
            var index = match.Groups["i"].Success
                ? int.Parse(match.Groups["i"].Value, CultureInfo.InvariantCulture)
                : 0;
            var slot = match.Groups["dlg"].Success
                ? int.Parse(match.Groups["dlg"].Value, CultureInfo.InvariantCulture)
                : 0;
            if (group != hit.Group || sector != hit.Sector || index != hit.SiteIndex)
                continue;
            if (hit.Site is ScriptSiteKind.Live or ScriptSiteKind.Object or ScriptSiteKind.Effect &&
                slot != hit.ScriptSlot)
                continue;

            var command = 0;
            for (var line = i + 1; line < lines.Length; line++)
            {
                var text = lines[line].Trim();
                if (text.Length == 0 || text.StartsWith('#'))
                    continue;
                if (text.StartsWith('@'))
                    break;
                if (command == hit.CommandIndex)
                    return SelectionOnLine(line + 1, lines[line]);
                command++;
            }
        }

        return default;
    }

    private static ScriptSourceSelection SelectionOnLine(int lineNumber, string line)
    {
        var start = line.IndexOf('"');
        if (start >= 0)
        {
            for (var i = start + 1; i < line.Length; i++)
            {
                if (line[i] == '\\')
                {
                    i++;
                    continue;
                }

                if (line[i] == '"')
                    return new ScriptSourceSelection(lineNumber, start, i - start + 1);
            }

            return new ScriptSourceSelection(lineNumber, start, Math.Max(1, line.Length - start));
        }

        var trimmedStart = line.Length - line.TrimStart().Length;
        return new ScriptSourceSelection(lineNumber, trimmedStart, Math.Max(1, line.TrimEnd().Length - trimmedStart));
    }

    private IReadOnlyList<ScriptAssetHit> FindMapsForGroundAsset(AssetDescriptor asset)
    {
        var names = new HashSet<string>(StringComparer.OrdinalIgnoreCase);
        if (asset.Metadata.TryGetValue("romName", out var romName) && !string.IsNullOrWhiteSpace(romName))
            names.Add(romName);
        if (asset.Metadata.TryGetValue("bmaName", out var bma) && !string.IsNullOrWhiteSpace(bma))
            names.Add(bma);
        if (!string.IsNullOrWhiteSpace(asset.Name))
            names.Add(asset.Name);

        var results = new List<ScriptAssetHit>();
        var seen = new HashSet<(int MapId, int CommandIndex, int Group, int Sector, ScriptSiteKind Site, int SiteIndex)>();
        foreach (var name in names)
        {
            if (!_mapIdsByGroundName.TryGetValue(name, out var ids))
                continue;
            foreach (var id in ids)
            {
                foreach (var hit in Find(ScriptAssetKind.Map, id))
                {
                    var key = (hit.MapId, hit.CommandIndex, hit.Group, hit.Sector, hit.Site, hit.SiteIndex);
                    if (seen.Add(key))
                        results.Add(hit);
                }
            }
        }

        return results;
    }

    private static void CollectEntities(
        List<ScriptAssetHit> hits,
        Scene scene,
        SceneSector sector,
        IReadOnlyList<SceneEntity> entities,
        ScriptSiteKind site)
    {
        for (var entityIndex = 0; entityIndex < entities.Count; entityIndex++)
        {
            var entity = entities[entityIndex];
            for (var slot = 0; slot < entity.Scripts.Count; slot++)
            {
                var commands = entity.Scripts[slot].Commands;
                if (commands.Count == 0)
                    continue;
                var index = entity.Index >= 0 ? entity.Index : entityIndex;
                Collect(hits, commands, scene, sector, site, index, slot, entity.DisplayName);
            }
        }
    }

    private static void Collect(
        List<ScriptAssetHit> hits,
        IReadOnlyList<ScriptCommandData> commands,
        Scene? scene,
        SceneSector? sector,
        ScriptSiteKind site,
        int siteIndex,
        int scriptSlot,
        string siteName)
    {
        var mapId = scene?.MapId ?? -1;
        var sceneName = scene?.Name ?? "";
        var group = sector?.Group ?? -1;
        var sectorId = sector?.Sector ?? -1;

        for (var i = 0; i < commands.Count; i++)
        {
            var command = commands[i];
            var opName = ScriptOpcodeNames.GetName(command.Op);
            ScriptAssetHit Hit(ScriptAssetKind kind, int value, string? species = null, int emotion = 0) =>
                new(kind, value, mapId, sceneName, group, sectorId, site, siteIndex, scriptSlot, i,
                    command.Op, opName, siteName, species, emotion);

            switch (command.Op)
            {
                case 0x08 or 0x09:
                    hits.Add(Hit(ScriptAssetKind.Map, command.Arg1));
                    break;
                case 0x0A:
                    hits.Add(Hit(ScriptAssetKind.Map, command.Arg2));
                    break;
                case 0x44 or 0x46:
                    hits.Add(Hit(ScriptAssetKind.Music, command.Arg1));
                    break;
                case 0x45:
                    hits.Add(Hit(ScriptAssetKind.Music, command.Arg1));
                    break;
                case 0x49 or 0x4C or 0x4E:
                    hits.Add(Hit(ScriptAssetKind.Fanfare, command.Arg1));
                    break;
                case 0x2E or 0x2F:
                    var speaker = command.ArgShort;
                    string? species = null;
                    if (sector is not null && speaker >= 0 && speaker < sector.Lives.Count)
                    {
                        var live = sector.Lives[speaker];
                        species = string.IsNullOrWhiteSpace(live.DisplayName) ? null : live.DisplayName;
                    }

                    hits.Add(Hit(ScriptAssetKind.Portrait, speaker, species, command.Op == 0x2E ? command.Arg1 : 0));
                    break;
            }

            if (ScriptOpcodeNames.TextPointerOps.Contains(command.Op) && command.ArgPtr != 0)
            {
                var offset = DialogueResolver.PointerToOffset(command.ArgPtr);
                if (offset >= 0)
                    hits.Add(Hit(ScriptAssetKind.Dialogue, offset));
            }
        }
    }

    private static bool TrySongId(AssetDescriptor asset, out int songId)
    {
        songId = 0;
        return asset.Metadata.TryGetValue("songId", out var text) &&
               int.TryParse(text, NumberStyles.Integer, CultureInfo.InvariantCulture, out songId);
    }

    private static bool TryMapId(AssetDescriptor asset, out int mapId)
    {
        mapId = 0;
        return asset.Metadata.TryGetValue("mapId", out var text) &&
               int.TryParse(text, NumberStyles.Integer, CultureInfo.InvariantCulture, out mapId);
    }
}
