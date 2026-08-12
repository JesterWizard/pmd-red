namespace RescueEditor.Core;

public readonly record struct CompactPos(byte XTiles, byte YTiles, byte XFlags, byte YFlags)
{
    public const byte FlagHalfTile = 0x2;
    public const byte FlagCurrent = 0x4;

    public int PixelX => XTiles * 8 + ((XFlags & FlagHalfTile) != 0 ? 4 : 0);
    public int PixelY => YTiles * 8 + ((YFlags & FlagHalfTile) != 0 ? 4 : 0);

    public static CompactPos Read(RomImage rom, int offset) => new(
        rom.ReadByte(offset),
        rom.ReadByte(offset + 1),
        rom.ReadByte(offset + 2),
        rom.ReadByte(offset + 3));

    public void Write(Span<byte> destination)
    {
        destination[0] = XTiles;
        destination[1] = YTiles;
        destination[2] = XFlags;
        destination[3] = YFlags;
    }
}

public readonly record struct RomPointer(uint Value)
{
    public static RomPointer FromOffset(int offset) => new(RomImage.RomVirtualAddress + (uint)offset);
    public int ToOffset() => Value >= RomImage.RomVirtualAddress
        ? (int)(Value - RomImage.RomVirtualAddress)
        : -1;
    public bool IsNull => Value == 0;
    public override string ToString() => $"0x{Value:X8}";
}

public enum SceneEntityKind
{
    Live,
    Object,
    Effect,
    Event,
}

public sealed class ScriptCommandData
{
    public const int Size = 16;

    public byte Op { get; set; }
    public byte ArgByte { get; set; }
    public short ArgShort { get; set; }
    public int Arg1 { get; set; }
    public int Arg2 { get; set; }
    public uint ArgPtr { get; set; }
    public int RomOffset { get; set; } = -1;

    public static ScriptCommandData Read(RomImage rom, int offset) => new()
    {
        Op = rom.ReadByte(offset),
        ArgByte = rom.ReadByte(offset + 1),
        ArgShort = rom.ReadInt16(offset + 2),
        Arg1 = rom.ReadInt32(offset + 4),
        Arg2 = rom.ReadInt32(offset + 8),
        ArgPtr = rom.ReadUInt32(offset + 12),
        RomOffset = offset,
    };

    public void Write(Span<byte> destination)
    {
        destination[0] = Op;
        destination[1] = ArgByte;
        BitConverter.TryWriteBytes(destination[2..], ArgShort);
        BitConverter.TryWriteBytes(destination[4..], Arg1);
        BitConverter.TryWriteBytes(destination[8..], Arg2);
        BitConverter.TryWriteBytes(destination[12..], ArgPtr);
    }

    public byte[] ToBytes()
    {
        var bytes = new byte[Size];
        Write(bytes);
        return bytes;
    }
}

public sealed class ScriptRefData
{
    public const int Size = 12;

    public short Id { get; set; }
    public short Type { get; set; }
    public string Name { get; set; } = string.Empty;
    public int NameOffset { get; set; } = -1;
    public int ScriptOffset { get; set; } = -1;
    public int ScriptCapacity { get; set; }
    public int RomOffset { get; set; } = -1;
    public List<ScriptCommandData> Commands { get; set; } = new();

    public static ScriptRefData Read(RomImage rom, int offset, bool loadCommands = false)
    {
        var namePtr = rom.ReadUInt32(offset + 4);
        var scriptPtr = rom.ReadUInt32(offset + 8);
        var nameOffset = rom.PointerToOffset(namePtr);
        var scriptOffset = rom.PointerToOffset(scriptPtr);
        var data = new ScriptRefData
        {
            Id = rom.ReadInt16(offset),
            Type = rom.ReadInt16(offset + 2),
            NameOffset = nameOffset,
            ScriptOffset = scriptOffset,
            RomOffset = offset,
            Name = nameOffset >= 0 ? rom.ReadAscii(nameOffset, 64) : string.Empty,
        };
        if (loadCommands && scriptOffset >= 0)
        {
            data.Commands = ScriptCodec.ReadScript(rom, scriptOffset);
            data.ScriptCapacity = data.Commands.Count * ScriptCommandData.Size;
        }
        return data;
    }
}

public sealed class EntityScriptSlot
{
    public int Offset { get; set; } = -1;
    public int Capacity { get; set; }
    public List<ScriptCommandData> Commands { get; set; } = new();
    /// <summary>True when commands changed and the ROM bytecode needs a rewrite.</summary>
    public bool Dirty { get; set; }
}

public sealed class SceneEntity
{
    public required SceneEntityKind Kind { get; init; }
    public byte TypeId { get; set; }
    public byte DirectionOrFlags { get; set; }
    public byte Width { get; set; }
    public byte Height { get; set; }
    public CompactPos Position { get; set; }
    public int RomOffset { get; set; } = -1;
    public int Group { get; set; }
    public int Sector { get; set; }
    public int Index { get; set; }
    public int[] ScriptOffsets { get; set; } = [];
    /// <summary>Loaded script bytecode for each lives/objects/effects dlg slot (parallel to ScriptOffsets).</summary>
    public List<EntityScriptSlot> Scripts { get; } = new();
    public int EventScriptRefOffset { get; set; } = -1;
    /// <summary>Loaded ScriptRef for event entities (when EventScriptRefOffset is valid).</summary>
    public ScriptRefData? EventScript { get; set; }
    public string DisplayName { get; set; } = string.Empty;
    public byte[] RawBytes { get; set; } = [];
    /// <summary>True when this entity was added/moved in a rewritten list and needs ROM allocation.</summary>
    public bool NeedsListRewrite { get; set; }

    public int PixelX => Position.PixelX;
    public int PixelY => Position.PixelY;

    public int EntrySize => Kind switch
    {
        SceneEntityKind.Live or SceneEntityKind.Object => 24,
        _ => 12,
    };

    public static int EntrySizeFor(SceneEntityKind kind) => kind switch
    {
        SceneEntityKind.Live or SceneEntityKind.Object => 24,
        _ => 12,
    };

    public EntityScriptSlot? ScriptSlot(int dlgIndex) =>
        dlgIndex >= 0 && dlgIndex < Scripts.Count ? Scripts[dlgIndex] : null;
}

public sealed class SceneSector
{
    public int Group { get; set; }
    public int Sector { get; set; }
    public int RomOffset { get; set; } = -1;
    public List<SceneEntity> Lives { get; } = new();
    public List<SceneEntity> Objects { get; } = new();
    public List<SceneEntity> Effects { get; } = new();
    public List<SceneEntity> Events { get; } = new();
    public List<ScriptRefData> Stations { get; } = new();
    public bool HasStation { get; set; }
    public int StationListOffset { get; set; } = -1;
    /// <summary>When true, the sector's station pointer table needs a ROM rewrite.</summary>
    public bool StationsListDirty { get; set; }
    public bool LivesListDirty { get; set; }
    public bool ObjectsListDirty { get; set; }
    public bool EffectsListDirty { get; set; }
    public bool EventsListDirty { get; set; }
    /// <summary>When true, this sector blob itself was allocated in free space.</summary>
    public bool SectorBlobDirty { get; set; }

    public List<SceneEntity> ListFor(SceneEntityKind kind) => kind switch
    {
        SceneEntityKind.Live => Lives,
        SceneEntityKind.Object => Objects,
        SceneEntityKind.Effect => Effects,
        SceneEntityKind.Event => Events,
        _ => Lives,
    };

    public bool IsListDirty(SceneEntityKind kind) => kind switch
    {
        SceneEntityKind.Live => LivesListDirty,
        SceneEntityKind.Object => ObjectsListDirty,
        SceneEntityKind.Effect => EffectsListDirty,
        SceneEntityKind.Event => EventsListDirty,
        _ => false,
    };

    public void SetListDirty(SceneEntityKind kind, bool dirty)
    {
        switch (kind)
        {
            case SceneEntityKind.Live: LivesListDirty = dirty; break;
            case SceneEntityKind.Object: ObjectsListDirty = dirty; break;
            case SceneEntityKind.Effect: EffectsListDirty = dirty; break;
            case SceneEntityKind.Event: EventsListDirty = dirty; break;
        }
    }

    public int GetListCountOffset(SceneEntityKind kind) => kind switch
    {
        SceneEntityKind.Live => RomOffset,
        SceneEntityKind.Object => RomOffset + 8,
        SceneEntityKind.Effect => RomOffset + 16,
        SceneEntityKind.Event => RomOffset + 24,
        _ => RomOffset,
    };
}

public sealed class SceneGroup
{
    public int Index { get; set; }
    public int RomOffset { get; set; } = -1;
    public List<SceneSector> Sectors { get; } = new();
    public bool SectorListDirty { get; set; }
}

public sealed class SceneLink
{
    public CompactPos Position { get; set; }
    public byte Width { get; set; }
    public byte Height { get; set; }
    public byte Ret { get; set; }
    public byte Unk7 { get; set; }
    public int RomOffset { get; set; } = -1;
}

public sealed class GroundMapDefinition
{
    public int MapId { get; set; }
    public string Name { get; set; } = string.Empty;
    public short RenderMode { get; set; }
    public short GroundPlaceId { get; set; }
    public short MapFileTableId { get; set; }
    public short Unk6 { get; set; }
    public string Label { get; set; } = string.Empty;
    public string? BplName { get; set; }
    public string? BpcName { get; set; }
    public string? BmaName { get; set; }
    public string?[] BpaNames { get; set; } = new string?[4];
    public AssetDescriptor? GroundMapAsset { get; set; }
    public int ScriptHeaderOffset { get; set; } = -1;
}

public sealed class Scene
{
    public int MapId { get; set; }
    public string Name { get; set; } = string.Empty;
    public GroundMapDefinition? Map { get; set; }
    public int HeaderOffset { get; set; } = -1;
    public List<SceneGroup> Groups { get; } = new();
    public List<SceneLink> Links { get; } = new();
    public List<string> Diagnostics { get; } = new();
    /// <summary>Last applied script-editor source, including comments. Format prefers this when set.</summary>
    public string? ScriptSourceText { get; set; }

    public IEnumerable<SceneEntity> AllEntities =>
        Groups.SelectMany(group => group.Sectors)
            .SelectMany(sector => sector.Lives
                .Concat(sector.Objects)
                .Concat(sector.Effects)
                .Concat(sector.Events));
}

public sealed class DialogueString
{
    public int Offset { get; set; }
    public int Size { get; set; }
    public string Text { get; set; } = string.Empty;
    public List<int> ReferencedByCommands { get; } = new();
    /// <summary>True when text changed and the ROM copy needs a rewrite (in-place or relocated).</summary>
    public bool Dirty { get; set; }
}

public sealed class SceneDatabase
{
    public RomProfile Profile { get; init; } = RomProfile.Us10;
    public List<GroundMapDefinition> Maps { get; } = new();
    public List<Scene> Scenes { get; } = new();
    public List<ScriptRefData> FunctionScripts { get; } = new();
    public Dictionary<int, DialogueString> DialogueByOffset { get; } = new();
    public List<string> Diagnostics { get; } = new();

    public Scene? FindScene(int mapId) => Scenes.FirstOrDefault(scene => scene.MapId == mapId);
    public GroundMapDefinition? FindMap(int mapId) => Maps.FirstOrDefault(map => map.MapId == mapId);
}
