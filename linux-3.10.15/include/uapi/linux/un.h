#ifndef _LINUX_UN_H
#define _LINUX_UN_H

#include <linux/socket.h>

#define UNIX_PATH_MAX	108

struct sockaddr_un {
	__kernel_sa_family_t sun_family; /* AF_UNIX */
	char sun_path[UNIX_PATH_MAX];	/* pathname */
};

#endif /* _LINUX_UN_H */
Tue Jul 19 12:45:00 PDT 2016
Fri Jul 22 15:58:39 PDT 2016
Sun, Jul 24, 2016  3:48:54 PM
Mon, Jul 25, 2016 10:30:49 PM
