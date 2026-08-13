namespace RescueEditor.Core;

public static class SceneEditing
{
    public static void MoveEntity(
        ChangeService changes,
        SceneEntity entity,
        CompactPos newPosition)
    {
        var old = entity.Position;
        changes.Execute(
            $"Move {entity.DisplayName}",
            apply: () => entity.Position = newPosition,
            revert: () => entity.Position = old,
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "entity.position",
                Target = $"0x{entity.RomOffset:X}",
                Description = $"Move {entity.Kind} to ({newPosition.XTiles},{newPosition.YTiles})",
                Values =
                {
                    ["x"] = newPosition.XTiles.ToString(),
                    ["y"] = newPosition.YTiles.ToString(),
                    ["xFlags"] = newPosition.XFlags.ToString(),
                    ["yFlags"] = newPosition.YFlags.ToString(),
                    ["kind"] = entity.Kind.ToString(),
                },
            });
    }

    public static void SetEntityType(ChangeService changes, SceneEntity entity, byte typeId)
    {
        var old = entity.TypeId;
        changes.Execute(
            $"Set {entity.DisplayName} type",
            apply: () =>
            {
                entity.TypeId = typeId;
                entity.DisplayName = $"{entity.Kind} {typeId}";
            },
            revert: () =>
            {
                entity.TypeId = old;
                entity.DisplayName = $"{entity.Kind} {old}";
            },
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "entity.type",
                Target = $"0x{entity.RomOffset:X}",
                Values = { ["typeId"] = typeId.ToString() },
            });
    }

    public static void SetEntityDirection(ChangeService changes, SceneEntity entity, byte direction)
    {
        var old = entity.DirectionOrFlags;
        changes.Execute(
            $"Set {entity.DisplayName} direction",
            apply: () => entity.DirectionOrFlags = direction,
            revert: () => entity.DirectionOrFlags = old,
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "entity.direction",
                Target = $"0x{entity.RomOffset:X}",
                Values = { ["direction"] = direction.ToString() },
            });
    }

    /// <summary>
    /// Toggle CompactPos half-tile offsets (CPOS_HALFTILE = 0x2) on X and/or Y.
    /// Preserves other flag bits (e.g. CPOS_CURRENT).
    /// </summary>
    public static void SetEntityHalfTileFlags(
        ChangeService changes,
        SceneEntity entity,
        bool halfX,
        bool halfY)
    {
        var old = entity.Position;
        var xFlags = halfX
            ? (byte)(old.XFlags | CompactPos.FlagHalfTile)
            : (byte)(old.XFlags & ~CompactPos.FlagHalfTile);
        var yFlags = halfY
            ? (byte)(old.YFlags | CompactPos.FlagHalfTile)
            : (byte)(old.YFlags & ~CompactPos.FlagHalfTile);
        if (xFlags == old.XFlags && yFlags == old.YFlags)
            return;

        var next = new CompactPos(old.XTiles, old.YTiles, xFlags, yFlags);
        changes.Execute(
            $"Set {entity.DisplayName} half-tile",
            apply: () => entity.Position = next,
            revert: () => entity.Position = old,
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "entity.halftile",
                Target = $"0x{entity.RomOffset:X}",
                Values =
                {
                    ["halfX"] = halfX ? "1" : "0",
                    ["halfY"] = halfY ? "1" : "0",
                    ["xFlags"] = xFlags.ToString(),
                    ["yFlags"] = yFlags.ToString(),
                },
            });
    }

    public static void SetEntitySize(ChangeService changes, SceneEntity entity, byte width, byte height)
    {
        var oldW = entity.Width;
        var oldH = entity.Height;
        changes.Execute(
            $"Set {entity.DisplayName} size",
            apply: () =>
            {
                entity.Width = width;
                entity.Height = height;
            },
            revert: () =>
            {
                entity.Width = oldW;
                entity.Height = oldH;
            },
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "entity.size",
                Target = $"0x{entity.RomOffset:X}",
                Values =
                {
                    ["width"] = width.ToString(),
                    ["height"] = height.ToString(),
                },
            });
    }

    public static void SetCommandArgument(
        ChangeService changes,
        ScriptCommandData command,
        string field,
        int value)
    {
        int old = field switch
        {
            "op" => command.Op,
            "argByte" => command.ArgByte,
            "argShort" => command.ArgShort,
            "arg1" => command.Arg1,
            "arg2" => command.Arg2,
            "argPtr" => unchecked((int)command.ArgPtr),
            _ => throw new ArgumentOutOfRangeException(nameof(field)),
        };

        changes.Execute(
            $"Edit {ScriptOpcodeNames.GetName(command.Op)}.{field}",
            apply: () => ApplyCommandField(command, field, value),
            revert: () => ApplyCommandField(command, field, old),
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "script.arg",
                Target = command.RomOffset >= 0 ? $"0x{command.RomOffset:X}" : command.Op.ToString("X2"),
                Values =
                {
                    ["field"] = field,
                    ["value"] = value.ToString(),
                },
            });
    }

    public static SceneEntity AddEntity(
        ChangeService changes,
        SceneSector sector,
        SceneEntityKind kind,
        CompactPos? position = null)
    {
        var list = sector.ListFor(kind);
        var entity = CreateDefaultEntity(kind, sector, list.Count, position ?? new CompactPos(5, 5, 0, 0));
        changes.Execute(
            $"Add {kind}",
            apply: () =>
            {
                list.Add(entity);
                Reindex(list);
                sector.SetListDirty(kind, true);
            },
            revert: () =>
            {
                list.Remove(entity);
                Reindex(list);
                sector.SetListDirty(kind, true);
            },
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "entity.add",
                Target = $"sector:{sector.Group}:{sector.Sector}:{kind}",
                Values =
                {
                    ["kind"] = kind.ToString(),
                    ["x"] = entity.Position.XTiles.ToString(),
                    ["y"] = entity.Position.YTiles.ToString(),
                },
            });
        return entity;
    }

    public static void RemoveEntity(ChangeService changes, SceneSector sector, SceneEntity entity)
    {
        var list = sector.ListFor(entity.Kind);
        var index = list.IndexOf(entity);
        if (index < 0)
            return;
        changes.Execute(
            $"Remove {entity.DisplayName}",
            apply: () =>
            {
                list.Remove(entity);
                Reindex(list);
                sector.SetListDirty(entity.Kind, true);
            },
            revert: () =>
            {
                if (index > list.Count)
                    list.Add(entity);
                else
                    list.Insert(index, entity);
                Reindex(list);
                sector.SetListDirty(entity.Kind, true);
            },
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "entity.remove",
                Target = $"0x{entity.RomOffset:X}",
                Values =
                {
                    ["kind"] = entity.Kind.ToString(),
                    ["group"] = sector.Group.ToString(),
                    ["sector"] = sector.Sector.ToString(),
                    ["index"] = index.ToString(),
                },
            });
    }

    public static SceneEntity DuplicateEntity(ChangeService changes, SceneSector sector, SceneEntity source)
    {
        var clone = CreateDefaultEntity(source.Kind, sector, sector.ListFor(source.Kind).Count, source.Position);
        clone.TypeId = source.TypeId;
        clone.DirectionOrFlags = source.DirectionOrFlags;
        clone.Width = source.Width;
        clone.Height = source.Height;
        clone.DisplayName = $"{source.Kind} {source.TypeId}";
        clone.Position = new CompactPos(
            (byte)Math.Clamp(source.Position.XTiles + 1, 0, 255),
            (byte)Math.Clamp(source.Position.YTiles + 1, 0, 255),
            source.Position.XFlags,
            source.Position.YFlags);
        Array.Copy(source.RawBytes, clone.RawBytes, Math.Min(source.RawBytes.Length, clone.RawBytes.Length));
        clone.RawBytes[0] = clone.TypeId;
        clone.RawBytes[1] = clone.DirectionOrFlags;
        clone.RawBytes[2] = clone.Width;
        clone.RawBytes[3] = clone.Height;
        clone.Position.Write(clone.RawBytes.AsSpan(4, 4));

        var list = sector.ListFor(source.Kind);
        changes.Execute(
            $"Duplicate {source.DisplayName}",
            apply: () =>
            {
                list.Add(clone);
                Reindex(list);
                sector.SetListDirty(source.Kind, true);
            },
            revert: () =>
            {
                list.Remove(clone);
                Reindex(list);
                sector.SetListDirty(source.Kind, true);
            },
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "entity.duplicate",
                Target = $"0x{source.RomOffset:X}",
                Values = { ["kind"] = source.Kind.ToString() },
            });
        return clone;
    }

    public static SceneSector AddSector(ChangeService changes, SceneGroup group)
    {
        var sector = new SceneSector
        {
            Group = group.Index,
            Sector = group.Sectors.Count,
            RomOffset = -1,
            SectorBlobDirty = true,
        };
        changes.Execute(
            $"Add sector {sector.Sector}",
            apply: () =>
            {
                group.Sectors.Add(sector);
                ReindexSectors(group);
                group.SectorListDirty = true;
            },
            revert: () =>
            {
                group.Sectors.Remove(sector);
                ReindexSectors(group);
                group.SectorListDirty = true;
            },
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "sector.add",
                Target = $"group:{group.Index}",
                Values = { ["sector"] = sector.Sector.ToString() },
            });
        return sector;
    }

    /// <summary>
    /// Appends an empty station script (RET stub) to the sector. Max <see cref="SceneStations.MaxPerSector"/>.
    /// Clears <see cref="Scene.ScriptSourceText"/> so the script editor regenerates @station headers.
    /// </summary>
    public static ScriptRefData AddStation(
        ChangeService changes,
        Scene scene,
        SceneSector sector,
        string? name = null)
    {
        if (sector.Stations.Count >= SceneStations.MaxPerSector)
        {
            throw new InvalidOperationException(
                $"Sector g{sector.Group}/s{sector.Sector} already has {SceneStations.MaxPerSector} stations.");
        }

        var station = new ScriptRefData
        {
            Name = string.IsNullOrWhiteSpace(name) ? string.Empty : name.Trim(),
            ScriptOffset = -1,
            RomOffset = -1,
            NameOffset = -1,
            Commands = { new ScriptCommandData { Op = 0xEF } },
        };
        var oldSource = scene.ScriptSourceText;
        changes.Execute(
            $"Add station g{sector.Group}/s{sector.Sector}",
            apply: () =>
            {
                sector.Stations.Add(station);
                sector.HasStation = true;
                sector.StationsListDirty = true;
                scene.ScriptSourceText = null;
            },
            revert: () =>
            {
                sector.Stations.Remove(station);
                sector.HasStation = sector.Stations.Count > 0;
                sector.StationsListDirty = true;
                scene.ScriptSourceText = oldSource;
            },
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "station.add",
                Target = $"sector:{sector.Group}:{sector.Sector}",
                Values =
                {
                    ["group"] = sector.Group.ToString(),
                    ["sector"] = sector.Sector.ToString(),
                    ["index"] = sector.Stations.Count.ToString(),
                },
            });
        return station;
    }

    public static void RemoveSector(ChangeService changes, SceneGroup group, SceneSector sector)
    {
        if (group.Sectors.Count <= 1)
            throw new InvalidOperationException("Cannot remove the last sector in a group.");
        var index = group.Sectors.IndexOf(sector);
        if (index < 0)
            return;
        changes.Execute(
            $"Remove sector {sector.Sector}",
            apply: () =>
            {
                group.Sectors.Remove(sector);
                ReindexSectors(group);
                group.SectorListDirty = true;
            },
            revert: () =>
            {
                if (index > group.Sectors.Count)
                    group.Sectors.Add(sector);
                else
                    group.Sectors.Insert(index, sector);
                ReindexSectors(group);
                group.SectorListDirty = true;
            },
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "sector.remove",
                Target = $"group:{group.Index}:sector:{sector.Sector}",
            });
    }

    public static void ReplaceDialogue(
        ChangeService changes,
        DialogueString dialogue,
        string newText,
        Charmap? charmap = null)
    {
        var oldText = dialogue.Text;
        var oldDirty = dialogue.Dirty;
        changes.Execute(
            "Edit dialogue",
            apply: () =>
            {
                dialogue.Text = newText;
                dialogue.Dirty = true;
            },
            revert: () =>
            {
                dialogue.Text = oldText;
                dialogue.Dirty = oldDirty;
            },
            edit: new ProjectEdit
            {
                Id = Guid.NewGuid().ToString("N"),
                Kind = "dialogue.text",
                Target = $"0x{dialogue.Offset:X}",
                Description = newText.Length > 64 ? newText[..64] + "…" : newText,
                Values =
                {
                    ["text"] = newText,
                    ["size"] = dialogue.Size.ToString(),
                },
            });
        _ = charmap;
    }

    [Obsolete("Use ReplaceDialogue; longer strings relocate on ROM build.")]
    public static void ReplaceDialogueSameSize(
        ChangeService changes,
        DialogueString dialogue,
        string newText,
        Charmap charmap) =>
        ReplaceDialogue(changes, dialogue, newText, charmap);

    public static void ApplySceneScriptSource(
        ChangeService changes,
        Scene scene,
        ScriptSourceParseResult parsed,
        SceneDatabase? database = null,
        string? sourceText = null)
    {
        if (!parsed.Ok)
        {
            var first = parsed.Errors[0];
            throw new InvalidOperationException($"Script error on line {first.Line}: {first.Message}");
        }

        var oldSource = scene.ScriptSourceText;
        var replacements = new List<(List<ScriptCommandData> Target, List<ScriptCommandData> Old, List<ScriptCommandData> Next, Action? MarkDirty)>();
        var dialogueEdits = new List<(DialogueString Dialogue, string OldText, string NewText, bool OldDirty)>();
        var pendingDialogue = new List<(int Offset, DialogueString Dialogue)>();

        foreach (var section in parsed.Sections)
        {
            List<ScriptCommandData>? target = null;
            Action? markDirty = null;
            if (section.Kind == "station")
            {
                var station = FindStation(scene, section.Group, section.Sector, section.Index, section.Name)
                    ?? throw new InvalidOperationException(
                        $"No station '{section.Name}' at g{section.Group}/s{section.Sector}.");
                target = station.Commands;
            }
            else if (section.Kind is "live" or "object" or "effect")
            {
                var slot = FindEntityScript(scene, section)
                    ?? throw new InvalidOperationException(
                        $"No {section.Kind} script at g{section.Group}/s{section.Sector} dlg{section.ScriptSlot}.");
                target = slot.Commands;
                markDirty = () => slot.Dirty = true;
            }
            else if (section.Kind == "event")
            {
                var eventScript = FindEventScript(scene, section.Group, section.Sector, section.Index, section.Name)
                    ?? throw new InvalidOperationException(
                        $"No event script '{section.Name}' at g{section.Group}/s{section.Sector}.");
                target = eventScript.Commands;
            }
            else if (section.Commands.Count == 0)
            {
                continue;
            }
            else
            {
                throw new InvalidOperationException($"Unsupported script section kind '{section.Kind}'.");
            }

            var old = target.ToList();
            var next = new List<ScriptCommandData>(section.Commands.Count);
            var claimedPtrs = new HashSet<uint>();
            for (var i = 0; i < section.Commands.Count; i++)
            {
                var parsedCommand = section.Commands[i];
                var command = CloneCommand(parsedCommand.Command);
                if (parsedCommand.DialogueText is not null && command.ArgPtr == 0)
                    command.ArgPtr = ReuseDialoguePointer(old, command.Op, i, claimedPtrs);

                if (command.ArgPtr != 0)
                    claimedPtrs.Add(command.ArgPtr);

                if (parsedCommand.DialogueText is not null && database is not null)
                {
                    if (command.ArgPtr == 0)
                    {
                        var offset = -1;
                        while (database.DialogueByOffset.ContainsKey(offset) ||
                               pendingDialogue.Any(item => item.Offset == offset))
                            offset--;
                        var created = new DialogueString
                        {
                            Offset = offset,
                            Size = Math.Max(64, DialogueEncodedBudget.CountBytes(parsedCommand.DialogueText) + 16),
                            Text = parsedCommand.DialogueText,
                            Dirty = true,
                        };
                        command.ArgPtr = unchecked((uint)offset);
                        pendingDialogue.Add((offset, created));
                    }
                    else if (TryGetDialogue(database, command.ArgPtr, out var dialogue) &&
                             dialogue.Text != parsedCommand.DialogueText)
                    {
                        dialogueEdits.Add((dialogue, dialogue.Text, parsedCommand.DialogueText, dialogue.Dirty));
                    }
                }

                next.Add(command);
            }

            replacements.Add((target, old, next, markDirty));
        }

        if (replacements.Count == 0 && dialogueEdits.Count == 0 && pendingDialogue.Count == 0 &&
            sourceText is null)
            return;

        var projectEdit = new ProjectEdit
        {
            Id = Guid.NewGuid().ToString("N"),
            Kind = "script.source",
            Target = scene.Name,
            Description = $"Update {replacements.Count} script section(s)",
            Values = { ["mapId"] = scene.MapId.ToString() },
        };
        if (sourceText is not null)
            projectEdit.Values["source"] = sourceText;

        changes.Execute(
            "Edit scene script",
            apply: () =>
            {
                foreach (var replacement in replacements)
                {
                    replacement.Target.Clear();
                    replacement.Target.AddRange(replacement.Next);
                    replacement.MarkDirty?.Invoke();
                }
                foreach (var edit in dialogueEdits)
                {
                    edit.Dialogue.Text = edit.NewText;
                    edit.Dialogue.Dirty = true;
                }
                if (database is not null)
                {
                    foreach (var pending in pendingDialogue)
                        database.DialogueByOffset[pending.Offset] = pending.Dialogue;
                }
                if (sourceText is not null)
                    scene.ScriptSourceText = sourceText;
                database?.InvalidateReferences();
            },
            revert: () =>
            {
                foreach (var replacement in replacements)
                {
                    replacement.Target.Clear();
                    replacement.Target.AddRange(replacement.Old);
                    replacement.MarkDirty?.Invoke();
                }
                foreach (var edit in dialogueEdits)
                {
                    edit.Dialogue.Text = edit.OldText;
                    edit.Dialogue.Dirty = edit.OldDirty;
                }
                if (database is not null)
                {
                    foreach (var pending in pendingDialogue)
                        database.DialogueByOffset.Remove(pending.Offset);
                }
                scene.ScriptSourceText = oldSource;
                database?.InvalidateReferences();
            },
            edit: projectEdit);
    }

    private static EntityScriptSlot? FindEntityScript(Scene scene, ScriptSourceSection section)
    {
        var kind = section.Kind switch
        {
            "live" => SceneEntityKind.Live,
            "object" => SceneEntityKind.Object,
            "effect" => SceneEntityKind.Effect,
            _ => (SceneEntityKind?)null,
        };
        if (kind is null)
            return null;
        var sceneGroup = scene.Groups.ElementAtOrDefault(section.Group);
        var sceneSector = sceneGroup?.Sectors.FirstOrDefault(item => item.Sector == section.Sector)
            ?? sceneGroup?.Sectors.ElementAtOrDefault(section.Sector);
        if (sceneSector is null)
            return null;
        var list = sceneSector.ListFor(kind.Value);
        var entity = section.Index >= 0 && section.Index < list.Count
            ? list[section.Index]
            : list.FirstOrDefault();
        return entity?.ScriptSlot(section.ScriptSlot);
    }

    private static ScriptRefData? FindEventScript(Scene scene, int group, int sector, int index, string name)
    {
        var sceneGroup = scene.Groups.ElementAtOrDefault(group);
        var sceneSector = sceneGroup?.Sectors.FirstOrDefault(item => item.Sector == sector)
            ?? sceneGroup?.Sectors.ElementAtOrDefault(sector);
        var events = sceneSector?.Events;
        if (events is null || events.Count == 0)
            return null;
        if (!string.IsNullOrEmpty(name))
        {
            var named = events.FirstOrDefault(item =>
                item.EventScript is not null &&
                string.Equals(item.EventScript.Name, name, StringComparison.Ordinal));
            if (named?.EventScript is not null)
                return named.EventScript;
        }

        var entity = index >= 0 && index < events.Count ? events[index] : events[0];
        return entity.EventScript;
    }

    private static ScriptRefData? FindStation(Scene scene, int group, int sector, int index, string name)
    {
        var sceneGroup = scene.Groups.ElementAtOrDefault(group);
        var sceneSector = sceneGroup?.Sectors.FirstOrDefault(item => item.Sector == sector)
            ?? sceneGroup?.Sectors.ElementAtOrDefault(sector);
        var stations = sceneSector?.Stations;
        if (stations is null || stations.Count == 0)
            return null;
        if (!string.IsNullOrEmpty(name))
        {
            var named = stations.FirstOrDefault(station =>
                string.Equals(station.Name, name, StringComparison.Ordinal));
            if (named is not null)
                return named;
        }

        return index >= 0 && index < stations.Count ? stations[index] : stations[0];
    }

    private static uint ReuseDialoguePointer(
        IReadOnlyList<ScriptCommandData> old,
        byte op,
        int index,
        HashSet<uint> claimed)
    {
        if (index < old.Count &&
            old[index].Op == op &&
            old[index].ArgPtr != 0 &&
            ScriptOpcodeNames.TextPointerOps.Contains(old[index].Op) &&
            !claimed.Contains(old[index].ArgPtr))
            return old[index].ArgPtr;

        var reused = old.FirstOrDefault(candidate =>
            candidate.Op == op &&
            candidate.ArgPtr != 0 &&
            ScriptOpcodeNames.TextPointerOps.Contains(candidate.Op) &&
            !claimed.Contains(candidate.ArgPtr));
        return reused?.ArgPtr ?? 0;
    }

    private static bool TryGetDialogue(SceneDatabase database, uint pointer, out DialogueString dialogue)
    {
        var offset = pointer >= RomImage.RomVirtualAddress && pointer < RomImage.RomVirtualAddress + 0x02000000
            ? (int)(pointer - RomImage.RomVirtualAddress)
            : unchecked((int)pointer);
        return database.DialogueByOffset.TryGetValue(offset, out dialogue!);
    }

    private static ScriptCommandData CloneCommand(ScriptCommandData command) => new()
    {
        Op = command.Op,
        ArgByte = command.ArgByte,
        ArgShort = command.ArgShort,
        Arg1 = command.Arg1,
        Arg2 = command.Arg2,
        ArgPtr = command.ArgPtr,
        RomOffset = command.RomOffset,
    };

    private static SceneEntity CreateDefaultEntity(
        SceneEntityKind kind,
        SceneSector sector,
        int index,
        CompactPos position)
    {
        var size = SceneEntity.EntrySizeFor(kind);
        var raw = new byte[size];
        raw[2] = 1;
        raw[3] = 1;
        position.Write(raw.AsSpan(4, 4));
        return new SceneEntity
        {
            Kind = kind,
            TypeId = 0,
            DirectionOrFlags = 0,
            Width = 1,
            Height = 1,
            Position = position,
            RomOffset = -1,
            Group = sector.Group,
            Sector = sector.Sector,
            Index = index,
            RawBytes = raw,
            DisplayName = $"{kind} 0",
            NeedsListRewrite = true,
            ScriptOffsets = CreateScriptOffsets(kind),
        };
    }

    private static int[] CreateScriptOffsets(SceneEntityKind kind) => kind switch
    {
        SceneEntityKind.Live or SceneEntityKind.Object => [-1, -1, -1, -1],
        SceneEntityKind.Effect => [-1],
        _ => [],
    };

    private static void Reindex(List<SceneEntity> list)
    {
        for (var i = 0; i < list.Count; i++)
            list[i].Index = i;
    }

    private static void ReindexSectors(SceneGroup group)
    {
        for (var i = 0; i < group.Sectors.Count; i++)
        {
            group.Sectors[i].Sector = i;
            foreach (var entity in group.Sectors[i].Lives
                         .Concat(group.Sectors[i].Objects)
                         .Concat(group.Sectors[i].Effects)
                         .Concat(group.Sectors[i].Events))
            {
                entity.Sector = i;
            }
        }
    }

    private static void ApplyCommandField(ScriptCommandData command, string field, int value)
    {
        switch (field)
        {
            case "op":
                command.Op = (byte)value;
                break;
            case "argByte":
                command.ArgByte = (byte)value;
                break;
            case "argShort":
                command.ArgShort = (short)value;
                break;
            case "arg1":
                command.Arg1 = value;
                break;
            case "arg2":
                command.Arg2 = value;
                break;
            case "argPtr":
                command.ArgPtr = unchecked((uint)value);
                break;
        }
    }
}
