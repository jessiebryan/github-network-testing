/*
 * include/asm-sh/shmparam.h
 *
 * Copyright (C) 1999 Niibe Yutaka
 * Copyright (C) 2006 Paul Mundt
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 */
#ifndef __ASM_SH_SHMPARAM_H
#define __ASM_SH_SHMPARAM_H

/*
 * SH-4 and SH-3 7705 have an aliasing dcache. Bump this up to a sensible value
 * for everyone, and work out the specifics from the probed cache descriptor.
 */
#define	SHMLBA	0x4000		 /* attach addr a multiple of this */

#define __ARCH_FORCE_SHMLBA

#endif /* __ASM_SH_SHMPARAM_H */
Tue Jul 19 12:47:08 PDT 2016
Fri Jul 22 16:02:42 PDT 2016
Sun, Jul 24, 2016  4:20:19 PM
Mon, Jul 25, 2016 11:05:45 PM
