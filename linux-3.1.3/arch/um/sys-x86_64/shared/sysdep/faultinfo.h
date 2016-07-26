/*
 * Copyright (C) 2004 Fujitsu Siemens Computers GmbH
 * Author: Bodo Stroesser <bstroesser@fujitsu-siemens.com>
 * Licensed under the GPL
 */

#ifndef __FAULTINFO_X86_64_H
#define __FAULTINFO_X86_64_H

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

#define PTRACE_FULL_FAULTINFO 1

#endif
Tue Jul 19 12:35:09 PDT 2016
Fri Jul 22 15:40:09 PDT 2016
Sun, Jul 24, 2016  1:31:31 PM
Mon, Jul 25, 2016  7:54:48 PM
Tue, Jul 26, 2016  2:29:50 PM
