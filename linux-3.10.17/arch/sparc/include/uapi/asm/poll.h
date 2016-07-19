#ifndef __SPARC_POLL_H
#define __SPARC_POLL_H

#define POLLWRNORM	POLLOUT
#define POLLWRBAND	256
#define POLLMSG		512
#define POLLREMOVE	1024
#define POLLRDHUP       2048

#include <asm-generic/poll.h>

#endif
Tue Jul 19 12:45:52 PDT 2016
