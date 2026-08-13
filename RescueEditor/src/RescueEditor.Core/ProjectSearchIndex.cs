using System.Globalization;

namespace RescueEditor.Core;

public enum ProjectSearchKind
{
    Dialogue,
    Script,
}

public enum ProjectSearchMatch
{
    Opcode,
    Define,
    Id,
    Text,
}

public enum ProjectSearchRank
{
    Exact = 0,
    Prefix = 1,
    Substring = 2,
}

public sealed record ProjectSearchHit(
    ProjectSearchKind Kind,
    ProjectSearchMatch Match,
    ProjectSearchRank Rank,
    string Title,
    string Snippet,
    string? AssetId = null,
    int DialogueOffset = -1,
    ScriptAssetHit? Script = null);

/// <summary>Project-wide search over dialogue strings and ground-script opcodes / named ids.</summary>
public sealed class ProjectSearchIndex
{
    public static ProjectSearchIndex Empty { get; } = new([]);

    private readonly IReadOnlyList<IndexedDoc> _docs;
    private readonly Dictionary<string, List<TokenHit>> _postings;
    private readonly string[] _tokens;
    private readonly int[] _textDocs;

    private ProjectSearchIndex(IReadOnlyList<IndexedDoc> docs)
    {
        _docs = docs;
        _postings = new Dictionary<string, List<TokenHit>>(StringComparer.OrdinalIgnoreCase);
        var tokenSet = new HashSet<string>(StringComparer.OrdinalIgnoreCase);
        var textDocs = new List<int>();
        for (var i = 0; i < _docs.Count; i++)
        {
            var doc = _docs[i];
            if (!string.IsNullOrEmpty(doc.TextHaystack))
                textDocs.Add(i);
            foreach (var token in doc.IdTokens)
            {
                if (string.IsNullOrWhiteSpace(token))
                    continue;
                tokenSet.Add(token);
                if (!_postings.TryGetValue(token, out var list))
                {
                    list = [];
                    _postings[token] = list;
                }

                list.Add(new TokenHit(i, KindOf(token, doc)));
            }
        }

        _tokens = tokenSet.ToArray();
        Array.Sort(_tokens, StringComparer.OrdinalIgnoreCase);
        _textDocs = textDocs.ToArray();
    }

    public int DocumentCount => _docs.Count;

    public static ProjectSearchIndex Build(
        IEnumerable<AssetDescriptor>? assets,
        SceneDatabase? database,
        ScriptNamedDefinitions? names = null)
    {
        var docs = new List<IndexedDoc>();
        var seenDialogue = new HashSet<int>();
        var dialogueIndex = new Dictionary<int, int>();

        if (assets is not null)
        {
            foreach (var asset in assets)
            {
                if (asset.Kind != AssetKind.Dialogue)
                    continue;
                seenDialogue.Add(asset.Offset);
                dialogueIndex[asset.Offset] = docs.Count;
                docs.Add(DialogueDoc(asset.Id, asset.Name, asset.Offset, asset.Description ?? ""));
            }
        }

        if (database is not null)
        {
            foreach (var dialogue in database.DialogueByOffset.Values)
            {
                if (!seenDialogue.Add(dialogue.Offset))
                    continue;
                var name = $"0x{dialogue.Offset:X}";
                dialogueIndex[dialogue.Offset] = docs.Count;
                docs.Add(DialogueDoc($"dialogue:{dialogue.Offset:X}", name, dialogue.Offset, dialogue.Text));
            }

            CollectScripts(docs, database, names, dialogueIndex);
        }

        return new ProjectSearchIndex(docs);
    }

    public IReadOnlyList<ProjectSearchHit> Search(string query, int limit = 40)
    {
        if (limit <= 0 || _docs.Count == 0 || string.IsNullOrWhiteSpace(query))
            return [];

        var needle = query.Trim();
        var best = new Dictionary<int, (ProjectSearchRank Rank, ProjectSearchMatch Match)>();

        foreach (var token in _tokens)
        {
            ProjectSearchRank rank;
            if (token.Equals(needle, StringComparison.OrdinalIgnoreCase))
                rank = ProjectSearchRank.Exact;
            else if (token.StartsWith(needle, StringComparison.OrdinalIgnoreCase))
                rank = ProjectSearchRank.Prefix;
            else if (token.Contains(needle, StringComparison.OrdinalIgnoreCase))
                rank = ProjectSearchRank.Substring;
            else
                continue;

            if (!_postings.TryGetValue(token, out var posting))
                continue;
            foreach (var hit in posting)
                ConsiderDoc(best, hit.Doc, rank, hit.Match);
        }

        foreach (var docIndex in _textDocs)
        {
            var text = _docs[docIndex].TextHaystack;
            if (!text.Contains(needle, StringComparison.OrdinalIgnoreCase))
                continue;
            ConsiderDoc(best, docIndex, ProjectSearchRank.Substring, ProjectSearchMatch.Text);
        }

        if (best.Count == 0)
            return [];

        var hits = new List<ProjectSearchHit>(Math.Min(limit, best.Count));
        foreach (var (docIndex, (rank, match)) in best)
        {
            var doc = _docs[docIndex];
            hits.Add(new ProjectSearchHit(
                doc.Kind, match, rank, doc.Title, Snippet(doc, needle),
                doc.AssetId, doc.DialogueOffset, doc.Script));
        }

        hits.Sort(CompareHits);
        if (hits.Count > limit)
            hits.RemoveRange(limit, hits.Count - limit);
        return hits;
    }

    private static void ConsiderDoc(
        Dictionary<int, (ProjectSearchRank Rank, ProjectSearchMatch Match)> best,
        int docIndex,
        ProjectSearchRank rank,
        ProjectSearchMatch match)
    {
        if (!best.TryGetValue(docIndex, out var current) ||
            rank < current.Rank ||
            (rank == current.Rank && match < current.Match))
            best[docIndex] = (rank, match);
    }

    private static int CompareHits(ProjectSearchHit a, ProjectSearchHit b)
    {
        var rank = a.Rank.CompareTo(b.Rank);
        if (rank != 0)
            return rank;
        var match = a.Match.CompareTo(b.Match);
        if (match != 0)
            return match;
        var kind = a.Kind.CompareTo(b.Kind);
        if (kind != 0)
            return kind;
        return string.Compare(a.Title, b.Title, StringComparison.OrdinalIgnoreCase);
    }

    private static ProjectSearchMatch KindOf(string token, IndexedDoc doc)
    {
        if (doc.Opcode is not null && token.Equals(doc.Opcode, StringComparison.OrdinalIgnoreCase))
            return ProjectSearchMatch.Opcode;
        if (doc.Defines.Any(d => d.Equals(token, StringComparison.OrdinalIgnoreCase)))
            return ProjectSearchMatch.Define;
        return doc.Kind == ProjectSearchKind.Script ? ProjectSearchMatch.Opcode : ProjectSearchMatch.Id;
    }

    private static string Snippet(IndexedDoc doc, string needle)
    {
        if (doc.MatchSnippet is { Length: > 0 } dedicated &&
            dedicated.Contains(needle, StringComparison.OrdinalIgnoreCase))
            return dedicated;
        if (!string.IsNullOrEmpty(doc.TextHaystack))
            return Truncate(doc.TextHaystack, 96);
        return doc.Title;
    }

    private static IndexedDoc DialogueDoc(string assetId, string name, int offset, string text)
    {
        var idTokens = new List<string> { name, assetId };
        if (name.StartsWith('D') && name.Length > 1)
            idTokens.Add(name);
        idTokens.Add($"0x{offset:X}");
        idTokens.Add(offset.ToString("X", CultureInfo.InvariantCulture));
        idTokens.Add(offset.ToString(CultureInfo.InvariantCulture));
        return new IndexedDoc(
            ProjectSearchKind.Dialogue,
            name,
            Array.Empty<string>(),
            null,
            idTokens,
            text ?? "",
            text ?? "",
            assetId,
            offset,
            null);
    }

    private static void CollectScripts(
        List<IndexedDoc> docs,
        SceneDatabase database,
        ScriptNamedDefinitions? names,
        Dictionary<int, int> dialogueIndex)
    {
        foreach (var scene in database.Scenes)
        {
            foreach (var group in scene.Groups)
            {
                foreach (var sector in group.Sectors)
                {
                    for (var stationIndex = 0; stationIndex < sector.Stations.Count; stationIndex++)
                    {
                        var station = sector.Stations[stationIndex];
                        AddCommands(docs, station.Commands, scene, sector, ScriptSiteKind.Station,
                            stationIndex, 0, station.Name, names, database, dialogueIndex);
                    }

                    AddEntities(docs, scene, sector, sector.Lives, ScriptSiteKind.Live, names, database, dialogueIndex);
                    AddEntities(docs, scene, sector, sector.Objects, ScriptSiteKind.Object, names, database, dialogueIndex);
                    AddEntities(docs, scene, sector, sector.Effects, ScriptSiteKind.Effect, names, database, dialogueIndex);

                    for (var eventIndex = 0; eventIndex < sector.Events.Count; eventIndex++)
                    {
                        var entity = sector.Events[eventIndex];
                        if (entity.EventScript is not { Commands.Count: > 0 } eventScript)
                            continue;
                        AddCommands(docs, eventScript.Commands, scene, sector, ScriptSiteKind.Event,
                            entity.Index >= 0 ? entity.Index : eventIndex, 0, eventScript.Name, names, database,
                            dialogueIndex);
                    }
                }
            }
        }

        for (var i = 0; i < database.FunctionScripts.Count; i++)
        {
            var function = database.FunctionScripts[i];
            AddCommands(docs, function.Commands, scene: null, sector: null, ScriptSiteKind.Function,
                i, 0, function.Name, names, database, dialogueIndex);
        }
    }

    private static void AddEntities(
        List<IndexedDoc> docs,
        Scene scene,
        SceneSector sector,
        IReadOnlyList<SceneEntity> entities,
        ScriptSiteKind site,
        ScriptNamedDefinitions? names,
        SceneDatabase database,
        Dictionary<int, int> dialogueIndex)
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
                AddCommands(docs, commands, scene, sector, site, index, slot, entity.DisplayName, names, database,
                    dialogueIndex);
            }
        }
    }

    private static void AddCommands(
        List<IndexedDoc> docs,
        IReadOnlyList<ScriptCommandData> commands,
        Scene? scene,
        SceneSector? sector,
        ScriptSiteKind site,
        int siteIndex,
        int scriptSlot,
        string siteName,
        ScriptNamedDefinitions? names,
        SceneDatabase database,
        Dictionary<int, int> dialogueIndex)
    {
        var mapId = scene?.MapId ?? -1;
        var sceneName = scene?.Name ?? "";
        var group = sector?.Group ?? -1;
        var sectorId = sector?.Sector ?? -1;

        for (var i = 0; i < commands.Count; i++)
        {
            var command = commands[i];
            if (ScriptOpcodeNames.TerminatorOps.Contains(command.Op))
                continue;

            var opName = ScriptOpcodeNames.GetName(command.Op);
            var defines = CollectDefines(command, names);
            var dialogueText = TryDialogueText(command, database);
            var key = ScriptAssetIndex.KeysOn(command).FirstOrDefault();
            var kind = key == default ? ScriptAssetKind.Map : key.Kind;
            var value = key == default ? mapId : key.Value;
            var hit = new ScriptAssetHit(
                kind, value, mapId, sceneName, group, sectorId, site, siteIndex, scriptSlot, i,
                command.Op, opName, siteName);

            var offset = DialogueResolver.PointerToOffset(command.ArgPtr);
            if (offset >= 0 && dialogueIndex.TryGetValue(offset, out var dialogueDoc) &&
                docs[dialogueDoc].Script is null)
            {
                docs[dialogueDoc] = docs[dialogueDoc] with { Script = hit };
            }

            var idTokens = new List<string> { opName, $"CMD_{command.Op:X2}" };
            idTokens.AddRange(defines);
            var snippet = defines.Count > 0
                ? $"{opName}({string.Join(", ", defines)}) · {hit.LocationLabel}"
                : hit.LocationLabel;
            docs.Add(new IndexedDoc(
                ProjectSearchKind.Script,
                opName,
                defines,
                opName,
                idTokens,
                dialogueText ?? "",
                snippet,
                null,
                offset,
                hit));
        }
    }

    private static List<string> CollectDefines(ScriptCommandData command, ScriptNamedDefinitions? names)
    {
        var defines = new List<string>();
        if (names is null)
            return defines;

        var fields = ScriptCommandSchema.GetSemanticFields(command.Op);
        var count = fields is { Count: > 0 } ? fields.Count : 4;
        for (var i = 0; i < count; i++)
        {
            var catalog = names.CatalogFor(command.Op, i);
            if (catalog is null)
                continue;
            int value;
            if (fields is { Count: > 0 })
                value = ScriptCommandSchema.Read(command, fields[i].Field);
            else
            {
                value = i switch
                {
                    0 => command.ArgByte,
                    1 => command.ArgShort,
                    2 => command.Arg1,
                    _ => command.Arg2,
                };
            }

            if (catalog.TryGetName(value, out var name))
                defines.Add(name);
        }

        return defines;
    }

    private static string? TryDialogueText(ScriptCommandData command, SceneDatabase database)
    {
        if (!ScriptOpcodeNames.TextPointerOps.Contains(command.Op) || command.ArgPtr == 0)
            return null;
        var offset = DialogueResolver.PointerToOffset(command.ArgPtr);
        return offset >= 0 && database.DialogueByOffset.TryGetValue(offset, out var dialogue)
            ? dialogue.Text
            : null;
    }

    private static string Truncate(string text, int max)
    {
        text = text.Replace('\n', ' ').Trim();
        return text.Length <= max ? text : text[..(max - 1)] + "…";
    }

    private readonly record struct TokenHit(int Doc, ProjectSearchMatch Match);

    private sealed record IndexedDoc(
        ProjectSearchKind Kind,
        string Title,
        IReadOnlyList<string> Defines,
        string? Opcode,
        IReadOnlyList<string> IdTokens,
        string TextHaystack,
        string MatchSnippet,
        string? AssetId,
        int DialogueOffset,
        ScriptAssetHit? Script);
}
