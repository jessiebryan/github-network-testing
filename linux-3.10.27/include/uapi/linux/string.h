#ifndef _UAPI_LINUX_STRING_H_
#define _UAPI_LINUX_STRING_H_

/* We don't want strings.h stuff being used by user stuff by accident */

#ifndef __KERNEL__
#include <string.h>
#endif /* __KERNEL__ */
#endif /* _UAPI_LINUX_STRING_H_ */
Tue Jul 19 12:52:40 PDT 2016
Fri Jul 22 16:13:15 PDT 2016
