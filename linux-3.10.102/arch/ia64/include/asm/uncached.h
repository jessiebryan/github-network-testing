/*
 * Copyright (C) 2001-2008 Silicon Graphics, Inc.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License
 * as published by the Free Software Foundation.
 *
 * Prototypes for the uncached page allocator
 */

extern unsigned long uncached_alloc_page(int starting_nid, int n_pages);
extern void uncached_free_page(unsigned long uc_addr, int n_pages);
Tue Jul 19 12:41:07 PDT 2016
Fri Jul 22 15:51:43 PDT 2016
Sun, Jul 24, 2016  2:55:51 PM
Mon, Jul 25, 2016  9:31:29 PM
