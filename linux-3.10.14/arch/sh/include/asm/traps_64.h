/*
 * Copyright (C) 2000, 2001  Paolo Alberelli
 * Copyright (C) 2003  Paul Mundt
 * Copyright (C) 2004  Richard Curnow
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 */
#ifndef __ASM_SH_TRAPS_64_H
#define __ASM_SH_TRAPS_64_H

#include <cpu/registers.h>

extern void phys_stext(void);

#define lookup_exception_vector()		\
({						\
	unsigned long _vec;			\
						\
	__asm__ __volatile__ (			\
		"getcon " __EXPEVT ", %0\n\t"	\
		: "=r" (_vec)			\
	);					\
						\
	_vec;					\
})

static inline void trigger_address_error(void)
{
	phys_stext();
}

#define BUILD_TRAP_HANDLER(name)	\
asmlinkage void name##_trap_handler(unsigned int vec, struct pt_regs *regs)
#define TRAP_HANDLER_DECL

#endif /* __ASM_SH_TRAPS_64_H */
Tue Jul 19 12:43:59 PDT 2016
Fri Jul 22 15:56:47 PDT 2016
Sun, Jul 24, 2016  3:34:14 PM
Mon, Jul 25, 2016 10:14:30 PM
