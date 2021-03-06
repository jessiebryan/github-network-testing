#ifndef _ASM_X86_SPINLOCK_TYPES_H
#define _ASM_X86_SPINLOCK_TYPES_H

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

#include <linux/types.h>

#if (CONFIG_NR_CPUS < 256)
typedef u8  __ticket_t;
typedef u16 __ticketpair_t;
#else
typedef u16 __ticket_t;
typedef u32 __ticketpair_t;
#endif

#define TICKET_SHIFT	(sizeof(__ticket_t) * 8)

typedef struct arch_spinlock {
	union {
		__ticketpair_t head_tail;
		struct __raw_tickets {
			__ticket_t head, tail;
		} tickets;
	};
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ { 0 } }

#include <asm/rwlock.h>

#endif /* _ASM_X86_SPINLOCK_TYPES_H */
Tue Jul 19 12:42:44 PDT 2016
Fri Jul 22 15:54:29 PDT 2016
Sun, Jul 24, 2016  3:16:23 PM
Mon, Jul 25, 2016  9:54:41 PM
