/*
 * Copyright (C) 2009 Becky Bruce, Freescale Semiconductor
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 *
 */

#ifndef __ASM_SWIOTLB_H
#define __ASM_SWIOTLB_H

#include <linux/swiotlb.h>

extern struct dma_map_ops swiotlb_dma_ops;

static inline void dma_mark_clean(void *addr, size_t size) {}

extern unsigned int ppc_swiotlb_enable;
int __init swiotlb_setup_bus_notifier(void);

extern void pci_dma_dev_setup_swiotlb(struct pci_dev *pdev);

#endif /* __ASM_SWIOTLB_H */
Tue Jul 19 12:34:00 PDT 2016
Fri Jul 22 15:38:55 PDT 2016
Sun, Jul 24, 2016  1:22:31 PM
Mon, Jul 25, 2016  6:31:12 PM
Mon, Jul 25, 2016  7:44:15 PM
