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
Tue Jul 19 12:37:26 PDT 2016
Fri Jul 22 15:44:37 PDT 2016
Sun, Jul 24, 2016  2:04:28 PM
Mon, Jul 25, 2016  8:33:48 PM
