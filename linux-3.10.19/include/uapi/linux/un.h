#ifndef _LINUX_UN_H
#define _LINUX_UN_H

#include <linux/socket.h>

#define UNIX_PATH_MAX	108

struct sockaddr_un {
	__kernel_sa_family_t sun_family; /* AF_UNIX */
	char sun_path[UNIX_PATH_MAX];	/* pathname */
};

#endif /* _LINUX_UN_H */
Tue Jul 19 12:47:30 PDT 2016
Fri Jul 22 16:03:23 PDT 2016
Sun, Jul 24, 2016  4:25:48 PM
Mon, Jul 25, 2016 11:11:48 PM
