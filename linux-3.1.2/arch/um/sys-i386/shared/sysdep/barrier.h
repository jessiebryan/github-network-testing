#ifndef __SYSDEP_I386_BARRIER_H
#define __SYSDEP_I386_BARRIER_H

/* Copied from include/asm-i386 for use by userspace.  i386 has the option
 * of using mfence, but I'm just using this, which works everywhere, for now.
 */
#define mb() asm volatile("lock; addl $0,0(%esp)")

#endif
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:00 PDT 2016
Sun, Jul 24, 2016  1:23:14 PM
