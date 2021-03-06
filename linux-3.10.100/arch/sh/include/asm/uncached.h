#ifndef __ASM_SH_UNCACHED_H
#define __ASM_SH_UNCACHED_H

#include <linux/bug.h>

#ifdef CONFIG_UNCACHED_MAPPING
extern unsigned long cached_to_uncached;
extern unsigned long uncached_size;
extern unsigned long uncached_start, uncached_end;

extern int virt_addr_uncached(unsigned long kaddr);
extern void uncached_init(void);
extern void uncached_resize(unsigned long size);

/*
 * Jump to uncached area.
 * When handling TLB or caches, we need to do it from an uncached area.
 */
#define jump_to_uncached()			\
do {						\
	unsigned long __dummy;			\
						\
	__asm__ __volatile__(			\
		"mova	1f, %0\n\t"		\
		"add	%1, %0\n\t"		\
		"jmp	@%0\n\t"		\
		" nop\n\t"			\
		".balign 4\n"			\
		"1:"				\
		: "=&z" (__dummy)		\
		: "r" (cached_to_uncached));	\
} while (0)

/*
 * Back to cached area.
 */
#define back_to_cached()				\
do {							\
	unsigned long __dummy;				\
	ctrl_barrier();					\
	__asm__ __volatile__(				\
		"mov.l	1f, %0\n\t"			\
		"jmp	@%0\n\t"			\
		" nop\n\t"				\
		".balign 4\n"				\
		"1:	.long 2f\n"			\
		"2:"					\
		: "=&r" (__dummy));			\
} while (0)
#else
#define virt_addr_uncached(kaddr)	(0)
#define uncached_init()			do { } while (0)
#define uncached_resize(size)		BUG()
#define jump_to_uncached()		do { } while (0)
#define back_to_cached()		do { } while (0)
#endif

#endif /* __ASM_SH_UNCACHED_H */
Tue Jul 19 12:39:55 PDT 2016
Fri Jul 22 15:49:23 PDT 2016
Sun, Jul 24, 2016  2:38:57 PM
Mon, Jul 25, 2016  9:12:26 PM
