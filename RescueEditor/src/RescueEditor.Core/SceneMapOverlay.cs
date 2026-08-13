namespace RescueEditor.Core;

/// <summary>Click-to-select result for the scene map (entity and/or GroundLink).</summary>
public sealed class SceneMapSelection
{
    public SceneEntity? Entity { get; init; }
    public SceneLink? Link { get; init; }
    public int LinkIndex { get; init; } = -1;
}

/// <summary>Collision tint + GroundLink hit-testing for the scene map overlay.</summary>
public static class SceneMapOverlay
{
    public const bool ShowCollisionByDefault = false;
    public const byte CollisionTintR = 0xE0;
    public const byte CollisionTintG = 0x40;
    public const byte CollisionTintB = 0x50;
    public const byte CollisionTintA = 90;

    public static SceneMapHitRect BoundsOf(SceneLink link)
    {
        var w = Math.Max(8, Math.Max(link.Width, (byte)1) * 8);
        var h = Math.Max(8, Math.Max(link.Height, (byte)1) * 8);
        return new SceneMapHitRect(link.Position.PixelX, link.Position.PixelY, w, h);
    }

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
