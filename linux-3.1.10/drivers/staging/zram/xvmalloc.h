/*
 * xvmalloc memory allocator
 *
 * Copyright (C) 2008, 2009, 2010  Nitin Gupta
 *
 * This code is released using a dual license strategy: BSD/GPL
 * You can choose the licence that better fits your requirements.
 *
 * Released under the terms of 3-clause BSD License
 * Released under the terms of GNU General Public License Version 2.0
 */

#ifndef _XV_MALLOC_H_
#define _XV_MALLOC_H_

#include <linux/types.h>

struct xv_pool;

struct xv_pool *xv_create_pool(void);
void xv_destroy_pool(struct xv_pool *pool);

int xv_malloc(struct xv_pool *pool, u32 size, struct page **page,
			u32 *offset, gfp_t flags);
void xv_free(struct xv_pool *pool, struct page *page, u32 offset);

u32 xv_get_object_size(void *obj);
u64 xv_get_total_size_bytes(struct xv_pool *pool);

#endif
Tue Jul 19 12:33:35 PDT 2016
Fri Jul 22 15:38:14 PDT 2016
Sun, Jul 24, 2016  1:17:13 PM
Mon, Jul 25, 2016  6:24:52 PM
Mon, Jul 25, 2016  7:38:02 PM
Tue, Jul 26, 2016  2:13:56 PM
