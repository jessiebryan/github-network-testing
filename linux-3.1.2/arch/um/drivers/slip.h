#ifndef __UM_SLIP_H
#define __UM_SLIP_H

#include "slip_common.h"

struct slip_data {
	void *dev;
	char name[sizeof("slnnnnn\0")];
	char *addr;
	char *gate_addr;
	int slave;
	struct slip_proto slip;
};

extern const struct net_user_info slip_user_info;

extern int slip_user_read(int fd, void *buf, int len, struct slip_data *pri);
extern int slip_user_write(int fd, void *buf, int len, struct slip_data *pri);

#endif
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:00 PDT 2016
Sun, Jul 24, 2016  1:23:10 PM
Mon, Jul 25, 2016  6:31:59 PM
