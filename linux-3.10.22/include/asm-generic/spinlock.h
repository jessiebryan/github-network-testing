#ifndef __ASM_GENERIC_SPINLOCK_H
#define __ASM_GENERIC_SPINLOCK_H
/*
 * You need to implement asm/spinlock.h for SMP support. The generic
 * version does not handle SMP.
 */
#ifdef CONFIG_SMP
#error need an architecture specific asm/spinlock.h
#endif

#endif /* __ASM_GENERIC_SPINLOCK_H */
Tue Jul 19 12:49:18 PDT 2016
Fri Jul 22 16:06:46 PDT 2016
Sun, Jul 24, 2016  4:51:36 PM
Mon, Jul 25, 2016 11:40:34 PM
