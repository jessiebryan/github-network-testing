/* 
 * Copyright (C) 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#include "net_user.h"

struct pcap_data {
	char *host_if;
	int promisc;
	int optimize;
	char *filter;
	void *compiled;
	void *pcap;
	void *dev;
};

extern const struct net_user_info pcap_user_info;

extern int pcap_user_read(int fd, void *buf, int len, struct pcap_data *pri);

Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:55 PDT 2016
Sun, Jul 24, 2016  1:14:55 PM
Mon, Jul 25, 2016  6:22:06 PM
Mon, Jul 25, 2016  7:35:19 PM
Tue, Jul 26, 2016  2:11:20 PM
