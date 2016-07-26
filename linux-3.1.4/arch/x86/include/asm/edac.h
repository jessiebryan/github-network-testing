#ifndef _ASM_X86_EDAC_H
#define _ASM_X86_EDAC_H

/* ECC atomic, DMA, SMP and interrupt safe scrub function */

static inline void atomic_scrub(void *va, u32 size)
{
	u32 i, *virt_addr = va;

	/*
	 * Very carefully read and write to memory atomically so we
	 * are interrupt, DMA and SMP safe.
	 */
	for (i = 0; i < size / 4; i++, virt_addr++)
		asm volatile("lock; addl $0, %0"::"m" (*virt_addr));
}

#endif /* _ASM_X86_EDAC_H */
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:17 PDT 2016
Sun, Jul 24, 2016  1:39:51 PM
Mon, Jul 25, 2016  8:04:40 PM
Tue, Jul 26, 2016  2:39:03 PM
