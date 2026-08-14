namespace RescueEditor.Core;

public static class RescueTemplePaths
{
    public const string AppFolderName = "RescueTemple";
    public const string ShellFileName = "shell.json";
    public const string SessionFileName = "session.json";

    public static string GetAppDataDirectory() =>
        Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData), AppFolderName);

    public static string ShellSettingsPath => Path.Combine(GetAppDataDirectory(), ShellFileName);

    public static string SessionSettingsPath => Path.Combine(GetAppDataDirectory(), SessionFileName);
}
