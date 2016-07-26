#ifndef _UAPI_LINUX_KERNEL_H
#define _UAPI_LINUX_KERNEL_H

#include <linux/sysinfo.h>

/*
 * 'kernel.h' contains some often-used function prototypes etc
 */
#define __ALIGN_KERNEL(x, a)		__ALIGN_KERNEL_MASK(x, (typeof(x))(a) - 1)
#define __ALIGN_KERNEL_MASK(x, mask)	(((x) + (mask)) & ~(mask))


#endif /* _UAPI_LINUX_KERNEL_H */
Tue Jul 19 12:43:03 PDT 2016
Fri Jul 22 15:55:04 PDT 2016
Sun, Jul 24, 2016  3:21:02 PM
Mon, Jul 25, 2016  9:59:49 PM
