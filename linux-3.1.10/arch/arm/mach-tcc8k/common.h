#ifndef MACH_TCC8K_COMMON_H
#define MACH_TCC8K_COMMON_H

#include <linux/platform_device.h>

extern struct platform_device tcc_nand_device;

struct clk;

extern void tcc_clocks_init(unsigned long xi_freq, unsigned long xti_freq);
extern void tcc8k_timer_init(struct clk *clock, void __iomem *base, int irq);
extern void tcc8k_init_irq(void);
extern void tcc8k_map_common_io(void);

#endif
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:34 PDT 2016
Sun, Jul 24, 2016  1:12:17 PM
Mon, Jul 25, 2016  6:18:57 PM
Mon, Jul 25, 2016  7:32:14 PM
Tue, Jul 26, 2016  2:08:27 PM
