using RescueEditor.Core;

if (args.Length < 2)
{
    Console.Error.WriteLine("usage: RescueEditor.Bake <baserom.gba> <outputDir>");
    return 1;
}

var rom = RomImage.Open(args[0]);
var result = DungeonFloorPreviewBake.Run(rom, args[1]);
Console.WriteLine(
    $"Dungeon floor previews: {result.Generated} generated, {result.Skipped} skipped, {result.Failed} failed, {result.Total} cached");
return 0;
