using System.Buffers.Binary;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public static class SoundIndexer
{
    private static readonly Regex NumericDirective = new(
        @"^\s*\.(?<kind>byte|hword|word)\s+(?<values>[^@]+)",
        RegexOptions.Compiled);

    private static readonly Regex NumericToken = new(
        @"^(?:0x(?<hex>[0-9A-Fa-f]+)|(?<decimal>\d+))$",
        RegexOptions.Compiled);

    public static IEnumerable<AssetDescriptor> Index(string? repositoryRoot, RomImage rom)
    {
        if (string.IsNullOrWhiteSpace(repositoryRoot))
            yield break;
        var waveDirectory = Path.Combine(repositoryRoot, "sound", "wave");
        if (Directory.Exists(waveDirectory))
        {
            foreach (var path in Directory.EnumerateFiles(waveDirectory, "wave_*.s").OrderBy(path => path))
            {
                var bytes = ParseWaveBytes(path);
                var offset = FindWaveInRom(rom, bytes);
                var name = Path.GetFileNameWithoutExtension(path);
                var sampleRate = bytes.Length >= 8
                    ? Math.Max(1, (int)(BinaryPrimitives.ReadUInt32LittleEndian(bytes.AsSpan(4)) >> 10))
                    : 0;
                yield return new AssetDescriptor
                {
                    Id = $"sound-wave:{name}",
                    Name = name,
                    Category = AssetCategory.Sound,
                    Kind = AssetKind.SoundWave,
                    Offset = offset,
                    Size = offset >= 0 ? bytes.Length : 0,
                    Format = offset >= 0 ? "GBA DirectSound / PCM8" : "source wave",
                    SourcePath = path,
                    Description = offset >= 0
                        ? $"{sampleRate} Hz, {Math.Max(0, bytes.Length - 16)} samples"
                        : "Wave source is not present as a contiguous range in this ROM",
                    Metadata = new Dictionary<string, string>
                    {
                        ["sampleRate"] = sampleRate.ToString(),
                        ["sourceBytes"] = bytes.Length.ToString(),
                    },
                };
            }
        }

        var songDirectory = Path.Combine(repositoryRoot, "sound", "songs");
        if (!Directory.Exists(songDirectory))
            yield break;
        foreach (var path in Directory.EnumerateFiles(songDirectory, "seq_*.s").OrderBy(path => path))
        {
            var name = Path.GetFileNameWithoutExtension(path);
            yield return new AssetDescriptor
            {
                Id = $"sound-song:{name}",
                Name = name,
                Category = AssetCategory.Sound,
                Kind = AssetKind.SoundSong,
                Format = "M4A song source",
                SourcePath = path,
                Description = "Song module source; ROM-side sequence extraction is not available for this entry.",
            };
        }
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

    private static int FindWaveInRom(RomImage rom, byte[] bytes)
    {
        if (bytes.Length < 16)
            return -1;
        var prefixLength = Math.Min(32, bytes.Length);
        var found = rom.Find(bytes.AsSpan(0, prefixLength));
        return found;
    }

    private static void AddLittleEndian(List<byte> output, uint value, int size)
    {
        for (var index = 0; index < size; index++)
            output.Add((byte)(value >> (index * 8)));
    }
}

public static class SoundWaveCodec
{
    public static string Describe(RomImage rom, AssetDescriptor asset)
    {
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
        if (!asset.HasRomRange || asset.Size < 16)
            throw new InvalidDataException("This sound entry has no ROM sample range.");
        var source = rom.Copy(asset.Offset, asset.Size);
        var sampleRate = Math.Max(1, (int)(BinaryPrimitives.ReadUInt32LittleEndian(source.AsSpan(4)) >> 10));
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
}
