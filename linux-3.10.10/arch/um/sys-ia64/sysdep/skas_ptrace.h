/*
 * Copyright (C) 2000, 2001, 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __SYSDEP_IA64_SKAS_PTRACE_H
#define __SYSDEP_IA64_SKAS_PTRACE_H

struct ptrace_faultinfo {
        int is_write;
        unsigned long addr;
};

struct ptrace_ldt {
        int func;
        void *ptr;
        unsigned long bytecount;
};

#define PTRACE_LDT 54

#endif
Tue Jul 19 12:39:18 PDT 2016
Fri Jul 22 15:48:10 PDT 2016
Sun, Jul 24, 2016  2:30:08 PM
Mon, Jul 25, 2016  9:02:39 PM
