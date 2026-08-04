#include "runtime.h"

const RuntimeConfig gRuntimeConfigRom __attribute__((section(".runtime_config"))) = {
    .always_run = FALSE,
    .infinite_belly = FALSE,
    .exp_multiplier = 1, /* 1 = vanilla */
    .recruit_rate_boost = FALSE,
    .all_friend_areas = FALSE,
    .debug_menu = FALSE,
    .disable_something_approaches = TRUE,
};
