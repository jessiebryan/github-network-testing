#ifndef __PCM037_H__
#define __PCM037_H__

enum pcm037_board_variant {
	PCM037_PCM970,
	PCM037_EET,
};

extern enum pcm037_board_variant pcm037_variant(void);

#ifdef CONFIG_MACH_PCM037_EET
int pcm037_eet_init_devices(void);
#else
static inline int pcm037_eet_init_devices(void) { return 0; }
#endif

#endif
Tue Jul 19 12:46:56 PDT 2016
Fri Jul 22 16:02:20 PDT 2016
Sun, Jul 24, 2016  4:17:34 PM
Mon, Jul 25, 2016 11:02:41 PM
