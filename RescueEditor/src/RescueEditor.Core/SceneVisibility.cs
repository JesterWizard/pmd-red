namespace RescueEditor.Core;

/// <summary>Which sector actors appear on the scene map.</summary>
public static class SceneVisibility
{
    /// <summary>
    /// Default: only the selected sector (avoids stacking every sector’s actors).
    /// Solo overrides to a single sector. A hidden selected sector draws nothing.
    /// </summary>
    public static HashSet<int> ResolveVisibleSectorIds(
        IEnumerable<int> sectorIds,
        int selectedSectorId,
        IReadOnlySet<int> hiddenSectorIds,
        int? soloSectorId)
    {
        if (soloSectorId is int solo)
            return new HashSet<int> { solo };

        _ = sectorIds;
        if (hiddenSectorIds.Contains(selectedSectorId))
            return new HashSet<int>();

        return new HashSet<int> { selectedSectorId };
    }

    public static int IndexOfSectorId(IReadOnlyList<int> sectorIdsInComboOrder, int sectorId)
    {
        for (var i = 0; i < sectorIdsInComboOrder.Count; i++)
        {
            if (sectorIdsInComboOrder[i] == sectorId)
                return i;
        }
        return -1;
    }
}
