/*
 * Copyright (C) 2005 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __MM_ID_H
#define __MM_ID_H

struct mm_id {
	union {
		int mm_fd;
		int pid;
	} u;
	unsigned long stack;
};

#endif
Tue Jul 19 12:41:15 PDT 2016
Fri Jul 22 15:52:01 PDT 2016
Sun, Jul 24, 2016  2:57:46 PM
Mon, Jul 25, 2016  9:33:40 PM
