using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class RuntimeConfigSchemaTests
{
    [Fact]
    public void SchemaMatchesLiveRuntimeHeader()
    {
        var headerPath = RuntimeConfigHeaderParser.TryFindHeaderPath();
        Assert.NotNull(headerPath);

        var result = RuntimeConfigSchema.SyncWithHeader(headerPath);
        Assert.True(result.InSync, result.FormatError());
        Assert.Equal(result.HeaderIds.Count, RuntimeConfigSchema.ByteLength);
    }

    [Fact]
    public void SnapshotMatchesLiveRuntimeHeader()
    {
        var headerPath = RuntimeConfigHeaderParser.TryFindHeaderPath();
        Assert.NotNull(headerPath);
        var live = RuntimeConfigHeaderParser.ParseFile(headerPath!).Select(f => f.Id).ToArray();
        var snapshot = RuntimeConfigHeaderSnapshot.Fields.Select(f => f.Id).ToArray();
        Assert.Equal(live, snapshot);
    }

    [Fact]
    public void ParserReadsRuntimeConfigMembersInOrder()
    {
        const string header = """
            typedef struct {
                u8 alpha; /* first */
                /* block comment for beta */
                u8 beta;
                u8 gamma; /* third */
            } RuntimeConfig;
            """;
        var fields = RuntimeConfigHeaderParser.Parse(header);
        Assert.Equal(["alpha", "beta", "gamma"], fields.Select(f => f.Id).ToArray());
        Assert.Equal("first", fields[0].Comment);
        Assert.Contains("block comment", fields[1].Comment, StringComparison.Ordinal);
        Assert.Equal(0, fields[0].Offset);
        Assert.Equal(2, fields[2].Offset);
    }

    [Fact]
    public void ByteOffsetsAreContiguousU8Slots()
    {
        Assert.Equal(RuntimeConfigHeaderSnapshot.Fields.Length, RuntimeConfigSchema.ByteLength);
        for (var i = 0; i < RuntimeConfigSchema.Fields.Count; i++)
            Assert.Equal(i, RuntimeConfigSchema.Fields[i].Offset);
    }

    [Theory]
    [InlineData("exp_multiplier", RuntimeConfigFieldKind.U8)]
    [InlineData("bank_interest_percent", RuntimeConfigFieldKind.U8)]
    [InlineData("always_run", RuntimeConfigFieldKind.Toggle)]
    [InlineData("debug_menu", RuntimeConfigFieldKind.Toggle)]
    public void FieldKindsMatchRuntimeSemantics(string id, RuntimeConfigFieldKind kind)
    {
        var field = RuntimeConfigSchema.Find(id);
        Assert.NotNull(field);
        Assert.Equal(kind, field!.Kind);
    }

    [Fact]
    public void EveryFieldHasDisplayNameGroupAndDescription()
    {
        foreach (var field in RuntimeConfigSchema.Fields)
        {
            Assert.False(string.IsNullOrWhiteSpace(field.DisplayName));
            Assert.False(string.IsNullOrWhiteSpace(field.Group));
            Assert.False(string.IsNullOrWhiteSpace(field.Description));
        }
    }

    [Fact]
    public void CompareToSchemaDetectsDrift()
    {
        var header = RuntimeConfigHeaderParser.Parse("""
            typedef struct {
                u8 always_run;
                u8 brand_new_flag;
            } RuntimeConfig;
            """);
        var result = RuntimeConfigHeaderParser.CompareToSchema(header, RuntimeConfigSchema.Fields);
        Assert.False(result.InSync);
        Assert.Contains("brand_new_flag", result.MissingInSchema);
    }
}
