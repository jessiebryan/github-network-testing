#ifndef _LINUX_SECUREBITS_H
#define _LINUX_SECUREBITS_H 1

#include <uapi/linux/securebits.h>

#define issecure(X)		(issecure_mask(X) & current_cred_xxx(securebits))
#endif /* !_LINUX_SECUREBITS_H */
Tue Jul 19 12:51:18 PDT 2016
Fri Jul 22 16:10:35 PDT 2016
Sun, Jul 24, 2016  5:20:28 PM
Tue, Jul 26, 2016 12:12:25 AM
