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
Tue Jul 19 12:33:51 PDT 2016
Fri Jul 22 15:38:40 PDT 2016
Sun, Jul 24, 2016  1:20:32 PM
Mon, Jul 25, 2016  6:28:49 PM
Mon, Jul 25, 2016  7:41:55 PM
Tue, Jul 26, 2016  2:17:39 PM
