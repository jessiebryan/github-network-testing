#ifndef _UAPI_LINUX_KDEV_T_H
#define _UAPI_LINUX_KDEV_T_H
#ifndef __KERNEL__

/*
Some programs want their definitions of MAJOR and MINOR and MKDEV
from the kernel sources. These must be the externally visible ones.
*/
#define MAJOR(dev)	((dev)>>8)
#define MINOR(dev)	((dev) & 0xff)
#define MKDEV(ma,mi)	((ma)<<8 | (mi))
#endif /* __KERNEL__ */
#endif /* _UAPI_LINUX_KDEV_T_H */
Tue Jul 19 12:46:51 PDT 2016
Fri Jul 22 16:02:11 PDT 2016
Sun, Jul 24, 2016  4:16:22 PM
Mon, Jul 25, 2016 11:01:21 PM
