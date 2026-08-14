namespace RescueEditor.Core;

public static class SceneClone
{
    public static SceneDatabase Clone(SceneDatabase source)
    {
        var clone = new SceneDatabase { Profile = source.Profile };
        clone.Diagnostics.AddRange(source.Diagnostics);
        foreach (var map in source.Maps)
            clone.Maps.Add(Clone(map));
        foreach (var scene in source.Scenes)
            clone.Scenes.Add(Clone(scene));
        foreach (var function in source.FunctionScripts)
            clone.FunctionScripts.Add(Clone(function));
        foreach (var (offset, dialogue) in source.DialogueByOffset)
            clone.DialogueByOffset[offset] = Clone(dialogue);
        return clone;
    }

    public static Scene Clone(Scene source)
    {
        var clone = new Scene
        {
            MapId = source.MapId,
            Name = source.Name,
            Map = source.Map is null ? null : Clone(source.Map),
            HeaderOffset = source.HeaderOffset,
            LinksOffset = source.LinksOffset,
            LinksListDirty = source.LinksListDirty,
            ScriptSourceText = source.ScriptSourceText,
        };
        clone.Diagnostics.AddRange(source.Diagnostics);
        foreach (var group in source.Groups)
            clone.Groups.Add(Clone(group));
        foreach (var link in source.Links)
            clone.Links.Add(Clone(link));
        return clone;
    }

    private static GroundMapDefinition Clone(GroundMapDefinition source) => new()
    {
        MapId = source.MapId,
        Name = source.Name,
        RenderMode = source.RenderMode,
        GroundPlaceId = source.GroundPlaceId,
        MapFileTableId = source.MapFileTableId,
        Unk6 = source.Unk6,
        Label = source.Label,
        BplName = source.BplName,
        BpcName = source.BpcName,
        BmaName = source.BmaName,
        BpaNames = (string?[])source.BpaNames.Clone(),
        GroundMapAsset = source.GroundMapAsset,
        ScriptHeaderOffset = source.ScriptHeaderOffset,
    };

    private static SceneGroup Clone(SceneGroup source)
    {
        var clone = new SceneGroup
        {
            Index = source.Index,
            RomOffset = source.RomOffset,
            SectorListDirty = source.SectorListDirty,
        };
        foreach (var sector in source.Sectors)
            clone.Sectors.Add(Clone(sector));
        return clone;
    }

    private static SceneSector Clone(SceneSector source)
    {
        var clone = new SceneSector
        {
            Group = source.Group,
            Sector = source.Sector,
            RomOffset = source.RomOffset,
            HasStation = source.HasStation,
            StationListOffset = source.StationListOffset,
            StationsListDirty = source.StationsListDirty,
            LivesListDirty = source.LivesListDirty,
            ObjectsListDirty = source.ObjectsListDirty,
            EffectsListDirty = source.EffectsListDirty,
            EventsListDirty = source.EventsListDirty,
            SectorBlobDirty = source.SectorBlobDirty,
        };
        foreach (var entity in source.Lives)
            clone.Lives.Add(Clone(entity));
        foreach (var entity in source.Objects)
            clone.Objects.Add(Clone(entity));
        foreach (var entity in source.Effects)
            clone.Effects.Add(Clone(entity));
        foreach (var entity in source.Events)
            clone.Events.Add(Clone(entity));
        foreach (var station in source.Stations)
            clone.Stations.Add(Clone(station));
        return clone;
    }

    public static SceneEntity Clone(SceneEntity source)
    {
        var clone = new SceneEntity
        {
            Kind = source.Kind,
            TypeId = source.TypeId,
            DirectionOrFlags = source.DirectionOrFlags,
            Width = source.Width,
            Height = source.Height,
            Position = source.Position,
            RomOffset = source.RomOffset,
            Group = source.Group,
            Sector = source.Sector,
            Index = source.Index,
            ScriptOffsets = (int[])source.ScriptOffsets.Clone(),
            EventScriptRefOffset = source.EventScriptRefOffset,
            EventScript = source.EventScript is null ? null : Clone(source.EventScript),
            DisplayName = source.DisplayName,
            RawBytes = (byte[])source.RawBytes.Clone(),
            NeedsListRewrite = source.NeedsListRewrite,
        };
        foreach (var slot in source.Scripts)
            clone.Scripts.Add(Clone(slot));
        return clone;
    }

    public static ScriptRefData Clone(ScriptRefData source)
    {
        var clone = new ScriptRefData
        {
            Id = source.Id,
            Type = source.Type,
            Name = source.Name,
            NameOffset = source.NameOffset,
            ScriptOffset = source.ScriptOffset,
            ScriptCapacity = source.ScriptCapacity,
            RomOffset = source.RomOffset,
        };
        foreach (var command in source.Commands)
            clone.Commands.Add(Clone(command));
        return clone;
    }

    public static ScriptCommandData Clone(ScriptCommandData source) => new()
    {
        Op = source.Op,
        ArgByte = source.ArgByte,
        ArgShort = source.ArgShort,
        Arg1 = source.Arg1,
        Arg2 = source.Arg2,
        ArgPtr = source.ArgPtr,
        RomOffset = source.RomOffset,
    };

    private static EntityScriptSlot Clone(EntityScriptSlot source)
    {
        var clone = new EntityScriptSlot
        {
            Offset = source.Offset,
            Capacity = source.Capacity,
            Dirty = source.Dirty,
        };
        foreach (var command in source.Commands)
            clone.Commands.Add(Clone(command));
        return clone;
    }

    private static SceneLink Clone(SceneLink source) => new()
    {
        Position = source.Position,
        Width = source.Width,
        Height = source.Height,
        Ret = source.Ret,
        Unk7 = source.Unk7,
        RomOffset = source.RomOffset,
        NeedsListRewrite = source.NeedsListRewrite,
    };

    public static DialogueString Clone(DialogueString source)
    {
        var clone = new DialogueString
        {
            Offset = source.Offset,
            Size = source.Size,
            Text = source.Text,
            Dirty = source.Dirty,
        };
        clone.ReferencedByCommands.AddRange(source.ReferencedByCommands);
        return clone;
    }
}
