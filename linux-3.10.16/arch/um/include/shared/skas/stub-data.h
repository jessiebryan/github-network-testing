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
Tue Jul 19 12:45:17 PDT 2016
Fri Jul 22 15:59:12 PDT 2016
Sun, Jul 24, 2016  3:53:06 PM
Mon, Jul 25, 2016 10:35:28 PM
