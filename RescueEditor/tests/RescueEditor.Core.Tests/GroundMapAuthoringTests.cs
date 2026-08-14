using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class GroundMapAuthoringTests
{
    [Fact]
    public void EncodeCollisionLayer_RoundTripsWalkableAndSolidRuns()
    {
        var solid = new bool[4 * 2];
        solid[4] = true;
        solid[5] = true;
        solid[6] = true;
        solid[7] = true;

        var encoded = BmaCollisionEncoder.EncodeLayer(solid, width: 4, height: 2);
        var decoded = BmaCollisionDecoder.DecodeCollisionLayer(encoded, width: 4, height: 2, out var consumed);

        Assert.Equal(encoded.Length, consumed);
        Assert.Equal(solid, decoded);
    }

    [Fact]
    public void EncodeCollisionLayer_RoundTripsCheckerboard()
    {
        var width = 8;
        var height = 6;
        var solid = new bool[width * height];
        for (var i = 0; i < solid.Length; i++)
            solid[i] = ((i % width) + (i / width)) % 2 == 0;

        var encoded = BmaCollisionEncoder.EncodeLayer(solid, width, height);
        var decoded = BmaCollisionDecoder.DecodeCollisionLayer(encoded, width, height, out _);
        Assert.Equal(solid, decoded);
    }

    [Fact]
    public void ToggleTile_FlipsWalkabilityInsideBounds()
    {
        var solid = new bool[4 * 2];
        var map = new GroundCollisionMap(4, 2, solid);
        Assert.False(map.IsSolidTile(1, 0));
        Assert.True(map.ToggleTile(1, 0));
        Assert.True(map.IsSolidTile(1, 0));
        Assert.False(map.ToggleTile(1, 0));
        Assert.False(map.IsSolidTile(1, 0));
    }

    [Fact]
    public void Apply_AddsAndClearsExplicitly()
    {
        var map = new GroundCollisionMap(4, 2, new bool[8]);
        Assert.True(GroundCollisionPaint.Apply(map, pixelX: 0, pixelY: 0, paintSolid: true));
        Assert.True(map.IsSolidTile(0, 0));
        Assert.False(GroundCollisionPaint.Apply(map, pixelX: 0, pixelY: 0, paintSolid: true));
        Assert.True(GroundCollisionPaint.Apply(map, pixelX: 0, pixelY: 0, paintSolid: false));
        Assert.False(map.IsSolidTile(0, 0));
    }

    [Fact]
    public void ApplyLine_FillsTilesSkippedByFastMovement()
    {
        var map = new GroundCollisionMap(8, 2, new bool[16]);
        var changed = 0;
        GroundCollisionPaint.ApplyLine(
            map, x0: 0, y0: 0, x1: 40, y1: 0, paintSolid: true,
            onChanged: (_, _) => changed++);

        Assert.True(map.IsSolidTile(0, 0));
        Assert.True(map.IsSolidTile(2, 0));
        Assert.True(map.IsSolidTile(5, 0));
        Assert.False(map.IsSolidTile(6, 0));
        Assert.Equal(6, changed);
    }

    [Fact]
    public void EncodePng_UsesProvidedCollisionMask()
    {
        var image = Solid(240, 160, 0x40, 0x80, 0xC0);
        var solid = new bool[(240 / 8) * (160 / 8)];
        solid[0] = true;
        solid[1] = true;
        var collision = new GroundCollisionMap(240 / 8, 160 / 8, solid);

        Assert.True(GroundMapCodec.TryEncode(image, out _, out _, out var bma, out var error, collision), error);
        var decoded = BmaCollisionDecoder.TryDecode(bma);
        Assert.NotNull(decoded);
        Assert.True(decoded!.IsSolidTile(0, 0));
        Assert.True(decoded.IsSolidTile(1, 0));
        Assert.False(decoded.IsSolidTile(2, 0));
    }

    [Fact]
    public void ReplaceCollision_KeepsVisualSizeAndUpdatesTiles()
    {
        var image = Solid(240, 160, 0xC8, 0x40, 0x20);
        Assert.True(GroundMapCodec.TryEncode(image, out _, out _, out var bma, out var error), error);
        var before = BmaCollisionDecoder.TryDecode(bma);
        Assert.NotNull(before);
        Assert.False(before!.IsSolidTile(0, 0));

        var next = before.Clone();
        next.SetSolidTile(0, 0, true);
        var replaced = BmaCollisionEncoder.ReplaceCollision(bma, next);
        var after = BmaCollisionDecoder.TryDecode(replaced);
        Assert.NotNull(after);
        Assert.Equal(before.WidthTiles, after!.WidthTiles);
        Assert.Equal(before.HeightTiles, after.HeightTiles);
        Assert.True(after.IsSolidTile(0, 0));
        Assert.False(after.IsSolidTile(1, 0));
    }

    [Fact]
    public void TryWriteCollision_PatchesWorkingCopyWithoutTouchingBaserom()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var original = File.ReadAllBytes(baserom);
        var rom = RomImage.Open(baserom);
        var mapName = "T01P06m";
        var loaded = GroundMapCodec.TryLoadCollision(rom, mapName);
        Assert.NotNull(loaded);

        var edited = loaded!.Clone();
        var flipped = !edited.IsSolidTile(0, 0);
        edited.SetSolidTile(0, 0, flipped);

        var buffer = MutableRom.From(rom);
        var error = GroundMapCodec.TryWriteCollision(buffer, catalog: null, mapName, edited);
        Assert.Null(error);
        Assert.True(original.AsSpan().SequenceEqual(File.ReadAllBytes(baserom)));

        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var roundTrip = GroundMapCodec.TryLoadCollision(view, mapName);
        Assert.NotNull(roundTrip);
        Assert.Equal(flipped, roundTrip!.IsSolidTile(0, 0));
    }

    [Fact]
    public void TryWrite_ImportThenCollisionPaintRoundTripsOnWorkingRom()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var original = File.ReadAllBytes(baserom);
        var rom = RomImage.Open(baserom);
        var mapName = "T01P06m";
        var image = Solid(240, 160, 0x20, 0xC0, 0x40);
        var buffer = MutableRom.From(rom);
        var importError = GroundMapCodec.TryWrite(buffer, catalog: null, mapName, image);
        Assert.Null(importError);

        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var collision = GroundMapCodec.TryLoadCollision(view, mapName);
        Assert.NotNull(collision);
        collision!.SetSolidTile(3, 2, true);

        var paintError = GroundMapCodec.TryWriteCollision(buffer, catalog: null, mapName, collision);
        Assert.Null(paintError);
        Assert.True(original.AsSpan().SequenceEqual(File.ReadAllBytes(baserom)));

        var built = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var preview = FriendAreaIntroArt.TryLoadSceneBackground(built, catalog: null, mapName);
        Assert.NotNull(preview);
        Assert.InRange(preview!.Pixels[1], 0xA0, 0xE0);

        var painted = GroundMapCodec.TryLoadCollision(built, mapName);
        Assert.NotNull(painted);
        Assert.True(painted!.IsSolidTile(3, 2));
    }

    [Fact]
    public void PaintCollision_UndoRedoRestoresWriterTarget()
    {
        var before = new GroundCollisionMap(4, 2, new bool[8]);
        var after = before.Clone();
        after.SetSolidTile(1, 0, true);
        var current = before.Clone();
        var changes = new ChangeService();

        GroundMapEditing.PaintCollision(changes, "T01P06m", before, after, map => current = map.Clone());

        Assert.True(current.IsSolidTile(1, 0));
        Assert.True(changes.CanUndo);
        changes.Undo();
        Assert.False(current.IsSolidTile(1, 0));
        Assert.True(changes.CanRedo);
        changes.Redo();
        Assert.True(current.IsSolidTile(1, 0));
    }

    [Fact]
    public void PaintCollision_UndoRestoresWorkingRomCollision()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var mapName = "T01P06m";
        var before = GroundMapCodec.TryLoadCollision(rom, mapName);
        Assert.NotNull(before);
        var after = before!.Clone();
        after.SetSolidTile(0, 0, !before.IsSolidTile(0, 0));

        var buffer = MutableRom.From(rom);
        var changes = new ChangeService();
        GroundMapEditing.PaintCollision(changes, mapName, before, after, map =>
        {
            var error = GroundMapCodec.TryWriteCollision(buffer, catalog: null, mapName, map);
            Assert.Null(error);
        });

        var painted = GroundMapCodec.TryLoadCollision(
            RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length)), mapName);
        Assert.Equal(after.IsSolidTile(0, 0), painted!.IsSolidTile(0, 0));

        changes.Undo();
        var restored = GroundMapCodec.TryLoadCollision(
            RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length)), mapName);
        Assert.Equal(before.IsSolidTile(0, 0), restored!.IsSolidTile(0, 0));
    }

    private static RgbaImage Solid(int width, int height, byte r, byte g, byte b)
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
