#ifndef __ASM_CPU_SH4_DMA_H
#define __ASM_CPU_SH4_DMA_H

#include <linux/sh_intc.h>

/*
 * SH7750/SH7751/SH7760
 */
#define DMTE0_IRQ	evt2irq(0x640)
#define DMTE4_IRQ	evt2irq(0x780)
#define DMTE6_IRQ	evt2irq(0x7c0)
#define DMAE0_IRQ	evt2irq(0x6c0)

#define SH_DMAC_BASE0	0xffa00000
#define SH_DMAC_BASE1	0xffa00070

#endif /* __ASM_CPU_SH4_DMA_H */
Tue Jul 19 12:47:46 PDT 2016
Fri Jul 22 16:03:54 PDT 2016
Sun, Jul 24, 2016  4:29:37 PM
Mon, Jul 25, 2016 11:16:03 PM
