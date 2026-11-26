
	.equiv TRACK_SIZE, 0x50
#ifdef SKY_STORY
	@ EoS songs (sky story pack) use up to 16 tracks.
	.equiv NUM_TRACKS_BGM, 16
#else
	.equiv NUM_TRACKS_BGM, 12
#endif
#ifdef SKY_STORY
	@ EoS jingles (sky_me_*, fanfare ids 200..219) use up to 10 tracks.
	.equiv NUM_TRACKS_FANFARE, 10
#else
	.equiv NUM_TRACKS_FANFARE, 6
#endif
#ifdef SKY_STORY
	@ EoS sound effects (sky_se_*, ids 300..938) use up to 2 tracks.
	.equiv NUM_TRACKS_SE1, 2
	.equiv NUM_TRACKS_SE2, 2
#else
	.equiv NUM_TRACKS_SE1, 1
	.equiv NUM_TRACKS_SE2, 1
#endif
	.equiv NUM_TRACKS_SE3, 2
	.equiv NUM_TRACKS_SE4, 2
	.equiv NUM_TRACKS_SE5, 2
#ifdef SKY_STORY
	.equiv NUM_TRACKS_SE6, 2
#else
	.equiv NUM_TRACKS_SE6, 1
#endif

    .bss

gMPlayTrack_BGM::
    .space TRACK_SIZE * NUM_TRACKS_BGM
    .size gMPlayTrack_BGM, .-gMPlayTrack_BGM

#ifdef SKY_STORY
	@ EWRAM is full in the sky build: the (larger) fanfare tracks live in IWRAM.
    .section iwram_data, "aw", %nobits
    .align 2
#endif
gMPlayTrack_Fanfare::
    .space TRACK_SIZE * NUM_TRACKS_FANFARE
    .size gMPlayTrack_Fanfare, .-gMPlayTrack_Fanfare
#ifdef SKY_STORY
    .bss
#endif

#ifdef SKY_STORY
	@ ... and so do the SE tracks.
    .section iwram_data, "aw", %nobits
    .align 2
#endif
gMPlayTrack_SE1::
    .space TRACK_SIZE * NUM_TRACKS_SE1
    .size gMPlayTrack_SE1, .-gMPlayTrack_SE1

gMPlayTrack_SE2::
    .space TRACK_SIZE * NUM_TRACKS_SE2
    .size gMPlayTrack_SE2, .-gMPlayTrack_SE2

gMPlayTrack_SE3::
    .space TRACK_SIZE * NUM_TRACKS_SE3
    .size gMPlayTrack_SE3, .-gMPlayTrack_SE3

gMPlayTrack_SE4::
    .space TRACK_SIZE * NUM_TRACKS_SE4
    .size gMPlayTrack_SE4, .-gMPlayTrack_SE4

gMPlayTrack_SE5::
    .space TRACK_SIZE * NUM_TRACKS_SE5
    .size gMPlayTrack_SE5, .-gMPlayTrack_SE5

gMPlayTrack_SE6::
    .space TRACK_SIZE * NUM_TRACKS_SE6
    .size gMPlayTrack_SE6, .-gMPlayTrack_SE6
#ifdef SKY_STORY
    .bss
#endif

    .section .rodata

	.align 2
gMPlayTable:: @ 9E8665C
	music_player gMPlayInfo_BGM, gMPlayTrack_BGM, NUM_TRACKS_BGM, 0
	music_player gMPlayInfo_Fanfare, gMPlayTrack_Fanfare, NUM_TRACKS_FANFARE, 0
	music_player gMPlayInfo_SE1, gMPlayTrack_SE1, NUM_TRACKS_SE1, 0
	music_player gMPlayInfo_SE2, gMPlayTrack_SE2, NUM_TRACKS_SE2, 0
	music_player gMPlayInfo_SE3, gMPlayTrack_SE3, NUM_TRACKS_SE3, 0
	music_player gMPlayInfo_SE4, gMPlayTrack_SE4, NUM_TRACKS_SE4, 0
	music_player gMPlayInfo_SE5, gMPlayTrack_SE5, NUM_TRACKS_SE5, 0
	music_player gMPlayInfo_SE6, gMPlayTrack_SE6, NUM_TRACKS_SE6, 0

