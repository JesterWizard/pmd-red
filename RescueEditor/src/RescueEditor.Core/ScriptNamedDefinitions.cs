namespace RescueEditor.Core;

/// <summary>Semantic kind of a script argument that can use named definitions.</summary>
public enum ScriptNamedArgKind
{
    None,
    Music,
    Fanfare,
    Map,
    Emotion,
}

/// <summary>Loaded catalogs for script Format / Parse / autocomplete.</summary>
public sealed class ScriptNamedDefinitions
{
    public required NamedIdCatalog Music { get; init; }
    public required NamedIdCatalog Fanfare { get; init; }
    public required NamedIdCatalog Map { get; init; }
    public required NamedIdCatalog Emotion { get; init; }

    public bool HasAny =>
        Music.Entries.Count > 0 ||
        Fanfare.Entries.Count > 0 ||
        Map.Entries.Count > 0 ||
        Emotion.Entries.Count > 0;

    /// <summary>
    /// Loads whatever catalogs exist under <paramref name="repositoryRoot"/>.
    /// Returns null only when the root is missing or no catalog files were found.
    /// </summary>
    public static ScriptNamedDefinitions? TryLoadFromRepository(string? repositoryRoot)
    {
        if (string.IsNullOrWhiteSpace(repositoryRoot) || !Directory.Exists(repositoryRoot))
            return null;

        var musicPath = Path.Combine(repositoryRoot, "include", "constants", "bg_music.h");
        var emotionPath = Path.Combine(repositoryRoot, "include", "constants", "emotions.h");
        var mapPath = Path.Combine(repositoryRoot, "include", "constants", "ground_map.h");
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

        var defs = new ScriptNamedDefinitions
        {
            Music = music,
            Emotion = emotion,
            Map = map,
            Fanfare = fanfare,
        };
        return defs.HasAny ? defs : null;
    }

    /// <summary>
    /// Tries <paramref name="preferredRoot"/> then walks common decomp roots for constant headers.
    /// </summary>
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
        _ => null,
    };

    public ScriptNamedArgKind KindFor(byte op, int argIndex) => op switch
    {
        0x08 or 0x09 when argIndex == 0 => ScriptNamedArgKind.Map, // SELECT_MAP / SELECT_GROUND
        0x2E when argIndex == 2 => ScriptNamedArgKind.Emotion, // PORTRAIT(place, id, emotion)
        0x44 when argIndex == 0 => ScriptNamedArgKind.Music, // BGM_SWITCH
        0x45 when argIndex == 1 => ScriptNamedArgKind.Music, // BGM_FADEIN(fade, music)
        0x46 when argIndex == 0 => ScriptNamedArgKind.Music, // BGM_QUEUE
        0x49 when argIndex == 0 => ScriptNamedArgKind.Fanfare, // FANFARE_PLAY
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
