namespace RescueEditor.Core;

public sealed class RomBuildReport
{
    public List<string> Changes { get; } = new();
    public List<string> Warnings { get; } = new();
    public List<string> Errors { get; } = new();
    public bool Success => Errors.Count == 0;
}

public static class FreeSpaceAllocator
{
    public static int FindFreeSpace(MutableRom rom, int size, int alignment = 4, int start = 0x10000)
    {
        if (size <= 0)
            throw new ArgumentOutOfRangeException(nameof(size));
        alignment = Math.Max(1, alignment);
        var padded = (size + alignment - 1) / alignment * alignment;
        var offset = (start + alignment - 1) / alignment * alignment;
        while (offset + padded <= rom.Length)
        {
            var span = rom.Copy(offset, padded);
            if (span.All(value => value is 0x00 or 0xFF))
                return offset;
            offset += alignment;
        }
        throw new InvalidOperationException($"Unable to allocate {size} bytes of free space.");
    }
}

public static class RomBuilder
{
    private const int SectorSize = 40;

    public static RomBuildReport Build(
        RomImage source,
        SceneDatabase database,
        ProjectDocument project,
        string outputPath)
    {
        var report = new RomBuildReport();
        var profile = RomProfile.RequireWritable(source);
        if (!string.Equals(project.BaseRomSha1, source.Sha1, StringComparison.OrdinalIgnoreCase))
            report.Warnings.Add("Project base ROM SHA-1 does not match the open ROM.");

        var lint = SceneLint.Validate(source, database);
        report.Warnings.AddRange(lint.Warnings);
        report.Errors.AddRange(lint.Errors);
        if (!report.Success)
            return report;

        var rom = MutableRom.From(source);

        foreach (var scene in database.Scenes)
        {
            foreach (var group in scene.Groups)
            {
                if (group.SectorListDirty)
                {
                    try
                    {
                        WriteSectorList(rom, group, report);
                    }
                    catch (Exception exception)
                    {
                        report.Errors.Add($"Group {group.Index} sector list: {exception.Message}");
                    }
                }

                foreach (var sector in group.Sectors)
                {
                    if (sector.RomOffset < 0)
                        continue;

                    foreach (var kind in new[]
                             {
                                 SceneEntityKind.Live, SceneEntityKind.Object,
                                 SceneEntityKind.Effect, SceneEntityKind.Event,
                             })
                    {
                        try
                        {
                            if (sector.IsListDirty(kind))
                                WriteEntityList(rom, sector, kind, report);
                            else
                                WriteEntitiesInPlace(rom, sector.ListFor(kind), report);
                        }
                        catch (Exception exception)
                        {
                            report.Errors.Add($"Sector {sector.Group}/{sector.Sector} {kind}: {exception.Message}");
                        }
                    }

                    foreach (var station in sector.Stations)
                    {
                        if (station.ScriptOffset < 0 || station.Commands.Count == 0)
                            continue;
                        try
                        {
                            WriteStationScript(rom, station, report);
                        }
                        catch (Exception exception)
                        {
                            report.Errors.Add($"Station '{station.Name}': {exception.Message}");
                        }
                    }
                }
            }
        }

        foreach (var dialogue in database.DialogueByOffset.Values)
        {
            var edit = project.Edits.LastOrDefault(item =>
                item.Kind == "dialogue.text" &&
                item.Target.Equals($"0x{dialogue.Offset:X}", StringComparison.OrdinalIgnoreCase));
            if (edit is null || !edit.Values.TryGetValue("text", out var text))
                continue;
            var bytes = System.Text.Encoding.ASCII.GetBytes(text);
            if (bytes.Length > dialogue.Size)
            {
                report.Errors.Add($"Dialogue 0x{dialogue.Offset:X} does not fit in-place.");
                continue;
            }
            rom.WriteBytes(dialogue.Offset, bytes);
            if (bytes.Length < dialogue.Size)
                rom.Fill(dialogue.Offset + bytes.Length, dialogue.Size - bytes.Length, 0x00);
            if (rom.IsRangeValid(dialogue.Offset + bytes.Length, 1))
                rom.WriteByte(dialogue.Offset + bytes.Length, 0);
            report.Changes.Add($"Dialogue @ 0x{dialogue.Offset:X}");
        }

        if (!report.Success)
            return report;

        Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(outputPath))!);
        rom.Save(outputPath);
        report.Changes.Add($"Wrote {outputPath}");

        try
        {
            var rebuilt = RomImage.Open(outputPath);
            foreach (var scene in database.Scenes)
            {
                foreach (var entity in scene.AllEntities.Where(item => item.RomOffset >= 0))
                {
                    var pos = CompactPos.Read(rebuilt, entity.RomOffset + 4);
                    if (pos.XTiles != entity.Position.XTiles || pos.YTiles != entity.Position.YTiles)
                        report.Errors.Add($"Verify failed for entity @ 0x{entity.RomOffset:X}");
                }
            }
        }
        catch (Exception exception)
        {
            report.Errors.Add($"Reopen verification failed: {exception.Message}");
        }

        _ = profile;
        return report;
    }

    private static void WriteSectorList(MutableRom rom, SceneGroup group, RomBuildReport report)
    {
        if (group.RomOffset < 0)
            throw new InvalidOperationException("Group has no ROM offset.");

        foreach (var sector in group.Sectors.Where(s => s.RomOffset < 0 || s.SectorBlobDirty))
        {
            var blob = new byte[SectorSize];
            var free = FreeSpaceAllocator.FindFreeSpace(rom, SectorSize);
            rom.WriteBytes(free, blob);
            sector.RomOffset = free;
            sector.SectorBlobDirty = false;
            report.Changes.Add($"Allocated sector blob @ 0x{free:X}");
        }

        var count = group.Sectors.Count;
        var tableSize = count * 4;
        var table = FreeSpaceAllocator.FindFreeSpace(rom, Math.Max(4, tableSize));
        for (var i = 0; i < count; i++)
            rom.WritePointer(table + i * 4, group.Sectors[i].RomOffset);

        rom.WriteInt32(group.RomOffset, count);
        rom.WritePointer(group.RomOffset + 4, table);
        group.SectorListDirty = false;
        report.Changes.Add($"Group {group.Index} sector list -> 0x{table:X} ({count})");
    }

    private static void WriteEntityList(
        MutableRom rom,
        SceneSector sector,
        SceneEntityKind kind,
        RomBuildReport report)
    {
        if (sector.RomOffset < 0)
            throw new InvalidOperationException("Sector has no ROM offset.");

        var list = sector.ListFor(kind);
        var entrySize = SceneEntity.EntrySizeFor(kind);
        var countOffset = sector.GetListCountOffset(kind);
        var bytes = new byte[Math.Max(entrySize, list.Count * entrySize)];
        for (var i = 0; i < list.Count; i++)
        {
            var entity = list[i];
            EncodeEntity(entity, bytes.AsSpan(i * entrySize, entrySize));
        }

        var free = list.Count == 0
            ? 0
            : FreeSpaceAllocator.FindFreeSpace(rom, bytes.Length);
        if (list.Count > 0)
            rom.WriteBytes(free, bytes);

        rom.WriteInt32(countOffset, list.Count);
        if (list.Count == 0)
            rom.WriteUInt32(countOffset + 4, 0);
        else
            rom.WritePointer(countOffset + 4, free);

        for (var i = 0; i < list.Count; i++)
        {
            list[i].RomOffset = free + i * entrySize;
            list[i].RawBytes = bytes.AsSpan(i * entrySize, entrySize).ToArray();
            list[i].NeedsListRewrite = false;
        }

        sector.SetListDirty(kind, false);
        report.Changes.Add($"{kind} list g{sector.Group}/s{sector.Sector} -> 0x{free:X} ({list.Count})");
    }

    private static void WriteEntitiesInPlace(MutableRom rom, List<SceneEntity> entities, RomBuildReport report)
    {
        foreach (var entity in entities)
        {
            if (entity.RomOffset < 0 || entity.RawBytes.Length == 0)
                continue;
            WriteEntity(rom, entity);
            report.Changes.Add($"Entity {entity.Kind} @ 0x{entity.RomOffset:X}");
        }
    }

    private static void WriteStationScript(MutableRom rom, ScriptRefData station, RomBuildReport report)
    {
        var encoded = ScriptCodec.Encode(station.Commands);
        var originalSize = station.Commands.Count * ScriptCommandData.Size;
        // Prefer original span when available; otherwise use command count * size as capacity hint.
        var capacity = originalSize;
        if (station.Commands.Count > 0 && station.Commands[0].RomOffset >= 0)
            capacity = Math.Max(capacity, station.Commands.Count * ScriptCommandData.Size);

        if (encoded.Length <= capacity && station.ScriptOffset >= 0)
        {
            rom.WriteBytes(station.ScriptOffset, encoded);
            if (encoded.Length < capacity)
                rom.Fill(station.ScriptOffset + encoded.Length, capacity - encoded.Length, 0x00);
            report.Changes.Add($"Script '{station.Name}' @ 0x{station.ScriptOffset:X} (in-place)");
        }
        else
        {
            var free = FreeSpaceAllocator.FindFreeSpace(rom, encoded.Length);
            rom.WriteBytes(free, encoded);
            if (station.RomOffset >= 0)
                rom.WritePointer(station.RomOffset + 8, free);
            station.ScriptOffset = free;
            report.Changes.Add($"Script '{station.Name}' relocated -> 0x{free:X}");
        }
    }

    private static void EncodeEntity(SceneEntity entity, Span<byte> destination)
    {
        destination.Clear();
        if (entity.RawBytes.Length == destination.Length)
            entity.RawBytes.CopyTo(destination);
        destination[0] = entity.TypeId;
        destination[1] = entity.DirectionOrFlags;
        destination[2] = entity.Width;
        destination[3] = entity.Height;
        entity.Position.Write(destination[4..8]);
    }

    private static void WriteEntity(MutableRom rom, SceneEntity entity)
    {
        rom.WriteByte(entity.RomOffset, entity.TypeId);
        rom.WriteByte(entity.RomOffset + 1, entity.DirectionOrFlags);
        rom.WriteByte(entity.RomOffset + 2, entity.Width);
        rom.WriteByte(entity.RomOffset + 3, entity.Height);
        Span<byte> pos = stackalloc byte[4];
        entity.Position.Write(pos);
        rom.WriteBytes(entity.RomOffset + 4, pos);
    }
}

public sealed class LintResult
{
    public List<string> Warnings { get; } = new();
    public List<string> Errors { get; } = new();
}

public static class SceneLint
{
    public static LintResult Validate(RomImage rom, SceneDatabase database)
    {
        var result = new LintResult();
        if (!database.Profile.Matches(rom))
            result.Errors.Add("ROM does not match the writable US 1.0 profile.");

        foreach (var scene in database.Scenes)
        {
            if (scene.HeaderOffset < 0 || !rom.IsRangeValid(scene.HeaderOffset, 12))
                result.Errors.Add($"Scene {scene.MapId} has an invalid header pointer.");

            foreach (var entity in scene.AllEntities)
            {
                if (entity.RomOffset >= 0 && entity.RawBytes.Length > 0 &&
                    !rom.IsRangeValid(entity.RomOffset, entity.RawBytes.Length))
                    result.Errors.Add($"Entity {entity.DisplayName} points outside the ROM.");
                if (entity.Width > 64 || entity.Height > 64)
                    result.Warnings.Add($"Entity {entity.DisplayName} has unusual bounds {entity.Width}x{entity.Height}.");
            }

            foreach (var station in scene.Groups.SelectMany(g => g.Sectors).SelectMany(s => s.Stations))
            {
                if (station.Commands.Count == 0)
                {
                    result.Warnings.Add($"Station '{station.Name}' has no commands.");
                    continue;
                }
                var last = station.Commands[^1].Op;
                if (!ScriptOpcodeNames.TerminatorOps.Contains(last) && last != 0xF4)
                    result.Warnings.Add($"Station '{station.Name}' does not end with RET/HALT/END_DELETE.");
            }
        }

        return result;
    }
}
