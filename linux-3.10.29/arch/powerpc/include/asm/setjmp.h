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
Tue Jul 19 12:53:33 PDT 2016
Fri Jul 22 16:14:59 PDT 2016
Sun, Jul 24, 2016  5:52:49 PM
Tue, Jul 26, 2016 12:48:06 AM
