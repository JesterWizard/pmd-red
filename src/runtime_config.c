#include "global.h"
#include "memory.h"
#include "runtime.h"

#define RUNTIME_CONFIG_SAVE_MAGIC 0x52434647
#define RUNTIME_CONFIG_SAVE_VERSION 3
/* Older records: the bytes of fields added since were zero padding.
 * v1 predates chapter_titles, v2 predates boss_recruit. */
#define RUNTIME_CONFIG_SAVE_VERSION_V1 1
#define RUNTIME_CONFIG_SAVE_VERSION_V2 2

struct RuntimeConfigSave
{
    u32 magic;
    u32 version;
    RuntimeConfig config;
    u32 checksum;
};

_Static_assert(sizeof(struct RuntimeConfigSave) <= RUNTIME_CONFIG_SAVE_SIZE,
               "RuntimeConfig outgrew RUNTIME_CONFIG_SAVE_SIZE");

EWRAM_DATA RuntimeConfig gRuntimeConfigData = {0};

static u32 CalculateRuntimeConfigChecksum(const u8 *buffer)
{
    u32 checksum = 0;
    s32 i;

    for (i = 0; i < RUNTIME_CONFIG_SAVE_SIZE - sizeof(u32); i++)
        checksum += buffer[i];
    return checksum;
}

void InitializeRuntimeConfigFromRom(void)
{
    MemoryCopy8(&gRuntimeConfigData, &gRuntimeConfigRom, sizeof(RuntimeConfig));
}

void ResetRuntimeConfigToRom(void)
{
    InitializeRuntimeConfigFromRom();
}

u32 SaveRuntimeConfig(u8 *buffer, u32 bufLen)
{
    struct RuntimeConfigSave *save = (struct RuntimeConfigSave *)buffer;

    if (bufLen < RUNTIME_CONFIG_SAVE_SIZE)
        return 0;

    MemoryClear8(buffer, RUNTIME_CONFIG_SAVE_SIZE);
    save->magic = RUNTIME_CONFIG_SAVE_MAGIC;
    save->version = RUNTIME_CONFIG_SAVE_VERSION;
    MemoryCopy8(&save->config, &gRuntimeConfigData, sizeof(RuntimeConfig));
    save->checksum = CalculateRuntimeConfigChecksum(buffer);
    return RUNTIME_CONFIG_SAVE_SIZE;
}

bool8 RestoreRuntimeConfig(const u8 *buffer, u32 bufLen)
{
    const struct RuntimeConfigSave *save = (const struct RuntimeConfigSave *)buffer;

    if (bufLen < RUNTIME_CONFIG_SAVE_SIZE
        || save->magic != RUNTIME_CONFIG_SAVE_MAGIC
        || save->version < RUNTIME_CONFIG_SAVE_VERSION_V1
        || save->version > RUNTIME_CONFIG_SAVE_VERSION
        || save->checksum != CalculateRuntimeConfigChecksum(buffer))
        return FALSE;

    MemoryCopy8(&gRuntimeConfigData, &save->config, sizeof(RuntimeConfig));
    /* Keep an older save's overrides; fields added since take the ROM default. */
    if (save->version <= RUNTIME_CONFIG_SAVE_VERSION_V1)
        gRuntimeConfigData.chapter_titles = gRuntimeConfigRom.chapter_titles;
    if (save->version <= RUNTIME_CONFIG_SAVE_VERSION_V2)
        gRuntimeConfigData.boss_recruit = gRuntimeConfigRom.boss_recruit;
    gRuntimeConfigData.debug_menu = gRuntimeConfigRom.debug_menu;
    gRuntimeConfigData.custom_story = gRuntimeConfigRom.custom_story;
    /* Boot-only ROM patch: keep editor/ROM default across save restore. */
    gRuntimeConfigData.skip_title_intro = gRuntimeConfigRom.skip_title_intro;
    return TRUE;
}
