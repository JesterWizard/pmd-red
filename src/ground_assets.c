#include "global.h"
#include "ground_assets.h"
#include "gba/syscall.h"
#include "memory.h"

// Custom container so raw BPL/BPA payloads that happen to start with 0x10
// (e.g. BPA numFrames == 16) are never mistaken for BIOS LZ77 data.
#define GROUND_LZ_MAGIC_0 'G'
#define GROUND_LZ_MAGIC_1 'M'
#define GROUND_LZ_MAGIC_2 'L'
#define GROUND_LZ_MAGIC_3 'Z'

#define GROUND_FILE_BUFFER_COUNT 64

typedef struct GroundFileBuffer
{
    OpenedFile *openedFile;
    void *buffer;
} GroundFileBuffer;

static EWRAM_DATA GroundFileBuffer sGroundFileBuffers[GROUND_FILE_BUFFER_COUNT] = {0};

static GroundFileBuffer *FindGroundFileBuffer(OpenedFile *openedFile)
{
    s32 i;

    for (i = 0; i < GROUND_FILE_BUFFER_COUNT; i++) {
        if (sGroundFileBuffers[i].openedFile == openedFile)
            return &sGroundFileBuffers[i];
    }
    return NULL;
}

static GroundFileBuffer *FindFreeGroundFileBuffer(void)
{
    s32 i;

    for (i = 0; i < GROUND_FILE_BUFFER_COUNT; i++) {
        if (sGroundFileBuffers[i].openedFile == NULL)
            return &sGroundFileBuffers[i];
    }
    return NULL;
}

static bool8 IsGroundLzContainer(const u8 *data)
{
    return data[0] == GROUND_LZ_MAGIC_0
        && data[1] == GROUND_LZ_MAGIC_1
        && data[2] == GROUND_LZ_MAGIC_2
        && data[3] == GROUND_LZ_MAGIC_3
        && data[4] == 0x10;
}

OpenedFile *OpenGroundFileAndGetFileDataPtr(const u8 *filename, const FileArchive *arc)
{
    OpenedFile *openedFile = OpenFile(filename, arc);
    const u8 *compressedData;
    GroundFileBuffer *fileBuffer;
    u32 decompressedSize;

    if (openedFile == NULL)
        return NULL;

    compressedData = openedFile->file->data;
    if (!IsGroundLzContainer(compressedData)) {
        GetFileDataPtr(openedFile, 0);
        return openedFile;
    }

    // Skip the GMLZ tag; BIOS wants a standard 0x10 LZ77 stream.
    compressedData += 4;
    decompressedSize = compressedData[1]
        | (compressedData[2] << 8)
        | (compressedData[3] << 16);
    fileBuffer = FindFreeGroundFileBuffer();
    if (fileBuffer == NULL || decompressedSize == 0) {
        CloseFile(openedFile);
        return NULL;
    }

    // BIOS LZ77 requires 4-byte-aligned source and destination.
    fileBuffer->buffer = MemoryAlloc((decompressedSize + 3) & ~3, MEMALLOC_GROUP_6);
    LZ77UnCompWram(compressedData, fileBuffer->buffer);
    fileBuffer->openedFile = openedFile;
    openedFile->data = fileBuffer->buffer;
    return openedFile;
}

void CloseGroundFile(OpenedFile *openedFile)
{
    GroundFileBuffer *fileBuffer;

    if (openedFile == NULL)
        return;

    fileBuffer = FindGroundFileBuffer(openedFile);
    if (fileBuffer != NULL) {
        MemoryFree(fileBuffer->buffer);
        fileBuffer->openedFile = NULL;
        fileBuffer->buffer = NULL;
    }
    CloseFile(openedFile);
}
