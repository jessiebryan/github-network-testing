/*
 * arch/powerpc/platforms/embedded6xx/usbgecko_udbg.h
 *
 * udbg serial input/output routines for the USB Gecko adapter.
 * Copyright (C) 2008-2009 The GameCube Linux Team
 * Copyright (C) 2008,2009 Albert Herranz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 */

#ifndef __USBGECKO_UDBG_H
#define __USBGECKO_UDBG_H

#ifdef CONFIG_USBGECKO_UDBG

extern void __init ug_udbg_init(void);

#else

static inline void __init ug_udbg_init(void)
{
}

#endif /* CONFIG_USBGECKO_UDBG */

void __init udbg_init_usbgecko(void);

#endif /* __USBGECKO_UDBG_H */
Tue Jul 19 12:40:33 PDT 2016
Fri Jul 22 15:50:37 PDT 2016
Sun, Jul 24, 2016  2:47:53 PM
Mon, Jul 25, 2016  9:22:29 PM
