/*
 *    Copyright IBM Corp. 2007
 *
 */

#ifndef __ARCH_S390_LIB_UACCESS_H
#define __ARCH_S390_LIB_UACCESS_H

extern size_t copy_from_user_std(size_t, const void __user *, void *);
extern size_t copy_to_user_std(size_t, void __user *, const void *);
extern size_t strnlen_user_std(size_t, const char __user *);
extern size_t strncpy_from_user_std(size_t, const char __user *, char *);
extern int futex_atomic_cmpxchg_std(u32 *, u32 __user *, u32, u32);
extern int futex_atomic_op_std(int, u32 __user *, int, int *);

extern size_t copy_from_user_pt(size_t, const void __user *, void *);
extern size_t copy_to_user_pt(size_t, void __user *, const void *);
extern int futex_atomic_op_pt(int, u32 __user *, int, int *);
extern int futex_atomic_cmpxchg_pt(u32 *, u32 __user *, u32, u32);

#endif /* __ARCH_S390_LIB_UACCESS_H */
Tue Jul 19 12:39:16 PDT 2016
Fri Jul 22 15:48:05 PDT 2016
Sun, Jul 24, 2016  2:29:36 PM
Mon, Jul 25, 2016  9:02:02 PM
