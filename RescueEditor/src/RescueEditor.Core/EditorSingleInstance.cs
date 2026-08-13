using System.Threading;

namespace RescueEditor.Core;

/// <summary>Named mutex so RescueTemple has at most one process per user session.</summary>
public static class EditorSingleInstance
{
    public const string DefaultName = @"Local\RescueTemple";

    public static bool TryAcquire(string name, out Mutex? mutex)
    {
        mutex = new Mutex(initiallyOwned: false, name);
        try
        {
            if (mutex.WaitOne(TimeSpan.Zero))
                return true;
        }
        catch (AbandonedMutexException)
        {
            return true;
        }

        mutex.Dispose();
        mutex = null;
        return false;
    }
}
