using RescueEditor.Core;

if (args.Length >= 1 && args[0] == "probe-layout")
{
    if (args.Length != 2)
    {
        Console.Error.WriteLine("usage: RescueEditor.Bake probe-layout <rom.gba>");
        return 1;
    }

    var probeRom = RomImage.Open(args[1]);
    Console.Write(RomLayoutReport.Build(probeRom));
    Console.WriteLine();
    return 0;
}

if (args.Length < 2)
{
    Console.Error.WriteLine("usage: RescueEditor.Bake <baserom.gba> <outputDir>");
    Console.Error.WriteLine("       RescueEditor.Bake probe-layout <rom.gba>");
    return 1;
}

var rom = RomImage.Open(args[0]);
var result = DungeonFloorPreviewBake.Run(rom, args[1]);
Console.WriteLine(
    $"Dungeon floor previews: {result.Generated} generated, {result.Skipped} skipped, {result.Failed} failed, {result.Total} cached");
return 0;
