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
Tue Jul 19 12:47:09 PDT 2016
Fri Jul 22 16:02:45 PDT 2016
Sun, Jul 24, 2016  4:20:44 PM
Mon, Jul 25, 2016 11:06:13 PM
