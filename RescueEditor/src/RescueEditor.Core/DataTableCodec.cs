using System.Globalization;

namespace RescueEditor.Core;

/// <summary>ROM locations for <c>monspara</c>, <c>wazapara</c>, and <c>itempara</c>.</summary>
public sealed class DataTableTables
{
    public const int MonsterEntrySize = 0x48;
    public const int MoveEntrySize = 0x24;
    public const int ItemEntrySize = 0x20;
    public const int LearnsetEntrySize = 8;
    public const int DefaultMonsterCount = 424; // MONSTER_MAX
    public const int DefaultMoveCount = 430; // NUM_MOVE_IDS
    public const int DefaultItemCount = 240; // NUMBER_OF_ITEM_IDS
    public const int DefaultLearnsetCount = 420; // through MONSTER_DEOXYS_SPEED

    public required int MonsterData { get; set; }
    public required int MoveData { get; set; }
    public required int LearnsetData { get; set; }
    public required int ItemData { get; set; }
    public int MonsterCount { get; set; } = DefaultMonsterCount;
    public int MoveCount { get; set; } = DefaultMoveCount;
    public int ItemCount { get; set; } = DefaultItemCount;
    public int LearnsetCount { get; set; } = DefaultLearnsetCount;

    public static DataTableTables? TryLoad(RomImage rom)
    {
        int monsters = -1, moves = -1, learnsets = -1, items = -1;
        foreach (var archive in RomArchiveParser.FindArchives(rom))
        {
            foreach (var entry in archive.Entries)
            {
                if (entry.Name == "monspara" && monsters < 0)
                    monsters = TrySir0Data(rom, entry);
                else if (entry.Name == "itempara" && items < 0)
                    items = TrySir0Data(rom, entry);
                else if (entry.Name == "wazapara" && moves < 0)
                {
                    var header = TrySir0Data(rom, entry);
                    if (header < 0 || !rom.IsRangeValid(header, 8))
                        continue;
                    moves = ReadRomPointer(rom, header);
                    learnsets = ReadRomPointer(rom, header + 4);
                }
            }
        }

        if (monsters < 0 || moves < 0 || items < 0)
            return null;

        return new DataTableTables
        {
            MonsterData = monsters,
            MoveData = moves,
            LearnsetData = learnsets,
            ItemData = items,
        };
    }

    internal static int TrySir0Data(RomImage rom, RomArchiveEntry entry)
    {
        if (entry.Size < 12 || !rom.IsRangeValid(entry.Offset, 12))
            return -1;
        var magic = rom.ReadAscii(entry.Offset, 4);
        if (magic is not ("SIR0" or "SIRO"))
            return entry.Offset;
        return ReadRomPointer(rom, entry.Offset + 4);
    }

    public static int ReadRomPointer(MutableRom rom, int offset)
    {
        if (!rom.IsRangeValid(offset, 4))
            return -1;
        var raw = rom.ReadUInt32(offset);
        if (rom.PointerToOffset(raw) is var gba && gba >= 0)
            return gba;
        var masked = (int)(raw & 0x1FFFFFF);
        return rom.IsRangeValid(masked, 1) ? masked : -1;
    }

    internal static int ReadRomPointer(RomImage rom, int offset)
    {
        if (!rom.IsRangeValid(offset, 4))
            return -1;
        var raw = rom.ReadUInt32(offset);
        if (rom.TryPointerToOffset(raw, out var gba))
            return gba;
        var masked = (int)(raw & 0x1FFFFFF);
        return rom.IsRangeValid(masked, 1) ? masked : -1;
    }
}

public sealed record LevelUpMove(int MoveId, int Level);

public sealed record MonsterTableEntry(
    int Id,
    string Name,
    string Category,
    int OverworldPalette,
    int BodySize,
    int MovementSpeed,
    int Type1,
    int Type2,
    int MovementType,
    int FriendArea,
    int Ability1,
    int Ability2,
    int ShadowSize,
    bool CanMove,
    int ChanceAsleep,
    int BaseHp,
    int ExpYield,
    int BaseAtk,
    int BaseSpAtk,
    int BaseDef,
    int BaseSpDef,
    int Weight,
    int Size,
    bool CanThrowItems,
    int EvolveFrom,
    int RecruitRate,
    IReadOnlyList<LevelUpMove> LevelUpMoves,
    IReadOnlyList<int> HmTmMoves);

public sealed record MoveTableEntry(
    int Id,
    string Name,
    string Description,
    int BasePower,
    int Type,
    int Category,
    int BasePp,
    int AiWeight,
    int Accuracy1,
    int Accuracy2,
    int AccuracyAi,
    int ChainedHits,
    int CritChance,
    bool AffectedByMagicCoat,
    bool IsSnatchable,
    bool UsesMouth,
    int RangeId);

public sealed record ItemTableEntry(
    int Id,
    string Name,
    string Description,
    uint BuyPrice,
    uint SellPrice,
    int Category,
    int Icon,
    int MoveId,
    int Order,
    int SpawnMin,
    int SpawnMax,
    int Palette,
    int ActionType);

public static class DataTableCodec
{
    public static (int MoveId, int Consumed) DecompressMoveId(ReadOnlySpan<byte> src)
    {
        if (src.Length == 0)
            return (0, 0);
        var first = src[0];
        if ((first & 0x80) != 0)
        {
            if (src.Length < 2)
                return (first & 0x7F, 1);
            var second = src[1];
            return ((second & 0x7F) | ((first & 0x7F) << 7), 2);
        }

        return (first, 1);
    }

    public static byte[] CompressMoveId(int moveId)
    {
        if (moveId < 0x80)
            return [(byte)moveId];
        return [(byte)((moveId >> 7) + 0x80), (byte)(moveId & 0x7F)];
    }

    public static string MoveDisplayName(RomImage rom, DataTableTables tables, int moveId, Charmap? charmap)
    {
        var entry = ReadMove(rom, tables, moveId, charmap);
        if (entry is not null && !string.IsNullOrWhiteSpace(entry.Name))
            return entry.Name;
        return DataTableEnums.PrettyMoveFallback(moveId);
    }

    public static IReadOnlyList<DataTablePick> AlphabeticalMoves(RomImage rom, DataTableTables tables, Charmap? charmap)
    {
        var picks = new List<DataTablePick>(tables.MoveCount);
        for (var id = 0; id < tables.MoveCount; id++)
        {
            var name = MoveDisplayName(rom, tables, id, charmap);
            if (string.IsNullOrWhiteSpace(name))
                continue;
            picks.Add(new DataTablePick(id, name));
        }

        return picks.OrderBy(p => p.Name, StringComparer.OrdinalIgnoreCase).ThenBy(p => p.Id).ToArray();
    }

    public static IReadOnlyList<DataTablePick> AlphabeticalItems(RomImage rom, DataTableTables tables, Charmap? charmap)
    {
        var picks = new List<DataTablePick>(tables.ItemCount);
        for (var id = 0; id < tables.ItemCount; id++)
        {
            var entry = ReadItem(rom, tables, id, charmap);
            var name = entry is null || string.IsNullOrWhiteSpace(entry.Name) ? $"Item {id}" : entry.Name;
            picks.Add(new DataTablePick(id, name));
        }

        return picks.OrderBy(p => p.Name, StringComparer.OrdinalIgnoreCase).ThenBy(p => p.Id).ToArray();
    }

    public static bool WriteMonster(
        MutableRom rom,
        DataTableTables tables,
        int id,
        Charmap? charmap,
        DataTableMonsterPatch patch,
        ICollection<RomSpan>? dirty = null)
    {
        if ((uint)id >= (uint)tables.MonsterCount)
            return false;
        var off = tables.MonsterData + id * DataTableTables.MonsterEntrySize;
        if (!rom.IsRangeValid(off, DataTableTables.MonsterEntrySize))
            return false;

        rom.WriteByte(off + 9, (byte)Math.Clamp(patch.BodySize, 0, 255));
        rom.WriteByte(off + 0x13, (byte)Math.Clamp(patch.Type1, 0, 255));
        rom.WriteByte(off + 0x14, (byte)Math.Clamp(patch.Type2, 0, 255));
        rom.WriteByte(off + 0x16, (byte)Math.Clamp(patch.FriendArea, 0, 255));
        rom.WriteByte(off + 0x17, (byte)Math.Clamp(patch.Ability1, 0, 255));
        rom.WriteByte(off + 0x18, (byte)Math.Clamp(patch.Ability2, 0, 255));
        rom.WriteUInt16(off + 0x1E, (ushort)Math.Clamp(patch.BaseHp, 0, 65535));
        rom.WriteInt32(off + 0x20, patch.ExpYield);
        rom.WriteUInt16(off + 0x24, (ushort)Math.Clamp(patch.BaseAtk, 0, 65535));
        rom.WriteUInt16(off + 0x26, (ushort)Math.Clamp(patch.BaseSpAtk, 0, 65535));
        rom.WriteUInt16(off + 0x28, (ushort)Math.Clamp(patch.BaseDef, 0, 65535));
        rom.WriteUInt16(off + 0x2A, (ushort)Math.Clamp(patch.BaseSpDef, 0, 65535));
        rom.WriteUInt16(off + 0x2C, (ushort)Math.Clamp(patch.Weight, 0, 65535));
        rom.WriteUInt16(off + 0x2E, (ushort)Math.Clamp(patch.Size, 0, 65535));
        rom.WriteInt16(off + 0x40, (short)Math.Clamp(patch.RecruitRate, short.MinValue, short.MaxValue));
        dirty?.Add(new RomSpan(off, DataTableTables.MonsterEntrySize));
        return WriteLevelUpMoves(rom, tables, id, patch.LevelUpMoves, dirty);
    }

    public static bool WriteMove(
        MutableRom rom,
        DataTableTables tables,
        int id,
        Charmap? charmap,
        DataTableMovePatch patch,
        ICollection<RomSpan>? dirty = null)
    {
        if ((uint)id >= (uint)tables.MoveCount)
            return false;
        var off = tables.MoveData + id * DataTableTables.MoveEntrySize;
        if (!rom.IsRangeValid(off, DataTableTables.MoveEntrySize))
            return false;

        rom.WriteInt16(off + 4, (short)Math.Clamp(patch.BasePower, short.MinValue, short.MaxValue));
        rom.WriteByte(off + 6, (byte)Math.Clamp(patch.Type, 0, 255));
        rom.WriteByte(off + 7, (byte)Math.Clamp(patch.Category, 0, 255));
        rom.WriteByte(off + 0xC, (byte)Math.Clamp(patch.BasePp, 0, 255));
        rom.WriteByte(off + 0xE, (byte)Math.Clamp(patch.Accuracy1, 0, 255));
        rom.WriteByte(off + 0xF, (byte)Math.Clamp(patch.Accuracy2, 0, 255));
        rom.WriteByte(off + 0x10, (byte)Math.Clamp(patch.AccuracyAi, 0, 255));
        rom.WriteByte(off + 0x13, (byte)Math.Clamp(patch.CritChance, 0, 255));
        dirty?.Add(new RomSpan(off, DataTableTables.MoveEntrySize));
        return TryWriteString(rom, off + 0x1C, patch.Description, charmap, dirty);
    }

    public static bool WriteItem(
        MutableRom rom,
        DataTableTables tables,
        int id,
        Charmap? charmap,
        DataTableItemPatch patch,
        ICollection<RomSpan>? dirty = null)
    {
        if ((uint)id >= (uint)tables.ItemCount)
            return false;
        var off = tables.ItemData + id * DataTableTables.ItemEntrySize;
        if (!rom.IsRangeValid(off, DataTableTables.ItemEntrySize))
            return false;

        rom.WriteUInt32(off + 4, patch.BuyPrice);
        rom.WriteUInt32(off + 8, patch.SellPrice);
        rom.WriteByte(off + 0xC, (byte)Math.Clamp(patch.Category, 0, 255));
        rom.WriteInt16(off + 0x18, (short)Math.Clamp(patch.MoveId, short.MinValue, short.MaxValue));
        dirty?.Add(new RomSpan(off, DataTableTables.ItemEntrySize));
        return TryWriteString(rom, off + 0x10, patch.Description, charmap, dirty);
    }

    public static MonsterTableEntry? ReadMonster(RomImage rom, DataTableTables tables, int id, Charmap? charmap)
    {
        if ((uint)id >= (uint)tables.MonsterCount)
            return null;
        var off = tables.MonsterData + id * DataTableTables.MonsterEntrySize;
        if (!rom.IsRangeValid(off, DataTableTables.MonsterEntrySize))
            return null;

        var nameOff = DataTableTables.ReadRomPointer(rom, off);
        var catOff = DataTableTables.ReadRomPointer(rom, off + 4);
        var (levelUp, hmTm) = ReadLearnset(rom, tables, id);

        return new MonsterTableEntry(
            Id: id,
            Name: Decode(rom, charmap, nameOff),
            Category: Decode(rom, charmap, catOff),
            OverworldPalette: rom.ReadByte(off + 8),
            BodySize: rom.ReadByte(off + 9),
            MovementSpeed: rom.ReadInt32(off + 0xC),
            Type1: rom.ReadByte(off + 0x13),
            Type2: rom.ReadByte(off + 0x14),
            MovementType: rom.ReadByte(off + 0x15),
            FriendArea: rom.ReadByte(off + 0x16),
            Ability1: rom.ReadByte(off + 0x17),
            Ability2: rom.ReadByte(off + 0x18),
            ShadowSize: rom.ReadByte(off + 0x19),
            CanMove: rom.ReadByte(off + 0x1C) != 0,
            ChanceAsleep: rom.ReadByte(off + 0x1D),
            BaseHp: rom.ReadUInt16(off + 0x1E),
            ExpYield: rom.ReadInt32(off + 0x20),
            BaseAtk: rom.ReadUInt16(off + 0x24),
            BaseSpAtk: rom.ReadUInt16(off + 0x26),
            BaseDef: rom.ReadUInt16(off + 0x28),
            BaseSpDef: rom.ReadUInt16(off + 0x2A),
            Weight: rom.ReadUInt16(off + 0x2C),
            Size: rom.ReadUInt16(off + 0x2E),
            CanThrowItems: rom.ReadByte(off + 0x33) != 0,
            EvolveFrom: rom.ReadInt16(off + 0x34),
            RecruitRate: rom.ReadInt16(off + 0x40),
            LevelUpMoves: levelUp,
            HmTmMoves: hmTm);
    }

    public static MoveTableEntry? ReadMove(RomImage rom, DataTableTables tables, int id, Charmap? charmap)
    {
        if ((uint)id >= (uint)tables.MoveCount)
            return null;
        var off = tables.MoveData + id * DataTableTables.MoveEntrySize;
        if (!rom.IsRangeValid(off, DataTableTables.MoveEntrySize))
            return null;

        return new MoveTableEntry(
            Id: id,
            Name: Decode(rom, charmap, DataTableTables.ReadRomPointer(rom, off)),
            Description: Decode(rom, charmap, DataTableTables.ReadRomPointer(rom, off + 0x1C)),
            BasePower: rom.ReadInt16(off + 4),
            Type: rom.ReadByte(off + 6),
            Category: rom.ReadByte(off + 7),
            BasePp: rom.ReadByte(off + 0xC),
            AiWeight: rom.ReadByte(off + 0xD),
            Accuracy1: rom.ReadByte(off + 0xE),
            Accuracy2: rom.ReadByte(off + 0xF),
            AccuracyAi: rom.ReadByte(off + 0x10),
            ChainedHits: rom.ReadByte(off + 0x11),
            CritChance: rom.ReadByte(off + 0x13),
            AffectedByMagicCoat: rom.ReadByte(off + 0x14) != 0,
            IsSnatchable: rom.ReadByte(off + 0x15) != 0,
            UsesMouth: rom.ReadByte(off + 0x16) != 0,
            RangeId: rom.ReadByte(off + 0x19));
    }

    public static ItemTableEntry? ReadItem(RomImage rom, DataTableTables tables, int id, Charmap? charmap)
    {
        if ((uint)id >= (uint)tables.ItemCount)
            return null;
        var off = tables.ItemData + id * DataTableTables.ItemEntrySize;
        if (!rom.IsRangeValid(off, DataTableTables.ItemEntrySize))
            return null;

        return new ItemTableEntry(
            Id: id,
            Name: Decode(rom, charmap, DataTableTables.ReadRomPointer(rom, off)),
            Description: Decode(rom, charmap, DataTableTables.ReadRomPointer(rom, off + 0x10)),
            BuyPrice: rom.ReadUInt32(off + 4),
            SellPrice: rom.ReadUInt32(off + 8),
            Category: rom.ReadByte(off + 0xC),
            Icon: rom.ReadByte(off + 0xD),
            MoveId: rom.ReadInt16(off + 0x18),
            Order: rom.ReadByte(off + 0x1A),
            SpawnMin: rom.ReadByte(off + 0x1B),
            SpawnMax: rom.ReadByte(off + 0x1C),
            Palette: rom.ReadByte(off + 0x1D),
            ActionType: rom.ReadByte(off + 0x1E));
    }

    private static (IReadOnlyList<LevelUpMove> LevelUp, IReadOnlyList<int> HmTm) ReadLearnset(
        RomImage rom, DataTableTables tables, int species)
    {
        if (tables.LearnsetData < 0 || (uint)species >= (uint)tables.LearnsetCount)
            return ([], []);
        var entry = tables.LearnsetData + species * DataTableTables.LearnsetEntrySize;
        if (!rom.IsRangeValid(entry, DataTableTables.LearnsetEntrySize))
            return ([], []);

        var levelPtr = DataTableTables.ReadRomPointer(rom, entry);
        var hmPtr = DataTableTables.ReadRomPointer(rom, entry + 4);
        return (ReadLevelUp(rom, levelPtr), ReadMoveList(rom, hmPtr));
    }

    private static IReadOnlyList<LevelUpMove> ReadLevelUp(RomImage rom, int offset)
    {
        var list = new List<LevelUpMove>();
        if (offset < 0)
            return list;
        var cursor = offset;
        for (var i = 0; i < 64; i++)
        {
            if (!rom.IsRangeValid(cursor, 2) || rom.ReadByte(cursor) == 0)
                break;
            var spanLen = Math.Min(4, rom.Length - cursor);
            var (moveId, consumed) = DecompressMoveId(rom.Slice(cursor, spanLen));
            cursor += consumed;
            if (!rom.IsRangeValid(cursor, 1))
                break;
            list.Add(new LevelUpMove(moveId, rom.ReadByte(cursor)));
            cursor++;
        }

        return list;
    }

    private static IReadOnlyList<int> ReadMoveList(RomImage rom, int offset)
    {
        var list = new List<int>();
        if (offset < 0)
            return list;
        var cursor = offset;
        for (var i = 0; i < 64; i++)
        {
            if (!rom.IsRangeValid(cursor, 1) || rom.ReadByte(cursor) == 0)
                break;
            var spanLen = Math.Min(4, rom.Length - cursor);
            var (moveId, consumed) = DecompressMoveId(rom.Slice(cursor, spanLen));
            list.Add(moveId);
            cursor += Math.Max(1, consumed);
        }

        return list;
    }

    private static string Decode(RomImage rom, Charmap? charmap, int offset)
    {
        if (offset < 0)
            return "";
        if (charmap is not null)
            return charmap.DecodeRomString(rom, offset, 128).Trim();
        return rom.ReadAscii(offset, 64);
    }

    private static bool WriteLevelUpMoves(
        MutableRom rom, DataTableTables tables, int species, IReadOnlyList<LevelUpMove> moves, ICollection<RomSpan>? dirty)
    {
        if (tables.LearnsetData < 0 || (uint)species >= (uint)tables.LearnsetCount)
            return true;
        var entry = tables.LearnsetData + species * DataTableTables.LearnsetEntrySize;
        var ptr = DataTableTables.ReadRomPointer(rom, entry);
        if (ptr < 0)
            return false;

        var encoded = EncodeLevelUp(moves);
        var capacity = MeasureCString(rom, ptr);
        if (encoded.Length <= capacity)
        {
            rom.WriteBytes(ptr, encoded);
            if (encoded.Length < capacity)
                rom.Fill(ptr + encoded.Length, capacity - encoded.Length, 0);
            dirty?.Add(new RomSpan(ptr, capacity));
            return true;
        }

        var dest = FreeSpaceAllocator.FindFreeSpace(rom, encoded.Length, alignment: 4);
        rom.WriteBytes(dest, encoded);
        rom.WritePointer(entry, dest);
        dirty?.Add(new RomSpan(entry, 4));
        dirty?.Add(new RomSpan(dest, encoded.Length));
        return true;
    }

    private static byte[] EncodeLevelUp(IReadOnlyList<LevelUpMove> moves)
    {
        var bytes = new List<byte>();
        foreach (var move in moves)
        {
            bytes.AddRange(CompressMoveId(move.MoveId));
            bytes.Add((byte)Math.Clamp(move.Level, 0, 255));
        }

        bytes.Add(0);
        return bytes.ToArray();
    }

    private static bool TryWriteString(
        MutableRom rom, int pointerField, string text, Charmap? charmap, ICollection<RomSpan>? dirty)
    {
        var dest = DataTableTables.ReadRomPointer(rom, pointerField);
        if (dest < 0)
            return false;
        var encoded = charmap is not null ? charmap.Encode(text ?? "") : System.Text.Encoding.ASCII.GetBytes(text ?? "");
        var payload = encoded.Length + 1;
        var capacity = MeasureCString(rom, dest);
        if (payload <= capacity)
        {
            rom.WriteBytes(dest, encoded);
            rom.WriteByte(dest + encoded.Length, 0);
            if (payload < capacity)
                rom.Fill(dest + payload, capacity - payload, 0);
            dirty?.Add(new RomSpan(dest, capacity));
            return true;
        }

        var free = FreeSpaceAllocator.FindFreeSpace(rom, payload, alignment: 4);
        rom.WriteBytes(free, encoded);
        rom.WriteByte(free + encoded.Length, 0);
        rom.WritePointer(pointerField, free);
        dirty?.Add(new RomSpan(pointerField, 4));
        dirty?.Add(new RomSpan(free, payload));
        return true;
    }

    private static int MeasureCString(MutableRom rom, int offset)
    {
        var length = 0;
        while (rom.IsRangeValid(offset + length, 1) && rom.ReadByte(offset + length) != 0)
            length++;
        return rom.IsRangeValid(offset + length, 1) ? length + 1 : length;
    }
}

public readonly record struct RomSpan(int Offset, int Length);

public sealed record DataTablePick(int Id, string Name)
{
    public override string ToString() => Name;
}

public sealed record DataTableMonsterPatch(
    int BaseHp,
    int ExpYield,
    int Type1,
    int Type2,
    int Ability1,
    int Ability2,
    int FriendArea,
    int BaseAtk,
    int BaseSpAtk,
    int BaseDef,
    int BaseSpDef,
    int Weight,
    int Size,
    int BodySize,
    int RecruitRate,
    IReadOnlyList<LevelUpMove> LevelUpMoves);

public sealed record DataTableMovePatch(
    int BasePower,
    int BasePp,
    int Type,
    int Category,
    int Accuracy1,
    int Accuracy2,
    int AccuracyAi,
    int CritChance,
    string Description);

public sealed record DataTableItemPatch(
    uint BuyPrice,
    uint SellPrice,
    int Category,
    int MoveId,
    string Description);
