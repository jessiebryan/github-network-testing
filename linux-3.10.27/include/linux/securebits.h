#ifndef _LINUX_SECUREBITS_H
#define _LINUX_SECUREBITS_H 1

#include <uapi/linux/securebits.h>

#define issecure(X)		(issecure_mask(X) & current_cred_xxx(securebits))
#endif /* !_LINUX_SECUREBITS_H */
Tue Jul 19 12:52:36 PDT 2016
Fri Jul 22 16:13:07 PDT 2016
Sun, Jul 24, 2016  5:39:05 PM
Tue, Jul 26, 2016 12:32:57 AM
