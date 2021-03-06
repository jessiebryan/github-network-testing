/* linux/arch/arm/plat-s5p/include/plat/exynos4.h
 *
 * Copyright (c) 2010-2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Header file for exynos4 cpu support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

/* Common init code for EXYNOS4 related SoCs */

extern void exynos4_common_init_uarts(struct s3c2410_uartcfg *cfg, int no);
extern void exynos4_register_clocks(void);
extern void exynos4_setup_clocks(void);

#ifdef CONFIG_CPU_EXYNOS4210

extern  int exynos4_init(void);
extern void exynos4_init_irq(void);
extern void exynos4_map_io(void);
extern void exynos4_init_clocks(int xtal);
extern struct sys_timer exynos4_timer;

#define exynos4_init_uarts exynos4_common_init_uarts

#else
#define exynos4_init_clocks NULL
#define exynos4_init_uarts NULL
#define exynos4_map_io NULL
#define exynos4_init NULL
#endif
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:47 PDT 2016
Sun, Jul 24, 2016  1:29:00 PM
Mon, Jul 25, 2016  6:38:59 PM
Mon, Jul 25, 2016  7:51:51 PM
Tue, Jul 26, 2016  2:27:02 PM
