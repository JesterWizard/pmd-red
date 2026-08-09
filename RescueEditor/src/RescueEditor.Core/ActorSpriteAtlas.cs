namespace RescueEditor.Core;

/// <summary>
/// Standing overworld frames from the decomp tree (<c>graphics/ax/mon/*/sprite_1.png</c>).
/// </summary>
public sealed class ActorSpriteAtlas
{
    private readonly string _repositoryRoot;
    private readonly IReadOnlyDictionary<int, string> _folders;
    private readonly Dictionary<int, RgbaImage?> _bySpecies = new();
    private readonly Dictionary<int, RgbaImage?> _byLiveType = new();
    private RomProfile? _profile;

    public ActorSpriteAtlas(string repositoryRoot, RomProfile? profile = null)
    {
        _repositoryRoot = ResolveAssetsRoot(repositoryRoot);
        _folders = MonsterSpriteFolders.Load(_repositoryRoot);
        // Table anchors match US 1.0 / typical hacks even when the ROM SHA does not.
        _profile = profile ?? RomProfile.Us10;
    }

    /// <summary>Walk up from <paramref name="hint"/> until actor or ornament sprite trees exist.</summary>
    public static string ResolveAssetsRoot(string hint)
    {
        try
        {
            var current = new DirectoryInfo(Path.GetFullPath(hint));
            while (current is not null)
            {
                var hasMon = Directory.Exists(Path.Combine(current.FullName, "graphics", "ax", "mon"));
                var hasOrnament = Directory.Exists(Path.Combine(current.FullName, "graphics", "ornament"));
                if (hasMon || hasOrnament)
                    return current.FullName;
                current = current.Parent;
            }
        }
        catch
        {
            // Keep hint.
        }
        return hint;
    }

    public RgbaImage? TryGetForLive(RomImage rom, RomProfile? profile, byte typeId)
    {
        if (_byLiveType.TryGetValue(typeId, out var cached))
            return cached;

        if (profile is not null)
            _profile = profile;
        _profile ??= RomProfile.Us10;

        var species = GroundLivesTypes.ResolvePreviewSpecies(rom, _profile, typeId);
        var sprite = species > 0 ? TryGetSpeciesSprite(species) : null;
        _byLiveType[typeId] = sprite;
        return sprite;
    }

    public RgbaImage? TryGetSpeciesSprite(int speciesId)
    {
        if (_bySpecies.TryGetValue(speciesId, out var cached))
            return cached;

        var folder = _folders.TryGetValue(speciesId, out var mapped)
            ? mapped
            : MonsterSpriteFolders.ForSpecies(speciesId, _folders);
        if (folder is null)
        {
            _bySpecies[speciesId] = null;
            return null;
        }

        var path = Path.Combine(_repositoryRoot, "graphics", "ax", "mon", folder, "sprite_1.png");
        if (!File.Exists(path))
        {
            _bySpecies[speciesId] = null;
            return null;
        }

        try
        {
            var image = RgbaImage.FromPng(File.ReadAllBytes(path));
            _bySpecies[speciesId] = image;
            return image;
        }
        catch
        {
            _bySpecies[speciesId] = null;
            return null;
        }
    }
}

/// <summary>Species id → <c>graphics/ax/mon/&lt;folder&gt;</c> name.</summary>
public static class MonsterSpriteFolders
{
    private static readonly Dictionary<int, string> Overrides = new()
    {
        [29] = "nidoranf",
        [32] = "nidoranm",
        [83] = "farfetchd",
        [122] = "mrmime",
        [376] = "castform",
        [377] = "castformsnowy",
        [378] = "castformsunny",
        [379] = "castformrainy",
        [414] = "deoxysnormal",
        [415] = "unownemark",
        [416] = "unownqmark",
        [417] = "deoxysattack",
        [418] = "deoxysdefense",
        [419] = "deoxysspeed",
    };

    public static string? ForSpecies(int speciesId, IReadOnlyDictionary<int, string>? folders = null)
    {
        if (speciesId <= 0)
            return null;
        if (Overrides.TryGetValue(speciesId, out var forced))
            return forced;
        if (speciesId is >= 201 and <= 226)
            return "unown" + (char)('a' + (speciesId - 201));
        if (folders is not null && folders.TryGetValue(speciesId, out var fromTable))
            return fromTable;
        return null;
    }

    public static IReadOnlyDictionary<int, string> Load(string repositoryRoot)
    {
        var result = new Dictionary<int, string>(Overrides);
        for (var id = 201; id <= 226; id++)
            result[id] = "unown" + (char)('a' + (id - 201));

        var jsonPath = Path.Combine(repositoryRoot, "data", "monster", "monster_data.json");
        if (!File.Exists(jsonPath))
        {
            var current = new DirectoryInfo(repositoryRoot);
            while (current is not null)
            {
                var candidate = Path.Combine(current.FullName, "data", "monster", "monster_data.json");
                if (File.Exists(candidate))
                {
                    jsonPath = candidate;
                    break;
                }
                current = current.Parent;
            }
        }
        if (!File.Exists(jsonPath))
            return result;

        try
        {
            using var doc = System.Text.Json.JsonDocument.Parse(File.ReadAllText(jsonPath));
            var index = 0;
            foreach (var entry in doc.RootElement.EnumerateArray())
            {
                if (entry.TryGetProperty("name", out var nameProp))
                {
                    var name = nameProp.GetString() ?? string.Empty;
                    if (name.StartsWith("MonsterName", StringComparison.Ordinal) && !result.ContainsKey(index))
                    {
                        var folder = name["MonsterName".Length..]
                            .ToLowerInvariant()
                            .Replace("_", "", StringComparison.Ordinal);
                        if (folder.Length > 0 && folder != "none")
                            result[index] = folder;
                    }
                }
                index++;
            }
        }
        catch
        {
            // Keep overrides only.
        }

        return result;
    }
}
