#ifndef _UAPI_LINUX_KERNEL_H
#define _UAPI_LINUX_KERNEL_H

#include <linux/sysinfo.h>

/*
 * 'kernel.h' contains some often-used function prototypes etc
 */
#define __ALIGN_KERNEL(x, a)		__ALIGN_KERNEL_MASK(x, (typeof(x))(a) - 1)
#define __ALIGN_KERNEL_MASK(x, mask)	(((x) + (mask)) & ~(mask))


#endif /* _UAPI_LINUX_KERNEL_H */
Tue Jul 19 12:53:18 PDT 2016
Fri Jul 22 16:14:30 PDT 2016
Sun, Jul 24, 2016  5:49:10 PM
Tue, Jul 26, 2016 12:44:02 AM
