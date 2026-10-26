#include "global.h"
#include "memory.h"
#include "runtime.h"

#define RUNTIME_CONFIG_SAVE_MAGIC 0x52434647
#define RUNTIME_CONFIG_SAVE_VERSION 4
/* Older records: the bytes of fields added since were zero padding.
 * v1 predates chapter_titles, v2 predates boss_recruit, v3 predates
 * ui_style. v1–v3 records are 0x48 bytes (checksum at 0x44). */
#define RUNTIME_CONFIG_SAVE_VERSION_V1 1
#define RUNTIME_CONFIG_SAVE_VERSION_V2 2
#define RUNTIME_CONFIG_SAVE_VERSION_V3 3
#define RUNTIME_CONFIG_SAVE_SIZE_V3 0x48

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

/* Sum of every byte before the checksum word (the record's last 4 bytes). */
static u32 CalculateRuntimeConfigChecksum(const u8 *buffer, u32 recordSize)
{
    u32 checksum = 0;
    s32 i;

    for (i = 0; i < (s32)(recordSize - sizeof(u32)); i++)
        checksum += buffer[i];
    return checksum;
}

static u32 ReadRecordChecksum(const u8 *buffer, u32 recordSize)
{
    const u8 *p = buffer + recordSize - sizeof(u32);

    return p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
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
    save->checksum = CalculateRuntimeConfigChecksum(buffer, RUNTIME_CONFIG_SAVE_SIZE);
    return RUNTIME_CONFIG_SAVE_SIZE;
}

bool8 RestoreRuntimeConfig(const u8 *buffer, u32 bufLen)
{
    const struct RuntimeConfigSave *save = (const struct RuntimeConfigSave *)buffer;
    u32 recordSize;
    u32 configSize;

    if (bufLen < RUNTIME_CONFIG_SAVE_SIZE
        || save->magic != RUNTIME_CONFIG_SAVE_MAGIC
        || save->version < RUNTIME_CONFIG_SAVE_VERSION_V1
        || save->version > RUNTIME_CONFIG_SAVE_VERSION)
        return FALSE;

    recordSize = save->version <= RUNTIME_CONFIG_SAVE_VERSION_V3 ? RUNTIME_CONFIG_SAVE_SIZE_V3
                                                                  : RUNTIME_CONFIG_SAVE_SIZE;
    if (ReadRecordChecksum(buffer, recordSize) != CalculateRuntimeConfigChecksum(buffer, recordSize))
        return FALSE;

    /* magic + version + config + checksum */
    configSize = recordSize - 3 * sizeof(u32);
    if (configSize > sizeof(RuntimeConfig))
        configSize = sizeof(RuntimeConfig);
    MemoryCopy8(&gRuntimeConfigData, &gRuntimeConfigRom, sizeof(RuntimeConfig));
    MemoryCopy8(&gRuntimeConfigData, &save->config, configSize);
    /* Keep an older save's overrides; fields added since take the ROM default. */
    if (save->version <= RUNTIME_CONFIG_SAVE_VERSION_V1)
        gRuntimeConfigData.chapter_titles = gRuntimeConfigRom.chapter_titles;
    if (save->version <= RUNTIME_CONFIG_SAVE_VERSION_V2)
        gRuntimeConfigData.boss_recruit = gRuntimeConfigRom.boss_recruit;
    if (save->version <= RUNTIME_CONFIG_SAVE_VERSION_V3)
        gRuntimeConfigData.ui_style = gRuntimeConfigRom.ui_style;
    if (gRuntimeConfigData.ui_style >= UI_STYLE_COUNT)
        gRuntimeConfigData.ui_style = UI_STYLE_RED;
    gRuntimeConfigData.debug_menu = gRuntimeConfigRom.debug_menu;
    gRuntimeConfigData.custom_story = gRuntimeConfigRom.custom_story;
    /* Boot-only ROM patch: keep editor/ROM default across save restore. */
    gRuntimeConfigData.skip_title_intro = gRuntimeConfigRom.skip_title_intro;
    return TRUE;
}
