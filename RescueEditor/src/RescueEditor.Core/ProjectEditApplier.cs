namespace RescueEditor.Core;

/// <summary>
/// Replays saved <see cref="ProjectDocument.Edits"/> onto a freshly parsed scene graph.
/// Does not record undo; used after loading a project JSON.
/// </summary>
public static class ProjectEditApplier
{
    public static void Apply(
        ProjectDocument project,
        SceneDatabase database,
        RuntimeConfigState? runtimeConfig = null) =>
        Apply(project.Edits, database, runtimeConfig);

    public static void Apply(
        IEnumerable<ProjectEdit> edits,
        SceneDatabase database,
        RuntimeConfigState? runtimeConfig = null)
    {
        foreach (var edit in edits)
        {
            if (edit.Kind == "runtimeConfig.field" &&
                runtimeConfig is not null &&
                edit.Values.TryGetValue("value", out var configText) &&
                byte.TryParse(configText, out var configValue))
            {
                runtimeConfig.Set(edit.Target, configValue);
            }
            else if (edit.Kind == "runtimeConfig.reset" && runtimeConfig is not null)
            {
                runtimeConfig.RestoreSourceSnapshot();
            }
            else if (edit.Kind == "entity.position" &&
                TryParseHexOffset(edit.Target, out var offset) &&
                edit.Values.TryGetValue("x", out var xText) &&
                edit.Values.TryGetValue("y", out var yText) &&
                byte.TryParse(xText, out var x) &&
                byte.TryParse(yText, out var y))
            {
                var entity = database.Scenes.SelectMany(scene => scene.AllEntities)
                    .FirstOrDefault(item => item.RomOffset == offset);
                if (entity is not null)
                {
                    byte.TryParse(edit.Values.GetValueOrDefault("xFlags"), out var xf);
                    byte.TryParse(edit.Values.GetValueOrDefault("yFlags"), out var yf);
                    entity.Position = new CompactPos(x, y, xf, yf);
                }
            }
            else if (edit.Kind == "entity.type" &&
                     TryParseHexOffset(edit.Target, out var typeOffset) &&
                     edit.Values.TryGetValue("typeId", out var typeText) &&
                     byte.TryParse(typeText, out var typeId))
            {
                var entity = database.Scenes.SelectMany(s => s.AllEntities)
                    .FirstOrDefault(item => item.RomOffset == typeOffset);
                if (entity is not null)
                {
                    entity.TypeId = typeId;
                    entity.DisplayName = $"{entity.Kind} {typeId}";
                }
            }
            else if (edit.Kind == "dialogue.text" &&
                     TryParseHexOffset(edit.Target, out var textOffset) &&
                     edit.Values.TryGetValue("text", out var text) &&
                     database.DialogueByOffset.TryGetValue(textOffset, out var dialogue))
            {
                dialogue.Text = text;
            }
            else if (edit.Kind == "script.arg" &&
                     TryParseHexOffset(edit.Target, out var cmdOffset) &&
                     edit.Values.TryGetValue("field", out var field) &&
                     edit.Values.TryGetValue("value", out var valueText) &&
                     int.TryParse(valueText, out var value))
            {
                foreach (var station in database.Scenes.SelectMany(s => s.Groups)
                             .SelectMany(g => g.Sectors).SelectMany(sec => sec.Stations))
                {
                    var cmd = station.Commands.FirstOrDefault(c => c.RomOffset == cmdOffset);
                    if (cmd is null)
                        continue;
                    switch (field)
                    {
                        case "op": cmd.Op = (byte)value; break;
                        case "argByte": cmd.ArgByte = (byte)value; break;
                        case "argShort": cmd.ArgShort = (short)value; break;
                        case "arg1": cmd.Arg1 = value; break;
                        case "arg2": cmd.Arg2 = value; break;
                        case "argPtr": cmd.ArgPtr = unchecked((uint)value); break;
                    }
                    break;
                }
            }
            else if (edit.Kind == "link.add")
            {
                var scene = FindScene(database, edit);
                if (scene is null)
                    continue;
                byte.TryParse(edit.Values.GetValueOrDefault("x"), out var lx);
                byte.TryParse(edit.Values.GetValueOrDefault("y"), out var ly);
                byte.TryParse(edit.Values.GetValueOrDefault("xFlags"), out var lxf);
                byte.TryParse(edit.Values.GetValueOrDefault("yFlags"), out var lyf);
                byte.TryParse(edit.Values.GetValueOrDefault("width"), out var lw);
                byte.TryParse(edit.Values.GetValueOrDefault("height"), out var lh);
                byte.TryParse(edit.Values.GetValueOrDefault("ret"), out var lret);
                byte.TryParse(edit.Values.GetValueOrDefault("unk7"), out var lunk);
                if (lw == 0) lw = 1;
                if (lh == 0) lh = 1;
                scene.Links.Add(new SceneLink
                {
                    Position = new CompactPos(lx, ly, lxf, lyf),
                    Width = lw,
                    Height = lh,
                    Ret = lret,
                    Unk7 = lunk,
                    RomOffset = -1,
                    NeedsListRewrite = true,
                });
                scene.LinksListDirty = true;
            }
            else if (edit.Kind == "link.position" &&
                     edit.Values.TryGetValue("x", out var linkXText) &&
                     edit.Values.TryGetValue("y", out var linkYText) &&
                     byte.TryParse(linkXText, out var linkX) &&
                     byte.TryParse(linkYText, out var linkY) &&
                     FindLink(database, edit) is { } movedLink)
            {
                byte.TryParse(edit.Values.GetValueOrDefault("xFlags"), out var linkXf);
                byte.TryParse(edit.Values.GetValueOrDefault("yFlags"), out var linkYf);
                movedLink.Position = new CompactPos(linkX, linkY, linkXf, linkYf);
            }
            else if (edit.Kind == "link.size" &&
                     edit.Values.TryGetValue("width", out var linkWText) &&
                     edit.Values.TryGetValue("height", out var linkHText) &&
                     byte.TryParse(linkWText, out var linkW) &&
                     byte.TryParse(linkHText, out var linkH) &&
                     FindLink(database, edit) is { } sizedLink)
            {
                sizedLink.Width = linkW;
                sizedLink.Height = linkH;
            }
            else if (edit.Kind == "link.ret" &&
                     edit.Values.TryGetValue("ret", out var linkRetText) &&
                     byte.TryParse(linkRetText, out var linkRet) &&
                     FindLink(database, edit) is { } retLink)
            {
                retLink.Ret = linkRet;
            }
            else if (edit.Kind == "script.source" &&
                     edit.Values.TryGetValue("source", out var source) &&
                     !string.IsNullOrEmpty(source))
            {
                var scene = FindScene(database, edit);
                if (scene is null)
                    continue;
                var parsed = SceneScriptSource.Parse(source, database.DialogueByOffset);
                if (!parsed.Ok)
                {
                    var first = parsed.Errors[0];
                    throw new InvalidOperationException(
                        $"Script error on line {first.Line}: {first.Message}");
                }

                SceneEditing.ApplySceneScriptSource(new ChangeService(), scene, parsed, database, source);
            }
        }
    }

    private static Scene? FindScene(SceneDatabase database, ProjectEdit edit)
    {
        if (edit.Values.TryGetValue("mapId", out var mapText) &&
            int.TryParse(mapText, out var mapId))
        {
            var byMap = database.Scenes.FirstOrDefault(scene => scene.MapId == mapId);
            if (byMap is not null)
                return byMap;
        }

        return database.Scenes.FirstOrDefault(scene =>
            string.Equals(scene.Name, edit.Target, StringComparison.Ordinal));
    }

    private static SceneLink? FindLink(SceneDatabase database, ProjectEdit edit)
    {
        if (TryParseHexOffset(edit.Target, out var offset))
        {
            var byOffset = database.Scenes.SelectMany(scene => scene.Links)
                .FirstOrDefault(link => link.RomOffset == offset);
            if (byOffset is not null)
                return byOffset;
        }

        var scene = FindScene(database, edit);
        return scene?.Links.LastOrDefault();
    }

    private static bool TryParseHexOffset(string target, out int offset)
    {
        offset = 0;
        return target.StartsWith("0x", StringComparison.OrdinalIgnoreCase) &&
               int.TryParse(target.AsSpan(2), System.Globalization.NumberStyles.HexNumber, null, out offset);
    }
}
