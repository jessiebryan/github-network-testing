#ifndef __MACH_ATMEL_MCI_H
#define __MACH_ATMEL_MCI_H

#include <mach/at_hdmac.h>

/**
 * struct mci_dma_data - DMA data for MCI interface
 */
struct mci_dma_data {
	struct at_dma_slave	sdata;
};

/* accessor macros */
#define	slave_data_ptr(s)	(&(s)->sdata)
#define find_slave_dev(s)	((s)->sdata.dma_dev)

#define	setup_dma_addr(s, t, r)	do {		\
	if (s) {				\
		(s)->sdata.tx_reg = (t);	\
		(s)->sdata.rx_reg = (r);	\
	}					\
} while (0)

#endif /* __MACH_ATMEL_MCI_H */
Tue Jul 19 12:37:12 PDT 2016
Fri Jul 22 15:44:10 PDT 2016
Sun, Jul 24, 2016  2:01:09 PM
Mon, Jul 25, 2016  8:29:50 PM
