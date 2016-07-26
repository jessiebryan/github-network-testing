/* arch/arm/mach-s3c2410/include/mach/hardware.h
 *
 * Copyright (c) 2003 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * S3C2410 - hardware
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_HARDWARE_H
#define __ASM_ARCH_HARDWARE_H

#ifndef __ASSEMBLY__

extern unsigned int s3c2410_modify_misccr(unsigned int clr, unsigned int chg);

#ifdef CONFIG_CPU_S3C2440

extern int s3c2440_set_dsc(unsigned int pin, unsigned int value);

#endif /* CONFIG_CPU_S3C2440 */

#ifdef CONFIG_CPU_S3C2412

extern int s3c2412_gpio_set_sleepcfg(unsigned int pin, unsigned int state);

#endif /* CONFIG_CPU_S3C2412 */

#endif /* __ASSEMBLY__ */

#include <asm/sizes.h>
#include <mach/map.h>

/* machine specific hardware definitions should go after this */

/* currently here until moved into config (todo) */
#define CONFIG_NO_MULTIWORD_IO

#endif /* __ASM_ARCH_HARDWARE_H */
Tue Jul 19 12:36:05 PDT 2016
Fri Jul 22 15:41:59 PDT 2016
Sun, Jul 24, 2016  1:45:09 PM
Mon, Jul 25, 2016  8:10:56 PM
Tue, Jul 26, 2016  2:44:54 PM
