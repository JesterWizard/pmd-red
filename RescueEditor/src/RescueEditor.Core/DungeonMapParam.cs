namespace RescueEditor.Core;

/// <summary>Retail <c>mapparam</c> SIR0: per-dungeon floor tables, properties, spawns, traps, items.</summary>
public sealed class DungeonMapParamTables
{
    public const int FloorParamSize = 16;
    public const int FloorPropertiesSize = 28;
    public const int SpawnEntrySize = 8; // SpawnPokemonData is 8 bytes on Red (6 payload + 2 pad)
    public const int TrapCount = 20;
    public const int ItemSpawnTypeCount = 4;
    public const int MaxMonsterSpawns = 32;
    public const int ItemCategoryCount = 12;
    public const int ItemIdCount = 240;
    public const int ItemSetSkipNumber = 30000;

    public required int FloorTablePointers { get; init; }
    public required int FloorProperties { get; init; }
    public required int ItemSpawnPointers { get; init; }
    public required int MonsterSpawnPointers { get; init; }
    public required int TrapSpawnPointers { get; init; }

    public static DungeonMapParamTables? TryLoad(RomImage rom)
    {
        foreach (var archive in RomArchiveParser.FindArchives(rom))
        {
            var entry = archive.Entries.FirstOrDefault(e => e.Name == "mapparam");
            if (entry is null || entry.Size < 12)
                continue;

            var dataGba = rom.ReadInt32(entry.Offset + 4);
            var dataRom = dataGba & 0x1FFFFFF;
            if (!rom.IsRangeValid(dataRom, 20))
                continue;

            var floors = rom.ReadPointerOffset(dataRom);
            var properties = rom.ReadPointerOffset(dataRom + 4);
            var items = rom.ReadPointerOffset(dataRom + 8);
            var monsters = rom.ReadPointerOffset(dataRom + 12);
            var traps = rom.ReadPointerOffset(dataRom + 16);
            if (floors < 0 || properties < 0 || items < 0 || monsters < 0 || traps < 0)
                continue;

            return new DungeonMapParamTables
            {
                FloorTablePointers = floors,
                FloorProperties = properties,
                ItemSpawnPointers = items,
                MonsterSpawnPointers = monsters,
                TrapSpawnPointers = traps,
            };
        }

        return null;
    }

    public int TryGetFloorArray(RomImage rom, int dungeonId)
    {
        if (dungeonId < 0)
            return -1;
        var ptrOff = FloorTablePointers + dungeonId * 4;
        if (!rom.IsRangeValid(ptrOff, 4))
            return -1;
        return rom.ReadPointerOffset(ptrOff);
    }

    public int CountFloors(RomImage rom, int dungeonId)
    {
        var start = TryGetFloorArray(rom, dungeonId);
        if (start < 0)
            return 0;
        var next = TryGetFloorArray(rom, dungeonId + 1);
        if (next > start)
            return Math.Max(0, (next - start) / FloorParamSize);

        var count = 0;
        while (count < 128)
        {
            var off = start + count * FloorParamSize;
            if (!rom.IsRangeValid(off, FloorParamSize))
                break;
            count++;
        }

        return count;
    }

    public DungeonFloorRecord? TryReadFloor(RomImage rom, int dungeonId, int floor)
    {
        var array = TryGetFloorArray(rom, dungeonId);
        if (array < 0 || floor < 0)
            return null;

        var paramOff = array + floor * FloorParamSize;
        if (!rom.IsRangeValid(paramOff, FloorParamSize))
            return null;

        var propertiesIndex = rom.ReadInt16(paramOff);
        var monsterTable = rom.ReadInt16(paramOff + 2);
        var trapTable = rom.ReadInt16(paramOff + 4);
        var itemTables = new int[ItemSpawnTypeCount];
        for (var i = 0; i < ItemSpawnTypeCount; i++)
            itemTables[i] = rom.ReadInt16(paramOff + 6 + i * 2);

        if (propertiesIndex < 0)
            return null;

        var propsOff = FloorProperties + propertiesIndex * FloorPropertiesSize;
        if (!rom.IsRangeValid(propsOff, FloorPropertiesSize))
            return null;

        var properties = DungeonFloorPropertiesCodec.Read(rom, propsOff);

        var monsters = ReadMonsters(rom, monsterTable);
        var traps = ReadTraps(rom, trapTable);
        var items = ReadItems(rom, itemTables[0]);
        return new DungeonFloorRecord(
            DungeonId: dungeonId,
            Floor: floor,
            PropertiesIndex: propertiesIndex,
            PropertiesOffset: propsOff,
            MonsterTable: monsterTable,
            TrapTable: trapTable,
            ItemTables: itemTables,
            Properties: properties,
            Monsters: monsters.Entries,
            MonsterListOffset: monsters.ListOffset,
            Traps: traps.Entries,
            TrapListOffset: traps.ListOffset,
            Items: items.Entries,
            ItemListOffset: items.ListOffset,
            ItemCompressedWords: items.WordCount);
    }

    private (IReadOnlyList<MonsterSpawnEntry> Entries, int ListOffset) ReadMonsters(RomImage rom, int tableIndex)
    {
        if (tableIndex < 0)
            return ([], -1);
        var listPtr = MonsterSpawnPointers + tableIndex * 4;
        if (!rom.IsRangeValid(listPtr, 4))
            return ([], -1);
        var list = rom.ReadPointerOffset(listPtr);
        if (list < 0)
            return ([], -1);

        var entries = new List<MonsterSpawnEntry>();
        for (var i = 0; i < MaxMonsterSpawns; i++)
        {
            var off = list + i * SpawnEntrySize;
            if (!rom.IsRangeValid(off, SpawnEntrySize))
                break;
            var bits = rom.ReadUInt16(off);
            var species = bits & 0x1FF;
            if (species == 0)
                break;
            var level = (bits >> 9) & 0x7F;
            var weight = rom.ReadInt16(off + 2);
            entries.Add(new MonsterSpawnEntry(species, level, weight, off));
        }

        return (entries, list);
    }

    private (IReadOnlyList<TrapSpawnEntry> Entries, int ListOffset) ReadTraps(RomImage rom, int tableIndex)
    {
        if (tableIndex < 0)
            return ([], -1);
        var listPtr = TrapSpawnPointers + tableIndex * 4;
        if (!rom.IsRangeValid(listPtr, 4))
            return ([], -1);
        var list = rom.ReadPointerOffset(listPtr);
        if (list < 0 || !rom.IsRangeValid(list, TrapCount * 2))
            return ([], -1);

        var entries = new List<TrapSpawnEntry>();
        for (var i = 0; i < TrapCount; i++)
        {
            var off = list + i * 2;
            var threshold = rom.ReadUInt16(off);
            entries.Add(new TrapSpawnEntry(i, threshold, off));
        }

        return (entries, list);
    }

    private (IReadOnlyList<ItemSpawnEntry> Entries, int ListOffset, int WordCount) ReadItems(RomImage rom, int tableIndex)
    {
        if (tableIndex < 0)
            return ([], -1, 0);
        var listPtr = ItemSpawnPointers + tableIndex * 4;
        if (!rom.IsRangeValid(listPtr, 4))
            return ([], -1, 0);
        var srcOff = rom.ReadPointerOffset(listPtr);
        if (srcOff < 0)
            return ([], -1, 0);

        var (expanded, wordCount) = DungeonSpawnCodec.DecodeItemTable(rom, srcOff);
        var entries = new List<ItemSpawnEntry>();
        for (var id = 0; id < ItemIdCount; id++)
        {
            var weight = expanded[ItemCategoryCount + id];
            if (weight != 0)
                entries.Add(new ItemSpawnEntry(id, weight, srcOff, wordCount));
        }

        return (entries, srcOff, wordCount);
    }
}

public sealed record FloorPropertiesRecord(
    int Layout,
    int RoomDensity,
    int Tileset,
    int BgMusic,
    int Weather,
    int FloorConnectivity,
    int EnemyDensity,
    int KecleonShopChance,
    int MonsterHouseChance,
    int ItemDensity,
    int TrapDensity,
    int FixedRoomNumber,
    int VisibilityRange = 0,
    bool AllowDeadEnds = false,
    int RoomFlags = 0,
    int ItemStickyChance = 0,
    int BuriedItemDensity = 0,
    int MoneyUpperBound = 0,
    int RomOffset = -1);

public sealed record MonsterSpawnEntry(int Species, int Level, int Weight, int RomOffset = -1);
public sealed record TrapSpawnEntry(int TrapId, int Threshold, int RomOffset = -1);
public sealed record ItemSpawnEntry(int ItemId, int Weight, int TableOffset = -1, int CompressedWords = 0);

public sealed record DungeonFloorRecord(
    int DungeonId,
    int Floor,
    int PropertiesIndex,
    int PropertiesOffset,
    int MonsterTable,
    int TrapTable,
    int[] ItemTables,
    FloorPropertiesRecord Properties,
    IReadOnlyList<MonsterSpawnEntry> Monsters,
    int MonsterListOffset,
    IReadOnlyList<TrapSpawnEntry> Traps,
    int TrapListOffset,
    IReadOnlyList<ItemSpawnEntry> Items,
    int ItemListOffset,
    int ItemCompressedWords);
