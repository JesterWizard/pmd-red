#ifndef GUARD_GROUND_ASSETS_H
#define GUARD_GROUND_ASSETS_H

#include "gba/types.h"
#include "file_system.h"

OpenedFile *OpenGroundFileAndGetFileDataPtr(const u8 *filename, const FileArchive *arc);
void CloseGroundFile(OpenedFile *openedFile);

#define CLOSE_GROUND_FILE_AND_SET_NULL(filePtr) \
{                                               \
    CloseGroundFile(filePtr);                   \
    filePtr = NULL;                             \
}

#define TRY_CLOSE_GROUND_FILE_AND_SET_NULL(filePtr) \
    if (filePtr != NULL) CLOSE_GROUND_FILE_AND_SET_NULL(filePtr)

#endif // GUARD_GROUND_ASSETS_H
