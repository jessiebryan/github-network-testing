/*
 * Copyright (C) 2004 PathScale, Inc
 * Licensed under the GPL
 */

#ifndef __REGISTERS_H
#define __REGISTERS_H

#include "sysdep/ptrace.h"
#include "sysdep/archsetjmp.h"

extern int save_fp_registers(int pid, unsigned long *fp_regs);
extern int restore_fp_registers(int pid, unsigned long *fp_regs);
extern int save_fpx_registers(int pid, unsigned long *fp_regs);
extern int restore_fpx_registers(int pid, unsigned long *fp_regs);
extern int save_registers(int pid, struct uml_pt_regs *regs);
extern int restore_registers(int pid, struct uml_pt_regs *regs);
extern int init_registers(int pid);
extern void get_safe_registers(unsigned long *regs, unsigned long *fp_regs);
extern unsigned long get_thread_reg(int reg, jmp_buf *buf);
extern int get_fp_registers(int pid, unsigned long *regs);
extern int put_fp_registers(int pid, unsigned long *regs);

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:14:58 PM
Mon, Jul 25, 2016  6:22:10 PM
Mon, Jul 25, 2016  7:35:23 PM
Tue, Jul 26, 2016  2:11:24 PM
