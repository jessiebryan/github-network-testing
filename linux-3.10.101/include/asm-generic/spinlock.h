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
Tue Jul 19 12:40:49 PDT 2016
Fri Jul 22 15:51:08 PDT 2016
Sun, Jul 24, 2016  2:51:43 PM
Mon, Jul 25, 2016  9:26:49 PM
