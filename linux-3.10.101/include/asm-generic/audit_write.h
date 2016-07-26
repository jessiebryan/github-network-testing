#include <asm-generic/audit_dir_write.h>
__NR_acct,
#ifdef __NR_swapon
__NR_swapon,
#endif
__NR_quotactl,
#ifdef __NR_truncate
__NR_truncate,
#endif
#ifdef __NR_truncate64
__NR_truncate64,
#endif
#ifdef __NR_bind
__NR_bind,		/* bind can affect fs object only in one way... */
#endif
Tue Jul 19 12:40:49 PDT 2016
Fri Jul 22 15:51:07 PDT 2016
Sun, Jul 24, 2016  2:51:39 PM
Mon, Jul 25, 2016  9:26:44 PM
