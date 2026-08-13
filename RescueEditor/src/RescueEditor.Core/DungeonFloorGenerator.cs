namespace RescueEditor.Core;

/// <summary>
/// Retail <c>GenerateStandardFloor</c> path (rooms, anchors, connections, hallways).
/// Extra structures (mazes, shops, extra hallways) are omitted; layout matches the same RNG + grid rules.
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

    private readonly DungeonRng _rng;
    private readonly int[,] _terrain = new int[Width, Height];
    private readonly int[,] _room = new int[Width, Height];
    private int _floorSize;

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
        }

        return new GeneratedDungeonFloor(_terrain, _room, floorTiles, rooms.Count);
    }

    private void ResetFloor()
    {
        for (var x = 0; x < Width; x++)
        for (var y = 0; y < Height; y++)
        {
            _terrain[x, y] = TerrainWall;
            _room[x, y] = -1;
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
        CreateRoomsAndAnchors(grid, gridSizeX, gridSizeY, listX, listY);
        AssignGridCellConnections(grid, gridSizeX, gridSizeY, props);
        CreateGridCellConnections(grid, gridSizeX, gridSizeY, listX, listY);
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
        for (var x = 0; x < gridSizeX; x++)
        for (var y = 0; y < gridSizeY; y++)
        {
            var invalid = _floorSize == 1 && x >= gridSizeX / 2
                          || _floorSize == 2 && x >= gridSizeX * 3 / 4;
            grid[x, y] = new GridCell { IsInvalid = invalid, IsRoom = true };
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

    private void CreateRoomsAndAnchors(GridCell[,] grid, int gridSizeX, int gridSizeY, int[] listX, int[] listY)
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

    private void SetFloor(int x, int y, int room)
    {
        if (x is < 0 or >= Width || y is < 0 or >= Height)
            return;
        _terrain[x, y] = TerrainFloor;
        _room[x, y] = room;
    }

    private sealed class GridCell
    {
        public bool IsInvalid, IsRoom, IsConnected, IsMerged;
        public bool Top, Bottom, Left, Right;
        public int StartX, StartY, EndX, EndY;
    }
}

public sealed class GeneratedDungeonFloor
{
    public GeneratedDungeonFloor(int[,] terrain, int[,] rooms, int floorTileCount, int roomCount)
    {
        Terrain = terrain;
        Rooms = rooms;
        FloorTileCount = floorTileCount;
        RoomCount = roomCount;
    }

    public int[,] Terrain { get; }
    public int[,] Rooms { get; }
    public int FloorTileCount { get; }
    public int RoomCount { get; }
    public int Width => DungeonFloorGenerator.Width;
    public int Height => DungeonFloorGenerator.Height;
}
