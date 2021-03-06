/*
 * videobuf2-dma-contig.h - DMA contig memory allocator for videobuf2
 *
 * Copyright (C) 2010 Samsung Electronics
 *
 * Author: Pawel Osciak <pawel@osciak.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 */

#ifndef _MEDIA_VIDEOBUF2_DMA_CONTIG_H
#define _MEDIA_VIDEOBUF2_DMA_CONTIG_H

#include <media/videobuf2-core.h>
#include <linux/dma-mapping.h>

static inline dma_addr_t
vb2_dma_contig_plane_dma_addr(struct vb2_buffer *vb, unsigned int plane_no)
{
	dma_addr_t *addr = vb2_plane_cookie(vb, plane_no);

	return *addr;
}

void *vb2_dma_contig_init_ctx(struct device *dev);
void vb2_dma_contig_cleanup_ctx(void *alloc_ctx);

extern const struct vb2_mem_ops vb2_dma_contig_memops;

#endif
Tue Jul 19 12:52:37 PDT 2016
Fri Jul 22 16:13:09 PDT 2016
Sun, Jul 24, 2016  5:39:23 PM
Tue, Jul 26, 2016 12:33:16 AM
