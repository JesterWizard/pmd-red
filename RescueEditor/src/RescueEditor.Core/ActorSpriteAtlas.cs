namespace RescueEditor.Core;

/// <summary>
/// Standing overworld frames from the decomp tree (<c>graphics/ax/mon/*/sprite_1.png</c>).
/// </summary>
public sealed class ActorSpriteAtlas
{
    private readonly string _repositoryRoot;
    private readonly IReadOnlyDictionary<int, string> _folders;
    private readonly Dictionary<int, RgbaImage?> _bySpecies = new();
    private readonly Dictionary<(int Species, int Frame), RgbaImage?> _bySpeciesFrame = new();
    private readonly Dictionary<int, int> _frameCount = new();
    private readonly Dictionary<int, RgbaImage?> _byLiveType = new();
    private readonly Dictionary<byte, short> _liveTypeSpeciesOverrides = new();
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

    public void ApplyAppearance(PlayAppearance appearance)
    {
        foreach (byte typeId in new byte[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 33, 34, 35 })
        {
            var species = appearance.TryResolveLiveType(typeId);
            if (species is short s && s > 0)
                SetLiveTypeSpecies(typeId, s);
        }
    }

    public void SetLiveTypeSpecies(byte typeId, short species)
    {
        _liveTypeSpeciesOverrides[typeId] = species;
        _byLiveType.Remove(typeId);
    }

    public RgbaImage? TryGetForLive(RomImage rom, RomProfile? profile, byte typeId)
    {
        if (_byLiveType.TryGetValue(typeId, out var cached))
            return cached;

        if (profile is not null)
            _profile = profile;
        _profile ??= RomProfile.Us10;

        short species;
        if (_liveTypeSpeciesOverrides.TryGetValue(typeId, out var over))
            species = over;
        else
            species = GroundLivesTypes.ResolvePreviewSpecies(rom, _profile, typeId);

        var sprite = species > 0 ? TryGetSpeciesSprite(species) : null;
        _byLiveType[typeId] = sprite;
        return sprite;
    }

    public RgbaImage? TryGetSpeciesSprite(int speciesId) =>
        TryGetSpeciesSprite(speciesId, frameIndex: 0);

    /// <summary>
    /// Frame-aware sprite lookup. Idle cycles frames 0..N; sleep prefers a later still.
    /// </summary>
    public RgbaImage? TryGetSpeciesSprite(int speciesId, int frameIndex)
    {
        if (speciesId <= 0)
            return null;

        EnsureFramesLoaded(speciesId);
        var count = _frameCount.GetValueOrDefault(speciesId);
        if (count <= 0)
            return null;

        var index = Math.Abs(frameIndex) % count;
        if (_bySpeciesFrame.TryGetValue((speciesId, index), out var cached))
            return cached;
        return _bySpecies.GetValueOrDefault(speciesId);
    }

    /// <summary>
    /// Idle / standing: freeze on frame 0.
    /// Sleep: dedicated still.
    /// Walking or a non-idle SELECT_ANIMATION: cycle frames.
    /// </summary>
    public RgbaImage? TryGetAnimatedSprite(int speciesId, int animationId, int tickFrames, bool isMoving = false)
    {
        EnsureFramesLoaded(speciesId);
        var count = _frameCount.GetValueOrDefault(speciesId);
        if (count <= 0)
            return null;

        if (animationId == GroundScriptVm.AnimSleep)
        {
            var sleepIndex = count >= 7 ? 6 : count - 1;
            return TryGetSpeciesSprite(speciesId, sleepIndex);
        }

        var shouldCycle = isMoving ||
            (animationId != GroundScriptVm.AnimIdle && animationId > 0);
        if (!shouldCycle)
            return TryGetSpeciesSprite(speciesId, 0);

        var cycle = Math.Min(4, count);
        var frame = (tickFrames / 8) % cycle;
        return TryGetSpeciesSprite(speciesId, frame);
    }

    private void EnsureFramesLoaded(int speciesId)
    {
        if (_frameCount.ContainsKey(speciesId))
            return;

        var folder = _folders.TryGetValue(speciesId, out var mapped)
            ? mapped
            : MonsterSpriteFolders.ForSpecies(speciesId, _folders);
        if (folder is null)
        {
            _frameCount[speciesId] = 0;
            _bySpecies[speciesId] = null;
            return;
        }

        var dir = Path.Combine(_repositoryRoot, "graphics", "ax", "mon", folder);
        var loaded = 0;
        // Load sequential sprite_1.png … sprite_16.png (skip compound names like sprite_16_1).
        for (var i = 1; i <= 16; i++)
        {
            var path = Path.Combine(dir, $"sprite_{i}.png");
            if (!File.Exists(path))
                break;
            try
            {
                var image = RgbaImage.FromPng(File.ReadAllBytes(path));
                _bySpeciesFrame[(speciesId, loaded)] = image;
                if (loaded == 0)
                    _bySpecies[speciesId] = image;
                loaded++;
            }
            catch
            {
                break;
            }
        }

        if (loaded == 0)
            _bySpecies[speciesId] = null;
        _frameCount[speciesId] = loaded;
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
