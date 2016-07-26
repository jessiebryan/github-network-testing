/* MN10300 Byte-order primitive construction
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_SWAB_H
#define _ASM_SWAB_H

#include <linux/types.h>

#ifdef __GNUC__

static inline __attribute__((const))
__u32 __arch_swab32(__u32 x)
{
	__u32 ret;
	asm("swap %1,%0" : "=r" (ret) : "r" (x));
	return ret;
}
#define __arch_swab32 __arch_swab32

static inline __attribute__((const))
__u16 __arch_swab16(__u16 x)
{
	__u16 ret;
	asm("swaph %1,%0" : "=r" (ret) : "r" (x));
	return ret;
}
#define __arch_swab32 __arch_swab32

#if !defined(__STRICT_ANSI__) || defined(__KERNEL__)
#  define __SWAB_64_THRU_32__
#endif

#endif /* __GNUC__ */

#endif /* _ASM_SWAB_H */
Tue Jul 19 12:35:39 PDT 2016
Fri Jul 22 15:41:08 PDT 2016
Sun, Jul 24, 2016  1:38:42 PM
Mon, Jul 25, 2016  8:03:19 PM
Tue, Jul 26, 2016  2:37:46 PM
