/*
 *
 * arch/arm/mach-u300/include/mach/io.h
 *
 *
 * Copyright (C) 2006-2009 ST-Ericsson AB
 * License terms: GNU General Public License (GPL) version 2
 * Dummy IO map for being able to use writew()/readw(),
 * writel()/readw() and similar accessor functions.
 * Author: Linus Walleij <linus.walleij@stericsson.com>
 */
#ifndef __MACH_IO_H
#define __MACH_IO_H

#define IO_SPACE_LIMIT 0xffffffff

#define __io(a)		__typesafe_io(a)
#define __mem_pci(a)	(a)

#endif
Tue Jul 19 12:37:15 PDT 2016
Fri Jul 22 15:44:15 PDT 2016
Sun, Jul 24, 2016  2:01:48 PM
Mon, Jul 25, 2016  8:30:36 PM
