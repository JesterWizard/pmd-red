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

static u32 GetGroundLzDecompressedSize(const u8 *lzStream)
{
    return lzStream[1]
        | (lzStream[2] << 8)
        | (lzStream[3] << 16);
}

const void *OpenGroundFileData(const u8 *filename, const FileArchive *arc,
                               void *scratch, u32 scratchSize, OpenedFile **outFile)
{
    OpenedFile *openedFile = OpenFile(filename, arc);
    const u8 *compressedData;
    u32 decompressedSize;
    GroundFileBuffer *fileBuffer;

    if (outFile != NULL)
        *outFile = NULL;

    if (openedFile == NULL)
        return NULL;

    compressedData = openedFile->file->data;
    if (!IsGroundLzContainer(compressedData)) {
        GetFileDataPtr(openedFile, 0);
        if (outFile != NULL)
            *outFile = openedFile;
        return openedFile->data;
    }

    // Skip the GMLZ tag; BIOS wants a standard 0x10 LZ77 stream.
    compressedData += 4;
    decompressedSize = GetGroundLzDecompressedSize(compressedData);
    if (decompressedSize == 0) {
        CloseFile(openedFile);
        return NULL;
    }

    // Prefer caller scratch (e.g. GroundBg unk544) so large BPCs never touch the heap.
    if (scratch != NULL && decompressedSize <= scratchSize) {
        LZ77UnCompWram(compressedData, scratch);
        CloseFile(openedFile);
        return scratch;
    }

    fileBuffer = FindFreeGroundFileBuffer();
    if (fileBuffer == NULL) {
        CloseFile(openedFile);
        return NULL;
    }

    // BIOS LZ77 requires 4-byte-aligned source and destination.
    fileBuffer->buffer = MemoryAlloc((decompressedSize + 3) & ~3, MEMALLOC_GROUP_6);
    LZ77UnCompWram(compressedData, fileBuffer->buffer);
    fileBuffer->openedFile = openedFile;
    openedFile->data = fileBuffer->buffer;
    if (outFile != NULL)
        *outFile = openedFile;
    return fileBuffer->buffer;
}

OpenedFile *OpenGroundFileAndGetFileDataPtr(const u8 *filename, const FileArchive *arc)
{
    OpenedFile *openedFile;

    OpenGroundFileData(filename, arc, NULL, 0, &openedFile);
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

u32 GetGroundFileDecompressedSize(const u8 *filename, const FileArchive *arc)
{
    OpenedFile *openedFile = OpenFile(filename, arc);
    const u8 *compressedData;
    u32 size;

    if (openedFile == NULL)
        return 0;

    compressedData = openedFile->file->data;
    if (!IsGroundLzContainer(compressedData)) {
        CloseFile(openedFile);
        return 0;
    }

    size = GetGroundLzDecompressedSize(compressedData + 4);
    CloseFile(openedFile);
    return size;
}

void *StealGroundFileBuffer(OpenedFile **filePtr)
{
    OpenedFile *openedFile;
    GroundFileBuffer *fileBuffer;
    void *buffer;

    if (filePtr == NULL || *filePtr == NULL)
        return NULL;

    openedFile = *filePtr;
    fileBuffer = FindGroundFileBuffer(openedFile);
    buffer = NULL;
    if (fileBuffer != NULL) {
        buffer = fileBuffer->buffer;
        fileBuffer->openedFile = NULL;
        fileBuffer->buffer = NULL;
    }
    CloseFile(openedFile);
    *filePtr = NULL;
    return buffer;
}

bool8 GroundFileHasHeapBuffer(OpenedFile *openedFile)
{
    return openedFile != NULL && FindGroundFileBuffer(openedFile) != NULL;
}
