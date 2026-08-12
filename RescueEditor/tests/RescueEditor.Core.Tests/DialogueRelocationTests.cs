using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DialogueRelocationTests
{
    [Fact]
    public void ReplaceDialogueAllowsLongerText()
    {
        var dialogue = new DialogueString
        {
            Offset = 0x100,
            Size = 13,
            Text = "Hello world.",
        };
        var changes = new ChangeService();
        SceneEditing.ReplaceDialogue(changes, dialogue, "Hello there, world!!!!");
        Assert.Equal("Hello there, world!!!!", dialogue.Text);
        Assert.True(dialogue.Dirty);
        Assert.Equal(13, dialogue.Size);
    }

    [Fact]
    public void WritesInPlaceWhenTextFits()
    {
        var rom = new MutableRom(new byte[0x200], "test", "sha", RomProfile.Us10);
        rom.WriteBytes(0x20, "Hi"u8);
        var dialogue = new DialogueString { Offset = 0x20, Size = 2, Text = "Yo", Dirty = true };
        var command = new ScriptCommandData
        {
            Op = 0x34,
            ArgPtr = RomPointer.FromOffset(0x20).Value,
            RomOffset = 0x40,
        };
        rom.WriteBytes(0x40, command.ToBytes());

        var result = DialogueRelocation.Write(rom, dialogue, [command]);

        Assert.Equal("in-place", result.Kind);
        Assert.Equal(0x20, dialogue.Offset);
        Assert.Equal((byte)'Y', rom.ReadByte(0x20));
        Assert.Equal((byte)'o', rom.ReadByte(0x21));
        Assert.Equal(0, rom.ReadByte(0x22));
        Assert.Equal(RomPointer.FromOffset(0x20).Value, command.ArgPtr);
    }

    [Fact]
    public void RelocatesWhenTextExceedsSlotAndPatchesArgPtr()
    {
        var bytes = new byte[0x200];
        Array.Fill(bytes, (byte)0xFF, 0x100, 0x80);
        var rom = new MutableRom(bytes, "test", "sha", RomProfile.Us10);
        rom.WriteBytes(0x20, "Hi"u8);
        var dialogue = new DialogueString { Offset = 0x20, Size = 2, Text = "Hello there, world!!!!", Dirty = true };
        var command = new ScriptCommandData
        {
            Op = 0x34,
            ArgPtr = RomPointer.FromOffset(0x20).Value,
            RomOffset = 0x40,
        };
        rom.WriteBytes(0x40, command.ToBytes());

        var result = DialogueRelocation.Write(rom, dialogue, [command], freeStart: 0x100);

        Assert.Equal("relocated", result.Kind);
        Assert.True(dialogue.Offset >= 0x100);
        Assert.NotEqual(0x20, dialogue.Offset);
        Assert.Equal(dialogue.Text, System.Text.Encoding.ASCII.GetString(rom.Copy(dialogue.Offset, dialogue.Text.Length)));
        Assert.Equal(0, rom.ReadByte(dialogue.Offset + dialogue.Text.Length));
        Assert.Equal(RomPointer.FromOffset(dialogue.Offset).Value, command.ArgPtr);
        Assert.Equal(command.ArgPtr, rom.ReadUInt32(0x40 + 12));
    }

    [Fact]
    public void WritesCenterAlignAsCharmapMacroBytes()
    {
        var path = FindUpwards("charmap.txt");
        Assert.NotNull(path);
        var charmap = Charmap.FromFile(path!);
        var bytes = new byte[0x200];
        Array.Fill(bytes, (byte)0xFF, 0x100, 0x80);
        var rom = new MutableRom(bytes, "test", "sha", RomProfile.Us10);
        rom.WriteBytes(0x20, "Hi"u8);
        var dialogue = new DialogueString
        {
            Offset = 0x20,
            Size = 2,
            Text = "{CENTER_ALIGN}Hi",
            Dirty = true,
        };
        var command = new ScriptCommandData
        {
            Op = 0x34,
            ArgPtr = RomPointer.FromOffset(0x20).Value,
            RomOffset = 0x40,
        };

        var result = DialogueRelocation.Write(rom, dialogue, [command], freeStart: 0x100, charmap: charmap);

        Assert.Equal("relocated", result.Kind);
        Assert.Equal(new byte[] { 0x23, 0x2B, 0x48, 0x69, 0x00 }, rom.Copy(dialogue.Offset, 5));
        Assert.DoesNotContain((byte)'{', rom.Copy(dialogue.Offset, 4));
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
