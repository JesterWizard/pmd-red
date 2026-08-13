namespace RescueEditor.Core;

/// <summary>Pack/unpack mapparam spawn rows so the dungeon editor can write them back.</summary>
public static class DungeonSpawnCodec
{
    public static ushort PackMonsterBits(int species, int level) =>
        (ushort)((species & 0x1FF) | ((level & 0x7F) << 9));

    public static void WriteMonster(MutableRom rom, int offset, int species, int level, int weight)
    {
        rom.WriteUInt16(offset, PackMonsterBits(species, level));
        rom.WriteInt16(offset + 2, (short)weight);
        rom.WriteInt16(offset + 4, (short)weight);
    }

    public static void WriteMonsterList(
        MutableRom rom,
        int listOffset,
        IReadOnlyList<(int Species, int Level, int Weight)> rows)
    {
        var count = Math.Min(rows.Count, DungeonMapParamTables.MaxMonsterSpawns - 1);
        for (var i = 0; i < count; i++)
        {
            var row = rows[i];
            WriteMonster(rom, listOffset + i * DungeonMapParamTables.SpawnEntrySize, row.Species, row.Level, row.Weight);
        }

        WriteMonster(rom, listOffset + count * DungeonMapParamTables.SpawnEntrySize, 0, 0, 0);
    }

    public static void WriteTrap(MutableRom rom, int offset, ushort threshold) =>
        rom.WriteUInt16(offset, threshold);

    public static (short[] Expanded, int WordCount) DecodeItemTable(RomImage rom, int srcOff)
    {
        var expanded = new short[DungeonMapParamTables.ItemCategoryCount + DungeonMapParamTables.ItemIdCount];
        var words = 0;
        var j = 0;
        while (j < expanded.Length)
        {
            if (!rom.IsRangeValid(srcOff + words * 2, 2))
                break;
            var value = rom.ReadUInt16(srcOff + words * 2);
            words++;
            if (value >= DungeonMapParamTables.ItemSetSkipNumber)
            {
                j += value - DungeonMapParamTables.ItemSetSkipNumber;
            }
            else if (j < expanded.Length)
            {
                expanded[j++] = unchecked((short)value);
            }
        }

        return (expanded, words);
    }

    public static ushort[] EncodeItemTable(ReadOnlySpan<short> expanded)
    {
        var words = new List<ushort>(expanded.Length);
        var j = 0;
        while (j < expanded.Length)
        {
            if (expanded[j] == 0)
            {
                var skip = 0;
                while (j < expanded.Length && expanded[j] == 0)
                {
                    skip++;
                    j++;
                }

                words.Add((ushort)(DungeonMapParamTables.ItemSetSkipNumber + skip));
            }
            else
            {
                words.Add(unchecked((ushort)expanded[j]));
                j++;
            }
        }

        return words.ToArray();
    }

    public static bool TryWriteItemTable(MutableRom rom, int srcOff, int wordCount, ReadOnlySpan<short> expanded)
    {
        var encoded = EncodeItemTable(expanded);
        if (encoded.Length > wordCount)
            return false;
        for (var i = 0; i < wordCount; i++)
        {
            var value = i < encoded.Length ? encoded[i] : (ushort)0;
            rom.WriteUInt16(srcOff + i * 2, value);
        }

        return true;
    }

    public static bool TrySetItemWeight(MutableRom rom, RomImage view, int srcOff, int wordCount, int itemId, int weight) =>
        TryReplaceItem(rom, view, srcOff, wordCount, itemId, itemId, weight);

    public static bool TryReplaceItem(MutableRom rom, RomImage view, int srcOff, int wordCount, int oldId, int newId, int weight)
    {
        var (expanded, _) = DecodeItemTable(view, srcOff);
        if (oldId != newId && (uint)oldId < DungeonMapParamTables.ItemIdCount)
            expanded[DungeonMapParamTables.ItemCategoryCount + oldId] = 0;
        if ((uint)newId < DungeonMapParamTables.ItemIdCount)
            expanded[DungeonMapParamTables.ItemCategoryCount + newId] = (short)weight;
        return TryWriteItemTable(rom, srcOff, wordCount, expanded);
    }
}
