#ifndef __ASM_CPU_SH4_DMA_H
#define __ASM_CPU_SH4_DMA_H

/* SH7751/7760/7780 DMA IRQ sources */

#ifdef CONFIG_CPU_SH4A

#include <cpu/dma-sh4a.h>

#else /* CONFIG_CPU_SH4A */
/*
 * SH7750/SH7751/SH7760
 */
#define DMTE0_IRQ	34
#define DMTE4_IRQ	44
#define DMTE6_IRQ	46
#define DMAE0_IRQ	38

#define SH_DMAC_BASE0	0xffa00000
#define SH_DMAC_BASE1	0xffa00070
/* Definitions for the SuperH DMAC */
#define TM_BURST	0x00000080
#define TS_8		0x00000010
#define TS_16		0x00000020
#define TS_32		0x00000030
#define TS_64		0x00000000

#define DMAOR_COD	0x00000008

#endif

#endif /* __ASM_CPU_SH4_DMA_H */
Tue Jul 19 12:36:16 PDT 2016
Fri Jul 22 15:42:20 PDT 2016
Sun, Jul 24, 2016  1:47:37 PM
Mon, Jul 25, 2016  8:13:52 PM
