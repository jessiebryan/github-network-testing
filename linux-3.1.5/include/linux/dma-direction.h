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
Tue Jul 19 12:36:30 PDT 2016
Fri Jul 22 15:42:48 PDT 2016
Sun, Jul 24, 2016  1:51:00 PM
Mon, Jul 25, 2016  8:17:48 PM
