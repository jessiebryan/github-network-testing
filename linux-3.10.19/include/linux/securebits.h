#ifndef _LINUX_SECUREBITS_H
#define _LINUX_SECUREBITS_H 1

#include <uapi/linux/securebits.h>

#define issecure(X)		(issecure_mask(X) & current_cred_xxx(securebits))
#endif /* !_LINUX_SECUREBITS_H */
Tue Jul 19 12:47:26 PDT 2016
Fri Jul 22 16:03:16 PDT 2016
Sun, Jul 24, 2016  4:24:52 PM
Mon, Jul 25, 2016 11:10:46 PM
