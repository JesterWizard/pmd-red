/* Explorers of Sky demake: samples only Red's music used are left out of the sky build,
   and so are the Red SE samples that no SE the sky build still plays uses (their voices
   in bank_026-028 name sky_red_unused_wave instead; tools/eos_music/sky_red_se_map.py). */
#ifdef SKY_STORY
	.align 2
sky_red_unused_wave: @ a silent one-sample WaveData
	.hword	0x0000, 0x0000
	.word	0x100000
	.word	0
	.word	1
	.byte	0, 0, 0, 0
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_000.s"
#else
	.set	wave_000, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_001.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_003.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_004.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_005.s"
#else
	.set	wave_005, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_006.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_002.s"
#else
	.set	wave_002, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_009.s"
#endif
	.include "sound/wave/wave_012.s"
#ifndef SKY_STORY
	.include "sound/wave/wave_013.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_014.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_015.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_043.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_032.s"
#else
	.set	wave_032, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_031.s"
#else
	.set	wave_031, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_033.s"
#else
	.set	wave_033, sky_red_unused_wave
#endif
	.include "sound/wave/wave_035.s"
#ifndef SKY_STORY
	.include "sound/wave/wave_030.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_037.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_027.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_028.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_051.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_052.s"
#else
	.set	wave_052, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_053.s"
#else
	.set	wave_053, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_034.s"
#endif
	.include "sound/wave/wave_044.s"
#ifndef SKY_STORY
	.include "sound/wave/wave_054.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_055.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_056.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_057.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_058.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_059.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_060.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_061.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_062.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_063.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_064.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_065.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_066.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_067.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_068.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_069.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_070.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_071.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_072.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_073.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_074.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_075.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_076.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_077.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_078.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_079.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_080.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_081.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_082.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_083.s"
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_084.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_016.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_017.s"
#else
	.set	wave_017, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_021.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_022.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_023.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_045.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_046.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_047.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_048.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_049.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_050.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_010.s"
#else
	.set	wave_010, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_011.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_007.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_008.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_018.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_019.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_020.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_024.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_025.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_026.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_029.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_036.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_038.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_039.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_040.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_041.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_042.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_085.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_087.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_088.s"
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_089.s"
#else
	.set	wave_089, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_086.s"
#else
	.set	wave_086, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_090.s"
#else
	.set	wave_090, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_091.s"
#else
	.set	wave_091, sky_red_unused_wave
#endif
	.include "sound/wave/wave_092.s"
#ifndef SKY_STORY
	.include "sound/wave/wave_093.s"
#else
	.set	wave_093, sky_red_unused_wave
#endif
	.include "sound/wave/wave_094.s"
	.include "sound/wave/wave_095.s"
	.include "sound/wave/wave_139.s"
	.include "sound/wave/wave_117.s"
	.word 0x0 @ padding?
	.include "sound/wave/wave_099.s"
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_118.s"
#else
	.set	wave_118, sky_red_unused_wave
#endif
	.include "sound/wave/wave_140.s"
	.include "sound/wave/wave_141.s"
	.include "sound/wave/wave_111.s"
	.include "sound/wave/wave_142.s"
	.word 0x0 @ padding?
	.include "sound/wave/wave_143.s"
	.include "sound/wave/wave_101.s"
	.include "sound/wave/wave_107.s"
	.include "sound/wave/wave_100.s"
	.include "sound/wave/wave_096.s"
	.include "sound/wave/wave_097.s"
#ifndef SKY_STORY
	.include "sound/wave/wave_098.s"
#else
	.set	wave_098, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_102.s"
#else
	.set	wave_102, sky_red_unused_wave
#endif
	.include "sound/wave/wave_103.s"
#ifndef SKY_STORY
	.include "sound/wave/wave_104.s"
#else
	.set	wave_104, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_105.s"
#else
	.set	wave_105, sky_red_unused_wave
#endif
	.include "sound/wave/wave_106.s"
#ifndef SKY_STORY
	.include "sound/wave/wave_108.s"
#else
	.set	wave_108, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_109.s"
#else
	.set	wave_109, sky_red_unused_wave
#endif
	.include "sound/wave/wave_110.s"
	.include "sound/wave/wave_112.s"
#ifndef SKY_STORY
	.include "sound/wave/wave_113.s"
#else
	.set	wave_113, sky_red_unused_wave
#endif
	.include "sound/wave/wave_114.s"
	.include "sound/wave/wave_115.s"
	.include "sound/wave/wave_116.s"
#ifndef SKY_STORY
	.include "sound/wave/wave_119.s"
#else
	.set	wave_119, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_120.s"
#else
	.set	wave_120, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_121.s"
#else
	.set	wave_121, sky_red_unused_wave
#endif
	.include "sound/wave/wave_122.s"
	.word 0x0 @ padding?
	.include "sound/wave/wave_123.s"
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_124.s"
#else
	.set	wave_124, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_125.s"
#else
	.set	wave_125, sky_red_unused_wave
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_126.s"
#else
	.set	wave_126, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_127.s"
#else
	.set	wave_127, sky_red_unused_wave
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_128.s"
#else
	.set	wave_128, sky_red_unused_wave
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_129.s"
#else
	.set	wave_129, sky_red_unused_wave
#endif
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_130.s"
#else
	.set	wave_130, sky_red_unused_wave
#endif
	.include "sound/wave/wave_131.s"
#ifndef SKY_STORY
	.include "sound/wave/wave_132.s"
#else
	.set	wave_132, sky_red_unused_wave
#endif
	.word 0x0 @ padding?
	.include "sound/wave/wave_133.s"
	.include "sound/wave/wave_134.s"
	.include "sound/wave/wave_135.s"
	.word 0x0 @ padding?
	.include "sound/wave/wave_136.s"
	.word 0x0 @ padding?
#ifndef SKY_STORY
	.include "sound/wave/wave_137.s"
#else
	.set	wave_137, sky_red_unused_wave
#endif
#ifndef SKY_STORY
	.include "sound/wave/wave_138.s"
#else
	.set	wave_138, sky_red_unused_wave
#endif
