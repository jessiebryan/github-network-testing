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
Tue Jul 19 12:34:44 PDT 2016
Fri Jul 22 15:39:46 PDT 2016
Sun, Jul 24, 2016  1:28:49 PM
Mon, Jul 25, 2016  6:38:45 PM
Mon, Jul 25, 2016  7:51:38 PM
Tue, Jul 26, 2016  2:26:50 PM
