namespace RescueEditor.Core;

/// <summary>Standalone C Patch offerings derived from <see cref="RuntimeConfigSchema"/>.</summary>
public static class CPatchCatalog
{
    public static IReadOnlyList<AssetDescriptor> BuildOfferings()
    {
        var offerings = new List<AssetDescriptor>(RuntimeConfigSchema.Fields.Count);
        foreach (var field in RuntimeConfigSchema.Fields)
        {
            offerings.Add(new AssetDescriptor
            {
                Id = $"cpatch:{field.Id}",
                Name = field.DisplayName,
                Category = AssetCategory.CPatches,
                Kind = AssetKind.RuntimeConfig,
                Offset = field.Offset,
                Size = 1,
                Format = field.Kind == RuntimeConfigFieldKind.Toggle ? "C Patch (toggle)" : "C Patch (value)",
                Description = field.Description,
                Metadata = new Dictionary<string, string>
                {
                    ["fieldId"] = field.Id,
                    ["group"] = field.Group,
                    ["kind"] = field.Kind.ToString(),
                    ["vanilla"] = field.VanillaValue.ToString(),
                    ["recommended"] = field.RecommendedValue.ToString(),
                },
            });
        }

        return offerings;
    }
}

public static class RuntimeConfigEditing
{
    public static bool IsInstalled(RuntimeConfigState state, string fieldId)
    {
        ArgumentNullException.ThrowIfNull(state);
        var field = RuntimeConfigSchema.Find(fieldId)
            ?? throw new ArgumentOutOfRangeException(nameof(fieldId), fieldId, "Unknown RuntimeConfig field.");
        return state.Get(fieldId) != field.VanillaValue;
    }

    public static void Install(ChangeService changes, RuntimeConfigState state, string fieldId)
    {
        ArgumentNullException.ThrowIfNull(changes);
        ArgumentNullException.ThrowIfNull(state);
        var field = RuntimeConfigSchema.Find(fieldId)
            ?? throw new ArgumentOutOfRangeException(nameof(fieldId), fieldId, "Unknown RuntimeConfig field.");
        SetField(changes, state, fieldId, field.RecommendedValue);
    }

    public static void Uninstall(ChangeService changes, RuntimeConfigState state, string fieldId)
    {
        ArgumentNullException.ThrowIfNull(changes);
        ArgumentNullException.ThrowIfNull(state);
        var field = RuntimeConfigSchema.Find(fieldId)
            ?? throw new ArgumentOutOfRangeException(nameof(fieldId), fieldId, "Unknown RuntimeConfig field.");
        SetField(changes, state, fieldId, field.VanillaValue);
    }

    public static void SetField(ChangeService changes, RuntimeConfigState state, string fieldId, byte value)
    {
        ArgumentNullException.ThrowIfNull(changes);
        ArgumentNullException.ThrowIfNull(state);

        var field = RuntimeConfigSchema.Find(fieldId)
            ?? throw new ArgumentOutOfRangeException(nameof(fieldId), fieldId, "Unknown RuntimeConfig field.");
        var previous = state.Get(fieldId);
        if (field.Kind == RuntimeConfigFieldKind.Toggle)
            value = value == 0 ? (byte)0 : (byte)1;
        else
            value = (byte)Math.Clamp(value, field.Min, field.Max);
        if (previous == value)
            return;

        var verb = value == field.VanillaValue
            ? "Uninstall"
            : value == field.RecommendedValue
                ? "Install"
                : "Set";
        changes.Execute(
            $"{verb} {field.DisplayName}",
            apply: () => state.Set(fieldId, value),
            revert: () => state.Set(fieldId, previous),
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "runtimeConfig.field",
                Target = fieldId,
                Description = $"{verb} {field.DisplayName} ({previous} → {value})",
                Values = new Dictionary<string, string>
                {
                    ["value"] = value.ToString(),
                    ["previous"] = previous.ToString(),
                },
            });
    }

    public static void ResetToSource(ChangeService changes, RuntimeConfigState state)
    {
        ArgumentNullException.ThrowIfNull(changes);
        ArgumentNullException.ThrowIfNull(state);
        if (!state.IsDirty)
            return;

        var before = state.SnapshotValues();
        changes.Execute(
            state.HasRomBacking && !state.IsInjected
                ? "Reset C Patches to ROM defaults"
                : "Reset C Patches to vanilla",
            apply: () => state.RestoreSourceSnapshot(),
            revert: () => state.RestoreValues(before),
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "runtimeConfig.reset",
                Target = "gRuntimeConfigRom",
                Description = "Reset RuntimeConfig offerings",
            });
    }
}
