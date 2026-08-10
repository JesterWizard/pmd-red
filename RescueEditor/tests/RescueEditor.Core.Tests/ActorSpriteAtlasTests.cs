using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public class ActorSpriteAtlasTests
{
    [Theory]
    [InlineData(0, 0, false)]  // South
    [InlineData(2, 6, true)]   // East = west sheet flipped
    [InlineData(6, 6, false)]  // West
    [InlineData(4, 12, false)] // North
    public void IdleSpriteForDirectionMatchesAxLayout(int dir, int spriteIndex, bool flip)
    {
        var (index, flipH) = ActorSpriteAtlas.IdleSpriteForDirection(dir);
        Assert.Equal(spriteIndex, index);
        Assert.Equal(flip, flipH);
    }

    [Fact]
    public void LoadsSleepAndWestSheetsWhenPresent()
    {
        var root = FindRepoRoot();
        if (root is null) return;

        var atlas = new ActorSpriteAtlas(root);
        var sleep = atlas.TryGetAnimatedSprite(
            speciesId: 4,
            animationId: GroundScriptVm.AnimSleep,
            direction: GroundScriptVm.DirSouth,
            tickFrames: 0);
        Assert.NotNull(sleep);

        var west = atlas.TryGetAnimatedSprite(
            speciesId: 1,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirWest,
            tickFrames: 0);
        Assert.NotNull(west);
        Assert.False(west.Value.FlipH);

        var south = atlas.TryGetAnimatedSprite(
            speciesId: 1,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirSouth,
            tickFrames: 0);
        Assert.NotNull(south);
        // West-facing sheet should differ from south idle.
        Assert.False(ReferenceEquals(west.Value.Image, south.Value.Image));
    }

    [Fact]
    public void EmotionEffectAtlasLoadsAnimatedNoticeFromRom()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        var baserom = Path.Combine(root, "baserom.gba");
        if (!File.Exists(baserom)) return;

        var rom = RomImage.Open(baserom);
        var effects = new EmotionEffectAtlas(root, rom);
        var frame0 = effects.TryGetFrame(EmotionEffectAtlas.NoticeId, 0);
        Assert.NotNull(frame0);
        Assert.True(frame0!.Value.Image.Width >= 8 && frame0.Value.Image.Height >= 8);

        var frameMid = effects.TryGetFrame(EmotionEffectAtlas.NoticeId, 4);
        Assert.NotNull(frameMid);
        // Mid anim uses a larger OAM pose than the opening 8×8 tile.
        Assert.True(
            frameMid!.Value.Image.Width * frameMid.Value.Image.Height >=
            frame0.Value.Image.Width * frame0.Value.Image.Height);

        // NOTICE palette is cyan chroma — composed ink must be remapped to white, not cyan.
        var img = frameMid.Value.Image;
        var white = 0;
        var cyan = 0;
        for (var i = 0; i < img.Pixels.Length; i += 4)
        {
            if (img.Pixels[i + 3] < 200)
                continue;
            if (img.Pixels[i] < 40 && img.Pixels[i + 1] > 200 && img.Pixels[i + 2] > 200)
                cyan++;
            if (img.Pixels[i] > 200 && img.Pixels[i + 1] > 200 && img.Pixels[i + 2] > 200)
                white++;
        }
        Assert.True(white >= 8, $"Expected white NOTICE ink, got white={white} cyan={cyan}");
        Assert.True(cyan == 0, $"NOTICE must not blit raw cyan chroma, got {cyan}");
    }

    [Fact]
    public void EmotionSmileUsesSignedByteOamX()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        var baserom = Path.Combine(root, "baserom.gba");
        if (!File.Exists(baserom)) return;

        var rom = RomImage.Open(baserom);
        var effects = new EmotionEffectAtlas(root, rom);
        var frame = effects.TryGetFrame(EmotionEffectAtlas.SmileId, 20);
        Assert.NotNull(frame);
        // With correct s8 X, smile poses stay compact above the head — not a 200px-wide scatter.
        Assert.True(frame!.Value.Image.Width <= 64, $"Smile width {frame.Value.Image.Width} looks like bad OAM X");
        Assert.True(frame.Value.Image.Height <= 80, $"Smile height {frame.Value.Image.Height}");
    }

    [Fact]
    public void EmotionEffectAtlasUsesRomNotDrawnPlaceholder()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        // Prefer built ROM — retail VAs are wrong there; name lookup must still work.
        var romPath = Path.Combine(root, "pmd_red.gba");
        if (!File.Exists(romPath))
            romPath = Path.Combine(root, "baserom.gba");
        if (!File.Exists(romPath)) return;

        var rom = RomImage.Open(romPath);
        Assert.True(EmotionEffectAtlas.ResolveEffectSiroOffset(rom, "efob088") >= 0);

        var effects = new EmotionEffectAtlas(repositoryRoot: null, rom: rom);
        Assert.Equal(EmotionEffectSource.Rom, effects.TryGetSource(EmotionEffectAtlas.NoticeId));
        var frame = effects.TryGetFrame(EmotionEffectAtlas.NoticeId, 4);
        Assert.NotNull(frame);
        Assert.True(frame!.Value.Image.Width * frame.Value.Image.Height > 64);

        var img = frame.Value.Image;
        var white = 0;
        var cyan = 0;
        for (var i = 0; i < img.Pixels.Length; i += 4)
        {
            if (img.Pixels[i + 3] < 200) continue;
            if (img.Pixels[i] < 40 && img.Pixels[i + 1] > 200 && img.Pixels[i + 2] > 200) cyan++;
            if (img.Pixels[i] > 200 && img.Pixels[i + 1] > 200 && img.Pixels[i + 2] > 200) white++;
        }
        Assert.True(white >= 8, $"Expected white NOTICE ink, got white={white} cyan={cyan}");
        Assert.True(cyan == 0, $"NOTICE must not blit raw cyan chroma, got {cyan}");
    }

    [Fact]
    public void EmotionEffectAtlasLoadsNoticeFromBuiltRomByName()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        var built = Path.Combine(root, "pmd_red.gba");
        if (!File.Exists(built)) return;

        var rom = RomImage.Open(built);
        // Hardcoded retail VA must NOT be valid on this smaller custom ROM.
        var retailOff = rom.PointerToOffset(0x98170B4u);
        Assert.True(retailOff < 0 || retailOff >= rom.Length ||
                    System.Text.Encoding.ASCII.GetString(rom.Slice(Math.Max(0, retailOff), 4)) is not ("SIRO" or "SIR0"));

        var effects = new EmotionEffectAtlas(null, rom);
        Assert.Equal(EmotionEffectSource.Rom, effects.TryGetSource(EmotionEffectAtlas.NoticeId));
        Assert.Equal(EmotionEffectSource.Rom, effects.TryGetSource(EmotionEffectAtlas.SmileId));
        Assert.NotNull(effects.TryGetFrame(EmotionEffectAtlas.SweatId, 0));
    }

    [Fact]
    public void GbaChromaKeysTealPaddingAndFindsContentBottom()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        var path = Path.Combine(root, "graphics", "ax", "mon", "charmander", "sprite_1.png");
        if (!File.Exists(path)) return;

        var image = RgbaImage.FromPng(File.ReadAllBytes(path));
        Assert.NotNull(image);
        GbaChroma.KeyOut(image!);
        var bottom = GbaChroma.ContentBottom(image);
        Assert.True(bottom >= 0 && bottom < image!.Height - 4,
            $"Expected feet above chroma pad, bottom={bottom} height={image.Height}");
    }

    [Fact]
    public void FootAnchorCentersFlippedCharmanderOnShadow()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        var path = Path.Combine(root, "graphics", "ax", "mon", "charmander", "sprite_7.png");
        if (!File.Exists(path)) return;

        var image = RgbaImage.FromPng(File.ReadAllBytes(path));
        Assert.NotNull(image);
        GbaChroma.KeyOut(image!);

        Assert.True(GbaChroma.TryGetFootAnchor(image!, flipH: false, out var westX, out _));
        Assert.True(GbaChroma.TryGetFootAnchor(image, flipH: true, out var eastX, out _));

        var mid = image.Width / 2;
        // West sheet: feet left of center; east flip mirrors them to the right.
        Assert.True(westX < mid - 2, $"Expected west feet left of center, got {westX} mid={mid}");
        Assert.True(eastX > mid + 2, $"Expected east feet right of center, got {eastX} mid={mid}");
        Assert.Equal(image.Width - 1, westX + eastX);
    }

    private static string? FindRepoRoot()
    {
        var dir = new DirectoryInfo(AppContext.BaseDirectory);
        while (dir is not null)
        {
            if (Directory.Exists(Path.Combine(dir.FullName, "graphics", "ax", "mon", "charmander")))
                return dir.FullName;
            dir = dir.Parent;
        }
        // WSL repo path used by Windows mirror tests.
        const string wsl = @"\\wsl$\Ubuntu\home\username\Github\pmd-red";
        if (Directory.Exists(Path.Combine(wsl, "graphics", "ax", "mon", "charmander")))
            return wsl;
        var local = "/home/username/Github/pmd-red";
        return Directory.Exists(Path.Combine(local, "graphics", "ax", "mon", "charmander")) ? local : null;
    }
}
