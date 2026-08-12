namespace RescueEditor.Core;

/// <summary>Framed KAO portrait for the dialogue editor preview.</summary>
public static class DialoguePortraitPreview
{
    public const int FramePad = 2;
    public const int DefaultScale = 2;

    public static RgbaImage RenderFramed(RgbaImage face, int scale = DefaultScale)
    {
        var w = face.Width + FramePad * 2;
        var h = face.Height + FramePad * 2;
        var framed = new RgbaImage(w, h, new byte[w * h * 4]);
        GbaDialogueHud.DrawWindow(framed, 0, 0, w, h);
        Blit(framed, face, FramePad, FramePad);
        return scale <= 1 ? framed : PortraitSheetPresentation.ScaleNearest(framed, scale);
    }

    public static RgbaImage? TryRender(
        PortraitAtlas atlas,
        short species,
        int emotion,
        int scale = DefaultScale)
    {
        if (species <= 0)
            return null;
        var face = atlas.TryGet(species, emotion);
        return face is null ? null : RenderFramed(face, scale);
    }

    public static byte[]? TryRenderPng(
        PortraitAtlas atlas,
        short species,
        int emotion,
        int scale = DefaultScale) =>
        TryRender(atlas, species, emotion, scale)?.ToPng();

    private static void Blit(RgbaImage dest, RgbaImage src, int dx, int dy)
    {
        for (var row = 0; row < src.Height; row++)
        for (var col = 0; col < src.Width; col++)
        {
            var x = dx + col;
            var y = dy + row;
            if (x < 0 || y < 0 || x >= dest.Width || y >= dest.Height)
                continue;
            var srcOff = (row * src.Width + col) * 4;
            var dstOff = (y * dest.Width + x) * 4;
            var a = src.Pixels[srcOff + 3];
            if (a == 0)
                continue;
            dest.Pixels[dstOff] = src.Pixels[srcOff];
            dest.Pixels[dstOff + 1] = src.Pixels[srcOff + 1];
            dest.Pixels[dstOff + 2] = src.Pixels[srcOff + 2];
            dest.Pixels[dstOff + 3] = 255;
        }
    }
}
