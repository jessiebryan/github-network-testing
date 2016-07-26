#ifndef _LINUX_UTS_H
#define _LINUX_UTS_H

/*
 * Defines for what uname() should return 
 */
#ifndef UTS_SYSNAME
#define UTS_SYSNAME "Linux"
#endif

#ifndef UTS_NODENAME
#define UTS_NODENAME CONFIG_DEFAULT_HOSTNAME /* set by sethostname() */
#endif

#ifndef UTS_DOMAINNAME
#define UTS_DOMAINNAME "(none)"	/* set by setdomainname() */
#endif

#endif
Tue Jul 19 12:48:05 PDT 2016
Fri Jul 22 16:04:29 PDT 2016
Sun, Jul 24, 2016  4:34:17 PM
Mon, Jul 25, 2016 11:21:13 PM
