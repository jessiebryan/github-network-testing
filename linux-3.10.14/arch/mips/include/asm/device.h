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
Tue Jul 19 12:43:54 PDT 2016
Fri Jul 22 15:56:37 PDT 2016
Sun, Jul 24, 2016  3:33:07 PM
Mon, Jul 25, 2016 10:13:15 PM
