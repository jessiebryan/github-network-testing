/* arch/arm/mach-s3c64xx/include/mach/s3c6410.h
 *
 * Copyright 2008 Openmoko,  Inc.
 * Copyright 2008 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *	http://armlinux.simtec.co.uk/
 *
 * Header file for s3c6410 cpu support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifdef CONFIG_CPU_S3C6410

extern  int s3c6410_init(void);
extern void s3c6410_init_irq(void);
extern void s3c6410_map_io(void);
extern void s3c6410_init_clocks(int xtal);

#define s3c6410_init_uarts s3c6400_common_init_uarts

#else
#define s3c6410_init_clocks NULL
#define s3c6410_init_uarts NULL
#define s3c6410_map_io NULL
#define s3c6410_init NULL
#endif
Tue Jul 19 12:37:53 PDT 2016
Fri Jul 22 15:45:22 PDT 2016
Sun, Jul 24, 2016  2:09:55 PM
Mon, Jul 25, 2016  8:40:10 PM
