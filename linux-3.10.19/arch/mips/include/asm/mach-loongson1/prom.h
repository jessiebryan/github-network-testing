/*
 * Copyright (c) 2011 Zhang, Keguang <keguang.zhang@gmail.com>
 *
 * This program is free software; you can redistribute	it and/or modify it
 * under  the terms of	the GNU General	 Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __ASM_MACH_LOONGSON1_PROM_H
#define __ASM_MACH_LOONGSON1_PROM_H

#include <linux/io.h>
#include <linux/init.h>
#include <linux/irq.h>

/* environment arguments from bootloader */
extern unsigned long memsize, highmemsize;

/* loongson-specific command line, env and memory initialization */
extern char *prom_getenv(char *name);
extern void __init prom_init_cmdline(void);

#endif /* __ASM_MACH_LOONGSON1_PROM_H */
Tue Jul 19 12:47:04 PDT 2016
Fri Jul 22 16:02:34 PDT 2016
Sun, Jul 24, 2016  4:19:22 PM
Mon, Jul 25, 2016 11:04:41 PM
