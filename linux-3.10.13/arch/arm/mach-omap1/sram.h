#include <plat/sram.h>

extern void omap_sram_reprogram_clock(u32 dpllctl, u32 ckctl);

/* Do not use these */
extern void omap1_sram_reprogram_clock(u32 ckctl, u32 dpllctl);
extern unsigned long omap1_sram_reprogram_clock_sz;
Tue Jul 19 12:43:09 PDT 2016
Fri Jul 22 15:55:14 PDT 2016
Sun, Jul 24, 2016  3:22:23 PM
Mon, Jul 25, 2016 10:01:18 PM
