#ifndef __LINUX_CRYPTO_ATMEL_H
#define __LINUX_CRYPTO_ATMEL_H

#include <linux/platform_data/dma-atmel.h>

/**
 * struct crypto_dma_data - DMA data for AES/TDES/SHA
 */
struct crypto_dma_data {
	struct at_dma_slave	txdata;
	struct at_dma_slave	rxdata;
};

/**
 * struct crypto_platform_data - board-specific AES/TDES/SHA configuration
 * @dma_slave: DMA slave interface to use in data transfers.
 */
struct crypto_platform_data {
	struct crypto_dma_data	*dma_slave;
};

#endif /* __LINUX_CRYPTO_ATMEL_H */
Tue Jul 19 12:42:20 PDT 2016
Fri Jul 22 15:53:47 PDT 2016
Sun, Jul 24, 2016  3:10:54 PM
Mon, Jul 25, 2016  9:48:28 PM
