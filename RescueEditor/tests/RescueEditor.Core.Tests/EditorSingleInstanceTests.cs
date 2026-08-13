using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class EditorSingleInstanceTests
{
    [Fact]
    public void SecondAcquireFailsUntilFirstIsReleased()
    {
        var name = "RescueTemple.Test." + Guid.NewGuid().ToString("N");
        using var started = new ManualResetEventSlim(false);
        using var release = new ManualResetEventSlim(false);
        Mutex? first = null;
        Exception? holderError = null;
        var holder = new Thread(() =>
        {
            try
            {
                if (!EditorSingleInstance.TryAcquire(name, out first))
                    throw new InvalidOperationException("holder failed to acquire");
                started.Set();
                release.Wait();
                first!.Dispose();
            }
            catch (Exception exception)
            {
                holderError = exception;
                started.Set();
            }
        });
        holder.IsBackground = true;
        holder.Start();
        Assert.True(started.Wait(TimeSpan.FromSeconds(5)));
        Assert.Null(holderError);

        Assert.False(EditorSingleInstance.TryAcquire(name, out var second));
        Assert.Null(second);

        release.Set();
        Assert.True(holder.Join(TimeSpan.FromSeconds(5)));

        Assert.True(EditorSingleInstance.TryAcquire(name, out var third));
        third!.Dispose();
    }
}
