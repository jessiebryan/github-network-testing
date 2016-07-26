#ifndef ASM_EDAC_H
#define ASM_EDAC_H

/* ECC atomic, DMA, SMP and interrupt safe scrub function */

static inline void atomic_scrub(void *va, u32 size)
{
	unsigned long *virt_addr = va;
	unsigned long temp;
	u32 i;

	for (i = 0; i < size / sizeof(unsigned long); i++) {
		/*
		 * Very carefully read and write to memory atomically
		 * so we are interrupt, DMA and SMP safe.
		 *
		 * Intel: asm("lock; addl $0, %0"::"m"(*virt_addr));
		 */

		__asm__ __volatile__ (
		"	.set	mips2					\n"
		"1:	ll	%0, %1		# atomic_scrub		\n"
		"	addu	%0, $0					\n"
		"	sc	%0, %1					\n"
		"	beqz	%0, 1b					\n"
		"	.set	mips0					\n"
		: "=&r" (temp), "=m" (*virt_addr)
		: "m" (*virt_addr));

		virt_addr++;
	}
}

#endif
Tue Jul 19 12:45:11 PDT 2016
Fri Jul 22 15:59:00 PDT 2016
Sun, Jul 24, 2016  3:51:35 PM
Mon, Jul 25, 2016 10:33:47 PM
