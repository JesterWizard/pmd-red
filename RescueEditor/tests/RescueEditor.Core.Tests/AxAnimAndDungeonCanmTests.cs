using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class AxAnimAndDungeonCanmTests
{
    [Theory]
    [InlineData(22, 13)]
    [InlineData(23, 14)]
    [InlineData(24, 15)]
    [InlineData(25, 16)]
    [InlineData(5, 0)]
    public void ScriptAnimationMapsToAxIndex(int scriptAnim, int expectedAx)
    {
        Assert.Equal(expectedAx, GroundAnimMapping.ToAxAnimIndex(scriptAnim));
    }

    [Fact]
    public void MoltresWingAnimSequence_CyclesPoseIds229And230()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "moltres.h")))
            return;

        // Script SELECT_ANIMATION(22) → AX anim 13 → AnimTable14 → Anims_14_1.
        var seq = AxAnimSequence.TryLoad(root, "moltres", axAnimIndex: 13, direction: 0);
        Assert.NotNull(seq);
        Assert.True(seq!.Frames.Count >= 2);
        Assert.Equal(229, seq.Frames[0].PoseId);
        Assert.Equal(230, seq.Frames[1].PoseId);

        var poseA = seq.PoseIdAtTick(0);
        var poseB = seq.PoseIdAtTick(seq.Frames[0].DurationFrames);
        Assert.Equal(229, poseA);
        Assert.Equal(230, poseB);
    }

    [Fact]
    public void MoltresPoseId229_ResolvesViaPoseTableToWingSpread()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "moltres.h")))
            return;

        // poseId 229 aliases sMoltresPose230 in sAxPosesMoltres[] (deduped symbols).
        var assembled = AxPoseAssembler.TryAssemblePoseId(root, "moltres", poseId: 229);
        Assert.NotNull(assembled);
        Assert.True(assembled!.Width >= 64, $"Wing pose too narrow: {assembled.Width}");
        Assert.True(CountOpaque(assembled) >= 400);
    }

    [Fact]
    public void MoltresWingPose_UsesSharedVramTileNums()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "moltres.h")))
            return;

        // Pose230 piece0 is OAM 32×16 at tileNum 0, but sprite_206 is only 1 tile —
        // tiles 1–7 come from sprite_207 in the shared VRAM upload order.
        var pieces = AxPoseAssembler.ParsePose(root, "moltres", poseNumber: 230);
        Assert.NotNull(pieces);
        Assert.True(pieces!.Count >= 2);
        Assert.Equal(0, pieces[0].TileNum);
        Assert.Equal(8, pieces[1].TileNum);

        var assembled = AxPoseAssembler.TryAssemble(root, "moltres", poseNumber: 230);
        Assert.NotNull(assembled);
        // Shared VRAM must fill the left wing strip (independent assemble left it nearly empty).
        Assert.True(CountOpaque(assembled!) >= 700, $"Wing pose too empty: {CountOpaque(assembled)}");
        Assert.True(assembled.Width >= 72, $"Wing span too narrow: {assembled.Width}");
    }

    [Fact]
    public void MoltresScriptAnim22_AdvancesWingPoseAcrossTicks()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "moltres.h")))
            return;

        var atlas = new ActorSpriteAtlas(root);
        var a = atlas.TryGetAnimatedSprite(146, animationId: 22, direction: 0, tickFrames: 0);
        var b = atlas.TryGetAnimatedSprite(146, animationId: 22, direction: 0, tickFrames: 30);
        Assert.NotNull(a);
        Assert.NotNull(b);
        Assert.True(a!.Value.Image.Width >= 64);
        Assert.False(
            a.Value.Image.Pixels.SequenceEqual(b!.Value.Image.Pixels),
            "Moltres wing anim 22 should change pose across ticks");

        // Must not be frozen south idle (pose1) while script asks for wing flap.
        var idle = atlas.TryGetAnimatedSprite(146, GroundScriptVm.AnimIdle, 0, 0);
        Assert.NotNull(idle);
        Assert.False(
            a.Value.Image.Pixels.SequenceEqual(idle!.Value.Image.Pixels),
            "Anim 22 must not draw idle pose1");

        // Wing span must stay boss-sized (not a 32×24 sheet scrap).
        Assert.True(a.Value.Image.Width >= 72, $"Wing span too narrow: {a.Value.Image.Width}");
        Assert.True(CountOpaque(a.Value.Image) >= 600, $"Wing pose too empty: {CountOpaque(a.Value.Image)}");
    }

    [Fact]
    public void SingleOamBossMovingDoesNotFallBackToSheetScrap()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "hooh.h")))
            return;

        var atlas = new ActorSpriteAtlas(root);
        // Before the compound-VRAM IsMultiPiece fix, moving Ho-Oh returned sprite_1.png (56×8).
        var moving = atlas.TryGetAnimatedSprite(
            speciesId: 275,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirSouth,
            tickFrames: 24,
            isMoving: true);
        Assert.NotNull(moving);
        Assert.True(
            moving!.Value.Image.Width >= 64 && moving.Value.Image.Height >= 64,
            $"Ho-Oh moving idle is scrap-sized: {moving.Value.Image.Width}x{moving.Value.Image.Height}");
    }

    [Fact]
    public void PngOnlyMirrorWithoutAxHeadersCannotAssembleBossSprites()
    {
        // Reproduces the Windows sync-and-watch mirror: graphics/ax/mon PNGs without
        // src/data/ax/*.h or *.4bpp.lz — Scene Play then draws sprite_1.png scraps.
        var root = FindRepoRoot();
        if (root is null) return;
        var header = Path.Combine(root, "src", "data", "ax", "moltres.h");
        var png = Path.Combine(root, "graphics", "ax", "mon", "moltres", "sprite_1.png");
        if (!File.Exists(header) || !File.Exists(png))
            return;

        var tmp = Path.Combine(Path.GetTempPath(), "rescue-temple-png-only-" + Guid.NewGuid().ToString("N"));
        try
        {
            var monDir = Path.Combine(tmp, "graphics", "ax", "mon", "moltres");
            Directory.CreateDirectory(monDir);
            File.Copy(png, Path.Combine(monDir, "sprite_1.png"));
            // Species→folder map (otherwise atlas cannot resolve 146 → moltres).
            var jsonDir = Path.Combine(tmp, "data", "monster");
            Directory.CreateDirectory(jsonDir);
            File.Copy(
                Path.Combine(root, "data", "monster", "monster_data.json"),
                Path.Combine(jsonDir, "monster_data.json"));

            Assert.False(AxPoseAssembler.IsMultiPieceMonster(tmp, "moltres"));
            Assert.Null(AxPoseAssembler.TryAssemble(tmp, "moltres", poseNumber: 1));

            var atlas = new ActorSpriteAtlas(tmp);
            var species = atlas.TryGetSpeciesSprite(146);
            Assert.NotNull(species);
            Assert.True(
                species!.Width * species.Height < 40 * 40,
                $"PNG-only mirror should yield a scrap, got {species.Width}x{species.Height}");

            // Full decomp tree must still assemble the real boss frame.
            var full = AxPoseAssembler.TryAssemble(root, "moltres", poseNumber: 1);
            Assert.NotNull(full);
            Assert.True(full!.Width >= 64);
        }
        finally
        {
            try { Directory.Delete(tmp, recursive: true); } catch { /* best-effort */ }
        }
    }

    [Fact]
    public void MtBlazePeak_DungeonCanmAnimatesPaletteAcrossTicks()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        Assert.True(DungeonShellPreview.TryResolveTileset(rom, dungeonId: 10, floor: 100, out var tileset));
        Assert.Equal(67, tileset);

        var canm = DungeonCanmAnimation.TryLoad(rom, tileset);
        Assert.NotNull(canm);
        Assert.True(canm!.HasAnimations);
        Assert.Equal(32, canm.SlotCount);

        var (_, _, db) = CatalogBuilder.Build(rom);
        var scene = db.FindScene(197);
        Assert.NotNull(scene);

        var at0 = SceneCompositor.RenderMapBackground(rom, scene!, animTick: 0);
        var at24 = SceneCompositor.RenderMapBackground(rom, scene!, animTick: 24);
        Assert.NotNull(at0?.Png);
        Assert.NotNull(at24?.Png);
        Assert.False(
            at0!.Png!.SequenceEqual(at24!.Png!),
            "Mt. Blaze Peak dungeon canm should change lava colors across ticks");
    }

    private static int CountOpaque(RgbaImage image)
    {
        var n = 0;
        for (var i = 3; i < image.Pixels.Length; i += 4)
        {
            if (image.Pixels[i] >= 8)
                n++;
        }

        return n;
    }

    private static string? FindRepoRoot()
    {
        var dir = new DirectoryInfo(AppContext.BaseDirectory);
        while (dir is not null)
        {
            if (Directory.Exists(Path.Combine(dir.FullName, "graphics", "ax", "mon")))
                return dir.FullName;
            dir = dir.Parent;
        }

        const string local = "/home/username/Github/pmd-red";
        return Directory.Exists(Path.Combine(local, "graphics", "ax", "mon")) ? local : null;
    }

    private static string? FindUpwards(string fileName)
    {
        var dir = new DirectoryInfo(AppContext.BaseDirectory);
        while (dir is not null)
        {
            var candidate = Path.Combine(dir.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            dir = dir.Parent;
        }

        const string local = "/home/username/Github/pmd-red/baserom.gba";
        return File.Exists(local) ? local : null;
    }
}
