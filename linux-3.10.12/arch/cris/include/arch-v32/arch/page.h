#ifndef _ASM_CRIS_ARCH_PAGE_H
#define _ASM_CRIS_ARCH_PAGE_H


#ifdef __KERNEL__

#define PAGE_OFFSET KSEG_C	/* kseg_c is mapped to physical ram. */

/*
 * Macros to convert between physical and virtual addresses. By stripping a
 * selected bit it's possible to convert between KSEG_x and 0x40000000 where the
 * DRAM really resides. DRAM is virtually at 0xc.
 */
#define __pa(x) ((unsigned long)(x) & 0x7fffffff)
#define __va(x) ((void *)((unsigned long)(x) | 0x80000000))

#define VM_STACK_DEFAULT_FLAGS	(VM_READ | VM_WRITE | \
				 VM_MAYREAD | VM_MAYWRITE)

#endif /* __KERNEL__ */

#endif /* _ASM_CRIS_ARCH_PAGE_H */
Tue Jul 19 12:42:33 PDT 2016
Fri Jul 22 15:54:09 PDT 2016
Sun, Jul 24, 2016  3:13:53 PM
Mon, Jul 25, 2016  9:51:51 PM
