/* 
 * Copyright (C) 2000 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __SYSDEP_IA64_PTRACE_H
#define __SYSDEP_IA64_PTRACE_H

struct sys_pt_regs {
  int foo;
};

#define EMPTY_REGS { 0 }

#endif

Tue Jul 19 12:49:43 PDT 2016
