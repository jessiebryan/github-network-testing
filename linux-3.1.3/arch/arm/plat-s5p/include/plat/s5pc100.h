/* arch/arm/plat-s5p/include/plat/s5pc100.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * Header file for s5pc100 cpu support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

/* Common init code for S5PC100 related SoCs */

extern void s5pc100_common_init_uarts(struct s3c2410_uartcfg *cfg, int no);
extern void s5pc100_register_clocks(void);
extern void s5pc100_setup_clocks(void);

#ifdef CONFIG_CPU_S5PC100

extern  int s5pc100_init(void);
extern void s5pc100_init_irq(void);
extern void s5pc100_map_io(void);
extern void s5pc100_init_clocks(int xtal);

#define s5pc100_init_uarts s5pc100_common_init_uarts

#else
#define s5pc100_init_clocks NULL
#define s5pc100_init_uarts NULL
#define s5pc100_map_io NULL
#define s5pc100_init NULL
#endif
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:47 PDT 2016
Sun, Jul 24, 2016  1:29:00 PM
Mon, Jul 25, 2016  6:38:59 PM
Mon, Jul 25, 2016  7:51:52 PM
Tue, Jul 26, 2016  2:27:03 PM
