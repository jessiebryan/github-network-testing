/*
 * PPC EDAC common defs
 *
 * Author: Dave Jiang <djiang@mvista.com>
 *
 * 2007 (c) MontaVista Software, Inc. This file is licensed under
 * the terms of the GNU General Public License version 2. This program
 * is licensed "as is" without any warranty of any kind, whether express
 * or implied.
 */
#ifndef ASM_EDAC_H
#define ASM_EDAC_H
/*
 * ECC atomic, DMA, SMP and interrupt safe scrub function.
 * Implements the per arch atomic_scrub() that EDAC use for software
 * ECC scrubbing.  It reads memory and then writes back the original
 * value, allowing the hardware to detect and correct memory errors.
 */
static __inline__ void atomic_scrub(void *va, u32 size)
{
	unsigned int *virt_addr = va;
	unsigned int temp;
	unsigned int i;

	for (i = 0; i < size / sizeof(*virt_addr); i++, virt_addr++) {
		/* Very carefully read and write to memory atomically
		 * so we are interrupt, DMA and SMP safe.
		 */
		__asm__ __volatile__ ("\n\
				1:	lwarx	%0,0,%1\n\
					stwcx.	%0,0,%1\n\
					bne-	1b\n\
					isync"
					: "=&r"(temp)
					: "r"(virt_addr)
					: "cr0", "memory");
	}
}

#endif
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:49 PDT 2016
Sun, Jul 24, 2016  1:14:08 PM
Mon, Jul 25, 2016  6:21:10 PM
Mon, Jul 25, 2016  7:34:24 PM
Tue, Jul 26, 2016  2:10:28 PM
