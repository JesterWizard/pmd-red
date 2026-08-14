namespace RescueEditor.Core;

/// <summary>Click-drag collision paint with an explicit add or erase value.</summary>
public static class GroundCollisionPaint
{
    public const int TilePx = 8;

    public static bool Apply(GroundCollisionMap map, int pixelX, int pixelY, bool paintSolid) =>
        ApplyTile(map, pixelX / TilePx, pixelY / TilePx, paintSolid);

    public static bool ApplyTile(GroundCollisionMap map, int tileX, int tileY, bool paintSolid)
    {
        if (tileX < 0 || tileY < 0 || tileX >= map.WidthTiles || tileY >= map.HeightTiles)
            return false;
        if (map.IsSolidTile(tileX, tileY) == paintSolid)
            return false;
        map.SetSolidTile(tileX, tileY, paintSolid);
        return true;
    }

    /// <summary>
    /// Paint every tile along the mouse segment so fast movement does not skip cells.
    /// </summary>
    public static int ApplyLine(
        GroundCollisionMap map,
        int x0,
        int y0,
        int x1,
        int y1,
        bool paintSolid,
        Action<int, int>? onChanged = null)
    {
        var steps = Math.Max(Math.Abs(x1 - x0), Math.Abs(y1 - y0));
        if (steps < 1)
        {
            var tx = x0 / TilePx;
            var ty = y0 / TilePx;
            if (!ApplyTile(map, tx, ty, paintSolid))
                return 0;
            onChanged?.Invoke(tx, ty);
            return 1;
        }

        var changed = 0;
        var lastTx = int.MinValue;
        var lastTy = int.MinValue;
        for (var i = 0; i <= steps; i++)
        {
            var x = x0 + (x1 - x0) * i / steps;
            var y = y0 + (y1 - y0) * i / steps;
            var tx = x / TilePx;
            var ty = y / TilePx;
            if (tx == lastTx && ty == lastTy)
                continue;
            lastTx = tx;
            lastTy = ty;
            if (!ApplyTile(map, tx, ty, paintSolid))
                continue;
            onChanged?.Invoke(tx, ty);
            changed++;
        }

        return changed;
    }
}
