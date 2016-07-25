#ifndef _LINUX_SECUREBITS_H
#define _LINUX_SECUREBITS_H 1

#include <uapi/linux/securebits.h>

#define issecure(X)		(issecure_mask(X) & current_cred_xxx(securebits))
#endif /* !_LINUX_SECUREBITS_H */
Tue Jul 19 12:53:15 PDT 2016
Fri Jul 22 16:14:23 PDT 2016
Sun, Jul 24, 2016  5:48:25 PM
