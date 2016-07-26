/* 
 * Copyright (C) 2000 - 2008 Jeff Dike (jdike@{addtoit,linux.intel}.com)
 * Licensed under the GPL
 */

#ifndef __PROCESS_H__
#define __PROCESS_H__

#include <signal.h>

/* Copied from linux/compiler-gcc.h since we can't include it directly */
#define barrier() __asm__ __volatile__("": : :"memory")

extern void sig_handler(int sig, struct sigcontext *sc);
extern void alarm_handler(int sig, struct sigcontext *sc);

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:14:58 PM
Mon, Jul 25, 2016  6:22:10 PM
Mon, Jul 25, 2016  7:35:23 PM
