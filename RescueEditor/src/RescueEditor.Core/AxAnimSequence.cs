using System.Buffers.Binary;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

/// <summary>
/// Loads AX <c>ax_anim</c> sequences (GMLZ dumps or inline C arrays) for Scene Play.
/// </summary>
public sealed partial class AxAnimSequence
{
    public readonly record struct Frame(int DurationFrames, int PoseId, short OffsetX, short OffsetY);

    private AxAnimSequence(IReadOnlyList<Frame> frames) => Frames = frames;

    public IReadOnlyList<Frame> Frames { get; }

    public static AxAnimSequence FromFrames(IReadOnlyList<Frame> frames) =>
        new(frames.Count == 0 ? [new Frame(1, 0, 0, 0)] : frames);

    public int TotalDurationFrames
    {
        get
        {
            var sum = 0;
            foreach (var f in Frames)
                sum += Math.Max(1, f.DurationFrames);
            return Math.Max(1, sum);
        }
    }

    public int PoseIdAtTick(int tickFrames) => FrameAtTick(tickFrames).PoseId;

    public int FrameIndexAtTick(int tickFrames)
    {
        if (Frames.Count == 0)
            return 0;
        var t = Math.Max(0, tickFrames) % TotalDurationFrames;
        for (var i = 0; i < Frames.Count; i++)
        {
            var dur = Math.Max(1, Frames[i].DurationFrames);
            if (t < dur)
                return i;
            t -= dur;
        }

        return Frames.Count - 1;
    }

    public int TickAtFrameIndex(int frameIndex)
    {
        if (Frames.Count == 0)
            return 0;
        var idx = Math.Clamp(frameIndex, 0, Frames.Count - 1);
        var tick = 0;
        for (var i = 0; i < idx; i++)
            tick += Math.Max(1, Frames[i].DurationFrames);
        return tick;
    }

    /// <summary>Active AX frame at <paramref name="tickFrames"/> (pose + retail anim offsets).</summary>
    public Frame FrameAtTick(int tickFrames)
    {
        if (Frames.Count == 0)
            return new Frame(1, 0, 0, 0);
        return Frames[FrameIndexAtTick(tickFrames)];
    }

    public static AxAnimSequence? TryLoad(
        string repositoryRoot,
        string folder,
        int axAnimIndex,
        int direction)
    {
        var header = FindAxHeader(repositoryRoot, folder);
        if (header is null || !File.Exists(header))
            return null;

        string text;
        try { text = File.ReadAllText(header); }
        catch { return null; }

        var tableNum = axAnimIndex + 1;
        var dirNum = (direction & 7) + 1;
        var tableBody = FindAnimTableBody(text, tableNum);
        if (tableBody is null)
            return null;

        var ptrs = AnimPtrRegex().Matches(tableBody);
        if (ptrs.Count == 0)
            return null;
        var ptrIndex = Math.Clamp(dirNum - 1, 0, ptrs.Count - 1);
        var symbol = ptrs[ptrIndex].Groups[1].Value;

        foreach (Match m in InlineAnimBlockRegex().Matches(text))
        {
            if (!m.Groups[1].Value.Equals(symbol, StringComparison.Ordinal))
                continue;
            var frames = ParseInlineFrames(m.Groups[2].Value);
            return frames.Count > 0 ? new AxAnimSequence(frames) : null;
        }

        foreach (Match m in IncbinSymbolRegex().Matches(text))
        {
            if (!m.Groups[1].Value.Equals(symbol, StringComparison.Ordinal))
                continue;
            var rel = m.Groups[2].Value.Replace('\\', '/');
            var path = Path.Combine(repositoryRoot, rel);
            if (!File.Exists(path))
                return null;
            try
            {
                var data = Compression.DecompressGmlz(File.ReadAllBytes(path));
                var frames = ParseBinaryFrames(data);
                return frames.Count > 0 ? new AxAnimSequence(frames) : null;
            }
            catch
            {
                return null;
            }
        }

        var lzGuess = Path.Combine(
            repositoryRoot, "graphics", "ax", "anim_lz", folder, symbol + ".lz");
        if (File.Exists(lzGuess))
        {
            try
            {
                var data = Compression.DecompressGmlz(File.ReadAllBytes(lzGuess));
                var frames = ParseBinaryFrames(data);
                return frames.Count > 0 ? new AxAnimSequence(frames) : null;
            }
            catch
            {
                return null;
            }
        }

        return null;
    }

    private static string? FindAnimTableBody(string text, int tableNum)
    {
        foreach (Match m in AnimTableBlockRegex().Matches(text))
        {
            if (!int.TryParse(m.Groups[2].Value, out var n) || n != tableNum)
                continue;
            return m.Groups[3].Value;
        }

        return null;
    }

    private static List<Frame> ParseBinaryFrames(byte[] data)
    {
        var frames = new List<Frame>();
        for (var i = 0; i + 12 <= data.Length; i += 12)
        {
            var duration = data[i];
            var pose = BinaryPrimitives.ReadInt16LittleEndian(data.AsSpan(i + 2));
            var ox = BinaryPrimitives.ReadInt16LittleEndian(data.AsSpan(i + 4));
            var oy = BinaryPrimitives.ReadInt16LittleEndian(data.AsSpan(i + 6));
            if (duration == 0)
                break;
            frames.Add(new Frame(duration, pose, ox, oy));
        }

        return frames;
    }

    private static List<Frame> ParseInlineFrames(string body)
    {
        var frames = new List<Frame>();
        foreach (Match m in InlineFrameRegex().Matches(body))
        {
            var duration = int.Parse(m.Groups[1].Value);
            var pose = int.Parse(m.Groups[2].Value);
            var ox = short.Parse(m.Groups[3].Value);
            var oy = short.Parse(m.Groups[4].Value);
            frames.Add(new Frame(duration, pose, ox, oy));
        }

        return frames;
    }

    private static string? FindAxHeader(string repositoryRoot, string folder)
    {
        var direct = Path.Combine(repositoryRoot, "src", "data", "ax", folder + ".h");
        if (File.Exists(direct))
            return direct;
        var axDir = Path.Combine(repositoryRoot, "src", "data", "ax");
        if (!Directory.Exists(axDir))
            return null;
        return Directory.EnumerateFiles(axDir, "*.h")
            .FirstOrDefault(f => Path.GetFileNameWithoutExtension(f)
                .Equals(folder, StringComparison.OrdinalIgnoreCase));
    }

    [GeneratedRegex(
        @"static const ax_anim \*const s(\w+)AnimTable(\d+)\[\]\s*=\s*\{(.*?)\};",
        RegexOptions.Singleline | RegexOptions.CultureInvariant)]
    private static partial Regex AnimTableBlockRegex();

    [GeneratedRegex(@"AX_ANIM_PTR\((\w+)\)", RegexOptions.CultureInvariant)]
    private static partial Regex AnimPtrRegex();

    [GeneratedRegex(
        @"static const ax_anim (\w+)\[\]\s*=\s*\{(.*?)\};",
        RegexOptions.Singleline | RegexOptions.CultureInvariant)]
    private static partial Regex InlineAnimBlockRegex();

    [GeneratedRegex(
        @"\.frames\s*=\s*(\d+)\s*,\s*\.unkFlags\s*=\s*\d+\s*,\s*\.poseId\s*=\s*(-?\d+)\s*,\s*\.offset\s*=\s*\{\s*(-?\d+)\s*,\s*(-?\d+)\s*\}",
        RegexOptions.CultureInvariant)]
    private static partial Regex InlineFrameRegex();

    [GeneratedRegex(
        @"static const u8 (\w+)\[\][^=]*=\s*INCBIN_U8\(\s*""([^""]+)""\s*\)",
        RegexOptions.CultureInvariant)]
    private static partial Regex IncbinSymbolRegex();
}
