namespace RescueEditor.Core;

/// <summary>Runtime array caps for lives/objects/effects/events in one sector.</summary>
public static class SceneEntities
{
    /// <summary><c>UNK_3001B84_ARR_COUNT</c> in ground_lives.c.</summary>
    public const int MaxLivesPerSector = 24;

    /// <summary><c>NUM_GROUND_OBJECTS</c> in ground_object.c.</summary>
    public const int MaxObjectsPerSector = 16;

    /// <summary><c>NUM_GROUND_EFFECTS</c> in ground_effect.c.</summary>
    public const int MaxEffectsPerSector = 16;

    /// <summary><c>NUM_GROUND_EVENTS</c> in ground_event.c.</summary>
    public const int MaxEventsPerSector = 32;

    public static int MaxPerSector(SceneEntityKind kind) => kind switch
    {
        SceneEntityKind.Live => MaxLivesPerSector,
        SceneEntityKind.Object => MaxObjectsPerSector,
        SceneEntityKind.Effect => MaxEffectsPerSector,
        SceneEntityKind.Event => MaxEventsPerSector,
        _ => MaxLivesPerSector,
    };

    public static string Noun(SceneEntityKind kind) => kind switch
    {
        SceneEntityKind.Live => "lives",
        SceneEntityKind.Object => "objects",
        SceneEntityKind.Effect => "effects",
        SceneEntityKind.Event => "events",
        _ => "entities",
    };

    public static string CapError(SceneSector sector, SceneEntityKind kind) =>
        $"Sector g{sector.Group}/s{sector.Sector} already has {MaxPerSector(kind)} {Noun(kind)}.";

    public static string FormatListRow(SceneEntity entity) =>
        $"{entity.DisplayName} · ({entity.Position.XTiles},{entity.Position.YTiles})";
}
