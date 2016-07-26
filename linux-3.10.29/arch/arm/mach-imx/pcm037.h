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
Tue Jul 19 12:53:23 PDT 2016
Fri Jul 22 16:14:39 PDT 2016
Sun, Jul 24, 2016  5:50:23 PM
Tue, Jul 26, 2016 12:45:24 AM
