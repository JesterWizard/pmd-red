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

    [Theory]
    [InlineData(22, true, false)]  // 0x100D — hold first (Moltres wings)
    [InlineData(23, true, false)]  // 0x100E
    [InlineData(5, false, true)]   // 0x800 — loop
    [InlineData(2, false, false)]  // 0x300 — play once, hold last
    [InlineData(11, true, false)]  // 0x1006 JUMP_SURPRISE hold first
    public void ScriptAnimationFlagsMatchRetail(int scriptAnim, bool holdFirst, bool loops)
    {
        Assert.Equal(holdFirst, GroundAnimMapping.HoldFirstFrame(scriptAnim));
        Assert.Equal(loops, GroundAnimMapping.Loops(scriptAnim));
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
    public void MoltresScriptAnim22_HoldsFirstWingFrameStatic()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "moltres.h")))
            return;

        // Retail gUnknown_8117F64[22]=0x100D → re-init every frame → freeze on first AX frame.
        // Looping 229↔230 is the open-wing / "slumped" flicker in Scene Play.
        Assert.True(GroundAnimMapping.HoldFirstFrame(22));
        Assert.False(GroundAnimMapping.Loops(22));

        var atlas = new ActorSpriteAtlas(root);
        var a = atlas.TryGetAnimatedSprite(146, animationId: 22, direction: 0, tickFrames: 0);
        var b = atlas.TryGetAnimatedSprite(146, animationId: 22, direction: 0, tickFrames: 30);
        var c = atlas.TryGetAnimatedSprite(146, animationId: 22, direction: 0, tickFrames: 90);
        Assert.NotNull(a);
        Assert.NotNull(b);
        Assert.NotNull(c);
        Assert.True(
            a!.Value.Image.Pixels.SequenceEqual(b!.Value.Image.Pixels),
            "Anim 22 must stay on first wing frame across ticks");
        Assert.True(a.Value.Image.Pixels.SequenceEqual(c!.Value.Image.Pixels));

        var idle = atlas.TryGetAnimatedSprite(146, GroundScriptVm.AnimIdle, 0, 0);
        Assert.NotNull(idle);
        Assert.False(
            a.Value.Image.Pixels.SequenceEqual(idle!.Value.Image.Pixels),
            "Anim 22 must not draw idle pose1");

        Assert.True(a.Value.Image.Width >= 72, $"Wing span too narrow: {a.Value.Image.Width}");
        Assert.True(CountOpaque(a.Value.Image) >= 600, $"Wing pose too empty: {CountOpaque(a.Value.Image)}");
        var (tipL, tipR) = WingTipOpaque(a.Value.Image, tipCols: 8);
        Assert.True(tipL >= 20 && tipR >= 20, $"Wing tips L={tipL} R={tipR}");
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

        // Pose230 piece0 is OAM 32×16 at tileNum 0 — shared VRAM fills the strip.
        var pieces = AxPoseAssembler.ParsePose(root, "moltres", poseNumber: 230);
        Assert.NotNull(pieces);
        Assert.True(pieces!.Count >= 2);
        Assert.Equal(0, pieces[0].TileNum);
        Assert.Equal(8, pieces[1].TileNum);

        var assembled = AxPoseAssembler.TryAssemble(root, "moltres", poseNumber: 230);
        Assert.NotNull(assembled);
        Assert.True(CountOpaque(assembled!) >= 700, $"Wing pose too empty: {CountOpaque(assembled)}");
        Assert.True(assembled.Width >= 72, $"Wing span too narrow: {assembled.Width}");
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
    public void HeadersWithoutTiles_MultiPieceBossDoesNotDrawSheetScrap()
    {
        // Headers present ⇒ IsMultiPiece, but missing 4bpp must not fall back to a
        // one-wing / 32×24 scrap — that is the Scene Play "Moltres cut off" bug.
        var root = FindRepoRoot();
        if (root is null) return;
        var header = Path.Combine(root, "src", "data", "ax", "moltres.h");
        var png = Path.Combine(root, "graphics", "ax", "mon", "moltres", "sprite_1.png");
        if (!File.Exists(header) || !File.Exists(png))
            return;

        var tmp = Path.Combine(Path.GetTempPath(), "rescue-temple-ax-hdr-only-" + Guid.NewGuid().ToString("N"));
        try
        {
            Directory.CreateDirectory(Path.Combine(tmp, "src", "data", "ax"));
            File.Copy(header, Path.Combine(tmp, "src", "data", "ax", "moltres.h"));
            var monDir = Path.Combine(tmp, "graphics", "ax", "mon", "moltres");
            Directory.CreateDirectory(monDir);
            File.Copy(png, Path.Combine(monDir, "sprite_1.png"));
            var jsonDir = Path.Combine(tmp, "data", "monster");
            Directory.CreateDirectory(jsonDir);
            File.Copy(
                Path.Combine(root, "data", "monster", "monster_data.json"),
                Path.Combine(jsonDir, "monster_data.json"));

            Assert.True(AxPoseAssembler.IsMultiPieceMonster(tmp, "moltres"));
            Assert.Null(AxPoseAssembler.TryAssemble(tmp, "moltres", poseNumber: 1));

            var atlas = new ActorSpriteAtlas(tmp);
            Assert.Null(atlas.TryGetSpeciesSprite(146));
            Assert.Null(atlas.TryGetAnimatedSprite(146, animationId: 22, direction: 0, tickFrames: 0));
        }
        finally
        {
            try { Directory.Delete(tmp, recursive: true); } catch { /* best-effort */ }
        }
    }

    [Fact]
    public void MoltresAssembledPose_HasBalancedWingTips()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "moltres.h")))
            return;

        // User repro: viewer's-right wing ends on a hard vertical cut (missing +X OAMs).
        foreach (var pose in new[] { 1, 230 })
        {
            var img = AxPoseAssembler.TryAssemble(root, "moltres", pose);
            Assert.NotNull(img);
            Assert.True(img!.Width >= 72, $"Pose{pose} width {img.Width}");
            var (tipL, tipR) = WingTipOpaque(img, tipCols: 8);
            Assert.True(tipL >= 20, $"Pose{pose} left wing tip empty ({tipL})");
            Assert.True(tipR >= 20, $"Pose{pose} right wing tip empty ({tipR}) — clipped boss");
            Assert.True(
                tipR >= tipL / 3 && tipL >= tipR / 3,
                $"Pose{pose} wing tips unbalanced L={tipL} R={tipR}");
        }
    }

    [Fact]
    public void TryAssemble_FailsClosedWhenSharedVramCannotCoverAllOamTiles()
    {
        // If later OAM tileNums are past VRAM, do not return a half-assembled bird.
        var root = FindRepoRoot();
        if (root is null) return;
        var header = Path.Combine(root, "src", "data", "ax", "moltres.h");
        if (!File.Exists(header)) return;

        var tmp = Path.Combine(Path.GetTempPath(), "rescue-temple-short-vram-" + Guid.NewGuid().ToString("N"));
        try
        {
            Directory.CreateDirectory(Path.Combine(tmp, "src", "data", "ax"));
            File.Copy(header, Path.Combine(tmp, "src", "data", "ax", "moltres.h"));
            var srcDir = Path.Combine(root, "graphics", "ax", "mon", "moltres");
            var dstDir = Path.Combine(tmp, "graphics", "ax", "mon", "moltres");
            Directory.CreateDirectory(dstDir);
            // Only enough tiles for the first couple of OAMs — later tileNums miss.
            foreach (var name in new[] { "sprite_1.png", "sprite_1.4bpp", "sprite_1.4bpp.lz",
                         "sprite_1_1.4bpp", "sprite_1_1.4bpp.lz", "sprite_2.4bpp", "sprite_2.4bpp.lz" })
            {
                var src = Path.Combine(srcDir, name);
                if (File.Exists(src))
                    File.Copy(src, Path.Combine(dstDir, name));
            }

            Assert.Null(AxPoseAssembler.TryAssemble(tmp, "moltres", poseNumber: 1));
        }
        finally
        {
            try { Directory.Delete(tmp, recursive: true); } catch { /* best-effort */ }
        }
    }

    [Fact]
    public void CharmanderJumpAnim_ExposesAxFrameOffsets()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "charmander.h")))
            return;

        // Script anim 11 is 0x1006 → HoldFirstFrame; offsets come from frame 0.
        Assert.True(GroundAnimMapping.HoldFirstFrame(11));
        var seq = AxAnimSequence.TryLoad(
            root, "charmander", GroundAnimMapping.ToAxAnimIndex(11), direction: 4);
        Assert.NotNull(seq);
        Assert.Contains(seq!.Frames, f => f.OffsetY != 0);

        var frame = seq.FrameAtTick(0);
        Assert.True(frame.OffsetY != 0, "JUMP_SURPRISE first frame should lift via OffsetY");

        var atlas = new ActorSpriteAtlas(root);
        var drawn = atlas.TryGetAnimatedSprite(
            speciesId: 4, animationId: 11, direction: 4, tickFrames: 20);
        Assert.NotNull(drawn);
        Assert.Equal(frame.OffsetX, drawn!.Value.OffsetX);
        Assert.Equal(frame.OffsetY, drawn.Value.OffsetY);
    }

    private static (int Left, int Right) WingTipOpaque(RgbaImage image, int tipCols)
    {
        var left = 0;
        var right = 0;
        for (var y = 0; y < image.Height; y++)
        {
            for (var x = 0; x < tipCols && x < image.Width; x++)
            {
                if (image.Pixels[(y * image.Width + x) * 4 + 3] >= 8)
                    left++;
            }

            for (var x = Math.Max(0, image.Width - tipCols); x < image.Width; x++)
            {
                if (image.Pixels[(y * image.Width + x) * 4 + 3] >= 8)
                    right++;
            }
        }

        return (left, right);
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
