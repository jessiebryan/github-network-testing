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
Tue Jul 19 12:51:40 PDT 2016
Fri Jul 22 16:11:17 PDT 2016
Sun, Jul 24, 2016  5:25:38 PM
Tue, Jul 26, 2016 12:18:07 AM
