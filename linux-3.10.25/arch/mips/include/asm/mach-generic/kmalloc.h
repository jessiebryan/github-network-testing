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
Tue Jul 19 12:50:55 PDT 2016
Fri Jul 22 16:09:49 PDT 2016
Sun, Jul 24, 2016  5:14:54 PM
Tue, Jul 26, 2016 12:06:15 AM
