/*
 * Driver for VIA PadLock
 *
 * Copyright (c) 2004 Michal Ludvig <michal@logix.cz>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option) 
 * any later version.
 *
 */

#ifndef _CRYPTO_PADLOCK_H
#define _CRYPTO_PADLOCK_H

#define PADLOCK_ALIGNMENT 16

#define PFX	KBUILD_MODNAME ": "

#define PADLOCK_CRA_PRIORITY	300
#define PADLOCK_COMPOSITE_PRIORITY 400

#ifdef CONFIG_64BIT
#define STACK_ALIGN 16
#else
#define STACK_ALIGN 4
#endif

#endif	/* _CRYPTO_PADLOCK_H */
Tue Jul 19 12:34:23 PDT 2016
Fri Jul 22 15:39:23 PDT 2016
Sun, Jul 24, 2016  1:26:04 PM
Mon, Jul 25, 2016  6:35:28 PM
