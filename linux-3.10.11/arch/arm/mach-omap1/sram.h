#include <plat/sram.h>

extern void omap_sram_reprogram_clock(u32 dpllctl, u32 ckctl);

/* Do not use these */
extern void omap1_sram_reprogram_clock(u32 ckctl, u32 dpllctl);
extern unsigned long omap1_sram_reprogram_clock_sz;
Tue Jul 19 12:41:42 PDT 2016
Fri Jul 22 15:52:52 PDT 2016
Sun, Jul 24, 2016  3:03:57 PM
Mon, Jul 25, 2016  9:40:37 PM
