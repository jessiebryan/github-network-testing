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

Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:00 PDT 2016
Sun, Jul 24, 2016  1:23:10 PM
Mon, Jul 25, 2016  6:31:59 PM
Mon, Jul 25, 2016  7:45:01 PM
