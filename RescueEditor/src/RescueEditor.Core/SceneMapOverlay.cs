namespace RescueEditor.Core;

/// <summary>Click-to-select result for the scene map (entity and/or GroundLink).</summary>
public sealed class SceneMapSelection
{
    public SceneEntity? Entity { get; init; }
    public SceneLink? Link { get; init; }
    public int LinkIndex { get; init; } = -1;
}

public enum SceneMapResizeHandle
{
    None,
    Body,
    North,
    South,
    East,
    West,
    NorthEast,
    NorthWest,
    SouthEast,
    SouthWest,
}

public readonly record struct SceneVolumeTiles(CompactPos Position, byte Width, byte Height);

public readonly record struct SceneVolumeCommit(
    bool IsCreate,
    bool IsLink,
    SceneLink? Link,
    SceneEntity? Entity,
    CompactPos Position,
    byte Width,
    byte Height);

/// <summary>Collision tint + GroundLink hit-testing for the scene map overlay.</summary>
public static class SceneMapOverlay
{
    public const bool ShowCollisionByDefault = false;
    public const byte CollisionTintR = 0xE0;
    public const byte CollisionTintG = 0x40;
    public const byte CollisionTintB = 0x50;
    public const byte CollisionTintA = 90;
    public const int ResizeHandlePixels = 6;
    public const byte MaxVolumeTiles = 64;

    public static SceneMapHitRect BoundsOf(CompactPos position, byte width, byte height)
    {
        var w = Math.Max(8, Math.Max(width, (byte)1) * 8);
        var h = Math.Max(8, Math.Max(height, (byte)1) * 8);
        return new SceneMapHitRect(position.PixelX, position.PixelY, w, h);
    }

    public static SceneMapHitRect BoundsOf(SceneLink link) =>
        BoundsOf(link.Position, link.Width, link.Height);

    public static SceneMapHitRect BoundsOf(SceneEntity entity, RgbaImage? sprite = null)
    {
        var hitW = Math.Max(8, Math.Max(entity.Width, (byte)1) * 8);
        var hitH = Math.Max(8, Math.Max(entity.Height, (byte)1) * 8);
        if (sprite is null)
            return new SceneMapHitRect(entity.PixelX, entity.PixelY, hitW, hitH);

        var cx = entity.PixelX + hitW / 2;
        var cy = entity.PixelY + hitH / 2;
        return new SceneMapHitRect(cx - sprite.Width / 2, cy - sprite.Height / 2, sprite.Width, sprite.Height);
    }

    public static SceneMapSelection? HitTest(
        Scene scene,
        int pixelX,
        int pixelY,
        int group = 0,
        int sector = 0,
        IReadOnlyCollection<int>? visibleSectors = null,
        bool showLives = true,
        bool showObjects = true,
        bool showEffects = true,
        bool showEvents = true,
        bool showLinks = true,
        RomImage? rom = null,
        ActorSpriteAtlas? actorSprites = null,
        ObjectSpriteAtlas? objectSprites = null)
    {
        SceneMapSelection? best = null;
        var bestArea = int.MaxValue;

        if (showLinks)
        {
            for (var i = 0; i < scene.Links.Count; i++)
            {
                var link = scene.Links[i];
                var rect = BoundsOf(link);
                if (!rect.Contains(pixelX, pixelY))
                    continue;
                if (rect.Area <= bestArea)
                {
                    bestArea = rect.Area;
                    best = new SceneMapSelection { Link = link, LinkIndex = i };
                }
            }
        }

        foreach (var entity in SceneCompositor.EnumerateVisibleEntities(
                     scene, group, sector, visibleSectors,
                     showLives, showObjects, showEffects, showEvents))
        {
            RgbaImage? sprite = null;
            if (entity.Kind == SceneEntityKind.Live && rom is not null)
                sprite = actorSprites?.TryGetForLive(rom, null, entity.TypeId);
            else if (entity.Kind == SceneEntityKind.Object)
                sprite = objectSprites?.TryGetForObject(entity.TypeId);

            var rect = BoundsOf(entity, sprite);
            if (!rect.Contains(pixelX, pixelY))
                continue;
            if (rect.Area <= bestArea)
            {
                bestArea = rect.Area;
                best = new SceneMapSelection { Entity = entity };
            }
        }

        return best;
    }

    public static SceneVolumeTiles VolumeFromPixels(int pixelX0, int pixelY0, int pixelX1, int pixelY1, bool snap)
    {
        var left = Math.Min(pixelX0, pixelX1);
        var top = Math.Min(pixelY0, pixelY1);
        var right = Math.Max(pixelX0, pixelX1);
        var bottom = Math.Max(pixelY0, pixelY1);
        if (snap)
        {
            left = FloorToTile(left);
            top = FloorToTile(top);
            right = CeilToTile(right);
            bottom = CeilToTile(bottom);
        }

        if (right <= left)
            right = left + 8;
        if (bottom <= top)
            bottom = top + 8;

        var xTiles = (byte)Math.Clamp(left / 8, 0, 255);
        var yTiles = (byte)Math.Clamp(top / 8, 0, 255);
        var width = (byte)Math.Clamp((right - left) / 8, 1, MaxVolumeTiles);
        var height = (byte)Math.Clamp((bottom - top) / 8, 1, MaxVolumeTiles);
        return new SceneVolumeTiles(new CompactPos(xTiles, yTiles, 0, 0), width, height);
    }

    public static SceneMapResizeHandle HitHandle(SceneMapHitRect rect, int pixelX, int pixelY)
    {
        if (!rect.Contains(pixelX, pixelY) && !NearRect(rect, pixelX, pixelY))
            return SceneMapResizeHandle.None;

        var nearW = pixelX - rect.Left <= ResizeHandlePixels;
        var nearE = rect.Left + rect.Width - pixelX <= ResizeHandlePixels;
        var nearN = pixelY - rect.Top <= ResizeHandlePixels;
        var nearS = rect.Top + rect.Height - pixelY <= ResizeHandlePixels;
        if (nearN && nearW)
            return SceneMapResizeHandle.NorthWest;
        if (nearN && nearE)
            return SceneMapResizeHandle.NorthEast;
        if (nearS && nearW)
            return SceneMapResizeHandle.SouthWest;
        if (nearS && nearE)
            return SceneMapResizeHandle.SouthEast;
        if (nearN)
            return SceneMapResizeHandle.North;
        if (nearS)
            return SceneMapResizeHandle.South;
        if (nearW)
            return SceneMapResizeHandle.West;
        if (nearE)
            return SceneMapResizeHandle.East;
        return rect.Contains(pixelX, pixelY) ? SceneMapResizeHandle.Body : SceneMapResizeHandle.None;
    }

    public static SceneVolumeTiles ResizeVolume(
        SceneVolumeTiles origin,
        SceneMapResizeHandle handle,
        int pixelX,
        int pixelY,
        bool snap)
    {
        var rect = BoundsOf(origin.Position, origin.Width, origin.Height);
        var left = rect.Left;
        var top = rect.Top;
        var right = rect.Left + rect.Width;
        var bottom = rect.Top + rect.Height;
        switch (handle)
        {
            case SceneMapResizeHandle.North:
            case SceneMapResizeHandle.NorthEast:
            case SceneMapResizeHandle.NorthWest:
                top = pixelY;
                break;
        }
        switch (handle)
        {
            case SceneMapResizeHandle.South:
            case SceneMapResizeHandle.SouthEast:
            case SceneMapResizeHandle.SouthWest:
                bottom = pixelY;
                break;
        }
        switch (handle)
        {
            case SceneMapResizeHandle.West:
            case SceneMapResizeHandle.NorthWest:
            case SceneMapResizeHandle.SouthWest:
                left = pixelX;
                break;
        }
        switch (handle)
        {
            case SceneMapResizeHandle.East:
            case SceneMapResizeHandle.NorthEast:
            case SceneMapResizeHandle.SouthEast:
                right = pixelX;
                break;
        }

        return VolumeFromPixels(left, top, right, bottom, snap);
    }

    public static void PaintCollision(RgbaImage image, GroundCollisionMap collision)
    {
        var widthPx = Math.Min(image.Width, collision.WidthTiles * 8);
        var heightPx = Math.Min(image.Height, collision.HeightTiles * 8);
        for (var py = 0; py < heightPx; py++)
        {
            var tileY = py / 8;
            for (var px = 0; px < widthPx; px++)
            {
                if (!collision.IsSolidTile(px / 8, tileY))
                    continue;
                var offset = (py * image.Width + px) * 4;
                Blend(image.Pixels, offset, CollisionTintR, CollisionTintG, CollisionTintB, CollisionTintA);
            }
        }
    }

    public static string FormatLinkDetails(SceneLink link, int index)
    {
        var rect = BoundsOf(link);
        return
            $"Link {index}\n" +
            $"Tiles {link.Position.XTiles}, {link.Position.YTiles}  ({rect.Left}, {rect.Top} px)\n" +
            $"Size {link.Width}×{link.Height} tiles  ({rect.Width}×{rect.Height} px)\n" +
            $"Ret {link.Ret}\n" +
            $"Unk {link.Unk7}\n" +
            $"ROM 0x{link.RomOffset:X}";
    }

    public static string FormatLinkListRow(SceneLink link, int index) =>
        $"L{index:00}  {link.Position.XTiles},{link.Position.YTiles}  {link.Width}×{link.Height}";

    public static void WriteOverlayTile(
        Span<byte> pixels, int strideBytes, int widthPx, int heightPx, int tileX, int tileY, bool solid)
    {
        var x0 = tileX * 8;
        var y0 = tileY * 8;
        if (x0 >= widthPx || y0 >= heightPx || x0 + 8 <= 0 || y0 + 8 <= 0)
            return;
        var x1 = Math.Min(widthPx, x0 + 8);
        var y1 = Math.Min(heightPx, y0 + 8);
        x0 = Math.Max(0, x0);
        y0 = Math.Max(0, y0);
        for (var py = y0; py < y1; py++)
        {
            var row = py * strideBytes;
            for (var px = x0; px < x1; px++)
            {
                var o = row + px * 4;
                if (solid)
                {
                    pixels[o] = CollisionTintR;
                    pixels[o + 1] = CollisionTintG;
                    pixels[o + 2] = CollisionTintB;
                    pixels[o + 3] = CollisionTintA;
                }
                else
                {
                    pixels[o] = 0;
                    pixels[o + 1] = 0;
                    pixels[o + 2] = 0;
                    pixels[o + 3] = 0;
                }
            }
        }
    }

    private static int FloorToTile(int pixel) => (int)Math.Floor(pixel / 8.0) * 8;

    private static int CeilToTile(int pixel) => (int)Math.Ceiling(pixel / 8.0) * 8;

    private static bool NearRect(SceneMapHitRect rect, int x, int y)
    {
        var pad = ResizeHandlePixels;
        return x >= rect.Left - pad && x < rect.Left + rect.Width + pad &&
               y >= rect.Top - pad && y < rect.Top + rect.Height + pad;
    }

    private static void Blend(byte[] pixels, int offset, byte r, byte g, byte b, byte a)
    {
        var inv = 255 - a;
        pixels[offset] = (byte)((pixels[offset] * inv + r * a) / 255);
        pixels[offset + 1] = (byte)((pixels[offset + 1] * inv + g * a) / 255);
        pixels[offset + 2] = (byte)((pixels[offset + 2] * inv + b * a) / 255);
        pixels[offset + 3] = 255;
    }
}

public readonly record struct SceneMapHitRect(int Left, int Top, int Width, int Height)
{
    public int Area => Width * Height;

    public bool Contains(int x, int y) =>
        x >= Left && x < Left + Width && y >= Top && y < Top + Height;
}
