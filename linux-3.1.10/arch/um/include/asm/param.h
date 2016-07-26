#ifndef _UM_PARAM_H
#define _UM_PARAM_H

#define EXEC_PAGESIZE   4096

#ifndef NOGROUP
#define NOGROUP         (-1)
#endif

#define MAXHOSTNAMELEN  64      /* max length of hostname */

#ifdef __KERNEL__
#define HZ CONFIG_HZ
#define USER_HZ	100	   /* .. some user interfaces are in "ticks" */
#define CLOCKS_PER_SEC (USER_HZ)  /* frequency at which times() counts */
#else
#define HZ 100
#endif

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:14:56 PM
Mon, Jul 25, 2016  6:22:08 PM
