/*
 * arch/arm/mach-w90x900/nuc9xx.h
 *
 * Copied from nuc910.h, which had:
 *
 * Copyright (c) 2008 Nuvoton corporation
 *
 * Header file for NUC900 CPU support
 *
 * Wan ZongShun <mcuos.com@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */
struct map_desc;

/* core initialisation functions */

extern void nuc900_init_irq(void);
extern void nuc900_timer_init(void);
extern void nuc9xx_restart(char, const char *);
Tue Jul 19 12:42:31 PDT 2016
Fri Jul 22 15:54:06 PDT 2016
Sun, Jul 24, 2016  3:13:27 PM
Mon, Jul 25, 2016  9:51:20 PM
