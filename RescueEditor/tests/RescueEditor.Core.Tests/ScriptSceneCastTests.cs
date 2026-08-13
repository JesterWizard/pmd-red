using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ScriptSceneCastTests
{
    [Fact]
    public void BuildsLiveRosterWithSpeciesNames()
    {
        var scene = new Scene { MapId = 1, Name = "Test" };
        var group = new SceneGroup { Index = 0 };
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            Group = 0,
            Sector = 0,
            Index = 0,
            TypeId = 10,
        });
        sector.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            Group = 0,
            Sector = 0,
            Index = 1,
            TypeId = 20,
        });
        group.Sectors.Add(sector);
        scene.Groups.Add(group);

        var monsters = new NamedIdCatalog([(38, "MONSTER_NINETALES"), (94, "MONSTER_GENGAR")]);
        var cast = ScriptSceneCast.Build(
            scene,
            resolveSpecies: typeId => typeId switch
            {
                10 => 38,
                20 => 94,
                _ => 0,
            },
            monsters: monsters,
            prettyName: species => species switch
            {
                38 => "Ninetales",
                94 => "Gengar",
                _ => "Pokémon",
            });

        Assert.Equal(2, cast.Members.Count);
        Assert.Equal("Ninetales", cast.Members[0].SpeciesName);
        Assert.Equal("MONSTER_NINETALES", cast.Members[0].MonsterDefine);
        Assert.Equal("Gengar", cast.Members[1].SpeciesName);
        Assert.Equal("live1 Gengar", cast.DescribeLive(1));
        Assert.Contains("Gengar", cast.RosterText());
        Assert.Contains("Ninetales", cast.RosterText());
    }

    [Fact]
    public void AnnotatesPortraitAndLiveHeaders()
    {
        var cast = new ScriptSceneCast(
        [
            new ScriptCastMember(0, 1, 38, "Ninetales", "MONSTER_NINETALES"),
            new ScriptCastMember(1, 2, 94, "Gengar", "MONSTER_GENGAR"),
        ]);

        var portrait = ScriptSource.FormatCommand(
            new ScriptCommandData { Op = 0x2E, ArgByte = 3, ArgShort = 1, Arg1 = 0 },
            cast: cast);
        Assert.Contains("PORTRAIT(", portrait);
        Assert.Contains("# live1 Gengar", portrait);

        var header = SceneScriptSource.FormatLiveHeader(group: 0, sector: 0, entityIndex: 1, scriptSlot: 0, cast);
        Assert.Contains("@live g0/s0.1 dlg0", header);
        Assert.Contains("Gengar", header);
        Assert.Contains("type 2", header);
    }

    [Fact]
    public void BuildDoesNotThrowWhenMultipleSectorsReuseLiveIndices()
    {
        var scene = new Scene { MapId = 1, Name = "Multi" };
        var group = new SceneGroup { Index = 0 };
        var first = new SceneSector { Group = 0, Sector = 0 };
        first.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            Group = 0,
            Sector = 0,
            Index = 0,
            TypeId = 10,
        });
        var second = new SceneSector { Group = 0, Sector = 1 };
        second.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            Group = 0,
            Sector = 1,
            Index = 0,
            TypeId = 20,
        });
        group.Sectors.Add(first);
        group.Sectors.Add(second);
        scene.Groups.Add(group);

        var cast = ScriptSceneCast.Build(
            scene,
            resolveSpecies: typeId => typeId switch
            {
                10 => 38,
                20 => 94,
                _ => 0,
            },
            prettyName: species => species switch
            {
                38 => "Ninetales",
                94 => "Gengar",
                _ => "Pokémon",
            });

        Assert.Single(cast.Members);
        Assert.Equal("Ninetales", cast.Members[0].SpeciesName);
        Assert.Equal("live0 Ninetales", cast.DescribeLive(0));
    }

    [Fact]
    public void BuildUsesScopedSectorWhenGroupAndSectorProvided()
    {
        var scene = new Scene { MapId = 1, Name = "Scoped" };
        var group = new SceneGroup { Index = 0 };
        var first = new SceneSector { Group = 0, Sector = 0 };
        first.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            Group = 0,
            Sector = 0,
            Index = 0,
            TypeId = 10,
        });
        var second = new SceneSector { Group = 0, Sector = 1 };
        second.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            Group = 0,
            Sector = 1,
            Index = 0,
            TypeId = 20,
        });
        group.Sectors.Add(first);
        group.Sectors.Add(second);
        scene.Groups.Add(group);

        var cast = ScriptSceneCast.Build(
            scene,
            resolveSpecies: typeId => typeId switch
            {
                10 => 38,
                20 => 94,
                _ => 0,
            },
            prettyName: species => species switch
            {
                38 => "Ninetales",
                94 => "Gengar",
                _ => "Pokémon",
            },
            group: 0,
            sector: 1);

        Assert.Single(cast.Members);
        Assert.Equal("Gengar", cast.Members[0].SpeciesName);
    }
}
