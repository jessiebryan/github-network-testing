/*
 * videobuf2-dma-sg.h - DMA scatter/gather memory allocator for videobuf2
 *
 * Copyright (C) 2010 Samsung Electronics
 *
 * Author: Andrzej Pietrasiewicz <andrzej.p@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 */

#ifndef _MEDIA_VIDEOBUF2_DMA_SG_H
#define _MEDIA_VIDEOBUF2_DMA_SG_H

#include <media/videobuf2-core.h>

struct vb2_dma_sg_desc {
	unsigned long		size;
	unsigned int		num_pages;
	struct scatterlist	*sglist;
};

static inline struct vb2_dma_sg_desc *vb2_dma_sg_plane_desc(
		struct vb2_buffer *vb, unsigned int plane_no)
{
	return (struct vb2_dma_sg_desc *)vb2_plane_cookie(vb, plane_no);
}

extern const struct vb2_mem_ops vb2_dma_sg_memops;

#endif
Tue Jul 19 12:34:33 PDT 2016
Fri Jul 22 15:39:32 PDT 2016
Sun, Jul 24, 2016  1:27:09 PM
Mon, Jul 25, 2016  6:36:46 PM
Mon, Jul 25, 2016  7:49:41 PM
Tue, Jul 26, 2016  2:24:59 PM
