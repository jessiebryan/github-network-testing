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
Tue Jul 19 12:53:36 PDT 2016
Fri Jul 22 16:15:05 PDT 2016
Sun, Jul 24, 2016  5:53:36 PM
Tue, Jul 26, 2016 12:48:58 AM
