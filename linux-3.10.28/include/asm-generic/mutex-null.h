/*
 * include/asm-generic/mutex-null.h
 *
 * Generic implementation of the mutex fastpath, based on NOP :-)
 *
 * This is used by the mutex-debugging infrastructure, but it can also
 * be used by architectures that (for whatever reason) want to use the
 * spinlock based slowpath.
 */
#ifndef _ASM_GENERIC_MUTEX_NULL_H
#define _ASM_GENERIC_MUTEX_NULL_H

#define __mutex_fastpath_lock(count, fail_fn)		fail_fn(count)
#define __mutex_fastpath_lock_retval(count, fail_fn)	fail_fn(count)
#define __mutex_fastpath_unlock(count, fail_fn)		fail_fn(count)
#define __mutex_fastpath_trylock(count, fail_fn)	fail_fn(count)
#define __mutex_slowpath_needs_to_unlock()		1

#endif
Tue Jul 19 12:53:11 PDT 2016
Fri Jul 22 16:14:16 PDT 2016
Sun, Jul 24, 2016  5:47:27 PM
Tue, Jul 26, 2016 12:42:09 AM
