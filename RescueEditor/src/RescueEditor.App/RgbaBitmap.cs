using Avalonia;
using Avalonia.Media.Imaging;
using Avalonia.Platform;
using RescueEditor.Core;

namespace RescueEditor.App;

internal static class RgbaBitmap
{
    public static WriteableBitmap ToWriteable(RgbaImage sprite)
    {
        var bitmap = new WriteableBitmap(
            new PixelSize(sprite.Width, sprite.Height),
            new Vector(96, 96),
            PixelFormat.Rgba8888,
            AlphaFormat.Unpremul);
        Copy(sprite, bitmap);
        return bitmap;
    }

    public static void Copy(RgbaImage sprite, WriteableBitmap bitmap)
    {
        using var fb = bitmap.Lock();
        var src = sprite.Pixels;
        var srcStride = sprite.Width * 4;
        if (fb.RowBytes == srcStride)
        {
            System.Runtime.InteropServices.Marshal.Copy(src, 0, fb.Address, src.Length);
            return;
        }

        for (var y = 0; y < sprite.Height; y++)
        {
            System.Runtime.InteropServices.Marshal.Copy(
                src, y * srcStride,
                fb.Address + y * fb.RowBytes,
                srcStride);
        }
    }
}
