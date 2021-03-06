#ifndef __ASM_GENERIC_PARAM_H
#define __ASM_GENERIC_PARAM_H

#ifdef __KERNEL__
# define HZ		CONFIG_HZ	/* Internal kernel timer frequency */
# define USER_HZ	100		/* some user interfaces are */
# define CLOCKS_PER_SEC	(USER_HZ)       /* in "ticks" like times() */
#endif

#ifndef HZ
#define HZ 100
#endif

#ifndef EXEC_PAGESIZE
#define EXEC_PAGESIZE	4096
#endif

#ifndef NOGROUP
#define NOGROUP		(-1)
#endif

#define MAXHOSTNAMELEN	64	/* max length of hostname */

#endif /* __ASM_GENERIC_PARAM_H */
Tue Jul 19 12:37:40 PDT 2016
Fri Jul 22 15:45:00 PDT 2016
Sun, Jul 24, 2016  2:07:15 PM
Mon, Jul 25, 2016  8:37:09 PM
