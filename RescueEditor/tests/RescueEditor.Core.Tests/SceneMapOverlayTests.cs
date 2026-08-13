using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneMapOverlayTests
{
    [Fact]
    public void CollisionOverlayIsOffByDefault()
    {
        Assert.False(SceneMapOverlay.ShowCollisionByDefault);
    }

    [Fact]
    public void HitTestSelectsSmallestOverlappingLink()
    {
        var scene = SceneWithLinks(
            new SceneLink { Position = new CompactPos(0, 0, 0, 0), Width = 8, Height = 8 },
            new SceneLink { Position = new CompactPos(1, 1, 0, 0), Width = 2, Height = 2 });

        var hit = SceneMapOverlay.HitTest(scene, pixelX: 12, pixelY: 12, showLinks: true);

        Assert.NotNull(hit);
        Assert.NotNull(hit!.Link);
        Assert.Equal(1, hit.LinkIndex);
        Assert.Null(hit.Entity);
    }

    [Fact]
    public void HitTestIgnoresLinksWhenOverlayIsOff()
    {
        var scene = SceneWithLinks(
            new SceneLink { Position = new CompactPos(0, 0, 0, 0), Width = 4, Height = 4 });

        var hit = SceneMapOverlay.HitTest(scene, pixelX: 8, pixelY: 8, showLinks: false);

        Assert.Null(hit);
    }

    [Fact]
    public void HitTestPrefersSmallerEntityOverLargerLink()
    {
        var scene = SceneWithLinks(
            new SceneLink { Position = new CompactPos(0, 0, 0, 0), Width = 8, Height = 8 });
        scene.Groups[0].Sectors[0].Events.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Event,
            Width = 1,
            Height = 1,
            Position = new CompactPos(1, 1, 0, 0),
            Index = 0,
        });

        var hit = SceneMapOverlay.HitTest(
            scene, pixelX: 12, pixelY: 12, showLinks: true, showEvents: true);

        Assert.NotNull(hit);
        Assert.NotNull(hit!.Entity);
        Assert.Equal(SceneEntityKind.Event, hit.Entity.Kind);
        Assert.Null(hit.Link);
    }

    [Fact]
    public void HitTestSelectsLinkWhenClickMissesEntities()
    {
        var scene = SceneWithLinks(
            new SceneLink { Position = new CompactPos(2, 3, 0, 0), Width = 3, Height = 2 });
        scene.Groups[0].Sectors[0].Events.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Event,
            Width = 1,
            Height = 1,
            Position = new CompactPos(0, 0, 0, 0),
        });

        var hit = SceneMapOverlay.HitTest(scene, pixelX: 20, pixelY: 28, showLinks: true, showEvents: true);

        Assert.NotNull(hit);
        Assert.NotNull(hit!.Link);
        Assert.Equal(0, hit.LinkIndex);
        Assert.Equal(2, hit.Link.Position.XTiles);
    }

    [Fact]
    public void FormatLinkDetailsIncludesIndexBoundsAndRet()
    {
        var link = new SceneLink
        {
            Position = new CompactPos(10, 20, 0, 0),
            Width = 3,
            Height = 4,
            Ret = 5,
            Unk7 = 1,
            RomOffset = 0x1234,
        };

        var text = SceneMapOverlay.FormatLinkDetails(link, index: 2);

        Assert.Contains("Link 2", text);
        Assert.Contains("10, 20", text);
        Assert.Contains("80, 160", text);
        Assert.Contains("3×4", text);
        Assert.Contains("Ret 5", text);
        Assert.Contains("0x1234", text, StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void PaintCollisionTintsOnlySolidTiles()
    {
        var solid = new bool[4 * 2];
        solid[0] = true;
        var collision = new GroundCollisionMap(4, 2, solid);
        var image = FlatImage(32, 16, 0x30, 0x30, 0x38);

        SceneMapOverlay.PaintCollision(image, collision);

        Assert.True(image.Pixels[0] > 0x30, "solid tile (0,0) should be tinted");
        var walk = PixelOffset(image, 8, 0);
        Assert.Equal(0x30, image.Pixels[walk]);
        Assert.Equal(0x30, image.Pixels[walk + 1]);
        Assert.Equal(0x38, image.Pixels[walk + 2]);
    }

    [Fact]
    public void ComposeSceneImageLeavesCollisionOffUnlessRequested()
    {
        var (rom, scene, collision) = SceneWithCollisionTile();
        var off = SceneCompositor.ComposeSceneImage(rom, scene, showLinks: false);
        var on = SceneCompositor.ComposeSceneImage(
            rom, scene, showLinks: false, showCollision: true, collision: collision);

        Assert.Equal(0x30, off.Pixels[0]);
        Assert.True(on.Pixels[0] > off.Pixels[0]);
    }

    [Fact]
    public void ComposeSceneImageHighlightsSelectedLink()
    {
        var rom = EmptyRom();
        var scene = SceneWithLinks(
            new SceneLink { Position = new CompactPos(1, 1, 0, 0), Width = 2, Height = 2 });
        var image = SceneCompositor.ComposeSceneImage(
            rom, scene, showLinks: true, selectedLink: scene.Links[0]);

        var edge = PixelOffset(image, 8, 8);
        Assert.Equal(255, image.Pixels[edge]);
        Assert.Equal(255, image.Pixels[edge + 1]);
        Assert.Equal(255, image.Pixels[edge + 2]);
    }

    [Fact]
    public void PaintCollisionTintsRetailSampleMap()
    {
        var bmaPath = FindSampleBma();
        if (bmaPath is null)
            return;

        var map = BmaCollisionDecoder.TryDecode(File.ReadAllBytes(bmaPath));
        Assert.NotNull(map);
        var image = FlatImage(map!.WidthTiles * 8, map.HeightTiles * 8, 0x30, 0x30, 0x38);
        SceneMapOverlay.PaintCollision(image, map);

        var tinted = false;
        var untouched = false;
        for (var tileY = 0; tileY < map.HeightTiles; tileY++)
        for (var tileX = 0; tileX < map.WidthTiles; tileX++)
        {
            var o = PixelOffset(image, tileX * 8 + 4, tileY * 8 + 4);
            if (map.IsSolidTile(tileX, tileY))
                tinted |= image.Pixels[o] > 0x30;
            else
                untouched |= image.Pixels[o] == 0x30;
        }

        Assert.True(tinted);
        Assert.True(untouched);
    }

    [Fact]
    public void HitTestSelectsParsedSceneLinks()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.Scenes.FirstOrDefault(s => s.Links.Count > 0);
        Assert.NotNull(scene);
        var link = scene!.Links[0];
        var rect = SceneMapOverlay.BoundsOf(link);
        var hit = SceneMapOverlay.HitTest(
            scene, rect.Left + 1, rect.Top + 1,
            showLinks: true, showLives: false, showObjects: false, showEffects: false, showEvents: false);
        Assert.NotNull(hit);
        Assert.NotNull(hit!.Link);
        Assert.Equal(0, hit.LinkIndex);
    }

    private static Scene SceneWithLinks(params SceneLink[] links)
    {
        var scene = new Scene { MapId = 1, Name = "overlay" };
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(new SceneSector { Group = 0, Sector = 0 });
        scene.Groups.Add(group);
        foreach (var link in links)
            scene.Links.Add(link);
        return scene;
    }

    private static (RomImage Rom, Scene Scene, GroundCollisionMap Collision) SceneWithCollisionTile()
    {
        var solid = new bool[4 * 2];
        solid[0] = true;
        return (EmptyRom(), SceneWithLinks(), new GroundCollisionMap(4, 2, solid));
    }

    private static RgbaImage FlatImage(int width, int height, byte r, byte g, byte b)
    {
        var pixels = new byte[width * height * 4];
        for (var i = 0; i < pixels.Length; i += 4)
        {
            pixels[i] = r;
            pixels[i + 1] = g;
            pixels[i + 2] = b;
            pixels[i + 3] = 255;
        }
        return new RgbaImage(width, height, pixels);
    }

    private static int PixelOffset(RgbaImage image, int x, int y) => (y * image.Width + x) * 4;

    private static RomImage EmptyRom()
    {
        var path = Path.GetTempFileName();
        File.WriteAllBytes(path, new byte[64]);
        return RomImage.Open(path);
    }

    private static string? FindSampleBma()
    {
        var direct = FindUpwards(Path.Combine("data", "map_bg", "T01P06m.bma"));
        if (direct is not null)
            return direct;
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return null;
        var root = CatalogBuilder.FindRepositoryRoot(baserom);
        if (root is null)
            return null;
        var path = Path.Combine(root, "data", "map_bg", "T01P06m.bma");
        return File.Exists(path) ? path : null;
    }

    private static string? FindUpwards(string fileName)
    {
        var directory = new DirectoryInfo(AppContext.BaseDirectory);
        while (directory is not null)
        {
            var candidate = Path.Combine(directory.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            directory = directory.Parent;
        }
        return null;
    }
}
