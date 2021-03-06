/*
 * Copyright (C) 2006 Atmark Techno, Inc.
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#ifndef _ASM_MICROBLAZE_DMA_H
#define _ASM_MICROBLAZE_DMA_H

#ifndef CONFIG_MMU
/* we don't have dma address limit. define it as zero to be
 * unlimited. */
#define MAX_DMA_ADDRESS		(0)
#else
/* Virtual address corresponding to last available physical memory address.  */
#define MAX_DMA_ADDRESS (CONFIG_KERNEL_START + memory_size - 1)
#endif

#ifdef CONFIG_PCI
extern int isa_dma_bridge_buggy;
#else
#define isa_dma_bridge_buggy     (0)
#endif

#endif /* _ASM_MICROBLAZE_DMA_H */
Tue Jul 19 12:33:20 PDT 2016
Fri Jul 22 15:37:43 PDT 2016
Sun, Jul 24, 2016  1:13:27 PM
Mon, Jul 25, 2016  6:20:21 PM
Mon, Jul 25, 2016  7:33:36 PM
Tue, Jul 26, 2016  2:09:43 PM
