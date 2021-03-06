/* linux/include/asm-arm/plat-s3c24xx/s3c2443.h
 *
 * Copyright (c) 2009 Yauhen Kharuzhy <jekhor@gmail.com>
 *
 * Header file for s3c2416 cpu support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifdef CONFIG_CPU_S3C2416

struct s3c2410_uartcfg;

extern  int s3c2416_init(void);

extern void s3c2416_map_io(void);

extern void s3c2416_init_uarts(struct s3c2410_uartcfg *cfg, int no);

extern void s3c2416_init_clocks(int xtal);

extern  int s3c2416_baseclk_add(void);

#else
#define s3c2416_init_clocks NULL
#define s3c2416_init_uarts NULL
#define s3c2416_map_io NULL
#define s3c2416_init NULL
#endif
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:36 PDT 2016
Sun, Jul 24, 2016  1:12:30 PM
Mon, Jul 25, 2016  6:19:12 PM
Mon, Jul 25, 2016  7:32:29 PM
Tue, Jul 26, 2016  2:08:41 PM
