/*
 * This file contains common function prototypes to avoid externs in the c files.
 *
 * Copyright (c) 2011 Cambridge Silicon Radio Limited, a CSR plc group company.
 *
 * Licensed under GPLv2 or later.
 */

#ifndef __MACH_PRIMA2_COMMON_H__
#define __MACH_PRIMA2_COMMON_H__

#include <linux/init.h>
#include <asm/mach/time.h>

extern struct sys_timer sirfsoc_timer;

extern void __init sirfsoc_of_irq_init(void);
extern void __init sirfsoc_of_clk_init(void);

#ifndef CONFIG_DEBUG_LL
static inline void sirfsoc_map_lluart(void)  {}
#else
extern void __init sirfsoc_map_lluart(void);
#endif

#endif
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:43 PDT 2016
Sun, Jul 24, 2016  1:28:34 PM
Mon, Jul 25, 2016  6:38:27 PM
Mon, Jul 25, 2016  7:51:20 PM
Tue, Jul 26, 2016  2:26:33 PM
