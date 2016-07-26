/* 
 * Copyright (C) 2000 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

typedef long syscall_handler_t(unsigned long arg1, unsigned long arg2,
			       unsigned long arg3, unsigned long arg4,
			       unsigned long arg5, unsigned long arg6);

#define EXECUTE_SYSCALL(syscall, regs) \
        (*sys_call_table[syscall])(UM_SYSCALL_ARG1(&regs), \
			           UM_SYSCALL_ARG2(&regs), \
				   UM_SYSCALL_ARG3(&regs), \
				   UM_SYSCALL_ARG4(&regs), \
				   UM_SYSCALL_ARG5(&regs), \
				   UM_SYSCALL_ARG6(&regs))

extern syscall_handler_t sys_mincore;
extern syscall_handler_t sys_madvise;

/* old_mmap needs the correct prototype since syscall_kern.c includes
 * this file.
 */
int old_mmap(unsigned long addr, unsigned long len,
	     unsigned long prot, unsigned long flags,
	     unsigned long fd, unsigned long offset);

#define ARCH_SYSCALLS \
	[ __NR_modify_ldt ] = sys_ni_syscall, \
	[ __NR_pciconfig_read ] = sys_ni_syscall, \
	[ __NR_pciconfig_write ] = sys_ni_syscall, \
	[ __NR_pciconfig_iobase ] = sys_ni_syscall, \
	[ __NR_pivot_root ] = sys_ni_syscall, \
	[ __NR_multiplexer ] = sys_ni_syscall, \
	[ __NR_mmap ] = old_mmap, \
	[ __NR_madvise ] = sys_madvise, \
	[ __NR_mincore ] = sys_mincore, \
	[ __NR_iopl ] = (syscall_handler_t *) sys_ni_syscall, \
	[ __NR_utimes ] = (syscall_handler_t *) sys_utimes, \
	[ __NR_fadvise64 ] = (syscall_handler_t *) sys_fadvise64,

#define LAST_ARCH_SYSCALL __NR_fadvise64

Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:01 PDT 2016
Sun, Jul 24, 2016  1:23:15 PM
Mon, Jul 25, 2016  6:32:05 PM
Mon, Jul 25, 2016  7:45:07 PM
Tue, Jul 26, 2016  2:20:42 PM
