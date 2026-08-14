namespace RescueEditor.Core;

/// <summary>Pack/unpack 28-byte <c>FloorProperties</c> without touching reserved bytes.</summary>
public static class DungeonFloorPropertiesCodec
{
    public const int LayoutOffset = 0;
    public const int RoomDensityOffset = 1;
    public const int TilesetOffset = 2;
    public const int BgMusicOffset = 3;
    public const int WeatherOffset = 4;
    public const int FloorConnectivityOffset = 5;
    public const int EnemyDensityOffset = 6;
    public const int KecleonShopChanceOffset = 7;
    public const int MonsterHouseChanceOffset = 8;
    public const int MazeRoomChanceOffset = 9;
    public const int ItemStickyChanceOffset = 10;
    public const int AllowDeadEndsOffset = 11;
    public const int SecondaryStructuresBudgetOffset = 12;
    public const int RoomFlagsOffset = 13;
    public const int UnkEOffset = 14;
    public const int ItemDensityOffset = 15;
    public const int TrapDensityOffset = 16;
    public const int FloorNumberOffset = 17;
    public const int FixedRoomNumberOffset = 18;
    public const int NumExtraHallwaysOffset = 19;
    public const int BuriedItemDensityOffset = 20;
    public const int VisibilityRangeOffset = 22;
    public const int MoneyUpperBoundOffset = 23;
    public const int Unk1AOffset = 26;
    public const int Unk1BOffset = 27;

    public const int RoomFlagAllowSecondaryTerrain = 0x1;
    public const int RoomFlagAllowImperfections = 0x4;

    public static FloorPropertiesRecord Read(RomImage rom, int offset)
    {
        if (!rom.IsRangeValid(offset, DungeonMapParamTables.FloorPropertiesSize))
            throw new ArgumentOutOfRangeException(nameof(offset));

        return new FloorPropertiesRecord(
            Layout: rom.ReadByte(offset + LayoutOffset),
            RoomDensity: unchecked((sbyte)rom.ReadByte(offset + RoomDensityOffset)),
            Tileset: rom.ReadByte(offset + TilesetOffset),
            BgMusic: rom.ReadByte(offset + BgMusicOffset),
            Weather: rom.ReadByte(offset + WeatherOffset),
            FloorConnectivity: rom.ReadByte(offset + FloorConnectivityOffset),
            EnemyDensity: rom.ReadByte(offset + EnemyDensityOffset),
            KecleonShopChance: rom.ReadByte(offset + KecleonShopChanceOffset),
            MonsterHouseChance: rom.ReadByte(offset + MonsterHouseChanceOffset),
            ItemDensity: rom.ReadByte(offset + ItemDensityOffset),
            TrapDensity: rom.ReadByte(offset + TrapDensityOffset),
            FixedRoomNumber: rom.ReadByte(offset + FixedRoomNumberOffset),
            VisibilityRange: rom.ReadByte(offset + VisibilityRangeOffset),
            AllowDeadEnds: rom.ReadByte(offset + AllowDeadEndsOffset) != 0,
            RoomFlags: rom.ReadByte(offset + RoomFlagsOffset),
            ItemStickyChance: rom.ReadByte(offset + ItemStickyChanceOffset),
            BuriedItemDensity: rom.ReadByte(offset + BuriedItemDensityOffset),
            MoneyUpperBound: rom.ReadByte(offset + MoneyUpperBoundOffset),
            MazeRoomChance: rom.ReadByte(offset + MazeRoomChanceOffset),
            NumExtraHallways: rom.ReadByte(offset + NumExtraHallwaysOffset),
            SecondaryStructuresBudget: rom.ReadByte(offset + SecondaryStructuresBudgetOffset),
            RomOffset: offset);
    }

    public static void Patch(MutableRom rom, int offset, FloorPropertiesPatch patch)
    {
        if (!rom.IsRangeValid(offset, DungeonMapParamTables.FloorPropertiesSize))
            throw new ArgumentOutOfRangeException(nameof(offset));

        WriteU8(rom, offset + LayoutOffset, patch.Layout);
        WriteS8(rom, offset + RoomDensityOffset, patch.RoomDensity);
        WriteU8(rom, offset + TilesetOffset, patch.Tileset);
        WriteU8(rom, offset + BgMusicOffset, patch.BgMusic);
        WriteU8(rom, offset + WeatherOffset, patch.Weather);
        WriteU8(rom, offset + FloorConnectivityOffset, patch.FloorConnectivity);
        WriteU8(rom, offset + EnemyDensityOffset, patch.EnemyDensity);
        WriteU8(rom, offset + KecleonShopChanceOffset, patch.KecleonShopChance);
        WriteU8(rom, offset + MonsterHouseChanceOffset, patch.MonsterHouseChance);
        WriteU8(rom, offset + MazeRoomChanceOffset, patch.MazeRoomChance);
        WriteU8(rom, offset + ItemStickyChanceOffset, patch.ItemStickyChance);
        if (patch.AllowDeadEnds is bool deadEnds)
            rom.WriteByte(offset + AllowDeadEndsOffset, (byte)(deadEnds ? 1 : 0));
        WriteU8(rom, offset + RoomFlagsOffset, patch.RoomFlags);
        WriteU8(rom, offset + ItemDensityOffset, patch.ItemDensity);
        WriteU8(rom, offset + TrapDensityOffset, patch.TrapDensity);
        WriteU8(rom, offset + FixedRoomNumberOffset, patch.FixedRoomNumber);
        WriteU8(rom, offset + NumExtraHallwaysOffset, patch.NumExtraHallways);
        WriteU8(rom, offset + BuriedItemDensityOffset, patch.BuriedItemDensity);
        WriteU8(rom, offset + VisibilityRangeOffset, patch.VisibilityRange is int vis ? Math.Clamp(vis, 0, 3) : null);
        WriteU8(rom, offset + MoneyUpperBoundOffset, patch.MoneyUpperBound);
    }

    private static void WriteU8(MutableRom rom, int offset, int? value)
    {
        if (value is int v)
            rom.WriteByte(offset, (byte)Math.Clamp(v, 0, 255));
    }

    private static void WriteS8(MutableRom rom, int offset, int? value)
    {
        if (value is int v)
            rom.WriteByte(offset, unchecked((byte)Math.Clamp(v, sbyte.MinValue, sbyte.MaxValue)));
    }
}

public sealed record FloorPropertiesPatch(
    int? Layout = null,
    int? RoomDensity = null,
    int? Tileset = null,
    int? BgMusic = null,
    int? Weather = null,
    int? FloorConnectivity = null,
    int? EnemyDensity = null,
    int? KecleonShopChance = null,
    int? MonsterHouseChance = null,
    int? MazeRoomChance = null,
    int? ItemStickyChance = null,
    bool? AllowDeadEnds = null,
    int? RoomFlags = null,
    int? ItemDensity = null,
    int? TrapDensity = null,
    int? FixedRoomNumber = null,
    int? NumExtraHallways = null,
    int? BuriedItemDensity = null,
    int? VisibilityRange = null,
    int? MoneyUpperBound = null);
