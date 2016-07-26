/* 
 * Copyright (C) 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __SIGIO_H__
#define __SIGIO_H__

extern int write_sigio_irq(int fd);
extern int register_sigio_fd(int fd);
extern void sigio_lock(void);
extern void sigio_unlock(void);

#endif
Tue Jul 19 12:47:48 PDT 2016
Fri Jul 22 16:03:56 PDT 2016
Sun, Jul 24, 2016  4:29:59 PM
Mon, Jul 25, 2016 11:16:28 PM
