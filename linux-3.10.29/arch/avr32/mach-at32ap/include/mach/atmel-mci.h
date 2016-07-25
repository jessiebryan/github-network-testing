#ifndef __MACH_ATMEL_MCI_H
#define __MACH_ATMEL_MCI_H

#include <linux/dw_dmac.h>

/**
 * struct mci_dma_data - DMA data for MCI interface
 */
struct mci_dma_data {
	struct dw_dma_slave	sdata;
};

/* accessor macros */
#define	slave_data_ptr(s)	(&(s)->sdata)
#define find_slave_dev(s)	((s)->sdata.dma_dev)

#endif /* __MACH_ATMEL_MCI_H */
Tue Jul 19 12:53:25 PDT 2016
Fri Jul 22 16:14:44 PDT 2016
Sun, Jul 24, 2016  5:50:59 PM
