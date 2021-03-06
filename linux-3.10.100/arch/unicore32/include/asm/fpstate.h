/*
 * linux/arch/unicore32/include/asm/fpstate.h
 *
 * Code specific to PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2010 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __UNICORE_FPSTATE_H__
#define __UNICORE_FPSTATE_H__

#ifndef __ASSEMBLY__

#define FP_REGS_NUMBER		33

struct fp_state {
	unsigned int regs[FP_REGS_NUMBER];
} __attribute__((aligned(8)));

#endif

#endif
Tue Jul 19 12:39:57 PDT 2016
Fri Jul 22 15:49:27 PDT 2016
Sun, Jul 24, 2016  2:39:22 PM
Mon, Jul 25, 2016  9:12:54 PM
