#ifndef _LINUX_SECUREBITS_H
#define _LINUX_SECUREBITS_H 1

#include <uapi/linux/securebits.h>

#define issecure(X)		(issecure_mask(X) & current_cred_xxx(securebits))
#endif /* !_LINUX_SECUREBITS_H */
Tue Jul 19 12:50:00 PDT 2016
Fri Jul 22 16:08:06 PDT 2016
Sun, Jul 24, 2016  5:01:49 PM
Mon, Jul 25, 2016 11:51:51 PM
