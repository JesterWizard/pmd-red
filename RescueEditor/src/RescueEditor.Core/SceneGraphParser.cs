namespace RescueEditor.Core;

public static class SceneGraphParser
{
    private const int MapFilesEntrySize = 0x1C;
    private const int ConversionEntrySize = 0xC;
    private const int LivesEntrySize = 24;
    private const int ObjectEntrySize = 24;
    private const int EffectEntrySize = 12;
    private const int EventEntrySize = 12;
    private const int SectorSize = 40;
    private const int GroupSize = 8;
    private const int HeaderSize = 12;
    private const int LinkSize = 8;

    public static SceneDatabase Parse(
        RomImage rom,
        RomProfile? profile = null,
        AssetCatalog? catalog = null,
        Charmap? charmap = null,
        IProgress<string>? progress = null)
    {
        void Report(string message) => progress?.Report(message);

        profile ??= RomProfile.TryMatch(rom) ?? RomProfile.Us10;
        var database = new SceneDatabase { Profile = profile };
        if (!profile.Matches(rom))
            database.Diagnostics.Add($"ROM SHA-1 {rom.Sha1} does not match profile '{profile.Name}'. Scene parsing may be incomplete.");

        Report("Indexing map file table…");
        var mapFiles = ReadMapFiles(rom, profile);
        Report("Indexing map conversion table…");
        var maps = ReadMaps(rom, profile, mapFiles, catalog);
        database.Maps.AddRange(maps);

        Report("Indexing shared function scripts…");
        database.FunctionScripts.AddRange(ReadFunctionScripts(rom, profile));

        Report("Parsing scene headers…");
        for (var mapId = 0; mapId < profile.MapCount; mapId++)
        {
            var map = maps[mapId];
            var headerOffset = ReadMapScriptHeaderOffset(rom, profile, mapId);
            map.ScriptHeaderOffset = headerOffset;
            if (headerOffset < 0)
            {
                if (mapId == profile.MapCount - 1)
                    database.Diagnostics.Add($"Map {mapId} ({map.Name}) has no script header in this ROM.");
                continue;
            }

            try
            {
                var scene = ParseScene(rom, map, headerOffset, charmap);
                database.Scenes.Add(scene);
                CollectDialogue(rom, scene, database, charmap);
            }
            catch (Exception exception) when (exception is InvalidDataException or ArgumentOutOfRangeException)
            {
                database.Diagnostics.Add($"Map {mapId} ({map.Name}): {exception.Message}");
            }
        }

        Report($"Scene graph ready — {database.Scenes.Count} scenes, {database.FunctionScripts.Count} function scripts.");
        return database;
    }

    private static List<(string? Bpl, string? Bpc, string? Bma, string?[] Bpas)> ReadMapFiles(
        RomImage rom, RomProfile profile)
    {
        var result = new List<(string?, string?, string?, string?[])>(profile.MapFileCount);
        var table = profile["gMapFilesTable"];
        for (var i = 0; i < profile.MapFileCount; i++)
        {
            var offset = table + i * MapFilesEntrySize;
            string? ReadName(int field)
            {
                var pointer = rom.ReadUInt32(offset + field * 4);
                if (pointer == 0 || !rom.TryPointerToOffset(pointer, out var nameOffset))
                    return null;
                var name = rom.ReadAscii(nameOffset, 32);
                return string.IsNullOrWhiteSpace(name) ? null : name;
            }

            var bpas = new string?[4];
            for (var slot = 0; slot < 4; slot++)
                bpas[slot] = ReadName(3 + slot);
            result.Add((ReadName(0), ReadName(1), ReadName(2), bpas));
        }
        return result;
    }

    private static List<GroundMapDefinition> ReadMaps(
        RomImage rom,
        RomProfile profile,
        IReadOnlyList<(string? Bpl, string? Bpc, string? Bma, string?[] Bpas)> mapFiles,
        AssetCatalog? catalog)
    {
        var maps = new List<GroundMapDefinition>(profile.MapCount);
        var table = profile["gGroundMapConversionTable"];
        var groundAssets = catalog?.ForCategory(AssetCategory.GroundMaps)
            .Where(asset => asset.Metadata.TryGetValue("romName", out _))
            .ToDictionary(
                asset => asset.Metadata["romName"],
                asset => asset,
                StringComparer.Ordinal)
            ?? new Dictionary<string, AssetDescriptor>(StringComparer.Ordinal);

        for (var mapId = 0; mapId < profile.MapCount; mapId++)
        {
            var offset = table + mapId * ConversionEntrySize;
            var fileId = rom.ReadInt16(offset + 4);
            var labelPtr = rom.ReadUInt32(offset + 8);
            var label = rom.TryPointerToOffset(labelPtr, out var labelOffset)
                ? rom.ReadAscii(labelOffset, 64)
                : string.Empty;
            var files = fileId >= 0 && fileId < mapFiles.Count ? mapFiles[fileId] : default;
            AssetDescriptor? asset = null;
            if (!string.IsNullOrEmpty(files.Bma))
                groundAssets.TryGetValue(files.Bma, out asset);

            var display = !string.IsNullOrEmpty(files.Bma)
                ? GroundMapNames.GetDisplayName(files.Bma!) ?? files.Bma!
                : $"Map {mapId}";

            maps.Add(new GroundMapDefinition
            {
                MapId = mapId,
                Name = display,
                RenderMode = rom.ReadInt16(offset),
                GroundPlaceId = rom.ReadInt16(offset + 2),
                MapFileTableId = fileId,
                Unk6 = rom.ReadInt16(offset + 6),
                Label = label,
                BplName = files.Bpl,
                BpcName = files.Bpc,
                BmaName = files.Bma,
                BpaNames = files.Bpas ?? new string?[4],
                GroundMapAsset = asset,
            });
        }
        return maps;
    }

    private static int ReadMapScriptHeaderOffset(RomImage rom, RomProfile profile, int mapId)
    {
        var pointer = rom.ReadUInt32(profile["gMapScriptTable"] + mapId * 4);
        return rom.PointerToOffset(pointer);
    }

    private static List<ScriptRefData> ReadFunctionScripts(RomImage rom, RomProfile profile)
    {
        var table = profile["gFunctionScriptTable"];
        var result = new List<ScriptRefData>(profile.FunctionScriptCount);
        for (var i = 0; i < profile.FunctionScriptCount; i++)
            result.Add(ScriptRefData.Read(rom, table + i * ScriptRefData.Size, loadCommands: false));
        return result;
    }

    public static Scene ParseScene(RomImage rom, GroundMapDefinition map, int headerOffset, Charmap? charmap)
    {
        if (!rom.IsRangeValid(headerOffset, HeaderSize))
            throw new InvalidDataException($"Scene header at 0x{headerOffset:X} is out of range.");

        var nGroups = rom.ReadInt32(headerOffset);
        var groupsOffset = rom.ReadPointerOffset(headerOffset + 4);
        var linksOffset = rom.ReadPointerOffset(headerOffset + 8);
        if (nGroups is < 0 or > 256)
            throw new InvalidDataException($"Scene header reports invalid group count {nGroups}.");

        var scene = new Scene
        {
            MapId = map.MapId,
            Name = map.Name,
            Map = map,
            HeaderOffset = headerOffset,
        };

        if (groupsOffset >= 0)
        {
            for (var groupIndex = 0; groupIndex < nGroups; groupIndex++)
            {
                var groupOffset = groupsOffset + groupIndex * GroupSize;
                var nSectors = rom.ReadInt32(groupOffset);
                var sectorsOffset = rom.ReadPointerOffset(groupOffset + 4);
                var group = new SceneGroup { Index = groupIndex, RomOffset = groupOffset };
                if (sectorsOffset >= 0 && nSectors is >= 0 and <= 256)
                {
                    for (var sectorIndex = 0; sectorIndex < nSectors; sectorIndex++)
                    {
                        var sectorOffset = sectorsOffset + sectorIndex * SectorSize;
                        group.Sectors.Add(ParseSector(rom, groupIndex, sectorIndex, sectorOffset));
                    }
                }
                scene.Groups.Add(group);
            }
        }

        if (linksOffset >= 0)
        {
            // Links are a flat array terminated implicitly by ownership; read until invalid/zero-ish run.
            // Use group count heuristic: many maps store a short list. Cap by scanning for plausible entries.
            for (var i = 0; i < 256; i++)
            {
                var linkOffset = linksOffset + i * LinkSize;
                if (!rom.IsRangeValid(linkOffset, LinkSize))
                    break;
                var pos = CompactPos.Read(rom, linkOffset);
                var width = rom.ReadByte(linkOffset + 4);
                var height = rom.ReadByte(linkOffset + 5);
                var ret = rom.ReadByte(linkOffset + 6);
                var unk7 = rom.ReadByte(linkOffset + 7);
                // Stop on clearly empty padding after at least one link, or absurd dimensions.
                if (i > 0 && pos.XTiles == 0 && pos.YTiles == 0 && width == 0 && height == 0 && ret == 0 && unk7 == 0)
                    break;
                if (width > 64 || height > 64)
                    break;
                scene.Links.Add(new SceneLink
                {
                    Position = pos,
                    Width = width,
                    Height = height,
                    Ret = ret,
                    Unk7 = unk7,
                    RomOffset = linkOffset,
                });
            }
        }

        return scene;
    }

    private static SceneSector ParseSector(RomImage rom, int group, int sectorIndex, int offset)
    {
        var sector = new SceneSector
        {
            Group = group,
            Sector = sectorIndex,
            RomOffset = offset,
        };

        ParseEntityList(rom, offset, LivesEntrySize, SceneEntityKind.Live, sector.Lives, group, sectorIndex);
        ParseEntityList(rom, offset + 8, ObjectEntrySize, SceneEntityKind.Object, sector.Objects, group, sectorIndex);
        ParseEntityList(rom, offset + 16, EffectEntrySize, SceneEntityKind.Effect, sector.Effects, group, sectorIndex);
        ParseEntityList(rom, offset + 24, EventEntrySize, SceneEntityKind.Event, sector.Events, group, sectorIndex);

        var stationCount = rom.ReadInt32(offset + 32);
        sector.HasStation = stationCount > 0;
        sector.StationListOffset = rom.ReadPointerOffset(offset + 36);
        if (stationCount is > 0 and <= 64 && sector.StationListOffset >= 0)
        {
            // hasStation is a count; station points at ScriptRef* const[count].
            for (var i = 0; i < stationCount; i++)
            {
                var ptrOffset = sector.StationListOffset + i * 4;
                if (!rom.IsRangeValid(ptrOffset, 4))
                    break;
                var scriptRefPtr = rom.ReadUInt32(ptrOffset);
                if (scriptRefPtr == 0 || !rom.TryPointerToOffset(scriptRefPtr, out var scriptRefOffset))
                    break;
                sector.Stations.Add(ScriptRefData.Read(rom, scriptRefOffset, loadCommands: true));
            }
        }

        return sector;
    }

    private static void ParseEntityList(
        RomImage rom,
        int countFieldOffset,
        int entrySize,
        SceneEntityKind kind,
        List<SceneEntity> destination,
        int group,
        int sector)
    {
        var count = rom.ReadInt32(countFieldOffset);
        var listOffset = rom.ReadPointerOffset(countFieldOffset + 4);
        if (count is <= 0 or > 256 || listOffset < 0)
            return;

        for (var i = 0; i < count; i++)
        {
            var entryOffset = listOffset + i * entrySize;
            if (!rom.IsRangeValid(entryOffset, entrySize))
                break;
            var entity = new SceneEntity
            {
                Kind = kind,
                TypeId = rom.ReadByte(entryOffset),
                DirectionOrFlags = rom.ReadByte(entryOffset + 1),
                Width = rom.ReadByte(entryOffset + 2),
                Height = rom.ReadByte(entryOffset + 3),
                Position = CompactPos.Read(rom, entryOffset + 4),
                RomOffset = entryOffset,
                Group = group,
                Sector = sector,
                Index = i,
                RawBytes = rom.Copy(entryOffset, entrySize),
                DisplayName = $"{kind} {rom.ReadByte(entryOffset)}",
            };

            if (kind is SceneEntityKind.Live or SceneEntityKind.Object)
            {
                entity.ScriptOffsets = new int[4];
                for (var slot = 0; slot < 4; slot++)
                {
                    var scriptOffset = rom.ReadPointerOffset(entryOffset + 8 + slot * 4);
                    entity.ScriptOffsets[slot] = scriptOffset;
                    if (scriptOffset >= 0)
                    {
                        var commands = ScriptCodec.ReadScript(rom, scriptOffset);
                        entity.Scripts.Add(new EntityScriptSlot
                        {
                            Offset = scriptOffset,
                            Capacity = commands.Count * ScriptCommandData.Size,
                            Commands = commands,
                        });
                    }
                    else
                    {
                        entity.Scripts.Add(new EntityScriptSlot());
                    }
                }
            }
            else if (kind == SceneEntityKind.Effect)
            {
                var scriptOffset = rom.ReadPointerOffset(entryOffset + 8);
                entity.ScriptOffsets = [scriptOffset];
                if (scriptOffset >= 0)
                {
                    var commands = ScriptCodec.ReadScript(rom, scriptOffset);
                    entity.Scripts.Add(new EntityScriptSlot
                    {
                        Offset = scriptOffset,
                        Capacity = commands.Count * ScriptCommandData.Size,
                        Commands = commands,
                    });
                }
                else
                {
                    entity.Scripts.Add(new EntityScriptSlot());
                }
            }
            else
            {
                entity.EventScriptRefOffset = rom.ReadPointerOffset(entryOffset + 8);
                if (entity.EventScriptRefOffset >= 0)
                    entity.EventScript = ScriptRefData.Read(rom, entity.EventScriptRefOffset, loadCommands: true);
            }

            destination.Add(entity);
        }
    }

    private static void CollectDialogue(RomImage rom, Scene scene, SceneDatabase database, Charmap? charmap)
    {
        foreach (var sector in scene.Groups.SelectMany(group => group.Sectors))
        {
            foreach (var station in sector.Stations)
                CollectDialogueFromCommands(rom, station.Commands, database, charmap);

            foreach (var entity in sector.Lives.Concat(sector.Objects).Concat(sector.Effects))
            {
                foreach (var slot in entity.Scripts.Where(item => item.Commands.Count > 0))
                    CollectDialogueFromCommands(rom, slot.Commands, database, charmap);
            }

            foreach (var entity in sector.Events)
            {
                if (entity.EventScript is { Commands.Count: > 0 } eventScript)
                    CollectDialogueFromCommands(rom, eventScript.Commands, database, charmap);
            }
        }
    }

    private static void CollectDialogueFromCommands(
        RomImage rom,
        IEnumerable<ScriptCommandData> commands,
        SceneDatabase database,
        Charmap? charmap)
    {
        foreach (var command in commands)
        {
            if (!ScriptOpcodeNames.TextPointerOps.Contains(command.Op))
                continue;
            if (!rom.TryPointerToOffset(command.ArgPtr, out var textOffset))
                continue;
            if (database.DialogueByOffset.TryGetValue(textOffset, out var existing))
            {
                if (command.RomOffset >= 0)
                    existing.ReferencedByCommands.Add(command.RomOffset);
                continue;
            }

            var length = 0;
            while (length < 768 && rom.IsRangeValid(textOffset + length, 1) && rom.ReadByte(textOffset + length) != 0)
                length++;
            var text = charmap?.Decode(rom.Slice(textOffset, length)) ?? rom.ReadAscii(textOffset, length);
            var dialogue = new DialogueString
            {
                Offset = textOffset,
                Size = length,
                Text = text,
            };
            if (command.RomOffset >= 0)
                dialogue.ReferencedByCommands.Add(command.RomOffset);
            database.DialogueByOffset[textOffset] = dialogue;
        }
    }
}
