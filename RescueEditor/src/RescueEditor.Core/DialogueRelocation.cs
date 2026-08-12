using System.Text;

namespace RescueEditor.Core;

public sealed record DialogueWriteResult(string Kind, int Offset);

/// <summary>
/// Writes dialogue into a mutable ROM, relocating into free space when the
/// original slot is too small (shiftable / expanded ROM).
/// </summary>
public static class DialogueRelocation
{
    public static DialogueWriteResult Write(
        MutableRom rom,
        DialogueString dialogue,
        IEnumerable<ScriptCommandData> commands,
        int freeStart = 0x10000,
        Charmap? charmap = null)
    {
        var bytes = charmap is not null
            ? charmap.Encode(dialogue.Text ?? string.Empty)
            : Encoding.ASCII.GetBytes(dialogue.Text ?? string.Empty);
        var fits = dialogue.Offset >= 0 &&
                   rom.IsRangeValid(dialogue.Offset, bytes.Length + 1) &&
                   bytes.Length <= dialogue.Size;

        if (fits)
        {
            rom.WriteBytes(dialogue.Offset, bytes);
            if (bytes.Length < dialogue.Size)
                rom.Fill(dialogue.Offset + bytes.Length, dialogue.Size - bytes.Length, 0x00);
            if (rom.IsRangeValid(dialogue.Offset + bytes.Length, 1))
                rom.WriteByte(dialogue.Offset + bytes.Length, 0);
            dialogue.Dirty = false;
            return new("in-place", dialogue.Offset);
        }

        var payload = bytes.Length + 1;
        var dest = FreeSpaceAllocator.FindFreeSpace(rom, payload, alignment: 4, start: freeStart);
        rom.WriteBytes(dest, bytes);
        rom.WriteByte(dest + bytes.Length, 0);

        Retarget(rom, commands, dialogue, dest);
        dialogue.Offset = dest;
        dialogue.Size = bytes.Length;
        dialogue.Dirty = false;
        return new("relocated", dest);
    }

    public static IEnumerable<ScriptCommandData> AllCommands(SceneDatabase database) =>
        database.Scenes
            .SelectMany(scene => scene.Groups)
            .SelectMany(group => group.Sectors)
            .SelectMany(sector => sector.Stations)
            .SelectMany(station => station.Commands)
            .Concat(database.FunctionScripts.SelectMany(script => script.Commands));

    private static void Retarget(
        MutableRom rom,
        IEnumerable<ScriptCommandData> commands,
        DialogueString dialogue,
        int newOffset)
    {
        var oldOffset = dialogue.Offset;
        var newPtr = RomPointer.FromOffset(newOffset).Value;
        foreach (var command in commands)
        {
            if (!PointsAt(command.ArgPtr, oldOffset))
                continue;
            command.ArgPtr = newPtr;
            if (command.RomOffset >= 0 && rom.IsRangeValid(command.RomOffset + 12, 4))
                rom.WritePointer(command.RomOffset + 12, newOffset);
        }

        foreach (var romOffset in dialogue.ReferencedByCommands)
        {
            if (romOffset >= 0 && rom.IsRangeValid(romOffset + 12, 4))
                rom.WritePointer(romOffset + 12, newOffset);
        }
    }

    private static bool PointsAt(uint pointer, int offset)
    {
        if (offset < 0)
            return pointer == unchecked((uint)offset);
        if (pointer >= RomImage.RomVirtualAddress && pointer < RomImage.RomVirtualAddress + 0x02000000)
            return (int)(pointer - RomImage.RomVirtualAddress) == offset;
        return unchecked((int)pointer) == offset;
    }
}
