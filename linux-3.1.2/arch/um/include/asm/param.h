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
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:00 PDT 2016
Sun, Jul 24, 2016  1:23:12 PM
