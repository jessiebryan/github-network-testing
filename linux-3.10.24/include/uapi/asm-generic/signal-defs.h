#ifndef __ASM_GENERIC_SIGNAL_DEFS_H
#define __ASM_GENERIC_SIGNAL_DEFS_H

#include <linux/compiler.h>

#ifndef SIG_BLOCK
#define SIG_BLOCK          0	/* for blocking signals */
#endif
#ifndef SIG_UNBLOCK
#define SIG_UNBLOCK        1	/* for unblocking signals */
#endif
#ifndef SIG_SETMASK
#define SIG_SETMASK        2	/* for setting the signal mask */
#endif

#ifndef __ASSEMBLY__
typedef void __signalfn_t(int);
typedef __signalfn_t __user *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t __user *__sigrestore_t;

#define SIG_DFL	((__force __sighandler_t)0)	/* default signal handling */
#define SIG_IGN	((__force __sighandler_t)1)	/* ignore signal */
#define SIG_ERR	((__force __sighandler_t)-1)	/* error return from signal */
#endif

#endif /* __ASM_GENERIC_SIGNAL_DEFS_H */
Tue Jul 19 12:50:41 PDT 2016
Fri Jul 22 16:09:24 PDT 2016
Sun, Jul 24, 2016  5:11:46 PM
Tue, Jul 26, 2016 12:02:47 AM
