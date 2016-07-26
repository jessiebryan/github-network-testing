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
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:20 PM
Mon, Jul 25, 2016  6:21:25 PM
Mon, Jul 25, 2016  7:34:39 PM
Tue, Jul 26, 2016  2:10:42 PM
