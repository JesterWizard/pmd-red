using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DungeonFloorGeneratorTests
{
    [Fact]
    public void FloorPropertiesCodec_ReadsMazeShopAndExtraHallwayFields()
    {
        var blob = new byte[DungeonMapParamTables.FloorPropertiesSize];
        blob[7] = 42;
        blob[9] = 7;
        blob[19] = 11;
        var rom = RomImage.FromBytes("synthetic.gba", blob);

        var props = DungeonFloorPropertiesCodec.Read(rom, 0);

        Assert.Equal(42, props.KecleonShopChance);
        Assert.Equal(7, props.MazeRoomChance);
        Assert.Equal(11, props.NumExtraHallways);
    }

    [Fact]
    public void Generate_WithGuaranteedShop_MarksKecleonShopTiles()
    {
        var map = GenerateWithSeed(kecleonShopChance: 100, mazeRoomChance: 0, numExtraHallways: 0);

        Assert.True(map.ShopTileCount > 0);
        Assert.True(HasInteriorShop(map));
    }

    [Fact]
    public void Generate_WithGuaranteedMaze_CarvesWallsInsideARoom()
    {
        var map = GenerateWithSeed(kecleonShopChance: 0, mazeRoomChance: 100, numExtraHallways: 0);

        Assert.True(map.HasMazeRoom);
        Assert.True(HasInteriorWallsInARoom(map));
    }

    [Fact]
    public void Generate_ExtraHallways_AddWalkableTilesVersusNone()
    {
        const uint seed = 7;
        var none = new DungeonFloorGenerator(seed).Generate(TestFloor(numExtraHallways: 0));
        var extra = new DungeonFloorGenerator(seed).Generate(TestFloor(numExtraHallways: 12));

        Assert.True(extra.FloorTileCount > none.FloorTileCount);
    }

    private static GeneratedDungeonFloor GenerateWithSeed(
        int kecleonShopChance, int mazeRoomChance, int numExtraHallways)
    {
        GeneratedDungeonFloor? found = null;
        for (uint seed = 1; seed <= 64; seed++)
        {
            var map = new DungeonFloorGenerator(seed).Generate(
                TestFloor(kecleonShopChance, mazeRoomChance, numExtraHallways));
            if (kecleonShopChance == 100 && map.ShopTileCount > 0)
                return map;
            if (mazeRoomChance == 100 && map.HasMazeRoom)
                return map;
            found = map;
        }

        return found!;
    }

    private static FloorPropertiesRecord TestFloor(
        int kecleonShopChance = 0,
        int mazeRoomChance = 0,
        int numExtraHallways = 0) =>
        new(
            Layout: 0,
            RoomDensity: 10,
            Tileset: 0,
            BgMusic: 0,
            Weather: 0,
            FloorConnectivity: 16,
            EnemyDensity: 0,
            KecleonShopChance: kecleonShopChance,
            MonsterHouseChance: 0,
            ItemDensity: 0,
            TrapDensity: 0,
            FixedRoomNumber: 0,
            AllowDeadEnds: true,
            MazeRoomChance: mazeRoomChance,
            NumExtraHallways: numExtraHallways);

    private static bool HasInteriorShop(GeneratedDungeonFloor map)
    {
        for (var y = 1; y < map.Height - 1; y++)
        for (var x = 1; x < map.Width - 1; x++)
        {
            if (map.Shop[x, y] && map.Terrain[x, y] == DungeonFloorGenerator.TerrainFloor)
                return true;
        }

        return false;
    }

    private static bool HasInteriorWallsInARoom(GeneratedDungeonFloor map)
    {
        for (var y = 1; y < map.Height - 1; y++)
        for (var x = 1; x < map.Width - 1; x++)
        {
            if (map.Terrain[x, y] != DungeonFloorGenerator.TerrainWall)
                continue;
            var room = map.Rooms[x, y];
            if (room is >= 0 and < 0xFE)
                return true;
        }

        return false;
    }
}
