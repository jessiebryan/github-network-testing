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
Tue Jul 19 12:50:40 PDT 2016
Fri Jul 22 16:09:21 PDT 2016
Sun, Jul 24, 2016  5:11:21 PM
Tue, Jul 26, 2016 12:02:20 AM
