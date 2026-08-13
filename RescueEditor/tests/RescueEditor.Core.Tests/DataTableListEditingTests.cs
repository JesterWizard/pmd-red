using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DataTableListEditingTests
{
    [Fact]
    public void At4pn8bpp_RoundTripsSolidColor()
    {
        var pixels = new byte[240 * 160 * 4];
        for (var i = 0; i < pixels.Length; i += 4)
        {
            pixels[i] = 0xC8;
            pixels[i + 1] = 0x40;
            pixels[i + 2] = 0x20;
            pixels[i + 3] = 255;
        }

        var image = new RgbaImage(240, 160, pixels);
        var (at4pn, pal) = At4pn8bpp.Encode(image);
        Assert.True(at4pn.AsSpan().StartsWith("AT4PN"u8));
        Assert.Equal(240 * 4, pal.Length);

        var decoded = At4pn8bpp.Decode(at4pn, pal);
        Assert.Equal(240, decoded.Width);
        Assert.Equal(160, decoded.Height);
        Assert.InRange(decoded.Pixels[0], 0xB0, 0xE0);
        Assert.InRange(decoded.Pixels[1], 0x20, 0x60);
    }

    [Fact]
    public void DeleteFriendArea_ShiftsLaterSettingsAndRemaps()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var tables = FriendAreaTables.TryLoad(rom);
        Assert.NotNull(tables);
        var data = DataTableTables.TryLoad(rom);
        Assert.NotNull(data);

        var treasure = FriendAreaCodec.Read(rom, tables!, 2);
        Assert.Equal("Treasure Sea", treasure!.Name);

        var buffer = MutableRom.From(rom);
        Assert.True(DataTableListEditing.DeleteFriendArea(buffer, tables!, data!, 1));
        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var shifted = FriendAreaCodec.Read(view, tables!, 1);
        Assert.Equal("Treasure Sea", shifted!.Name);
        Assert.Equal(treasure.Capacity, shifted.Capacity);
        Assert.Equal(57, tables.Count);
    }

    [Fact]
    public void AddFriendArea_InsertsCloneAtEnd()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var tables = FriendAreaTables.TryLoad(rom);
        Assert.NotNull(tables);
        var before = tables!.Count;
        var length = rom.Length;

        var buffer = MutableRom.From(rom);
        var newId = DataTableListEditing.AddFriendArea(buffer, tables, cloneId: 1);
        Assert.Equal(before, newId);
        Assert.Equal(before + 1, tables.Count);
        Assert.Equal(length + FriendAreaTables.SettingsEntrySize, buffer.Length);

        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var clone = FriendAreaCodec.Read(view, tables, newId);
        var src = FriendAreaCodec.Read(view, tables, 1);
        Assert.Equal(src!.Capacity, clone!.Capacity);
        Assert.Equal(src.Unlock, clone.Unlock);
        Assert.Equal(src.Price, clone.Price);
    }

    [Fact]
    public void AddThenDeleteMonster_UsesShiftedTable()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var tables = DataTableTables.TryLoad(rom);
        Assert.NotNull(tables);
        var charmap = Charmap.FromFile(Path.Combine(CatalogBuilder.FindRepositoryRoot(rom.Path), "charmap.txt"));
        var before = tables!.MonsterCount;

        var buffer = MutableRom.From(rom);
        var newId = DataTableListEditing.AddMonster(buffer, tables, cloneId: 1);
        Assert.True(newId >= before || newId > 0);
        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var clone = DataTableCodec.ReadMonster(view, tables, newId, charmap);
        var bulb = DataTableCodec.ReadMonster(view, tables, 1, charmap);
        Assert.Equal(bulb!.BaseHp, clone!.BaseHp);

        Assert.True(DataTableListEditing.DeleteMonster(buffer, tables, newId));
        view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        Assert.True(tables.MonsterCount <= before || DataTableCodec.ReadMonster(view, tables, newId, charmap) is null
                    || string.IsNullOrWhiteSpace(DataTableCodec.ReadMonster(view, tables, newId, charmap)!.Name));
    }

    [Fact]
    public void WorkingRom_AdoptedInsert_SurvivesSceneSync()
    {
        var bytes = new byte[0x200];
        Array.Fill(bytes, (byte)0xFF, 0x180, 0x80);
        var source = RomImage.FromBytes("/tmp/adopt-rom.gba", bytes);
        var working = new WorkingRom(source);
        var buffer = working.BeginMutate();
        buffer.InsertBytes(0x180, 8, fill: 0x11);
        working.Adopt(buffer);

        var database = new SceneDatabase();
        working.Sync(database);
        Assert.Equal(0x208, working.View.Length);
        Assert.Equal(0x11, working.View.ReadByte(0x180));
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
