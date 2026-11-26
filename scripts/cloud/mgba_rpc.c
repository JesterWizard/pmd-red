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
	static short sbuf[0x8000 * 2];
	unsigned long long a_samples = 0, a_sumsq = 0;
	int a_peak = 0;

	unsigned long long frame = 0;
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
				int av = blip_samples_avail(bl);
				if (av > 0x8000)
					av = 0x8000;
				blip_read_samples(bl, sbuf, av, 1);
				blip_read_samples(br, sbuf + 1, av, 1);
				for (int k = 0; k < 2 * av; ++k) {
					int v = sbuf[k];
					a_sumsq += (unsigned long long)((long long)v * v);
					if (v < 0)
						v = -v;
					if (v > a_peak)
						a_peak = v;
				}
				a_samples += (unsigned long long)av;
			}
			reply("ok %llu", frame);
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
			struct VFile* sf = VFileOpen(a1, saving ? O_CREAT | O_TRUNC | O_WRONLY : O_RDONLY);
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
