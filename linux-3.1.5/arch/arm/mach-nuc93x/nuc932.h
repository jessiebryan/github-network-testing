/*
 * arch/arm/mach-nuc93x/nuc932.h
 *
 * Copyright (c) 2008 Nuvoton corporation
 *
 * Header file for NUC93x CPU support
 *
 * Wan ZongShun <mcuos.com@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

struct map_desc;
struct sys_timer;

/* core initialisation functions */

extern void nuc93x_init_irq(void);
extern struct sys_timer nuc93x_timer;

/* extern file from nuc932.c */

extern void nuc932_board_init(void);
extern void nuc932_init_clocks(void);
extern void nuc932_map_io(void);
extern void nuc932_init_uartclk(void);
Tue Jul 19 12:36:05 PDT 2016
Fri Jul 22 15:41:58 PDT 2016
Sun, Jul 24, 2016  1:44:59 PM
Mon, Jul 25, 2016  8:10:43 PM
Tue, Jul 26, 2016  2:44:42 PM
