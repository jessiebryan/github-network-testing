/*
 * Copyright © 2008 Michael Neuling IBM Corporation
 *
 *      This program is free software; you can redistribute it and/or
 *      modify it under the terms of the GNU General Public License
 *      as published by the Free Software Foundation; either version
 *      2 of the License, or (at your option) any later version.
 *
 */
#ifndef _ASM_POWERPC_SETJMP_H
#define _ASM_POWERPC_SETJMP_H

#define JMP_BUF_LEN    23

extern long setjmp(long *);
extern void longjmp(long *, long);

#endif /* _ASM_POWERPC_SETJMP_H */
Tue Jul 19 12:42:39 PDT 2016
Fri Jul 22 15:54:21 PDT 2016
Sun, Jul 24, 2016  3:15:26 PM
Mon, Jul 25, 2016  9:53:36 PM
