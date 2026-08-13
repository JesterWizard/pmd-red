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
        string outputPath,
        Charmap? charmap = null,
        RuntimeConfigState? runtimeConfig = null,
        RomImage? cPatchHost = null,
        RomImage? workingImage = null)
    {
        var report = new RomBuildReport();
        var needsCPatches = runtimeConfig is not null &&
            (runtimeConfig.IsDirty || RuntimeConfigSchema.Fields.Any(f => RuntimeConfigEditing.IsInstalled(runtimeConfig, f.Id)));

        // Retail baserom: apply the feature bundle shipped with RescueTemple (decomp code),
        // then write the user's C Patch selections. End users never need a decomp repo ROM.
        if (needsCPatches && source.Info.IsKnownRetailRom)
        {
            cPatchHost ??= CPatchFeaturePayload.TryApplyToRetail(source);
            if (cPatchHost is null)
            {
                report.Errors.Add(
                    "This RescueTemple build is missing the C Patch feature bundle. Reinstall/update the editor — you only need baserom.gba.");
                return report;
            }

            report.Changes.Add("Applied bundled decomp features to retail baserom with your C Patch selections.");

            var hostRom = MutableRom.From(cPatchHost);
            if (!runtimeConfig!.HasRomBacking ||
                runtimeConfig.RomOffset >= cPatchHost.Length)
            {
                var bundle = CPatchFeaturePayload.TryLoadBundle();
                RuntimeConfigState rebound;
                if (bundle is not null)
                    rebound = bundle.LoadConfig(cPatchHost);
                else
                    rebound = RuntimeConfigCodec.TryLoad(cPatchHost);

                if (!rebound.HasRomBacking)
                {
                    report.Errors.Add("Bundled feature image is missing gRuntimeConfigRom.");
                    return report;
                }

                var values = new byte[RuntimeConfigSchema.ByteLength];
                runtimeConfig.CopyValuesTo(values);
                rebound.RestoreValues(values);
                runtimeConfig = rebound;
            }

            WriteRuntimeConfig(hostRom, runtimeConfig, report);
            if (!report.Success)
                return report;

            Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(outputPath))!);
            hostRom.Save(outputPath);
            report.Changes.Add($"Wrote playable ROM {outputPath}");
            return report;
        }

        // Explicit feature host (tests / non-retail stand-in).
        if (needsCPatches && cPatchHost is not null &&
            !string.Equals(cPatchHost.Sha1, source.Sha1, StringComparison.OrdinalIgnoreCase))
        {
            report.Changes.Add("Applied bundled decomp features with your C Patch selections.");
            var hostRom = MutableRom.From(cPatchHost);
            WriteRuntimeConfig(hostRom, runtimeConfig, report);
            if (!report.Success)
                return report;
            Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(outputPath))!);
            hostRom.Save(outputPath);
            report.Changes.Add($"Wrote playable ROM {outputPath}");
            return report;
        }

        var profile = RomProfile.TryMatch(source);
        var runtimeOnly = profile is null && runtimeConfig is not null;
        if (profile is null && !runtimeOnly)
        {
            report.Errors.Add(
                "ROM writes require the known US 1.0 baserom, or a custom ROM with a located .runtime_config section.");
            return report;
        }

        if (!string.Equals(project.BaseRomSha1, source.Sha1, StringComparison.OrdinalIgnoreCase))
            report.Warnings.Add("Project base ROM SHA-1 does not match the open ROM.");

        var rom = MutableRom.From(workingImage ?? source);

        if (profile is not null)
        {
            var lint = SceneLint.Validate(source, database);
            report.Warnings.AddRange(lint.Warnings);
            report.Errors.AddRange(lint.Errors);
            if (!report.Success)
                return report;

            WriteDirtyDialogue(rom, database, project, report, charmap);

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

                        try
                        {
                            if (sector.StationsListDirty)
                                WriteStationList(rom, sector, report, clearDirty: true);
                            else
                            {
                                foreach (var station in sector.Stations)
                                {
                                    if (station.ScriptOffset < 0)
                                        continue;
                                    var encoded = ScriptCodec.Encode(station.Commands);
                                    if (encoded.Length == 0 && station.ScriptCapacity == 0)
                                        continue;
                                    WriteStationScript(rom, station, report);
                                }
                            }

                            WriteEntityScripts(rom, sector, report, clearDirty: true);
                        }
                        catch (Exception exception)
                        {
                            report.Errors.Add($"Sector {sector.Group}/{sector.Sector} stations: {exception.Message}");
                        }
                    }
                }
            }
        }
        else
        {
            report.Warnings.Add("Custom ROM: exporting RuntimeConfig only (scene edits are skipped).");
        }

        try
        {
            WriteRuntimeConfig(rom, runtimeConfig, report);
        }
        catch (Exception exception)
        {
            report.Errors.Add($"RuntimeConfig: {exception.Message}");
        }

        if (!report.Success)
            return report;

        Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(outputPath))!);
        rom.Save(outputPath);
        report.Changes.Add($"Wrote {outputPath}");

        if (profile is not null)
        {
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
        }

        return report;
    }

    /// <summary>
    /// Patches dialogue, station scripts, and RuntimeConfig into a mutable ROM for Scene Play.
    /// Does not write entity lists or save a file.
    /// </summary>
    public static void WriteWorkingCopy(
        MutableRom rom,
        SceneDatabase database,
        RomBuildReport report,
        Charmap? charmap = null,
        RuntimeConfigState? runtimeConfig = null)
    {
        WriteDirtyDialogue(rom, database, project: null, report, charmap);
        foreach (var scene in database.Scenes)
        {
            foreach (var group in scene.Groups)
            {
                foreach (var sector in group.Sectors)
                {
                    try
                    {
                        if (sector.StationsListDirty)
                        {
                            // Keep dirty so each WorkingRom sync (from source) rewrites new stations.
                            WriteStationList(rom, sector, report, clearDirty: false);
                        }
                        else
                        {
                            foreach (var station in sector.Stations)
                            {
                                if (station.ScriptOffset < 0)
                                    continue;
                                var encoded = ScriptCodec.Encode(station.Commands);
                                if (encoded.Length == 0 && station.ScriptCapacity == 0)
                                    continue;
                                WriteStationScript(rom, station, report);
                            }
                        }

                        WriteEntityScripts(rom, sector, report, clearDirty: false);
                    }
                    catch (Exception exception)
                    {
                        report.Errors.Add($"Station list g{sector.Group}/s{sector.Sector}: {exception.Message}");
                    }
                }
            }
        }

        try
        {
            WriteRuntimeConfig(rom, runtimeConfig, report);
        }
        catch (Exception exception)
        {
            report.Errors.Add($"RuntimeConfig: {exception.Message}");
        }
    }

    public static void WriteRuntimeConfig(
        MutableRom rom,
        RuntimeConfigState? runtimeConfig,
        RomBuildReport report)
    {
        if (runtimeConfig is null)
            return;
        RuntimeConfigInstaller.WriteEnsured(rom, runtimeConfig, report);
    }

    private static void WriteDirtyDialogue(
        MutableRom rom,
        SceneDatabase database,
        ProjectDocument? project,
        RomBuildReport report,
        Charmap? charmap = null)
    {
        var commands = DialogueRelocation.AllCommands(database).ToList();
        foreach (var (oldKey, dialogue) in database.DialogueByOffset.ToList())
        {
            var edit = project?.Edits.LastOrDefault(item =>
                item.Kind == "dialogue.text" &&
                item.Target.Equals($"0x{dialogue.Offset:X}", StringComparison.OrdinalIgnoreCase));
            if (edit is not null && edit.Values.TryGetValue("text", out var text))
                dialogue.Text = text;
            if (!dialogue.Dirty && edit is null && dialogue.Offset >= 0)
                continue;

            try
            {
                var oldOffset = dialogue.Offset;
                var result = DialogueRelocation.Write(rom, dialogue, commands, charmap: charmap);
                if (result.Offset != oldKey)
                {
                    database.DialogueByOffset.Remove(oldKey);
                    database.DialogueByOffset[result.Offset] = dialogue;
                }

                report.Changes.Add(result.Kind == "relocated"
                    ? $"Dialogue relocated 0x{oldOffset:X} -> 0x{result.Offset:X}"
                    : $"Dialogue @ 0x{result.Offset:X}");
            }
            catch (Exception exception)
            {
                report.Errors.Add($"Dialogue 0x{dialogue.Offset:X}: {exception.Message}");
            }
        }
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

    private static void WriteStationList(
        MutableRom rom,
        SceneSector sector,
        RomBuildReport report,
        bool clearDirty)
    {
        if (sector.RomOffset < 0)
            throw new InvalidOperationException("Sector has no ROM offset.");
        if (sector.Stations.Count > SceneStations.MaxPerSector)
        {
            throw new InvalidOperationException(
                $"Sector g{sector.Group}/s{sector.Sector} exceeds {SceneStations.MaxPerSector} stations.");
        }

        foreach (var station in sector.Stations)
        {
            EnsureStationName(rom, station, report);
            // Allocate/write script before ScriptRef so zeroed pointer fields are not
            // mistaken for free space by FreeSpaceAllocator.
            WriteStationScript(rom, station, report);
            EnsureStationScriptRef(rom, station, report);
        }

        var count = sector.Stations.Count;
        var table = 0;
        if (count > 0)
        {
            table = FreeSpaceAllocator.FindFreeSpace(rom, count * 4);
            for (var i = 0; i < count; i++)
                rom.WritePointer(table + i * 4, sector.Stations[i].RomOffset);
        }

        rom.WriteInt32(sector.RomOffset + 32, count);
        if (count == 0)
            rom.WriteUInt32(sector.RomOffset + 36, 0);
        else
            rom.WritePointer(sector.RomOffset + 36, table);

        sector.StationListOffset = count == 0 ? -1 : table;
        sector.HasStation = count > 0;
        if (clearDirty)
            sector.StationsListDirty = false;
        report.Changes.Add($"Station list g{sector.Group}/s{sector.Sector} -> 0x{table:X} ({count})");
    }

    private static void EnsureStationName(MutableRom rom, ScriptRefData station, RomBuildReport report)
    {
        if (string.IsNullOrEmpty(station.Name))
            return;

        var nameBytes = System.Text.Encoding.ASCII.GetBytes(station.Name + "\0");
        if (station.NameOffset < 0)
        {
            station.NameOffset = FreeSpaceAllocator.FindFreeSpace(rom, nameBytes.Length);
            report.Changes.Add($"Allocated station name '{station.Name}' @ 0x{station.NameOffset:X}");
        }

        if (rom.IsRangeValid(station.NameOffset, nameBytes.Length))
            rom.WriteBytes(station.NameOffset, nameBytes);
    }

    private static void EnsureStationScriptRef(MutableRom rom, ScriptRefData station, RomBuildReport report)
    {
        if (station.RomOffset < 0)
        {
            station.RomOffset = FreeSpaceAllocator.FindFreeSpace(rom, ScriptRefData.Size);
            report.Changes.Add($"Allocated ScriptRef '{station.Name}' @ 0x{station.RomOffset:X}");
        }

        rom.WriteInt16(station.RomOffset, station.Id);
        rom.WriteInt16(station.RomOffset + 2, station.Type);
        if (station.NameOffset >= 0)
            rom.WritePointer(station.RomOffset + 4, station.NameOffset);
        else
            rom.WriteUInt32(station.RomOffset + 4, 0);
        if (station.ScriptOffset >= 0)
            rom.WritePointer(station.RomOffset + 8, station.ScriptOffset);
        else
            rom.WriteUInt32(station.RomOffset + 8, 0);
    }

    private static void WriteEntityScripts(
        MutableRom rom,
        SceneSector sector,
        RomBuildReport report,
        bool clearDirty)
    {
        foreach (var entity in sector.Lives.Concat(sector.Objects).Concat(sector.Effects))
        {
            for (var slot = 0; slot < entity.Scripts.Count; slot++)
            {
                var script = entity.Scripts[slot];
                if (!script.Dirty && script.Offset < 0)
                    continue;
                if (!script.Dirty && script.Commands.Count == 0)
                    continue;
                // Always rewrite dirty slots; also rewrite when offset exists and commands present
                // for working-copy sync of edited entity dialogue.
                if (!script.Dirty)
                    continue;

                try
                {
                    WriteEntityScriptSlot(rom, entity, slot, script, report);
                    if (clearDirty)
                        script.Dirty = false;
                }
                catch (Exception exception)
                {
                    report.Errors.Add(
                        $"{entity.Kind} g{entity.Group}/s{entity.Sector}.{entity.Index} dlg{slot}: {exception.Message}");
                }
            }
        }

        foreach (var entity in sector.Events)
        {
            if (entity.EventScript is not { } eventScript)
                continue;
            // Event scripts reuse station writer via ScriptRef fields.
            if (eventScript.ScriptOffset < 0)
                continue;
            try
            {
                WriteStationScript(rom, eventScript, report);
            }
            catch (Exception exception)
            {
                report.Errors.Add(
                    $"Event g{entity.Group}/s{entity.Sector}.{entity.Index}: {exception.Message}");
            }
        }
    }

    private static void WriteEntityScriptSlot(
        MutableRom rom,
        SceneEntity entity,
        int slot,
        EntityScriptSlot script,
        RomBuildReport report)
    {
        var encoded = ScriptCodec.Encode(script.Commands);
        var capacity = script.Capacity > 0 ? script.Capacity : encoded.Length;
        if (encoded.Length <= capacity && script.Offset >= 0)
        {
            if (encoded.Length > 0)
                rom.WriteBytes(script.Offset, encoded);
            if (encoded.Length < capacity)
                rom.Fill(script.Offset + encoded.Length, capacity - encoded.Length, 0x00);
            report.Changes.Add(
                $"{entity.Kind} g{entity.Group}/s{entity.Sector}.{entity.Index} dlg{slot} @ 0x{script.Offset:X} (in-place)");
            return;
        }

        var free = FreeSpaceAllocator.FindFreeSpace(rom, Math.Max(encoded.Length, 1));
        if (encoded.Length > 0)
            rom.WriteBytes(free, encoded);
        script.Offset = free;
        script.Capacity = encoded.Length;
        if (slot < entity.ScriptOffsets.Length)
            entity.ScriptOffsets[slot] = free;
        if (entity.RomOffset >= 0)
        {
            var pointerField = entity.Kind switch
            {
                SceneEntityKind.Live or SceneEntityKind.Object => entity.RomOffset + 8 + slot * 4,
                SceneEntityKind.Effect => entity.RomOffset + 8,
                _ => -1,
            };
            if (pointerField >= 0)
                rom.WritePointer(pointerField, free);
        }

        report.Changes.Add(
            $"{entity.Kind} g{entity.Group}/s{entity.Sector}.{entity.Index} dlg{slot} relocated -> 0x{free:X}");
    }

    private static void WriteStationScript(MutableRom rom, ScriptRefData station, RomBuildReport report)
    {
        var encoded = ScriptCodec.Encode(station.Commands);
        var capacity = station.ScriptCapacity > 0
            ? station.ScriptCapacity
            : encoded.Length;

        if (encoded.Length <= capacity && station.ScriptOffset >= 0)
        {
            if (encoded.Length > 0)
                rom.WriteBytes(station.ScriptOffset, encoded);
            if (encoded.Length < capacity)
                rom.Fill(station.ScriptOffset + encoded.Length, capacity - encoded.Length, 0x00);
            if (station.RomOffset >= 0)
                rom.WritePointer(station.RomOffset + 8, station.ScriptOffset);
            report.Changes.Add($"Script '{station.Name}' @ 0x{station.ScriptOffset:X} (in-place)");
        }
        else
        {
            var free = FreeSpaceAllocator.FindFreeSpace(rom, Math.Max(encoded.Length, 1));
            if (encoded.Length > 0)
                rom.WriteBytes(free, encoded);
            if (station.RomOffset >= 0)
                rom.WritePointer(station.RomOffset + 8, free);
            station.ScriptOffset = free;
            station.ScriptCapacity = encoded.Length;
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
