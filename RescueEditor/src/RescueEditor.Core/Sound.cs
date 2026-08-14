using System.Buffers.Binary;
using System.Globalization;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public static class SoundIndexer
{
    // Matches include/music.h — BGM/fanfare below this index, SE at and above.
    public const int SoundEffectsStartIndex = 300;
    public const int FanfareStartIndex = 200;

    private static readonly Regex NumericDirective = new(
        @"^\s*\.(?<kind>byte|hword|word)\s+(?<values>[^@]+)",
        RegexOptions.Compiled);

    private static readonly Regex NumericToken = new(
        @"^(?:0x(?<hex>[0-9A-Fa-f]+)|(?<decimal>\d+))$",
        RegexOptions.Compiled);

    private static readonly Regex SongTableEntry = new(
        @"^\s*song\s+(?<name>seq_(?<id>\d+)|empty_song)\s*,\s*(?<player>\d+)\s*,\s*(?<player2>\d+)",
        RegexOptions.Compiled);

    private static readonly Regex SfxNameEntry = new(
        @"^\s*\{\s*(?:NULL|""(?<name>[^""]+)"")\s*,",
        RegexOptions.Compiled);

    public static IEnumerable<AssetDescriptor> Index(string? repositoryRoot, RomImage rom)
    {
        if (string.IsNullOrWhiteSpace(repositoryRoot))
            yield break;

        var musicNames = LoadMusicNames(repositoryRoot);
        var sfxNames = LoadSfxNames(repositoryRoot);
        var songPlayers = LoadSongPlayers(repositoryRoot);

        foreach (var asset in IndexSongs(repositoryRoot, rom, musicNames, sfxNames, songPlayers))
            yield return asset;

        foreach (var asset in IndexWaves(repositoryRoot, rom))
            yield return asset;
    }

    private static IEnumerable<AssetDescriptor> IndexSongs(
        string repositoryRoot,
        RomImage rom,
        IReadOnlyDictionary<int, string> musicNames,
        IReadOnlyList<string?> sfxNames,
        IReadOnlyDictionary<int, int> songPlayers)
    {
        var songDirectory = Path.Combine(repositoryRoot, "sound", "songs");
        if (!Directory.Exists(songDirectory))
            yield break;

        foreach (var path in Directory.EnumerateFiles(songDirectory, "seq_*.s").OrderBy(path => path))
        {
            var fileName = Path.GetFileNameWithoutExtension(path);
            if (!TryParseSeqId(fileName, out var songId))
                continue;

            var isSoundEffect = songId >= SoundEffectsStartIndex;
            var category = isSoundEffect ? AssetCategory.SoundEffects : AssetCategory.Music;
            var player = songPlayers.GetValueOrDefault(songId, isSoundEffect ? 2 : 0);
            var role = DescribePlayer(player, songId);
            var internalName = songId >= 0 && songId < sfxNames.Count ? sfxNames[songId] : null;
            var musName = musicNames.GetValueOrDefault(songId);
            var displayName = ResolveSongDisplayName(fileName, musName, internalName);
            var hasHeader = SoundSequenceParser.TryGetSongHeaderOffset(rom, songId, out var headerOffset);

            yield return new AssetDescriptor
            {
                Id = $"sound-song:{fileName}",
                Name = displayName,
                Category = category,
                Kind = AssetKind.SoundSong,
                Offset = hasHeader ? headerOffset : -1,
                Size = hasHeader ? 8 : 0,
                Format = isSoundEffect ? "M4A sound effect" : "M4A song",
                SourcePath = path,
                Description = BuildSongDescription(fileName, role, player, musName, internalName),
                Metadata = new Dictionary<string, string>
                {
                    ["songId"] = songId.ToString(CultureInfo.InvariantCulture),
                    ["player"] = player.ToString(CultureInfo.InvariantCulture),
                    ["role"] = role,
                    ["seq"] = fileName,
                    ["internalName"] = internalName ?? string.Empty,
                    ["musName"] = musName ?? string.Empty,
                },
            };
        }
    }

    private static string ResolveSongDisplayName(string fileName, string? musName, string? internalName)
    {
        if (!string.IsNullOrWhiteSpace(musName))
            return PrettyIdentifier(musName, stripPrefix: "MUS_");
        if (!string.IsNullOrWhiteSpace(internalName))
            return PrettyIdentifier(internalName);
        return fileName;
    }

    private static string BuildSongDescription(
        string fileName,
        string role,
        int player,
        string? musName,
        string? internalName)
    {
        var parts = new List<string> { fileName, role + "; player " + player };
        if (!string.IsNullOrWhiteSpace(internalName))
            parts.Insert(1, internalName);
        if (!string.IsNullOrWhiteSpace(musName) &&
            !string.Equals(musName, internalName, StringComparison.Ordinal))
            parts.Insert(1, musName);
        return string.Join(" · ", parts);
    }

    private static IEnumerable<AssetDescriptor> IndexWaves(string repositoryRoot, RomImage rom)
    {
        var waveDirectory = Path.Combine(repositoryRoot, "sound", "wave");
        if (!Directory.Exists(waveDirectory))
            yield break;

        foreach (var path in Directory.EnumerateFiles(waveDirectory, "*.s")
                     .Where(path =>
                     {
                         var name = Path.GetFileName(path);
                         return name.StartsWith("wave_", StringComparison.Ordinal) ||
                                name.StartsWith("gbwave_", StringComparison.Ordinal);
                     })
                     .OrderBy(path => path))
        {
            // Defer ParseWaveBytes + ROM search until preview/export — that path was ~3.5s of load.
            var name = Path.GetFileNameWithoutExtension(path);
            var isGbWave = name.StartsWith("gbwave_", StringComparison.Ordinal);

            yield return new AssetDescriptor
            {
                Id = $"sound-wave:{name}",
                Name = name,
                Category = AssetCategory.SoundEffects,
                Kind = AssetKind.SoundWave,
                Offset = -1,
                Size = 0,
                Format = isGbWave ? "GB wave pattern" : "GBA DirectSound / PCM8",
                SourcePath = path,
                Description = isGbWave
                    ? "GB wave table (ROM range resolved on demand)"
                    : "DirectSound wave (ROM range resolved on demand)",
                Metadata = new Dictionary<string, string>
                {
                    ["sampleRate"] = "0",
                    ["sourceBytes"] = "0",
                    ["waveKind"] = isGbWave ? "gb" : "directsound",
                },
            };
        }
    }

    private static IReadOnlyDictionary<int, string> LoadMusicNames(string repositoryRoot)
    {
        var path = Path.Combine(repositoryRoot, "include", "constants", "bg_music.h");
        if (!File.Exists(path))
            return new Dictionary<int, string>();

        return NamedIdCatalogs.ParseMusicEnum(File.ReadAllText(path)).Entries
            .ToDictionary(entry => entry.Id, entry => entry.Name);
    }

    private static IReadOnlyList<string?> LoadSfxNames(string repositoryRoot)
    {
        var path = Path.Combine(repositoryRoot, "src", "sound_names.c");
        if (!File.Exists(path))
            return Array.Empty<string?>();

        var names = new List<string?>();
        var inArray = false;
        foreach (var rawLine in File.ReadLines(path))
        {
            if (!inArray)
            {
                if (rawLine.Contains("gSfxNames[]", StringComparison.Ordinal))
                    inArray = true;
                continue;
            }

            var match = SfxNameEntry.Match(rawLine);
            if (match.Success)
                names.Add(match.Groups["name"].Success ? match.Groups["name"].Value : null);
            if (rawLine.Contains("};", StringComparison.Ordinal) && names.Count > 0)
                break;
        }

        return names;
    }

    private static IReadOnlyDictionary<int, int> LoadSongPlayers(string repositoryRoot)
    {
        var path = Path.Combine(repositoryRoot, "sound", "song_table.inc");
        if (!File.Exists(path))
            return new Dictionary<int, int>();

        var players = new Dictionary<int, int>();
        foreach (var rawLine in File.ReadLines(path))
        {
            var match = SongTableEntry.Match(rawLine);
            if (!match.Success || !match.Groups["id"].Success)
                continue;

            var songId = int.Parse(match.Groups["id"].Value, CultureInfo.InvariantCulture);
            var player = int.Parse(match.Groups["player"].Value, CultureInfo.InvariantCulture);
            players[songId] = player;
        }

        return players;
    }

    public static int MaxTracksForPlayer(int player) => player switch
    {
        0 => 12,
        1 => 6,
        2 or 3 or 7 => 1,
        4 or 5 or 6 => 2,
        _ => 16,
    };

    private static string DescribePlayer(int player, int songId) => player switch
    {
        0 => "BGM",
        1 => "Fanfare",
        _ when songId >= SoundEffectsStartIndex => "Sound effect",
        _ => $"Player {player}",
    };

    private static string PrettyIdentifier(string identifier, string? stripPrefix = null)
    {
        var stem = stripPrefix is not null &&
                   identifier.StartsWith(stripPrefix, StringComparison.Ordinal)
            ? identifier[stripPrefix.Length..]
            : identifier;
        var parts = stem.Split('_', StringSplitOptions.RemoveEmptyEntries);
        for (var i = 0; i < parts.Length; i++)
        {
            var part = parts[i].ToLowerInvariant();
            parts[i] = part.Length == 0
                ? part
                : char.ToUpperInvariant(part[0]) + part[1..];
        }
        return string.Join(' ', parts);
    }

    private static bool TryParseSeqId(string fileName, out int songId)
    {
        songId = 0;
        if (!fileName.StartsWith("seq_", StringComparison.Ordinal))
            return false;
        return int.TryParse(fileName.AsSpan(4), NumberStyles.Integer, CultureInfo.InvariantCulture,
            out songId);
    }

    private static byte[] ParseWaveBytes(string path)
    {
        var output = new List<byte>();
        foreach (var rawLine in File.ReadLines(path))
        {
            var line = rawLine.Split('@', 2)[0];
            var match = NumericDirective.Match(line);
            if (!match.Success)
                continue;
            var kind = match.Groups["kind"].Value;
            foreach (var token in match.Groups["values"].Value.Split(',', StringSplitOptions.RemoveEmptyEntries))
            {
                var value = token.Trim();
                var numeric = NumericToken.Match(value);
                if (!numeric.Success)
                    continue;
                var parsed = numeric.Groups["hex"].Success
                    ? Convert.ToUInt32(numeric.Groups["hex"].Value, 16)
                    : Convert.ToUInt32(numeric.Groups["decimal"].Value);
                switch (kind)
                {
                    case "byte":
                        output.Add((byte)parsed);
                        break;
                    case "hword":
                        AddLittleEndian(output, parsed, 2);
                        break;
                    case "word":
                        AddLittleEndian(output, parsed, 4);
                        break;
                }
            }
        }
        return output.ToArray();
    }

    internal static byte[] ParseWaveBytesPublic(string path) => ParseWaveBytes(path);

    private static int FindWaveInRom(RomImage rom, byte[] bytes)
    {
        if (bytes.Length < 16)
            return -1;
        var prefixLength = Math.Min(32, bytes.Length);
        return rom.Find(bytes.AsSpan(0, prefixLength));
    }

    internal static int FindWaveInRomPublic(RomImage rom, byte[] bytes) => FindWaveInRom(rom, bytes);

    private static void AddLittleEndian(List<byte> output, uint value, int size)
    {
        for (var index = 0; index < size; index++)
            output.Add((byte)(value >> (index * 8)));
    }
}

public static class SoundWaveCodec
{
    private static readonly System.Collections.Concurrent.ConcurrentDictionary<string, (int Offset, int Size, int SampleRate)> ResolveCache =
        new(StringComparer.Ordinal);

    /// <summary>
    /// Resolve a catalog wave (often unresolved at index time) to a descriptor with ROM range.
    /// </summary>
    public static AssetDescriptor Resolve(RomImage rom, AssetDescriptor asset)
    {
        if (asset.Kind != AssetKind.SoundWave)
            return asset;
        if (asset.HasRomRange)
            return asset;
        if (string.IsNullOrWhiteSpace(asset.SourcePath) || !File.Exists(asset.SourcePath))
            return asset;

        var (offset, size, sampleRate) = ResolveCache.GetOrAdd(
            rom.Path + "\0" + asset.SourcePath,
            _ =>
            {
                var bytes = SoundIndexer.ParseWaveBytesPublic(asset.SourcePath);
                var found = SoundIndexer.FindWaveInRomPublic(rom, bytes);
                var rate = bytes.Length >= 8
                    ? Math.Max(1, (int)(BinaryPrimitives.ReadUInt32LittleEndian(bytes.AsSpan(4)) >> 10))
                    : 0;
                return (found, found >= 0 ? bytes.Length : 0, rate);
            });

        if (offset < 0 || size <= 0)
            return asset;

        var meta = new Dictionary<string, string>(asset.Metadata)
        {
            ["sampleRate"] = sampleRate.ToString(CultureInfo.InvariantCulture),
            ["sourceBytes"] = size.ToString(CultureInfo.InvariantCulture),
        };

        return new AssetDescriptor
        {
            Id = asset.Id,
            Name = asset.Name,
            Category = asset.Category,
            Kind = asset.Kind,
            Offset = offset,
            Size = size,
            Format = asset.Format,
            SourcePath = asset.SourcePath,
            Description = sampleRate > 0
                ? $"{sampleRate} Hz, {Math.Max(0, size - 16)} samples"
                : asset.Description,
            Metadata = meta,
        };
    }

    public static string Describe(RomImage rom, AssetDescriptor asset)
    {
        asset = Resolve(rom, asset);
        if (!asset.HasRomRange || asset.Size < 16)
            return $"{asset.Name}\n\n{asset.Description}\n\nSource: {asset.SourcePath}";

        var frequency = rom.ReadUInt32(asset.Offset + 4);
        var loopStart = rom.ReadUInt32(asset.Offset + 8);
        var loopEnd = rom.ReadUInt32(asset.Offset + 12);
        var sampleRate = Math.Max(1, (int)(frequency >> 10));
        return $"{asset.Name}\n\n" +
            $"Format: GBA DirectSound PCM8\n" +
            $"Sample rate: {sampleRate:N0} Hz\n" +
            $"Loop: {loopStart:N0}–{loopEnd:N0}\n" +
            $"Payload: {Math.Max(0, asset.Size - 16):N0} bytes\n" +
            $"ROM offset: 0x{asset.Offset:X}";
    }

    public static byte[] ToWave(RomImage rom, AssetDescriptor asset)
    {
        asset = Resolve(rom, asset);
        if (!asset.HasRomRange || asset.Size < 16)
            throw new InvalidDataException("This sound entry has no ROM sample range.");
        var source = rom.Copy(asset.Offset, asset.Size);
        return ToWave(source);
    }

    public static byte[] ToWave(ReadOnlySpan<byte> source)
    {
        if (source.Length < 16)
            throw new InvalidDataException("This sound entry has no ROM sample range.");
        var sampleRate = Math.Max(1, (int)(BinaryPrimitives.ReadUInt32LittleEndian(source[4..]) >> 10));
        if (sampleRate > 192_000)
            sampleRate = 44_100;
        var pcm = new byte[source.Length - 16];
        for (var i = 0; i < pcm.Length; i++)
            pcm[i] = unchecked((byte)(source[16 + i] + 128));

        using var output = new MemoryStream();
        using var writer = new BinaryWriter(output);
        writer.Write("RIFF"u8.ToArray());
        writer.Write(36 + pcm.Length);
        writer.Write("WAVE"u8.ToArray());
        writer.Write("fmt "u8.ToArray());
        writer.Write(16);
        writer.Write((short)1);
        writer.Write((short)1);
        writer.Write(sampleRate);
        writer.Write(sampleRate);
        writer.Write((short)1);
        writer.Write((short)8);
        writer.Write("data"u8.ToArray());
        writer.Write(pcm.Length);
        writer.Write(pcm);
        return output.ToArray();
    }

    internal static void RememberResolved(string romPath, string sourcePath, int offset, int size, int sampleRate)
    {
        ResolveCache[romPath + "\0" + sourcePath] = (offset, size, sampleRate);
    }
}
