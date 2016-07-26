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
Tue Jul 19 12:39:00 PDT 2016
Fri Jul 22 15:47:32 PDT 2016
Sun, Jul 24, 2016  2:25:40 PM
Mon, Jul 25, 2016  8:57:39 PM
