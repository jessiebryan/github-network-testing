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
Tue Jul 19 12:44:53 PDT 2016
Fri Jul 22 15:58:25 PDT 2016
Sun, Jul 24, 2016  3:46:59 PM
Mon, Jul 25, 2016 10:28:38 PM
