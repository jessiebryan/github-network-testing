/*
 * Copyright 2000 Deep Blue Solutions Ltd
 * Copyright 2004 ARM Limited
 * Copyright 2008 Cavium Networks
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, Version 2, as
 * published by the Free Software Foundation.
 */

#ifndef __CNS3XXX_CORE_H
#define __CNS3XXX_CORE_H

extern void cns3xxx_timer_init(void);

#ifdef CONFIG_CACHE_L2X0
void __init cns3xxx_l2x0_init(void);
#else
static inline void cns3xxx_l2x0_init(void) {}
#endif /* CONFIG_CACHE_L2X0 */

void __init cns3xxx_map_io(void);
void __init cns3xxx_init_irq(void);
void cns3xxx_power_off(void);
void cns3xxx_restart(char, const char *);

#endif /* __CNS3XXX_CORE_H */
Tue Jul 19 12:43:46 PDT 2016
Fri Jul 22 15:56:23 PDT 2016
Sun, Jul 24, 2016  3:31:23 PM
Mon, Jul 25, 2016 10:11:20 PM
