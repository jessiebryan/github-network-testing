#include <plat/sram.h>

extern void omap_sram_reprogram_clock(u32 dpllctl, u32 ckctl);

/* Do not use these */
extern void omap1_sram_reprogram_clock(u32 ckctl, u32 dpllctl);
extern unsigned long omap1_sram_reprogram_clock_sz;
Tue Jul 19 12:45:05 PDT 2016
Fri Jul 22 15:58:48 PDT 2016
Sun, Jul 24, 2016  3:50:04 PM
Mon, Jul 25, 2016 10:32:06 PM
