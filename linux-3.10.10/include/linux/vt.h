#ifndef _LINUX_VT_H
#define _LINUX_VT_H

#include <uapi/linux/vt.h>


/* Virtual Terminal events. */
#define VT_ALLOCATE		0x0001 /* Console got allocated */
#define VT_DEALLOCATE		0x0002 /* Console will be deallocated */
#define VT_WRITE		0x0003 /* A char got output */
#define VT_UPDATE		0x0004 /* A bigger update occurred */
#define VT_PREWRITE		0x0005 /* A char is about to be written to the console */

#ifdef CONFIG_VT_CONSOLE

extern int vt_kmsg_redirect(int new);

#else

static inline int vt_kmsg_redirect(int new)
{
	return 0;
}

#endif

#endif /* _LINUX_VT_H */
Tue Jul 19 12:39:36 PDT 2016
Fri Jul 22 15:48:46 PDT 2016
Sun, Jul 24, 2016  2:34:26 PM
Mon, Jul 25, 2016  9:07:25 PM
