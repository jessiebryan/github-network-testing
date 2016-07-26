/*
 * Copyright (C) 2004-2006 Atmel Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASM_AVR32_TYPES_H
#define __ASM_AVR32_TYPES_H

#include <asm-generic/int-ll64.h>

#ifndef __ASSEMBLY__

typedef unsigned short umode_t;

#endif /* __ASSEMBLY__ */

/*
 * These aren't exported outside the kernel to avoid name space clashes
 */
#ifdef __KERNEL__

#define BITS_PER_LONG 32

#endif /* __KERNEL__ */


#endif /* __ASM_AVR32_TYPES_H */
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:57 PDT 2016
Sun, Jul 24, 2016  1:37:22 PM
Mon, Jul 25, 2016  8:01:44 PM
Tue, Jul 26, 2016  2:36:17 PM
