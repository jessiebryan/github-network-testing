#ifndef _ASM_X86_VSYSCALL_H
#define _ASM_X86_VSYSCALL_H

enum vsyscall_num {
	__NR_vgettimeofday,
	__NR_vtime,
	__NR_vgetcpu,
};

#define VSYSCALL_START (-10UL << 20)
#define VSYSCALL_SIZE 1024
#define VSYSCALL_END (-2UL << 20)
#define VSYSCALL_MAPPED_PAGES 1
#define VSYSCALL_ADDR(vsyscall_nr) (VSYSCALL_START+VSYSCALL_SIZE*(vsyscall_nr))

#ifdef __KERNEL__
#include <linux/seqlock.h>

#define VGETCPU_RDTSCP	1
#define VGETCPU_LSL	2

/* kernel space (writeable) */
extern int vgetcpu_mode;
extern struct timezone sys_tz;

#include <asm/vvar.h>

extern void map_vsyscall(void);

/*
 * Called on instruction fetch fault in vsyscall page.
 * Returns true if handled.
 */
extern bool emulate_vsyscall(struct pt_regs *regs, unsigned long address);

#endif /* __KERNEL__ */

#endif /* _ASM_X86_VSYSCALL_H */
Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:02 PDT 2016
Sun, Jul 24, 2016  1:23:30 PM
Mon, Jul 25, 2016  6:32:24 PM
Mon, Jul 25, 2016  7:45:24 PM
Tue, Jul 26, 2016  2:20:58 PM
