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

    public static bool IsAvailable() => !string.IsNullOrWhiteSpace(FindLauncher()?.Command);

    public static RenderResult RenderSong(string romPath, int songId, int maxLoops = 1)
    {
        ArgumentException.ThrowIfNullOrWhiteSpace(romPath);
        if (!File.Exists(romPath))
            throw new FileNotFoundException("ROM not found for agbplay render.", romPath);

        var launcher = FindLauncher()
            ?? throw new InvalidOperationException(
                "agbplay-cli was not found. Build/install it under RescueEditor/tools/agbplay.");

        var cachePath = GetCachePath(romPath, songId, maxLoops);
        if (File.Exists(cachePath) && new FileInfo(cachePath).Length > 44)
            return new RenderResult(File.ReadAllBytes(cachePath), cachePath, "agbplay-cache");

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
            if (File.Exists(Path.Combine(candidate, "agbplay-cli")) ||
                File.Exists(Path.Combine(candidate, "agbplay-cli.exe")) ||
                File.Exists(Path.Combine(candidate, "agbplay-cli.sh")))
                return candidate;
        }

        return null;
    }

    private static Launcher? FindLauncher()
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
                return new Launcher(win, useWsl: false, toolDir: dir);
            if (File.Exists(linux) || File.Exists(sh))
                return new Launcher("wsl.exe", useWsl: true, toolDir: dir);
            return null;
        }

        if (File.Exists(sh))
            return new Launcher(sh, useWsl: false, toolDir: dir);
        if (File.Exists(linux))
            return new Launcher(linux, useWsl: false, toolDir: dir);
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

    private sealed class Launcher
    {
        public Launcher(string command, bool useWsl, string toolDir)
        {
            Command = command;
            UseWsl = useWsl;
            ToolDir = toolDir;
        }

        public string Command { get; }
        public bool UseWsl { get; }
        public string ToolDir { get; }

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
            // D:\foo -> /mnt/d/foo
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
            {
                // agbplay-cli <rom> render <song-id> <output> master
                return Quote(romPath) + " render " + song + " " + Quote(outputPath) + " master";
            }

            var script = Path.Combine(ToolDir, "agbplay-cli.sh");
            if (!File.Exists(script))
                script = Path.Combine(ToolDir, "agbplay-cli");
            var wslScript = ToWslPath(script);
            // wsl.exe -- bash <script> <rom> render <id> <out> master
            return "-- bash " + Quote(wslScript) + " " + Quote(romPath) + " render " + song + " " +
                   Quote(outputPath) + " master";
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
        var peaks = new Peak[bucketCount];
        if (wav.Length < 44)
            return peaks;

        var channels = BitConverter.ToInt16(wav, 22);
        var bits = BitConverter.ToInt16(wav, 34);
        var format = BitConverter.ToInt16(wav, 20);
        var dataOffset = FindDataChunk(wav);
        if (dataOffset < 0 || channels <= 0)
            return peaks;

        var bytesPerSample = bits / 8;
        if (bytesPerSample <= 0)
            return peaks;
        var frameSize = bytesPerSample * channels;
        var totalFrames = (wav.Length - dataOffset) / frameSize;
        if (totalFrames <= 0)
            return peaks;

        var framesPerBucket = Math.Max(1, totalFrames / bucketCount);
        for (var bucket = 0; bucket < bucketCount; bucket++)
        {
            var start = dataOffset + bucket * framesPerBucket * frameSize;
            var end = Math.Min(wav.Length, start + framesPerBucket * frameSize);
            float min = 0, max = 0;
            var any = false;
            for (var offset = start; offset + frameSize <= end; offset += frameSize)
            {
                // Mixdown: average absolute contribution across channels for bounds.
                for (var ch = 0; ch < channels; ch++)
                {
                    var sampleOffset = offset + ch * bytesPerSample;
                    float sample = format == 3 && bits == 32
                        ? BitConverter.ToSingle(wav, sampleOffset)
                        : bits == 16
                            ? BitConverter.ToInt16(wav, sampleOffset) / 32768f
                            : bits == 8
                                ? (wav[sampleOffset] - 128) / 128f
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

    internal static int FindDataChunkOffset(byte[] wav)
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
