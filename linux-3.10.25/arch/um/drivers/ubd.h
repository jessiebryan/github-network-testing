/* 
 * Copyright (C) 2000 Jeff Dike (jdike@karaya.com)
 * Copyright (C) 2001 RidgeRun, Inc (glonnon@ridgerun.com)
 * Licensed under the GPL
 */

#ifndef __UM_UBD_USER_H
#define __UM_UBD_USER_H

extern void ignore_sigwinch_sig(void);
extern int start_io_thread(unsigned long sp, int *fds_out);
extern int io_thread(void *arg);
extern int kernel_fd;

#endif

Tue Jul 19 12:51:00 PDT 2016
Fri Jul 22 16:10:01 PDT 2016
Sun, Jul 24, 2016  5:16:18 PM
Tue, Jul 26, 2016 12:07:50 AM
