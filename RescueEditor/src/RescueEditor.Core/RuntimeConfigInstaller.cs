namespace RescueEditor.Core;

/// <summary>
/// Inserts or grows <c>gRuntimeConfigRom</c> in the ROM image (extend or mid-ROM shift)
/// and keeps Thumb copy-size immediates / absolute pointers coherent so patches apply in-game.
/// </summary>
public static class RuntimeConfigInstaller
{
    public sealed record EnsureResult(
        int RomOffset,
        int Capacity,
        int BytesInserted,
        int PointersAdjusted,
        int CopySizePatched,
        string Message);

    /// <summary>
    /// Make sure <paramref name="state"/> is bound to a writable <c>gRuntimeConfigRom</c> region
    /// large enough for the effective in-game copy size, inserting/shifting ROM bytes if needed.
    /// </summary>
    public static EnsureResult EnsureInRom(MutableRom rom, RuntimeConfigState state, string? mapText = null)
    {
        ArgumentNullException.ThrowIfNull(rom);
        ArgumentNullException.ThrowIfNull(state);

        if (IsRetailUs10(rom))
        {
            throw new InvalidOperationException(
                "C Patches are applied via the feature bundle shipped with RescueTemple, not by writing retail bytes directly.");
        }

        var compiledCopySize = TryDetectCompiledCopySize(rom, state.HasRomBacking ? state.RomOffset : null)
            ?? RuntimeConfigCodec.TryParseMapSectionSize(mapText ?? string.Empty)
            ?? (state.RomCapacity > 0 ? state.RomCapacity : RuntimeConfigSchema.ByteLength);

        // Never ask Init/Reset to copy more than the compiled size (EWRAM dest matches that).
        var targetCapacity = Math.Min(RuntimeConfigSchema.ByteLength, Math.Max(1, compiledCopySize));

        if (!state.HasRomBacking)
            return InsertNewSection(rom, state, targetCapacity);

        return GrowExistingSection(rom, state, targetCapacity);
    }

    public static void WriteEnsured(MutableRom rom, RuntimeConfigState state, RomBuildReport report, string? mapText = null)
    {
        try
        {
            var ensure = EnsureInRom(rom, state, mapText);
            report.Changes.Add(ensure.Message);
            if (ensure.BytesInserted > 0)
                report.Changes.Add($"ROM shifted/extended by {ensure.BytesInserted} byte(s); {ensure.PointersAdjusted} pointer(s) adjusted.");
            if (ensure.CopySizePatched > 0)
                report.Changes.Add($"Patched {ensure.CopySizePatched} RuntimeConfig copy-size immediate(s) to {ensure.Capacity}.");

            var buffer = new byte[RuntimeConfigSchema.ByteLength];
            state.CopyValuesTo(buffer);
            rom.WriteBytes(state.RomOffset, buffer.AsSpan(0, state.RomCapacity));
            report.Changes.Add($"Wrote C Patches @ 0x{state.RomOffset:X} ({state.RomCapacity} bytes)");
        }
        catch (Exception exception)
        {
            report.Errors.Add($"C Patches: {exception.Message}");
        }
    }

    private static bool IsRetailUs10(MutableRom rom) =>
        rom.Length == RomImage.ExpectedRetailSize &&
        string.Equals(rom.SourceSha1, RomImage.ExpectedRetailSha1, StringComparison.OrdinalIgnoreCase);

    private static EnsureResult InsertNewSection(MutableRom rom, RuntimeConfigState state, int capacity)
    {
        var oldPointers = FindPointersToConfig(rom, knownOffset: null);
        // Also collect Init literal pools before extend
        var offset = (rom.Length + 3) & ~3;
        rom.ExtendTo(offset + capacity, fill: 0x00);

        var values = new byte[RuntimeConfigSchema.ByteLength];
        state.CopyValuesTo(values);
        rom.WriteBytes(offset, values.AsSpan(0, capacity));

        var adjusted = 0;
        foreach (var pointerOffset in oldPointers)
        {
            rom.WritePointer(pointerOffset, offset);
            adjusted++;
        }

        adjusted += RetargetInitLiterals(rom, offset, capacity);
        var sizePatches = PatchCopySizeImmediates(rom, offset, capacity);

        state.Rebind(offset, capacity, inserted: true);
        return new EnsureResult(
            offset,
            capacity,
            capacity,
            adjusted,
            sizePatches,
            $"Inserted gRuntimeConfigRom @ 0x{offset:X} ({capacity} bytes).");
    }

    private static EnsureResult GrowExistingSection(MutableRom rom, RuntimeConfigState state, int targetCapacity)
    {
        var offset = state.RomOffset;
        var capacity = state.RomCapacity;
        var inserted = 0;
        var adjusted = 0;

        if (targetCapacity > capacity)
        {
            var grow = targetCapacity - capacity;
            var sectionEnd = offset + capacity;
            if (sectionEnd >= rom.Length)
            {
                rom.ExtendTo(offset + targetCapacity, fill: 0x00);
                inserted = grow;
            }
            else
            {
                adjusted = rom.InsertBytes(sectionEnd, grow, fill: 0x00);
                inserted = grow;
            }

            capacity = targetCapacity;
            state.Rebind(offset, capacity, inserted: inserted > 0);
        }

        var sizePatches = PatchCopySizeImmediates(rom, offset, capacity);
        var message = inserted > 0
            ? $"Grew gRuntimeConfigRom @ 0x{offset:X} to {capacity} bytes (inserted/extended {inserted})."
            : $"Using gRuntimeConfigRom @ 0x{offset:X} ({capacity} bytes).";
        return new EnsureResult(offset, capacity, inserted, adjusted, sizePatches, message);
    }

    /// <summary>Thumb <c>movs r2, #imm</c> near a literal pool pointer to the config.</summary>
    public static int? TryDetectCompiledCopySize(MutableRom rom, int? configOffset)
    {
        foreach (var pointerOffset in FindPointersToConfig(rom, configOffset))
        {
            for (var back = 4; back <= 32; back += 2)
            {
                var at = pointerOffset - back;
                if (at < 0)
                    break;
                if (rom.ReadByte(at + 1) != 0x22)
                    continue;
                return rom.ReadByte(at);
            }
        }

        return null;
    }

    public static List<int> FindPointersToConfig(MutableRom rom, int? knownOffset)
    {
        var found = new List<int>();
        if (knownOffset is not int known || known < 0)
            return found;

        var expected = RomImage.RomVirtualAddress + (uint)known;
        ScanForPointer(rom, expected, found);
        if ((expected & 0xFF000000) == 0x08000000)
            ScanForPointer(rom, expected + 0x01000000, found);
        return found;
    }

    private static void ScanForPointer(MutableRom rom, uint pointerValue, List<int> found)
    {
        for (var i = 0; i <= rom.Length - 4; i++)
        {
            if (rom.ReadUInt32(i) == pointerValue)
                found.Add(i);
        }
    }

    private static int RetargetInitLiterals(MutableRom rom, int newOffset, int capacity)
    {
        var patched = 0;
        for (var i = 0; i <= rom.Length - 8; i += 2)
        {
            if (rom.ReadByte(i) != 0x00 || rom.ReadByte(i + 1) != 0xB5)
                continue;
            if (rom.ReadByte(i + 3) != 0x22)
                continue;
            var size = rom.ReadByte(i + 2);
            if (size is < 0x20 or > 0x80)
                continue;

            for (var lit = i + 8; lit <= i + 24 && lit <= rom.Length - 4; lit += 4)
            {
                var value = rom.ReadUInt32(lit);
                if (value < RomImage.RomVirtualAddress || value >= 0x0A000000)
                    continue;
                rom.WritePointer(lit, newOffset);
                if (size != capacity)
                    rom.WriteByte(i + 2, (byte)capacity);
                patched++;
                break;
            }
        }

        return patched;
    }

    private static int PatchCopySizeImmediates(MutableRom rom, int configOffset, int capacity)
    {
        if (capacity > 255)
            return 0;
        var patched = 0;
        foreach (var pointerOffset in FindPointersToConfig(rom, configOffset))
        {
            for (var back = 4; back <= 32; back += 2)
            {
                var at = pointerOffset - back;
                if (at < 0)
                    break;
                if (rom.ReadByte(at + 1) != 0x22)
                    continue;
                if (rom.ReadByte(at) == (byte)capacity)
                    break;
                rom.WriteByte(at, (byte)capacity);
                patched++;
                break;
            }
        }

        return patched;
    }
}
