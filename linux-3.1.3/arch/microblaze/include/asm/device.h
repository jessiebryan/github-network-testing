/*
 * Arch specific extensions to struct device
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License v2. See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#ifndef _ASM_MICROBLAZE_DEVICE_H
#define _ASM_MICROBLAZE_DEVICE_H

struct device_node;

struct dev_archdata {
	/* DMA operations on that device */
	struct dma_map_ops	*dma_ops;
	void                    *dma_data;
};

struct pdev_archdata {
	u64 dma_mask;
};

#endif /* _ASM_MICROBLAZE_DEVICE_H */


Tue Jul 19 12:34:55 PDT 2016
Fri Jul 22 15:39:55 PDT 2016
Sun, Jul 24, 2016  1:29:57 PM
Mon, Jul 25, 2016  6:40:06 PM
Mon, Jul 25, 2016  7:52:58 PM
Tue, Jul 26, 2016  2:28:06 PM
