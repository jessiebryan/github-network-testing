/*
 * Header file for using the wbflush routine
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (c) 1998 Harald Koerfgen
 * Copyright (C) 2002 Maciej W. Rozycki
 */
#ifndef _ASM_WBFLUSH_H
#define _ASM_WBFLUSH_H


#ifdef CONFIG_CPU_HAS_WB

extern void (*__wbflush)(void);
extern void wbflush_setup(void);

#define wbflush()			\
	do {				\
		__sync();		\
		__wbflush();		\
	} while (0)

#else /* !CONFIG_CPU_HAS_WB */

#define wbflush_setup() do { } while (0)

#define wbflush() fast_iob()

#endif /* !CONFIG_CPU_HAS_WB */

#endif /* _ASM_WBFLUSH_H */
Tue Jul 19 12:40:31 PDT 2016
Fri Jul 22 15:50:34 PDT 2016
Sun, Jul 24, 2016  2:47:24 PM
Mon, Jul 25, 2016  9:21:57 PM
