#ifndef __SYSDEP_X86_64_BARRIER_H
#define __SYSDEP_X86_64_BARRIER_H

/* Copied from include/asm-x86_64 for use by userspace. */
#define mb() 	asm volatile("mfence":::"memory")

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:15:00 PM
Mon, Jul 25, 2016  6:22:12 PM
Mon, Jul 25, 2016  7:35:26 PM
