#ifndef _UAPI_LINUX_WAIT_H
#define _UAPI_LINUX_WAIT_H

#define WNOHANG		0x00000001
#define WUNTRACED	0x00000002
#define WSTOPPED	WUNTRACED
#define WEXITED		0x00000004
#define WCONTINUED	0x00000008
#define WNOWAIT		0x01000000	/* Don't reap, just poll status.  */

#define __WNOTHREAD	0x20000000	/* Don't wait on children of other threads in this group */
#define __WALL		0x40000000	/* Wait on all children, regardless of type */
#define __WCLONE	0x80000000	/* Wait only on non-SIGCHLD children */

/* First argument to waitid: */
#define P_ALL		0
#define P_PID		1
#define P_PGID		2


#endif /* _UAPI_LINUX_WAIT_H */
Tue Jul 19 12:40:57 PDT 2016
Fri Jul 22 15:51:24 PDT 2016
Sun, Jul 24, 2016  2:53:36 PM
Mon, Jul 25, 2016  9:28:56 PM
