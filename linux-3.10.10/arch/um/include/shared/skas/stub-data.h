/*
 * Copyright (C) 2005 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __STUB_DATA_H
#define __STUB_DATA_H

#include <sys/time.h>

struct stub_data {
	long offset;
	int fd;
	struct itimerval timer;
	long err;
};

#endif
Tue Jul 19 12:39:18 PDT 2016
Fri Jul 22 15:48:10 PDT 2016
Sun, Jul 24, 2016  2:30:08 PM
Mon, Jul 25, 2016  9:02:39 PM
