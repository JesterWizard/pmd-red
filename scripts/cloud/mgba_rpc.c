/*
 * mgba_rpc: a headless GBA emulator driven over stdin/stdout, for tests.
 *
 * Boots ROM from a clean state (no save file, HLE BIOS), like mgba_shot, then
 * reads one command per line on stdin and answers each on stdout. A test
 * harness (scripts/cloud/sky_regression/) steps frames, holds keys, reads
 * memory and the frame buffer, and decides what to check from the game's own
 * state. Runs are deterministic: the same commands give the same answers.
 *
 * Commands (numbers are decimal or 0x hex):
 *   run N KEYS       emulate N frames holding KEYS (a GBA key bit mask:
 *                    A=1 B=2 SELECT=4 START=8 RIGHT=16 LEFT=32 UP=64 DOWN=128
 *                    R=256 L=512).                -> "ok FRAME"
 *   read ADDR LEN    LEN bytes of GBA memory from ADDR (no side effects).
 *                                                 -> "ok LEN\n" + LEN bytes
 *   fb               the last frame as 240*160 RGB bytes.
 *                                                 -> "ok 115200\n" + bytes
 *   save PATH        write a save state to PATH     -> "ok"
 *   load PATH        load a save state from PATH    -> "ok FRAME"
 *   frame            the number of frames run      -> "ok FRAME"
 *   setframe N       set that frame counter (after a load)
 *   audio            audio output since the last "audio" (or the start), at
 *                    32768 Hz stereo, then resets: -> "ok SAMPLES SUMSQ PEAK"
 *                    (SUMSQ over both channels, PEAK = max |sample|)
 *   prof N KEYS      like "run", but steps instruction by instruction and
 *                    measures CPU load: -> "ok FRAME BUSY MAXBUSY OVER".
 *                    BUSY = cycles the CPU was not halted (a frame is 280896),
 *                    MAXBUSY = the busiest frame's, OVER = frames with no
 *                    idle time at all (the game missed a VBlank). The cycles
 *                    are also added to a profile. About 3x slower than "run".
 *   profdump PATH    write the profile and clear it: "ADDR CYCLES" per
 *                    program counter value (pc / 2 * 2) and "bios ADDR CYCLES"
 *                    for time in the BIOS, by the caller of the syscall stub
 *                    (its lr; for an interrupt, whatever lr was). -> "ok"
 *   quit             exit 0
 * Errors answer "err MESSAGE" and the server keeps going.
 *
 * Standalone tool: built by scripts/cloud/Makefile, not by the root Makefile.
 */

#define _POSIX_C_SOURCE 200809L

#include <errno.h>
#include <fcntl.h>
#include <inttypes.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <mgba/core/config.h>
#include <mgba/core/core.h>
#include <mgba/core/interface.h>
#include <mgba/core/log.h>
#include <mgba/core/serialize.h>
#include <mgba-util/vfs.h>
#include <mgba/core/blip_buf.h>
#include <mgba/core/timing.h>
#include <mgba/internal/arm/arm.h>
#include <mgba/internal/gba/gba.h>

#define FRAME_CYCLES 280896
/* Profile buckets: ROM (32 MiB), EWRAM (256 KiB), IWRAM (32 KiB) by pc / 2,
 * and one for everything else (the BIOS). */
#define PROF_ROM 0
#define PROF_EWRAM (PROF_ROM + (1u << 24))
#define PROF_IWRAM (PROF_EWRAM + (1u << 17))
#define PROF_OTHER (PROF_IWRAM + (1u << 14))
#define PROF_SIZE (PROF_OTHER + 1)

static uint32_t prof_bucket(uint32_t pc) {
	switch (pc >> 24) {
	case 0x08: case 0x09:
		return PROF_ROM + ((pc & 0x1FFFFFF) >> 1);
	case 0x02:
		return PROF_EWRAM + ((pc & 0x3FFFF) >> 1);
	case 0x03:
		return PROF_IWRAM + ((pc & 0x7FFF) >> 1);
	}
	return PROF_OTHER;
}

static uint32_t prof_addr(uint32_t b) {
	if (b >= PROF_OTHER)
		return 0;
	if (b >= PROF_IWRAM)
		return 0x03000000 + 2 * (b - PROF_IWRAM);
	if (b >= PROF_EWRAM)
		return 0x02000000 + 2 * (b - PROF_EWRAM);
	return 0x08000000 + 2 * b;
}

_Static_assert(BYTES_PER_PIXEL == 4, "mgba_rpc expects 32-bit color_t");

#define MAX_READ (1u << 20)

static void quiet_log(struct mLogger* logger, int category, enum mLogLevel level,
		      const char* format, va_list args) {
	(void)logger;
	(void)category;
	if (level & (mLOG_FATAL | mLOG_ERROR)) {
		fputs("mgba: ", stderr);
		vfprintf(stderr, format, args);
		fputc('\n', stderr);
	}
}

static struct mLogger quiet_logger = { quiet_log, NULL };

static bool parse_num(const char* s, unsigned long long* out) {
	char* end = NULL;
	if (!s || !*s) {
		return false;
	}
	errno = 0;
	*out = strtoull(s, &end, 0);
	return errno == 0 && end && *end == '\0';
}

static void reply(const char* fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	vfprintf(stdout, fmt, ap);
	va_end(ap);
	fputc('\n', stdout);
	fflush(stdout);
}

static int cmp_u32(const void* a, const void* b) {
	uint32_t x = *(const uint32_t*)a, y = *(const uint32_t*)b;
	return x < y ? -1 : x > y;
}

/* Take the frame's audio out of the core and add it to the level counters. */
static void drain_audio(struct blip_t* bl, struct blip_t* br, unsigned long long* samples,
			unsigned long long* sumsq, int* peak) {
	static short sbuf[0x8000 * 2];
	int av = blip_samples_avail(bl);
	if (av > 0x8000)
		av = 0x8000;
	blip_read_samples(bl, sbuf, av, 1);
	blip_read_samples(br, sbuf + 1, av, 1);
	for (int k = 0; k < 2 * av; ++k) {
		int v = sbuf[k];
		*sumsq += (unsigned long long)((long long)v * v);
		if (v < 0)
			v = -v;
		if (v > *peak)
			*peak = v;
	}
	*samples += (unsigned long long)av;
}

int main(int argc, char** argv) {
	if (argc != 2 || argv[1][0] == '-') {
		fputs("usage: mgba_rpc ROM   (commands on stdin; see the source header)\n", stderr);
		return 2;
	}
	mLogSetDefaultLogger(&quiet_logger);

	struct VFile* vf = VFileOpen(argv[1], O_RDONLY);
	if (!vf) {
		fprintf(stderr, "mgba_rpc: cannot open ROM '%s': %s\n", argv[1], strerror(errno));
		return 1;
	}
	struct mCore* core = mCoreFindVF(vf);
	if (!core || !core->init(core)) {
		fprintf(stderr, "mgba_rpc: '%s' is not a GBA ROM libmgba supports\n", argv[1]);
		return 1;
	}
	mCoreInitConfig(core, NULL);
	unsigned w = 0, h = 0;
	core->desiredVideoDimensions(core, &w, &h);
	color_t* buf = calloc((size_t)w * h, BYTES_PER_PIXEL);
	uint8_t* rgb = malloc((size_t)w * h * 3);
	uint8_t* mem = malloc(MAX_READ);
	if (!buf || !rgb || !mem) {
		fputs("mgba_rpc: out of memory\n", stderr);
		return 1;
	}
	core->setVideoBuffer(core, buf, w);
	if (!core->loadROM(core, vf)) {
		fprintf(stderr, "mgba_rpc: libmgba failed to load '%s'\n", argv[1]);
		return 1;
	}
	core->reset(core);

	struct blip_t* bl = core->getAudioChannel(core, 0);
	struct blip_t* br = core->getAudioChannel(core, 1);
	core->setAudioBufferSize(core, 0x8000);
	blip_set_rates(bl, core->frequency(core), 32768);
	blip_set_rates(br, core->frequency(core), 32768);
	unsigned long long a_samples = 0, a_sumsq = 0;
	int a_peak = 0;

	unsigned long long frame = 0;
	uint32_t* hist = NULL; /* profile: cycles per bucket, then BIOS cycles per caller */
	uint32_t caller = PROF_OTHER;
	uint32_t* used = NULL; /* the buckets that are not zero */
	size_t n_used = 0, cap_used = 0;
	char line[4096];
	while (fgets(line, sizeof(line), stdin)) {
		char* save = NULL;
		char* cmd = strtok_r(line, " \t\r\n", &save);
		char* a1 = strtok_r(NULL, " \t\r\n", &save);
		char* a2 = strtok_r(NULL, " \t\r\n", &save);
		unsigned long long n = 0, v = 0;

		if (!cmd) {
			reply("err empty command");
		} else if (strcmp(cmd, "run") == 0) {
			if (!parse_num(a1, &n) || !parse_num(a2 ? a2 : "0", &v) || v > 0x3FF) {
				reply("err usage: run N KEYS");
				continue;
			}
			core->setKeys(core, (uint32_t)v);
			for (unsigned long long i = 0; i < n; ++i) {
				core->runFrame(core);
				++frame;
				drain_audio(bl, br, &a_samples, &a_sumsq, &a_peak);
			}
			reply("ok %llu", frame);
		} else if (strcmp(cmd, "prof") == 0) {
			if (!parse_num(a1, &n) || !parse_num(a2 ? a2 : "0", &v) || v > 0x3FF) {
				reply("err usage: prof N KEYS");
				continue;
			}
			if (!hist) {
				hist = calloc(2 * PROF_SIZE, sizeof(*hist));
				if (!hist) {
					reply("err out of memory");
					continue;
				}
			}
			struct GBA* gba = core->board;
			struct ARMCore* cpu = core->cpu;
			unsigned long long busy = 0, maxbusy = 0, over = 0;
			core->setKeys(core, (uint32_t)v);
			for (unsigned long long i = 0; i < n; ++i) {
				uint32_t fc = core->frameCounter(core);
				unsigned long long fbusy = 0;
				while (core->frameCounter(core) == fc) {
					bool halted = cpu->halted;
					uint32_t pc = cpu->gprs[ARM_PC];
					uint32_t lr = cpu->gprs[ARM_LR];
					int32_t t0 = mTimingCurrentTime(&gba->timing);
					core->step(core);
					uint32_t dt = (uint32_t)(mTimingCurrentTime(&gba->timing) - t0);
					if (halted)
						continue;
					fbusy += dt;
					uint32_t b = prof_bucket(pc);
					if (b == PROF_OTHER) {
						/* BIOS time goes to the code that called it */
						b = PROF_SIZE + caller;
					} else {
						/* a syscall stub is "swi; bx lr": its lr
						 * is the code to blame */
						caller = prof_bucket(lr);
					}
					if (!hist[b]) {
						if (n_used == cap_used) {
							cap_used = cap_used ? 2 * cap_used : 4096;
							used = realloc(used, cap_used * sizeof(*used));
							if (!used) {
								fputs("mgba_rpc: out of memory\n", stderr);
								return 1;
							}
						}
						used[n_used++] = b;
					}
					hist[b] += dt;
				}
				++frame;
				drain_audio(bl, br, &a_samples, &a_sumsq, &a_peak);
				busy += fbusy;
				if (fbusy > maxbusy)
					maxbusy = fbusy;
				if (fbusy >= FRAME_CYCLES - 64)
					++over;
			}
			reply("ok %llu %llu %llu %llu", frame, busy, maxbusy, over);
		} else if (strcmp(cmd, "profdump") == 0) {
			FILE* pf = a1 ? fopen(a1, "w") : NULL;
			if (!pf) {
				reply("err usage: profdump PATH");
				continue;
			}
			qsort(used, n_used, sizeof(*used), cmp_u32);
			for (size_t k = 0; k < n_used; ++k) {
				uint32_t b = used[k];
				fprintf(pf, "%s%08x %" PRIu32 "\n", b < PROF_SIZE ? "" : "bios ",
					prof_addr(b % PROF_SIZE), hist[b]);
				hist[b] = 0;
			}
			n_used = 0;
			fclose(pf);
			reply("ok");
		} else if (strcmp(cmd, "read") == 0) {
			if (!parse_num(a1, &v) || !parse_num(a2, &n) || n > MAX_READ || v > 0xFFFFFFFFull) {
				reply("err usage: read ADDR LEN (LEN <= %u)", MAX_READ);
				continue;
			}
			uint32_t addr = (uint32_t)v;
			for (unsigned long long i = 0; i < n; ++i) {
				mem[i] = (uint8_t)core->rawRead8(core, addr + (uint32_t)i, -1);
			}
			printf("ok %llu\n", n);
			fwrite(mem, 1, (size_t)n, stdout);
			fflush(stdout);
		} else if (strcmp(cmd, "fb") == 0) {
			const uint8_t* src = (const uint8_t*)buf;
			size_t npix = (size_t)w * h;
			for (size_t i = 0; i < npix; ++i) {
				rgb[3 * i + 0] = src[4 * i + 0];
				rgb[3 * i + 1] = src[4 * i + 1];
				rgb[3 * i + 2] = src[4 * i + 2];
			}
			printf("ok %zu\n", npix * 3);
			fwrite(rgb, 1, npix * 3, stdout);
			fflush(stdout);
		} else if (strcmp(cmd, "save") == 0 || strcmp(cmd, "load") == 0) {
			bool saving = cmd[0] == 's';
			if (!a1) {
				reply("err usage: %s PATH", cmd);
				continue;
			}
			struct VFile* sf = VFileOpen(a1, saving ? O_CREAT | O_TRUNC | O_RDWR : O_RDONLY);
			if (!sf) {
				reply("err cannot open %s: %s", a1, strerror(errno));
				continue;
			}
			bool ok = saving ? mCoreSaveStateNamed(core, sf, SAVESTATE_SAVEDATA)
					 : mCoreLoadStateNamed(core, sf, SAVESTATE_SAVEDATA);
			sf->close(sf);
			if (!ok) {
				reply("err %s state failed", saving ? "save" : "load");
			} else if (saving) {
				reply("ok");
			} else {
				/* The frame counter travels with the harness, not the state. */
				reply("ok %llu", frame);
			}
		} else if (strcmp(cmd, "audio") == 0) {
			reply("ok %llu %llu %d", a_samples, a_sumsq, a_peak);
			a_samples = a_sumsq = 0;
			a_peak = 0;
		} else if (strcmp(cmd, "frame") == 0) {
			reply("ok %llu", frame);
		} else if (strcmp(cmd, "setframe") == 0) {
			if (!parse_num(a1, &frame)) {
				reply("err usage: setframe N");
				continue;
			}
			reply("ok %llu", frame);
		} else if (strcmp(cmd, "quit") == 0) {
			break;
		} else {
			reply("err unknown command '%s'", cmd);
		}
	}

	core->deinit(core);
	free(mem);
	free(rgb);
	free(buf);
	return 0;
}
