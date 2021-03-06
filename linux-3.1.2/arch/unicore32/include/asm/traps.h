/*
 * linux/arch/unicore32/include/asm/traps.h
 *
 * Code specific to PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2010 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __UNICORE_TRAP_H__
#define __UNICORE_TRAP_H__

extern void __init early_trap_init(void);
extern void dump_backtrace_entry(unsigned long where,
		unsigned long from, unsigned long frame);

extern void do_DataAbort(unsigned long addr, unsigned int fsr,
		 struct pt_regs *regs);
#endif
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:01 PDT 2016
Sun, Jul 24, 2016  1:23:17 PM
Mon, Jul 25, 2016  6:32:08 PM
Mon, Jul 25, 2016  7:45:10 PM
Tue, Jul 26, 2016  2:20:45 PM
