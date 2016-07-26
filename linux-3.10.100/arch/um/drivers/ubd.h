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

Tue Jul 19 12:39:57 PDT 2016
Fri Jul 22 15:49:27 PDT 2016
Sun, Jul 24, 2016  2:39:19 PM
Mon, Jul 25, 2016  9:12:51 PM
