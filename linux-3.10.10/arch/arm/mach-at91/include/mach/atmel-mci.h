#ifndef __MACH_ATMEL_MCI_H
#define __MACH_ATMEL_MCI_H

#include <linux/platform_data/dma-atmel.h>

/**
 * struct mci_dma_data - DMA data for MCI interface
 */
struct mci_dma_data {
	struct at_dma_slave	sdata;
};

/* accessor macros */
#define	slave_data_ptr(s)	(&(s)->sdata)
#define find_slave_dev(s)	((s)->sdata.dma_dev)

#endif /* __MACH_ATMEL_MCI_H */
Tue Jul 19 12:39:05 PDT 2016
Fri Jul 22 15:47:41 PDT 2016
Sun, Jul 24, 2016  2:26:53 PM
Mon, Jul 25, 2016  8:59:00 PM
