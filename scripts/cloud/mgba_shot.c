/*
 * mgba_shot: headless GBA screenshot tool built on libmgba.
 *
 * Boots a ROM from a clean state (no save file is loaded, HLE BIOS), emulates
 * a fixed number of frames with scripted key presses, and writes 8-bit RGB PNG
 * captures. Each capture prints one stdout line with the number of distinct
 * colors and a 64-bit FNV-1a hash of the RGB bytes, so two runs can be compared.
 *
 * Standalone tool: built by scripts/cloud/Makefile, not by the root Makefile.
 */

/* libmgba's directories.h uses PATH_MAX, which glibc only exposes under POSIX. */
#define _POSIX_C_SOURCE 200809L

#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <inttypes.h>
#include <limits.h>
#include <setjmp.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <png.h>

#include <mgba/core/config.h>
#include <mgba/core/core.h>
#include <mgba/core/interface.h>
#include <mgba/core/log.h>
#include <mgba/internal/gba/input.h>
#include <mgba-util/vfs.h>

_Static_assert(BYTES_PER_PIXEL == 4,
	       "mgba_shot expects 32-bit color_t; do not define COLOR_16_BIT");

#define DEFAULT_FRAMES 600UL
#define DEFAULT_PRESS_DUR 6UL
#define MAX_FRAMES 10000000UL
#define MAX_WATCH 4

#define EXIT_RUNTIME 1
#define EXIT_USAGE 2

#define SEEN_BITS (1u << 24)  /* one bit per possible 0xRRGGBB value */

struct press {
	unsigned long start; /* 1-based frame at which the hold begins */
	unsigned long dur;   /* number of frames the keys stay held */
	uint32_t mask;       /* OR of (1 << GBA_KEY_*) */
};

struct options {
	const char* rom;
	const char* prefix;
	unsigned long frames;
	unsigned long every; /* 0 = not given */
	unsigned long* shots;
	size_t nshots;
	size_t capshots;
	struct press* presses;
	size_t npresses;
	size_t cappresses;
	uint32_t watch[MAX_WATCH]; /* GBA addresses from --watch, in order given */
	size_t nwatch;
	bool has_trace;
	unsigned long trace_from; /* 1-based, inclusive */
	unsigned long trace_to;   /* 1-based, inclusive */
};

enum parse_result {
	PARSE_OK,
	PARSE_HELP,
	PARSE_ERR,
};

static const struct {
	const char* name;
	int key;
} key_table[] = {
	{ "A", GBA_KEY_A },
	{ "B", GBA_KEY_B },
	{ "L", GBA_KEY_L },
	{ "R", GBA_KEY_R },
	{ "START", GBA_KEY_START },
	{ "SELECT", GBA_KEY_SELECT },
	{ "UP", GBA_KEY_UP },
	{ "DOWN", GBA_KEY_DOWN },
	{ "LEFT", GBA_KEY_LEFT },
	{ "RIGHT", GBA_KEY_RIGHT },
};

static void err(const char* fmt, ...) {
	va_list ap;
	fputs("mgba_shot: error: ", stderr);
	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	va_end(ap);
	fputc('\n', stderr);
}

static void usage(FILE* f) {
	fputs(
	    "usage: mgba_shot ROM OUT_PREFIX [options]\n"
	    "\n"
	    "Headless GBA screenshot tool. Starts ROM from a clean state (no save\n"
	    "loaded) and emulates a fixed number of frames.\n"
	    "\n"
	    "  --frames N            total frames to emulate (default 600)\n"
	    "  --shot F              capture after frame F (1-based); repeatable\n"
	    "  --every K             also capture after every K-th frame\n"
	    "  --press F:KEYS[:DUR]  hold KEYS for DUR frames (default 6) starting at\n"
	    "                        frame F; repeatable, overlapping holds are ORed.\n"
	    "                        KEYS is '+'-separated from A,B,L,R,START,SELECT,\n"
	    "                        UP,DOWN,LEFT,RIGHT (case-insensitive), e.g. 900:A+B:10\n"
	    "  --watch ADDR          read the 32-bit value at GBA address ADDR (hex, 0x\n"
	    "                        optional, multiple of 4); repeatable, up to 4\n"
	    "  --trace FROM:TO       print a trace line after each frame FROM..TO (1-based,\n"
	    "                        TO <= --frames); needs --watch; at most one\n"
	    "  -h, --help            show this help and exit\n"
	    "\n"
	    "With neither --shot nor --every, one capture is taken after the last frame.\n"
	    "Each capture writes OUT_PREFIX_fNNNNN.png (8-bit RGB) and prints:\n"
	    "  shot frame=<F> file=<path> colors=<N> hash=<16 hex digits> [wN=0x<8 hex digits>...]\n"
	    "With --trace, each frame FROM..TO also prints (before that frame's shot line):\n"
	    "  trace frame=<F> wN=0x<8 hex digits> [wN=...]\n"
	    "wN is the Nth --watch address, counting from w0, in the order given.\n"
	    "\n"
	    "Exit status: 0 success, 1 runtime failure, 2 bad arguments.\n",
	    f);
}

static bool ieq(const char* a, const char* b) {
	for (; *a && *b; ++a, ++b) {
		if (toupper((unsigned char)*a) != toupper((unsigned char)*b)) {
			return false;
		}
	}
	return *a == *b;
}

/* Parses a decimal integer in [min, max]. Rejects signs, spaces and junk. */
static bool parse_ulong(const char* s, unsigned long min, unsigned long max,
			unsigned long* out) {
	char* end = NULL;
	unsigned long v;

	if (!s || !isdigit((unsigned char)s[0])) {
		return false;
	}
	errno = 0;
	v = strtoul(s, &end, 10);
	if (errno != 0 || *end != '\0' || v < min || v > max) {
		return false;
	}
	*out = v;
	return true;
}

/* Parses a hex value in [0, 0xFFFFFFFF] with an optional 0x/0X prefix. */
static bool parse_hex32(const char* s, uint32_t* out) {
	const char* p = s;
	uint64_t v = 0;
	size_t ndigits = 0;

	if (p[0] == '0' && (p[1] == 'x' || p[1] == 'X')) {
		p += 2;
	}
	for (; isxdigit((unsigned char)*p); ++p, ++ndigits) {
		unsigned d = isdigit((unsigned char)*p) ? (unsigned)(*p - '0')
							: (unsigned)(tolower((unsigned char)*p) - 'a' + 10);
		v = v * 16 + d;
		if (v > 0xFFFFFFFFu) {
			return false;
		}
	}
	if (ndigits == 0 || *p != '\0') {
		return false;
	}
	*out = (uint32_t)v;
	return true;
}

/* Parses FROM:TO, both 1-based frame numbers. */
static bool parse_range(const char* spec, unsigned long* from, unsigned long* to) {
	char* copy;
	char* colon;
	unsigned long a = 0;
	unsigned long b = 0;
	bool ok = false;

	copy = malloc(strlen(spec) + 1);
	if (!copy) {
		err("out of memory");
		return false;
	}
	strcpy(copy, spec);

	colon = strchr(copy, ':');
	if (!colon) {
		goto out;
	}
	*colon = '\0';
	if (!parse_ulong(copy, 1, MAX_FRAMES, &a) || !parse_ulong(colon + 1, 1, MAX_FRAMES, &b)) {
		goto out;
	}
	*from = a;
	*to = b;
	ok = true;

out:
	free(copy);
	return ok;
}

/* Splits s (modified in place) on '+' and ORs the matching GBA key bits. */
static bool parse_keys(char* s, uint32_t* mask) {
	char* tok = s;

	*mask = 0;
	for (;;) {
		char* plus = strchr(tok, '+');
		size_t i;
		bool found = false;

		if (plus) {
			*plus = '\0';
		}
		for (i = 0; i < sizeof(key_table) / sizeof(key_table[0]); ++i) {
			if (ieq(tok, key_table[i].name)) {
				*mask |= 1u << key_table[i].key;
				found = true;
				break;
			}
		}
		if (!found) {
			err("unknown key '%s' (use A,B,L,R,START,SELECT,UP,DOWN,LEFT,RIGHT)",
			    tok);
			return false;
		}
		if (!plus) {
			return true;
		}
		tok = plus + 1;
	}
}

/* Parses F:KEYS[:DUR]. */
static bool parse_press(const char* spec, struct press* out) {
	char* copy;
	char* keys;
	char* c1;
	char* c2;
	unsigned long start = 0;
	unsigned long dur = DEFAULT_PRESS_DUR;
	uint32_t mask = 0;
	bool ok = false;

	copy = malloc(strlen(spec) + 1);
	if (!copy) {
		err("out of memory");
		return false;
	}
	strcpy(copy, spec);

	c1 = strchr(copy, ':');
	if (!c1) {
		err("--press '%s': expected F:KEYS[:DUR]", spec);
		goto out;
	}
	*c1 = '\0';
	keys = c1 + 1;

	c2 = strchr(keys, ':');
	if (c2) {
		*c2 = '\0';
		if (!parse_ulong(c2 + 1, 1, MAX_FRAMES, &dur)) {
			err("--press '%s': DUR must be a positive integer", spec);
			goto out;
		}
	}
	if (!parse_ulong(copy, 1, MAX_FRAMES, &start)) {
		err("--press '%s': F must be a positive integer", spec);
		goto out;
	}
	if (!parse_keys(keys, &mask)) {
		goto out;
	}

	out->start = start;
	out->dur = dur;
	out->mask = mask;
	ok = true;

out:
	free(copy);
	return ok;
}

static bool push_shot(struct options* o, unsigned long frame) {
	if (o->nshots == o->capshots) {
		size_t cap = o->capshots ? o->capshots * 2 : 8;
		unsigned long* p = realloc(o->shots, cap * sizeof(*p));
		if (!p) {
			return false;
		}
		o->shots = p;
		o->capshots = cap;
	}
	o->shots[o->nshots++] = frame;
	return true;
}

static bool push_press(struct options* o, const struct press* p) {
	if (o->npresses == o->cappresses) {
		size_t cap = o->cappresses ? o->cappresses * 2 : 8;
		struct press* q = realloc(o->presses, cap * sizeof(*q));
		if (!q) {
			return false;
		}
		o->presses = q;
		o->cappresses = cap;
	}
	o->presses[o->npresses++] = *p;
	return true;
}

static void free_options(struct options* o) {
	free(o->shots);
	free(o->presses);
	o->shots = NULL;
	o->presses = NULL;
}

static enum parse_result parse_args(int argc, char** argv, struct options* o) {
	const char* positional[2] = { NULL, NULL };
	int npos = 0;
	size_t i;

	o->frames = DEFAULT_FRAMES;

	for (int a = 1; a < argc; ++a) {
		const char* arg = argv[a];
		const char* val = NULL;
		unsigned long v = 0;

		if (strcmp(arg, "-h") == 0 || strcmp(arg, "--help") == 0) {
			usage(stdout);
			return PARSE_HELP;
		}

		if (strcmp(arg, "--frames") == 0 || strcmp(arg, "--shot") == 0 ||
		    strcmp(arg, "--every") == 0 || strcmp(arg, "--press") == 0 ||
		    strcmp(arg, "--watch") == 0 || strcmp(arg, "--trace") == 0) {
			if (a + 1 >= argc) {
				err("%s requires a value", arg);
				return PARSE_ERR;
			}
			val = argv[++a];
		}

		if (!val) {
			if (arg[0] == '-' && arg[1] != '\0') {
				err("unknown option '%s' (see --help)", arg);
				return PARSE_ERR;
			}
			if (npos == 2) {
				err("unexpected argument '%s' (see --help)", arg);
				return PARSE_ERR;
			}
			positional[npos++] = arg;
			continue;
		}

		if (strcmp(arg, "--frames") == 0) {
			if (!parse_ulong(val, 1, MAX_FRAMES, &o->frames)) {
				err("--frames '%s': must be an integer in 1..%lu", val, MAX_FRAMES);
				return PARSE_ERR;
			}
		} else if (strcmp(arg, "--shot") == 0) {
			if (!parse_ulong(val, 1, MAX_FRAMES, &v)) {
				err("--shot '%s': must be a frame number >= 1", val);
				return PARSE_ERR;
			}
			if (!push_shot(o, v)) {
				err("out of memory");
				return PARSE_ERR;
			}
		} else if (strcmp(arg, "--every") == 0) {
			if (!parse_ulong(val, 1, MAX_FRAMES, &o->every)) {
				err("--every '%s': must be an integer >= 1", val);
				return PARSE_ERR;
			}
		} else if (strcmp(arg, "--watch") == 0) {
			uint32_t addr = 0;
			if (!parse_hex32(val, &addr) || (addr & 3u) != 0) {
				err("--watch '%s': must be a hex address (0x optional) that is a multiple of 4",
				    val);
				return PARSE_ERR;
			}
			if (o->nwatch == MAX_WATCH) {
				err("--watch: at most %d addresses", MAX_WATCH);
				return PARSE_ERR;
			}
			o->watch[o->nwatch++] = addr;
		} else if (strcmp(arg, "--trace") == 0) {
			if (o->has_trace) {
				err("--trace may be given only once");
				return PARSE_ERR;
			}
			if (!parse_range(val, &o->trace_from, &o->trace_to)) {
				err("--trace '%s': expected FROM:TO with frame numbers >= 1", val);
				return PARSE_ERR;
			}
			o->has_trace = true;
		} else { /* --press */
			struct press p;
			if (!parse_press(val, &p)) {
				return PARSE_ERR;
			}
			if (!push_press(o, &p)) {
				err("out of memory");
				return PARSE_ERR;
			}
		}
	}

	if (npos < 2) {
		err("ROM and OUT_PREFIX are required (see --help)");
		return PARSE_ERR;
	}
	o->rom = positional[0];
	o->prefix = positional[1];

	if (o->every > o->frames) {
		err("--every %lu exceeds --frames %lu", o->every, o->frames);
		return PARSE_ERR;
	}
	if (o->has_trace) {
		if (o->nwatch == 0) {
			err("--trace requires at least one --watch");
			return PARSE_ERR;
		}
		if (o->trace_from > o->trace_to) {
			err("--trace %lu:%lu: FROM must not exceed TO", o->trace_from, o->trace_to);
			return PARSE_ERR;
		}
		if (o->trace_to > o->frames) {
			err("--trace ends at frame %lu, beyond --frames %lu", o->trace_to, o->frames);
			return PARSE_ERR;
		}
	}
	for (i = 0; i < o->nshots; ++i) {
		if (o->shots[i] > o->frames) {
			err("--shot %lu is beyond --frames %lu", o->shots[i], o->frames);
			return PARSE_ERR;
		}
	}
	for (i = 0; i < o->npresses; ++i) {
		if (o->presses[i].start > o->frames) {
			err("--press starting at frame %lu is beyond --frames %lu",
			    o->presses[i].start, o->frames);
			return PARSE_ERR;
		}
	}
	if (o->nshots == 0 && o->every == 0) {
		if (!push_shot(o, o->frames)) {
			err("out of memory");
			return PARSE_ERR;
		}
	}
	return PARSE_OK;
}

static bool is_capture(const struct options* o, unsigned long frame) {
	size_t i;

	if (o->every && frame % o->every == 0) {
		return true;
	}
	for (i = 0; i < o->nshots; ++i) {
		if (o->shots[i] == frame) {
			return true;
		}
	}
	return false;
}

static uint64_t fnv1a64(const uint8_t* p, size_t n) {
	uint64_t h = 0xcbf29ce484222325ULL; /* FNV offset basis */
	size_t i;

	for (i = 0; i < n; ++i) {
		h ^= p[i];
		h *= 0x100000001b3ULL; /* FNV prime */
	}
	return h;
}

static char* shot_path(const char* prefix, unsigned long frame) {
	int len = snprintf(NULL, 0, "%s_f%05lu.png", prefix, frame);
	char* path;

	if (len < 0) {
		return NULL;
	}
	path = malloc((size_t)len + 1);
	if (!path) {
		return NULL;
	}
	snprintf(path, (size_t)len + 1, "%s_f%05lu.png", prefix, frame);
	return path;
}

static bool write_png(const char* path, const uint8_t* rgb, unsigned w, unsigned h) {
	FILE* fp;
	png_structp png = NULL;
	png_infop info = NULL;
	volatile bool ok = false; /* read after longjmp from libpng errors */

	fp = fopen(path, "wb");
	if (!fp) {
		err("cannot create '%s': %s", path, strerror(errno));
		return false;
	}

	png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
	if (!png) {
		goto fail;
	}
	info = png_create_info_struct(png);
	if (!info) {
		goto fail;
	}
	if (setjmp(png_jmpbuf(png))) {
		goto fail;
	}

	png_init_io(png, fp);
	png_set_IHDR(png, info, w, h, 8, PNG_COLOR_TYPE_RGB, PNG_INTERLACE_NONE,
		     PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);
	png_write_info(png, info);
	for (unsigned y = 0; y < h; ++y) {
		png_write_row(png, rgb + (size_t)y * w * 3);
	}
	png_write_end(png, NULL);
	ok = true;

fail:
	if (png) {
		png_destroy_write_struct(&png, &info);
	}
	if (fclose(fp) != 0) {
		ok = false;
	}
	if (!ok) {
		err("PNG write failed for '%s'", path);
	}
	return ok;
}

/* Reads each --watch address with no side effects (segment -1 is raw access). */
static void read_watches(struct mCore* core, const struct options* o, uint32_t* vals) {
	for (size_t i = 0; i < o->nwatch; ++i) {
		vals[i] = core->rawRead32(core, o->watch[i], -1);
	}
}

/* Appends " wN=0x........" for each --watch value; prints nothing without --watch. */
static void print_watches(const struct options* o, const uint32_t* vals) {
	for (size_t i = 0; i < o->nwatch; ++i) {
		printf(" w%zu=0x%08" PRIx32, i, vals[i]);
	}
}

static bool capture(const struct options* o, unsigned long frame, const color_t* buf,
		    unsigned w, unsigned h, uint8_t* rgb, uint8_t* seen, const uint32_t* vals) {
	const uint8_t* src = (const uint8_t*)buf;
	size_t npix = (size_t)w * h;
	unsigned colors = 0;
	uint64_t hash;
	char* path;
	bool ok;

	memset(seen, 0, SEEN_BITS / 8);
	for (size_t i = 0; i < npix; ++i) {
		/* In memory each 32-bit pixel is R, G, B, X (byte 0 = red). */
		uint8_t r = src[4 * i + 0];
		uint8_t g = src[4 * i + 1];
		uint8_t b = src[4 * i + 2];
		uint32_t idx = ((uint32_t)r << 16) | ((uint32_t)g << 8) | b;
		uint8_t bit = (uint8_t)(1u << (idx & 7));

		rgb[3 * i + 0] = r;
		rgb[3 * i + 1] = g;
		rgb[3 * i + 2] = b;
		if (!(seen[idx >> 3] & bit)) {
			seen[idx >> 3] |= bit;
			++colors;
		}
	}
	hash = fnv1a64(rgb, npix * 3);

	path = shot_path(o->prefix, frame);
	if (!path) {
		err("out of memory");
		return false;
	}
	ok = write_png(path, rgb, w, h);
	if (ok) {
		printf("shot frame=%lu file=%s colors=%u hash=%016" PRIx64, frame, path,
		       colors, hash);
		print_watches(o, vals);
		putchar('\n');
	}
	free(path);
	return ok;
}

/*
 * libmgba's default logger prints every BIOS/DMA/IO trace to stdout, which
 * would bury the "shot" lines. Keep only warnings and errors, on stderr.
 */
static void quiet_log(struct mLogger* logger, int category, enum mLogLevel level,
		      const char* format, va_list args) {
	(void)logger;
	(void)category;
	if (level & (mLOG_FATAL | mLOG_ERROR | mLOG_WARN)) {
		fputs("mgba: ", stderr);
		vfprintf(stderr, format, args);
		fputc('\n', stderr);
	}
}

static struct mLogger quiet_logger = { quiet_log, NULL };

static int run(const struct options* o) {
	int rc = EXIT_RUNTIME;

	mLogSetDefaultLogger(&quiet_logger);
	struct VFile* vf;
	struct mCore* core;
	bool initialised = false;
	color_t* buf = NULL;
	uint8_t* rgb = NULL;
	uint8_t* seen = NULL;
	unsigned w = 0;
	unsigned h = 0;
	uint32_t vals[MAX_WATCH] = { 0 };

	vf = VFileOpen(o->rom, O_RDONLY);
	if (!vf) {
		err("cannot open ROM '%s': %s", o->rom, strerror(errno));
		return EXIT_RUNTIME;
	}
	core = mCoreFindVF(vf);
	if (!core) {
		err("'%s' is not a ROM libmgba supports (GBA expected)", o->rom);
		vf->close(vf);
		return EXIT_RUNTIME;
	}

	if (!core->init(core)) {
		err("libmgba failed to initialise a core");
		vf->close(vf);
		return EXIT_RUNTIME;
	}
	initialised = true;

	mCoreInitConfig(core, NULL);
	core->desiredVideoDimensions(core, &w, &h);
	if (!w || !h) {
		err("core reported an empty video frame");
		goto out;
	}
	buf = calloc((size_t)w * h, BYTES_PER_PIXEL);
	rgb = malloc((size_t)w * h * 3);
	seen = calloc(SEEN_BITS / 8, 1);
	if (!buf || !rgb || !seen) {
		err("out of memory");
		goto out;
	}
	core->setVideoBuffer(core, buf, w);

	/* loadROM takes ownership of vf; do not close it afterwards. */
	if (!core->loadROM(core, vf)) {
		err("libmgba failed to load ROM '%s'", o->rom);
		goto out;
	}
	core->reset(core);

	for (unsigned long n = 1; n <= o->frames; ++n) {
		uint32_t keys = 0;

		for (size_t i = 0; i < o->npresses; ++i) {
			const struct press* p = &o->presses[i];
			if (n >= p->start && n - p->start < p->dur) {
				keys |= p->mask;
			}
		}
		core->setKeys(core, keys);
		core->runFrame(core);

		if (o->nwatch) {
			read_watches(core, o, vals);
		}
		if (o->has_trace && n >= o->trace_from && n <= o->trace_to) {
			printf("trace frame=%lu", n);
			print_watches(o, vals);
			putchar('\n');
		}
		if (is_capture(o, n) && !capture(o, n, buf, w, h, rgb, seen, vals)) {
			goto out;
		}
	}
	rc = 0;

out:
	free(seen);
	free(rgb);
	free(buf);
	if (initialised) {
		core->deinit(core);
	}
	return rc;
}

int main(int argc, char** argv) {
	struct options o;
	int rc;

	memset(&o, 0, sizeof(o));
	switch (parse_args(argc, argv, &o)) {
	case PARSE_HELP:
		free_options(&o);
		return 0;
	case PARSE_ERR:
		fputs("mgba_shot: try 'mgba_shot --help'\n", stderr);
		free_options(&o);
		return EXIT_USAGE;
	case PARSE_OK:
		break;
	}

	rc = run(&o);
	free_options(&o);
	fflush(stdout);
	return rc;
}
