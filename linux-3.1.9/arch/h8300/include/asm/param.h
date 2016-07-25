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
Tue Jul 19 12:37:57 PDT 2016
Fri Jul 22 15:45:28 PDT 2016
Sun, Jul 24, 2016  2:10:47 PM
