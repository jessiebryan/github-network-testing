/*
 * arch/arm/mach-w90x900/nuc960.h
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
struct sys_timer;

/* core initialisation functions */

extern void nuc900_init_irq(void);
extern struct sys_timer nuc900_timer;

/* extern file from nuc960.c */

extern void nuc960_board_init(void);
extern void nuc960_init_clocks(void);
extern void nuc960_map_io(void);
Tue Jul 19 12:33:15 PDT 2016
Fri Jul 22 15:37:35 PDT 2016
Sun, Jul 24, 2016  1:12:22 PM
Mon, Jul 25, 2016  6:19:03 PM
Mon, Jul 25, 2016  7:32:20 PM
Tue, Jul 26, 2016  2:08:32 PM
