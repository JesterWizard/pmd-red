@ Red's music: not in the sky build (EoS tracks play instead, tools/eos_music/sky_red_bgm_map.py)
#ifndef SKY_STORY
	.section .rodata
	.global	seq_000
	.align	2
	
seq_000:
	.byte	0	@ NumTrks
	.byte	0	@ NumBlks
	.byte	50	@ Priority
	.byte	128	@ Reverb

	.word	bank_000
	
#endif
