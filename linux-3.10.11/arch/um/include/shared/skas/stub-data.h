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
Tue Jul 19 12:41:59 PDT 2016
Fri Jul 22 15:53:16 PDT 2016
Sun, Jul 24, 2016  3:06:59 PM
Mon, Jul 25, 2016  9:44:03 PM
