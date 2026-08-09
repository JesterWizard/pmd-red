using System.Runtime.InteropServices;
using Avalonia;

namespace RescueEditor.App;

internal static class Program
{
    [STAThread]
    public static void Main(string[] args)
    {
        BuildAvaloniaApp().StartWithClassicDesktopLifetime(args);
    }

    public static AppBuilder BuildAvaloniaApp()
    {
        var builder = AppBuilder.Configure<App>()
            .UsePlatformDetect()
            .LogToTrace();

        // WSLg / Linux GPU compositing often leaves Avalonia with a blank window.
        // Prefer software framebuffer rendering on Linux.
        if (RuntimeInformation.IsOSPlatform(OSPlatform.Linux))
        {
            builder = builder.With(new X11PlatformOptions
            {
                RenderingMode = [X11RenderingMode.Software],
                EnableSessionManagement = false,
                OverlayPopups = true,
            });
        }

        return builder;
    }
}
