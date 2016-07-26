#ifndef __ASM_GENERIC_POLL_H
#define __ASM_GENERIC_POLL_H

/* These are specified by iBCS2 */
#define POLLIN		0x0001
#define POLLPRI		0x0002
#define POLLOUT		0x0004
#define POLLERR		0x0008
#define POLLHUP		0x0010
#define POLLNVAL	0x0020

/* The rest seem to be more-or-less nonstandard. Check them! */
#define POLLRDNORM	0x0040
#define POLLRDBAND	0x0080
#ifndef POLLWRNORM
#define POLLWRNORM	0x0100
#endif
#ifndef POLLWRBAND
#define POLLWRBAND	0x0200
#endif
#ifndef POLLMSG
#define POLLMSG		0x0400
#endif
#ifndef POLLREMOVE
#define POLLREMOVE	0x1000
#endif
#ifndef POLLRDHUP
#define POLLRDHUP       0x2000
#endif

struct pollfd {
	int fd;
	short events;
	short revents;
};

#endif	/* __ASM_GENERIC_POLL_H */
Tue Jul 19 12:34:23 PDT 2016
Fri Jul 22 15:39:23 PDT 2016
Sun, Jul 24, 2016  1:26:02 PM
Mon, Jul 25, 2016  6:35:25 PM
Mon, Jul 25, 2016  7:48:22 PM
Tue, Jul 26, 2016  2:23:45 PM
