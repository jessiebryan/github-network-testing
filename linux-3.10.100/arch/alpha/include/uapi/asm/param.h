#ifndef _UAPI_ASM_ALPHA_PARAM_H
#define _UAPI_ASM_ALPHA_PARAM_H

/* ??? Gross.  I don't want to parameterize this, and supposedly the
   hardware ignores reprogramming.  We also need userland buy-in to the 
   change in HZ, since this is visible in the wait4 resources etc.  */

#ifndef __KERNEL__
#define HZ		1024
#endif

#define EXEC_PAGESIZE	8192

#ifndef NOGROUP
#define NOGROUP		(-1)
#endif

#define MAXHOSTNAMELEN	64	/* max length of hostname */


#endif /* _UAPI_ASM_ALPHA_PARAM_H */
Tue Jul 19 12:39:42 PDT 2016
Fri Jul 22 15:48:58 PDT 2016
Sun, Jul 24, 2016  2:35:52 PM
Mon, Jul 25, 2016  9:09:00 PM
