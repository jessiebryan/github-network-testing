#ifndef _ASM_ALPHA_PARAM_H
#define _ASM_ALPHA_PARAM_H

/* ??? Gross.  I don't want to parameterize this, and supposedly the
   hardware ignores reprogramming.  We also need userland buy-in to the 
   change in HZ, since this is visible in the wait4 resources etc.  */

#ifdef __KERNEL__
#define HZ		CONFIG_HZ
#define USER_HZ		HZ
#else
#define HZ		1024
#endif

#define EXEC_PAGESIZE	8192

#ifndef NOGROUP
#define NOGROUP		(-1)
#endif

#define MAXHOSTNAMELEN	64	/* max length of hostname */

#ifdef __KERNEL__
# define CLOCKS_PER_SEC	HZ	/* frequency at which times() counts */
#endif

#endif /* _ASM_ALPHA_PARAM_H */
Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:47 PDT 2016
Sun, Jul 24, 2016  1:36:13 PM
Mon, Jul 25, 2016  8:00:23 PM
