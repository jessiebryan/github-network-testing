/*
 *  arch/arm/include/asm/glue.h
 *
 *  Copyright (C) 1997-1999 Russell King
 *  Copyright (C) 2000-2002 Deep Blue Solutions Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 *  This file provides the glue to stick the processor-specific bits
 *  into the kernel in an efficient manner.  The idea is to use branches
 *  when we're only targeting one class of TLB, or indirect calls
 *  when we're targeting multiple classes of TLBs.
 */
#ifdef __KERNEL__

#ifdef __STDC__
#define ____glue(name,fn)	name##fn
#else
#define ____glue(name,fn)	name/**/fn
#endif
#define __glue(name,fn)		____glue(name,fn)

#endif
Tue Jul 19 12:38:26 PDT 2016
Fri Jul 22 15:46:24 PDT 2016
Sun, Jul 24, 2016  2:17:34 PM
Mon, Jul 25, 2016  8:48:36 PM
