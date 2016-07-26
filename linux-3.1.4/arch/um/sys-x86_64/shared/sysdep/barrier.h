#ifndef __SYSDEP_X86_64_BARRIER_H
#define __SYSDEP_X86_64_BARRIER_H

/* Copied from include/asm-x86_64 for use by userspace. */
#define mb() 	asm volatile("mfence":::"memory")

#endif
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:17 PDT 2016
Sun, Jul 24, 2016  1:39:45 PM
Mon, Jul 25, 2016  8:04:34 PM
