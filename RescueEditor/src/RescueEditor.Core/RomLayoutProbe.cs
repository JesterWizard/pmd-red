using System.Text;

namespace RescueEditor.Core;

/// <summary>
/// Outcome of <see cref="RomLayoutProbe.Probe"/>: the scene-table anchors located by structure,
/// per-table entry counts, and any problems that kept a table from matching uniquely.
/// </summary>
public sealed class RomLayoutProbeResult
{
    private const int RequiredAnchorCount = 5;

    public Dictionary<string, int> Anchors { get; } = new(StringComparer.Ordinal);
    public int MapCount { get; set; }              // valid gGroundMapConversionTable entries
    public int MapFileCount { get; set; }          // valid gMapFilesTable entries
    public int FunctionScriptCount { get; set; }   // valid gFunctionScriptTable entries
    public int MapScriptHeaderCount { get; set; }  // valid gMapScriptTable header pointers
    public List<string> Problems { get; } = new();
    public bool Complete => Problems.Count == 0 && Anchors.Count == RequiredAnchorCount;

    /// <summary>Builds a browse-only candidate profile from the probed anchors. Never grants writes.</summary>
    public RomProfile ToCandidateProfile(RomImage rom, string id, string name, string gameCode)
    {
        ArgumentNullException.ThrowIfNull(rom);
        if (!Complete)
            throw new InvalidOperationException(
                $"RomLayoutProbe result is incomplete ({Problems.Count} problem(s)); cannot build a candidate profile.");

        return new RomProfile
        {
            Id = id,
            Name = name,
            GameCode = gameCode,
            ExpectedSha1 = rom.Sha1,
            ExpectedSize = rom.Length,
            Anchors = new Dictionary<string, int>(Anchors, StringComparer.Ordinal),
            MapCount = MapCount,
            MapFileCount = MapFileCount,
            FunctionScriptCount = FunctionScriptCount,
            LayoutVerified = true,
            AllowWrites = false,
        };
    }
}

/// <summary>
/// Locates RescueTemple's scene tables in a ROM by the shape of their entries, never by fixed offsets.
/// Garbage input is reported through <see cref="RomLayoutProbeResult.Problems"/> rather than thrown.
/// </summary>
public static class RomLayoutProbe
{
    private const string ConversionLabelPrefix = "__ground_amd_conversion_";
    private const string ConversionLabelFirst = ConversionLabelPrefix + "00000";
    private const string MapFileFirstName = "T00P01";
    private const string MapFileColorName = "T00P01c";
    private const string MapFileMapName = "T00P01m";
    private const string FunctionScriptFirstName = "END_TALK";

    private const int ConversionEntrySize = 12;
    private const int MapFileEntrySize = 0x1C;
    private const int MapFileFieldCount = 7;
    private const int FunctionScriptEntrySize = 12;
    private const int SceneHeaderSize = 12;
    private const int MaxSceneHeaderGroups = 256;
    private const int LivesEntrySize = 12;
    private const int MaxLivesClass = 255;
    private const int MaxLivesSpecies = 0x1FF;
    private const int MinLivesEntries = 64;
    private const int LivesScanWindow = 0x200;
    private const int MinTableEntries = 16;
    private const int MinUnanchoredHeaderRun = 128;
    private const int MaxHeaderRunDrift = 2;
    private const int MaxLabelLength = 128;
    private const int MaxMapFileNameLength = 31;
    private const int MaxFunctionNameLength = 63;

    private readonly record struct TableRun(int Offset, int Count);

    public static RomLayoutProbeResult Probe(RomImage rom)
    {
        ArgumentNullException.ThrowIfNull(rom);
        var result = new RomLayoutProbeResult();

        var conversion = PickSingle(result, "gGroundMapConversionTable", FindConversionRuns(rom));
        if (conversion is { } conversionRun)
        {
            result.Anchors["gGroundMapConversionTable"] = conversionRun.Offset;
            result.MapCount = conversionRun.Count;
        }

        var mapFiles = PickSingle(result, "gMapFilesTable", FindMapFileRuns(rom));
        if (mapFiles is { } mapFilesRun)
        {
            result.Anchors["gMapFilesTable"] = mapFilesRun.Offset;
            result.MapFileCount = mapFilesRun.Count;
        }

        var functionScripts = PickSingle(result, "gFunctionScriptTable", FindFunctionScriptRuns(rom));
        if (functionScripts is { } functionRun)
        {
            result.Anchors["gFunctionScriptTable"] = functionRun.Offset;
            result.FunctionScriptCount = functionRun.Count;
        }

        var mapScripts = PickSingle(result, "gMapScriptTable",
            FindSceneHeaderRuns(rom, conversion?.Count));
        if (mapScripts is { } mapScriptRun)
        {
            result.Anchors["gMapScriptTable"] = mapScriptRun.Offset;
            result.MapScriptHeaderCount = mapScriptRun.Count;
        }

        if (mapScripts is { } anchoredMapScripts)
        {
            var livesStart = FindLivesStart(rom, anchoredMapScripts.Offset + anchoredMapScripts.Count * 4);
            if (livesStart is { } lives)
                result.Anchors["gGroundLivesTypeData"] = lives;
            else
                result.Problems.Add(
                    "gGroundLivesTypeData: not found (no run of 64 valid lives entries within 0x200 bytes after gMapScriptTable)");
        }
        else
        {
            result.Problems.Add("gGroundLivesTypeData: not searched because gMapScriptTable was not found");
        }

        return result;
    }

    private static TableRun? PickSingle(RomLayoutProbeResult result, string table, List<TableRun> candidates)
    {
        var distinct = candidates.Distinct().ToList();
        if (distinct.Count == 1)
            return distinct[0];

        if (distinct.Count == 0)
        {
            result.Problems.Add($"{table}: not found");
            return null;
        }

        var offsets = string.Join(", ", distinct.Select(run => $"0x{run.Offset:X}"));
        result.Problems.Add($"{table}: {distinct.Count} candidates ({offsets}); expected exactly one");
        return null;
    }

    private static List<TableRun> FindConversionRuns(RomImage rom)
    {
        var runs = new List<TableRun>();
        foreach (var label in rom.FindAll(AsciiNul(ConversionLabelFirst)))
        {
            foreach (var entry in FindPointersTo(rom, label, 8))
            {
                var count = CountRun(rom, entry, ConversionEntrySize, IsConversionEntry);
                if (count >= MinTableEntries)
                    runs.Add(new TableRun(entry, count));
            }
        }

        return runs;
    }

    private static List<TableRun> FindMapFileRuns(RomImage rom)
    {
        var runs = new List<TableRun>();
        foreach (var color in rom.FindAll(AsciiNul(MapFileColorName)))
        {
            foreach (var entry in FindPointersTo(rom, color, 4))
            {
                if (!FieldNameEquals(rom, entry, 0, MapFileFirstName, MaxMapFileNameLength) ||
                    !FieldNameEquals(rom, entry, 8, MapFileMapName, MaxMapFileNameLength))
                    continue;

                var count = CountRun(rom, entry, MapFileEntrySize, IsMapFileEntry);
                if (count >= MinTableEntries)
                    runs.Add(new TableRun(entry, count));
            }
        }

        return runs;
    }

    private static List<TableRun> FindFunctionScriptRuns(RomImage rom)
    {
        var runs = new List<TableRun>();
        foreach (var name in rom.FindAll(AsciiNul(FunctionScriptFirstName)))
        {
            foreach (var entry in FindPointersTo(rom, name, 4))
            {
                if (rom.ReadInt16(entry) != 0)
                    continue;

                var count = CountFunctionScripts(rom, entry);
                if (count >= MinTableEntries)
                    runs.Add(new TableRun(entry, count));
            }
        }

        return runs;
    }

    /// <summary>
    /// Maximal runs of valid scene-header pointers. With <paramref name="expectedCount"/> (the
    /// conversion-table size) only runs within ±2 of it are kept; otherwise runs of at least 128.
    /// </summary>
    private static List<TableRun> FindSceneHeaderRuns(RomImage rom, int? expectedCount)
    {
        var runs = new List<TableRun>();
        var wordEnd = rom.Length - rom.Length % 4;
        var runStart = -1;

        for (var x = 0; x <= wordEnd; x += 4)
        {
            var valid = x < wordEnd && IsSceneHeaderPointer(rom, rom.ReadUInt32(x));
            if (valid)
            {
                if (runStart < 0)
                    runStart = x;
                continue;
            }

            if (runStart < 0)
                continue;

            var count = (x - runStart) / 4;
            if (KeepHeaderRun(count, expectedCount))
                runs.Add(new TableRun(runStart, count));
            runStart = -1;
        }

        return runs;
    }

    private static bool KeepHeaderRun(int count, int? expectedCount) =>
        expectedCount is { } expected
            ? count >= MinTableEntries && Math.Abs(count - expected) <= MaxHeaderRunDrift
            : count >= MinUnanchoredHeaderRun;

    private static int? FindLivesStart(RomImage rom, int start)
    {
        for (var x = start; x < start + LivesScanWindow; x += 4)
        {
            if (CountLivesEntries(rom, x) >= MinLivesEntries)
                return x;
        }

        return null;
    }

    private static int CountLivesEntries(RomImage rom, int start)
    {
        var count = 0;
        for (var off = start;
             count < MinLivesEntries && rom.IsRangeValid(off, LivesEntrySize) && IsLivesEntry(rom, off);
             off += LivesEntrySize)
        {
            count++;
        }

        return count;
    }

    /// <summary>Yields 4-aligned offsets x where the u32 at x + fieldOffset equals the ROM address of targetOffset.</summary>
    private static IEnumerable<int> FindPointersTo(RomImage rom, int targetOffset, int fieldOffset)
    {
        var target = RomImage.RomVirtualAddress + (uint)targetOffset;
        for (var x = 0; rom.IsRangeValid(x + fieldOffset, sizeof(uint)); x += 4)
        {
            if (rom.ReadUInt32(x + fieldOffset) == target)
                yield return x;
        }
    }

    private static int CountRun(RomImage rom, int start, int stride, Func<RomImage, int, bool> isEntry)
    {
        var count = 0;
        for (var off = start; rom.IsRangeValid(off, stride) && isEntry(rom, off); off += stride)
            count++;
        return count;
    }

    private static int CountFunctionScripts(RomImage rom, int start)
    {
        var count = 0;
        for (var off = start; rom.IsRangeValid(off, FunctionScriptEntrySize); off += FunctionScriptEntrySize)
        {
            if (rom.ReadInt16(off) != count || !IsFunctionScriptEntry(rom, off))
                break;
            count++;
        }

        return count;
    }

    private static bool IsConversionEntry(RomImage rom, int off)
    {
        if (!rom.IsRangeValid(off, ConversionEntrySize))
            return false;

        return TryReadCString(rom, rom.ReadUInt32(off + 8), MaxLabelLength, out var label)
            && label.StartsWith(ConversionLabelPrefix, StringComparison.Ordinal);
    }

    private static bool IsMapFileEntry(RomImage rom, int off)
    {
        if (!rom.IsRangeValid(off, MapFileEntrySize))
            return false;
        if (rom.ReadUInt32(off + 8) == 0)
            return false;

        for (var field = 0; field < MapFileFieldCount; field++)
        {
            var pointer = rom.ReadUInt32(off + field * 4);
            if (pointer != 0 && !TryReadName(rom, pointer, MaxMapFileNameLength, out _))
                return false;
        }

        return true;
    }

    private static bool IsFunctionScriptEntry(RomImage rom, int off)
    {
        if (!rom.IsRangeValid(off, FunctionScriptEntrySize))
            return false;
        if (!TryReadName(rom, rom.ReadUInt32(off + 4), MaxFunctionNameLength, out _))
            return false;

        var script = rom.ReadUInt32(off + 8);
        return script == 0 || rom.TryPointerToOffset(script, out _);
    }

    private static bool IsLivesEntry(RomImage rom, int off)
    {
        if (!rom.IsRangeValid(off, LivesEntrySize))
            return false;

        var cls = rom.ReadInt16(off);
        var species = rom.ReadInt16(off + 2);
        return cls is >= 0 and <= MaxLivesClass
            && species is >= 0 and <= MaxLivesSpecies
            && rom.TryPointerToOffset(rom.ReadUInt32(off + 4), out _)
            && rom.ReadByte(off + 10) == 0
            && rom.ReadByte(off + 11) == 0;
    }

    private static bool IsSceneHeaderPointer(RomImage rom, uint pointer)
    {
        if (pointer < RomImage.RomVirtualAddress || pointer - RomImage.RomVirtualAddress >= (uint)rom.Length)
            return false;
        if (!rom.TryPointerToOffset(pointer, out var header) || !rom.IsRangeValid(header, SceneHeaderSize))
            return false;

        var groups = rom.ReadInt32(header);
        if (groups < 0 || groups > MaxSceneHeaderGroups)
            return false;
        if (!rom.TryPointerToOffset(rom.ReadUInt32(header + 4), out _))
            return false;

        var extra = rom.ReadUInt32(header + 8);
        return extra == 0 || rom.TryPointerToOffset(extra, out _);
    }

    private static bool FieldNameEquals(RomImage rom, int entry, int fieldOffset, string expected, int maxLength) =>
        rom.IsRangeValid(entry + fieldOffset, sizeof(uint))
        && TryReadName(rom, rom.ReadUInt32(entry + fieldOffset), maxLength, out var name)
        && name == expected;

    /// <summary>Reads a NUL-terminated ASCII name of 1..maxLength characters from [A-Za-z0-9_].</summary>
    private static bool TryReadName(RomImage rom, uint pointer, int maxLength, out string name)
    {
        if (!TryReadCString(rom, pointer, maxLength, out name) || name.Length == 0)
            return false;

        foreach (var c in name)
        {
            var allowed = c is (>= 'A' and <= 'Z') or (>= 'a' and <= 'z') or (>= '0' and <= '9') or '_';
            if (!allowed)
                return false;
        }

        return true;
    }

    /// <summary>Reads a NUL-terminated string whose NUL appears within <paramref name="maxLength"/> bytes.</summary>
    private static bool TryReadCString(RomImage rom, uint pointer, int maxLength, out string text)
    {
        text = string.Empty;
        if (!rom.TryPointerToOffset(pointer, out var offset))
            return false;

        var window = rom.Bytes.Slice(offset, Math.Min(maxLength + 1, rom.Length - offset));
        var nul = window.IndexOf((byte)0);
        if (nul < 0 || nul > maxLength)
            return false;

        text = Encoding.ASCII.GetString(window[..nul]);
        return true;
    }

    private static byte[] AsciiNul(string text) => Encoding.ASCII.GetBytes(text + '\0');
}
