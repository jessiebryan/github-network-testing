#ifndef __SYSDEP_X86_64_BARRIER_H
#define __SYSDEP_X86_64_BARRIER_H

/* Copied from include/asm-x86_64 for use by userspace. */
#define mb() 	asm volatile("mfence":::"memory")

#endif
Tue Jul 19 12:38:05 PDT 2016
Fri Jul 22 15:45:43 PDT 2016
Sun, Jul 24, 2016  2:12:44 PM
Mon, Jul 25, 2016  8:43:16 PM
