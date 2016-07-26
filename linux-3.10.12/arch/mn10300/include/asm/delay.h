/* MN10300 Uninterruptible delay routines
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_DELAY_H
#define _ASM_DELAY_H

extern void __udelay(unsigned long usecs);
extern void __delay(unsigned long loops);

#define udelay(n) __udelay(n)

#endif /* _ASM_DELAY_H */
Tue Jul 19 12:42:38 PDT 2016
Fri Jul 22 15:54:19 PDT 2016
Sun, Jul 24, 2016  3:15:06 PM
Mon, Jul 25, 2016  9:53:13 PM
