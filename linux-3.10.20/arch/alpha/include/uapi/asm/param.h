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
Tue Jul 19 12:47:33 PDT 2016
Fri Jul 22 16:03:29 PDT 2016
Sun, Jul 24, 2016  4:26:31 PM
Mon, Jul 25, 2016 11:12:35 PM
