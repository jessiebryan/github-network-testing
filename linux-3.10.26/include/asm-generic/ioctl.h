#ifndef _ASM_GENERIC_IOCTL_H
#define _ASM_GENERIC_IOCTL_H

#include <uapi/asm-generic/ioctl.h>

/* provoke compile error for invalid uses of size argument */
extern unsigned int __invalid_size_argument_for_IOC;
#define _IOC_TYPECHECK(t) \
	((sizeof(t) == sizeof(t[1]) && \
	  sizeof(t) < (1 << _IOC_SIZEBITS)) ? \
	  sizeof(t) : __invalid_size_argument_for_IOC)
#endif /* _ASM_GENERIC_IOCTL_H */
Tue Jul 19 12:51:53 PDT 2016
Fri Jul 22 16:11:45 PDT 2016
Sun, Jul 24, 2016  5:28:48 PM
Tue, Jul 26, 2016 12:21:35 AM
