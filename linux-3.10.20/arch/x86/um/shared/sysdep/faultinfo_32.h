/*
 * Copyright (C) 2004 Fujitsu Siemens Computers GmbH
 * Author: Bodo Stroesser <bstroesser@fujitsu-siemens.com>
 * Licensed under the GPL
 */

#ifndef __FAULTINFO_I386_H
#define __FAULTINFO_I386_H

/* this structure contains the full arch-specific faultinfo
 * from the traps.
 * On i386, ptrace_faultinfo unfortunately doesn't provide
 * all the info, since trap_no is missing.
 * All common elements are defined at the same position in
 * both structures, thus making it easy to copy the
 * contents without knowledge about the structure elements.
 */
struct faultinfo {
        int error_code; /* in ptrace_faultinfo misleadingly called is_write */
        unsigned long cr2; /* in ptrace_faultinfo called addr */
        int trap_no; /* missing in ptrace_faultinfo */
};

#define FAULT_WRITE(fi) ((fi).error_code & 2)
#define FAULT_ADDRESS(fi) ((fi).cr2)

/* This is Page Fault */
#define SEGV_IS_FIXABLE(fi)	((fi)->trap_no == 14)

/* SKAS3 has no trap_no on i386, but get_skas_faultinfo() sets it to 0. */
#define SEGV_MAYBE_FIXABLE(fi)	((fi)->trap_no == 0 && ptrace_faultinfo)

#define PTRACE_FULL_FAULTINFO 0

#endif
Tue Jul 19 12:47:49 PDT 2016
Fri Jul 22 16:03:59 PDT 2016
Sun, Jul 24, 2016  4:30:19 PM
Mon, Jul 25, 2016 11:16:50 PM
