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
Tue Jul 19 12:46:30 PDT 2016
Fri Jul 22 16:01:34 PDT 2016
Sun, Jul 24, 2016  4:11:32 PM
Mon, Jul 25, 2016 10:55:59 PM
