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
Tue Jul 19 12:53:11 PDT 2016
Fri Jul 22 16:14:15 PDT 2016
Sun, Jul 24, 2016  5:47:24 PM
Tue, Jul 26, 2016 12:42:05 AM
