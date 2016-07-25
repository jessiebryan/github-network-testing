/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2005 Embedded Alley Solutions, Inc
 * Copyright (C) 2005 Ralf Baechle (ralf@linux-mips.org)
 */
#ifndef __ASM_MACH_GENERIC_KERNEL_ENTRY_H
#define __ASM_MACH_GENERIC_KERNEL_ENTRY_H

/* Intentionally empty macro, used in head.S. Override in
 * arch/mips/mach-xxx/kernel-entry-init.h when necessary.
 */
.macro	kernel_entry_setup
.endm

/*
 * Do SMP slave processor setup necessary before we can savely execute C code.
 */
	.macro	smp_slave_setup
	.endm


#endif /* __ASM_MACH_GENERIC_KERNEL_ENTRY_H */
Tue Jul 19 12:35:38 PDT 2016
Fri Jul 22 15:41:06 PDT 2016
Sun, Jul 24, 2016  1:38:23 PM
