/* 
 * Copyright (C) 2000 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __KERN_H__
#define __KERN_H__

/* These are all user-mode things which are convenient to call directly
 * from kernel code and for which writing a wrapper is too much of a pain.
 * The regular include files can't be included because this file is included
 * only into kernel code, and user-space includes conflict with kernel
 * includes.
 */

extern int printf(const char *fmt, ...);
extern void *sbrk(int increment);
extern int pause(void);
extern void exit(int);

#endif

Tue Jul 19 12:39:57 PDT 2016
Fri Jul 22 15:49:27 PDT 2016
Sun, Jul 24, 2016  2:39:20 PM
Mon, Jul 25, 2016  9:12:52 PM
