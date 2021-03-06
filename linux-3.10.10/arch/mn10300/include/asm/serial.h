/* Standard UART definitions
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */

#ifndef _ASM_SERIAL_H
#define _ASM_SERIAL_H

/* Standard COM flags (except for COM4, because of the 8514 problem) */
#ifdef CONFIG_SERIAL_DETECT_IRQ
#define STD_COM_FLAGS	(ASYNC_BOOT_AUTOCONF | ASYNC_SKIP_TEST | ASYNC_AUTO_IRQ)
#define STD_COM4_FLAGS	(ASYNC_BOOT_AUTOCONF | ASYNC_AUTO_IRQ)
#else
#define STD_COM_FLAGS	(ASYNC_BOOT_AUTOCONF | ASYNC_SKIP_TEST)
#define STD_COM4_FLAGS	ASYNC_BOOT_AUTOCONF
#endif

#ifdef CONFIG_SERIAL_MANY_PORTS
#define FOURPORT_FLAGS	ASYNC_FOURPORT
#define ACCENT_FLAGS	0
#define BOCA_FLAGS	0
#define HUB6_FLAGS	0
#define RS_TABLE_SIZE	64
#else
#define RS_TABLE_SIZE
#endif

#include <unit/serial.h>

#endif /* _ASM_SERIAL_H */
Tue Jul 19 12:39:14 PDT 2016
Fri Jul 22 15:48:00 PDT 2016
Sun, Jul 24, 2016  2:29:04 PM
Mon, Jul 25, 2016  9:01:27 PM
