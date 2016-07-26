#include <plat/sram.h>

extern void omap_sram_reprogram_clock(u32 dpllctl, u32 ckctl);

/* Do not use these */
extern void omap1_sram_reprogram_clock(u32 ckctl, u32 dpllctl);
extern unsigned long omap1_sram_reprogram_clock_sz;
Tue Jul 19 12:52:45 PDT 2016
Fri Jul 22 16:13:25 PDT 2016
Sun, Jul 24, 2016  5:41:12 PM
Tue, Jul 26, 2016 12:35:16 AM
