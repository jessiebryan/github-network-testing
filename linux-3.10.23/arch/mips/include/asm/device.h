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
Tue Jul 19 12:49:37 PDT 2016
Fri Jul 22 16:07:22 PDT 2016
Sun, Jul 24, 2016  4:56:10 PM
Mon, Jul 25, 2016 11:45:37 PM
