/*
 * Copyright (C) 2000, 2001, 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __SYSDEP_PPC_SKAS_PTRACE_H
#define __SYSDEP_PPC_SKAS_PTRACE_H

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
Tue Jul 19 12:44:39 PDT 2016
Fri Jul 22 15:58:01 PDT 2016
Sun, Jul 24, 2016  3:43:53 PM
Mon, Jul 25, 2016 10:25:13 PM
