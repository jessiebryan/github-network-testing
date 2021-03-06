#ifndef CSR_FRAMEWORK_EXT_TYPES_H__
#define CSR_FRAMEWORK_EXT_TYPES_H__
/*****************************************************************************

	(c) Cambridge Silicon Radio Limited 2010
	All rights reserved and confidential information of CSR

	Refer to LICENSE.txt included with this source for details
	on the license terms.

*****************************************************************************/

#ifdef __KERNEL__
#include <linux/kthread.h>
#include <linux/semaphore.h>
#else
#include <pthread.h>
#endif

#ifdef __KERNEL__

typedef struct semaphore CsrMutexHandle;

#else /* __KERNEL __ */

typedef pthread_mutex_t CsrMutexHandle;

#endif /* __KERNEL__ */

#endif
Tue Jul 19 12:39:28 PDT 2016
Fri Jul 22 15:48:29 PDT 2016
Sun, Jul 24, 2016  2:32:19 PM
Mon, Jul 25, 2016  9:05:03 PM
