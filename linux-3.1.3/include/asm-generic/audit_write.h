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
Tue Jul 19 12:35:20 PDT 2016
Fri Jul 22 15:40:31 PDT 2016
Sun, Jul 24, 2016  1:34:14 PM
Mon, Jul 25, 2016  7:58:01 PM
Tue, Jul 26, 2016  2:32:49 PM
