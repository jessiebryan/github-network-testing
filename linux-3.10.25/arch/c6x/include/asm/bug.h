/*
 *  Port on Texas Instruments TMS320C6x architecture
 *
 *  Copyright (C) 2004, 2009, 2010, 2011 Texas Instruments Incorporated
 *  Author: Aurelien Jacquiot (aurelien.jacquiot@jaluna.com)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */
#ifndef _ASM_C6X_BUG_H
#define _ASM_C6X_BUG_H

#include <linux/linkage.h>
#include <asm-generic/bug.h>

struct pt_regs;

extern void die(char *str, struct pt_regs *fp, int nr);
extern asmlinkage int process_exception(struct pt_regs *regs);
extern asmlinkage void enable_exception(void);

#endif /* _ASM_C6X_BUG_H */
Tue Jul 19 12:50:50 PDT 2016
Fri Jul 22 16:09:41 PDT 2016
Sun, Jul 24, 2016  5:13:53 PM
Tue, Jul 26, 2016 12:05:07 AM
