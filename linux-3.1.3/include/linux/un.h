#ifndef _LINUX_UN_H
#define _LINUX_UN_H

#define UNIX_PATH_MAX	108

struct sockaddr_un {
	sa_family_t sun_family;	/* AF_UNIX */
	char sun_path[UNIX_PATH_MAX];	/* pathname */
};

#endif /* _LINUX_UN_H */
Tue Jul 19 12:35:25 PDT 2016
Fri Jul 22 15:40:39 PDT 2016
Sun, Jul 24, 2016  1:35:16 PM
Mon, Jul 25, 2016  7:59:15 PM
