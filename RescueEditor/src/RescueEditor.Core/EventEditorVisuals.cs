namespace RescueEditor.Core;

public enum EventEditorVisualKind
{
    None,
    Map,
    Portrait,
    Actor,
    Music,
    Fade,
    Jump,
    Wait,
}

public readonly record struct EventEditorVisual(
    EventEditorVisualKind Kind,
    int Id = 0,
    int Extra = 0)
{
    public static EventEditorVisual None { get; } = new(EventEditorVisualKind.None);
}

/// <summary>Which FEBuilder-style thumbnail a command should show, plus tiny fallback glyphs.</summary>
public static class EventEditorVisuals
{
    public const int IconSize = 16;
    public const int PortraitSize = 32;
    public const int MapWidth = 56;
    public const int MapHeight = 36;
    public const int ActorSize = 32;
    public const int RowHeight = MapHeight;

    public static EventEditorVisual Classify(
        ScriptCommandData command,
        int? speakerId = null,
        int emotion = 0) =>
        command.Op switch
        {
            0x08 or 0x09 => new(EventEditorVisualKind.Map, command.Arg1),
            0x2E => new(EventEditorVisualKind.Portrait, command.ArgShort, command.Arg1),
            0x33 or 0x34 => new(EventEditorVisualKind.Portrait, speakerId ?? command.ArgShort, emotion),
            0x32 or 0x35 or 0x36 or 0x37 or 0x38 or 0x39 or 0xD0 or 0xD1 =>
                new(EventEditorVisualKind.Portrait, speakerId ?? 0, emotion),
            0x44 or 0x45 or 0x46 or 0x49 or 0x4C => new(EventEditorVisualKind.Music, command.Arg1),
            0x47 or 0x48 => new(EventEditorVisualKind.Music),
            0x22 or 0x23 or 0x24 or 0x25 or 0x26 or 0x27 or 0x28 => new(EventEditorVisualKind.Fade),
            0x1D or 0x1E or 0xEA or 0xEB or 0xE6 or 0xE7 or 0xE8 or 0xE9 => new(EventEditorVisualKind.Jump),
            0x54 or 0x56 or 0x59 or 0x62 or 0x6A or 0x6B or 0x7A or 0x84 or 0x89
                or 0x8B or 0x91 or 0x92 or 0x93 or 0x94 => new(EventEditorVisualKind.Actor, command.ArgShort),
            0xDB or 0xDC or 0xDE or 0xDF or 0xE0 => new(EventEditorVisualKind.Wait),
            _ => EventEditorVisual.None,
        };

    public static RgbaImage RenderIcon(EventEditorVisualKind kind)
    {
        var pixels = new byte[IconSize * IconSize * 4];
        var image = new RgbaImage(IconSize, IconSize, pixels);
        switch (kind)
        {
            case EventEditorVisualKind.Jump:
                FillTriangle(image, 3, 8, 12, 3, 12, 13, r: 0x3D, g: 0xC4, b: 0x5E);
                break;
            case EventEditorVisualKind.Music:
                FillRect(image, 5, 3, 3, 10, 0xE8, 0xC8, 0x40);
                FillRect(image, 8, 3, 5, 2, 0xE8, 0xC8, 0x40);
                FillRect(image, 3, 11, 5, 3, 0xE8, 0xC8, 0x40);
                break;
            case EventEditorVisualKind.Fade:
                FillRect(image, 2, 2, 6, 12, 0x18, 0x18, 0x22);
                FillRect(image, 8, 2, 6, 12, 0xD8, 0xD8, 0xE0);
                break;
            case EventEditorVisualKind.Wait:
                FillRect(image, 6, 2, 4, 12, 0x70, 0xB0, 0xD0);
                FillRect(image, 3, 6, 10, 4, 0x70, 0xB0, 0xD0);
                break;
            default:
                FillRect(image, 4, 4, 8, 8, 0x88, 0x88, 0x99);
                break;
        }

        return image;
    }

    private static void FillRect(RgbaImage image, int x, int y, int w, int h, byte r, byte g, byte b)
    {
        for (var row = y; row < y + h; row++)
        for (var col = x; col < x + w; col++)
            Plot(image, col, row, r, g, b);
    }

    private static void FillTriangle(RgbaImage image, int x1, int y1, int x2, int y2, int x3, int y3, byte r, byte g, byte b)
    {
        var minY = Math.Min(y1, Math.Min(y2, y3));
        var maxY = Math.Max(y1, Math.Max(y2, y3));
        for (var y = minY; y <= maxY; y++)
        {
            var minX = image.Width;
            var maxX = 0;
            Edge(y, x1, y1, x2, y2, ref minX, ref maxX);
            Edge(y, x2, y2, x3, y3, ref minX, ref maxX);
            Edge(y, x3, y3, x1, y1, ref minX, ref maxX);
            for (var x = minX; x <= maxX; x++)
                Plot(image, x, y, r, g, b);
        }
    }

    private static void Edge(int y, int x1, int y1, int x2, int y2, ref int minX, ref int maxX)
    {
        if (y1 == y2)
            return;
        if (y < Math.Min(y1, y2) || y > Math.Max(y1, y2))
            return;
        var x = x1 + (x2 - x1) * (y - y1) / (y2 - y1);
        minX = Math.Min(minX, x);
        maxX = Math.Max(maxX, x);
    }

    private static void Plot(RgbaImage image, int x, int y, byte r, byte g, byte b)
    {
        if ((uint)x >= (uint)image.Width || (uint)y >= (uint)image.Height)
            return;
        var i = (y * image.Width + x) * 4;
        image.Pixels[i] = r;
        image.Pixels[i + 1] = g;
        image.Pixels[i + 2] = b;
        image.Pixels[i + 3] = 255;
    }
}
