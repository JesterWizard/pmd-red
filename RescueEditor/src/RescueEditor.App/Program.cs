using System.Runtime.InteropServices;
using Avalonia;
using RescueEditor.Core;

namespace RescueEditor.App;

internal static class Program
{
    private static Mutex? _instance;

    [STAThread]
    public static void Main(string[] args)
    {
        if (!EditorSingleInstance.TryAcquire(EditorSingleInstance.DefaultName, out _instance))
            Environment.Exit(0);
        try
        {
            BuildAvaloniaApp().StartWithClassicDesktopLifetime(args);
        }
        finally
        {
            _instance?.Dispose();
        }
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
