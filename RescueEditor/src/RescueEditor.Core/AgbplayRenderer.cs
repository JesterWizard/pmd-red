using System.Diagnostics;
using System.Globalization;
using System.Security.Cryptography;
using System.Text;

namespace RescueEditor.Core;

/// <summary>
/// Renders authentic mp2k/m4a audio via the bundled <c>agbplay-cli</c> tool.
/// </summary>
public static class AgbplayRenderer
{
    public sealed record RenderResult(byte[] WavBytes, string SourcePath, string Engine);

    public static bool IsAvailable() =>
        CreateStreamLauncher() is not null || FindLauncher() is not null;

    public static bool IsStreamAvailable() => CreateStreamLauncher() is not null;

    public static bool TryGetCachedWav(string romPath, int songId, int maxLoops, out byte[] wav, out string path)
    {
        path = GetCachePath(romPath, songId, maxLoops);
        if (File.Exists(path) && new FileInfo(path).Length > 44)
        {
            wav = File.ReadAllBytes(path);
            return true;
        }

        wav = Array.Empty<byte>();
        return false;
    }

    public static void SaveCachedWav(string romPath, int songId, int maxLoops, byte[] wav)
    {
        var path = GetCachePath(romPath, songId, maxLoops);
        Directory.CreateDirectory(Path.GetDirectoryName(path)!);
        var temp = path + ".tmp";
        File.WriteAllBytes(temp, wav);
        File.Move(temp, path, overwrite: true);
    }

    public static AgbplayLauncher? CreateStreamLauncher()
    {
        var dir = FindToolDirectory();
        if (dir is null)
            return null;

        var stream = Path.Combine(dir, "agbplay-stream");
        var streamExe = Path.Combine(dir, "agbplay-stream.exe");
        var streamSh = Path.Combine(dir, "agbplay-stream.sh");

        if (OperatingSystem.IsWindows())
        {
            if (File.Exists(streamExe))
                return new AgbplayLauncher(streamExe, useWsl: false, toolDir: dir, streamBinary: streamExe);
            if (File.Exists(stream) || File.Exists(streamSh))
                return new AgbplayLauncher("wsl.exe", useWsl: true, toolDir: dir,
                    streamBinary: File.Exists(streamSh) ? streamSh : stream);
            return null;
        }

        if (File.Exists(streamSh))
            return new AgbplayLauncher(streamSh, useWsl: false, toolDir: dir, streamBinary: streamSh);
        if (File.Exists(stream))
            return new AgbplayLauncher(stream, useWsl: false, toolDir: dir, streamBinary: stream);
        return null;
    }

    public static RenderResult RenderSong(string romPath, int songId, int maxLoops = 1)
    {
        ArgumentException.ThrowIfNullOrWhiteSpace(romPath);
        if (!File.Exists(romPath))
            throw new FileNotFoundException("ROM not found for agbplay render.", romPath);

        if (TryGetCachedWav(romPath, songId, maxLoops, out var cached, out var cachePath))
            return new RenderResult(cached, cachePath, "agbplay-cache");

        var launcher = FindLauncher()
            ?? throw new InvalidOperationException(
                "agbplay-cli was not found. Build/install it under RescueEditor/tools/agbplay.");

        Directory.CreateDirectory(Path.GetDirectoryName(cachePath)!);
        var tempPath = cachePath + ".partial.wav";
        if (File.Exists(tempPath))
            File.Delete(tempPath);

        var romForTool = launcher.TranslatePath(romPath);
        var outForTool = launcher.TranslatePath(tempPath);
        var args = launcher.BuildArgs(romForTool, songId, outForTool);

        var start = new ProcessStartInfo
        {
            FileName = launcher.Command,
            Arguments = args,
            RedirectStandardOutput = true,
            RedirectStandardError = true,
            UseShellExecute = false,
            CreateNoWindow = true,
        };
        foreach (var (key, value) in launcher.Environment)
            start.Environment[key] = value;

        using var process = Process.Start(start)
            ?? throw new InvalidOperationException("Failed to start agbplay-cli.");
        var stdout = process.StandardOutput.ReadToEnd();
        var stderr = process.StandardError.ReadToEnd();
        if (!process.WaitForExit(120_000))
        {
            try { process.Kill(entireProcessTree: true); } catch { /* ignore */ }
            throw new TimeoutException("agbplay-cli timed out while rendering audio.");
        }

        if (process.ExitCode != 0 || !File.Exists(tempPath))
        {
            var detail = string.Join('\n', new[] { stdout, stderr }.Where(s => !string.IsNullOrWhiteSpace(s)));
            throw new InvalidDataException(
                $"agbplay-cli failed (exit {process.ExitCode}).{Environment.NewLine}{detail}");
        }

        var pcmPath = cachePath;
        ConvertIeeeFloatWavToPcm16InPlace(tempPath, pcmPath);
        if (File.Exists(tempPath) && !string.Equals(tempPath, pcmPath, StringComparison.Ordinal))
            File.Delete(tempPath);
        return new RenderResult(File.ReadAllBytes(pcmPath), pcmPath, "agbplay");
    }

    /// <summary>
    /// agbplay writes IEEE-float WAVs; convert to PCM16 for broad player compatibility.
    /// </summary>
    private static void ConvertIeeeFloatWavToPcm16InPlace(string sourcePath, string destinationPath)
    {
        var source = File.ReadAllBytes(sourcePath);
        if (source.Length < 44)
            throw new InvalidDataException("agbplay produced an empty WAV.");

        var format = BitConverter.ToInt16(source, 20);
        var channels = BitConverter.ToInt16(source, 22);
        var sampleRate = BitConverter.ToInt32(source, 24);
        var bits = BitConverter.ToInt16(source, 34);
        var dataOffset = WaveformPeaks.FindDataChunkOffset(source);
        if (dataOffset < 0)
            throw new InvalidDataException("agbplay WAV has no data chunk.");

        // Already PCM16.
        if (format == 1 && bits == 16)
        {
            if (!string.Equals(sourcePath, destinationPath, StringComparison.Ordinal))
                File.Move(sourcePath, destinationPath, overwrite: true);
            return;
        }

        if (format != 3 || bits != 32)
        {
            // Unknown format — keep as-is.
            if (!string.Equals(sourcePath, destinationPath, StringComparison.Ordinal))
                File.Move(sourcePath, destinationPath, overwrite: true);
            return;
        }

        var floatCount = (source.Length - dataOffset) / 4;
        var pcm = new short[floatCount];
        for (var i = 0; i < floatCount; i++)
        {
            var sample = BitConverter.ToSingle(source, dataOffset + i * 4);
            sample = Math.Clamp(sample, -1f, 1f);
            pcm[i] = (short)Math.Round(sample * short.MaxValue);
        }

        using var output = new MemoryStream();
        using var writer = new BinaryWriter(output);
        var dataSize = pcm.Length * 2;
        writer.Write("RIFF"u8.ToArray());
        writer.Write(36 + dataSize);
        writer.Write("WAVE"u8.ToArray());
        writer.Write("fmt "u8.ToArray());
        writer.Write(16);
        writer.Write((short)1);
        writer.Write(channels);
        writer.Write(sampleRate);
        writer.Write(sampleRate * channels * 2);
        writer.Write((short)(channels * 2));
        writer.Write((short)16);
        writer.Write("data"u8.ToArray());
        writer.Write(dataSize);
        foreach (var sample in pcm)
            writer.Write(sample);
        File.WriteAllBytes(destinationPath, output.ToArray());
    }

    public static string? FindToolDirectory()
    {
        foreach (var candidate in CandidateToolDirectories())
        {
            if (File.Exists(Path.Combine(candidate, "agbplay-stream")) ||
                File.Exists(Path.Combine(candidate, "agbplay-stream.exe")) ||
                File.Exists(Path.Combine(candidate, "agbplay-cli")) ||
                File.Exists(Path.Combine(candidate, "agbplay-cli.exe")) ||
                File.Exists(Path.Combine(candidate, "agbplay-cli.sh")))
                return candidate;
        }

        return null;
    }

    private static AgbplayLauncher? FindLauncher()
    {
        var dir = FindToolDirectory();
        if (dir is null)
            return null;

        var sh = Path.Combine(dir, "agbplay-cli.sh");
        var linux = Path.Combine(dir, "agbplay-cli");
        var win = Path.Combine(dir, "agbplay-cli.exe");

        if (OperatingSystem.IsWindows())
        {
            if (File.Exists(win))
                return new AgbplayLauncher(win, useWsl: false, toolDir: dir, streamBinary: win);
            if (File.Exists(linux) || File.Exists(sh))
                return new AgbplayLauncher("wsl.exe", useWsl: true, toolDir: dir,
                    streamBinary: File.Exists(sh) ? sh : linux);
            return null;
        }

        if (File.Exists(sh))
            return new AgbplayLauncher(sh, useWsl: false, toolDir: dir, streamBinary: sh);
        if (File.Exists(linux))
            return new AgbplayLauncher(linux, useWsl: false, toolDir: dir, streamBinary: linux);
        return null;
    }

    private static IEnumerable<string> CandidateToolDirectories()
    {
        var env = Environment.GetEnvironmentVariable("RESCUETEMPLE_AGBPLAY");
        if (!string.IsNullOrWhiteSpace(env))
            yield return env;

        yield return Path.Combine(AppContext.BaseDirectory, "tools", "agbplay");
        yield return Path.GetFullPath(Path.Combine(AppContext.BaseDirectory, "..", "..", "..", "..", "..", "tools", "agbplay"));

        var cwd = Environment.CurrentDirectory;
        yield return Path.Combine(cwd, "tools", "agbplay");
        yield return Path.Combine(cwd, "RescueEditor", "tools", "agbplay");

        // Walk up from CWD looking for the repo tools folder.
        var current = new DirectoryInfo(cwd);
        while (current is not null)
        {
            yield return Path.Combine(current.FullName, "RescueEditor", "tools", "agbplay");
            yield return Path.Combine(current.FullName, "tools", "agbplay");
            current = current.Parent;
        }
    }

    private static string GetCachePath(string romPath, int songId, int maxLoops)
    {
        var root = Path.Combine(Path.GetTempPath(), "RescueTemple", "agbplay-cache");
        var key = Convert.ToHexString(SHA1.HashData(Encoding.UTF8.GetBytes(
            $"{Path.GetFullPath(romPath)}|{new FileInfo(romPath).Length}|{songId}|{maxLoops}|v1")))
            .ToLowerInvariant();
        return Path.Combine(root, $"{songId:D4}_{key}.wav");
    }

}

public sealed class AgbplayLauncher
{
    public AgbplayLauncher(string command, bool useWsl, string toolDir, string streamBinary)
    {
        Command = command;
        UseWsl = useWsl;
        ToolDir = toolDir;
        StreamBinary = streamBinary;
    }

    public string Command { get; }
    public bool UseWsl { get; }
    public string ToolDir { get; }
    public string StreamBinary { get; }

    public Dictionary<string, string> Environment
    {
        get
        {
            var env = new Dictionary<string, string>();
            if (!UseWsl)
            {
                var lib = Path.Combine(ToolDir, "lib");
                if (Directory.Exists(lib))
                {
                    var current = System.Environment.GetEnvironmentVariable("LD_LIBRARY_PATH");
                    env["LD_LIBRARY_PATH"] = string.IsNullOrWhiteSpace(current)
                        ? lib
                        : lib + ":" + current;
                }
            }
            return env;
        }
    }

    public string TranslatePath(string path)
    {
        if (!UseWsl)
            return path;
        var full = Path.GetFullPath(path).Replace('\\', '/');
        if (full.Length >= 3 && full[1] == ':')
        {
            var drive = char.ToLowerInvariant(full[0]);
            return $"/mnt/{drive}{full[2..]}";
        }
        return full;
    }

    public string BuildArgs(string romPath, int songId, string outputPath)
    {
        var song = songId.ToString(CultureInfo.InvariantCulture);
        if (!UseWsl)
            return Quote(romPath) + " render " + song + " " + Quote(outputPath) + " master";

        var script = Path.Combine(ToolDir, "agbplay-cli.sh");
        if (!File.Exists(script))
            script = Path.Combine(ToolDir, "agbplay-cli");
        return "-- bash " + Quote(ToWslPath(script)) + " " + Quote(romPath) + " render " + song + " " +
               Quote(outputPath) + " master";
    }

    public string BuildStreamArgs(string romPath, int songId, int maxLoops)
    {
        var song = songId.ToString(CultureInfo.InvariantCulture);
        var loops = maxLoops.ToString(CultureInfo.InvariantCulture);
        if (!UseWsl)
            return Quote(romPath) + " " + song + " " + loops;

        return "-- bash " + Quote(ToWslPath(StreamBinary)) + " " + Quote(romPath) + " " + song + " " + loops;
    }

    public string BuildServerArgs(string romPath)
    {
        if (!UseWsl)
            return Quote(romPath) + " --server";

        return "-- bash " + Quote(ToWslPath(StreamBinary)) + " " + Quote(romPath) + " --server";
    }

    private static string ToWslPath(string windowsOrLinuxPath)
    {
        var full = Path.GetFullPath(windowsOrLinuxPath).Replace('\\', '/');
        if (full.Length >= 3 && full[1] == ':')
        {
            var drive = char.ToLowerInvariant(full[0]);
            return $"/mnt/{drive}{full[2..]}";
        }
        return full;
    }

    private static string Quote(string value) =>
        "\"" + value.Replace("\"", "\\\"", StringComparison.Ordinal) + "\"";
}

/// <summary>
/// Pre-rendered waveform peak data for overview visualization.
/// </summary>
public static class WaveformPeaks
{
    public readonly record struct Peak(float Min, float Max);

    public static Peak[] Build(byte[] wav, int bucketCount = 1200)
    {
        bucketCount = Math.Clamp(bucketCount, 64, 8192);
        if (wav.Length < 44)
            return new Peak[bucketCount];

        var channels = BitConverter.ToInt16(wav, 22);
        var bits = BitConverter.ToInt16(wav, 34);
        var format = BitConverter.ToInt16(wav, 20);
        var dataOffset = FindDataChunk(wav);
        if (dataOffset < 0 || channels <= 0)
            return new Peak[bucketCount];

        var bytesPerSample = bits / 8;
        if (bytesPerSample <= 0)
            return new Peak[bucketCount];

        return BuildSamples(
            wav,
            dataOffset,
            wav.Length - dataOffset,
            channels,
            bytesPerSample,
            format == 3 && bits == 32,
            bucketCount);
    }

    /// <summary>Build peaks from interleaved PCM16LE (as produced by agbplay-stream).</summary>
    public static Peak[] BuildPcm16(byte[] pcm, int channels, int bucketCount = 640)
    {
        bucketCount = Math.Clamp(bucketCount, 64, 4096);
        if (pcm.Length < 4 || channels <= 0)
            return new Peak[bucketCount];
        return BuildSamples(pcm, 0, pcm.Length, channels, bytesPerSample: 2, ieeeFloat: false, bucketCount,
            // Skip frames inside each bucket — plenty for a visual overview.
            frameStride: 16);
    }

    private static Peak[] BuildSamples(
        byte[] data,
        int dataOffset,
        int dataLength,
        int channels,
        int bytesPerSample,
        bool ieeeFloat,
        int bucketCount,
        int frameStride = 1)
    {
        var peaks = new Peak[bucketCount];
        var frameSize = bytesPerSample * channels;
        if (frameSize <= 0)
            return peaks;
        var totalFrames = dataLength / frameSize;
        if (totalFrames <= 0)
            return peaks;

        frameStride = Math.Max(1, frameStride);
        var framesPerBucket = Math.Max(1, totalFrames / bucketCount);
        for (var bucket = 0; bucket < bucketCount; bucket++)
        {
            var startFrame = bucket * framesPerBucket;
            var endFrame = Math.Min(totalFrames, startFrame + framesPerBucket);
            float min = 0, max = 0;
            var any = false;
            for (var frame = startFrame; frame < endFrame; frame += frameStride)
            {
                var offset = dataOffset + frame * frameSize;
                for (var ch = 0; ch < channels; ch++)
                {
                    var sampleOffset = offset + ch * bytesPerSample;
                    float sample = ieeeFloat
                        ? BitConverter.ToSingle(data, sampleOffset)
                        : bytesPerSample == 2
                            ? BitConverter.ToInt16(data, sampleOffset) / 32768f
                            : bytesPerSample == 1
                                ? (data[sampleOffset] - 128) / 128f
                                : 0f;
                    if (!any)
                    {
                        min = max = sample;
                        any = true;
                    }
                    else
                    {
                        if (sample < min) min = sample;
                        if (sample > max) max = sample;
                    }
                }
            }
            peaks[bucket] = new Peak(min, max);
        }

        return peaks;
    }

    public static int FindDataChunkOffset(byte[] wav)
    {
        for (var i = 12; i < wav.Length - 8; i++)
        {
            if (wav[i] == (byte)'d' && wav[i + 1] == (byte)'a' &&
                wav[i + 2] == (byte)'t' && wav[i + 3] == (byte)'a')
                return i + 8;
        }
        return wav.Length > 44 ? 44 : -1;
    }

    private static int FindDataChunk(byte[] wav) => FindDataChunkOffset(wav);
}
