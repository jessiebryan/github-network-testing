#ifndef __ASM_MACH_GENERIC_KMALLOC_H
#define __ASM_MACH_GENERIC_KMALLOC_H


#ifndef CONFIG_DMA_COHERENT
/*
 * Total overkill for most systems but need as a safe default.
 * Set this one if any device in the system might do non-coherent DMA.
 */
#define ARCH_DMA_MINALIGN	128
#endif

#endif /* __ASM_MACH_GENERIC_KMALLOC_H */
Tue Jul 19 12:42:37 PDT 2016
Fri Jul 22 15:54:17 PDT 2016
Sun, Jul 24, 2016  3:14:47 PM
Mon, Jul 25, 2016  9:52:51 PM
