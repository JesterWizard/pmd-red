#ifndef GUARD_GROUND_ASSETS_H
#define GUARD_GROUND_ASSETS_H

#include "gba/types.h"
#include "file_system.h"

// Opens a ground archive file. GMLZ payloads are decompressed:
// - into scratch when scratchSize is large enough (no heap traffic), or
// - onto the main heap otherwise (tracked for CloseGroundFile).
// Uncompressed payloads return a ROM pointer. *outFile is set when the caller
// must close the file later; it is NULL when data already lives in scratch.
const void *OpenGroundFileData(const u8 *filename, const FileArchive *arc,
                               void *scratch, u32 scratchSize, OpenedFile **outFile);

OpenedFile *OpenGroundFileAndGetFileDataPtr(const u8 *filename, const FileArchive *arc);
void CloseGroundFile(OpenedFile *openedFile);

/* Peek GMLZ decompressed size for filename, or 0 if missing/uncompressed. */
u32 GetGroundFileDecompressedSize(const u8 *filename, const FileArchive *arc);

/* Detach heap buffer from an opened ground file so CloseGroundFile will not
 * free it. Returns the buffer (caller owns it). Closes and nulls *filePtr.
 * Returns NULL when the file was ROM-backed (no heap buffer); still closes. */
void *StealGroundFileBuffer(OpenedFile **filePtr);

/* TRUE when OpenGroundFileData decompressed this file onto the heap. */
bool8 GroundFileHasHeapBuffer(OpenedFile *openedFile);

#define CLOSE_GROUND_FILE_AND_SET_NULL(filePtr) \
{                                               \
    CloseGroundFile(filePtr);                   \
    filePtr = NULL;                             \
}

#define TRY_CLOSE_GROUND_FILE_AND_SET_NULL(filePtr) \
    if (filePtr != NULL) CLOSE_GROUND_FILE_AND_SET_NULL(filePtr)

#endif // GUARD_GROUND_ASSETS_H
