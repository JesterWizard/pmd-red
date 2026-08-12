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
        // Overhead emotions live in shared efob001 (gUnknown_80B9CC4), not efob088.
        Assert.True(EmotionEffectAtlas.ResolveEffectSiroOffset(rom, "efob001") >= 0);

        var frame0 = effects.TryGetFrame(EmotionEffectAtlas.NoticeId, 0);
        Assert.NotNull(frame0);
        // Retail NOTICE is a tall thin "!" (8×16) from efob001 anim 0.
        Assert.True(frame0!.Value.Image.Width <= 12, $"NOTICE width {frame0.Value.Image.Width}");
        Assert.True(frame0.Value.Image.Height >= 12, $"NOTICE height {frame0.Value.Image.Height}");

        var frameMid = effects.TryGetFrame(EmotionEffectAtlas.NoticeId, 4);
        Assert.NotNull(frameMid);
        Assert.True(frameMid!.Value.Image.Height >= 12);

        // Overworld palet bank 0 (unk8): black outline + white/blue fills — not cyan mask.
        var img = frameMid.Value.Image;
        var white = 0;
        var black = 0;
        var cyan = 0;
        for (var i = 0; i < img.Pixels.Length; i += 4)
        {
            if (img.Pixels[i + 3] < 200)
                continue;
            var r = img.Pixels[i];
            var g = img.Pixels[i + 1];
            var b = img.Pixels[i + 2];
            if (r < 40 && g > 200 && b > 200)
                cyan++;
            if (r > 200 && g > 200 && b > 200)
                white++;
            if (r < 40 && g < 40 && b < 40)
                black++;
        }
        Assert.True(cyan == 0, $"NOTICE must not blit raw cyan chroma, got {cyan}");
        Assert.True(white + black >= 8, $"Expected pal0 ink (white/black), got white={white} black={black}");
        Assert.Equal(0, EmotionEffectAtlas.SharedPaletteBank(EmotionEffectAtlas.NoticeId));
    }

    [Fact]
    public void EmotionQuestionLooksLikeQuestionMark()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        var baserom = Path.Combine(root, "baserom.gba");
        if (!File.Exists(baserom)) return;

        var rom = RomImage.Open(baserom);
        var effects = new EmotionEffectAtlas(root, rom);
        var frame = effects.TryGetFrame(EmotionEffectAtlas.QuestionId, 8);
        Assert.NotNull(frame);
        // "?" is tall with a hook at the top — taller than wide.
        Assert.True(frame!.Value.Image.Height > frame.Value.Image.Width,
            $"QUESTION expected tall ?, got {frame.Value.Image.Width}x{frame.Value.Image.Height}");
        Assert.True(CountOpaque(frame.Value.Image) >= 20);
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
        Assert.True(EmotionEffectAtlas.ResolveEffectSiroOffset(rom, "efob001") >= 0);

        var effects = new EmotionEffectAtlas(repositoryRoot: null, rom: rom);
        Assert.Equal(EmotionEffectSource.Rom, effects.TryGetSource(EmotionEffectAtlas.NoticeId));
        var frame = effects.TryGetFrame(EmotionEffectAtlas.NoticeId, 4);
        Assert.NotNull(frame);
        Assert.True(frame!.Value.Image.Height >= 12);

        var img = frame.Value.Image;
        var white = 0;
        var black = 0;
        var cyan = 0;
        for (var i = 0; i < img.Pixels.Length; i += 4)
        {
            if (img.Pixels[i + 3] < 200) continue;
            var r = img.Pixels[i];
            var g = img.Pixels[i + 1];
            var b = img.Pixels[i + 2];
            if (r < 40 && g > 200 && b > 200) cyan++;
            if (r > 200 && g > 200 && b > 200) white++;
            if (r < 40 && g < 40 && b < 40) black++;
        }
        Assert.True(cyan == 0, $"NOTICE must not blit raw cyan chroma, got {cyan}");
        Assert.True(white + black >= 8, $"Expected pal0 ink (white/black), got white={white} black={black}");
    }

    [Fact]
    public void EmotionEffectAtlasLoadsNoticeFromBuiltRomByName()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        var built = Path.Combine(root, "pmd_red.gba");
        if (!File.Exists(built)) return;

        var rom = RomImage.Open(built);
        var effects = new EmotionEffectAtlas(null, rom);
        Assert.Equal(EmotionEffectSource.Rom, effects.TryGetSource(EmotionEffectAtlas.NoticeId));
        Assert.Equal(EmotionEffectSource.Rom, effects.TryGetSource(EmotionEffectAtlas.SmileId));
        Assert.NotNull(effects.TryGetFrame(EmotionEffectAtlas.SweatId, 0));
    }

    [Fact]
    public void EmotionSmileAndQuestionHaveNoChromaBleed()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        var romPath = Path.Combine(root, "pmd_red.gba");
        if (!File.Exists(romPath))
            romPath = Path.Combine(root, "baserom.gba");
        if (!File.Exists(romPath)) return;

        var rom = RomImage.Open(romPath);
        var effects = new EmotionEffectAtlas(null, rom);

        foreach (var id in new[]
                 {
                     EmotionEffectAtlas.SmileId,
                     EmotionEffectAtlas.QuestionId,
                     EmotionEffectAtlas.AngryId,
                     EmotionEffectAtlas.NoticeId,
                 })
        {
            var frame = effects.TryGetFrame(id, 8);
            Assert.NotNull(frame);
            var img = frame!.Value.Image;
            var greenChroma = 0;
            var cyanChroma = 0;
            var ink = 0;
            for (var i = 0; i < img.Pixels.Length; i += 4)
            {
                if (img.Pixels[i + 3] < 200)
                    continue;
                var r = img.Pixels[i];
                var g = img.Pixels[i + 1];
                var b = img.Pixels[i + 2];
                if (Math.Abs(r - 0x4F) <= 16 && Math.Abs(g - 0x97) <= 16 && Math.Abs(b - 0x4F) <= 16)
                    greenChroma++;
                if (r < 40 && g > 200 && b > 200)
                    cyanChroma++;
                else
                    ink++;
            }
            Assert.True(greenChroma == 0, $"efob{id} still has green chroma pixels ({greenChroma})");
            Assert.True(cyanChroma == 0, $"efob{id} still has cyan chroma pixels ({cyanChroma})");
            Assert.True(ink >= 8, $"efob{id} expected visible ink, got {ink}");
        }

        Assert.Equal(11, EmotionEffectAtlas.SharedPaletteBank(EmotionEffectAtlas.SmileId));
        Assert.Equal(11, EmotionEffectAtlas.SharedPaletteBank(EmotionEffectAtlas.AngryId));
        Assert.Equal(3, EmotionEffectAtlas.SharedPaletteBank(EmotionEffectAtlas.ShockId));
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

    [Fact]
    public void BossMultiPieceAssemblyIncludesVramPadding()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "moltres.h")))
            return;

        Assert.True(AxPoseAssembler.IsMultiPieceMonster(root, "moltres"));
        // {NULL,32} pads between gfx chunks — without them body OAM is 448 bytes and gaps appear.
        Assert.Equal(512, AxPoseAssembler.MeasureSpriteTileBytes(root, "moltres", spriteNum: 1));

        var assembled = AxPoseAssembler.TryAssemble(root, "moltres", poseNumber: 1);
        Assert.NotNull(assembled);
        Assert.True(assembled!.Width >= 64, $"Assembled width {assembled.Width}");
        Assert.True(assembled.Height >= 28, $"Assembled height {assembled.Height}");
        Assert.True(CountOpaque(assembled) >= 1000, $"Moltres assembly too empty: opaque={CountOpaque(assembled)}");
    }

    [Theory]
    [InlineData("hooh", 275, 64, 64)]
    [InlineData("articuno", 144, 64, 32)]
    [InlineData("groudon", 411, 64, 64)]
    [InlineData("moltres", 146, 64, 28)]
    public void BossSpeciesSpriteIsFullOamNotSheetScrap(
        string folder, int speciesId, int minW, int minH)
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", folder + ".h")))
            return;

        // Single-OAM bosses still use compound {NULL,pad}/sprite_N_k VRAM — must not
        // be treated as ordinary sheet mons (Ho-Oh sheet_1 is a 56×8 strip).
        Assert.True(
            AxPoseAssembler.IsMultiPieceMonster(root, folder),
            $"{folder} should use compound VRAM assembly");

        var atlas = new ActorSpriteAtlas(root);
        var species = atlas.TryGetSpeciesSprite(speciesId);
        Assert.NotNull(species);
        Assert.True(
            species!.Width >= minW && species.Height >= minH,
            $"{folder} species sprite {species.Width}x{species.Height} looks like a sheet scrap (want >={minW}x{minH})");

        var idle = atlas.TryGetAnimatedSprite(
            speciesId, GroundScriptVm.AnimIdle, GroundScriptVm.DirSouth, tickFrames: 0);
        Assert.NotNull(idle);
        Assert.True(idle!.Value.Image.Width >= minW);
        Assert.True(idle.Value.Image.Height >= minH);
    }

    [Fact]
    public void CharmanderNorthIdleUsesRetailVerticalOamNotSoutheastPose()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "charmander.h")))
            return;

        var atlas = new ActorSpriteAtlas(root);
        var north = atlas.TryGetAnimatedSprite(
            speciesId: 4,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirNorth,
            tickFrames: 0);
        Assert.NotNull(north);

        // Retail Pose13 is ST_OAM_V_RECTANGLE SIZE_2 → 16×32 (not a sheet scrap).
        var poseNorth = AxPoseAssembler.TryAssemble(root, "charmander", poseNumber: 13);
        var poseSe = AxPoseAssembler.TryAssemble(root, "charmander", poseNumber: 5);
        Assert.NotNull(poseNorth);
        Assert.NotNull(poseSe);
        Assert.Equal(16, poseNorth!.Width);
        Assert.Equal(32, poseNorth.Height);
        Assert.True(ImagesEqual(north!.Value.Image, poseNorth),
            "Charmander north idle must use Pose13 (16×32 back view)");
        Assert.False(ImagesEqual(north.Value.Image, poseSe!),
            "Charmander north idle must not use SE Pose5");
    }

    [Fact]
    public void SmallPokemonUseSheetFramesNotMultiOamAssembly()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "bulbasaur.h")))
            return;

        // Dual-OAM poses with a single gfx chunk are normal; only compound VRAM
        // layouts (NULL pad / sprite_N_1) need AxPoseAssembler.
        Assert.False(AxPoseAssembler.IsMultiPieceMonster(root, "bulbasaur"));
        Assert.False(AxPoseAssembler.IsMultiPieceMonster(root, "charmander"));
        Assert.True(AxPoseAssembler.IsMultiPieceMonster(root, "moltres"));

        var atlas = new ActorSpriteAtlas(root);
        var bulba = atlas.TryGetAnimatedSprite(
            speciesId: 1,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirSouth,
            tickFrames: 0);
        Assert.NotNull(bulba);
        Assert.True(bulba!.Value.Image.Width <= 40, $"Bulbasaur too wide (boxy): {bulba.Value.Image.Width}");
        Assert.True(bulba.Value.Image.Height <= 40, $"Bulbasaur too tall: {bulba.Value.Image.Height}");
        Assert.True(bulba.Value.Image.Width >= 16 && bulba.Value.Image.Height >= 16);
    }

    [Fact]
    public void MoltresAssemblesMultiPiecePoseLargerThanSingleOam()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "moltres.h")))
            return;

        Assert.True(AxPoseAssembler.IsMultiPieceMonster(root, "moltres"));
        var pieces = AxPoseAssembler.ParsePose(root, "moltres", poseNumber: 1);
        Assert.NotNull(pieces);
        Assert.True(pieces!.Count >= 5, $"Expected multi-OAM pose, got {pieces.Count}");

        var assembled = AxPoseAssembler.TryAssemble(root, "moltres", poseNumber: 1);
        Assert.NotNull(assembled);
        // Single piece sprite_1 is 32×24; full bird must be substantially wider.
        Assert.True(assembled!.Width >= 64, $"Assembled width {assembled.Width}");
        Assert.True(assembled.Height >= 28, $"Assembled height {assembled.Height}");
        Assert.True(CountOpaque(assembled) >= 400, $"Assembled too empty ({CountOpaque(assembled)})");

        var atlas = new ActorSpriteAtlas(root);
        var south = atlas.TryGetAnimatedSprite(
            speciesId: 146,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirSouth,
            tickFrames: 0);
        Assert.NotNull(south);
        Assert.True(south!.Value.Image.Width >= 64);

        // Multi-piece idle must not cycle mismatched OAM scraps (jitter).
        var north0 = atlas.TryGetAnimatedSprite(
            speciesId: 146,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirNorth,
            tickFrames: 0,
            isMoving: true);
        var north24 = atlas.TryGetAnimatedSprite(
            speciesId: 146,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirNorth,
            tickFrames: 24,
            isMoving: true);
        Assert.NotNull(north0);
        Assert.NotNull(north24);
        Assert.Equal(north0!.Value.Image.Width, north24!.Value.Image.Width);
        Assert.Equal(north0.Value.Image.Height, north24.Value.Image.Height);
        Assert.True(north0.Value.Image.Width >= 40, $"North pose too narrow: {north0.Value.Image.Width}");
        // Must not be a raw OAM scrap (e.g. 8×32).
        Assert.True(north0.Value.Image.Width * north0.Value.Image.Height >= 40 * 40);
    }

    [Fact]
    public void DungeonShellFallbackPrefersMidOverEntryForBossEnd()
    {
        var map = new GroundMapDefinition
        {
            MapId = 197,
            BmaName = "D09P03m",
            BplName = "D09P03",
            BpcName = "D09P03c",
            RenderMode = 11,
        };
        var mid = GroundMapIndexer.TryDungeonEntryFallback(map);
        Assert.NotNull(mid);
        Assert.Equal("D09P02m", mid!.BmaName);
        Assert.Equal("D09P02", mid.BplName);
        Assert.Equal("D09P02c", mid.BpcName);

        var all = GroundMapIndexer.EnumerateDungeonShellFallbacks(map).Select(m => m.BmaName).ToArray();
        Assert.Equal(new[] { "D09P02m", "D09P01m" }, all);
    }

    [Fact]
    public void SilentChasmDualLayerCompositeShowsCliffUnderClouds()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        var bplPath = Path.Combine(root, "data", "map_bg", "D05P01.bpl");
        var bpcPath = Path.Combine(root, "data", "map_bg", "D05P01c.bpc");
        var bmaPath = Path.Combine(root, "data", "map_bg", "D05P01m.bma");
        if (!File.Exists(bplPath) || !File.Exists(bpcPath) || !File.Exists(bmaPath))
            return;

        var preview = GroundMapRenderer.Render(
            "Silent Chasm",
            File.ReadAllBytes(bplPath),
            File.ReadAllBytes(bpcPath),
            File.ReadAllBytes(bmaPath));
        Assert.NotNull(preview.Png);
        var image = RgbaImage.FromPng(preview.Png!);
        Assert.NotNull(image);

        // Cliff art lives in the lower half; opaque black from the cloud layer must not wipe it.
        var colorful = 0;
        for (var y = image!.Height / 2; y < image.Height; y += 4)
        for (var x = 0; x < Math.Min(image.Width, 400); x += 4)
        {
            var o = (y * image.Width + x) * 4;
            var r = image.Pixels[o];
            var g = image.Pixels[o + 1];
            var b = image.Pixels[o + 2];
            if (r > 40 || g > 40 || b > 40)
                colorful++;
        }

        Assert.True(colorful >= 80,
            $"Expected cliff colors under clouds in lower half, colorful={colorful}");
    }

    [Fact]
    public void ZapdosAssemblesMultiPiecePoseWithoutBlueGarbage()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "zapdos.h")))
            return;

        Assert.True(AxPoseAssembler.IsMultiPieceMonster(root, "zapdos"));
        var assembled = AxPoseAssembler.TryAssemble(root, "zapdos", poseNumber: 1);
        Assert.NotNull(assembled);
        Assert.True(assembled!.Width >= 48, $"Assembled width {assembled.Width}");
        Assert.True(assembled.Height >= 40, $"Assembled height {assembled.Height}");

        var opaque = 0;
        var blueish = 0;
        for (var i = 0; i + 3 < assembled.Pixels.Length; i += 4)
        {
            if (assembled.Pixels[i + 3] < 16)
                continue;
            opaque++;
            var r = assembled.Pixels[i];
            var g = assembled.Pixels[i + 1];
            var b = assembled.Pixels[i + 2];
            if (b > 180 && b > r + 40 && b > g + 40)
                blueish++;
        }

        Assert.True(opaque >= 400, $"Assembled too empty ({opaque})");
        Assert.True(blueish * 4 < opaque,
            $"Zapdos pose looks like blue OAM garbage ({blueish}/{opaque})");
    }

    [Theory]
    [InlineData(0, 1)]   // South → Pose1
    [InlineData(2, 7)]   // East  → Pose7 (3 frames × dir)
    [InlineData(4, 13)]  // North → Pose13
    [InlineData(6, 19)]  // West  → Pose19
    public void IdlePoseForDirectionUsesThreeFramesPerFacing(int dir, int poseNumber)
    {
        // AX idle groups are Pose(1+3d)…Pose(3+3d); first frame is the static idle.
        Assert.Equal(poseNumber, AxPoseAssembler.IdlePoseForDirection(dir));
    }

    [Fact]
    public void BulbasaurNorthIdleMatchesAxNorthPoseNotSoutheast()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "bulbasaur.h")))
            return;

        var atlas = new ActorSpriteAtlas(root);
        var north = atlas.TryGetAnimatedSprite(
            speciesId: 1,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirNorth,
            tickFrames: 0);
        Assert.NotNull(north);

        // Pose13 = north idle; Pose5 = SE mid-frame (wrong if IdlePoseForDirection was dir+1).
        var poseNorth = AxPoseAssembler.TryAssemble(root, "bulbasaur", poseNumber: 13);
        var poseWrong = AxPoseAssembler.TryAssemble(root, "bulbasaur", poseNumber: 5);
        Assert.NotNull(poseNorth);
        Assert.NotNull(poseWrong);
        Assert.True(ImagesEqual(north!.Value.Image, poseNorth!),
            "North idle must assemble AX Pose13 (back view), not Pose5 (SE)");
        Assert.False(ImagesEqual(north.Value.Image, poseWrong!),
            "North idle must not use SE Pose5");
    }

    [Fact]
    public void CharmanderJumpSurpriseNorthIsFullPoseNotSheetScrap()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "charmander.h")))
            return;

        // SELECT_ANIMATION(11) from JUMP_SURPRISE_FUNC — must use AX anim poses,
        // not north sheet scrap sprite_13 (16×32).
        var atlas = new ActorSpriteAtlas(root);
        var jump = atlas.TryGetAnimatedSprite(
            speciesId: 4,
            animationId: 11,
            direction: GroundScriptVm.DirNorth,
            tickFrames: 0);
        Assert.NotNull(jump);
        Assert.True(jump!.Value.Image.Width >= 24,
            $"Charmander jump north too narrow (sheet scrap?): {jump.Value.Image.Width}");
        Assert.True(jump.Value.Image.Height >= 24,
            $"Charmander jump north too short: {jump.Value.Image.Height}");
    }

    [Fact]
    public void DialogueHudFitsThreeTextLines()
    {
        Assert.Equal(3, GbaDialogueHud.MaxTextLines);
        Assert.True(GbaDialogueHud.TextTopPad + GbaDialogueHud.MaxTextLines * GbaDialogueHud.LineHeight
            <= GbaDialogueHud.BoxH);
    }

    private static bool ImagesEqual(RgbaImage a, RgbaImage b)
    {
        if (a.Width != b.Width || a.Height != b.Height)
            return false;
        return a.Pixels.AsSpan().SequenceEqual(b.Pixels);
    }

    private static int CountOpaque(RgbaImage img)
    {
        var n = 0;
        for (var i = 3; i < img.Pixels.Length; i += 4)
        {
            if (img.Pixels[i] > 16)
                n++;
        }
        return n;
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
