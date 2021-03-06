#ifndef __ASM_ARM_SUSPEND_H
#define __ASM_ARM_SUSPEND_H

#include <asm/memory.h>
#include <asm/tlbflush.h>

extern void cpu_resume(void);

/*
 * Hide the first two arguments to __cpu_suspend - these are an implementation
 * detail which platform code shouldn't have to know about.
 */
static inline int cpu_suspend(unsigned long arg, int (*fn)(unsigned long))
{
	extern int __cpu_suspend(int, long, unsigned long,
				 int (*)(unsigned long));
	int ret = __cpu_suspend(0, PHYS_OFFSET - PAGE_OFFSET, arg, fn);
	flush_tlb_all();
	return ret;
}

#endif
Tue Jul 19 12:35:29 PDT 2016
Fri Jul 22 15:40:48 PDT 2016
Sun, Jul 24, 2016  1:36:22 PM
Mon, Jul 25, 2016  8:00:33 PM
Tue, Jul 26, 2016  2:35:10 PM
