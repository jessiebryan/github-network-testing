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
Tue Jul 19 12:52:10 PDT 2016
Fri Jul 22 16:12:19 PDT 2016
Sun, Jul 24, 2016  5:33:01 PM
Tue, Jul 26, 2016 12:26:15 AM
