/* atmclip.h - Classical IP over ATM */
 
/* Written 1995-1998 by Werner Almesberger, EPFL LRC/ICA */
 

#ifndef LINUX_ATMCLIP_H
#define LINUX_ATMCLIP_H

#include <linux/sockios.h>
#include <linux/atmioc.h>


#define RFC1483LLC_LEN	8		/* LLC+OUI+PID = 8 */
#define RFC1626_MTU	9180		/* RFC1626 default MTU */

#define CLIP_DEFAULT_IDLETIMER 1200	/* 20 minutes, see RFC1755 */
#define CLIP_CHECK_INTERVAL	 10	/* check every ten seconds */

#define	SIOCMKCLIP	_IO('a',ATMIOC_CLIP)	/* create IP interface */

#endif
Tue Jul 19 12:50:41 PDT 2016
Fri Jul 22 16:09:24 PDT 2016
Sun, Jul 24, 2016  5:11:48 PM
Tue, Jul 26, 2016 12:02:49 AM
