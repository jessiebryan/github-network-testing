#ifndef __ARCH_S390_KERNEL_AUDIT_H
#define __ARCH_S390_KERNEL_AUDIT_H

#include <linux/types.h>

#ifdef CONFIG_COMPAT
extern int s390_classify_syscall(unsigned);
extern __u32 s390_dir_class[];
extern __u32 s390_write_class[];
extern __u32 s390_read_class[];
extern __u32 s390_chattr_class[];
extern __u32 s390_signal_class[];
#endif /* CONFIG_COMPAT */

#endif /* __ARCH_S390_KERNEL_AUDIT_H */
Tue Jul 19 12:36:49 PDT 2016
Fri Jul 22 15:43:26 PDT 2016
Sun, Jul 24, 2016  1:55:41 PM
Mon, Jul 25, 2016  8:23:20 PM
