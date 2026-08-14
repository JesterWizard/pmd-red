using System.Text;

namespace RescueEditor.Core;

public sealed record ScriptCastMember(
    int LiveIndex,
    byte TypeId,
    short SpeciesId,
    string SpeciesName,
    string? MonsterDefine,
    string? Role = null)
{
    /// <summary>e.g. <c>PLAYER (Charmander)</c> or <c>Gengar</c>.</summary>
    public string DisplayLabel =>
        Role is null ? SpeciesName : $"{Role} ({SpeciesName})";
}

/// <summary>
/// Scene lives roster for script editor annotations (PORTRAIT speaker → species, @live headers).
/// MSG/PORTRAIT speaker ids are name slots; UPDATE_NAME binds them to a live (see SpeakerSlotMap).
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
        Func<int, string?>? resolveRole = null,
        int group = -1,
        int sector = -1)
    {
        resolveSpecies ??= static _ => 0;
        prettyName ??= species => DialogueFormatter.PrettySpeciesName(species);
        resolveRole ??= static _ => null;

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
                    var role = resolveRole(live.TypeId);
                    var name = species > 0 ? prettyName(species) : $"type {live.TypeId}";
                    string? define = null;
                    if (species > 0 && monsters is not null)
                        monsters.TryGetName(species, out define);
                    members.Add(new ScriptCastMember(i, live.TypeId, species, name, define, role));
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
        int sector = -1,
        PlayAppearance? appearance = null)
    {
        profile ??= RomProfile.Us10;
        appearance ??= PlayAppearance.CharmanderAndBulbasaur;
        var capturedAppearance = appearance;

        Func<int, short>? resolve = null;
        Func<int, string?> resolveRole = typeId =>
        {
            if (rom is null)
                return PlayAppearance.RoleForLiveType(typeId);
            // Only label PLAYER/PARTNER when the ROM kind is dynamic (species 0).
            var fromRom = GroundLivesTypes.ResolveSpecies(rom, profile, typeId);
            return fromRom == 0 ? PlayAppearance.RoleForLiveType(typeId) : null;
        };

        if (rom is not null)
        {
            var capturedRom = rom;
            var capturedProfile = profile;
            resolve = typeId => GroundLivesTypes.ResolvePlaySpecies(
                capturedRom, capturedProfile, typeId, capturedAppearance);
        }
        else
        {
            resolve = typeId => capturedAppearance.TryResolveLiveType((byte)Math.Clamp(typeId, 0, 255)) ?? 0;
        }

        return Build(
            scene,
            resolveSpecies: resolve,
            monsters: monsters,
            prettyName: species => DialogueFormatter.PrettySpeciesName(species, repositoryRoot),
            resolveRole: resolveRole,
            group: group,
            sector: sector);
    }

    public bool TryGet(int liveIndex, out ScriptCastMember member) =>
        _byLive.TryGetValue(liveIndex, out member!);

    public bool TryGetByTypeId(int typeId, out ScriptCastMember member)
    {
        foreach (var candidate in Members)
        {
            if (candidate.TypeId != typeId)
                continue;
            member = candidate;
            return true;
        }

        member = null!;
        return false;
    }

    public string? DescribeLive(int liveIndex) =>
        TryGet(liveIndex, out var member) ? $"live{liveIndex} {member.DisplayLabel}" : null;

    public string RosterText()
    {
        if (Members.Count == 0)
            return "No lives in this scene sector.";

        var builder = new StringBuilder();
        builder.AppendLine("Scene cast — lives in this sector (MSG ids are name slots, not liveN):");
        foreach (var member in Members)
        {
            builder.Append("  • live").Append(member.LiveIndex)
                .Append("  type ").Append(member.TypeId)
                .Append("  ").Append(member.DisplayLabel);
            if (!string.IsNullOrEmpty(member.MonsterDefine) && member.Role is null)
                builder.Append("  (").Append(member.MonsterDefine).Append(')');
            builder.AppendLine();
        }

        return builder.ToString().TrimEnd();
    }
}
