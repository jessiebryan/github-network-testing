#ifndef _POWERPC_XMON_DIS_ASM_H
#define _POWERPC_XMON_DIS_ASM_H
/*
 * Copyright (C) 2006 Michael Ellerman, IBM Corporation.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

extern void print_address (unsigned long memaddr);

#ifdef CONFIG_XMON_DISASSEMBLY
extern int print_insn_powerpc(unsigned long insn, unsigned long memaddr);
extern int print_insn_spu(unsigned long insn, unsigned long memaddr);
#else
static inline int print_insn_powerpc(unsigned long insn, unsigned long memaddr)
{
	printf("%.8x", insn);
	return 0;
}

static inline int print_insn_spu(unsigned long insn, unsigned long memaddr)
{
	printf("%.8x", insn);
	return 0;
}
#endif

#endif /* _POWERPC_XMON_DIS_ASM_H */
Tue Jul 19 12:45:50 PDT 2016
Fri Jul 22 16:00:17 PDT 2016
Sun, Jul 24, 2016  4:01:39 PM
Mon, Jul 25, 2016 10:45:00 PM
