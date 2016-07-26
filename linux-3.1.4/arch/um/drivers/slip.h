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
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:16 PDT 2016
Sun, Jul 24, 2016  1:39:40 PM
Mon, Jul 25, 2016  8:04:28 PM
Tue, Jul 26, 2016  2:38:51 PM
