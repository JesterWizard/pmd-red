namespace RescueEditor.Core;

/// <summary>Full 240×160 dialogue HUD preview (textbox + optional speaker portrait).</summary>
public static class DialogueHudPreview
{
    public const int DefaultScale = 2;

    public static RgbaImage Render(
        string? source,
        DialogueFormatContext? context = null,
        string? speakerLabel = null,
        RgbaImage? face = null,
        int placement = 0,
        bool flip = false,
        int scale = DefaultScale)
    {
        if (scale < 1)
            throw new ArgumentOutOfRangeException(nameof(scale));

        var pages = DialogueFormatter.SplitPages(source, context);
        var page = pages.Count == 0 ? " " : pages[0];
        if (string.IsNullOrEmpty(page))
            page = " ";

        var camera = new RgbaImage(
            ScenePlaySession.CameraWidth,
            ScenePlaySession.CameraHeight,
            new byte[ScenePlaySession.CameraWidth * ScenePlaySession.CameraHeight * 4]);

        if (face is not null)
        {
            var (x, y, tableFlip) = GbaDialogueHud.ResolvePortraitPlacement(placement);
            GbaDialogueHud.DrawFramedPortrait(camera, face, x, y, flip || tableFlip);
        }

        var font = PixelFont.Load();
        GbaDialogueHud.Draw(
            camera,
            font,
            PlayDialogueMode.Box,
            page,
            speakerLabel,
            showSpeakerIcon: speakerLabel is null,
            quietIcon: false,
            waitingForAdvance: false,
            animTick: 0,
            portraits: null,
            atlas: null,
            fadeAlpha: 0);

        return scale == 1 ? camera : PortraitSheetPresentation.ScaleNearest(camera, scale);
    }

    public static byte[] RenderPng(
        string? source,
        DialogueFormatContext? context = null,
        string? speakerLabel = null,
        RgbaImage? face = null,
        int placement = 0,
        bool flip = false,
        int scale = DefaultScale) =>
        Render(source, context, speakerLabel, face, placement, flip, scale).ToPng();
}
