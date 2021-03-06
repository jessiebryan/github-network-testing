/*
 * Definitions for the MIPS sysmips(2) call
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 1995 by Ralf Baechle
 */
#ifndef _ASM_SYSMIPS_H
#define _ASM_SYSMIPS_H

/*
 * Commands for the sysmips(2) call
 *
 * sysmips(2) is deprecated - though some existing software uses it.
 * We only support the following commands.
 */
#define SETNAME			   1	/* set hostname			 */
#define FLUSH_CACHE		   3	/* writeback and invalidate caches */
#define MIPS_FIXADE		   7	/* control address error fixing	 */
#define MIPS_RDNVRAM		  10	/* read NVRAM */
#define MIPS_ATOMIC_SET		2001	/* atomically set variable	 */

#endif /* _ASM_SYSMIPS_H */
Tue Jul 19 12:42:38 PDT 2016
Fri Jul 22 15:54:19 PDT 2016
Sun, Jul 24, 2016  3:15:04 PM
Mon, Jul 25, 2016  9:53:11 PM
