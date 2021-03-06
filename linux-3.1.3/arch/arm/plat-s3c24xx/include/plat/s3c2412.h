/* linux/include/asm-arm/plat-s3c24xx/s3c2412.h
 *
 * Copyright (c) 2006 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * Header file for s3c2412 cpu support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifdef CONFIG_CPU_S3C2412

extern  int s3c2412_init(void);

extern void s3c2412_map_io(void);

extern void s3c2412_init_uarts(struct s3c2410_uartcfg *cfg, int no);

extern void s3c2412_init_clocks(int xtal);

extern  int s3c2412_baseclk_add(void);
#else
#define s3c2412_init_clocks NULL
#define s3c2412_init_uarts NULL
#define s3c2412_map_io NULL
#define s3c2412_init NULL
#endif
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:47 PDT 2016
Sun, Jul 24, 2016  1:29:00 PM
Mon, Jul 25, 2016  6:38:58 PM
Mon, Jul 25, 2016  7:51:51 PM
Tue, Jul 26, 2016  2:27:02 PM
