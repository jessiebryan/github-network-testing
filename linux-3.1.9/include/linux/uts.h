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
Tue Jul 19 12:38:22 PDT 2016
Fri Jul 22 15:46:15 PDT 2016
Sun, Jul 24, 2016  2:16:31 PM
Mon, Jul 25, 2016  8:47:27 PM
