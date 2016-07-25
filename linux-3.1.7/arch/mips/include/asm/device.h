/*
 * Arch specific extensions to struct device
 *
 * This file is released under the GPLv2
 */
#ifndef _ASM_MIPS_DEVICE_H
#define _ASM_MIPS_DEVICE_H

struct dma_map_ops;

struct dev_archdata {
	/* DMA operations on that device */
	struct dma_map_ops *dma_ops;
};

struct pdev_archdata {
};

#endif /* _ASM_MIPS_DEVICE_H*/
Tue Jul 19 12:36:45 PDT 2016
Fri Jul 22 15:43:19 PDT 2016
Sun, Jul 24, 2016  1:54:47 PM
