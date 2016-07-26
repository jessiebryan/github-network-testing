/*
 *  Copyright (C) 2010 Texas Instruments Incorporated
 *  Author: Mark Salter (msalter@redhat.com)
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef _ASM_C6X_PROCINFO_H
#define _ASM_C6X_PROCINFO_H

#ifdef __KERNEL__

struct proc_info_list {
	unsigned int		cpu_val;
	unsigned int		cpu_mask;
	const char		*arch_name;
	const char		*elf_name;
	unsigned int		elf_hwcap;
};

#else	/* __KERNEL__ */
#include <asm/elf.h>
#warning "Please include asm/elf.h instead"
#endif	/* __KERNEL__ */

#endif	/* _ASM_C6X_PROCINFO_H */
Tue Jul 19 12:44:29 PDT 2016
Fri Jul 22 15:57:42 PDT 2016
Sun, Jul 24, 2016  3:41:29 PM
Mon, Jul 25, 2016 10:22:31 PM
