#ifndef __ASM_MACH_IP32_KMALLOC_H
#define __ASM_MACH_IP32_KMALLOC_H


#if defined(CONFIG_CPU_R5000) || defined(CONFIG_CPU_RM7000)
#define ARCH_DMA_MINALIGN	32
#else
#define ARCH_DMA_MINALIGN	128
#endif

#endif /* __ASM_MACH_IP32_KMALLOC_H */
Tue Jul 19 12:45:11 PDT 2016
Fri Jul 22 15:59:01 PDT 2016
Sun, Jul 24, 2016  3:51:41 PM
Mon, Jul 25, 2016 10:33:54 PM
