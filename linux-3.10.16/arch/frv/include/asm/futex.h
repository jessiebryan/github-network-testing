#ifndef _ASM_FUTEX_H
#define _ASM_FUTEX_H

#ifdef __KERNEL__

#include <linux/futex.h>
#include <asm/errno.h>
#include <asm/uaccess.h>

extern int futex_atomic_op_inuser(int encoded_op, u32 __user *uaddr);

static inline int
futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
			      u32 oldval, u32 newval)
{
	return -ENOSYS;
}

#endif
#endif
Tue Jul 19 12:45:08 PDT 2016
Fri Jul 22 15:58:55 PDT 2016
Sun, Jul 24, 2016  3:50:55 PM
Mon, Jul 25, 2016 10:33:02 PM
