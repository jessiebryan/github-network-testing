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
Tue Jul 19 12:53:50 PDT 2016
Fri Jul 22 16:15:31 PDT 2016
Sun, Jul 24, 2016  5:56:47 PM
Tue, Jul 26, 2016 12:52:28 AM
