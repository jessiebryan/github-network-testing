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
Tue Jul 19 12:47:22 PDT 2016
Fri Jul 22 16:03:09 PDT 2016
Sun, Jul 24, 2016  4:23:52 PM
Mon, Jul 25, 2016 11:09:39 PM
