#ifndef _H8300_DMA_H
#define _H8300_DMA_H 
 

/*
 * Set number of channels of DMA on ColdFire for different implementations.
 */
#define MAX_DMA_CHANNELS 0
#define MAX_DMA_ADDRESS PAGE_OFFSET

/* These are in kernel/dma.c: */
extern int request_dma(unsigned int dmanr, const char *device_id);	/* reserve a DMA channel */
extern void free_dma(unsigned int dmanr);	/* release it again */
 
#endif /* _H8300_DMA_H */
Tue Jul 19 12:37:57 PDT 2016
Fri Jul 22 15:45:28 PDT 2016
Sun, Jul 24, 2016  2:10:46 PM
Mon, Jul 25, 2016  8:41:05 PM
