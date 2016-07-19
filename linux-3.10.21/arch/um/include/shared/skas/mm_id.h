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
Tue Jul 19 12:48:26 PDT 2016
