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
Tue Jul 19 12:51:19 PDT 2016
Fri Jul 22 16:10:36 PDT 2016
Sun, Jul 24, 2016  5:20:39 PM
Tue, Jul 26, 2016 12:12:36 AM
