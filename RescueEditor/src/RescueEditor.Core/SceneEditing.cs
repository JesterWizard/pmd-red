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

    public static void ReplaceDialogueSameSize(
        ChangeService changes,
        DialogueString dialogue,
        string newText,
        Charmap charmap)
    {
        // Encode via ASCII fallback for same-size safety when charmap encode is unavailable.
        var encoded = System.Text.Encoding.ASCII.GetBytes(newText);
        if (encoded.Length > dialogue.Size)
            throw new InvalidOperationException(
                $"Encoded dialogue is {encoded.Length} bytes but only {dialogue.Size} bytes are available in-place.");

        var oldText = dialogue.Text;
        changes.Execute(
            "Edit dialogue",
            apply: () => dialogue.Text = newText,
            revert: () => dialogue.Text = oldText,
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
