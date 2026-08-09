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
    /// AX sprite index (0 → <c>sprite_1.png</c>) lookup.
    /// </summary>
    public RgbaImage? TryGetSpeciesSprite(int speciesId, int frameIndex)
    {
        if (speciesId <= 0)
            return null;

        EnsureFramesLoaded(speciesId);
        if (_frameCount.GetValueOrDefault(speciesId) <= 0)
            return null;

        if (_bySpeciesFrame.TryGetValue((speciesId, frameIndex), out var cached) && cached is not null)
            return cached;
        // Fall back to south idle if a high index is missing.
        return _bySpecies.GetValueOrDefault(speciesId);
    }

    /// <summary>
    /// Resolve a draw for <see cref="GroundScriptVm"/> SELECT_ANIMATION + facing.
    /// Uses AX conventions: idle anim 2 has 8-dir sprite groups; sleep anim 6 uses pose sheets ~48+.
    /// </summary>
    public (RgbaImage Image, bool FlipH)? TryGetAnimatedSprite(
        int speciesId,
        int animationId,
        int direction,
        int tickFrames,
        bool isMoving = false)
    {
        EnsureFramesLoaded(speciesId);
        if (_frameCount.GetValueOrDefault(speciesId) <= 0)
            return null;

        var dir = direction & 7;
        if (animationId == GroundScriptVm.AnimSleep)
        {
            // Charmander/Bulbasaur sleep: AX_POSE(47/48) → sprite_48/49.
            var sleepA = TryGetSpeciesSprite(speciesId, SleepSpriteIndex);
            var sleepB = TryGetSpeciesSprite(speciesId, SleepSpriteIndex + 1) ?? sleepA;
            if (sleepA is null)
                return null;
            var img = ((tickFrames / 30) & 1) == 0 ? sleepA : sleepB!;
            return (img, false);
        }

        var (baseIndex, flip) = IdleSpriteForDirection(dir);
        var cycle = isMoving || (animationId != GroundScriptVm.AnimIdle && animationId > 0 && animationId != GroundScriptVm.AnimSleep);
        var frameOffset = 0;
        if (cycle)
        {
            // Each facing has a 3-frame walk/idle group (base, base+1, base+2).
            frameOffset = (tickFrames / 8) % 3;
        }

        var sprite = TryGetSpeciesSprite(speciesId, baseIndex + frameOffset)
            ?? TryGetSpeciesSprite(speciesId, baseIndex)
            ?? TryGetSpeciesSprite(speciesId, 0);
        return sprite is null ? null : (sprite, flip);
    }

    /// <summary>Legacy helper — south idle only.</summary>
    public RgbaImage? TryGetAnimatedSprite(int speciesId, int animationId, int tickFrames, bool isMoving = false) =>
        TryGetAnimatedSprite(speciesId, animationId, GroundScriptVm.DirSouth, tickFrames, isMoving)?.Image;

    /// <summary>
    /// Idle/walk sheet layout shared by most monster AX dumps (see <c>src/data/ax/*.h</c> poses 1–24).
    /// East-ish facings reuse west-ish sheets with OAM flip.
    /// </summary>
    public static (int SpriteIndex, bool FlipH) IdleSpriteForDirection(int direction) =>
        (direction & 7) switch
        {
            0 => (0, false),  // S  — sprite_1
            1 => (3, true),   // SE — sprite_4 flipped
            2 => (6, true),   // E  — sprite_7 flipped
            3 => (9, true),   // NE — sprite_10 flipped
            4 => (12, false), // N  — sprite_13
            5 => (9, false),  // NW — sprite_10
            6 => (6, false),  // W  — sprite_7
            _ => (3, false),  // SW — sprite_4
        };

    /// <summary>AX_POSE(47) → sprite_48.png for typical sleep anim 6.</summary>
    public const int SleepSpriteIndex = 47;

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
        var maxIndex = -1;
        // Load sprite_1.png … sprite_N.png (skip compound names like sprite_16_1).
        for (var i = 1; i <= 96; i++)
        {
            var path = Path.Combine(dir, $"sprite_{i}.png");
            if (!File.Exists(path))
                continue;
            try
            {
                var image = RgbaImage.FromPng(File.ReadAllBytes(path));
                var index = i - 1; // AX sprite index
                _bySpeciesFrame[(speciesId, index)] = image;
                if (index == 0)
                    _bySpecies[speciesId] = image;
                loaded++;
                if (index > maxIndex)
                    maxIndex = index;
            }
            catch
            {
                // skip bad frame
            }
        }

        if (loaded == 0)
            _bySpecies[speciesId] = null;
        _frameCount[speciesId] = maxIndex + 1;
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
