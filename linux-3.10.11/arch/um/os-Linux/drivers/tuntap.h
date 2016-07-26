/* 
 * Copyright (C) 2001 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __UM_TUNTAP_H
#define __UM_TUNTAP_H

#include <net_user.h>

struct tuntap_data {
	char *dev_name;
	int fixed_config;
	char *gate_addr;
	int fd;
	void *dev;
};

extern const struct net_user_info tuntap_user_info;

#endif
Tue Jul 19 12:41:59 PDT 2016
Fri Jul 22 15:53:16 PDT 2016
Sun, Jul 24, 2016  3:06:59 PM
Mon, Jul 25, 2016  9:44:03 PM
