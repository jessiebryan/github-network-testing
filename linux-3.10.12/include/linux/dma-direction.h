#ifndef _LINUX_DMA_DIRECTION_H
#define _LINUX_DMA_DIRECTION_H
/*
 * These definitions mirror those in pci.h, so they can be used
 * interchangeably with their PCI_ counterparts.
 */
enum dma_data_direction {
	DMA_BIDIRECTIONAL = 0,
	DMA_TO_DEVICE = 1,
	DMA_FROM_DEVICE = 2,
	DMA_NONE = 3,
};
#endif
Tue Jul 19 12:42:58 PDT 2016
Fri Jul 22 15:54:53 PDT 2016
Sun, Jul 24, 2016  3:19:34 PM
Mon, Jul 25, 2016  9:58:12 PM
