/* 
 * Copyright (C) 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#include <net_user.h>

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

Tue Jul 19 12:44:39 PDT 2016
Fri Jul 22 15:58:00 PDT 2016
Sun, Jul 24, 2016  3:43:50 PM
Mon, Jul 25, 2016 10:25:10 PM
