/*
 * Copyright (C) 2000 - 2007 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __SYSDEP_I386_PTRACE_H
#define __SYSDEP_I386_PTRACE_H

#define MAX_FP_NR HOST_FPX_SIZE

static inline void update_debugregs(int seq) {}

/* syscall emulation path in ptrace */

#ifndef PTRACE_SYSEMU
#define PTRACE_SYSEMU 31
#endif

void set_using_sysemu(int value);
int get_using_sysemu(void);
extern int sysemu_supported;

#ifndef PTRACE_SYSEMU_SINGLESTEP
#define PTRACE_SYSEMU_SINGLESTEP 32
#endif

#define UPT_SYSCALL_ARG1(r) UPT_BX(r)
#define UPT_SYSCALL_ARG2(r) UPT_CX(r)
#define UPT_SYSCALL_ARG3(r) UPT_DX(r)
#define UPT_SYSCALL_ARG4(r) UPT_SI(r)
#define UPT_SYSCALL_ARG5(r) UPT_DI(r)
#define UPT_SYSCALL_ARG6(r) UPT_BP(r)

extern void arch_init_registers(int pid);

#endif
Tue Jul 19 12:49:05 PDT 2016
Fri Jul 22 16:06:24 PDT 2016
Sun, Jul 24, 2016  4:48:47 PM
Mon, Jul 25, 2016 11:37:23 PM
