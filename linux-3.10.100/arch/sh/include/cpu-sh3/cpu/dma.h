#ifndef __ASM_CPU_SH3_DMA_H
#define __ASM_CPU_SH3_DMA_H

#include <linux/sh_intc.h>

#if defined(CONFIG_CPU_SUBTYPE_SH7720) || \
    defined(CONFIG_CPU_SUBTYPE_SH7721) || \
    defined(CONFIG_CPU_SUBTYPE_SH7710) || \
    defined(CONFIG_CPU_SUBTYPE_SH7712)
#define SH_DMAC_BASE0	0xa4010020
#else /* SH7705/06/07/09 */
#define SH_DMAC_BASE0	0xa4000020
#endif

#define DMTE0_IRQ	evt2irq(0x800)
#define DMTE4_IRQ	evt2irq(0xb80)

#endif /* __ASM_CPU_SH3_DMA_H */
Tue Jul 19 12:39:55 PDT 2016
Fri Jul 22 15:49:24 PDT 2016
Sun, Jul 24, 2016  2:38:58 PM
Mon, Jul 25, 2016  9:12:27 PM
