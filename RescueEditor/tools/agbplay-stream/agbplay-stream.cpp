// Minimal PCM streamer for RescueTemple, linked against libagbplay.
//
// One-shot:
//   agbplay-stream <rom> <song-id> [max-loops]
//   stderr: "APCM <sampleRate> <channels>"
//   stdout: interleaved s16le stereo PCM
//
// Persistent server (ROM loaded once):
//   agbplay-stream <rom> --server
//   stderr: "READY <sampleRate> 2"
//   stdin lines:  PLAY <song-id> [max-loops]
//                 STOP
//                 QUIT
//   per play: stderr "APCM …", stdout PCM, stderr "END"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

#include <poll.h>
#include <unistd.h>

#include "MP2KContext.hpp"
#include "ProfileManager.hpp"
#include "Rom.hpp"
#include "Settings.hpp"
#include "Types.hpp"
#include "Util.hpp"
#include "Xcept.hpp"

namespace
{
    void WritePcm16(const std::vector<sample> &buffer)
    {
        thread_local std::vector<int16_t> pcm;
        pcm.resize(buffer.size() * 2);
        for (size_t i = 0; i < buffer.size(); i++) {
            float left = std::clamp(buffer[i].left, -1.0f, 1.0f);
            float right = std::clamp(buffer[i].right, -1.0f, 1.0f);
            pcm[i * 2] = static_cast<int16_t>(std::lround(left * 32767.0f));
            pcm[i * 2 + 1] = static_cast<int16_t>(std::lround(right * 32767.0f));
        }
        const size_t bytes = pcm.size() * sizeof(int16_t);
        if (std::fwrite(pcm.data(), 1, bytes, stdout) != bytes)
            throw Xcept("Failed writing PCM to stdout");
    }

    bool StdinHasLine()
    {
        pollfd pfd{};
        pfd.fd = STDIN_FILENO;
        pfd.events = POLLIN;
        return poll(&pfd, 1, 0) > 0 && (pfd.revents & POLLIN);
    }

    void StreamSong(MP2KContext &ctx, uint16_t songId, int8_t maxLoops, uint32_t sampleRate, bool allowInterrupt)
    {
        ctx.m4aSetMaxLoops(maxLoops);
        ctx.m4aSongNumStart(songId);
        std::fprintf(stderr, "APCM %u 2\n", sampleRate);
        std::fflush(stderr);

        while (true) {
            if (allowInterrupt && StdinHasLine())
                break;
            ctx.m4aSoundMain();
            if (ctx.SongEnded())
                break;
            WritePcm16(ctx.masterAudioBuffer);
        }

        std::fflush(stdout);
        std::fprintf(stderr, "END\n");
        std::fflush(stderr);
    }

    int RunOneShot(const std::filesystem::path &romPath, uint16_t songId, int8_t maxLoops)
    {
        Rom::CreateInstance(romPath);

        ProfileManager profiles;
        profiles.LoadProfiles();
        Profile profile = *profiles.GetCLIDefaultProfile(Rom::Instance());

        Settings settings;
        settings.Load();
        const uint32_t sampleRate = settings.exportSampleRate ? settings.exportSampleRate : 48000u;

        MP2KContext ctx(
            sampleRate,
            maxLoops,
            Rom::Instance(),
            profile.mp2kSoundModePlayback,
            profile.agbplaySoundMode,
            profile.songTableInfoPlayback,
            profile.playerTablePlayback
        );

        StreamSong(ctx, songId, maxLoops, sampleRate, /*allowInterrupt=*/false);
        return 0;
    }

    int RunServer(const std::filesystem::path &romPath)
    {
        Rom::CreateInstance(romPath);

        ProfileManager profiles;
        profiles.LoadProfiles();
        Profile profile = *profiles.GetCLIDefaultProfile(Rom::Instance());

        Settings settings;
        settings.Load();
        const uint32_t sampleRate = settings.exportSampleRate ? settings.exportSampleRate : 48000u;

        MP2KContext ctx(
            sampleRate,
            /*maxLoops=*/1,
            Rom::Instance(),
            profile.mp2kSoundModePlayback,
            profile.agbplaySoundMode,
            profile.songTableInfoPlayback,
            profile.playerTablePlayback
        );

        std::fprintf(stderr, "READY %u 2\n", sampleRate);
        std::fflush(stderr);

        std::string line;
        while (std::getline(std::cin, line)) {
            // Windows/WSL clients often send CRLF; strip CR and trailing space.
            while (!line.empty() && (line.back() == '\r' || line.back() == ' ' || line.back() == '\t'))
                line.pop_back();
            if (line.empty())
                continue;

            if (line == "QUIT" || line == "quit")
                return 0;

            if (line == "STOP" || line == "stop") {
                std::fprintf(stderr, "END\n");
                std::fflush(stderr);
                continue;
            }

            // PLAY <song-id> [max-loops]
            if (line.rfind("PLAY ", 0) == 0 || line.rfind("play ", 0) == 0) {
                const char *args = line.c_str() + 5;
                char *end = nullptr;
                const long songIdLong = std::strtol(args, &end, 10);
                if (end == args || songIdLong < 0 || songIdLong > 65535) {
                    std::fprintf(stderr, "ERR bad-song-id\n");
                    std::fflush(stderr);
                    continue;
                }
                int8_t maxLoops = 1;
                if (end && *end != '\0') {
                    while (*end == ' ')
                        ++end;
                    if (*end != '\0') {
                        const long loops = std::strtol(end, nullptr, 10);
                        maxLoops = static_cast<int8_t>(std::clamp(loops, 0L, 127L));
                    }
                }

                StreamSong(ctx, static_cast<uint16_t>(songIdLong), maxLoops, sampleRate, /*allowInterrupt=*/true);

                // If interrupted by a new stdin line, handle it on the next loop iteration
                // without consuming it here (getline will read it).
                continue;
            }

            std::fprintf(stderr, "ERR unknown-command\n");
            std::fflush(stderr);
        }

        return 0;
    }
}

int main(int argc, char **argv)
{
    try {
        if (argc < 3) {
            std::cerr << "Usage:\n"
                      << "  agbplay-stream <rom> <song-id> [max-loops]\n"
                      << "  agbplay-stream <rom> --server\n";
            return 2;
        }

        setvbuf(stdout, nullptr, _IONBF, 0);
        setvbuf(stderr, nullptr, _IONBF, 0);

        const std::filesystem::path romPath = StrToU8Str(argv[1]);
        if (std::strcmp(argv[2], "--server") == 0)
            return RunServer(romPath);

        const long songIdLong = std::stol(argv[2]);
        if (songIdLong < 0 || songIdLong > 65535) {
            std::cerr << "song-id out of range\n";
            return 2;
        }
        int8_t maxLoops = 1;
        if (argc >= 4)
            maxLoops = static_cast<int8_t>(std::clamp(std::stoi(argv[3]), 0, 127));

        return RunOneShot(romPath, static_cast<uint16_t>(songIdLong), maxLoops);
    } catch (const std::exception &ex) {
        std::cerr << "Error:\n" << ex.what() << std::endl;
        return 1;
    }
}
