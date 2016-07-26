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
Tue Jul 19 12:46:17 PDT 2016
Fri Jul 22 16:01:07 PDT 2016
Sun, Jul 24, 2016  4:08:16 PM
Mon, Jul 25, 2016 10:52:20 PM
