using System.Globalization;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

/// <summary>
/// Working RuntimeConfig values for C Patch offerings.
/// Gameplay-effective builds must patch the linked <c>gRuntimeConfigRom</c> symbol.
/// Free-space injection cannot affect the running game.
/// </summary>
public sealed class RuntimeConfigState
{
    private readonly byte[] _values;
    private readonly byte[] _sourceValues;

    public RuntimeConfigState(
        int romOffset,
        byte[] values,
        string? statusMessage = null,
        bool isStandalone = false,
        int romCapacity = -1)
    {
        ArgumentNullException.ThrowIfNull(values);
        if (values.Length != RuntimeConfigSchema.ByteLength)
            throw new ArgumentException(
                $"RuntimeConfig requires {RuntimeConfigSchema.ByteLength} bytes.", nameof(values));

        RomOffset = romOffset;
        IsStandalone = isStandalone || romOffset < 0;
        WasInserted = false;
        RomCapacity = romCapacity < 0
            ? (romOffset >= 0 ? RuntimeConfigSchema.ByteLength : 0)
            : Math.Clamp(romCapacity, 0, RuntimeConfigSchema.ByteLength);
        _values = (byte[])values.Clone();
        _sourceValues = (byte[])values.Clone();
        StatusMessage = statusMessage ?? Describe();
    }

    public static RuntimeConfigState CreateStandalone(string? statusMessage = null) =>
        new(
            -1,
            RuntimeConfigSchema.CreateVanillaBytes(),
            statusMessage ??
            "Standalone C Patch catalog — Build inserts/shifts gRuntimeConfigRom into the ROM.",
            isStandalone: true,
            romCapacity: 0);

    public int RomOffset { get; private set; }
    public int RomCapacity { get; private set; }
    public bool HasRomBacking => RomOffset >= 0 && RomCapacity > 0;
    public bool IsStandalone { get; private set; }
    public bool WasInserted { get; private set; }
    public bool IsInjected => WasInserted;
    public bool IsAvailable => true;
    public string StatusMessage { get; private set; }
    public bool IsDirty => !_values.AsSpan().SequenceEqual(_sourceValues);

    public bool IsFieldWritable(string fieldId)
    {
        var field = Require(fieldId);
        return HasRomBacking && field.Offset < RomCapacity;
    }

    public void Rebind(int romOffset, int romCapacity, bool inserted = false)
    {
        if (romOffset < 0)
            throw new ArgumentOutOfRangeException(nameof(romOffset));
        RomOffset = romOffset;
        RomCapacity = Math.Clamp(romCapacity, 0, RuntimeConfigSchema.ByteLength);
        IsStandalone = false;
        WasInserted = inserted;
        StatusMessage = RomCapacity < RuntimeConfigSchema.ByteLength
            ? $"Bound gRuntimeConfigRom @ 0x{RomOffset:X} (capacity {RomCapacity}/{RuntimeConfigSchema.ByteLength})"
            : $"Bound gRuntimeConfigRom @ 0x{RomOffset:X}";
    }

    public byte Get(string fieldId)
    {
        var field = Require(fieldId);
        return _values[field.Offset];
    }

    public void Set(string fieldId, byte value)
    {
        var field = Require(fieldId);
        if (field.Kind == RuntimeConfigFieldKind.Toggle)
            value = value == 0 ? (byte)0 : (byte)1;
        else
            value = (byte)Math.Clamp(value, field.Min, field.Max);
        _values[field.Offset] = value;
    }

    public void CopyValuesTo(Span<byte> destination)
    {
        if (destination.Length < _values.Length)
            throw new ArgumentException("Destination too small.", nameof(destination));
        _values.CopyTo(destination);
    }

    public byte[] SnapshotValues() => (byte[])_values.Clone();

    public void RestoreValues(ReadOnlySpan<byte> values)
    {
        if (values.Length != _values.Length)
            throw new ArgumentException("Value length mismatch.", nameof(values));
        values.CopyTo(_values);
    }

    public void RestoreSourceSnapshot() => _sourceValues.CopyTo(_values, 0);

    public void CaptureSourceFromCurrent() => _values.CopyTo(_sourceValues, 0);

    private string Describe() =>
        HasRomBacking
            ? RomCapacity < RuntimeConfigSchema.ByteLength
                ? $"Bound gRuntimeConfigRom @ 0x{RomOffset:X} (capacity {RomCapacity}/{RuntimeConfigSchema.ByteLength})"
                : $"Bound gRuntimeConfigRom @ 0x{RomOffset:X}"
            : "Standalone C Patch catalog (not bound to ROM)";

    private static RuntimeConfigFieldDef Require(string fieldId) =>
        RuntimeConfigSchema.Find(fieldId)
        ?? throw new ArgumentOutOfRangeException(nameof(fieldId), fieldId, "Unknown RuntimeConfig field.");
}

public static class RuntimeConfigCodec
{
    private static readonly Regex MapSymbolRegex = new(
        @"0x([0-9a-fA-F]+)\s+gRuntimeConfigRom\b",
        RegexOptions.Compiled);

    private static readonly Regex MapSectionSizeRegex = new(
        @"\.runtime_config\s+0x([0-9a-fA-F]+)\s+0x([0-9a-fA-F]+)",
        RegexOptions.Compiled | RegexOptions.Multiline);

    public static RuntimeConfigState Read(RomImage rom, int offset, int? capacity = null)
    {
        var bytesToRead = capacity ?? RuntimeConfigSchema.ByteLength;
        bytesToRead = Math.Clamp(bytesToRead, 1, RuntimeConfigSchema.ByteLength);
        if (!rom.IsRangeValid(offset, bytesToRead))
            throw new ArgumentOutOfRangeException(nameof(offset), "RuntimeConfig range is outside the ROM.");

        var values = RuntimeConfigSchema.CreateVanillaBytes();
        rom.Copy(offset, bytesToRead).CopyTo(values.AsSpan(0, bytesToRead));
        var status = bytesToRead < RuntimeConfigSchema.ByteLength
            ? $"Bound gRuntimeConfigRom @ 0x{offset:X} (ROM section {bytesToRead} bytes; schema {RuntimeConfigSchema.ByteLength})"
            : null;
        return new RuntimeConfigState(offset, values, status, isStandalone: false, romCapacity: bytesToRead);
    }

    public static void Write(MutableRom rom, RuntimeConfigState state)
    {
        ArgumentNullException.ThrowIfNull(state);
        var report = new RomBuildReport();
        RuntimeConfigInstaller.WriteEnsured(rom, state, report);
        if (!report.Success)
            throw new InvalidOperationException(string.Join(" ", report.Errors));
    }

    public static void Write(MutableRom rom, RuntimeConfigState state, RomBuildReport report, string? mapText = null)
    {
        ArgumentNullException.ThrowIfNull(state);
        ArgumentNullException.ThrowIfNull(report);
        RuntimeConfigInstaller.WriteEnsured(rom, state, report, mapText);
    }

    public static int? TryParseMapSymbol(string mapText, string symbol = "gRuntimeConfigRom")
    {
        ArgumentNullException.ThrowIfNull(mapText);
        if (!string.Equals(symbol, "gRuntimeConfigRom", StringComparison.Ordinal))
            return null;

        var match = MapSymbolRegex.Match(mapText);
        if (!match.Success)
            return null;
        if (!uint.TryParse(match.Groups[1].Value, NumberStyles.HexNumber, CultureInfo.InvariantCulture, out var address))
            return null;
        if (address < RomImage.RomVirtualAddress)
            return null;
        return (int)(address - RomImage.RomVirtualAddress);
    }

    public static int? TryParseMapSectionSize(string mapText)
    {
        ArgumentNullException.ThrowIfNull(mapText);
        var match = MapSectionSizeRegex.Match(mapText);
        if (!match.Success)
            return null;
        if (!int.TryParse(match.Groups[2].Value, NumberStyles.HexNumber, CultureInfo.InvariantCulture, out var size))
            return null;
        return size;
    }

    public static RuntimeConfigState TryLoad(RomImage rom, string? repositoryRoot = null)
    {
        ArgumentNullException.ThrowIfNull(rom);
        repositoryRoot ??= CatalogBuilder.FindRepositoryRoot(rom.Path);

        // Retail UX ROM: config lives on the bundled feature image (CPatchFeaturePayload.Bind).
        if (rom.Info.IsKnownRetailRom)
        {
            return RuntimeConfigState.CreateStandalone(
                "Open baserom.gba — C Patches apply the feature bundle shipped with RescueTemple.");
        }

        foreach (var mapPath in CandidateMapPaths(rom.Path, repositoryRoot))
        {
            if (!File.Exists(mapPath))
                continue;
            string text;
            try
            {
                text = File.ReadAllText(mapPath);
            }
            catch (IOException)
            {
                continue;
            }

            var offset = TryParseMapSymbol(text);
            if (offset is null)
                continue;

            var sectionSize = TryParseMapSectionSize(text) ?? RuntimeConfigSchema.ByteLength;
            var capacity = Math.Min(sectionSize, RuntimeConfigSchema.ByteLength);
            if (capacity <= 0)
                continue;

            if (!rom.IsRangeValid(offset.Value, capacity))
            {
                return RuntimeConfigState.CreateStandalone(
                    $"gRuntimeConfigRom @ 0x{offset.Value:X} from {Path.GetFileName(mapPath)} is outside this ROM.");
            }

            return Read(rom, offset.Value, capacity);
        }

        return RuntimeConfigState.CreateStandalone();
    }

    private static IEnumerable<string> CandidateMapPaths(string romPath, string repositoryRoot)
    {
        var romDir = Path.GetDirectoryName(Path.GetFullPath(romPath)) ?? Environment.CurrentDirectory;
        var romStem = Path.GetFileNameWithoutExtension(romPath);

        // Prefer maps next to the opened ROM so we bind the matching build.
        yield return Path.Combine(romDir, romStem + ".map");
        yield return Path.Combine(romDir, "pmd_red.map");
        yield return Path.Combine(repositoryRoot, "pmd_red.map");
        yield return Path.Combine(repositoryRoot, romStem + ".map");
    }
}
