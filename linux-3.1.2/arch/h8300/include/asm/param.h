#ifndef _H8300_PARAM_H
#define _H8300_PARAM_H

#ifdef __KERNEL__
#define HZ		CONFIG_HZ
#define	USER_HZ		HZ
#define	CLOCKS_PER_SEC	(USER_HZ)
#else
#define HZ		100
#endif

#define EXEC_PAGESIZE	4096

#ifndef NOGROUP
#define NOGROUP		(-1)
#endif

#define MAXHOSTNAMELEN	64	/* max length of hostname */

#endif /* _H8300_PARAM_H */
Tue Jul 19 12:33:55 PDT 2016
Fri Jul 22 15:38:46 PDT 2016
Sun, Jul 24, 2016  1:21:18 PM
Mon, Jul 25, 2016  6:29:45 PM
Mon, Jul 25, 2016  7:42:50 PM
Tue, Jul 26, 2016  2:18:32 PM
