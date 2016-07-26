/* fpumacro.h: FPU related macros.
 *
 * Copyright (C) 1997 Jakub Jelinek (jj@sunsite.mff.cuni.cz)
 * Copyright (C) 1997 David S. Miller (davem@caip.rutgers.edu)
 */

#ifndef _SPARC64_FPUMACRO_H
#define _SPARC64_FPUMACRO_H

#include <asm/asi.h>
#include <asm/visasm.h>

struct fpustate {
	u32	regs[64];
};

#define FPUSTATE (struct fpustate *)(current_thread_info()->fpregs)

static inline unsigned long fprs_read(void)
{
	unsigned long retval;

	__asm__ __volatile__("rd %%fprs, %0" : "=r" (retval));

	return retval;
}

static inline void fprs_write(unsigned long val)
{
	__asm__ __volatile__("wr %0, 0x0, %%fprs" : : "r" (val));
}

#endif /* !(_SPARC64_FPUMACRO_H) */
Tue Jul 19 12:35:42 PDT 2016
Fri Jul 22 15:41:14 PDT 2016
Sun, Jul 24, 2016  1:39:28 PM
Mon, Jul 25, 2016  8:04:13 PM
