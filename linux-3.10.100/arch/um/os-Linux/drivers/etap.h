/* 
 * Copyright (C) 2001 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __DRIVERS_ETAP_H
#define __DRIVERS_ETAP_H

#include <net_user.h>

struct ethertap_data {
	char *dev_name;
	char *gate_addr;
	int data_fd;
	int control_fd;
	void *dev;
};

extern const struct net_user_info ethertap_user_info;

#endif
Tue Jul 19 12:39:57 PDT 2016
Fri Jul 22 15:49:27 PDT 2016
Sun, Jul 24, 2016  2:39:21 PM
Mon, Jul 25, 2016  9:12:53 PM
