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
Tue Jul 19 12:49:56 PDT 2016
Fri Jul 22 16:07:58 PDT 2016
Sun, Jul 24, 2016  5:00:52 PM
Mon, Jul 25, 2016 11:50:49 PM
