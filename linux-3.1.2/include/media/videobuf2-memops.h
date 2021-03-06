/*
 * videobuf2-memops.h - generic memory handling routines for videobuf2
 *
 * Copyright (C) 2010 Samsung Electronics
 *
 * Author: Pawel Osciak <pawel@osciak.com>
 *	   Marek Szyprowski <m.szyprowski@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 */

#ifndef _MEDIA_VIDEOBUF2_MEMOPS_H
#define _MEDIA_VIDEOBUF2_MEMOPS_H

#include <media/videobuf2-core.h>

/**
 * vb2_vmarea_handler - common vma refcount tracking handler
 * @refcount:	pointer to refcount entry in the buffer
 * @put:	callback to function that decreases buffer refcount
 * @arg:	argument for @put callback
 */
struct vb2_vmarea_handler {
	atomic_t		*refcount;
	void			(*put)(void *arg);
	void			*arg;
};

extern const struct vm_operations_struct vb2_common_vm_ops;

int vb2_get_contig_userptr(unsigned long vaddr, unsigned long size,
			   struct vm_area_struct **res_vma, dma_addr_t *res_pa);

int vb2_mmap_pfn_range(struct vm_area_struct *vma, unsigned long paddr,
				unsigned long size,
				const struct vm_operations_struct *vm_ops,
				void *priv);

struct vm_area_struct *vb2_get_vma(struct vm_area_struct *vma);
void vb2_put_vma(struct vm_area_struct *vma);


#endif
Tue Jul 19 12:34:33 PDT 2016
Fri Jul 22 15:39:32 PDT 2016
Sun, Jul 24, 2016  1:27:09 PM
Mon, Jul 25, 2016  6:36:46 PM
Mon, Jul 25, 2016  7:49:41 PM
Tue, Jul 26, 2016  2:24:59 PM
