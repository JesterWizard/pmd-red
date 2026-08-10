using Avalonia.Controls;
using Avalonia.Platform;

namespace RescueEditor.App;

internal static class AppIcon
{
    private static readonly Uri ResourceUri = new("avares://RescueTemple/Assets/rescuetemple_logo.png");
    private static WindowIcon? _icon;

    public static WindowIcon Get()
    {
        if (_icon is not null)
            return _icon;

        using var stream = AssetLoader.Open(ResourceUri);
        _icon = new WindowIcon(stream);
        return _icon;
    }

    public static void Apply(Window window) => window.Icon = Get();
}
