#ifndef _ASM_PARAM_H
#define _ASM_PARAM_H

#ifdef __KERNEL__
#define HZ		CONFIG_HZ	/* Internal kernel timer frequency */
#define USER_HZ		100		/* .. some user interfaces are in "ticks" */
#define CLOCKS_PER_SEC	(USER_HZ)	/* like times() */
#endif

#ifndef HZ
#define HZ 100
#endif

#define EXEC_PAGESIZE	16384

#ifndef NOGROUP
#define NOGROUP		(-1)
#endif

#define MAXHOSTNAMELEN		64	/* max length of hostname */

#endif /* _ASM_PARAM_H */
Tue Jul 19 12:36:09 PDT 2016
Fri Jul 22 15:42:06 PDT 2016
Sun, Jul 24, 2016  1:45:59 PM
