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
Tue Jul 19 12:36:18 PDT 2016
Fri Jul 22 15:42:23 PDT 2016
Sun, Jul 24, 2016  1:47:58 PM
Mon, Jul 25, 2016  8:14:16 PM
