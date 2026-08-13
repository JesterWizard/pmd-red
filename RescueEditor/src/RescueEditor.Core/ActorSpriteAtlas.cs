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
    private readonly Dictionary<(int Species, int Pose), RgbaImage?> _assembledPoses = new();
    private readonly Dictionary<(int Species, int PoseId), RgbaImage?> _assembledPoseIds = new();
    private readonly Dictionary<(int Species, int AxAnim, int Dir), AxAnimSequence?> _animSequences = new();
    private readonly Dictionary<int, bool?> _multiPiece = new();
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

    public void ApplyAppearance(PlayAppearance appearance, RomImage? rom = null)
    {
        foreach (byte typeId in new byte[] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 33, 34, 35 })
        {
            // Never remapping fixed ROM species — only dynamic (species 0) hero/partner kinds.
            if (rom is not null && _profile is not null)
            {
                var fromRom = GroundLivesTypes.ResolveSpecies(rom, _profile, typeId);
                if (fromRom > 0)
                    continue;
            }

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
        var fromRom = GroundLivesTypes.ResolveSpecies(rom, _profile, typeId);
        if (fromRom > 0)
            species = fromRom;
        else if (_liveTypeSpeciesOverrides.TryGetValue(typeId, out var over))
            species = over;
        else
            species = GroundLivesTypes.ResolvePreviewSpecies(rom, _profile, typeId);

        var sprite = species > 0 ? TryGetSpeciesSprite(species) : null;
        _byLiveType[typeId] = sprite;
        return sprite;
    }

    public RgbaImage? TryGetSpeciesSprite(int speciesId)
    {
        if (speciesId <= 0)
            return null;

        // Boss / padded-OAM idle: prefer assembled frame over sheet scraps
        // (Ho-Oh sprite_1.png is 56×8; Articuno sheet is 8×8). Never return a
        // scrap when multi-piece assembly fails — that draws clipped bosses.
        if (IsMultiPiece(speciesId))
            return TryGetAssembledPose(speciesId, poseNumber: 1);

        return TryGetSpeciesSprite(speciesId, frameIndex: 0);
    }

    /// <summary>
    /// South idle for list icons. Loads only <c>sprite_1.png</c> — never the full AX sheet.
    /// </summary>
    public RgbaImage? TryGetStandingThumbnail(int speciesId)
    {
        if (speciesId <= 0)
            return null;
        if (_bySpecies.TryGetValue(speciesId, out var cached))
            return cached;

        var folder = ResolveFolder(speciesId);
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
            if (image is not null)
                GbaChroma.KeyOut(image);
            _bySpecies[speciesId] = image;
            _bySpeciesFrame[(speciesId, 0)] = image;
            return image;
        }
        catch
        {
            _bySpecies[speciesId] = null;
            return null;
        }
    }

    public int CachedSheetFrameCount(int speciesId) =>
        _bySpeciesFrame.Count(kv => kv.Key.Species == speciesId);

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

    /// <summary>Drawn AX/sheet frame plus retail anim offsets (<c>DoAxFrame</c>).</summary>
    public readonly record struct AnimatedSprite(
        RgbaImage Image, bool FlipH, short OffsetX = 0, short OffsetY = 0);

    /// <summary>
    /// Resolve a draw for <see cref="GroundScriptVm"/> SELECT_ANIMATION + facing.
    /// Uses AX conventions: idle anim 2 has 8-dir sprite groups; sleep anim 6 uses pose sheets ~48+.
    /// </summary>
    public AnimatedSprite? TryGetAnimatedSprite(
        int speciesId,
        int animationId,
        int direction,
        int tickFrames,
        bool isMoving = false)
    {
        EnsureFramesLoaded(speciesId);
        var multi = IsMultiPiece(speciesId);
        // Multi-piece bosses need AX headers + tiles; sheet PNGs are OAM scraps.
        if (!multi && _frameCount.GetValueOrDefault(speciesId) <= 0)
            return null;
        if (multi && _frameCount.GetValueOrDefault(speciesId) <= 0 &&
            ResolveFolder(speciesId) is null)
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
            return new AnimatedSprite(img, false);
        }

        var cycle = isMoving || (animationId != GroundScriptVm.AnimIdle && animationId > 0 && animationId != GroundScriptVm.AnimSleep);

        // All species: play mapped AX anim sequences (idle bob, JUMP_SURPRISE, boss wings…).
        // Avoids sheet scraps (Charmander north sprite_13 is 16×32) and wrong facing groups.
        if (animationId != GroundScriptVm.AnimSleep && animationId > 0)
        {
            var axFrame = TryGetAxAnimFrame(speciesId, animationId, dir, tickFrames);
            if (axFrame is not null)
                return axFrame;
        }

        // Prefer AX pose assembly: correct OAM size/tile pads (bosses) and avoids
        // sheet-index scraps (e.g. Charmander north sprite_13 is 16×32, not idle).
        if (!cycle || multi)
        {
            var pose = AxPoseAssembler.IdlePoseForDirection(dir);
            var assembled = TryGetAssembledPose(speciesId, pose);
            if (assembled is not null)
                return new AnimatedSprite(assembled, false);
            // Bosses: never substitute a clipped sheet scrap for a failed assemble.
            if (multi)
                return null;
        }

        var (baseIndex, flip) = IdleSpriteForDirection(dir);
        var frameOffset = 0;
        if (cycle && FramesHaveUniformSize(speciesId, baseIndex))
        {
            // Each facing has a 3-frame walk/idle group (base, base+1, base+2).
            frameOffset = (tickFrames / 8) % 3;
        }

        var sprite = TryGetSpeciesSprite(speciesId, baseIndex + frameOffset)
            ?? TryGetSpeciesSprite(speciesId, baseIndex)
            ?? TryGetSpeciesSprite(speciesId, 0);
        return sprite is null ? null : new AnimatedSprite(sprite, flip);
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

    private bool IsMultiPiece(int speciesId)
    {
        if (_multiPiece.TryGetValue(speciesId, out var cached) && cached is not null)
            return cached.Value;

        var folder = ResolveFolder(speciesId);
        var multi = folder is not null && AxPoseAssembler.IsMultiPieceMonster(_repositoryRoot, folder);
        _multiPiece[speciesId] = multi;
        return multi;
    }

    private RgbaImage? TryGetAssembledPose(int speciesId, int poseNumber)
    {
        if (_assembledPoses.TryGetValue((speciesId, poseNumber), out var cached))
            return cached;

        var folder = ResolveFolder(speciesId);
        RgbaImage? image = null;
        if (folder is not null)
            image = AxPoseAssembler.TryAssemble(_repositoryRoot, folder, poseNumber);
        _assembledPoses[(speciesId, poseNumber)] = image;
        return image;
    }

    private AnimatedSprite? TryGetAxAnimFrame(int speciesId, int scriptAnimId, int direction, int tickFrames)
    {
        var folder = ResolveFolder(speciesId);
        if (folder is null)
            return null;

        var axAnim = GroundAnimMapping.ToAxAnimIndex(scriptAnimId);
        var dir = direction & 7;
        if (!_animSequences.TryGetValue((speciesId, axAnim, dir), out var seq))
        {
            seq = AxAnimSequence.TryLoad(_repositoryRoot, folder, axAnim, dir);
            _animSequences[(speciesId, axAnim, dir)] = seq;
        }

        if (seq is null || seq.Frames.Count == 0)
            return null;

        var tick = GroundAnimMapping.EffectiveTick(scriptAnimId, tickFrames, seq.TotalDurationFrames);
        var frame = seq.FrameAtTick(tick);
        if (_assembledPoseIds.TryGetValue((speciesId, frame.PoseId), out var cached))
        {
            if (cached is null)
                return null;
            return new AnimatedSprite(cached, false, frame.OffsetX, frame.OffsetY);
        }

        var image = AxPoseAssembler.TryAssemblePoseId(_repositoryRoot, folder, frame.PoseId);
        _assembledPoseIds[(speciesId, frame.PoseId)] = image;
        return image is null ? null : new AnimatedSprite(image, false, frame.OffsetX, frame.OffsetY);
    }

    private string? ResolveFolder(int speciesId)
    {
        if (_folders.TryGetValue(speciesId, out var mapped))
            return mapped;
        return MonsterSpriteFolders.ForSpecies(speciesId, _folders);
    }

    private bool FramesHaveUniformSize(int speciesId, int baseIndex)
    {
        RgbaImage? first = null;
        for (var i = 0; i < 3; i++)
        {
            var frame = TryGetSpeciesSprite(speciesId, baseIndex + i);
            if (frame is null)
                continue;
            if (first is null)
            {
                first = frame;
                continue;
            }

            if (frame.Width != first.Width || frame.Height != first.Height)
                return false;
        }

        return true;
    }

    private void EnsureFramesLoaded(int speciesId)
    {
        if (_frameCount.ContainsKey(speciesId))
            return;

        var folder = ResolveFolder(speciesId);
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
                if (image is not null)
                    GbaChroma.KeyOut(image);
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
