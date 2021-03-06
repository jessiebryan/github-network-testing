/*
 * Definitions used by low-level trap handlers
 *
 * Copyright (C) 2008-2009 Michal Simek <monstr@monstr.eu>
 * Copyright (C) 2007-2009 PetaLogix
 * Copyright (C) 2007 John Williams <john.williams@petalogix.com>
 *
 * This file is subject to the terms and conditions of the GNU General
 * Public License. See the file COPYING in the main directory of this
 * archive for more details.
 */

#ifndef _ASM_MICROBLAZE_ENTRY_H
#define _ASM_MICROBLAZE_ENTRY_H

#include <asm/percpu.h>
#include <asm/ptrace.h>

/*
 * These are per-cpu variables required in entry.S, among other
 * places
 */

#define PER_CPU(var) var

# ifndef __ASSEMBLY__
DECLARE_PER_CPU(unsigned int, KSP); /* Saved kernel stack pointer */
DECLARE_PER_CPU(unsigned int, KM); /* Kernel/user mode */
DECLARE_PER_CPU(unsigned int, ENTRY_SP); /* Saved SP on kernel entry */
DECLARE_PER_CPU(unsigned int, R11_SAVE); /* Temp variable for entry */
DECLARE_PER_CPU(unsigned int, CURRENT_SAVE); /* Saved current pointer */
# endif /* __ASSEMBLY__ */

#endif /* _ASM_MICROBLAZE_ENTRY_H */
Tue Jul 19 12:33:56 PDT 2016
Fri Jul 22 15:38:49 PDT 2016
Sun, Jul 24, 2016  1:21:42 PM
Mon, Jul 25, 2016  6:30:13 PM
Mon, Jul 25, 2016  7:43:17 PM
Tue, Jul 26, 2016  2:18:58 PM
