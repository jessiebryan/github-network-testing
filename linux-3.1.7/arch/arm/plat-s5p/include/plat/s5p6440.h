/* arch/arm/plat-s5p/include/plat/s5p6440.h
 *
 * Copyright (c) 2009 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * Header file for s5p6440 cpu support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

 /* Common init code for S5P6440 related SoCs */

extern void s5p6440_register_clocks(void);
extern void s5p6440_setup_clocks(void);

#ifdef CONFIG_CPU_S5P6440

extern  int s5p64x0_init(void);
extern void s5p6440_init_irq(void);
extern void s5p6440_map_io(void);
extern void s5p6440_init_clocks(int xtal);

extern void s5p6440_init_uarts(struct s3c2410_uartcfg *cfg, int no);

#else
#define s5p6440_init_clocks NULL
#define s5p6440_init_uarts NULL
#define s5p6440_map_io NULL
#define s5p64x0_init NULL
#endif

/* S5P6440 timer */

extern struct sys_timer s5p6440_timer;
Tue Jul 19 12:36:41 PDT 2016
Fri Jul 22 15:43:10 PDT 2016
Sun, Jul 24, 2016  1:53:45 PM
Mon, Jul 25, 2016  8:21:03 PM
