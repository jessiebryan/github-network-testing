#ifndef _LINUX_SECUREBITS_H
#define _LINUX_SECUREBITS_H 1

#include <uapi/linux/securebits.h>

#define issecure(X)		(issecure_mask(X) & current_cred_xxx(securebits))
#endif /* !_LINUX_SECUREBITS_H */
Tue Jul 19 12:41:32 PDT 2016
Fri Jul 22 15:52:35 PDT 2016
Sun, Jul 24, 2016  3:01:52 PM
Mon, Jul 25, 2016  9:38:17 PM
