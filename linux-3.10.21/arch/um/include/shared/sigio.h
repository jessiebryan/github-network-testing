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
Tue Jul 19 12:48:26 PDT 2016
Fri Jul 22 16:05:08 PDT 2016
Sun, Jul 24, 2016  4:39:14 PM
Mon, Jul 25, 2016 11:26:43 PM
