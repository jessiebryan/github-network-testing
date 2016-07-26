#ifndef __ASM_GENERIC_CMPXCHG_H
#define __ASM_GENERIC_CMPXCHG_H

/*
 * Generic cmpxchg
 *
 * Uses the local cmpxchg. Does not support SMP.
 */
#ifdef CONFIG_SMP
#error "Cannot use generic cmpxchg on SMP"
#endif

/*
 * Atomic compare and exchange.
 *
 * Do not define __HAVE_ARCH_CMPXCHG because we want to use it to check whether
 * a cmpxchg primitive faster than repeated local irq save/restore exists.
 */
#define cmpxchg(ptr, o, n)	cmpxchg_local((ptr), (o), (n))
#define cmpxchg64(ptr, o, n)	cmpxchg64_local((ptr), (o), (n))

#endif
Tue Jul 19 12:37:39 PDT 2016
Fri Jul 22 15:45:00 PDT 2016
Sun, Jul 24, 2016  2:07:14 PM
Mon, Jul 25, 2016  8:37:07 PM
