using Avalonia.Media;

namespace RescueEditor.App;

/// <summary>Shared dark IDE palette inspired by SkyTemple.</summary>
public static class EditorTheme
{
    public static readonly Color WindowBg = Color.FromRgb(0x1E, 0x1E, 0x1E);
    public static readonly Color PanelBg = Color.FromRgb(0x25, 0x25, 0x28);
    public static readonly Color PanelBgAlt = Color.FromRgb(0x2A, 0x2A, 0x2E);
    public static readonly Color Border = Color.FromRgb(0x3A, 0x3A, 0x40);
    public static readonly Color Accent = Color.FromRgb(0x2D, 0x7D, 0xD2);
    public static readonly Color AccentSoft = Color.FromArgb(0x60, 0x2D, 0x7D, 0xD2);
    public static readonly Color TextPrimary = Color.FromRgb(0xE8, 0xE8, 0xEC);
    public static readonly Color TextMuted = Color.FromRgb(0x9A, 0x9A, 0xA0);
    public static readonly Color CanvasBg = Color.FromRgb(0x18, 0x18, 0x1C);
    public static readonly Color ToolbarBg = Color.FromRgb(0x2C, 0x2C, 0x30);
    public static readonly Color Danger = Color.FromRgb(0xC0, 0x50, 0x50);

    public static SolidColorBrush WindowBgBrush { get; } = new(WindowBg);
    public static SolidColorBrush PanelBgBrush { get; } = new(PanelBg);
    public static SolidColorBrush PanelBgAltBrush { get; } = new(PanelBgAlt);
    public static SolidColorBrush BorderBrush { get; } = new(Border);
    public static SolidColorBrush AccentBrush { get; } = new(Accent);
    public static SolidColorBrush AccentSoftBrush { get; } = new(AccentSoft);
    public static SolidColorBrush TextPrimaryBrush { get; } = new(TextPrimary);
    public static SolidColorBrush TextMutedBrush { get; } = new(TextMuted);
    public static SolidColorBrush CanvasBgBrush { get; } = new(CanvasBg);
    public static SolidColorBrush ToolbarBgBrush { get; } = new(ToolbarBg);
}
