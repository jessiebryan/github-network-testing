/*
 * Copyright (C) 2003 Jeff Dike (jdike@addtoit.com)
 * Licensed under the GPL
 */

#ifndef __MEM_KERN_H__
#define __MEM_KERN_H__

#include "linux/list.h"
#include "linux/types.h"

struct remapper {
	struct list_head list;
	int (*proc)(int, unsigned long, int, __u64);
};

extern void register_remapper(struct remapper *info);

#endif

Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:16 PDT 2016
Sun, Jul 24, 2016  1:39:43 PM
Mon, Jul 25, 2016  8:04:31 PM
