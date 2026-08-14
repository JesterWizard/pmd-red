namespace RescueEditor.Core;

/// <summary>
/// Retail <c>GenerateStandardFloor</c> path (rooms, anchors, connections, hallways,
/// maze rooms, Kecleon shops, extra hallways).
/// </summary>
public sealed class DungeonFloorGenerator
{
    public const int Width = 56;
    public const int Height = 32;
    public const int TerrainWall = 0;
    public const int TerrainFloor = 1;
    public const int TerrainSecondary = 2;
    private const int GridLen = 15;
    private const int CorridorRoom = 0xFF;
    private const int AnchorRoom = 0xFE;
    private const int MergeChance = 5;
    private const int SecondaryStructureFlagChance = 80;
    private const int DirectionMaskCardinal = 6;
    private const int DirectionEast = 2;
    private const int FloorSizeSmall = 1;
    private const int FloorSizeMedium = 2;

    private static readonly (int X, int Y)[] Adjacent =
    {
        (0, 1), (1, 1), (1, 0), (1, -1), (0, -1), (-1, -1), (-1, 0), (-1, 1),
    };

    private readonly DungeonRng _rng;
    private readonly int[,] _terrain = new int[Width, Height];
    private readonly int[,] _room = new int[Width, Height];
    private readonly bool[,] _shop = new bool[Width, Height];
    private readonly bool[,] _impassable = new bool[Width, Height];
    private int _floorSize;
    private bool _hasMazeRoom;
    private bool _hasKecleonShop;

    public DungeonFloorGenerator(uint seed) => _rng = new DungeonRng(seed);

    public GeneratedDungeonFloor Generate(FloorPropertiesRecord props)
    {
        ResetFloor();
        var layout = props.Layout % 16;
        int gridX, gridY;
        switch (layout)
        {
            case 1: // LAYOUT_SMALL
                gridX = 4;
                gridY = _rng.RandInt(2) + 2;
                _floorSize = 1;
                GenerateStandardFloor(gridX, gridY, props);
                break;
            case 11: // LAYOUT_MEDIUM
                gridX = 4;
                gridY = _rng.RandInt(2) + 2;
                _floorSize = 2;
                GenerateStandardFloor(gridX, gridY, props);
                break;
            default:
                gridX = 4;
                gridY = 4;
                var attempts = 32;
                while (true)
                {
                    gridX = _rng.RandRange(2, layout == 8 ? 5 : 9);
                    gridY = _rng.RandRange(2, layout == 8 ? 4 : 8);
                    if (gridX <= 6 && gridY <= 4)
                        break;
                    if (--attempts == 0)
                    {
                        gridX = 4;
                        gridY = 4;
                        break;
                    }
                }

                if (Width / Math.Max(1, gridX) < 8)
                    gridX = 1;
                if (Height / Math.Max(1, gridY) < 8)
                    gridY = 1;
                GenerateStandardFloor(gridX, gridY, props);
                break;
        }

        var floorTiles = 0;
        var shopTiles = 0;
        var rooms = new HashSet<int>();
        for (var y = 0; y < Height; y++)
        for (var x = 0; x < Width; x++)
        {
            if (_terrain[x, y] == TerrainFloor)
            {
                floorTiles++;
                var r = _room[x, y];
                if (r >= 0 && r < 0xFE)
                    rooms.Add(r);
            }

            if (_shop[x, y])
                shopTiles++;
        }

        var shop = (bool[,])_shop.Clone();
        return new GeneratedDungeonFloor(_terrain, _room, shop, floorTiles, rooms.Count, shopTiles, _hasMazeRoom);
    }

    private void ResetFloor()
    {
        _hasMazeRoom = false;
        _hasKecleonShop = false;
        for (var x = 0; x < Width; x++)
        for (var y = 0; y < Height; y++)
        {
            _terrain[x, y] = TerrainWall;
            _room[x, y] = -1;
            _shop[x, y] = false;
            _impassable[x, y] = x == 0 || y == 0 || x == Width - 1 || y == Height - 1;
        }
    }

    private void GenerateStandardFloor(int gridSizeX, int gridSizeY, FloorPropertiesRecord props)
    {
        var grid = new GridCell[GridLen, GridLen];
        var listX = new int[GridLen];
        var listY = new int[GridLen];
        GetGridPositions(listX, listY, gridSizeX, gridSizeY);
        InitDungeonGrid(grid, gridSizeX, gridSizeY);
        AssignRooms(grid, gridSizeX, gridSizeY, props.RoomDensity);
        CreateRoomsAndAnchors(grid, gridSizeX, gridSizeY, listX, listY, props);
        AssignGridCellConnections(grid, gridSizeX, gridSizeY, props);
        CreateGridCellConnections(grid, gridSizeX, gridSizeY, listX, listY);
        EnsureConnectedGrid(grid, gridSizeX, gridSizeY, listX, listY);
        GenerateMazeRoom(grid, gridSizeX, gridSizeY, props.MazeRoomChance);
        GenerateKecleonShop(grid, gridSizeX, gridSizeY, props.KecleonShopChance);
        GenerateMonsterHouse(grid, gridSizeX, gridSizeY, props.MonsterHouseChance);
        GenerateExtraHallways(grid, gridSizeX, gridSizeY, props.NumExtraHallways);
    }

    private static void GetGridPositions(int[] listX, int[] listY, int gridSizeX, int gridSizeY)
    {
        var sum = 0;
        for (var i = 0; i < gridSizeX; i++)
        {
            listX[i] = sum;
            sum += Width / gridSizeX;
        }

        listX[gridSizeX] = sum;
        sum = 0;
        for (var i = 0; i < gridSizeY; i++)
        {
            listY[i] = sum;
            sum += Height / gridSizeY;
        }

        listY[gridSizeY] = sum;
    }

    private void InitDungeonGrid(GridCell[,] grid, int gridSizeX, int gridSizeY)
    {
        for (var x = 0; x < GridLen; x++)
        for (var y = 0; y < GridLen; y++)
            grid[x, y] = new GridCell { IsInvalid = true };

        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            var invalid = _floorSize == 1 && x >= gridSizeX / 2
                          || _floorSize == 2 && x >= gridSizeX * 3 / 4;
            grid[x, y] = new GridCell { IsInvalid = invalid, IsRoom = true, HasSecondaryStructure = false };
        }
    }

    private void AssignRooms(GridCell[,] grid, int gridSizeX, int gridSizeY, int roomsNumber)
    {
        var extra = _rng.RandInt(3);
        if (roomsNumber < 0)
            roomsNumber = -roomsNumber;
        else
            roomsNumber += extra;

        var bits = new bool[256];
        for (var i = 0; i < roomsNumber && i < bits.Length; i++)
            bits[i] = true;

        var maxRooms = gridSizeX * gridSizeY;
        for (var n = 0; n < 64; n++)
        {
            var a = _rng.RandInt(maxRooms);
            var b = _rng.RandInt(maxRooms);
            (bits[a], bits[b]) = (bits[b], bits[a]);
        }

        var iBit = 0;
        var numRooms = 0;
        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            if (grid[x, y].IsInvalid)
                continue;
            if (numRooms >= 32)
                grid[x, y].IsRoom = false;
            if (bits[iBit])
            {
                grid[x, y].IsRoom = true;
                numRooms++;
                if (gridSizeX % 2 != 0 && x == (gridSizeX - 1) / 2 && y == 1)
                    grid[x, y].IsRoom = false;
            }
            else
                grid[x, y].IsRoom = false;
            iBit++;
        }

        if (numRooms >= 2)
            return;

        for (var attempts = 0; attempts < 200; attempts++)
        {
            var enough = false;
            for (var x = 0; x < gridSizeX && !enough; x++)
            for (var y = 0; y < gridSizeY && !enough; y++)
            {
                if (grid[x, y].IsInvalid)
                    continue;
                if (_rng.RandInt(100) < 60)
                {
                    grid[x, y].IsRoom = true;
                    enough = true;
                }
            }

            if (enough)
                break;
        }
    }

    private void CreateRoomsAndAnchors(
        GridCell[,] grid, int gridSizeX, int gridSizeY, int[] listX, int[] listY, FloorPropertiesRecord props)
    {
        var roomNumber = 0;
        for (var y = 0; y < gridSizeY; y++)
        for (var x = 0; x < gridSizeX; x++)
        {
            if (grid[x, y].IsInvalid)
                continue;
            var minX = listX[x] + 2;
            var minY = listY[y] + 2;
            var rangeX = listX[x + 1] - listX[x] - 4;
            var rangeY = listY[y + 1] - listY[y] - 3;
            if (grid[x, y].IsRoom)
            {
                var roomSizeX = _rng.RandRange(5, rangeX);
                var roomSizeY = _rng.RandRange(4, rangeY);
                if ((roomSizeX | 1) < rangeX)
                    roomSizeX |= 1;
                if ((roomSizeY | 1) < rangeY)
                    roomSizeY |= 1;
                if (roomSizeX > roomSizeY * 3 / 2)
                    roomSizeX = roomSizeY * 3 / 2;
                if (roomSizeY > roomSizeX * 3 / 2)
                    roomSizeY = roomSizeX * 3 / 2;
                var startX = _rng.RandInt(Math.Max(1, rangeX - roomSizeX)) + minX;
                var startY = _rng.RandInt(Math.Max(1, rangeY - roomSizeY)) + minY;
                var endX = startX + roomSizeX;
                var endY = startY + roomSizeY;
                grid[x, y].StartX = startX;
                grid[x, y].EndX = endX;
                grid[x, y].StartY = startY;
                grid[x, y].EndY = endY;
                for (var rx = startX; rx < endX; rx++)
                for (var ry = startY; ry < endY; ry++)
                    SetFloor(rx, ry, roomNumber);

                var flagImperfect = (props.RoomFlags & DungeonFloorPropertiesCodec.RoomFlagAllowImperfections) != 0;
                var flagSecondary = _rng.RandInt(100) < SecondaryStructureFlagChance;
                if (props.SecondaryStructuresBudget == 0)
                    flagSecondary = false;
                if (flagImperfect && flagSecondary)
                {
                    if (_rng.RandInt(100) < 50)
                        flagImperfect = false;
                    else
                        flagSecondary = false;
                }

                grid[x, y].FlagSecondaryStructure = flagSecondary;
                roomNumber++;
            }
            else
            {
                var unkX1 = x == 0 ? 1 : 2;
                var unkX2 = x == gridSizeX - 1 ? 2 : 4;
                var unkY1 = y == 0 ? 1 : 2;
                var unkY2 = y == gridSizeY - 1 ? 2 : 4;
                var ptX = _rng.RandRange(minX + unkX1, minX + rangeX - unkX2);
                var ptY = _rng.RandRange(minY + unkY1, minY + rangeY - unkY2);
                grid[x, y].StartX = ptX;
                grid[x, y].EndX = ptX + 1;
                grid[x, y].StartY = ptY;
                grid[x, y].EndY = ptY + 1;
                SetFloor(ptX, ptY, AnchorRoom);
            }
        }
    }

    private void AssignGridCellConnections(GridCell[,] grid, int gridSizeX, int gridSizeY, FloorPropertiesRecord props)
    {
        var x = _rng.RandInt(gridSizeX);
        var y = _rng.RandInt(gridSizeY);
        var dir = _rng.RandInt(4);
        for (var i = 0; i < props.FloorConnectivity; i++)
        {
            var test = _rng.RandInt(8);
            var newDir = _rng.RandInt(4);
            if (test < 4)
                dir = newDir;
            while (true)
            {
                var ok = (dir & 3) switch
                {
                    0 => x < gridSizeX - 1,
                    1 => y > 0,
                    2 => x > 0,
                    _ => y < gridSizeY - 1,
                };
                if (ok)
                    break;
                dir++;
            }

            switch (dir & 3)
            {
                case 0:
                    if (x + 1 < gridSizeX && !grid[x + 1, y].IsInvalid)
                    {
                        grid[x, y].Right = true;
                        grid[x + 1, y].Left = true;
                        x++;
                    }
                    break;
                case 1:
                    if (y > 0 && !grid[x, y - 1].IsInvalid)
                    {
                        grid[x, y].Top = true;
                        grid[x, y - 1].Bottom = true;
                        y--;
                    }
                    break;
                case 2:
                    if (x > 0 && !grid[x - 1, y].IsInvalid)
                    {
                        grid[x, y].Left = true;
                        grid[x - 1, y].Right = true;
                        x--;
                    }
                    break;
                default:
                    if (y + 1 < gridSizeY && !grid[x, y + 1].IsInvalid)
                    {
                        grid[x, y].Bottom = true;
                        grid[x, y + 1].Top = true;
                        y++;
                    }
                    break;
            }
        }

        if (props.AllowDeadEnds)
            return;

        while (true)
        {
            var more = false;
            for (var cx = 0; cx < gridSizeX; cx++)
            for (var cy = 0; cy < gridSizeY; cy++)
            {
                if (grid[cx, cy].IsInvalid || grid[cx, cy].IsRoom)
                    continue;
                var count = 0;
                if (grid[cx, cy].Top) count++;
                if (grid[cx, cy].Bottom) count++;
                if (grid[cx, cy].Left) count++;
                if (grid[cx, cy].Right) count++;
                if (count != 1)
                    continue;

                dir = _rng.RandInt(4);
                var ok = false;
                for (var n = 0; n < 8; n++)
                {
                    ok = (dir & 3) switch
                    {
                        0 => cx < gridSizeX - 1 && !grid[cx, cy].Right,
                        1 => cy > 0 && !grid[cx, cy].Top,
                        2 => cx > 0 && !grid[cx, cy].Left,
                        _ => cy < gridSizeY - 1 && !grid[cx, cy].Bottom,
                    };
                    if (ok)
                        break;
                    dir++;
                }

                if (!ok)
                    continue;

                // Retail checks grid[x+1][y] for every direction (known out-of-range bug).
                if (grid[cx + 1, cy].IsInvalid)
                    continue;
                switch (dir & 3)
                {
                    case 0:
                        grid[cx, cy].Right = true;
                        grid[cx + 1, cy].Left = true;
                        more = true;
                        break;
                    case 1:
                        if (cy > 0)
                        {
                            grid[cx, cy].Top = true;
                            grid[cx, cy - 1].Bottom = true;
                            more = true;
                        }
                        break;
                    case 2:
                        if (cx > 0)
                        {
                            grid[cx, cy].Left = true;
                            grid[cx - 1, cy].Right = true;
                            more = true;
                        }
                        break;
                    default:
                        if (cy + 1 < gridSizeY)
                        {
                            grid[cx, cy].Bottom = true;
                            grid[cx, cy + 1].Top = true;
                            more = true;
                        }
                        break;
                }
            }

            if (!more)
                break;
        }
    }

    private void CreateGridCellConnections(GridCell[,] grid, int gridSizeX, int gridSizeY, int[] listX, int[] listY)
    {
        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            if (grid[x, y].IsInvalid)
            {
                grid[x, y].Top = grid[x, y].Bottom = grid[x, y].Left = grid[x, y].Right = false;
                continue;
            }

            if (x <= 0) grid[x, y].Left = false;
            if (y <= 0) grid[x, y].Top = false;
            if (x >= gridSizeX - 1) grid[x, y].Right = false;
            if (y >= gridSizeY - 1) grid[x, y].Bottom = false;
        }

        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            if (grid[x, y].IsInvalid)
                continue;
            int ptX, ptY;
            if (grid[x, y].IsRoom)
            {
                ptX = _rng.RandRange(grid[x, y].StartX + 1, grid[x, y].EndX - 1);
                ptY = _rng.RandRange(grid[x, y].StartY + 1, grid[x, y].EndY - 1);
            }
            else
            {
                ptX = grid[x, y].StartX;
                ptY = grid[x, y].StartY;
            }

            if (grid[x, y].Top && y > 0 && !grid[x, y - 1].IsInvalid)
            {
                var pt2X = grid[x, y - 1].IsRoom
                    ? _rng.RandRange(grid[x, y - 1].StartX + 1, grid[x, y - 1].EndX - 1)
                    : grid[x, y - 1].StartX;
                CreateHallway(ptX, grid[x, y].StartY, pt2X, grid[x, y - 1].EndY - 1, vertical: true, listX[x], listY[y]);
                grid[x, y].Top = false;
                grid[x, y - 1].Bottom = false;
                grid[x, y].IsConnected = true;
                grid[x, y - 1].IsConnected = true;
            }

            if (grid[x, y].Bottom && y + 1 < gridSizeY && !grid[x, y + 1].IsInvalid)
            {
                var pt2X = grid[x, y + 1].IsRoom
                    ? _rng.RandRange(grid[x, y + 1].StartX + 1, grid[x, y + 1].EndX - 1)
                    : grid[x, y + 1].StartX;
                CreateHallway(ptX, grid[x, y].EndY - 1, pt2X, grid[x, y + 1].StartY, vertical: true, listX[x], listY[y + 1] - 1);
                grid[x, y].Bottom = false;
                grid[x, y + 1].Top = false;
                grid[x, y].IsConnected = true;
                grid[x, y + 1].IsConnected = true;
            }

            if (grid[x, y].Left && x > 0 && !grid[x - 1, y].IsInvalid)
            {
                var pt2Y = grid[x - 1, y].IsRoom
                    ? _rng.RandRange(grid[x - 1, y].StartY + 1, grid[x - 1, y].EndY - 1)
                    : grid[x - 1, y].StartY;
                CreateHallway(grid[x, y].StartX, ptY, grid[x - 1, y].StartX - 1, pt2Y, vertical: false, listX[x], listY[y]);
                grid[x, y].Left = false;
                grid[x - 1, y].Right = false;
                grid[x, y].IsConnected = true;
                grid[x - 1, y].IsConnected = true;
            }

            if (grid[x, y].Right && x + 1 < gridSizeX && !grid[x + 1, y].IsInvalid)
            {
                var pt2Y = grid[x + 1, y].IsRoom
                    ? _rng.RandRange(grid[x + 1, y].StartY + 1, grid[x + 1, y].EndY - 1)
                    : grid[x + 1, y].StartY;
                CreateHallway(grid[x, y].EndX - 1, ptY, grid[x + 1, y].StartX, pt2Y, vertical: false, listX[x + 1] - 1, listY[y]);
                grid[x, y].Right = false;
                grid[x + 1, y].Left = false;
                grid[x, y].IsConnected = true;
                grid[x + 1, y].IsConnected = true;
            }
        }

        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            if (_rng.RandInt(100) >= MergeChance)
                continue;
            if (grid[x, y].IsInvalid || !grid[x, y].IsConnected || grid[x, y].IsMerged || !grid[x, y].IsRoom)
                continue;
            var chanceTwo = _rng.RandInt(4);
            if (chanceTwo == 0 && x > 0 && grid[x - 1, y].IsConnected && !grid[x - 1, y].IsInvalid &&
                grid[x - 1, y].IsRoom && !grid[x - 1, y].IsMerged)
            {
                MergeRooms(grid, x, y, x - 1, y);
            }
            else if (chanceTwo == 1 && y >= 1 && grid[x, y - 1].IsConnected && !grid[x, y - 1].IsInvalid &&
                     grid[x, y - 1].IsRoom && !grid[x, y - 1].IsMerged)
            {
                MergeRooms(grid, x, y, x, y - 1);
            }
        }
    }

    private void MergeRooms(GridCell[,] grid, int x, int y, int ox, int oy)
    {
        var srcX = Math.Min(grid[ox, oy].StartX, grid[x, y].StartX);
        var srcY = Math.Min(grid[ox, oy].StartY, grid[x, y].StartY);
        var dstX = Math.Max(grid[ox, oy].EndX, grid[x, y].EndX);
        var dstY = Math.Max(grid[ox, oy].EndY, grid[x, y].EndY);
        var idx = RoomAt(grid[x, y].StartX, grid[x, y].StartY);
        for (var cx = srcX; cx < dstX; cx++)
        for (var cy = srcY; cy < dstY; cy++)
            SetFloor(cx, cy, idx);
        grid[ox, oy].StartX = srcX;
        grid[ox, oy].EndX = dstX;
        grid[ox, oy].StartY = srcY;
        grid[ox, oy].EndY = dstY;
        grid[x, y].IsMerged = true;
        grid[ox, oy].IsMerged = true;
        grid[x, y].IsConnected = false;
        grid[x, y].HasBeenMerged = true;
    }

    private void CreateHallway(int x, int y, int endX, int endY, bool vertical, int turnX, int turnY)
    {
        var startX = x;
        var startY = y;
        if (vertical)
        {
            Walk(ref x, ref y, startX, startY, axisY: true, turnY);
            Walk(ref x, ref y, startX, startY, axisY: false, endX);
            Walk(ref x, ref y, startX, startY, axisY: true, endY);
        }
        else
        {
            Walk(ref x, ref y, startX, startY, axisY: false, turnX);
            Walk(ref x, ref y, startX, startY, axisY: true, endY);
            Walk(ref x, ref y, startX, startY, axisY: false, endX);
        }
    }

    private void EnsureConnectedGrid(GridCell[,] grid, int gridSizeX, int gridSizeY, int[] listX, int[] listY)
    {
        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            if (grid[x, y].IsInvalid || grid[x, y].HasBeenMerged || grid[x, y].IsConnected)
                continue;

            if (grid[x, y].IsRoom && !grid[x, y].HasSecondaryStructure)
            {
                var rndX = _rng.RandRange(grid[x, y].StartX + 1, grid[x, y].EndX - 1);
                var rndY = _rng.RandRange(grid[x, y].StartY + 1, grid[x, y].EndY - 1);
                if (y > 0 && !grid[x, y - 1].IsInvalid && !grid[x, y - 1].IsMerged && grid[x, y - 1].IsConnected)
                {
                    var ptX = grid[x, y - 1].IsRoom
                        ? _rng.RandRange(grid[x, y - 1].StartX + 1, grid[x, y - 1].EndX - 1)
                        : grid[x, y - 1].StartX;
                    if (grid[x, y - 1].IsRoom)
                        _rng.RandRange(grid[x, y - 1].StartY + 1, grid[x, y - 1].EndY - 1);
                    CreateHallway(rndX, grid[x, y].StartY, ptX, grid[x, y - 1].EndY - 1, vertical: true, listX[x], listY[y]);
                    grid[x, y].IsConnected = true;
                    grid[x, y].Top = true;
                    grid[x, y - 1].Bottom = true;
                }
                else if (y < gridSizeY - 1 && !grid[x, y + 1].IsInvalid && !grid[x, y + 1].IsMerged && grid[x, y + 1].IsConnected)
                {
                    var ptX = grid[x, y + 1].IsRoom
                        ? _rng.RandRange(grid[x, y + 1].StartX + 1, grid[x, y + 1].EndX - 1)
                        : grid[x, y + 1].StartX;
                    if (grid[x, y + 1].IsRoom)
                        _rng.RandRange(grid[x, y + 1].StartY + 1, grid[x, y + 1].EndY - 1);
                    CreateHallway(rndX, grid[x, y].EndY - 1, ptX, grid[x, y + 1].StartY, vertical: true, listX[x], listY[y + 1] - 1);
                    grid[x, y].IsConnected = true;
                    grid[x, y].Bottom = true;
                    grid[x, y + 1].Top = true;
                }
                else if (x > 0 && !grid[x - 1, y].IsInvalid && !grid[x - 1, y].IsMerged && grid[x - 1, y].IsConnected)
                {
                    int ptY;
                    if (grid[x - 1, y].IsRoom)
                    {
                        _rng.RandRange(grid[x - 1, y].StartX + 1, grid[x - 1, y].EndX - 1);
                        ptY = _rng.RandRange(grid[x - 1, y].StartY + 1, grid[x - 1, y].EndY - 1);
                    }
                    else
                        ptY = grid[x - 1, y].StartY;
                    CreateHallway(grid[x, y].StartX, rndY, grid[x - 1, y].StartX - 1, ptY, vertical: false, listX[x], listY[y]);
                    grid[x, y].IsConnected = true;
                    grid[x, y].Left = true;
                    grid[x - 1, y].Right = true;
                }
                else if (x < gridSizeX - 1 && !grid[x + 1, y].IsInvalid && !grid[x + 1, y].IsMerged && grid[x + 1, y].IsConnected)
                {
                    int ptY;
                    if (grid[x + 1, y].IsRoom)
                    {
                        _rng.RandRange(grid[x + 1, y].StartX + 1, grid[x + 1, y].EndX - 1);
                        ptY = _rng.RandRange(grid[x + 1, y].StartY + 1, grid[x + 1, y].EndY - 1);
                    }
                    else
                        ptY = grid[x + 1, y].StartY;
                    CreateHallway(grid[x, y].EndX - 1, rndY, grid[x + 1, y].StartX, ptY, vertical: false, listX[x + 1] - 1, listY[y]);
                    grid[x, y].IsConnected = true;
                    grid[x, y].Right = true;
                    grid[x + 1, y].Left = true;
                }
            }
            else
                SetWall(grid[x, y].StartX, grid[x, y].StartY);
        }
    }

    private void GenerateMazeRoom(GridCell[,] grid, int gridSizeX, int gridSizeY, int chance)
    {
        if (chance == 0)
            return;
        if (chance <= _rng.RandInt(100))
            return;

        var numValid = 0;
        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            if (!CanMaze(grid[x, y]))
                continue;
            if ((grid[x, y].EndX - grid[x, y].StartX) % 2 != 0 && (grid[x, y].EndY - grid[x, y].StartY) % 2 != 0)
                numValid++;
        }

        if (numValid == 0)
            return;

        var values = new bool[256];
        values[0] = true;
        for (var i = 0; i < 64; i++)
        {
            var a = _rng.RandInt(numValid);
            var b = _rng.RandInt(numValid);
            (values[a], values[b]) = (values[b], values[a]);
        }

        var n = 0;
        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            if (!CanMaze(grid[x, y]))
                continue;
            if ((grid[x, y].EndX - grid[x, y].StartX) % 2 == 0 || (grid[x, y].EndY - grid[x, y].StartY) % 2 == 0)
                continue;
            if (!values[n])
            {
                n++;
                continue;
            }

            GenerateMaze(grid[x, y]);
            return;
        }
    }

    private static bool CanMaze(GridCell cell) =>
        !cell.IsInvalid && !cell.HasBeenMerged && cell.IsConnected && cell.IsRoom &&
        !cell.IsKecleonShop && !cell.IsMonsterHouse && !cell.HasSecondaryStructure;

    private void GenerateMaze(GridCell cell)
    {
        _hasMazeRoom = true;
        cell.IsMazeRoom = true;
        var roomIndex = RoomAt(cell.StartX, cell.StartY);

        for (var curX = cell.StartX + 1; curX < cell.EndX - 1; curX += 2)
        {
            if (GetTerrain(curX, cell.StartY - 1) != TerrainFloor)
                GenerateMazeLine(curX, cell.StartY - 1, cell.StartX, cell.StartY, cell.EndX, cell.EndY, roomIndex);
        }

        for (var curY = cell.StartY + 1; curY < cell.EndY - 1; curY += 2)
        {
            if (GetTerrain(cell.EndX, curY) != TerrainFloor)
                GenerateMazeLine(cell.EndX, curY, cell.StartX, cell.StartY, cell.EndX, cell.EndY, roomIndex);
        }

        for (var curX = cell.StartX + 1; curX < cell.EndX - 1; curX += 2)
        {
            if (GetTerrain(curX, cell.EndY) != TerrainFloor)
                GenerateMazeLine(curX, cell.EndY, cell.StartX, cell.StartY, cell.EndX, cell.EndY, roomIndex);
        }

        for (var curY = cell.StartY + 1; curY < cell.EndY - 1; curY += 2)
        {
            if (GetTerrain(cell.StartX - 1, curY) != TerrainFloor)
                GenerateMazeLine(cell.StartX - 1, curY, cell.StartX, cell.StartY, cell.EndX, cell.EndY, roomIndex);
        }

        for (var curX = cell.StartX + 3; curX < cell.EndX - 3; curX += 2)
        for (var curY = cell.StartY + 3; curY < cell.EndY - 3; curY += 2)
        {
            if (GetTerrain(curX, curY) != TerrainFloor)
                continue;
            SetObstacle(curX - 1, curY, roomIndex);
            GenerateMazeLine(curX, curY, cell.StartX, cell.StartY, cell.EndX, cell.EndY, roomIndex);
        }
    }

    private void GenerateMazeLine(int x0, int y0, int xMin, int yMin, int xMax, int yMax, int roomIndex)
    {
        while (true)
        {
            var direction = _rng.RandInt(4);
            var tries = 0;
            SetObstacle(x0, y0, roomIndex);
            int offsetX, offsetY;
            while (true)
            {
                (offsetX, offsetY) = (direction & 3) switch
                {
                    0 => (2, 0),
                    1 => (0, -2),
                    2 => (-2, 0),
                    _ => (0, 2),
                };
                var posX = x0 + offsetX;
                if (xMin <= posX && posX < xMax)
                {
                    var posY = y0 + offsetY;
                    if (yMin <= posY && posY < yMax && GetTerrain(posX, posY) == TerrainFloor)
                        break;
                }

                direction++;
                if (++tries >= 4)
                    return;
            }

            switch (direction & 3)
            {
                case 0:
                    SetObstacle(x0 + 1, y0, roomIndex);
                    x0 += 2;
                    break;
                case 1:
                    SetObstacle(x0, y0 - 1, roomIndex);
                    y0 -= 2;
                    break;
                case 2:
                    SetObstacle(x0 - 1, y0, roomIndex);
                    x0 -= 2;
                    break;
                default:
                    SetObstacle(x0, y0 + 1, roomIndex);
                    y0 += 2;
                    break;
            }
        }
    }

    private void GenerateKecleonShop(GridCell[,] grid, int gridSizeX, int gridSizeY, int chance)
    {
        if (_hasKecleonShop || chance == 0)
            return;
        if (chance <= _rng.RandInt(100))
            return;

        var listX = new int[GridLen];
        var listY = new int[GridLen];
        for (var i = 0; i < GridLen; i++)
            listX[i] = listY[i] = i;
        for (var i = 0; i < 200; i++)
        {
            var a = _rng.RandInt(GridLen);
            var b = _rng.RandInt(GridLen);
            (listX[a], listX[b]) = (listX[b], listX[a]);
        }

        for (var i = 0; i < 200; i++)
        {
            var a = _rng.RandInt(GridLen);
            var b = _rng.RandInt(GridLen);
            (listY[a], listY[b]) = (listY[b], listY[a]);
        }

        for (var i = 0; i < GridLen; i++)
        {
            var x = listX[i];
            if (x >= gridSizeX)
                continue;
            for (var j = 0; j < GridLen; j++)
            {
                var y = listY[j];
                if (y >= gridSizeY)
                    continue;
                var cell = grid[x, y];
                if (cell.IsInvalid || cell.HasBeenMerged || cell.IsMerged || !cell.IsConnected || !cell.IsRoom)
                    continue;
                if (cell.HasSecondaryStructure || cell.IsMazeRoom || cell.FlagSecondaryStructure)
                    continue;
                if (Math.Abs(cell.EndX - cell.StartX) < 5 || Math.Abs(cell.EndY - cell.StartY) < 4)
                    continue;

                _hasKecleonShop = true;
                cell.IsKecleonShop = true;
                var minX = cell.StartX + 1;
                var maxX = cell.EndX - 1;
                var minY = cell.StartY + 1;
                var maxY = cell.EndY - 1;
                if (maxY - minY < 3)
                    maxY++;
                for (var cx = minX; cx < maxX; cx++)
                for (var cy = minY; cy < maxY; cy++)
                {
                    if (InBounds(cx, cy))
                        _shop[cx, cy] = true;
                }

                return;
            }
        }
    }

    private void GenerateMonsterHouse(GridCell[,] grid, int gridSizeX, int gridSizeY, int chance)
    {
        if (chance == 0 || chance <= _rng.RandInt(100) || _hasKecleonShop)
            return;

        var numValid = 0;
        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            if (CanMonsterHouse(grid[x, y]))
                numValid++;
        }

        if (numValid == 0)
            return;

        var values = new bool[256];
        values[0] = true;
        for (var i = 0; i < 64; i++)
        {
            var a = _rng.RandInt(numValid);
            var b = _rng.RandInt(numValid);
            (values[a], values[b]) = (values[b], values[a]);
        }

        var n = 0;
        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            if (!CanMonsterHouse(grid[x, y]))
                continue;
            if (!values[n])
            {
                n++;
                continue;
            }

            grid[x, y].IsMonsterHouse = true;
            return;
        }
    }

    private static bool CanMonsterHouse(GridCell cell) =>
        !cell.IsInvalid && !cell.HasBeenMerged && cell.IsConnected && cell.IsRoom &&
        !cell.IsKecleonShop && !cell.IsMazeRoom && !cell.HasSecondaryStructure;

    private void GenerateExtraHallways(GridCell[,] grid, int gridSizeX, int gridSizeY, int numExtraHallways)
    {
        if (numExtraHallways == 0)
            return;

        for (var i = 0; i < numExtraHallways; i++)
        {
            var x = _rng.RandInt(gridSizeX);
            var y = _rng.RandInt(gridSizeY);
            if (!grid[x, y].IsRoom || !grid[x, y].IsConnected || grid[x, y].IsInvalid || grid[x, y].IsMazeRoom)
                continue;

            var currX = _rng.RandRange(grid[x, y].StartX, grid[x, y].EndX);
            var currY = _rng.RandRange(grid[x, y].StartY, grid[x, y].EndY);
            var direction = _rng.RandInt(4) * 2;
            for (var j = 0; j < 3; j++)
            {
                if (direction == 0 && y >= gridSizeY - 1)
                    direction = DirectionEast;
                if (direction == DirectionEast && x >= gridSizeX - 1)
                    direction = 4;
                if (direction == 4 && y <= 0)
                    direction = 6;
                if (direction == 6 && x <= 0)
                    direction = 0;
            }

            var roomId = RoomAt(currX, currY);
            var leave = 0;
            while (roomId == RoomAt(currX, currY) && leave++ < Width)
            {
                currX += Adjacent[direction].X;
                currY += Adjacent[direction].Y;
            }

            leave = 0;
            while (GetTerrain(currX, currY) == TerrainFloor && leave++ < Width)
            {
                currX += Adjacent[direction].X;
                currY += Adjacent[direction].Y;
            }

            if (GetTerrain(currX, currY) == TerrainSecondary)
                continue;

            var invalid = false;
            for (var xLoop = currX - 2; xLoop <= currX + 2 && !invalid; xLoop++)
            for (var yLoop = currY - 2; yLoop <= currY + 2; yLoop++)
            {
                if (!InBounds(xLoop, yLoop))
                {
                    invalid = true;
                    break;
                }
            }

            if (invalid)
                continue;

            var check = Adjacent[(direction + 2) & DirectionMaskCardinal];
            if (GetTerrain(currX + check.X, currY + check.Y) == TerrainFloor)
                continue;
            var check2 = Adjacent[(direction - 2) & DirectionMaskCardinal];
            if (GetTerrain(currX + check2.X, currY + check2.Y) == TerrainFloor)
                continue;

            var stride = _rng.RandInt(3) + 3;
            while (true)
            {
                if (currX <= 1 || currY <= 1 || currX >= Width - 1 || currY >= Height - 1)
                    break;
                if (GetTerrain(currX, currY) == TerrainFloor)
                    break;
                if (InBounds(currX, currY) && _impassable[currX, currY])
                    break;

                var willNotMakeSquare = true;
                if (GetTerrain(currX + 1, currY) == TerrainFloor &&
                    GetTerrain(currX + 1, currY + 1) == TerrainFloor &&
                    GetTerrain(currX, currY + 1) == TerrainFloor)
                    willNotMakeSquare = false;
                if (GetTerrain(currX + 1, currY) == TerrainFloor &&
                    GetTerrain(currX + 1, currY - 1) == TerrainFloor &&
                    GetTerrain(currX, currY - 1) == TerrainFloor)
                    willNotMakeSquare = false;
                if (GetTerrain(currX - 1, currY) == TerrainFloor &&
                    GetTerrain(currX - 1, currY + 1) == TerrainFloor &&
                    GetTerrain(currX, currY + 1) == TerrainFloor)
                    willNotMakeSquare = false;
                if (GetTerrain(currX - 1, currY) == TerrainFloor &&
                    GetTerrain(currX - 1, currY - 1) == TerrainFloor &&
                    GetTerrain(currX, currY - 1) == TerrainFloor)
                    willNotMakeSquare = false;

                if (willNotMakeSquare)
                    SetFloor(currX, currY, CorridorRoom);

                check = Adjacent[(direction + 2) & DirectionMaskCardinal];
                if (GetTerrain(currX + check.X, currY + check.Y) == TerrainFloor)
                    break;
                check2 = Adjacent[(direction - 2) & DirectionMaskCardinal];
                if (GetTerrain(currX + check2.X, currY + check2.Y) == TerrainFloor)
                    break;

                stride--;
                if (stride == 0)
                {
                    stride = _rng.RandInt(3) + 3;
                    direction += _rng.RandInt(100) < 50 ? 2 : -2;
                    direction &= DirectionMaskCardinal;
                    if (currX >= 32 && _floorSize == FloorSizeSmall && direction == DirectionEast)
                        break;
                    if (currX >= 48 && _floorSize == FloorSizeMedium && direction == DirectionEast)
                        break;
                }

                currX += Adjacent[direction].X;
                currY += Adjacent[direction].Y;
            }
        }
    }

    private void Walk(ref int x, ref int y, int startX, int startY, bool axisY, int target)
    {
        var counter = 0;
        while ((axisY ? y : x) != target)
        {
            if (counter++ >= Width)
                return;
            if (GetTerrain(x, y) != TerrainFloor)
                SetFloor(x, y, CorridorRoom);
            else if (x != startX || y != startY)
                return;
            if (axisY)
                y += y < target ? 1 : -1;
            else
                x += x < target ? 1 : -1;
        }
    }

    private int GetTerrain(int x, int y) =>
        x is >= 0 and < Width && y is >= 0 and < Height ? _terrain[x, y] : TerrainWall;

    private int RoomAt(int x, int y) =>
        x is >= 0 and < Width && y is >= 0 and < Height ? _room[x, y] : -1;

    private static bool InBounds(int x, int y) => x is >= 0 and < Width && y is >= 0 and < Height;

    private void SetFloor(int x, int y, int room)
    {
        if (!InBounds(x, y))
            return;
        _terrain[x, y] = TerrainFloor;
        _room[x, y] = room;
    }

    private void SetWall(int x, int y)
    {
        if (!InBounds(x, y))
            return;
        _terrain[x, y] = TerrainWall;
    }

    private void SetObstacle(int x, int y, int roomIndex)
    {
        if (!InBounds(x, y))
            return;
        _terrain[x, y] = TerrainWall;
        _room[x, y] = roomIndex;
    }

    private sealed class GridCell
    {
        public bool IsInvalid, IsRoom, IsConnected, IsMerged, HasBeenMerged;
        public bool IsKecleonShop, IsMazeRoom, IsMonsterHouse, HasSecondaryStructure, FlagSecondaryStructure;
        public bool Top, Bottom, Left, Right;
        public int StartX, StartY, EndX, EndY;
    }
}

public sealed class GeneratedDungeonFloor
{
    public GeneratedDungeonFloor(
        int[,] terrain, int[,] rooms, bool[,] shop, int floorTileCount, int roomCount, int shopTileCount, bool hasMazeRoom)
    {
        Terrain = terrain;
        Rooms = rooms;
        Shop = shop;
        FloorTileCount = floorTileCount;
        RoomCount = roomCount;
        ShopTileCount = shopTileCount;
        HasMazeRoom = hasMazeRoom;
    }

    public int[,] Terrain { get; }
    public int[,] Rooms { get; }
    public bool[,] Shop { get; }
    public int FloorTileCount { get; }
    public int RoomCount { get; }
    public int ShopTileCount { get; }
    public bool HasMazeRoom { get; }
    public int Width => DungeonFloorGenerator.Width;
    public int Height => DungeonFloorGenerator.Height;
}
