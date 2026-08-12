namespace RescueEditor.Core;

/// <summary>Resolves MSG_* text from in-memory dialogue first, then the ROM.</summary>
public static class DialogueResolver
{
    public static bool TryGetText(
        uint argPtr,
        IReadOnlyDictionary<int, DialogueString>? dialogue,
        RomImage? rom,
        Charmap? charmap,
        out string text)
    {
        text = string.Empty;
        var offset = PointerToOffset(argPtr);
        if (dialogue is not null)
        {
            if (dialogue.TryGetValue(offset, out var entry) ||
                dialogue.TryGetValue(unchecked((int)argPtr), out entry))
            {
                text = entry.Text ?? string.Empty;
                return true;
            }
        }

        if (rom is not null && charmap is not null && rom.TryPointerToOffset(argPtr, out var romOffset))
        {
            text = charmap.DecodeRomString(rom, romOffset, 768);
            return true;
        }

        return false;
    }

    public static int PointerToOffset(uint pointer) =>
        pointer >= RomImage.RomVirtualAddress && pointer < RomImage.RomVirtualAddress + 0x02000000
            ? (int)(pointer - RomImage.RomVirtualAddress)
            : unchecked((int)pointer);
}
