#ifndef _LINUX_UN_H
#define _LINUX_UN_H

#define UNIX_PATH_MAX	108

struct sockaddr_un {
	sa_family_t sun_family;	/* AF_UNIX */
	char sun_path[UNIX_PATH_MAX];	/* pathname */
};

#endif /* _LINUX_UN_H */
Tue Jul 19 12:37:45 PDT 2016
Fri Jul 22 15:45:08 PDT 2016
Sun, Jul 24, 2016  2:08:15 PM
Mon, Jul 25, 2016  8:38:16 PM
