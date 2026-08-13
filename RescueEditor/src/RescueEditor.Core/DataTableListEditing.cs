namespace RescueEditor.Core;

/// <summary>Insert / delete data-table rows, growing or shrinking the ROM when needed.</summary>
public static class DataTableListEditing
{
    public static int AddFriendArea(MutableRom rom, FriendAreaTables tables, int cloneId)
    {
        cloneId = Math.Clamp(cloneId, 1, Math.Max(1, tables.Count - 1));
        var insertAt = tables.SettingsOffset(tables.Count);
        ShiftTableAnchors(tables, insertAt, FriendAreaTables.SettingsEntrySize);
        rom.InsertBytes(insertAt, FriendAreaTables.SettingsEntrySize, fill: 0);
        rom.WriteBytes(insertAt, rom.Copy(tables.SettingsOffset(cloneId), FriendAreaTables.SettingsEntrySize));
        var name = tables.NameOf(cloneId);
        while (tables.Names.Count < tables.Count)
            tables.Names.Add(DataTableEnums.FriendAreaName(tables.Names.Count));
        tables.Names.Add($"{name} (copy)");
        tables.Count++;
        return tables.Count - 1;
    }

    public static bool DeleteFriendArea(
        MutableRom rom, FriendAreaTables tables, DataTableTables data, int id)
    {
        if (id <= 0 || id >= tables.Count)
            return false;

        RemapFriendAreaIds(rom, tables, data, id);
        var entry = FriendAreaTables.SettingsEntrySize;
        var start = tables.SettingsOffset(id);
        var tail = (tables.Count - 1 - id) * entry;
        if (tail > 0)
            rom.WriteBytes(start, rom.Copy(start + entry, tail));
        var removeAt = tables.SettingsOffset(tables.Count - 1);
        ShiftTableAnchors(tables, removeAt, -entry);
        rom.RemoveBytes(removeAt, entry);
        if (id < tables.Names.Count)
            tables.Names.RemoveAt(id);
        tables.Count--;
        return true;
    }

    public static int AddMonster(MutableRom rom, DataTableTables tables, int cloneId)
    {
        cloneId = Math.Clamp(cloneId, 1, Math.Max(1, tables.MonsterCount - 1));
        var unused = FirstUnusedMonster(rom, tables);
        if (unused >= 0)
        {
            CopyMonsterSlot(rom, tables, cloneId, unused);
            return unused;
        }

        var insertAt = tables.MonsterData + tables.MonsterCount * DataTableTables.MonsterEntrySize;
        ShiftDataAnchors(tables, insertAt, DataTableTables.MonsterEntrySize);
        rom.InsertBytes(insertAt, DataTableTables.MonsterEntrySize, fill: 0);
        rom.WriteBytes(insertAt, rom.Copy(
            tables.MonsterData + cloneId * DataTableTables.MonsterEntrySize,
            DataTableTables.MonsterEntrySize));
        if (tables.LearnsetData >= 0 && cloneId < tables.LearnsetCount)
        {
            var learnInsert = tables.LearnsetData + tables.LearnsetCount * DataTableTables.LearnsetEntrySize;
            ShiftDataAnchors(tables, learnInsert, DataTableTables.LearnsetEntrySize);
            rom.InsertBytes(learnInsert, DataTableTables.LearnsetEntrySize, fill: 0);
            if (cloneId < tables.LearnsetCount)
            {
                rom.WriteBytes(learnInsert, rom.Copy(
                    tables.LearnsetData + cloneId * DataTableTables.LearnsetEntrySize,
                    DataTableTables.LearnsetEntrySize));
            }

            tables.LearnsetCount++;
        }

        tables.MonsterCount++;
        return tables.MonsterCount - 1;
    }

    public static bool DeleteMonster(MutableRom rom, DataTableTables tables, int id)
    {
        if (id <= 0 || id >= tables.MonsterCount)
            return false;
        if (id < tables.MonsterCount - 1 && id < DataTableTables.DefaultMonsterCount)
        {
            BlankMonster(rom, tables, id);
            return true;
        }

        var entry = DataTableTables.MonsterEntrySize;
        var start = tables.MonsterData + id * entry;
        var tail = (tables.MonsterCount - 1 - id) * entry;
        if (tail > 0)
            rom.WriteBytes(start, rom.Copy(start + entry, tail));
        var removeAt = tables.MonsterData + (tables.MonsterCount - 1) * entry;
        ShiftDataAnchors(tables, removeAt, -entry);
        rom.RemoveBytes(removeAt, entry);
        tables.MonsterCount--;
        return true;
    }

    public static int AddMove(MutableRom rom, DataTableTables tables, int cloneId)
    {
        cloneId = Math.Clamp(cloneId, 1, Math.Max(1, tables.MoveCount - 1));
        var insertAt = tables.MoveData + tables.MoveCount * DataTableTables.MoveEntrySize;
        ShiftDataAnchors(tables, insertAt, DataTableTables.MoveEntrySize);
        rom.InsertBytes(insertAt, DataTableTables.MoveEntrySize, fill: 0);
        rom.WriteBytes(insertAt, rom.Copy(
            tables.MoveData + cloneId * DataTableTables.MoveEntrySize, DataTableTables.MoveEntrySize));
        tables.MoveCount++;
        return tables.MoveCount - 1;
    }

    public static bool DeleteMove(MutableRom rom, DataTableTables tables, int id)
    {
        if (id <= 0 || id >= tables.MoveCount)
            return false;
        var entry = DataTableTables.MoveEntrySize;
        var start = tables.MoveData + id * entry;
        var tail = (tables.MoveCount - 1 - id) * entry;
        if (tail > 0)
            rom.WriteBytes(start, rom.Copy(start + entry, tail));
        var removeAt = tables.MoveData + (tables.MoveCount - 1) * entry;
        ShiftDataAnchors(tables, removeAt, -entry);
        rom.RemoveBytes(removeAt, entry);
        tables.MoveCount--;
        return true;
    }

    public static int AddItem(MutableRom rom, DataTableTables tables, int cloneId)
    {
        cloneId = Math.Clamp(cloneId, 1, Math.Max(1, tables.ItemCount - 1));
        var insertAt = tables.ItemData + tables.ItemCount * DataTableTables.ItemEntrySize;
        ShiftDataAnchors(tables, insertAt, DataTableTables.ItemEntrySize);
        rom.InsertBytes(insertAt, DataTableTables.ItemEntrySize, fill: 0);
        rom.WriteBytes(insertAt, rom.Copy(
            tables.ItemData + cloneId * DataTableTables.ItemEntrySize, DataTableTables.ItemEntrySize));
        tables.ItemCount++;
        return tables.ItemCount - 1;
    }

    public static bool DeleteItem(MutableRom rom, DataTableTables tables, int id)
    {
        if (id <= 0 || id >= tables.ItemCount)
            return false;
        var entry = DataTableTables.ItemEntrySize;
        var start = tables.ItemData + id * entry;
        var tail = (tables.ItemCount - 1 - id) * entry;
        if (tail > 0)
            rom.WriteBytes(start, rom.Copy(start + entry, tail));
        var removeAt = tables.ItemData + (tables.ItemCount - 1) * entry;
        ShiftDataAnchors(tables, removeAt, -entry);
        rom.RemoveBytes(removeAt, entry);
        tables.ItemCount--;
        return true;
    }

    private static void RemapFriendAreaIds(
        MutableRom rom, FriendAreaTables tables, DataTableTables data, int removedId)
    {
        for (var loc = 0; loc < FriendAreaTables.LocationCount; loc++)
        {
            var slots = tables.LocationOffset(loc) + 8;
            var kept = new List<byte>(FriendAreaTables.AreasPerLocation);
            for (var i = 0; i < FriendAreaTables.AreasPerLocation; i++)
            {
                var area = rom.ReadByte(slots + i);
                if (area == removedId || area == FriendAreaTables.NoAreaId)
                    continue;
                if (area > removedId && area < FriendAreaTables.NoAreaId)
                    area--;
                kept.Add(area);
            }

            for (var i = 0; i < FriendAreaTables.AreasPerLocation; i++)
                rom.WriteByte(slots + i, i < kept.Count ? kept[i] : (byte)FriendAreaTables.NoAreaId);
        }

        for (var i = 0; i < data.MonsterCount; i++)
        {
            var off = data.MonsterData + i * DataTableTables.MonsterEntrySize + 0x16;
            if (!rom.IsRangeValid(off, 1))
                continue;
            var area = rom.ReadByte(off);
            if (area == removedId)
                rom.WriteByte(off, 0);
            else if (area > removedId)
                rom.WriteByte(off, (byte)(area - 1));
        }
    }

    private static void ShiftTableAnchors(FriendAreaTables tables, int insertAt, int delta)
    {
        if (tables.Locations >= insertAt)
            tables.Locations += delta;
        if (tables.Settings >= insertAt)
            tables.Settings += delta;
    }

    private static void ShiftDataAnchors(DataTableTables tables, int insertAt, int delta)
    {
        if (tables.MonsterData >= insertAt)
            tables.MonsterData += delta;
        if (tables.MoveData >= insertAt)
            tables.MoveData += delta;
        if (tables.LearnsetData >= insertAt)
            tables.LearnsetData += delta;
        if (tables.ItemData >= insertAt)
            tables.ItemData += delta;
    }

    private static int FirstUnusedMonster(RomImage rom, DataTableTables tables)
    {
        for (var id = 1; id < tables.MonsterCount; id++)
        {
            var entry = DataTableCodec.ReadMonster(rom, tables, id, charmap: null);
            if (entry is null || string.IsNullOrWhiteSpace(entry.Name) || entry.Name.Contains('?', StringComparison.Ordinal))
                return id;
        }

        return -1;
    }

    private static int FirstUnusedMonster(MutableRom rom, DataTableTables tables)
    {
        var view = RomImage.FromBytes("working", rom.Copy(0, rom.Length));
        return FirstUnusedMonster(view, tables);
    }

    private static void CopyMonsterSlot(MutableRom rom, DataTableTables tables, int from, int to)
    {
        rom.WriteBytes(
            tables.MonsterData + to * DataTableTables.MonsterEntrySize,
            rom.Copy(tables.MonsterData + from * DataTableTables.MonsterEntrySize, DataTableTables.MonsterEntrySize));
        if (tables.LearnsetData < 0 || from >= tables.LearnsetCount || to >= tables.LearnsetCount)
            return;
        rom.WriteBytes(
            tables.LearnsetData + to * DataTableTables.LearnsetEntrySize,
            rom.Copy(tables.LearnsetData + from * DataTableTables.LearnsetEntrySize, DataTableTables.LearnsetEntrySize));
    }

    private static void BlankMonster(MutableRom rom, DataTableTables tables, int id)
    {
        var off = tables.MonsterData + id * DataTableTables.MonsterEntrySize;
        rom.Fill(off, DataTableTables.MonsterEntrySize, 0);
    }
}
