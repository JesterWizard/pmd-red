namespace RescueEditor.Core;

/// <summary>Semantic kind of a script argument that can use named definitions.</summary>
public enum ScriptNamedArgKind
{
    None,
    Music,
    Fanfare,
    Map,
    Emotion,
    UpdateName,
    ObjFlag,
    EmotionEffect,
    Direction,
    DirTrans,
    Placement,
    GroundAnim,
    ScriptId,
    PaletteUtil,
}

/// <summary>Loaded catalogs for script Format / Parse / autocomplete.</summary>
public sealed class ScriptNamedDefinitions
{
    public required NamedIdCatalog Music { get; init; }
    public required NamedIdCatalog Fanfare { get; init; }
    public required NamedIdCatalog Map { get; init; }
    public required NamedIdCatalog Emotion { get; init; }
    public required NamedIdCatalog UpdateName { get; init; }
    public required NamedIdCatalog ObjFlag { get; init; }
    public required NamedIdCatalog EmotionEffect { get; init; }
    public required NamedIdCatalog Direction { get; init; }
    public required NamedIdCatalog DirTrans { get; init; }
    public required NamedIdCatalog Placement { get; init; }
    public required NamedIdCatalog GroundAnim { get; init; }
    public required NamedIdCatalog ScriptId { get; init; }
    public required NamedIdCatalog PaletteUtil { get; init; }

    public bool HasAny =>
        Music.Entries.Count > 0 ||
        Fanfare.Entries.Count > 0 ||
        Map.Entries.Count > 0 ||
        Emotion.Entries.Count > 0 ||
        UpdateName.Entries.Count > 0 ||
        ObjFlag.Entries.Count > 0 ||
        EmotionEffect.Entries.Count > 0 ||
        Direction.Entries.Count > 0 ||
        DirTrans.Entries.Count > 0 ||
        Placement.Entries.Count > 0 ||
        GroundAnim.Entries.Count > 0 ||
        ScriptId.Entries.Count > 0 ||
        PaletteUtil.Entries.Count > 0;

    public static ScriptNamedDefinitions? TryLoadFromRepository(string? repositoryRoot)
    {
        if (string.IsNullOrWhiteSpace(repositoryRoot) || !Directory.Exists(repositoryRoot))
            return null;

        var constants = Path.Combine(repositoryRoot, "include", "constants");
        var musicPath = Path.Combine(constants, "bg_music.h");
        var emotionPath = Path.Combine(constants, "emotions.h");
        var mapPath = Path.Combine(constants, "ground_map.h");
        var paramsPath = Path.Combine(constants, "ground_script_params.h");
        var directionPath = Path.Combine(constants, "direction.h");
        var scriptIdPath = Path.Combine(constants, "script_id.h");
        var palettePath = Path.Combine(constants, "palette_util.h");
        var placementPath = Path.Combine(repositoryRoot, "include", "portrait_placement.h");
        var sfxPath = Path.Combine(repositoryRoot, "src", "sound_names.c");

        var music = File.Exists(musicPath)
            ? NamedIdCatalogs.ParseMusicEnum(File.ReadAllText(musicPath))
            : new NamedIdCatalog([]);
        var emotion = File.Exists(emotionPath)
            ? NamedIdCatalogs.ParseEmotionDefines(File.ReadAllText(emotionPath))
            : new NamedIdCatalog([]);
        var map = File.Exists(mapPath)
            ? NamedIdCatalogs.ParseGroundMapEnum(File.ReadAllText(mapPath))
            : new NamedIdCatalog([]);
        var fanfare = File.Exists(sfxPath)
            ? NamedIdCatalogs.ParseSfxNames(File.ReadAllText(sfxPath))
            : new NamedIdCatalog([]);

        NamedIdCatalog updateName = new([]);
        NamedIdCatalog objFlag = new([]);
        NamedIdCatalog emotionEffect = new([]);
        NamedIdCatalog groundAnim = new([]);
        if (File.Exists(paramsPath))
            (updateName, objFlag, emotionEffect, groundAnim) =
                NamedIdCatalogs.ParseGroundScriptParams(File.ReadAllText(paramsPath));

        var direction = File.Exists(directionPath)
            ? NamedIdCatalogs.ParseDirectionEnum(File.ReadAllText(directionPath))
            : new NamedIdCatalog([]);
        var dirTrans = File.Exists(directionPath)
            ? NamedIdCatalogs.ParseDirTransEnum(File.ReadAllText(directionPath))
            : new NamedIdCatalog([]);
        var placement = File.Exists(placementPath)
            ? NamedIdCatalogs.ParsePortraitPlacement(File.ReadAllText(placementPath))
            : new NamedIdCatalog([]);
        var scriptId = File.Exists(scriptIdPath)
            ? NamedIdCatalogs.ParseScriptIdEnum(File.ReadAllText(scriptIdPath))
            : new NamedIdCatalog([]);
        var paletteUtil = File.Exists(palettePath)
            ? NamedIdCatalogs.ParsePaletteUtilEnum(File.ReadAllText(palettePath))
            : new NamedIdCatalog([]);

        var defs = new ScriptNamedDefinitions
        {
            Music = music,
            Emotion = emotion,
            Map = map,
            Fanfare = fanfare,
            UpdateName = updateName,
            ObjFlag = objFlag,
            EmotionEffect = emotionEffect,
            Direction = direction,
            DirTrans = dirTrans,
            Placement = placement,
            GroundAnim = groundAnim,
            ScriptId = scriptId,
            PaletteUtil = paletteUtil,
        };
        return defs.HasAny ? defs : null;
    }

    public static ScriptNamedDefinitions? TryLoadBestEffort(string? preferredRoot = null)
    {
        foreach (var root in CandidateRepositoryRoots(preferredRoot))
        {
            var defs = TryLoadFromRepository(root);
            if (defs is not null)
                return defs;
        }

        return null;
    }

    public static IEnumerable<string> CandidateRepositoryRoots(string? preferredRoot = null)
    {
        var seen = new HashSet<string>(StringComparer.OrdinalIgnoreCase);
        foreach (var start in SeedRoots(preferredRoot))
        {
            var dir = new DirectoryInfo(start);
            while (dir is not null)
            {
                if (seen.Add(dir.FullName))
                    yield return dir.FullName;
                dir = dir.Parent;
            }
        }
    }

    private static IEnumerable<string> SeedRoots(string? preferredRoot)
    {
        if (!string.IsNullOrWhiteSpace(preferredRoot))
            yield return preferredRoot;
        yield return AppContext.BaseDirectory;
        yield return Directory.GetCurrentDirectory();
        yield return "/home/username/Github/pmd-red";
        var profile = Environment.GetFolderPath(Environment.SpecialFolder.UserProfile);
        if (!string.IsNullOrWhiteSpace(profile))
        {
            yield return Path.Combine(profile, "Github", "pmd-red");
            yield return Path.Combine(profile, "Github", "pmd-red-win");
        }
    }

    public NamedIdCatalog? CatalogFor(ScriptNamedArgKind kind) => kind switch
    {
        ScriptNamedArgKind.Music => Music,
        ScriptNamedArgKind.Fanfare => Fanfare,
        ScriptNamedArgKind.Map => Map,
        ScriptNamedArgKind.Emotion => Emotion,
        ScriptNamedArgKind.UpdateName => UpdateName,
        ScriptNamedArgKind.ObjFlag => ObjFlag,
        ScriptNamedArgKind.EmotionEffect => EmotionEffect,
        ScriptNamedArgKind.Direction => Direction,
        ScriptNamedArgKind.DirTrans => DirTrans,
        ScriptNamedArgKind.Placement => Placement,
        ScriptNamedArgKind.GroundAnim => GroundAnim,
        ScriptNamedArgKind.ScriptId => ScriptId,
        ScriptNamedArgKind.PaletteUtil => PaletteUtil,
        _ => null,
    };

    public ScriptNamedArgKind KindFor(byte op, int argIndex) => op switch
    {
        0x08 or 0x09 when argIndex == 0 => ScriptNamedArgKind.Map,
        0x27 or 0x28 when argIndex == 1 => ScriptNamedArgKind.PaletteUtil, // FLASH_* kind
        0x2D when argIndex == 0 => ScriptNamedArgKind.UpdateName,
        0x2E when argIndex == 0 => ScriptNamedArgKind.Placement, // PORTRAIT place
        0x2E when argIndex == 2 => ScriptNamedArgKind.Emotion,
        0x44 when argIndex == 0 => ScriptNamedArgKind.Music,
        0x45 when argIndex == 1 => ScriptNamedArgKind.Music,
        0x46 when argIndex == 0 => ScriptNamedArgKind.Music,
        0x49 or 0x4C when argIndex == 0 => ScriptNamedArgKind.Fanfare,
        0x4E when argIndex == 1 => ScriptNamedArgKind.Fanfare, // FANFARE_FADEOUT2(f, i)
        0x52 or 0x53 when argIndex == 0 => ScriptNamedArgKind.ObjFlag,
        0x54 when argIndex == 0 => ScriptNamedArgKind.GroundAnim,
        0x56 when argIndex == 0 => ScriptNamedArgKind.EmotionEffect,
        0x89 when argIndex == 2 => ScriptNamedArgKind.Direction,
        0x8B when argIndex == 1 => ScriptNamedArgKind.Direction,
        0x91 when argIndex == 1 => ScriptNamedArgKind.DirTrans,
        0x91 when argIndex == 2 => ScriptNamedArgKind.Direction,
        0x92 when argIndex == 1 => ScriptNamedArgKind.DirTrans,
        0x93 or 0x94 or 0x95 when argIndex == 1 => ScriptNamedArgKind.DirTrans,
        0xE8 or 0xE9 when argIndex == 0 => ScriptNamedArgKind.ScriptId, // CALL/JUMP_SCRIPT
        _ => ScriptNamedArgKind.None,
    };

    public NamedIdCatalog? CatalogFor(byte op, int argIndex) =>
        CatalogFor(KindFor(op, argIndex));

    public IReadOnlyList<NamedIdEntry> Suggest(byte op, int argIndex, string prefix, int limit = 20)
    {
        var catalog = CatalogFor(op, argIndex);
        return catalog?.Search(prefix, limit) ?? Array.Empty<NamedIdEntry>();
    }
}
