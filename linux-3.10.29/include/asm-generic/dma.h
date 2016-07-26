#ifndef __ASM_GENERIC_DMA_H
#define __ASM_GENERIC_DMA_H
/*
 * This file traditionally describes the i8237 PC style DMA controller.
 * Most architectures don't have these any more and can get the minimal
 * implementation from kernel/dma.c by not defining MAX_DMA_CHANNELS.
 *
 * Some code relies on seeing MAX_DMA_ADDRESS though.
 */
#define MAX_DMA_ADDRESS PAGE_OFFSET

extern int request_dma(unsigned int dmanr, const char *device_id);
extern void free_dma(unsigned int dmanr);

#endif /* __ASM_GENERIC_DMA_H */
Tue Jul 19 12:53:50 PDT 2016
Fri Jul 22 16:15:31 PDT 2016
Sun, Jul 24, 2016  5:56:45 PM
Tue, Jul 26, 2016 12:52:26 AM
