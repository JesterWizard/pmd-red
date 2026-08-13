using System.Text;

namespace RescueEditor.Core;

public sealed record ScriptCastMember(
    int LiveIndex,
    byte TypeId,
    short SpeciesId,
    string SpeciesName,
    string? MonsterDefine);

/// <summary>
/// Scene lives roster for script editor annotations (PORTRAIT speaker → species, @live headers).
/// </summary>
public sealed class ScriptSceneCast
{
    public ScriptSceneCast(IEnumerable<ScriptCastMember> members)
    {
        // Live indices are sector-local; keep first if duplicates slip through.
        Members = members
            .GroupBy(m => m.LiveIndex)
            .Select(g => g.First())
            .OrderBy(m => m.LiveIndex)
            .ToArray();
        _byLive = Members.ToDictionary(m => m.LiveIndex);
    }

    public IReadOnlyList<ScriptCastMember> Members { get; }
    private readonly Dictionary<int, ScriptCastMember> _byLive;

    public static ScriptSceneCast Empty { get; } = new([]);

    public static ScriptSceneCast Build(
        Scene scene,
        Func<int, short>? resolveSpecies = null,
        NamedIdCatalog? monsters = null,
        Func<short, string>? prettyName = null,
        int group = -1,
        int sector = -1)
    {
        resolveSpecies ??= static _ => 0;
        prettyName ??= species => DialogueFormatter.PrettySpeciesName(species);

        var members = new List<ScriptCastMember>();
        foreach (var g in scene.Groups)
        {
            foreach (var s in g.Sectors)
            {
                if (group >= 0 && s.Group != group)
                    continue;
                if (sector >= 0 && s.Sector != sector)
                    continue;
                if (s.Lives.Count == 0)
                    continue;

                for (var i = 0; i < s.Lives.Count; i++)
                {
                    var live = s.Lives[i];
                    var species = resolveSpecies(live.TypeId);
                    var name = species > 0 ? prettyName(species) : $"type {live.TypeId}";
                    string? define = null;
                    if (species > 0 && monsters is not null)
                        monsters.TryGetName(species, out define);
                    members.Add(new ScriptCastMember(i, live.TypeId, species, name, define));
                }

                // Live indices are sector-local (PORTRAIT liveN). Never merge sectors —
                // duplicate LiveIndex values would crash ToDictionary / confuse annotations.
                return new ScriptSceneCast(members);
            }
        }

        return new ScriptSceneCast(members);
    }

    public static ScriptSceneCast BuildFromRom(
        Scene scene,
        RomImage? rom,
        RomProfile? profile = null,
        NamedIdCatalog? monsters = null,
        string? repositoryRoot = null,
        int group = -1,
        int sector = -1)
    {
        profile ??= RomProfile.Us10;
        Func<int, short>? resolve = null;
        if (rom is not null)
        {
            var capturedRom = rom;
            var capturedProfile = profile;
            resolve = typeId => GroundLivesTypes.ResolvePreviewSpecies(capturedRom, capturedProfile, typeId);
        }

        return Build(
            scene,
            resolveSpecies: resolve,
            monsters: monsters,
            prettyName: species => DialogueFormatter.PrettySpeciesName(species, repositoryRoot),
            group: group,
            sector: sector);
    }

    public bool TryGet(int liveIndex, out ScriptCastMember member) =>
        _byLive.TryGetValue(liveIndex, out member!);

    public string? DescribeLive(int liveIndex) =>
        TryGet(liveIndex, out var member) ? $"live{liveIndex} {member.SpeciesName}" : null;

    public string RosterText()
    {
        if (Members.Count == 0)
            return "No lives in this scene sector.";

        var builder = new StringBuilder();
        builder.AppendLine("Scene cast (lives → portrait/actor):");
        foreach (var member in Members)
        {
            builder.Append("  • live").Append(member.LiveIndex)
                .Append("  type ").Append(member.TypeId)
                .Append("  ").Append(member.SpeciesName);
            if (!string.IsNullOrEmpty(member.MonsterDefine))
                builder.Append("  (").Append(member.MonsterDefine).Append(')');
            builder.AppendLine();
        }

        return builder.ToString().TrimEnd();
    }
}
