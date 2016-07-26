#include <plat/sram.h>

extern void omap_sram_reprogram_clock(u32 dpllctl, u32 ckctl);

/* Do not use these */
extern void omap1_sram_reprogram_clock(u32 ckctl, u32 dpllctl);
extern unsigned long omap1_sram_reprogram_clock_sz;
Tue Jul 19 12:39:06 PDT 2016
Fri Jul 22 15:47:43 PDT 2016
Sun, Jul 24, 2016  2:27:07 PM
Mon, Jul 25, 2016  8:59:16 PM
