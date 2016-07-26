/*
 * Copyright (C) 2001 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __DAEMON_H__
#define __DAEMON_H__

#include "net_user.h"

#define SWITCH_VERSION 3

struct daemon_data {
	char *sock_type;
	char *ctl_sock;
	void *ctl_addr;
	void *data_addr;
	void *local_addr;
	int fd;
	int control;
	void *dev;
};

extern const struct net_user_info daemon_user_info;

extern int daemon_user_write(int fd, void *buf, int len,
			     struct daemon_data *pri);

#endif
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:16 PDT 2016
Sun, Jul 24, 2016  1:39:40 PM
Mon, Jul 25, 2016  8:04:27 PM
Tue, Jul 26, 2016  2:38:51 PM
