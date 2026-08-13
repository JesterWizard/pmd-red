using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ScriptCommandDocsTests
{
    [Fact]
    public void AlphabeticalCommandsAreSortedAndIncludeDebuginfo()
    {
        var names = ScriptCommandDocs.AlphabeticalCommandNames;
        Assert.True(names.Count > 50);
        for (var i = 1; i < names.Count; i++)
            Assert.True(
                string.Compare(names[i - 1], names[i], StringComparison.OrdinalIgnoreCase) <= 0,
                $"{names[i - 1]} should sort before {names[i]}");
        Assert.Contains("DEBUGINFO_O", names);
        Assert.Contains("UPDATE_NAME", names);
        Assert.Contains("EMOTION_EFFECT", names);
        Assert.Contains("CAMERA_SHAKE", names);
        Assert.Contains("FLASH_FROM", names);
    }

    [Fact]
    public void TooltipListsParametersAsBullets()
    {
        Assert.True(ScriptCommandDocs.TryGetByName("UPDATE_NAME", out var doc));
        var tip = ScriptCommandDocs.FormatTooltip(doc);
        Assert.Contains("UPDATE_NAME", tip);
        Assert.Contains("• kind", tip);
        Assert.Contains("UPDATE_NAME_*", tip);
        Assert.Contains("• slot", tip);
        Assert.Contains("• id", tip);
    }

    [Fact]
    public void TooltipOnlyWhenHoveringOpcodeToken()
    {
        var line = "  SET_OBJ_FLAGS(OBJ_FLAG_AIRBORNE)  // land";
        Assert.Null(ScriptCommandDocs.TooltipAtColumn(line, 0));
        Assert.NotNull(ScriptCommandDocs.TooltipAtColumn(line, line.IndexOf('S')));
        Assert.NotNull(ScriptCommandDocs.TooltipAtColumn(line, line.IndexOf('S') + 3));
        Assert.Null(ScriptCommandDocs.TooltipAtColumn(line, line.IndexOf('(')));
        Assert.Null(ScriptCommandDocs.TooltipAtColumn(line, line.IndexOf("OBJ_FLAG_AIRBORNE", StringComparison.Ordinal)));
        Assert.Null(ScriptCommandDocs.TooltipAtColumn(line, line.IndexOf('/')));
    }

    [Fact]
    public void DocumentsFlashTextboxFanfareShakeCommands()
    {
        Assert.True(ScriptCommandDocs.TryGetByName("FLASH_FROM", out _));
        Assert.True(ScriptCommandDocs.TryGetByName("FLASH_TO", out _));
        Assert.True(ScriptCommandDocs.TryGetByName("TEXTBOX_AUTO_PRESS", out _));
        Assert.True(ScriptCommandDocs.TryGetByName("FANFARE_FADEOUT2", out _));
        Assert.True(ScriptCommandDocs.TryGetByName("CAMERA_SHAKE", out var shake));
        var tip = ScriptCommandDocs.FormatTooltip(shake);
        Assert.Contains("• mode", tip);
        Assert.Contains("shake", tip, StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void TooltipForDebuginfoODescribesLineNumber()
    {
        Assert.True(ScriptCommandDocs.TryGetByName("DEBUGINFO_O", out var doc));
        var tip = ScriptCommandDocs.FormatTooltip(doc);
        Assert.Contains("originalLineNum", tip);
        Assert.Contains("no gameplay", tip, StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void TooltipForSourceLineUsesCommandName()
    {
        var tip = ScriptCommandDocs.TooltipForSourceLine(
            "  SET_OBJ_FLAGS(OBJ_FLAG_AIRBORNE)  // land");
        Assert.NotNull(tip);
        Assert.Contains("SET_OBJ_FLAGS", tip);
        Assert.Contains("OBJ_FLAG_*", tip);
        Assert.Null(ScriptCommandDocs.TooltipForSourceLine("@station g0/s0 evt"));
        Assert.Null(ScriptCommandDocs.TooltipForSourceLine(""));
    }

    [Fact]
    public void SelectAnimationTooltipListsGroundAnimDefines()
    {
        var names = new ScriptNamedDefinitions
        {
            Music = new NamedIdCatalog([]),
            Fanfare = new NamedIdCatalog([]),
            Map = new NamedIdCatalog([]),
            Emotion = new NamedIdCatalog([]),
            UpdateName = new NamedIdCatalog([]),
            ObjFlag = new NamedIdCatalog([]),
            EmotionEffect = new NamedIdCatalog([]),
            Direction = new NamedIdCatalog([]),
            DirTrans = new NamedIdCatalog([]),
            Placement = new NamedIdCatalog([]),
            GroundAnim = new NamedIdCatalog([(2, "GROUND_ANIM_STILL"), (6, "GROUND_ANIM_SLEEP"), (22, "GROUND_ANIM_TWITCH")]),
            ScriptId = new NamedIdCatalog([]),
            PaletteUtil = new NamedIdCatalog([]),
        };
        Assert.True(ScriptCommandDocs.TryGetByName("SELECT_ANIMATION", out var doc));
        var tip = ScriptCommandDocs.FormatTooltip(doc, names);
        Assert.Contains("Defines:", tip);
        Assert.Contains("• GROUND_ANIM_STILL = 2", tip);
        Assert.Contains("• GROUND_ANIM_SLEEP = 6", tip);
        Assert.Contains("• GROUND_ANIM_TWITCH = 22", tip);
    }

    [Fact]
    public void SelectAnimationTooltipUsesBuiltInDefinesWhenCatalogsMissing()
    {
        Assert.True(ScriptCommandDocs.TryGetByName("SELECT_ANIMATION", out var doc));
        var tip = ScriptCommandDocs.FormatTooltip(doc, names: null);
        Assert.Contains("Defines:", tip);
        Assert.Contains("• GROUND_ANIM_STILL = 2", tip);
        Assert.Contains("• GROUND_ANIM_TWITCH = 22", tip);
    }

    [Fact]
    public void PortraitTooltipIncludesCastMemberWhenProvided()
    {
        var cast = new ScriptSceneCast(
        [
            new ScriptCastMember(1, 2, 94, "Gengar", "MONSTER_GENGAR"),
        ]);
        var tip = ScriptCommandDocs.TooltipAtColumn(
            "  PORTRAIT(PLACEMENT_KEEP, 1, EMOTION_NORMAL)",
            "  PORTRAIT".IndexOf('P'),
            cast);
        Assert.NotNull(tip);
        Assert.Contains("live1 Gengar", tip);
    }
}
